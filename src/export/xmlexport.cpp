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

#include "xmlexport.h"
#include "meidocument.h"

using std::string;
using std::cout;
using std::endl;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiFactory;
using mei::XmlExport;

void XmlExport::meiDocumentToFile(mei::MeiDocument *doc, const char *filename) {
    
}

XmlExport::XmlExport(MeiDocument *doc) {
    //constructor
}

XmlExport::~XmlExport() {}

void XmlExport::init() {}

xmlNode* XmlExport::meiElementToXmlNode(MeiElement *el) {
    
    
    if (el->getChildren().size() > 0) {
        vector<MeiElement*> cn = el->getChildren();
        for (vector<MeiElement*>::iterator iter = cn.begin(); iter != cn.end(); ++iter) {
            // add children to xml node
            meiElementToXmlNode(*iter);
        }
    }
    
    return;
}

