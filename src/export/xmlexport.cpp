//
//  xmlexport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 2015-04-16.
//
//

#include <string>
#include <vector>
#include <memory>

#include "xmlexport.h"
#include "meielement.h"
#include "meiattribute.h"
#include "exceptions.h"
#include "pugixml.hpp"

using mei::MeiElement;
using mei::MeiAttribute;
using mei::MeiDocument;
using mei::FileWriteFailureException;
using mei::DocumentRootNotSetException;

using std::string;
using std::vector;
using std::shared_ptr;

static int LIBMEI_PXML_EXPORT_OPTIONS = pugi::format_default;
void MEIElementToXMLNode(MeiElement *el, pugi::xml_node parentnode, bool isRoot);
shared_ptr<pugi::xml_document> exportMEIToXML(MeiDocument *doc, vector<string> instructions);
void addProcessingInstructions(shared_ptr<pugi::xml_document> xdoc, std::vector<std::string> processingInstructions);
void addCustomDeclaration(shared_ptr<pugi::xml_document> xdoc);

struct xml_string_writer: pugi::xml_writer {
    std::string result;
    virtual void write(const void* data, size_t size) {
        result += std::string(static_cast<const char*>(data), size);
    }
};

shared_ptr<pugi::xml_document> exportMEIToXML(MeiDocument *doc, vector<string> instructions)
{
    shared_ptr<pugi::xml_document> xdoc = std::make_shared<pugi::xml_document>();
    addCustomDeclaration(xdoc);
    addProcessingInstructions(xdoc, instructions);
    pugi::xml_node xroot = xdoc->append_child(doc->getRootElement()->getName().c_str());
    
    MEIElementToXMLNode(doc->getRootElement(), xroot, true);
    
    return xdoc;
}

void MEIElementToXMLNode(MeiElement *el, pugi::xml_node parentnode, bool isRoot) {
    pugi::xml_node curxmlnode;

    if (isRoot) {
        curxmlnode = parentnode;
    } else if (el->getName() == "_comment") {
        curxmlnode = parentnode.append_child(pugi::node_comment);
        curxmlnode.set_value(el->getValue().c_str());
    } else {
        curxmlnode = parentnode.append_child(pugi::node_element);
        curxmlnode.set_name(el->getName().c_str());
    }
    
    if (el->hasId()) {
        string idvalue = el->getId();
        pugi::xml_attribute idattrib = curxmlnode.append_attribute("xml:id");
        idattrib.set_value(idvalue.c_str());
    }
    
    // Add child for text node
    if (el->getValue() != "") {
        pugi::xml_node value = curxmlnode.append_child(pugi::node_pcdata);
        value.set_value(el->getValue().c_str());
    }
    
    vector<MeiAttribute*> ats = el->getAttributes();
    for (vector<MeiAttribute*>::iterator iter = ats.begin(); iter != ats.end(); ++iter) {
        string attrname = (*iter)->getName();
        string attrvalue = (*iter)->getValue();
        
        pugi::xml_attribute attrib = curxmlnode.append_attribute(attrname.c_str());
        attrib.set_value(attrvalue.c_str());
    }
    
    vector<MeiElement*> cn = el->getChildren();
    for (vector<MeiElement*>::iterator iter = cn.begin(); iter != cn.end(); ++iter) {
        if ((*iter)->getName() == "_comment") {
            pugi::xml_node comment = curxmlnode.append_child(pugi::node_comment);
            comment.set_value((*iter)->getValue().c_str());
        } else {
            MEIElementToXMLNode(*iter, curxmlnode, false);
        }
        
        if ((*iter)->getTail() != "") {
            pugi::xml_node tail = curxmlnode.append_child(pugi::node_pcdata);
            tail.set_value((*iter)->getTail().c_str());
        }
    }
}

void addProcessingInstructions(shared_ptr<pugi::xml_document> xdoc, vector<string> instructions)
{
    if (instructions.size() > 0)
    {
        for (vector<string>::iterator iter = instructions.begin(); iter != instructions.end(); ++iter)
        {
            pugi::xml_node pi = xdoc->append_child(pugi::node_pi);
            pi.set_name(iter->c_str());
        }
    }
}

void addCustomDeclaration(shared_ptr<pugi::xml_document> xdoc)
{
    pugi::xml_node decl = xdoc->append_child(pugi::node_declaration);
    decl.append_attribute("version") = "1.0";
    decl.append_attribute("encoding") = "UTF-8";
}

bool mei::documentToFile(MeiDocument *doc, string filename) throw (FileWriteFailureException, DocumentRootNotSetException)
{
    vector<string> pi;
    return documentToFile(doc, filename, pi);
}

bool mei::documentToFile(MeiDocument *doc, string filename, vector<string> instructions) throw (FileWriteFailureException, DocumentRootNotSetException)
{
    if (doc->getRootElement() == NULL)
    {
        throw DocumentRootNotSetException("The document root was not set. Without that, this document cannot be exported.");
    };
    
    shared_ptr<pugi::xml_document> xdoc = exportMEIToXML(doc, instructions);

    bool res = xdoc->save_file(filename.c_str(), "\t", LIBMEI_PXML_EXPORT_OPTIONS, pugi::encoding_utf8);
    
    if (!res)
    {
        throw FileWriteFailureException(filename);
    }

    return res;
}

string mei::elementToText(MeiElement *element)
{
    // you can't create a node without a pugixml document.
    shared_ptr<pugi::xml_document> xdoc = std::make_shared<pugi::xml_document>();
    pugi::xml_node xroot = xdoc->append_child(element->getName().c_str());

    MEIElementToXMLNode(element, xroot, true);

    xml_string_writer writer;
    xdoc->print(writer, "\t", LIBMEI_PXML_EXPORT_OPTIONS, pugi::encoding_utf8);

    return writer.result;
}

string mei::documentToText(MeiDocument *doc)
{
    vector<string> pi;
    return mei::documentToText(doc, pi);
}

string mei::documentToText(MeiDocument *doc, vector<string> instructions)
{
    if (doc->getRootElement() == NULL)
    {
        throw DocumentRootNotSetException("The document root was not set. Without that, this document cannot be exported.");
    };
    
    shared_ptr<pugi::xml_document> xdoc = exportMEIToXML(doc, instructions);
    
    xml_string_writer writer;
    xdoc->save(writer, "\t", LIBMEI_PXML_EXPORT_OPTIONS, pugi::encoding_utf8);
    
    return writer.result;
}

