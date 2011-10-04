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
        SeriesStmt * handleWork(xmlNode *workNode);
        void handleIdentification(xmlNode *curNode, Title *t, FileDesc *fd);
    };
}

#endif
