/*
 *  meidocument.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/11/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "meidocument.h"

#include <libxml/xmlreader.h>

#include "meielement.h"

MeiDocument::MeiDocument(string docname, string encoding) {
	this->docname = docname;
	this->encoding = encoding;
}

string MeiDocument::getDocName() {
	return docname;
}

void MeiDocument::setDocName(string docname) {
    this->docname = docname;
}

string MeiDocument::getEncoding() {
	return encoding;
}

void MeiDocument::setEncoding(string encoding) {
	this->encoding = encoding;
}

MeiElement* MeiDocument::getRootElement() {
	return root;
}

void MeiDocument::setRootElement(MeiElement* root) {
	this->root = root;
}

 MeiDocument* MeiDocument::ReadFromXML(string docname, string encoding) {
     printf("read from xml\n");
	xmlDoc *doc = NULL;
	xmlNode *rootelement = NULL;
	
     doc = xmlReadFile(docname.c_str(), NULL, 0);
	rootelement = xmlDocGetRootElement(doc);
	MeiElement* meiroot = new MeiElement("mei");
    MeiDocument::XmlNodeToMei(rootelement->children, meiroot);
	xmlFreeDoc(doc);
    
    MeiDocument* meidoc = new MeiDocument(docname, encoding);
    meidoc->setRootElement(meiroot);
    
    return meidoc;
}

// Private method used to go through the tree structure, get the nodes and create MeiElements
 void MeiDocument::XmlNodeToMei(xmlNode* node, MeiElement *parent) {
	xmlNode *curnode = NULL;
	for (curnode = node; curnode; curnode = curnode->next) {
        if (curnode->type == XML_ELEMENT_NODE) {
            printf("node type: Element, name: %s\n", curnode->name);
            MeiElement* child = new MeiElement((const char *)curnode->name);
            XmlNodeToMei(curnode->children, child);
            parent->addChild(*child);
        }
	}
}