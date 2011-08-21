//
//  File.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-21.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <gtest/gtest.h>
#include <mei/xmlimport.h>
#include <mei/xmlexport.h>
#include <mei/meidocument.h>

using std::string;

TEST(TextXmlMeiExport, TestBasicExport) {
    mei::XmlExport::meiDocumentToFile("filename.mei");
}