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
#include <libxml/xmlreader.h>

#include "xmlimport_impl.h"
#include "xmlimport.h"
#include "meidocument.h"

using std::string;
using std::vector;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlImport;
using mei::XmlImportImpl;

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

MeiDocument* XmlImport::documentFromText(string text) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromText(text);
    delete import;
    return d;
}

XmlImportImpl::XmlImportImpl() {
    rootXmlNode = NULL;
    xmlMeiDocument = NULL;
    meiDocument = NULL;
    rootMeiElement = NULL;
}

MeiDocument* XmlImportImpl::documentFromFile(string filename) {
    xmlDoc *doc = NULL;
    doc = xmlReadFile(filename, NULL, 0);
    this->xmlMeiDocument = doc;
    this->rootXmlNode = xmlDocGetRootElement(this->xmlMeiDocument);

    if (this->checkCompatibility(this->rootXmlNode)) {
        this->init();
        return this->getMeiDocument();
    }
    return NULL;
}

MeiDocument* XmlImportImpl::documentFromText(string text) {
    xmlDoc *doc = NULL;
    int options = XML_PARSE_NONET | XML_PARSE_RECOVER | XML_PARSE_NOBLANKS | XML_PARSE_COMPACT;
    doc = xmlReadMemory(text.c_str(), text.length(), NULL, NULL, options);
    this->xmlMeiDocument = doc;
    this->rootXmlNode = xmlDocGetRootElement(this->xmlMeiDocument);

    if (this->checkCompatibility(this->rootXmlNode)) {
        this->init();
        return this->meiDocument;
    }
    return NULL;
}

void XmlImportImpl::init() {
    MeiDocument *doc = new MeiDocument();
    this->meiDocument = doc;

    this->rootMeiElement = this->xmlNodeToMeiElement(this->rootXmlNode);
    doc->setRootElement(this->rootMeiElement);
}

mei::XmlImportImpl::~XmlImportImpl() {
    if (xmlMeiDocument) {
        xmlFreeDoc(xmlMeiDocument);
    }
    xmlCleanupParser();
}

MeiDocument* XmlImportImpl::getMeiDocument() {
    return this->meiDocument;
}

MeiElement* XmlImportImpl::xmlNodeToMeiElement(xmlNode *el) {
    string id = "";
    vector<MeiAttribute*> attributes;
    // XML attributes and children. Text nodes will never have these.
    if (el->properties) {
        xmlAttr *curattr = NULL;
        for (curattr = el->properties; curattr; curattr = curattr->next) {
            if (curattr->atype == XML_ATTRIBUTE_ID) {
                /* we store the ID on the element, not as an attribute. This will be serialized out
                 *   on export
                 */
                id = (const char*)curattr->children->content;
            } else {
                string attrname = (const char*)curattr->name;
                // values are rendered as children of the attribute *facepalm*
                string attrvalue = (const char*)curattr->children->content;

                MeiNamespace* meins = NULL;
                if (curattr->ns) {
                    if (!this->meiDocument->hasNamespace(string((const char*)curattr->ns->href))) {
                        string prefix = (const char*)curattr->ns->prefix;
                        string href = (const char*)curattr->ns->href;
                        meins = new MeiNamespace(prefix, href);
                    } else {
                        meins = this->meiDocument->getNamespace(string((const char*)curattr->ns->href));
                    }
                }
                MeiAttribute *a = new MeiAttribute(meins, attrname, attrvalue);

                attributes.push_back(a);
            }
        }
    }

    MeiElement *obj = MeiFactory::createInstance((const char*)el->name, id);
    obj->setAttributes(attributes);

    MeiElement *lastElement = NULL;
    xmlNodePtr child = el->children;
    while (child != NULL) {
        if (child->type == XML_ELEMENT_NODE) {
            MeiElement* ch = xmlNodeToMeiElement(child);
            obj->addChild(ch);
            lastElement = ch;
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

        child = child->next;
    }
    return obj;
}

bool XmlImportImpl::checkCompatibility(xmlNode *r) throw(NoVersionFoundException, VersionMismatchException) {
    xmlAttrPtr meivers = xmlHasProp(r, (const xmlChar*)"meiversion");
    if (meivers == NULL) {
        throw NoVersionFoundException("");
    } else if (string((const char*)meivers->children->content) != MEI_VERSION) {
        throw VersionMismatchException(string((const char*)meivers->children->content));
    } else {
        return true;
    }
}
