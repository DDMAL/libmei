//
//  xmlexport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <libxml/xmlwriter.h>

#include "xmlexport_impl.h"
#include "meidocument.h"

using std::string;
using std::cout;
using std::endl;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlExport;

void XmlExport::meiDocumentToFile(mei::MeiDocument *doc, const char *filename) {
    XmlExport *xexp = new XmlExport(doc);
    xmlKeepBlanksDefault(0);
    xmlSaveFormatFile(filename, xexp->xmlDocOutput, 1);
    
    delete xexp;
}

XmlExport::XmlExport(MeiDocument *doc) {
    this->meiDocument = doc;
    this->init();
}

XmlExport::~XmlExport() {}

void XmlExport::init() {
    MeiElement *root = this->meiDocument->getRootElement();
    xmlNode* xroot = this->meiElementToXmlNode(root);
    
    xmlDocPtr xmldoc = NULL;
    xmldoc = xmlNewDoc ((const xmlChar*)"1.0");
    xmlDocSetRootElement(xmldoc, xroot);
    this->xmlDocOutput = xmldoc;
    
}

xmlNode* XmlExport::meiElementToXmlNode(MeiElement *el) {
    xmlNodePtr curxmlnode;
    xmlAttrPtr curxmlattr;
    xmlNsPtr   curxmlns;
    
    if (el->getName() == "_text") {
        curxmlnode = xmlNewText((const xmlChar*)el->getValue().c_str());
    } else {
        curxmlnode = xmlNewNode(NULL, (const xmlChar*)el->getName().c_str());   
    }
    
    if (el->getAttributes().size() > 0) {
        vector<MeiAttribute*> ats = el->getAttributes();
        for (vector<MeiAttribute*>::iterator iter = ats.begin(); iter !=ats.end(); ++iter) {
            string attrname = (*iter)->getName();
            string attrvalue = (*iter)->getValue();
                      
            if ((*iter)->hasPrefix()) {
                attrname = (*iter)->getPrefix() + ":" + attrname;
            }
            
            curxmlattr = xmlNewProp(curxmlnode, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
        }
    }
    
    if (el->getChildren().size() > 0) {
        vector<MeiElement*> cn = el->getChildren();
        for (vector<MeiElement*>::iterator iter = cn.begin(); iter != cn.end(); ++iter) {
            // add children to xml node
            xmlNodePtr child = meiElementToXmlNode(*iter);
            xmlAddChild(curxmlnode, child);
        }
    }
    
    return curxmlnode;
}

