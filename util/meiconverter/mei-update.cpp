/*
 * Script for converting MEI files from the 2010-05 specification to the 
 * 2011-05 specification.
 *
 * Jamie Klassen, July 6 2011
 *
*/

#include <libxml/tree.h>
#include <libxml/xmlreader.h>
#include <iostream>

using namespace std;

void Convert(xmlNode* node);

int main (int argc, char *argv[]) {
  if (argc > 1) {
     for (int i=1; i<argc; i++) {
        xmlDoc *doc = xmlReadFile(argv[i], NULL, 0);
        xmlNode *rootelement = xmlDocGetRootElement(doc);
        cout << "Converting " << argv[i] << "...";
        Convert(rootelement);
        xmlSaveFormatFile(argv[i], doc, 1);
        cout << "Converted.\n";
     }
  } else {
     // No arguments given: read standard input and write to standard output.
     xmlDoc *doc = xmlReadFile("-", NULL, 0);
     xmlNode *rootelement = xmlDocGetRootElement(doc);
     Convert(rootelement);
     xmlSaveFormatFile("-", doc, 1);
  }
  return 0;
}

void Convert(xmlNode* node) {
    xmlNode* curnode = NULL;
    for (curnode = node; curnode; curnode = curnode->next) {
        if (string((const char*)curnode->name) == "altmeiid") {
            xmlNodeSetName(curnode, (const xmlChar*)"meiId");
        } else if (string((const char*)curnode->name) == "accessdesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"accessRestrict");
        } else if (string((const char*)curnode->name) == "acqsource") {
            xmlNodeSetName(curnode, (const xmlChar*)"acqSource");
        } else if (string((const char*)curnode->name) == "addressline") {
            xmlNodeSetName(curnode, (const xmlChar*)"addrLine");
        } else if (string((const char*)curnode->name) == "anchoredtext") {
            xmlNodeSetName(curnode, (const xmlChar*)"anchoredText");
        } else if (string((const char*)curnode->name) == "avfile") {
            xmlNodeSetName(curnode, (const xmlChar*)"avFile");
        } else if (string((const char*)curnode->name) == "btrem") {
            xmlNodeSetName(curnode, (const xmlChar*)"bTrem");
        } else if (string((const char*)curnode->name) == "barline") {
            xmlNodeSetName(curnode, (const xmlChar*)"barLine");
        } else if (string((const char*)curnode->name) == "beamspan") {
            xmlNodeSetName(curnode, (const xmlChar*)"beamSpan");        
        } else if (string((const char*)curnode->name) == "beatrpt") {
            xmlNodeSetName(curnode, (const xmlChar*)"beatRpt");
        } else if (string((const char*)curnode->name) == "castgrp") {
            xmlNodeSetName(curnode, (const xmlChar*)"castGrp");
        } else if (string((const char*)curnode->name) == "castitem") {
            xmlNodeSetName(curnode, (const xmlChar*)"castItem");
        } else if (string((const char*)curnode->name) == "castlist") {
            xmlNodeSetName(curnode, (const xmlChar*)"castList");
        } else if (string((const char*)curnode->name) == "chanpr") {
            xmlNodeSetName(curnode, (const xmlChar*)"chanPr");
        } else if (string((const char*)curnode->name) == "changedesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"changeDesc");
        } else if (string((const char*)curnode->name) == "chorddef") {
            xmlNodeSetName(curnode, (const xmlChar*)"chordDef");
        } else if (string((const char*)curnode->name) == "chordmember") {
            xmlNodeSetName(curnode, (const xmlChar*)"chordMember");
        } else if (string((const char*)curnode->name) == "chordtable") {
            xmlNodeSetName(curnode, (const xmlChar*)"chordTable");
        } else if (string((const char*)curnode->name) == "classcode") {
            xmlNodeSetName(curnode, (const xmlChar*)"classCode");
        } else if (string((const char*)curnode->name) == "clefchange") {
            xmlNodeSetName(curnode, (const xmlChar*)"clef");
        } else if (string((const char*)curnode->name) == "contentitem") {
            xmlNodeSetName(curnode, (const xmlChar*)"contentItem");
        } else if (string((const char*)curnode->name) == "corpname") {
            xmlNodeSetName(curnode, (const xmlChar*)"corpName");
        } else if (string((const char*)curnode->name) == "editionstmt") {
            xmlNodeSetName(curnode, (const xmlChar*)"editionStmt");
        } else if (string((const char*)curnode->name) == "editorialdecl") {
            xmlNodeSetName(curnode, (const xmlChar*)"editorialDecl");
        } else if (string((const char*)curnode->name) == "encodingdesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"encodingDesc");
        } else if (string((const char*)curnode->name) == "eventlist") {
            xmlNodeSetName(curnode, (const xmlChar*)"eventList");
        } else if (string((const char*)curnode->name) == "exhibithist") {
            xmlNodeSetName(curnode, (const xmlChar*)"exhibHist");
        } else if (string((const char*)curnode->name) == "ftrem") {
            xmlNodeSetName(curnode, (const xmlChar*)"fTrem");
        } else if (string((const char*)curnode->name) == "figdesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"figDesc");
        } else if (string((const char*)curnode->name) == "filedesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"fileDesc");
        } else if (string((const char*)curnode->name) == "geogname") {
            xmlNodeSetName(curnode, (const xmlChar*)"geogName");
        } else if (string((const char*)curnode->name) == "grpsym") {
            xmlNodeSetName(curnode, (const xmlChar*)"grpSym");
        } else if (string((const char*)curnode->name) == "halfmrpt") {
            xmlNodeSetName(curnode, (const xmlChar*)"halfmRpt");
        } else if (string((const char*)curnode->name) == "handlist") {
            xmlNodeSetName(curnode, (const xmlChar*)"handList");
        } else if (string((const char*)curnode->name) == "handshift") {
            xmlNodeSetName(curnode, (const xmlChar*)"handShift");
        } else if (string((const char*)curnode->name) == "harppedal") {
            xmlNodeSetName(curnode, (const xmlChar*)"harpPedal");
        } else if (string((const char*)curnode->name) == "instrdef") {
            xmlNodeSetName(curnode, (const xmlChar*)"instrDef");
        } else if (string((const char*)curnode->name) == "instrgrp") {
            xmlNodeSetName(curnode, (const xmlChar*)"instrGrp");
        } else if (string((const char*)curnode->name) == "instrvoice") {
            xmlNodeSetName(curnode, (const xmlChar*)"instrVoice");
        } else if (string((const char*)curnode->name) == "keyaccid") {
            xmlNodeSetName(curnode, (const xmlChar*)"keyAccid");
        } else if (string((const char*)curnode->name) == "keysig") {
            xmlNodeSetName(curnode, (const xmlChar*)"keySig");
        } else if (string((const char*)curnode->name) == "langusage") {
            xmlNodeSetName(curnode, (const xmlChar*)"langUsage");
        } else if (string((const char*)curnode->name) == "layerdef") {
            xmlNodeSetName(curnode, (const xmlChar*)"layerDef");
        } else if (string((const char*)curnode->name) == "mei") {
            if (curnode->properties) {
                xmlAttr* curattr = curnode->properties;
                while (curattr) {
                    string tagname = string((const char*)curattr->name);
                    if (tagname == "meiversion"){
                        xmlSetProp(curnode, curattr->name, (const xmlChar*)"2012");
                        break;
                    } else if (tagname == "version") {
                        curattr->name = (const xmlChar*)"meiversion";
                        xmlSetProp(curnode, curattr->name, (const xmlChar*)"2012");
                    } else {
                        curattr = curattr->next;
                    }
                }
            }
        } else if (string((const char*)curnode->name) == "mrest") {
            xmlNodeSetName(curnode, (const xmlChar*)"mRest");
        } else if (string((const char*)curnode->name) == "mrpt") {
            xmlNodeSetName(curnode, (const xmlChar*)"mRpt");
        } else if (string((const char*)curnode->name) == "mrpt2") {
            xmlNodeSetName(curnode, (const xmlChar*)"mRpt2");
        } else if (string((const char*)curnode->name) == "meicorpus") {
            xmlNodeSetName(curnode, (const xmlChar*)"meiCorpus");
        } else if (string((const char*)curnode->name) == "meihead") {
            xmlNodeSetName(curnode, (const xmlChar*)"meiHead");
        } else if (string((const char*)curnode->name) == "metatext") {
            xmlNodeSetName(curnode, (const xmlChar*)"metaText");
        } else if (string((const char*)curnode->name) == "multirest") {
            xmlNodeSetName(curnode, (const xmlChar*)"multiRest");
        } else if (string((const char*)curnode->name) == "multirpt") {
            xmlNodeSetName(curnode, (const xmlChar*)"multiRpt");
        } else if (string((const char*)curnode->name) == "noteoff") {
            xmlNodeSetName(curnode, (const xmlChar*)"noteOff");
        } else if (string((const char*)curnode->name) == "noteon") {
            xmlNodeSetName(curnode, (const xmlChar*)"noteOn");
        } else if (string((const char*)curnode->name) == "notesstmt") {
            xmlNodeSetName(curnode, (const xmlChar*)"notesStmt");
        } else if (string((const char*)curnode->name) == "perfmedium") {
            xmlNodeSetName(curnode, (const xmlChar*)"perfMedium");
        } else if (string((const char*)curnode->name) == "periodname") {
            xmlNodeSetName(curnode, (const xmlChar*)"periodName");
        } else if (string((const char*)curnode->name) == "persname") {
            xmlNodeSetName(curnode, (const xmlChar*)"persName");
        } else if (string((const char*)curnode->name) == "pgdesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"pgDesc");
        } else if (string((const char*)curnode->name) == "pgfoot") {
            xmlNodeSetName(curnode, (const xmlChar*)"pgFoot");
        } else if (string((const char*)curnode->name) == "pgfoot1") {
            xmlNodeSetName(curnode, (const xmlChar*)"pgFoot");
        } else if (string((const char*)curnode->name) == "pgfoot2") {
            xmlNodeSetName(curnode, (const xmlChar*)"pgFoot2");
        } else if (string((const char*)curnode->name) == "pghead1") {
            xmlNodeSetName(curnode, (const xmlChar*)"pgHead");
        } else if (string((const char*)curnode->name) == "pghead") {
            xmlNodeSetName(curnode, (const xmlChar*)"pgHead");
        } else if (string((const char*)curnode->name) == "pghead2") {
            xmlNodeSetName(curnode, (const xmlChar*)"pgHead2");
        } else if (string((const char*)curnode->name) == "physdesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"physDesc");
        } else if (string((const char*)curnode->name) == "physloc") {
            xmlNodeSetName(curnode, (const xmlChar*)"physLoc");
        } else if (string((const char*)curnode->name) == "physmedium") {
            xmlNodeSetName(curnode, (const xmlChar*)"physMedium");
        } else if (string((const char*)curnode->name) == "platenum") {
            xmlNodeSetName(curnode, (const xmlChar*)"plateNum");
        } else if (string((const char*)curnode->name) == "projectdesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"projectDesc");
        } else if (string((const char*)curnode->name) == "pubstmt") {
            xmlNodeSetName(curnode, (const xmlChar*)"pubStmt");
        } else if (string((const char*)curnode->name) == "relateditem") {
            xmlNodeSetName(curnode, (const xmlChar*)"relatedItem");
        } else if (string((const char*)curnode->name) == "respstmt") {
            xmlNodeSetName(curnode, (const xmlChar*)"respStmt");
        } else if (string((const char*)curnode->name) == "revisiondesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"revisionDesc");
        } else if (string((const char*)curnode->name) == "roledesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"roleDesc");
        } else if (string((const char*)curnode->name) == "samplingdecl") {
            xmlNodeSetName(curnode, (const xmlChar*)"samplingDecl");
        } else if (string((const char*)curnode->name) == "scoredef") {
            xmlNodeSetName(curnode, (const xmlChar*)"scoreDef");
        } else if (string((const char*)curnode->name) == "seqnum") {
            xmlNodeSetName(curnode, (const xmlChar*)"seqNum");
        } else if (string((const char*)curnode->name) == "seriesstmt") {
            xmlNodeSetName(curnode, (const xmlChar*)"seriesStmt");
        } else if (string((const char*)curnode->name) == "sourcedesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"sourceDesc");
        } else if (string((const char*)curnode->name) == "staffdef") {
            if (curnode->properties) {
                xmlAttr* curattr = curnode->properties;
                while (curattr) {
                    if (string((const char*)curattr->name) == "label.full") {
                        string value = "";
                        if (curattr->children) {
                            value = string((const char*)curattr->children->content);
                        }
                        xmlUnsetProp(curnode, curattr->name);
                        xmlNewProp(curnode, (const xmlChar*)"label", (const xmlChar*)value.c_str());
                        break;
                    } else {
                        curattr = curattr->next;
                    }
                }
            }
            xmlNodeSetName(curnode, (const xmlChar*)"staffDef");
        } else if (string((const char*)curnode->name) == "staffgrp") {
            if (curnode->properties) {
                xmlAttr* curattr = curnode->properties;
                while (curattr) {
                    if (string((const char*)curattr->name) == "label.full") {
                        string value = "";
                        if (curattr->children) {
                            value = string((const char*)curattr->children->content);
                        }
                        xmlUnsetProp(curnode, curattr->name);
                        xmlNewProp(curnode, (const xmlChar*)"label", (const xmlChar*)value.c_str());
                        break;
                    } else {
                        curattr = curattr->next;
                    }
                }
            }
            xmlNodeSetName(curnode, (const xmlChar*)"staffGrp");
        } else if (string((const char*)curnode->name) == "stdvals") {
            xmlNodeSetName(curnode, (const xmlChar*)"stdVals");
        } else if (string((const char*)curnode->name) == "stylename") {
            xmlNodeSetName(curnode, (const xmlChar*)"styleName");
        } else if (string((const char*)curnode->name) == "symboldef") {
            xmlNodeSetName(curnode, (const xmlChar*)"symbolDef");
        } else if (string((const char*)curnode->name) == "symboltable") {
            xmlNodeSetName(curnode, (const xmlChar*)"symbolTable");
        } else if (string((const char*)curnode->name) == "sysreq") {
            xmlNodeSetName(curnode, (const xmlChar*)"sysReq");
        } else if (string((const char*)curnode->name) == "termlist") {
            xmlNodeSetName(curnode, (const xmlChar*)"termList");
        } else if (string((const char*)curnode->name) == "titlepage") {
            xmlNodeSetName(curnode, (const xmlChar*)"titlePage");
        } else if (string((const char*)curnode->name) == "titlestmt") {
            xmlNodeSetName(curnode, (const xmlChar*)"titleStmt");
        } else if (string((const char*)curnode->name) == "treatmenthist") {
            xmlNodeSetName(curnode, (const xmlChar*)"treatHist");
        } else if (string((const char*)curnode->name) == "treatmentsched") {
            xmlNodeSetName(curnode, (const xmlChar*)"treatSched");
        } else if (string((const char*)curnode->name) == "trkname") {
            xmlNodeSetName(curnode, (const xmlChar*)"trkName");
        } else if (string((const char*)curnode->name) == "tupletspan") {
            xmlNodeSetName(curnode, (const xmlChar*)"tupletSpan");
        } else if (string((const char*)curnode->name) == "userestrict") {
            xmlNodeSetName(curnode, (const xmlChar*)"useRestrict");
        } else if (string((const char*)curnode->name) == "profiledesc") {
            xmlNodeSetName(curnode, (const xmlChar*)"workDesc");
            xmlNode* work = xmlNewNode(curnode->ns, (const xmlChar*)"work");
            xmlNode* copyprops = xmlCopyNodeList(curnode->children);
            xmlAddChildList(work,copyprops);
            xmlNodeSetContent(curnode, NULL);
            xmlAddChild(curnode,work);
        }
        Convert(curnode->children);
    }
}