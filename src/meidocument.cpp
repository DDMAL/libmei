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

MeiDocument MeiDocument::ReadFromXML(string docname, string encoding) {
	
	xmlDoc *doc = NULL;
	xmlNode *rootelement = NULL;
	
	rootelement = xmlDocGetRootElement(doc);
	MeiElement* meiroot = new MeiElement("mei");
	XmlNodeToMei(rootelement->children, meiroot);

	xmlFreeDoc(doc);
}

// Private method used to go through the tree structure, get the nodes and create MeiElements
void MeiDocument::XmlNodeToMei(xmlNode* node, MeiElement *parent) {
	xmlNode *curnode = NULL;
	for (curnode = node; curnode; curnode = curnode->next) {
		MeiElement* child = new MeiElement((const char *)curnode->name);
		XmlNodeToMei(curnode->children, child);
		parent->addChild(*child);
	}
}