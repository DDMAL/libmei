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
using std::vector;
using std::map;
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

    /* MEI BODY ELEMENTS */
    Music *mus = new Music();
    Mdiv *mdiv = new Mdiv();
    Score *score = new Score();
    Section *sec = new Section();
    ScoreDef *scoredef = new ScoreDef();
    StaffGrp *staffgrp_global = new StaffGrp();

    map<string,string> partid2name;

    fd->addChild(ts);
    mh->addChild(fd);
    m->addChild(mh);
    scoredef->addChild(staffgrp_global);
    score->addChild(scoredef);
    score->addChild(sec);
    mdiv->addChild(score);
    mus->addChild(mdiv);
    m->addChild(mus);
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
                
            } else if (eleName == "credit") {
                // may be multiple credits
            } else if (eleName == "part-list") {
                partid2name = handleParts(curNode);
            } else if (eleName == "measure") {
                // likely be multiple measures
                // if key changes (<attributes> tag present in <measure>) then start a NEW section
                handleMeasure(curNode, score, partid2name);
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

map<string,string> MXMLParser::handleParts(xmlNode *partsNode) {
    map<string,string> pid2name;

     for(xmlNodePtr curNode = partsNode->children; curNode; curNode = curNode->next) {
        if (curNode->type == XML_ELEMENT_NODE) {
            string eleName((const char *)curNode->name);

            if (eleName == "score-part") {
                string pid = getAttribute(curNode, "id");

                for(xmlNodePtr infoNode = curNode->children; infoNode; infoNode = infoNode->next) {
                    if (infoNode->type == XML_ELEMENT_NODE) {
                        string eleName((const char *)infoNode->name);

                        if (eleName == "part-name") {
                            string pname = getContent(infoNode);
                            if(!pname.empty()) {
                                pid2name.insert(std::pair<string,string>(pid, pname));
                            }
                        } else if (eleName == "score-instrument") {
                            // TODO: MIDI definitions
                        } else if (eleName == "midi-device") {
                            // TODO: MIDI definitions
                        } else if (eleName == "midi-instrument") {
                            // TODO: MIDI definitions
                        }
                    }
                }
            }
        }
    }

    return pid2name;
}

void MXMLParser::handleMeasure(xmlNode *measureNode, mei::Score *score, map<string,string> parts) {
    using namespace mei;
    Measure * m = new Measure();

    string mnum = getAttribute(measureNode, "number");
    if(!mnum.empty()) {
        m->m_Common.setN(mnum);
    }
    string mwidth = getAttribute(measureNode, "width");
    if(!mwidth.empty()) {
        m->m_Width.setWidth(mwidth);
    }
    
    // for extensibility, may need to include multiple sections for time sig/key sig changes
    Section *curSec = dynamic_cast<Section*>(score->getChildrenByName("section").back());
    
    // for each part
    for(xmlNodePtr partNode = measureNode->children; partNode; partNode = partNode->next) {
        if (partNode->type == XML_ELEMENT_NODE) {
            string eleName((const char *)partNode->name);
            
            // get part ID
            string pid = getAttribute(partNode, "id");

            // for each part's info: what the instrument plays
            int partNum = 0;
            for(xmlNodePtr partInfo = partNode->children; partInfo; partInfo = partInfo->next) {
                if (partInfo->type == XML_ELEMENT_NODE) {
                    string eleNameInf((const char *)partInfo->name);

                    if (eleNameInf == "print") {
                        // TODO
                    } else if (eleNameInf == "attributes") {
                        // if attributes tag is present => new 
                        map<string, string>::iterator it;

                        string pname = parts.find(pid)->second;
                        handlePartAttributes(partInfo, score, pname, partNum == 0);
                    } else if (eleNameInf == "direction") {
                        // TODO
                    } else if (eleNameInf == "note") {

                    } else if (eleNameInf == "chord") {

                    }
                    partNum++;
                }    
            }
        }
    }
    curSec->addChild(m);
}

void MXMLParser::handlePartAttributes(xmlNode *attr, mei::Score *score, string pname, bool createLocalScoreDef) {
    using namespace mei;

    if (score->hasChildren("scoreDef")) {
        int nStave = 1;
        ScoreDef *scoredef_global = dynamic_cast<ScoreDef*>(score->getChildrenByName("scoreDef").front());
        
        ScoreDef *scoredef_local = new ScoreDef();

        //vector staves<StaffDef*>;
        StaffDef *staffd = new StaffDef();
        //staves.push_back(staffd);

        staffd->m_StaffDefVis.setLines("5");
        staffd->m_Common.setLabel(pname);

        for (xmlNodePtr curNode = attr->children; curNode; curNode = curNode->next) {
            if (curNode->type == XML_ELEMENT_NODE) {
                string eleName((const char *)curNode->name);

                if (eleName == "divisions") {
                    string div = getContent(curNode);
                    if (!div.empty()) {
                        staffd->m_Timebase.setPpq(div);
                    }
                } else if (eleName == "key") {
                    string fifths, mode;
                    for (xmlNodePtr keyNode = curNode->children; keyNode; keyNode = keyNode->next) {
                        if (keyNode->type == XML_ELEMENT_NODE) {
                            string eleName((const char *)keyNode->name);
                            
                            if (eleName == "fifths") {
                                string fifths = getContent(keyNode);
                                if (!fifths.empty()) {
                                    int ififth = atoi(fifths.c_str());
                                    if (ififth > 0) {
                                        fifths += "s";
                                    } else if (ififth < 0) {
                                        fifths.clear();
                                        std::stringstream ss;
                                        ss << abs(ififth);
                                        fifths = string(ss.str()) + "f";
                                    } 
                                    staffd->m_KeySigsLog.setKeySig(fifths);

                                    if (!scoredef_global->m_KeySigsLog.hasKeySig()) {
                                        scoredef_global->m_KeySigsLog.setKeySig(fifths);
                                    }
                                    if (createLocalScoreDef) {
                                        scoredef_local->m_KeySigsLog.setKeySig(fifths);
                                    }
                                }
                            } else if (eleName == "mode") {
                                string mode = getContent(keyNode);
                                if (!mode.empty()) {
                                    staffd->m_KeySigsLog.setKeyMode(mode);

                                    if (!scoredef_global->m_KeySigsLog.hasKeyMode()) {
                                        scoredef_global->m_KeySigsLog.setKeyMode(mode);
                                    }
                                    if (createLocalScoreDef) {
                                        scoredef_local->m_KeySigsLog.setKeyMode(mode);
                                    }
                                }
                            }
                        }
                    }
                    /* 
                     * key signature sanity check
                     * if no mode specified, for example circle of fifths 0 (C maj or a min)
                     * assume major key signature
                     */
                    if (!staffd->m_KeySigsLog.hasKeyMode()) {
                        staffd->m_KeySigsLog.setKeyMode("major");
                        if (!scoredef_global->m_KeySigsLog.hasKeyMode()) {
                            scoredef_global->m_KeySigsLog.setKeyMode("major");
                        }
                        if (createLocalScoreDef) {
                            scoredef_local->m_KeySigsLog.setKeyMode("major");
                        }
                    }
                } else if (eleName == "time") {
                    for (xmlNodePtr timeNode = curNode->children; timeNode; timeNode = timeNode->next) {
                        if (timeNode->type == XML_ELEMENT_NODE) {
                            string eleName((const char *)timeNode->name);
                            
                            if (eleName == "beats") {
                                string beats = getContent(timeNode);
                                if (!beats.empty()) {
                                    // fill scoredef default info
                                    if (!scoredef_global->m_MetersLog.hasMeterCount()) {
                                        scoredef_global->m_MetersLog.setMeterCount(beats);
                                    }
                                    if (createLocalScoreDef) {
                                        scoredef_local->m_MetersLog.setMeterCount(beats);
                                    }
                                }
                            } else if (eleName == "beat-type") {
                                string btype = getContent(timeNode);
                                if (!btype.empty()) {
                                    // fill scoredef default info
                                    if (!scoredef_global->m_MetersLog.hasMeterUnit()) {
                                        scoredef_global->m_MetersLog.setMeterUnit(btype);
                                    }
                                    if (createLocalScoreDef) {
                                        scoredef_local->m_MetersLog.setMeterUnit(btype);
                                    }
                                }
                            }
                        }
                    }
                } else if (eleName == "staves") {
                    // if > 1 staff => start new <staffgrp>
                    string numStaves = getContent(curNode);
                    if (!numStaves.empty()) {
                        nStave = atoi(numStaves.c_str());
                    }
                } else if (eleName == "clef") {
                    // clef number (if multiple staves)
                    string cid = getAttribute(curNode, "number");
                    
                    for (xmlNodePtr clefNode = curNode->children; clefNode; clefNode = clefNode->next) {
                        if (clefNode->type == XML_ELEMENT_NODE) {
                            string eleName((const char *)clefNode->name);
                            
                            if (eleName == "sign") {
                                string sign = getContent(clefNode);
                                if (!sign.empty()) {
                                    staffd->m_CleffingLog.setClefShape(sign);
                                }
                            } else if (eleName == "line") {
                                string line = getContent(clefNode);
                                if (!line.empty()) {
                                    staffd->m_CleffingLog.setClefLine(line);
                                }
                            }
                        }
                    }
                }
            }
        }
        
        // define new staff group
        if (nStave > 1) {
            StaffGrp *sgrp = new StaffGrp();
            sgrp->m_Staffgroupingsym.setSymbol("bracket");

            // TODO:: copy data from current staffdef and change the label appending staffnumber to it => make copy constructor
        } else {
            // append staff definition to global staff group
            StaffGrp *sgrp_global = dynamic_cast<StaffGrp*>(scoredef_global->getChildrenByName("staffGrp").front());
            sgrp_global->addChild(staffd);
        }
        
        if (createLocalScoreDef) {
            // for extensibility, may need to include multiple sections for time sig/key sig changes
            Section *curSec = dynamic_cast<Section*>(score->getChildrenByName("section").back());
            curSec->addChild(scoredef_local);
        } else {
            delete scoredef_local;
        }
    }
    // else throw exception
}

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
