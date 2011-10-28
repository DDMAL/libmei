/*
 * parser.h
 * musicxmltomei
 *
 * Created by Greg Burlet on 11-09-23.
 * 
 * Header file for class with functionality to parse MusicXML uncompressed files
 */

#ifndef MXMLPARSER_H
#define MXMLPARSER_H

#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
#include <sstream>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xpath.h>
#include <libxslt/xsltInternals.h>
#include <libxslt/transform.h>

#include <mei/shared.h>
#include <mei/header.h>
#include <mei/cmn.h>
#include <mei/xmlexport.h>

namespace mparser {

class MXMLParser 
    {
    public:
        MXMLParser(const std::string mxmlFilePath);
        ~MXMLParser();

        void begin();
        void output(const std::string outputPath);

    private:
        const std::string mxmlFilePath;
        xmlDoc *doc;
        mei::MeiDocument *meiDoc;

        void partToScore();
        void convertToMei(xmlNode *node);
		void fifth2mei(std::string &fifths);
        std::string getContent(xmlNode *node);
		std::string getContent(xmlChar *xpath, xmlNode* context = NULL, int i = 0);
        std::string getAttribute(xmlNode *node, std::string attName);
		xmlXPathObject* getNodeSet(xmlChar *xpath, xmlNode *context = NULL);
        mei::SeriesStmt * handleWork(xmlNode *workNode);
        void handleIdentification(xmlNode *identNode, mei::TitleStmt *ts);

        /**
         * \brief handles <part> tag
         * \return map of part ID to part name
         */
        void handleParts(xmlNode *partsNode, mei::Score *score);
        void handlePartAttributes(xmlNode *attr, mei::Score *score, std::string pname, bool createLocalScoreDef);
        void handleMeasures();

		std::string int2str(int i);
    };
}

#endif
