/*
 Copyright (c) 2011 Mahtab Ghamsari-Esfahani, Jamie Klassen, Alastair Porter, Andrew Hankinson
 
 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including
 without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to
 the following conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "iomeixml.h"

#include <libxml/xmlreader.h>

static void XmlNodeToMei(xmlNode* node, MeiElement *parent);

MeiDocument* MeiXmlInputStream::ReadFromXml(string docname, string encoding) {
    printf("read from xml\n");
	xmlDoc *doc = NULL;
	xmlNode *rootelement = NULL;
    xmlAttr* rootattr = NULL;
    const xmlChar* attrname;
    xmlNode* attrvalue = NULL;
    xmlNs* rootxmlns = NULL;
	
    doc = xmlReadFile(docname.c_str(), NULL, 0);
	rootelement = xmlDocGetRootElement(doc);
    
    rootxmlns = rootelement->ns; 
	const xmlChar* roothref = rootxmlns->href;
	const xmlChar* rootprefix = rootxmlns->prefix;
	MeiNs ns;
	
	if (roothref != NULL) {
		ns.href = (const char*)roothref;
	}
	if (rootprefix !=NULL) {
        ns.prefix = (const char*)rootprefix;
	}
    
	MeiElement* meiroot = MeiFactory::createInstanceFromNode(string((const char *)rootelement->name),rootelement);
    meiroot->setNs(ns);
    
	/*for (rootattr = rootelement->properties; rootattr; rootattr = rootattr->next) {
        if (rootattr->type == XML_ATTRIBUTE_NODE) {
            attrname = rootattr->name;
            if (rootattr->children != NULL) {
                attrvalue = rootattr->children;
				if (rootattr->atype == XML_ATTRIBUTE_ID) { //xml:id attribute
					string ID = (const char *)(attrvalue->content);
					meiroot->setId(ID);
				} else {
					string name = (const char *)(attrname);
					string value = (const char *)(attrvalue->content);
					MeiAttribute *rootmeiattr = new MeiAttribute(name, value);
					meiroot->addAttribute(rootmeiattr);
				}
            }
        }
    }*/
    
    XmlNodeToMei(rootelement->children, meiroot);
	xmlFreeDoc(doc);
    
    MeiDocument* meidoc = new MeiDocument(docname, encoding);
    meidoc->setRootElement(meiroot);
    
    return meidoc;
}

static void XmlNodeToMei(xmlNode* node, MeiElement *parent) {
	xmlNode* curnode = NULL;	
    for (curnode = node; curnode; curnode = curnode->next) {
        if (curnode->type == XML_ELEMENT_NODE) {
            MeiElement* child = MeiFactory::createInstanceFromNode(string((const char*)curnode->name),curnode);
            if (child) {
                XmlNodeToMei(curnode->children, child);
                parent->addChild(child);
            } else {
                string message = "unknown node type " + (string)(const char*)curnode->name;
                throw message;
            }            
        }
	}
}

void MeiToXmlNode(MeiElement *meiparent, xmlNodePtr xmlparent, xmlNodePtr xmlroot, xmlDoc* doc);

