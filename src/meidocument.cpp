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

MeiDocument* MeiDocument::ReadFromXml(string docname, string encoding) {
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

void MeiDocument::WriteToXml(MeiDocument* meidoc) {
    xmlDocPtr xmldoc = NULL;
    xmlNodePtr xmlrootnode = NULL;
    MeiElement* root = meidoc->getRootElement();
    
    xmldoc = xmlNewDoc ((const xmlChar*)"1.0");  
    xmlrootnode = xmlNewNode(NULL, (const xmlChar*)root->getName().c_str());
    xmlDocSetRootElement(xmldoc, xmlrootnode);
    
    MeiToXmlNode (*root, xmlrootnode); // fill the XML tree with xmlrootnode as the root element
    
    xmlSaveFormatFile((const char*)meidoc->getDocName().c_str(), xmldoc, 1);
}


// Private method used to go through the tree structure, get the nodes and create MeiElements
void MeiDocument::XmlNodeToMei(xmlNode* node, MeiElement *parent) {
	xmlNode* curnode = NULL;
    xmlAttr* curattr = NULL;
    const xmlChar* attrname;
    xmlNode* attrvalue = NULL;
	
    for (curnode = node; curnode; curnode = curnode->next) {
        if (curnode->type == XML_ELEMENT_NODE) {
            printf("node type: Element, name: %s\n", curnode->name);
            MeiElement* child = new MeiElement((const char *)curnode->name);
            if (curnode->properties != NULL) {
                
                for (curattr = curnode->properties; curattr; curattr = curattr->next) {
                    if (curattr->type == XML_ATTRIBUTE_NODE) {
                        attrname = curattr->name;
                        printf("current attribute name: %s\n", attrname);
                        if (curattr->children != NULL) {
                            attrvalue = curattr->children;
                            printf("attribute value %s \n", attrvalue->content);
                            string name = (const char *)(attrname);
                            string value = (const char *)(attrvalue->content); 
                            
                            MeiAttribute curmeiattr = MeiAttribute(name, value);
                            child->addAttribute(curmeiattr);
                        }
                    }
                }
            }
            XmlNodeToMei(curnode->children, child);
            parent->addChild(*child);
        }
	}
}

void MeiDocument::MeiToXmlNode(MeiElement meiparent, xmlNodePtr xmlparent) {
    vector<MeiElement> meichildren = meiparent.getChildren();
    xmlNodePtr curxmlnode = NULL;
    
    for (vector<MeiElement>::iterator iter = meichildren.begin(); iter != meichildren.end(); ++iter) {
        string nodename=iter->getName();
        iter->print();
        curxmlnode = xmlNewNode(NULL, (const xmlChar*)nodename.c_str());
        curxmlnode = xmlAddChild(xmlparent, curxmlnode);
        if (iter->getChildren().size() > 0) {
            MeiToXmlNode(*iter, curxmlnode);
        }
    }
}