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

using std::vector;

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
    xmlAttr* rootattr = NULL;
    const xmlChar* attrname;
    xmlNode* attrvalue = NULL;
    xmlNs* rootxmlns = NULL;
	
    doc = xmlReadFile(docname.c_str(), NULL, 0);
	rootelement = xmlDocGetRootElement(doc);
    vector<MeiNs> nslist;
    
    for (rootxmlns = rootelement->ns; rootxmlns; rootxmlns = rootxmlns->next) {
        const xmlChar* roothref = rootxmlns->href;
        printf("roothref %s \n", roothref);
        const xmlChar* rootprefix = rootxmlns->prefix;
        MeiNs ns;
        if (roothref != NULL) {
        ns.href = (const char*)roothref;
        }
        if (rootprefix !=NULL) {
        ns.prefix = (const char*)rootprefix;
        }
        nslist.push_back(ns);
    }
    
    printf("NSLIST SIZE %s \n", (char*)nslist.size());
    
    MeiElement* meiroot = new MeiElement((const char *)rootelement->name, nslist);
    
    for (rootattr = rootelement->properties; rootattr; rootattr = rootattr->next) {
        if (rootattr->type == XML_ATTRIBUTE_NODE) {
            attrname = rootattr->name;
            if (rootattr->children != NULL) {
                attrvalue = rootattr->children;
                string name = (const char *)(attrname);
                string value = (const char *)(attrvalue->content);
                MeiAttribute rootmeiattr = MeiAttribute(name, value);
                meiroot->addAttribute(rootmeiattr);
            }
        }
    }
    
    MeiDocument::XmlNodeToMei(rootelement->children, meiroot);
	xmlFreeDoc(doc);
    
    MeiDocument* meidoc = new MeiDocument(docname, encoding);
    meidoc->setRootElement(meiroot);
    
    return meidoc;
}

// Private method used to go through the tree structure, get the nodes and create MeiElements
void MeiDocument::XmlNodeToMei(xmlNode* node, MeiElement *parent) {
	xmlNode* curnode = NULL;
    xmlAttr* curattr = NULL;
    const xmlChar* attrname;
    xmlNode* attrvalue = NULL;
    xmlNs* xmlns = NULL;
	
    for (curnode = node; curnode; curnode = curnode->next) {
        if (curnode->type == XML_ELEMENT_NODE) {
            
            vector<MeiNs> nslist;
            for (xmlns = curnode->ns; xmlns; xmlns = xmlns->next) {
                const xmlChar* childhref = xmlns->href;
                const xmlChar* childprefix = xmlns->prefix;
                MeiNs ns;
                if (childhref != NULL) {
					ns.href = (const char*)childhref;
                }
                if (childprefix != NULL) {
					ns.prefix = (const char*)childprefix;
                }
                nslist.push_back(ns);
            }
            
            MeiElement* child = new MeiElement((const char *)curnode->name);
            
            if (curnode->properties != NULL) {                
                for (curattr = curnode->properties; curattr; curattr = curattr->next) {
                    if (curattr->type == XML_ATTRIBUTE_NODE) {
                        attrname = curattr->name;
                        if (curattr->children != NULL) {
                            attrvalue = curattr->children;
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

void MeiDocument::WriteToXml(MeiDocument* meidoc) {
    xmlDocPtr xmldoc = NULL;
    xmlNodePtr xmlrootnode = NULL;
    xmlAttrPtr xmlrootattr = NULL;
    xmlNsPtr xmlcurns = NULL;

    MeiElement* root = meidoc->getRootElement();
    vector<MeiNs> ns = root->getNs();
    
    xmldoc = xmlNewDoc ((const xmlChar*)"1.0");  
    xmlrootnode = xmlNewNode(xmlcurns, (const xmlChar*)root->getName().c_str());
    xmlDocSetRootElement(xmldoc, xmlrootnode);
    
    // add multiple namespaces to the element
    for(vector<MeiNs>::iterator iterns = ns.begin(); iterns !=ns.end(); iterns++) {
        string nodehref = (*iterns).href;
        string nodeprefix = (*iterns).prefix;
        xmlcurns = xmlNewNs (xmlrootnode, (const xmlChar*)nodehref.c_str(), (const xmlChar*)nodeprefix.c_str());
    }
    
    vector<MeiAttribute> attributes = root->getAttributes();
    for (vector<MeiAttribute>::iterator iter = attributes.begin(); iter !=attributes.end(); ++iter) {
        string attrname = iter->getName();
        string attrvalue = iter->getValue();
        xmlrootattr = xmlNewProp(xmlrootnode, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
    }
    
    MeiToXmlNode (*root, xmlrootnode); // fill the XML tree with xmlrootnode as the root element
    xmlSaveFormatFile((const char*)meidoc->getDocName().c_str(), xmldoc, 1);
}


void MeiDocument::MeiToXmlNode(MeiElement meiparent, xmlNodePtr xmlparent) {
    vector<MeiElement> meichildren = meiparent.getChildren();
    xmlNodePtr curxmlnode = NULL;
    xmlAttrPtr curxmlattr = NULL;
    xmlNsPtr   curxmlns   = NULL; 
    
    vector<MeiNs> ns = meiparent.getNs();
    for(vector<MeiNs>::iterator iterns = ns.begin(); iterns !=ns.end(); iterns++) {
        string nodehref = (*iterns).href;
        string nodeprefix = (*iterns).prefix;
        curxmlns = xmlNewNs (curxmlnode, (const xmlChar*)nodehref.c_str(), (const xmlChar*)nodeprefix.c_str());
    }
    
    for (vector<MeiElement>::iterator iter = meichildren.begin(); iter != meichildren.end(); ++iter) {
        string nodename=iter->getName();
        curxmlnode = xmlNewNode(curxmlns, (const xmlChar*)nodename.c_str());
        curxmlnode = xmlAddChild(xmlparent, curxmlnode);
        
        vector<MeiAttribute> attributes = iter->getAttributes();
        for (vector<MeiAttribute>::iterator itera = attributes.begin(); itera !=attributes.end(); ++itera) {
            string attrname = itera->getName();
            string attrvalue = itera->getValue();
            curxmlattr = xmlNewProp(curxmlnode, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
            }
        
        if (iter->getChildren().size() > 0) {
            MeiToXmlNode(*iter, curxmlnode);
        }
    }
}