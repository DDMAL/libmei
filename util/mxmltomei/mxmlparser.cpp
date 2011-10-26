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
using std::pair;
using std::cout;
using std::cerr;
using std::endl;
using mparser::MXMLParser;

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

            meiDoc = new mei::MeiDocument();
            
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

    fd->addChild(ts);
    mh->addChild(fd);
    m->addChild(mh);
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
            	handleParts(curNode, score);
            } else if (eleName == "measure") {
                // likely be multiple measures
                // if key changes (<attributes> tag present in <measure>) then start a NEW section
                //handleMeasure(curNode, score, partid2name);
            }
        } else if (curNode->type == XML_COMMENT_NODE) {
            // add xml comment
            // string((const char*)curNode->content);
            continue;
        }
    }    
}

void MXMLParser::output(const string outputPath) {
    mei::XmlExport::meiDocumentToFile(meiDoc, outputPath);
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

void MXMLParser::handleParts(xmlNode *partsNode, mei::Score *score) {
	// TODO::use relative xpath context for increased efficiency
	/*
	 * SCORE-LEVEL SCOREDEF
	 */
	mei::ScoreDef *sd_global = new mei::ScoreDef();

	// look in 1st measure for score-level beat information
	string beat = getContent((xmlChar*)"//measure[@number='1']/part/attributes/time/beats");
	if (!beat.empty()) {
		sd_global->m_MetersLog.setMeterCount(beat);
	}
	string beat_type = getContent((xmlChar*)"//measure[@number='1']/part/attributes/time/beat-type");
	if (!beat_type.empty()) {
		sd_global->m_MetersLog.setMeterUnit(beat_type);
	}
	// symbol (common | cut | single-number | note | dotted-note | normal)
	string symbol = getContent((xmlChar*)"//measure[@number='1']/part/attributes/time/@symbol");
	if (!symbol.empty()) {
		if (symbol == "common" || symbol == "cut") {
			sd_global->m_MetersVis.setMeterSym(symbol);
		} else if (symbol == "single-number") {
			sd_global->m_MetersVis.setMeterRend("denomsym");
		} // TODO:: note, dotted-note
	}
	if (!getContent((xmlChar*)"//measure[@number='1']/part/attributes/time/senza-misura").empty()) {
		sd_global->m_MetersVis.setMeterRend("invis");
	}

	// look in 1st measure for score-level key signature information
	string fifths = getContent((xmlChar*)"//measure[@number='1']/part/attributes/key/fifths");
	if(!fifths.empty()) {
		fifth2mei(fifths);
		sd_global->m_KeySigsLog.setKeySig(fifths);
	}
	string mode = getContent((xmlChar*)"//measure[@number='1']/part/attributes/key/mode");
	if(!mode.empty()) {
		sd_global->m_KeySigsLog.setKeyMode(mode);
	}

	// optimization in effect?
	string opt = getContent((xmlChar*)"//measure/part/attributes/staff-details/@print-object");
	if (!opt.empty() && opt == "no") {
		sd_global->addAttribute("optimize", "true");
	}

	// TODO::add other defaults from mxml defaults tag
	score->addChild(sd_global);
	
	/*
	 * STAFF META INFORMATION
	 */
	mei::StaffGrp *sg_global = new mei::StaffGrp();

	// TODO:: part-groups, percussion, tab
	// for each part
	int meiStaffNum = 1;
	mei::StaffGrp *sg_cur = NULL;
    for(xmlNodePtr curNode = partsNode->children; curNode; curNode = curNode->next) {
    	string eleName((const char *)curNode->name);

        if (eleName == "score-part") {
        	string pid = getAttribute(curNode, "id");
			// set staffgrp scope
			sg_cur = sg_global;
			
			// cache label.full and label.abbr
			string label, label_abbr;

			// get number of staves	
			int staffCount = 1;
			string query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/staves";
			xmlXPathObject *result = getNodeSet((xmlChar*)query.c_str());
			if (result) {
				// more than 1 staff
				mei::StaffGrp *sg_local = new mei::StaffGrp();

				// set local staffgrp attributes
				sg_local->m_Staffgroupingsym.setSymbol("brace"); //symbol
				string query = "//score-part[@id='" + pid + "']/part-name";
				label = getContent((xmlChar*)query.c_str());
				if(!label.empty()) {
					sg_local->m_Common.setLabel(label); //label
				}
				query = "//score-part[@id='" + pid + "']/part-abbreviation";
				label_abbr = getContent((xmlChar*)query.c_str());
				if(!label_abbr.empty()) {
					sg_local->m_LabelsAddl.setLabelAbbr(label_abbr); //label.abbr
				}

				sg_global->addChild(sg_local);
				// set staffgrp scope
				sg_cur = sg_local;
				
				staffCount += atoi(getContent(result->nodesetval->nodeTab[0]).c_str()) - 1;
				xmlXPathFreeObject(result);
			} 
			
			// cache ppq
			query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/divisions";
			string ppq = getContent((xmlChar*)query.c_str());
			
			// get instrument data
			map<pair<string,string>,vector<mei::LayerDef*> > meiLayers; // <pid,staffnum>->layer
			query = "//score-part[@id='" + pid + "']/score-instrument";
			result = getNodeSet((xmlChar*)query.c_str());
			if (result) {
				xmlNodeSet *nodeset = result->nodesetval;
				// for each instrument in the part
				for (int iInstr = 0; iInstr < nodeset->nodeNr; iInstr++) {
					xmlNode *instrNode = nodeset->nodeTab[iInstr];
					string mid = getAttribute(instrNode, "id"); // midi instrument ID
					string iName = getContent((xmlChar*)"child::instrument-name", instrNode);
					query = "following-sibling::midi-instrument[@id='" + mid + "']/midi-channel";
					string midiChan = getContent((xmlChar*)query.c_str(), instrNode);
					query = "following-sibling::midi-instrument[@id='" + mid + "']/midi-program";
					string midiProg = getContent((xmlChar*)query.c_str(), instrNode);
					query = "following-sibling::midi-instrument[@id='" + mid + "']/midi-name";
					string midiName = getContent((xmlChar*)query.c_str(), instrNode);

					// get staff number the instrument is associated with
					// look at what staff first note the instrument plays
					query = "//measure/part[@id='" + pid + "']/note[instrument[@id='" + mid + "']]/staff";
					string onStaff = getContent((xmlChar*)query.c_str(), NULL, 0);
					if (onStaff.empty()) {
						onStaff = "1";
					}

					// create layers
					mei::LayerDef *ld = new mei::LayerDef();
					mei::InstrDef *inDef = new mei::InstrDef();
					if (!iName.empty()) {
						inDef->m_Common.setN(iName);
					}
					if (!midiProg.empty()) {
						inDef->m_Midiinstrument.setMidiInstrnum(midiProg);
					}
					if (!midiName.empty()) {
						inDef->m_Midiinstrument.setMidiInstrname(midiName);
					}
					if (!midiChan.empty()) {
						inDef->m_Channelized.setMidiChannel(midiChan);
					}
					ld->addChild(inDef);				

					// populate layer information
					pair<string,string> layerkey(pid,onStaff);
					pair<map<pair<string,string>,vector<mei::LayerDef*> >::iterator,bool> ret;
					vector<mei::LayerDef*> theLayers;
					theLayers.push_back(ld);
					ret = meiLayers.insert(pair<pair<string,string>, vector<mei::LayerDef*> >(layerkey, theLayers) ); 
				  	if (ret.second == false)
				  	{
						// key already exists
						(ret.first->second).push_back(ld);
				  	}
				}
				xmlXPathFreeObject(result);
			}

			// for each staff
			for(int iStaff = 0; iStaff < staffCount; iStaff++) {
				mei::StaffDef *sd = new mei::StaffDef();
				
				// set local staffdef attributes
				sd->m_Common.setN(int2str(meiStaffNum)); //n				
				if (staffCount == 1) {
					if(!label.empty()) {
						sd->m_Common.setLabel(label); //label
					}
					if(!label_abbr.empty()) {
						sd->m_LabelsAddl.setLabelAbbr(label_abbr); //label.abbr
					}
				}

				// general staff information
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/staff-details/staff-lines";
				string nLines = getContent((xmlChar*)query.c_str());
				if(!nLines.empty()) { //lines
					sd->m_StaffDefVis.setLines(nLines);
				} else {
					// set 5 by default
					sd->m_StaffDefVis.setLines("5");
				}

				// clef information
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/clef[@number='" + int2str(iStaff+1) + "' or not(@number)]/line";
				string clefLine = getContent((xmlChar*)query.c_str());
				if(!clefLine.empty()) { //clefline
					sd->m_CleffingLog.setClefLine(clefLine);
				}
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/clef[@number='" + int2str(iStaff+1) + "' or not(@number)]/sign";
				string clefSign = getContent((xmlChar*)query.c_str());
				if(!clefSign.empty()) { //clefshape
					sd->m_CleffingLog.setClefShape(clefSign);
				}
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/clef[@number='" + int2str(iStaff+1) + "' or not(@number)]/clef-octave-change";
				string clefOctaveShift = getContent((xmlChar*)query.c_str());
				if(!clefOctaveShift.empty()) { //clef-octave-shift, pattern = [1,2,3] -> [8|15|22]
					int shift = atoi(clefOctaveShift.c_str());
					string meiShift;
					switch (abs(shift)) {
						case 1:
							meiShift = "8";
							break;
						case 2:
							meiShift = "15";
							break;
						case 3:
							meiShift = "22";
							break;
						default:
							meiShift = "0";
					}
					sd->m_CleffingLog.setClefDis(meiShift);
					string place = (shift > 0) ? "above" : "below";
					sd->m_CleffingLog.setClefDisPlace(place);
				}

				// key signature information
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/key[@number='" + int2str(iStaff+1) + "' or not(@number)]/fifths";
				string keySig = getContent((xmlChar*)query.c_str());
				if(!keySig.empty()) { //keySig
					fifth2mei(keySig);
					sd->m_KeySigsLog.setKeySig(keySig);					
				}
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/key[@number='" + int2str(iStaff+1) + "' or not(@number)]/mode";
				string keyMode = getContent((xmlChar*)query.c_str());
				if(!keyMode.empty()) { //clefshape
					sd->m_KeySigsLog.setKeyMode(keyMode);
				}

				// divisions
				if(!ppq.empty()) {
					sd->m_Timebase.setPpq(ppq);
				}

				// transpose
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/transpose[@number='" + int2str(iStaff+1) + "' or not(@number)]/chromatic";
				string chromatic = getContent((xmlChar*)query.c_str());
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/transpose[@number='" + int2str(iStaff+1) + "' or not(@number)]/octave-change";
				string octChange = getContent((xmlChar*)query.c_str());
				if(!chromatic.empty()) { // trans.semi
					int oct = (octChange.empty()) ? 0 : atoi(octChange.c_str());
					int semi = atoi(chromatic.c_str()) + (12*oct);
					sd->m_Transposition.setTransSemi(int2str(semi));
				}
				query = "//measure[@number='1']/part[@id='" + pid + "']/attributes/transpose[@number='" + int2str(iStaff+1) + "' or not(@number)]/diatonic";
				string diatonic = getContent((xmlChar*)query.c_str());
				if(!diatonic.empty()) { // trans.diat
					sd->m_Transposition.setTransDiat(diatonic);
				}

				// finish constructing layers
				map<pair<string,string>,vector<mei::LayerDef*> >::const_iterator it;
				it = meiLayers.find(pair<string,string>(pid,int2str(iStaff+1)));
				if (it != meiLayers.end()) {
					vector<mei::LayerDef*> theLayers = it->second;
					
					// for each layer in the staff
					for(int iLayer = 0; iLayer < theLayers.size(); iLayer++) {
						mei::LayerDef *curLayer = theLayers[iLayer];
						curLayer->m_Common.setN(int2str(iLayer+1));
						sd->addChild(curLayer);
					}
				}

				sg_cur->addChild(sd);
				meiStaffNum++;
			}
		}	
	}

	// add parts to scoredef
	sd_global->addChild(sg_global);
	
	
	/*int staffCount = 0;
	xmlXPathObject *result;
	result = getNodeSet((xmlChar*)"//part-list/score-part");
	if (result) {
		staffCount += result->nodesetval->nodeNr;
		xmlXPathFreeObject(result);
	}

	result = getNodeSet((xmlChar*)"//measure[@number='1']/part/attributes/staves");
	if (result) {
		xmlNodeSetPtr nodes = result->nodesetval;
		for(int i = 0; i < nodes->nodeNr; i++) {
			staffCount += atoi(getContent(nodes->nodeTab[i]).c_str()) - 1;
		}
		xmlXPathFreeObject(result);
	}*/

}

void MXMLParser::fifth2mei(string &fifths) {
	int ififth = atoi(fifths.c_str());
	if (ififth > 0) {
		fifths += "s";
	} else if (ififth < 0) {
		fifths.clear();
		fifths = int2str(abs(ififth)) + "f";
	} 
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

/* Helper function
 *
 * get xpath result
 */

xmlXPathObject* MXMLParser::getNodeSet(xmlChar *xpath, xmlNode* context) {
	xmlXPathContextPtr c;
	xmlXPathObjectPtr result;
	
	c = xmlXPathNewContext(doc);
	if (context) {
		c->node = context;
	}

	if (c == NULL) {
		cout << "xpath: error in xmlXPathNewContext" << endl;
		return NULL;
	}
	result = xmlXPathEvalExpression(xpath, c);
	xmlXPathFreeContext(c);
	if (result == NULL) {
		cout << "xpath: error in xmlXPathEvalExpression" << endl;
		return NULL;
	}
	if(xmlXPathNodeSetIsEmpty(result->nodesetval)){
		xmlXPathFreeObject(result);
        cout << "xpath: no result" << endl;
		return NULL;
	}
	return result;
}

string MXMLParser::getContent(xmlChar *xpath, xmlNode* context, int i) {
	xmlNodeSet *nodeset;
	xmlXPathObject *result = getNodeSet(xpath, context);
	string cont = "";

	if (result) {
		nodeset = result->nodesetval;
		cont = getContent(nodeset->nodeTab[i]);
		xmlXPathFreeObject(result);
	}
	return cont;
}

string MXMLParser::int2str(int i) {
	std::stringstream ss;
	ss << i;
	return ss.str();
}
