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
#include <mei/exceptions.h>

using mei::MeiDocument;


TEST(TestMeiXmlImport, ReadFileIn) {
    MeiDocument* docf = mei::XmlImport::documentFromFile("beethoven.mei");
    ASSERT_NE((MeiDocument*)NULL, docf);
}

TEST(TestMeiXmlImport, ReadLargeFileIn) {
    MeiDocument* docf = mei::XmlImport::documentFromFile("bach.mei");
    ASSERT_NE((MeiDocument*)NULL, docf);
}

TEST(TestMeiXmlImport, TestBadVersionException) {
    ASSERT_THROW(mei::XmlImport::documentFromFile("badversion.mei"), mei::VersionMismatchException);
}

TEST(TestMeiXmlImport, TestNoVersionException) {
    ASSERT_THROW(mei::XmlImport::documentFromFile("noversion.mei"), mei::NoVersionFoundException);
}