void MeiXmlOutputStream::WriteToXml(MeiDocument* meidoc) {
    xmlDocPtr xmldoc = NULL;
    xmlNodePtr xmlrootnode = NULL;
    xmlAttrPtr xmlrootattr = NULL;
    xmlNsPtr xmlcurns = NULL;
	
    MeiElement* root = meidoc->getRootElement();
	MeiNs ns = root->getNs();
    
    xmldoc = xmlNewDoc ((const xmlChar*)"1.0");
	
	// create root node
    xmlrootnode = xmlNewNode(xmlcurns, (const xmlChar*)root->getName().c_str());
    xmlDocSetRootElement(xmldoc, xmlrootnode);
    
    // add namespaces to the node
    string nodehref = ns.href;
    string nodeprefix = ns.prefix;
	xmlChar* href = (xmlChar*)(ns.href.c_str());
	xmlChar* prefix = NULL;
	if (nodeprefix != "") { //due to uninitialized string
		prefix = (xmlChar*)(ns.prefix.c_str());
	}		
	
	xmlcurns = xmlNewNs (xmlrootnode, href, prefix);
	xmlSetNs(xmlrootnode, xmlcurns);
    
	// add attributes to the node
    for (vector<MeiAttribute*>::iterator iter = root->getAttributes().begin(); iter !=root->getAttributes().end(); ++iter) {
        string attrname = (*iter)->getName();
        string attrvalue = (*iter)->getValue();
		xmlrootattr = xmlNewProp(xmlrootnode, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
    }
    
    MeiToXmlNode (root, xmlrootnode, xmlrootnode, xmldoc); // fill the XML tree with xmlrootnode as the root element
    xmlKeepBlanksDefault(0);
    xmlSaveFormatFile((const char*)meidoc->getDocName().c_str(), xmldoc, 1);
}

// Private method used to go through the tree structure, get the nodes and create MeiElements


void MeiToXmlNode(MeiElement *meiparent, xmlNodePtr xmlparent, xmlNodePtr xmlroot, xmlDoc* doc) {
    xmlNodePtr curxmlnode = NULL;
    xmlAttrPtr curxmlattr = NULL;
    xmlNsPtr   curxmlns   = NULL; 
    
    // run through children
    for (vector<MeiElement*>::iterator iter = meiparent->getChildren().begin(); iter != meiparent->getChildren().end(); ++iter) {
        string nodename=(*iter)->getName();
        curxmlnode = xmlNewNode(curxmlns, (const xmlChar*)nodename.c_str());
        curxmlnode = xmlAddChild(xmlparent, curxmlnode);
		
		// add namespaces
		MeiNs ns = (*iter)->getNs();
		string nodehref = ns.href;
		string nodeprefix = ns.prefix;
        
        const char* nodehrefc = nodehref.c_str();
        
        curxmlns = xmlSearchNsByHref(doc, curxmlnode, (const xmlChar*)nodehrefc);
        
        if(curxmlns==NULL) {
			if (ns.prefix == "") { //since empty prefixes are not allowed
				curxmlns = xmlNewNs (xmlroot, (const xmlChar*)nodehref.c_str(), NULL);
			} else {
				curxmlns = xmlNewNs (xmlroot, (const xmlChar*)nodehref.c_str(), (const xmlChar*)nodeprefix.c_str());
			}
        }
		
		xmlSetNs(curxmlnode, curxmlns);
		
		if ( (*iter)->getValue() != "" ) {
			xmlNodePtr text = xmlNewText((const xmlChar*)(*iter)->getValue().c_str());
			xmlAddChild(curxmlnode, text);
		}
        
		// add attributes to each child
        for (vector<MeiAttribute*>::iterator itera = (*iter)->getAttributes().begin(); itera != (*iter)->getAttributes().end(); ++itera) {
            string attrname;
			if ((*itera)->getName() != "") {
				attrname = (*itera)->getName();
				string attrprefix;
				if ((*itera)->getPrefix() != "") {
					attrprefix = (*itera)->getPrefix();
				}
				string attrvalue = (*itera)->getValue();
				if (attrprefix != "xmlns") {
					string attrprefix = (*itera)->getPrefix();
					if (attrprefix != "") {
                        string newname = attrprefix + ":" + attrname;
                        curxmlattr = xmlNewProp(curxmlnode, (const xmlChar*)newname.c_str(), (const xmlChar*)attrvalue.c_str());
					} else {
						curxmlattr = xmlNewProp(curxmlnode, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
					}
				} else if (attrprefix == "xmlns") { //for namespace definitions
					curxmlns = xmlNewNs(curxmlnode, (const xmlChar*)attrvalue.c_str(), (const xmlChar*)attrname.c_str());
					curxmlnode->nsDef = curxmlns;
				}
			}
		}
        if ((*iter)->getChildren().size() > 0) {
			MeiToXmlNode(*iter, curxmlnode, xmlroot, doc);
        }
    }
}