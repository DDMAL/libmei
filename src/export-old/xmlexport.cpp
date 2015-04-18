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
#include <iostream>

#include <stdio.h>
#include "pugixml.hpp"

//#include <libxml/xmlwriter.h>

#include "meidocument.h"
#include "meielement.h"
#include "shared.h"
#include "exceptions.h"

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
    delete impl;
}

bool XmlExport::documentToFile(mei::MeiDocument *doc, string filename) {
    XmlExport *ex = new XmlExport(doc);
    bool status = ex->impl->meiDocumentToFile(filename);
    delete ex;

    return status;
}

string XmlExport::documentToText(mei::MeiDocument *doc) {
    XmlExport *ex = new XmlExport(doc);
    string status = ex->impl->meiDocumentToText();
    delete ex;
    
    return status;
}

/** Convert an element and its children to XML. Will also add
 * the <?xml > prelude.
 */
string XmlExport::meiElementToText(mei::MeiElement *el) {
    XmlExport *ex = new XmlExport(NULL);
    ex->impl->initRootElement(el);
    return ex->impl->meiDocumentToText();
}

/**
 *  Implementation methods
 *
 */

struct xml_string_writer: pugi::xml_writer {
    std::string result;
    virtual void write(const void* data, size_t size) {
        result += std::string(static_cast<const char*>(data), size);
    }
};

bool XmlExportImpl::meiDocumentToFile(string filename) throw(FileWriteFailureException) {
    return this->xmlDocOutput.save_file(filename.c_str());
}

string XmlExportImpl::meiDocumentToText() {
    xml_string_writer writer;
    this->xmlDocOutput.save(writer);
    
    return writer.result;
}

XmlExportImpl::XmlExportImpl(MeiDocument *doc) {
    this->meiDocument = doc;
    if (doc != NULL) {
        this->init();
    }
}

XmlExportImpl::~XmlExportImpl() {
}

void XmlExportImpl::init() throw(DocumentRootNotSetException) {
    if (!this->meiDocument->getRootElement()) {
        throw DocumentRootNotSetException("The document root was not set. Without that, this document cannot be exported.");
    }

    this->rootElement = this->meiDocument->getRootElement();

    pugi::xml_node xroot = this->xmlDocOutput.append_child(this->rootElement->getName().c_str());
    
    this->meiElementToXmlNode(this->rootElement, xroot);
}

/** Special init method if we don't have a document.
 * Creates a dummy document for the namespace checks in
 * meiElementToXmlNode.
 */
void XmlExportImpl::initRootElement(MeiElement *root) {
//    meiDocument = new MeiDocument();
//    rootElement = root;
//    xmlNodePtr xroot = this->meiElementToXmlNode(root);
//
//    xmlDocPtr xmldoc = xmlNewDoc((const xmlChar*)"1.0");
//    xmlDocSetRootElement(xmldoc, xroot);
//    this->xmlDocOutput = xmldoc;
//    documentRootNode = NULL;
}

void XmlExportImpl::meiElementToXmlNode(MeiElement *el, pugi::xml_node parentnode) {
    pugi::xml_node curxmlnode;

    if (el == this->rootElement) {
        curxmlnode = parentnode;
    } else if (el->getName() == "_comment") {
        curxmlnode = parentnode.append_child(pugi::node_comment);
        curxmlnode.set_value(el->getValue().c_str());
    } else {
        curxmlnode = parentnode.append_child(pugi::node_element);
        curxmlnode.set_name(el->getName().c_str());
    }
    
    if (el->hasId()) {
        string idvalue = el->getId();
        pugi::xml_attribute idattrib = curxmlnode.append_attribute("xml:id");
        idattrib.set_value(idvalue.c_str());
    }
    
    // Add child for text node
    if (el->getValue() != "") {
        pugi::xml_node value = curxmlnode.append_child(pugi::node_pcdata);
        value.set_value(el->getValue().c_str());
    }
    
    vector<MeiAttribute*> ats = el->getAttributes();
    for (vector<MeiAttribute*>::iterator iter = ats.begin(); iter != ats.end(); ++iter) {
        string attrname = (*iter)->getName();
        string attrvalue = (*iter)->getValue();

        pugi::xml_attribute attrib = curxmlnode.append_attribute(attrname.c_str());
        attrib.set_value(attrvalue.c_str());
    }
    
    vector<MeiElement*> cn = el->getChildren();
    for (vector<MeiElement*>::iterator iter = cn.begin(); iter != cn.end(); ++iter) {
        if ((*iter)->getName() == "_comment") {
            pugi::xml_node comment = curxmlnode.append_child(pugi::node_comment);
            comment.set_value((*iter)->getValue().c_str());
        } else {
            meiElementToXmlNode(*iter, curxmlnode);
        }
        
        if ((*iter)->getTail() != "") {
            pugi::xml_node tail = curxmlnode.append_child(pugi::node_pcdata);
            tail.set_value((*iter)->getTail().c_str());
        }
    }
}
