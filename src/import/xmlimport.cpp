//
//  xmlimport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <string>
#include <vector>
#include <stdio.h>

#include "xmlimport_impl.h"
 
#include "xmlimport.h"
#include "meidocument.h"
#include "meixml.h"

#include <iostream>

using std::string;
using std::vector;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlImport;
using mei::XmlImportImpl;
using mei::XmlInstructions;
using mei::XmlProcessingInstruction;

XmlImport::XmlImport() : impl(new XmlImportImpl) {
}

XmlImport::~XmlImport() {
    delete impl;
}

MeiDocument* XmlImport::documentFromFile(string filename) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromFile(filename);
    delete import;
    return d;
}

MeiDocument* XmlImport::documentFromFile(std::string filename, XmlInstructions &inst) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromFile(filename);
    inst = import->impl->pi;
    
    delete import;
    return d;
    
}

MeiDocument* XmlImport::documentFromText(string text) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromText(text);
    delete import;
    return d;
}

/* This was commented for the pugixml experiment
MeiDocument* XmlImport::documentFromText(string text, XmlInstructions &inst) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromText(text);
    inst = import->impl->pi;
    
    delete import;
    return d;
}
*/

XmlImportImpl::XmlImportImpl() {
    xmlMeiDocument.reset();
    meiDocument = NULL;
    rootMeiElement = NULL;
}

MeiDocument* XmlImportImpl::documentFromFile(string filename) {
    pugi::xml_parse_result result = this->xmlMeiDocument.load_file( filename.c_str() );
    if (!result)
    {
        throw MalformedFileException(filename);
    }
    
    /* This was commented for the pugixml experiment
    xmlNodePtr child = doc->children;
    while (child != NULL) {
        if (child->type == XML_PI_NODE) {
            XmlProcessingInstruction *xpi = new XmlProcessingInstruction((const char*)child->name, (const char*)child->content);
            this->pi.push_back(xpi);            
        }
        child = child->next;
    }
    */
    
    this->rootXmlNode = this->xmlMeiDocument.first_child();

    if (this->checkCompatibility(this->rootXmlNode)) {
        this->init();
        return this->getMeiDocument();
    }
    return NULL;
}

MeiDocument* XmlImportImpl::documentFromText(string text) {
    
    pugi::xml_parse_result result = this->xmlMeiDocument.load( text.c_str() );
    if (!result)
    {
        throw MalformedFileException("[input text]");
    }
    
    /* This was commented for the pugixml experiment
     xmlNodePtr child = doc->children;
     while (child != NULL) {
     if (child->type == XML_PI_NODE) {
     XmlProcessingInstruction *xpi = new XmlProcessingInstruction((const char*)child->name, (const char*)child->content);
     this->pi.push_back(xpi);
     }
     child = child->next;
     }
     */
    
    this->rootXmlNode = this->xmlMeiDocument.first_child();
    
    if (this->checkCompatibility(this->rootXmlNode)) {
        this->init();
        return this->getMeiDocument();
    }
    return NULL;
}

void XmlImportImpl::init() {
    // get mei version from document
    string meiVersion = string(this->rootXmlNode.attribute("meiversion").value());
    
    MeiDocument *doc = new MeiDocument(meiVersion);
    this->meiDocument = doc;

    this->rootMeiElement = this->xmlNodeToMeiElement(this->rootXmlNode);
    doc->setRootElement(this->rootMeiElement);
}

mei::XmlImportImpl::~XmlImportImpl() {
}

MeiDocument* XmlImportImpl::getMeiDocument() {
    return this->meiDocument;
}

bool find_namespace_declaration_attributes(pugi::xml_attribute attr) {
    // xmlid is a special case, so ignore it.
    if (strcmp(attr.name(), "xml:id") == 0) return false;

    string attrname = string(attr.name());
    if (attrname.find("xmlns:") != std::string::npos) {
        return true;
    } else {
        return false;
    }
}

