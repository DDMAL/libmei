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

using std::string;
using std::cout;
using std::cerr;
using std::endl;
using mei::MXMLParser;

MXMLParser::MXMLParser(const std::string mxmlFilePath)
: mxmlFilePath(mxmlFilePath), doc(NULL), meiDoc(NULL) {
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

            meiDoc = new mei::MeiDocument();

            convertToMei(rootElement);
            xmlFreeDoc(doc);
            delete meiDoc;
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
	//xmlSaveFile("/Users/gburlet/Documents/work/libmei/util/mxmltomei/helloworld_timewise.xml", result);

	xmlFreeDoc(doc);
	xsltFreeStylesheet(xsl);
    
    doc = result;
    std::cout << "success." << std::endl;
}

void MXMLParser::convertToMei(xmlNode *parentNode) {
    for(xmlNodePtr curNode = parentNode->children; curNode; curNode = curNode->next) {
        if (curNode->type == XML_ELEMENT_NODE) {
            // handle element node
            std::cout << "name: " << curNode->name << std::endl;

            // check for attributes
            std::string id = "";
            if (curNode->properties) {
                for (xmlAttr *curattr = curNode->properties; curattr; curattr = curattr->next) {
                    if (curattr->atype == XML_ATTRIBUTE_ID) {
                        /* we store the ID on the element, not as an attribute. This will be serialized out
                         *   on export
                         */
                        id = (const char*)curattr->children->content;
                    } else {
                        string attrname = (const char*)curattr->name;
                        // values are rendered as children of the attribute
                        string attrvalue = (const char*)curattr->children->content;
                        
                        // do something with attribute
                        cout << "attr: " << attrname << "=" << attrvalue << endl; 
                    }
                }
            }
            convertToMei(curNode);
        } else if (curNode->type == XML_TEXT_NODE) {
            std::string content = std::string((char*)curNode->content); 
            // check if content is only whitespaces
            content.erase(remove_if(content.begin(), content.end(), isspace), content.end());
            if (!content.empty()) {
                // inject content
                std::cout << "content: " << content << std::endl;
            }
        } else if (curNode->type == XML_COMMENT_NODE) {
            // add xml comment
            // string((const char*)curNode->content);
        }
    }
}
