//
//  test_xmlinput.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <gtest/gtest.h>
#include <iostream>
#include <mei/xmlimport.h>
#include <mei/meielement.h>
#include <mei/meidocument.h>

using mei::MeiDocument;


TEST(TestMeiXmlImport, ReadFileIn) {
    MeiDocument* docf = mei::XmlImport::File("/Volumes/Eomer/ahankins/Documents/code/git/libmei/test/beethoven.mei");
    
}