MeiElement* XmlImportImpl::xmlNodeToMeiElement(pugi::xml_node el) {
    string id = "";
    vector<MeiAttribute*> attributes;
    
    // Check to see if any namespaces are declared on this element and, if so, register them on the document.
    pugi::xml_attribute xmlns = el.find_attribute(find_namespace_declaration_attributes);
    if (xmlns) {
        // at least one namespace declaration attribute was found on this element. Register all the namespaces on this element now
        this->registerNamespaces(el);
    }
    
    // XML attributes and children. Text nodes will never have these.
    for (pugi::xml_attribute attr = el.first_attribute(); attr; attr = attr.next_attribute()) {
        if (strcmp(attr.name(), "xml:id") == 0) {
            /* we store the ID on the element, not as an attribute. This will be serialized out
             *   on export
             */
            id = string(attr.value());
        } else {
            string attrname = string(attr.name());
            string attrvalue = string(attr.value());
            MeiAttribute *a = NULL;

            // if there is a colon in the attribute name, it's namespaced. NB: We've removed
            // the "xmlns:" attributes from the element when we registered them, so we shouldn't
            // need to deal with them specifically.
            size_t prefixIdx = attrname.find(":");

            if (prefixIdx != std::string::npos) {
                string pfx = attrname.substr(0, prefixIdx);
                MeiNamespace *ns = this->meiDocument->getNamespaceByPrefix(pfx);
                a = new MeiAttribute(ns, attrname, attrvalue);
            } else {
                a = new MeiAttribute(attrname, attrvalue);
            }
            
            attributes.push_back(a);
        }
    }
    MeiElement *obj = MeiFactory::createInstance((const char*)el.name(), id);
    obj->setAttributes(attributes);

    for (pugi::xml_node child = el.first_child(); child; child = child.next_sibling()) {
        if (!child.text()) {
            MeiElement* ch = xmlNodeToMeiElement(child);
            obj->addChild(ch);
        }
        /* This was commented for the pugixml experiment
        } else if (child->type == XML_TEXT_NODE) {
            if (lastElement) {
                const char *content = (const char*)child->content;
                if (content) {
                    lastElement->setTail(content);
                }
            } else {
                const char *content = (const char*)child->content;
                if (content) {
                    obj->setValue(content);
                }
            }
        } else if (child->type == XML_COMMENT_NODE) {
            MeiElement *comment = new MeiCommentNode();
            comment->setValue(string((const char*)child->content));
            obj->addChild(comment);

        }
        */
    }
    return obj;
}

bool XmlImportImpl::checkCompatibility(pugi::xml_node r) throw(NoVersionFoundException, VersionMismatchException) {
    if (!r.attribute("meiversion")) {
        throw NoVersionFoundException("");
    } else if (MEI_VERSION.find(string(r.attribute("meiversion").value())) == MEI_VERSION.end()) {
        throw VersionMismatchException(string(r.attribute("meiversion").value()));
    } else {
        return true;
    }
}

/*
    Register all namespaces declared on an attribute. This must be done prior to actually
    creating the attributes, since it is valid to have the declaration out-of-order, e.g.,:
    
    <mei xlink:href="http://www.foo.com" xmlns:xlink="http://www.w3.org/1999/xlink">
 
    in which case the namespaced attribute (xlink) will be parsed *before* the namespace is declared
    which will lead to all kinds of funny business.
*/
void XmlImportImpl::registerNamespaces(pugi::xml_node el) {
    for (pugi::xml_attribute attr = el.first_attribute(); attr; attr = attr.next_attribute()) {
        string attrname = string(attr.name());
        string attrvalue = string(attr.value());
        size_t prefixIdx = attrname.find("xmlns:");

        if (prefixIdx != std::string::npos) {
            // the namespace abbreviation is from the end of 'xmlns:' to the end of the string, so start at
            // idx 6.
            string namespaceAbbrev = attrname.substr(6);
            MeiNamespace *ns = new MeiNamespace(namespaceAbbrev, attrvalue);
            this->meiDocument->addNamespace(ns);
            
            // remove the namespace declaration attribute from the element so that we don't have to parse it again.
            el.remove_attribute(attr);
        }

    }
}
