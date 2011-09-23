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
    
//using namespace mxmltomei;

mxmltomei::MXMLParser::MXMLParser(const std::string mxmlFilePath)
: mxmlFilePath(mxmlFilePath) {
}

mxmltomei::MXMLParser::~MXMLParser() {};
