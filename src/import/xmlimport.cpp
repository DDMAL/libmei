//
//  xmlimport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <libxml/xmlreader.h>

#include "xmlimport.h"
#include "meidocument.h"

using std::string;
using std::cout;
using std::endl;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlImport::_MeiXml;

MeiDocument* mei::XmlImport::File(const char* filename) {
    xmlDoc *doc = NULL;
    doc = xmlReadFile(filename, NULL, 0);
    _MeiXml *mfile = new _MeiXml(doc);
    return mfile->getMeiDocument();
}

//MeiDocument* mei::XmlImport::Stream(string xmlstream) {
//  MeiDocument* mdoc;
//
//  return mdoc;
//}
//
//MeiDocument* mei::XmlImport::Text(string text) {
//  MeiDocument* mdoc;
//
//  return mdoc;
//}

_MeiXml::_MeiXml(xmlDoc *d) {
    // at construction time parse the xmlNode out into the MeiDocument.
    this->xmlMeiDocument = d;
    this->rootXmlNode = xmlDocGetRootElement(d);
    
    this->rootMeiElement = this->xmlNodeToMeiElement(this->rootXmlNode);
    
    MeiDocument *doc = new MeiDocument("test", "UTF-8");
    doc->setRootElement(this->rootMeiElement);    
    this->meiDocument = doc;
}

_MeiXml::~_MeiXml() {
    xmlCleanupParser();
}

MeiDocument* _MeiXml::getMeiDocument() {
    return this->meiDocument;
}


//static void XmlNodeToMei(xmlNode* node, MeiElement *parent) {
//  xmlNode* curnode = NULL;    
//    for (curnode = node; curnode; curnode = curnode->next) {
//        if (curnode->type == XML_ELEMENT_NODE) {
//            MeiElement* child = MeiFactory::createInstanceFromNode(string((const char*)curnode->name),curnode);
//            if (child) {
//                XmlNodeToMei(curnode->children, child);
//                parent->addChild(child);
//            } else {
//                string message = "unknown node type " + (string)(const char*)curnode->name;
//                throw message;
//            }            
//        }
//  }
//}
//

MeiElement* _MeiXml::xmlNodeToMeiElement(xmlNode *el) {
    MeiElement *obj = new MeiElement(string((const char*)el->name));
    xmlNodePtr child = el->children;
    while (child != NULL) {
        
        MeiElement* ch = xmlNodeToMeiElement(child);
        obj->addChild(ch);
        
        child = child->next;
    }
    return obj;
}

