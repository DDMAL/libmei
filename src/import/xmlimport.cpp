#include <string>
#include <vector>
#include <iostream>

#include "xmlimport.h"
#include "meidocument.h"
#include "meiattribute.h"

using std::string;
using std::vector;
using std::shared_ptr;

//using mei::XMLImport;
using mei::MeiDocument;
using mei::MeiCommentNode;
using mei::MeiAttribute;
using mei::MeiElement;
using mei::XMLImportResult;
using mei::XMLProcessingInstructions;
using mei::ImportWarnings;

static int LIBMEI_PXML_IMPORT_OPTIONS = pugi::parse_pi | pugi::parse_comments;
static MeiElement* XMLNodeToMEIElement(pugi::xml_node *el, bool strict, ImportWarnings *warn);
static XMLImportResult parseMEIXML(shared_ptr<pugi::xml_document> xmldoc, bool strict);
static XMLProcessingInstructions extractProcessingInstructions(shared_ptr<pugi::xml_document> xmldoc);


XMLImportResult mei::documentFromText(string text, bool strict)
{
    shared_ptr<pugi::xml_document> xdoc = std::make_shared<pugi::xml_document>();
    pugi::xml_parse_result result = xdoc->load_string(text.c_str(), LIBMEI_PXML_IMPORT_OPTIONS);
    
    if (result.status != pugi::status_ok)
    {
        throw MeiException("There was a problem reading the input text. The XML Parser returned: " + string(result.description()));
    }
    
    XMLImportResult res = parseMEIXML(xdoc, strict);

    return res;
}

// helper function for the strict parser (default)
XMLImportResult mei::documentFromText(string text)
{
    return mei::documentFromText(text, true);
}

XMLImportResult mei::documentFromFile(string filename, bool strict)
{
    shared_ptr<pugi::xml_document> xdoc = std::make_shared<pugi::xml_document>();
    pugi::xml_parse_result result = xdoc->load_file(filename.c_str(), LIBMEI_PXML_IMPORT_OPTIONS);
    
    if (result.status != pugi::status_ok)
    {
        throw MeiException("There was a problem reading " + filename + ". The XML Parser returned " + string(result.description()));
    }
    
    XMLImportResult res = parseMEIXML(xdoc, strict);

    return res;
}

XMLImportResult mei::documentFromFile(string filename)
{
    return mei::documentFromFile(filename, true);
}

// private implementations
static XMLProcessingInstructions extractProcessingInstructions(shared_ptr<pugi::xml_document> xmldoc)
{
    XMLProcessingInstructions inst;
    for (pugi::xml_node_iterator it = xmldoc->begin(); it != xmldoc->end(); ++it)
    {
        // store the name/value as a single string. When this is exported in xmlexport, the
        // exporter will add the opening/closing tags.
        if (it->type() == pugi::node_pi)
        {
            inst.push_back(string(it->name()) + " " + string(it->value()));
        }
    }

    return inst;
}

static XMLImportResult parseMEIXML(shared_ptr<pugi::xml_document> xmldoc, bool strict)
{
    pugi::xml_node rootXMLNode = xmldoc->document_element();
    string meiversion = string(rootXMLNode.attribute("meiversion").value());
    
    XMLProcessingInstructions inst = extractProcessingInstructions(xmldoc);
    ImportWarnings warn;
    
    string meiVersion = string(rootXMLNode.attribute("meiversion").value());
    
    if (meiVersion == "" && strict)
    {
        throw mei::NoVersionFoundException("No declared MEI Version");
    }
    else if (meiVersion == "" && !strict)
    {
        string warningString = "Warning: A 'meiversion' declaration was not found on this document.";
        warn.push_back(warningString);
    }
    
    MeiDocument *doc = new MeiDocument(meiversion);
    MeiElement *rootMEIElement = XMLNodeToMEIElement(&rootXMLNode, strict, &warn);
    
    doc->setRootElement(rootMEIElement);
    
    XMLImportResult result;
    result.meiDocument = doc;
    result.xmlProcessingInstructions = inst;
    result.importWarnings = warn;
    result.importStatus = warn.size() > 0 ? mei::status_warnings : mei::status_ok;
    
    return result;
}

static MeiElement* XMLNodeToMEIElement(pugi::xml_node* el, bool strictparsing, ImportWarnings *warnings)
{
    string id = "";
    vector<MeiAttribute*> attributes;
    MeiElement *obj;
    
    if (el->attribute("xml:id").value() != NULL)
    {
        id = string(el->attribute("xml:id").value());
        // remove it so we don't have to deal with it later.
        el->remove_attribute("xml:id");
    }
    
    try
    {
        obj = mei::MeiFactory::createInstance((const char*)el->name(), id);
    }
    catch (mei::ElementNotRegisteredException)
    {
        if (strictparsing)
        {
            // if we get the exception and we're not in strict mode, pass it through
            throw;
        }
        else
        {
            string warningString = "Warning: An element (" + string(el->name()) + ", id: " + id + ") was not found in the registry. Adding it to the document because the document is being loaded in lax mode.";
            warnings->push_back(warningString);
            obj = new MeiElement(string(el->name()));
            obj->setId(id);
        }
    }
    
    // XML attributes. Text nodes will never have these.
    for (pugi::xml_attribute attr = el->first_attribute(); attr; attr = attr.next_attribute())
    {
        string attrname = string(attr.name());
        string attrvalue = string(attr.value());
        MeiAttribute *a = new MeiAttribute(attrname, attrvalue);
        attributes.push_back(a);
    }
    obj->setAttributes(attributes);
    
    MeiElement *lastElement = NULL;
    
    for (pugi::xml_node child = el->first_child(); child; child = child.next_sibling())
    {
        if (child.type() == pugi::node_element)
        {
            MeiElement *ch = XMLNodeToMEIElement(&child, strictparsing, warnings);
            obj->addChild(ch);
            lastElement = ch;
        }
        else if (child.type() == pugi::node_pcdata)
        {
            // text content for elements are stored in value/tail
            string content = string(child.value());
            
            if (lastElement)
            {
                lastElement->setTail(content);
            }
            else
            {
                obj->setValue(content);
            }
        }
        else if (child.type() == pugi::node_comment)
        {
            MeiElement *comment = new MeiCommentNode();
            string c = string(child.value());
            comment->setValue(c);
            obj->addChild(comment);
        }
    }
    return obj;
}

XMLImportResult::XMLImportResult()
{
}

XMLImportResult::~XMLImportResult()
{
}

ImportWarnings XMLImportResult::getImportWarnings()
{
    return this->importWarnings;
}

XMLProcessingInstructions XMLImportResult::getXMLProcessingInstructions()
{
    return this->xmlProcessingInstructions;
}

MeiDocument* XMLImportResult::getMeiDocument()
{
    return this->meiDocument;
}

int XMLImportResult::getImportStatus()
{
    return this->importStatus;
}