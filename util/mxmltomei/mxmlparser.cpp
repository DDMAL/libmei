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
: mxmlFilePath(mxmlFilePath), doc(NULL) {
}

MXMLParser::~MXMLParser() {};

void MXMLParser::begin() {
    // validate XML DTD and read file into memory in tree format (DOM)
    if (!doc) {
        doc = xmlReadFile((const char *)mxmlFilePath.c_str(), NULL, XML_PARSE_DTDVALID);
    }

    if (doc) {
        xmlNode *rootElement = xmlDocGetRootElement(doc);
        
        if (rootElement == NULL) {
		    std::cerr << "Error: empty MusicXML file" << std::endl;
		    xmlFreeDoc(doc);
		    return;
	    } else if (std::string((const char*)rootElement->name) == "score-partwise") {
            // if score is partwise convert to timewise
            std::cout << "MusicXML file is score-partwise, converting to score-timewise ..." << std::endl;
            partToScore();
            begin();
            return;
        } else {
            // MusicXMS file is score-timewise, continue conversion
            std::cout << "Converting to MEI format ..." << std::endl;
            convertToMei(rootElement);
            xmlFreeDoc(doc);
        }
    } else {
        std::cerr << "Error: unable to open file " << mxmlFilePath << std::endl;
    }
}

/** \brief Converts MusicXML files in score-partwise format to score-timewise format
 *  
 *  \return string to file path of temporary MusicXML file in timewise format
 */
void MXMLParser::partToScore() {
    xsltStylesheet *xsl = xsltParseStylesheetFile((const xmlChar*)"Resources/parttime.xsl");
    if(!xsl) {
        std::cerr << "Error: can not find parttime.xsl" << std::endl;
        exit(0);
    }

    xmlDoc *result = xsltApplyStylesheet(xsl, doc, NULL);

    // debug
	//xmlSaveFile("/Users/gburlet/Documents/work/libmei/util/mxmltomei/timewise.xml", result);

	xmlFreeDoc(doc);
	xsltFreeStylesheet(xsl);
    
    doc = result;
    std::cout << "success." << std::endl;
}

void MXMLParser::convertToMei(xmlNode *node) {
    for (xmlNode* curNode = node; curNode; curNode = curNode->next) {
        std::cout << "name: " << curNode->name << std::endl;

        /*if(std::string((const char*)curNode->name) == "score-part") {
            xmlChar *key = xmlNodeListGetString(doc, curNode->xmlChildrenNode, 1);
	        std::cout << "text: " << std::string((const char *)key) << std::endl;
		    xmlFree(key);
        }*/

        //std::cout << "content: " << curNode->content << std::endl;
        //std::cout << "attributes: " << curNode->properties << std::endl;
        convertToMei(curNode->children);
    }
}
