//
//  xmlimport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <string>

#include <stdio.h>
#include <libxml/xmlreader.h>

#include "xmlimport_impl.h"
#include "xmlimport.h"
#include "meidocument.h"
#include "mei.h"

using std::string;

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

MeiDocument* XmlImport::documentFromFile(const char *filename) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromFile(filename);
    delete import;
    return d;
}

XmlImportImpl::XmlImportImpl() {
    rootXmlNode = NULL;
    xmlMeiDocument = NULL;
    meiDocument = NULL;
    rootMeiElement = NULL;
}

MeiDocument* XmlImportImpl::documentFromFile(const char *filename) {
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
    MeiDocument *doc = new MeiDocument("test");
    this->meiDocument = doc;

    this->rootMeiElement = this->xmlNodeToMeiElement(this->rootXmlNode);
    doc->setRootElement(this->rootMeiElement);
}

mei::XmlImportImpl::~XmlImportImpl() {
    xmlCleanupParser();
}

MeiDocument* XmlImportImpl::getMeiDocument() {
    return this->meiDocument;
}

MeiElement* XmlImportImpl::xmlNodeToMeiElement(xmlNode *el) {

    MeiElement *obj;

    if (el->type == XML_ELEMENT_NODE) {
        obj = MeiFactory::createInstance((string((const char*)el->name)));
    } else if (el->type == XML_TEXT_NODE) {
        obj = new MeiTextNode();
        obj->setValue(string((const char*)el->content));
    } else if (el->type == XML_COMMENT_NODE) {
        obj = new MeiCommentNode();
        obj->setValue(string((const char*)el->content));
    } else {
        return NULL;
    }

    // XML attributes and children. Text nodes will never have these.
    if (el->properties) {
        xmlAttr *curattr = NULL;
        for (curattr = el->properties; curattr; curattr = curattr->next) {
            if (curattr->atype == XML_ATTRIBUTE_ID) {
                /* we store the ID on the element, not as an attribute. This will be serialized out
                 *   on export
                 */
                obj->setId(string((const char*)curattr->children->content));
            } else {
                string attrname = (const char*)curattr->name;
                // values are rendered as children of the attribute *facepalm*
                string attrvalue = (const char*)curattr->children->content;
                MeiAttribute *a = new MeiAttribute(attrname, attrvalue);

                if (curattr->ns) {
                    if (!this->meiDocument->hasNamespace(string((const char*)curattr->ns->href))) {
                        string prefix = (const char*)curattr->ns->prefix;
                        string href = (const char*)curattr->ns->href;
                        MeiNamespace* meins = new MeiNamespace(prefix, href);
                        a->setNamespace(meins);
                    } else {
                        MeiNamespace* meins = this->meiDocument->getNamespace(string((const char*)curattr->ns->href));
                        a->setNamespace(meins);
                    }
                }

                a->setElement(obj);
                obj->addAttribute(a);
            }
        }
    }

    // if the attributes haven't set an ID, we'll set one now
    if (obj->getId() == "") {
        obj->setId(mei::generateId());
    }

    xmlNodePtr child = el->children;
    while (child != NULL) {
        MeiElement* ch = xmlNodeToMeiElement(child);

        if (ch != NULL) {
            obj->addChild(ch);
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
