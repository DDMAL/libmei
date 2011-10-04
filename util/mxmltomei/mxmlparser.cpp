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

MXMLParser::~MXMLParser() {
    delete meiDoc;    
};

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

            meiDoc = new MeiDocument();
            
            // TODO: if MusicXML opus tags present, convert to meiCorpus by calling convertToMei for each included movement

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
	// xmlSaveFile("/Users/gburlet/Documents/work/libmei/util/mxmltomei/Dichterliebe01_timewise.xml", result);

	xmlFreeDoc(doc);
	xsltFreeStylesheet(xsl);
    
    doc = result;
    std::cout << "success." << std::endl;
}

void MXMLParser::convertToMei(xmlNode *parentNode) {
    using namespace mei;
    Mei *m = new Mei();

    /* MEI HEADER ELEMENTS */
    MeiHead* mh = new MeiHead();
    FileDesc *fd = new FileDesc();
    TitleStmt *ts = new TitleStmt();
    Title *t = new Title();
    
    ts->addChild(t);
    fd->addChild(ts);
    mh->addChild(fd);
    m->addChild(mh);
    meiDoc->setRootElement(m); // this will need to be modified once OPUS functionality is included

    for(xmlNodePtr curNode = parentNode->children; curNode; curNode = curNode->next) {
        if (curNode->type == XML_ELEMENT_NODE) {
            // handle element node
            string eleName((const char *)curNode->name);
            cout << "name: " << eleName << endl;

            /* MEIHEAD ELEMENTS */
            if (eleName == "work") {
                //fd->addChild(handleWork(curNode));
            } else if (eleName == "movement-number") {
                xmlChar * c = xmlNodeGetContent(curNode);
                if(c) {
                    /*Identifier *id = new Identifier();
                    id->setValue(string((const char *)c));
                    t->addChild(id);*/
                }
                xmlFree(c);
            } else if (eleName == "movement-title") {
                xmlChar * c = xmlNodeGetContent(curNode);
                if(c) {
                    t->setValue(string((const char *)c));
                    t->m_Typed.setType("main");
                }
                xmlFree(c);
            } else if (eleName == "identification") {
                handleIdentification(curNode, t, fd);
            } else if (eleName == "defaults") {

            } else if (eleName == "credit") {
                // may be multiple credits
            } else if (eleName == "part-list") {

            } else if (eleName == "measure") {
                // may be multiple measures
            }
        } else if (curNode->type == XML_COMMENT_NODE) {
            // add xml comment
            // string((const char*)curNode->content);
            continue;
        }
    }
}

void MXMLParser::output(const string outputPath) {
    XmlExport::meiDocumentToFile(meiDoc, outputPath);
}

/* ask Andrew about series
mei::SeriesStmt * MXMLParser::handleWork(xmlNode *workNode) {
    using namespace mei;
    SeriesStmt * ss = new SeriesStmt();

    for(xmlNodePtr curNode = workNode->children; curNode; curNode = curNode->next) {
        if (curNode->type == XML_ELEMENT_NODE) {
            string eleName((const char *)curNode->name);

            if (eleName == "work-number") {
                xmlChar * c = xmlNodeGetContent(curNode);
                if(c) {
                    
                }
                xmlFree(c);
            } else if (eleName == "work-title") {
                xmlChar * c = xmlNodeGetContent(curNode);
                if(c) {
                    
                }
                xmlFree(c);
            } else if (eleName == "opus") {
                // TODO: handle opus tag
                continue;
            }
        }
    }
    return ss;
}
*/

void MXMLParser::handleIdentification(xmlNode *curNode, mei::Title *t, mei::FileDesc *fd) {
    // parse identification tags. 
    // add creator tags -> respstmt to title parent
    // add encoding tags -> sourcedesc to filedesc parent
}



        // check for element attributes
            /*std::string id = "";
            if (curNode->properties) {
                for (xmlAttr *curattr = curNode->properties; curattr; curattr = curattr->next) {
                    if (curattr->atype == XML_ATTRIBUTE_ID) {
                        id = (const char*)curattr->children->content;
                    } else {
                        string attrname = (const char*)curattr->name;
                        // values are rendered as children of the attribute
                        string attrvalue = (const char*)curattr->children->content;
                        
                        // do something with attribute
                        //cout << "attr: " << attrname << "=" << attrvalue << endl;
                    }
                }
            }

            // check for content
            if (curNode->children && curNode->children->type == XML_TEXT_NODE) {
                string content = string((char*)curNode->children->content); 
                // check if content is only whitespaces
                content.erase(remove_if(content.begin(), content.end(), isspace), content.end());
                if (!content.empty()) {
                    // inject content
                    //std::cout << "content: " << content << std::endl;
                }
            }
