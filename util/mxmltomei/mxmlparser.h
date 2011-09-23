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

namespace mxmltomei {

class MXMLParser 
    {
    public:
        MXMLParser(const std::string mxmlFilePath);
        ~MXMLParser();

    private:
        const std::string mxmlFilePath;
    };
}



#endif
