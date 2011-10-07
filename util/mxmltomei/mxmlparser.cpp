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

    // debug :: for applying xslt to xml files
    /*xsltStylesheet *xsl2 = xsltParseStylesheetFile((const xmlChar*)"/Users/gburlet/Documents/work/musicxml2mei-2.2.3.xsl");
    if(!xsl2) {
        std::cerr << "Error: can not find .xsl" << std::endl;
        exit(0);
    }

    xmlDoc *result2 = xsltApplyStylesheet(xsl2, xmlReadFile("/Users/gburlet/Documents/work/Dichterliebe01.xml", NULL, 0), NULL);
    xmlSaveFile("/Users/gburlet/Documents/work/libmei/util/mxmltomei/Dichterliebe01.mei", result2);

    xsltFreeStylesheet(xsl2);*/

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
    SourceDesc *sd = new SourceDesc();
    Source *src = new Source();
    TitleStmt *ts = new TitleStmt();
    Title *t = new Title();
        
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
                fd->addChild(handleWork(curNode));
            } else if (eleName == "movement-number") {
                xmlChar * c = xmlNodeGetContent(curNode);
                if(c) {
                    Identifier *id = new Identifier();
                    id->setValue(string((const char *)c));
                    t->addChild(id);
                }
                xmlFree(c);
            } else if (eleName == "movement-title") {
                xmlChar * c = xmlNodeGetContent(curNode);
                if(c) {
                    t->setValue(string((const char *)c));
                    ts->addChild(t);
                }
                xmlFree(c);
            } else if (eleName == "identification") {
                handleIdentification(curNode, ts);

                // copy filedesc to sourcedesc
                src->setChildren(fd->getChildren());
                sd->addChild(src);
                fd->addChild(sd);
            } else if (eleName == "defaults") {
                //src->addChild(handleDefaults(curNode));
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

/* check this, may need to be under <workDesc> tag in MEI instead of <seriesDesc> */
mei::SeriesStmt * MXMLParser::handleWork(xmlNode *workNode) {
    using namespace mei;
    SeriesStmt * ss = new SeriesStmt();
    Identifier *id = NULL;

    for(xmlNodePtr curNode = workNode->children; curNode; curNode = curNode->next) {
        if (curNode->type == XML_ELEMENT_NODE) {
            string eleName((const char *)curNode->name);

            if (eleName == "work-number") {
                string c = getContent(curNode);
                if(!c.empty()) {
                    id = new Identifier();
                    id->setValue(c);
                    ss->addChild(id);
                }
            } else if (eleName == "work-title") {
                string c = getContent(curNode);
                if(!c.empty()) {
                    Title *t = new Title();
                    t->setValue(c);
                    if (id) {
                        ss->addChildBefore(id, t);
                    } else {
                        ss->addChild(t);
                    }
                }
            } else if (eleName == "opus") {
                // TODO: handle opus tag
                continue;
            }
        }
    }
    return ss;
}

void MXMLParser::handleIdentification(xmlNode *identNode, mei::TitleStmt *ts) {
    // parse identification tags. 
    // add creator tags -> respstmt to title parent
    // add encoding tags -> sourcedesc to filedesc parent
    using namespace mei;
    
    for(xmlNodePtr curNode = identNode->children; curNode; curNode = curNode->next) {
        if (curNode->type == XML_ELEMENT_NODE) {
            string eleName((const char *)curNode->name);

            if (eleName == "creator") {
                string c = getContent(curNode);
                if(!c.empty()) {
                    RespStmt *rs = new RespStmt();
                    
                    Name *n = new Name();
                    n->setValue(c);

                    // get responsibility
                    string resp = getAttribute(curNode, "type");
                    if (!resp.empty()) {
                        Resp *r = new Resp();
                        r->setValue(resp);
                        rs->addChild(r);
                    }
                    rs->addChild(n);
                    ts->addChild(rs);
                }
            } else if (eleName == "rights") {                
                string rights = getContent(curNode);
                if(!rights.empty()) {
                    PubStmt *ps = new PubStmt();
                    Availability * a = new Availability();
                    UseRestrict * ur = new UseRestrict();
                    ur->setValue(rights);

                    a->addChild(ur);
                    ps->addChild(a);

                    FileDesc *fd = dynamic_cast<FileDesc*>(ts->getAncestor("fileDesc"));
                    fd->addChild(ps);
                }
            } else if (eleName == "encoding") {
                EncodingDesc *ed = new EncodingDesc();
                ProjectDesc *pd = new ProjectDesc();
                P *lastP = NULL;

                for(xmlNodePtr encodeNode = curNode->children; encodeNode; encodeNode = encodeNode->next) {
                    if (curNode->type == XML_ELEMENT_NODE) {
                        string encodeEleName((const char *)encodeNode->name);
                        if (encodeEleName == "software") {
                            P *p = new P();
                            lastP = p;

                            string soft = getContent(encodeNode);
                            if(!soft.empty()) {
                                p->setValue(soft);
                                pd->addChild(p);
                            }
                        } else if (encodeEleName == "encoding-date") {
                            Date *date = new Date();
                            string encDate = getContent(encodeNode);
                            if(!encDate.empty()) {
                                date->setValue(encDate);
                                if (lastP) {
                                    lastP->addChild(date);
                                } else {
                                    P *p = new P();
                                    p->addChild(date);
                                    pd->addChild(p);
                                }
                            }
                        } else if (encodeEleName == "supports") {
                            // TODO
                            continue;
                        }
                    }
                }

                MeiHead *mh = dynamic_cast<MeiHead*>(ts->getAncestor("meiHead"));
                ed->addChild(pd);
                mh->addChild(ed);
            }
        }
    }
}

/*mei::PhysDesc * MXMLParser::handleDefaults(xmlNode *defaultNode) {
    
} */

/* Helper function */
string MXMLParser::getContent(xmlNode *node) {
    xmlChar * c = xmlNodeGetContent(node);
    string content;
    if(c) {
        content.append((const char *)c);
        // remove whitespace
        content.erase(remove_if(content.begin(), content.end(), isspace), content.end());
    }

    xmlFree(c);
    return content;
}

/* Helper function
 * 
 * Given an attribute name, retrieve the single attribute
 */
string MXMLParser::getAttribute(xmlNode *node, string attName) {
    string att;
    xmlChar *type = new xmlChar[attName.size()+1];
    strcpy((char *)type, attName.c_str());
    if (xmlHasProp(node, type)) {
        xmlChar * attVal = xmlGetProp(node, type);
        att.append((const char *)attVal);
        xmlFree(attVal);
    }
    delete[] type;
    return att;
}


/*
    // check for element attributes
    std::string id = "";
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
*/
