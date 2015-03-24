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

/*
#include <libxml/xmlreader.h>
*/
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

MeiDocument* XmlImport::documentFromText(string text, XmlInstructions &inst) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromText(text);
    inst = import->impl->pi;
    
    delete import;
    return d;
}

XmlImportImpl::XmlImportImpl() {
    //rootXmlNode;
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
    
    /*
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
    
    /*
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

MeiElement* XmlImportImpl::xmlNodeToMeiElement(pugi::xml_node el) {
    string id = "";
    vector<MeiAttribute*> attributes;
    // XML attributes and children. Text nodes will never have these.
    for (pugi::xml_attribute attr = el.first_attribute(); attr; attr = attr.next_attribute()) {
        if (strcmp(attr.name(),"xml:id")==0) {
            /* we store the ID on the element, not as an attribute. This will be serialized out
             *   on export
             */
            id = string(attr.value());
        } else {
            string attrname = string(attr.name());
            // values are rendered as children of the attribute *facepalm*
            string attrvalue = string(attr.value());

            MeiNamespace* meins = NULL;
            /*
            if (curattr->ns) {
                if (!this->meiDocument->hasNamespace(string((const char*)curattr->ns->href))) {
                    string prefix = (const char*)curattr->ns->prefix;
                    string href = (const char*)curattr->ns->href;
                    meins = new MeiNamespace(prefix, href);
                } else {
                    meins = this->meiDocument->getNamespace(string((const char*)curattr->ns->href));
                }
            }
            */
            MeiAttribute *a = new MeiAttribute(meins, attrname, attrvalue);

            attributes.push_back(a);
        }
    }

    MeiElement *obj = MeiFactory::createInstance((const char*)el.name(), id);
    obj->setAttributes(attributes);

    for (pugi::xml_node child = el.first_child(); child; child = child.next_sibling()) {
        //if (child->type == XML_ELEMENT_NODE) {
            MeiElement* ch = xmlNodeToMeiElement(child);
            obj->addChild(ch);
            //lastElement = ch;
        /*
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
