/*
 * parser.cpp
 * musicxmltomei
 *
 * Created by Greg Burlet on 11-09-23.
 * 
 * cpp file for class with functionality to parse MusicXML uncompressed files
 */

#include <iostream>
#include "mxmlparser.h"
    
using namespace mxmltomei;

MXMLParser::MXMLParser(const std::string mxmlFilePath)
: mxmlFilePath(mxmlFilePath) {
}

MXMLParser::~MXMLParser() {};

void MXMLParser::begin() {
    // validate XML DTD and read file into memory in tree format (DOM)
    xmlDoc *doc = xmlReadFile((char *)mxmlFilePath.c_str(), NULL, XML_PARSE_DTDVALID);
    if (doc != NULL) {
        xmlNode *rootElement = xmlDocGetRootElement(doc);
        convert(rootElement);
    } else {
        std::cerr << "Error: unable to open file " << mxmlFilePath << std::endl;
    }
}

void MXMLParser::convert(xmlNode *node) {
    for (xmlNode* curNode = node; curNode; curNode = curNode->next) {
        std::cout << curNode->name << std::endl;

        convert(curNode->children);
    }
}
