//
//  xmlimport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <libxml/xmlreader.h>

#include "xmlimport_impl.h"
#include "xmlimport.h"
#include "meidocument.h"

using std::string;
using std::cout;
using std::endl;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlImport;
using mei::XmlImportImpl;

XmlImport::XmlImport() : impl(new XmlImportImpl) {
    
}

MeiDocument* XmlImport::documentFromFile(const char *filename) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromFile(filename);
    delete import;
    return d;
}

XmlImportImpl::XmlImportImpl() {
}

MeiDocument* XmlImportImpl::documentFromFile(const char* filename) {
    xmlDoc *doc = NULL;
    doc = xmlReadFile(filename, NULL, 0);
    this->xmlMeiDocument = doc;
    this->init();
    return getMeiDocument();
}

//MeiDocument* XmlImportImpl::documentFromStream(string xmlstream) {
//  MeiDocument* mdoc;
//
//  return mdoc;
//}
//
//MeiDocument* XmlImportImpl::documentFromText(string text) {
//  MeiDocument* mdoc;
//
//  return mdoc;
//}

void XmlImportImpl::init() {
    this->rootXmlNode = xmlDocGetRootElement(this->xmlMeiDocument);
    this->rootMeiElement = this->xmlNodeToMeiElement(this->rootXmlNode);
    MeiDocument *doc = new MeiDocument("test");
    doc->setRootElement(this->rootMeiElement);    
    this->meiDocument = doc; 
}

mei::XmlImportImpl::~XmlImportImpl() {
    xmlCleanupParser();
}

MeiDocument* XmlImportImpl::getMeiDocument() {
    return this->meiDocument;
}

MeiElement* XmlImportImpl::xmlNodeToMeiElement(xmlNode *el) {
    if (!MeiFactory::inMap(string((const char*)el->name))) {
        return NULL;
    }
    
    MeiElement *obj = MeiFactory::createInstance((string((const char*)el->name)));
    
    // XML attributes
    if (el->properties) {
        xmlAttr *curattr = NULL;
        for (curattr = el->properties; curattr; curattr = curattr->next) {
            string attrname = (const char*)curattr->name;
            // values are rendered as children of the attribute *facepalm*
            string attrvalue = (const char*)curattr->children->content;
            MeiAttribute *a = new MeiAttribute(attrname, attrvalue);
            obj->addAttribute(a);
        }
    }
    
    xmlNodePtr child = el->children;
    while (child != NULL) {
        MeiElement* ch = xmlNodeToMeiElement(child);
        obj->addChild(ch);

        child = child->next;
    }
    return obj;
}

/*
MeiElement::MeiElement(xmlNode* node) {
    parent_ = NULL;
    value_ = "";
    xmlNode* curnode = NULL;
    xmlAttr* curattr = NULL;
    const xmlChar* attrname;
    const xmlChar* attrprefix;
    xmlNode* attrvalue = NULL;
    xmlNs* xmlns = NULL;
    
    if (node && node->type == XML_ELEMENT_NODE) {
        xmlns = node->ns;
        const xmlChar* childhref = xmlns->href;
        const xmlChar* childprefix = xmlns->prefix;
        MeiNs ns;
        if (childhref != NULL) {
            ns.href = (const char*)childhref;
        }
        if (childprefix != NULL) {
            ns.prefix = (const char*)childprefix;
        }
        
        this->ns = ns;
        this->name_ = (const char*)node->name;
        
        if (node->nsDef != NULL) {
            if (node->nsDef->href != NULL && node->nsDef->prefix != NULL) {
                string prefix = (const char*)(node->nsDef->prefix);
                string href = (const char*)(node->nsDef->href);
                MeiAttribute *attribute = new MeiAttribute(prefix,href);
                attribute->setPrefix("xmlns");
                addAttribute(attribute);
            }
        }
        
        if (node->properties) {
            for (curattr = node->properties; curattr; curattr = curattr->next) {
                if (curattr->type == XML_ATTRIBUTE_NODE) {
                    attrname = curattr->name;
                    if (curattr->children) {
                        attrvalue = curattr->children;
                        if (curattr->atype != XML_ATTRIBUTE_ID) {
                            string name = (const char *)(attrname);
                            string value = (const char *)(attrvalue->content);
                            MeiAttribute *curmeiattr = new MeiAttribute(name, value);
                            if (curattr->ns) {
                                if (curattr->ns->prefix) {
                                    attrprefix = curattr->ns->prefix;
                                    string prefix = (const char*)attrprefix;
                                    curmeiattr->setPrefix(prefix);
                                }
                            }
                            addAttribute(curmeiattr);
                        } else {
                            MeiAttribute *idattr = new MeiAttribute("id",string((const char*)attrvalue->content));
                            idattr->setPrefix("xml");
                            addAttribute(idattr);
                        }
                    }
                }
            }
        }
        
        for (curnode = node->children; curnode; curnode = curnode->next) {
            if ( curnode->type == XML_TEXT_NODE) {
                setValue((const char *)curnode->content);
            }
        }
    }
}
*/
