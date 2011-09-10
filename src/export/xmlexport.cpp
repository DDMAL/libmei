//
//  xmlexport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include "xmlexport_impl.h"
#include "xmlexport.h"

#include <string>
#include <vector>

#include <stdio.h>
#include <libxml/xmlwriter.h>

#include "meidocument.h"
#include "meielement.h"
#include "shared.h"

using std::string;
using std::vector;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlExport;
using mei::XmlExportImpl;
using mei::Mei;

/*
 XmlImport and XmlExport use a Partial Implementation (PImpl) model for their class structure.
 A public interface is exposed in xmlexport.h. This file is added to the includes directory.
 An implementation class is defined in xmlexport_impl.h. This class can now include in its
 definition implementation details that should not be exposed to a client application
 (for example, libxml2).
 The XmlExportImpl class defines XmlImport as a friend class, so that XmlImport can directly
 access private members.
 When an XmlExport class is created, its impl member is also created (as an XmlExportImpl).
 Any method in XmlExport should directly call impl->sameMethod().
 Static members in XmlExport should create an XmlExport instance then call export->impl->method()
*/

XmlExport::XmlExport(MeiDocument *doc) : impl(new XmlExportImpl(doc)) {
}

XmlExport::~XmlExport() {
    if (impl) {
        delete impl;
    }
}

bool XmlExport::meiDocumentToFile(mei::MeiDocument *doc, string filename) {
    XmlExport *ex = new XmlExport(doc);
    return ex->impl->meiDocumentToFile(filename);
}

string XmlExport::meiDocumentToText(mei::MeiDocument *doc) {
    XmlExport *ex = new XmlExport(doc);
    return ex->impl->meiDocumentToText();
}


bool XmlExportImpl::meiDocumentToFile(string filename) {
    xmlKeepBlanksDefault(0);
    xmlSaveFormatFileEnc(filename.c_str(), xmlDocOutput, "UTF-8", 1);

    return true;
}

string XmlExportImpl::meiDocumentToText() {
    xmlChar *xmlbuf;
    int buffersize;
    xmlDocDumpFormatMemory(xmlDocOutput, &xmlbuf, &buffersize, 1);

    return string((char*)xmlbuf);
}


XmlExportImpl::XmlExportImpl(MeiDocument *doc) {
    this->meiDocument = doc;
    this->init();
}

XmlExportImpl::~XmlExportImpl() {
}

void XmlExportImpl::init() {
    MeiElement *root = this->meiDocument->getRootElement();
    // Copy the version from the document into the root element
    static_cast<Mei*>(root)->m_Meiversion.setMeiversion(meiDocument->getVersion());
    xmlNode* xroot = this->meiElementToXmlNode(root);

    xmlDocPtr xmldoc = NULL;
    xmldoc = xmlNewDoc((const xmlChar*)"1.0");
    xmlDocSetRootElement(xmldoc, xroot);
    this->xmlDocOutput = xmldoc;
}

xmlNode* XmlExportImpl::meiElementToXmlNode(MeiElement *el) {
    xmlNodePtr curxmlnode;

    if (el->getName() == "_text") {
        curxmlnode = xmlNewText((const xmlChar*)el->getValue().c_str());
    } else if (el->getName() == "_comment") {
        curxmlnode = xmlNewComment((const xmlChar*)el->getValue().c_str());
    } else {
        curxmlnode = xmlNewNode(NULL, (const xmlChar*)el->getName().c_str());
    }

    if (el == this->meiDocument->getRootElement()) {
        // we're working with the root element of this document. We need to set up any global namespaces.
        std::vector<MeiNamespace*> nsps = this->meiDocument->getNamespaces();
        for (std::vector<MeiNamespace*>::iterator iter = nsps.begin(); iter != nsps.end(); ++iter) {
            if ((*iter)->getPrefix() == "mei") {
                // the default namespace
                xmlNewNs(curxmlnode, (const xmlChar*)(*iter)->getHref().c_str(), NULL);
            } else {
                xmlNewNs(curxmlnode, (const xmlChar*)(*iter)->getHref().c_str(), (const xmlChar*)(*iter)->getPrefix().c_str());
            }
        }
    }

    if (el->hasId()) {
        string idvalue = el->getId();
        xmlNewProp(curxmlnode, XML_XML_ID, (const xmlChar*)idvalue.c_str());
    }


    if (!el->getAttributes().empty()) {
        vector<MeiAttribute*> ats = el->getAttributes();
        for (vector<MeiAttribute*>::iterator iter = ats.begin(); iter !=ats.end(); ++iter) {
            string attrname = (*iter)->getName();
            string attrvalue = (*iter)->getValue();

            if ((*iter)->hasNamespace()) {
                MeiNamespace* atns = (*iter)->getNamespace();
                attrname = atns->getPrefix() + ":" + attrname;
            }

            xmlNewProp(curxmlnode, (const xmlChar*)attrname.c_str(), (const xmlChar*)attrvalue.c_str());
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

