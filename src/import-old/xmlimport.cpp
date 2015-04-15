//
//  xmlimport.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <string>
#include <vector>
#include <stdio.h>

#include "xmlimport_impl.h"
 
#include "xmlimport.h"
#include "meidocument.h"

#include <iostream>

using std::string;
using std::vector;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlImport;
using mei::XmlImportImpl;

XmlImport::XmlImport() : impl(new XmlImportImpl) {
}

XmlImport::~XmlImport() {
    delete impl;
}

MeiDocument* XmlImport::documentFromFile(string filename) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromFile(filename);
    delete import;

    return d;
}

MeiDocument* XmlImport::documentFromText(string text) {
    XmlImport *import = new XmlImport();
    MeiDocument *d = import->impl->documentFromText(text);
    delete import;

    return d;
}

/**
 *  Implementation Methods
 *
 */
XmlImportImpl::XmlImportImpl() {
    xmlMeiDocument.reset();
    meiDocument = NULL;
    rootMeiElement = NULL;
    options = pugi::parse_pi | pugi::parse_comments;
}

MeiDocument* XmlImportImpl::documentFromFile(string filename) throw (FileReadFailureException, VersionMismatchException, NoVersionFoundException) {
    pugi::xml_parse_result result = this->xmlMeiDocument.load_file(filename.c_str(), this->options);

    if (!result) {
        throw FileReadFailureException(filename);
    }
    
    this->rootXmlNode = this->xmlMeiDocument.document_element();

    if (this->checkCompatibility(this->rootXmlNode)) {
        this->init();
        return this->getMeiDocument();
    }
    return NULL;
}


MeiDocument* XmlImportImpl::documentFromText(string text) throw (MalformedXMLException, VersionMismatchException, NoVersionFoundException) {
    pugi::xml_parse_result result = this->xmlMeiDocument.load(text.c_str(), this->options);

    if (!result) {
        throw MalformedXMLException("Input text");
    }

    this->rootXmlNode = this->xmlMeiDocument.document_element();

    if (this->checkCompatibility(this->rootXmlNode)) {
        this->init();
        return this->getMeiDocument();
    }
    return NULL;
}

void XmlImportImpl::init() {
    // get mei version from document
    string meiVersion = string(this->rootXmlNode.attribute("meiversion").value());
    
    MeiDocument *doc = new MeiDocument(meiVersion);
    this->meiDocument = doc;

    this->rootMeiElement = this->xmlNodeToMeiElement(this->rootXmlNode);
    doc->setRootElement(this->rootMeiElement);
}

mei::XmlImportImpl::~XmlImportImpl() {
}

MeiDocument* XmlImportImpl::getMeiDocument() {
    return this->meiDocument;
}

MeiElement* XmlImportImpl::xmlNodeToMeiElement(pugi::xml_node el) {
    string id = "";
    vector<MeiAttribute*> attributes;

    if (el.attribute("xml:id").value() != NULL) {
        id = string(el.attribute("xml:id").value());
        // remove it so we don't have to deal with it later.
        el.remove_attribute("xml:id");
    }
    
    MeiElement *obj = MeiFactory::createInstance((const char*)el.name(), id);

    // XML attributes. Text nodes will never have these.
    for (pugi::xml_attribute attr = el.first_attribute(); attr; attr = attr.next_attribute()) {
        string attrname = string(attr.name());
        string attrvalue = string(attr.value());
        MeiAttribute *a = new MeiAttribute(attrname, attrvalue);
        attributes.push_back(a);
    }
    obj->setAttributes(attributes);

    MeiElement *lastElement = NULL;

    for (pugi::xml_node child = el.first_child(); child; child = child.next_sibling()) {
        if (child.type() == pugi::node_element) {
            MeiElement *ch = xmlNodeToMeiElement(child);
            obj->addChild(ch);
            lastElement = ch;
        } else if (child.type() == pugi::node_pcdata) {
            // text content for elements are stored in value/tail
            string content = string(child.value());

            if (lastElement) {
                lastElement->setTail(content);
            } else {
                obj->setValue(content);
            }
        } else if (child.type() == pugi::node_comment) {
            MeiElement *comment = new MeiCommentNode();
            string c = string(child.value());
            comment->setValue(c);
            obj->addChild(comment);
        }
    }
    return obj;
}

bool XmlImportImpl::checkCompatibility(pugi::xml_node r) throw(NoVersionFoundException, VersionMismatchException) {
    if (!r.attribute("meiversion")) {
        throw NoVersionFoundException("");
    } else if (MEI_VERSION.find(string(r.attribute("meiversion").value())) == MEI_VERSION.end()) {
        throw VersionMismatchException(string(r.attribute("meiversion").value()));
    } else {
        return true;
    }
}