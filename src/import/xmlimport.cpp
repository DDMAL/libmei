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
    MeiDocument* mdoc;
    xmlDoc *doc = NULL;
    doc = xmlReadFile(filename, NULL, 0);
    _MeiXml *mfile = new _MeiXml(doc);
    mdoc = mfile->getMeiDocument();
    return mdoc;
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
    
//    this->rootMeiElement = new MeiElement(string((const char*)this->rootXmlNode->name));
    this->xmlNodeToMeiElement(this->rootXmlNode);
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
//    xmlNode* attrvalue = NULL;
    
    MeiElement *obj;
    
    xmlNode *cur_node = NULL;
    for (cur_node = el; cur_node; (cur_node = cur_node->next)) {
        xmlNode* parent = cur_node->parent;
        cout << "Parent: " << parent->name << endl;
        
        if (!MeiFactory::inMap(string((const char* )cur_node->name))) {
            cout << "Skipping " << cur_node->name << ": " << cur_node->content << endl;
            continue;
        }
        if (cur_node->type == XML_ELEMENT_NODE) {
            obj = MeiFactory::createInstance(string((const char*)cur_node->name));
            cout << "MeiElement " << endl; 
            obj->print(4);
            cout << endl;
        }
        xmlNodeToMeiElement(cur_node->children);
    }
    return obj;
}