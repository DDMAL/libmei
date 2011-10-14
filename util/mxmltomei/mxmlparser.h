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
#include <libxslt/xsltInternals.h>
#include <libxslt/transform.h>
    
#include <mei/shared.h>
#include <mei/header.h>
#include <mei/cmn.h>
#include <mei/xmlexport.h>

namespace mei {

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
        MeiDocument *meiDoc;

        void partToScore();
        void convertToMei(xmlNode *node);
        std::string getContent(xmlNode *node);
        std::string getAttribute(xmlNode *node, std::string attName);
        SeriesStmt * handleWork(xmlNode *workNode);
        void handleIdentification(xmlNode *identNode, TitleStmt *ts);

        /**
         * \brief handles <part> tag
         * \return map of part ID to part name
         */
        std::map<std::string,std::string> handleParts(xmlNode *partsNode);
        void handlePartAttributes(xmlNode *attr, Score *score, std::string pname, bool createLocalScoreDef);
        void handleMeasure(xmlNode *measureNode, Score *score, std::map<std::string,std::string> parts);
    };
}

#endif
