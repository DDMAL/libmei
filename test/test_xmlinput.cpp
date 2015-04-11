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
#include <mei/shared.h>

#include <string>
#include <vector>

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiAttribute;
using mei::Note;

using std::string;
using std::vector;

// Test that the value and tail members of elements are set correctly
TEST(TestMeiXmlImport, SetValueAndTail) {
    // Not a valid looking document, but representative of what is being tested
    string input = "<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"i\" meiversion=\"2012\"><note>noteinner</note>notetail<tie><p>pinner</p></tie>tietail</mei>";

    MeiDocument *doc = mei::XmlImport::documentFromText(input);
    ASSERT_EQ(doc->getVersion(), "2012");
    
    MeiElement *e = doc->getRootElement();
    ASSERT_EQ("mei", e->getName());
    ASSERT_EQ(2, e->getChildren().size());
    vector<MeiElement*> ch = e->getChildren();

    ASSERT_EQ("note", ch[0]->getName());
    ASSERT_EQ("noteinner", ch[0]->getValue());
    ASSERT_EQ("notetail", ch[0]->getTail());

    ASSERT_EQ("tie", ch[1]->getName());
    ASSERT_EQ("", ch[1]->getValue());
    ASSERT_EQ("tietail", ch[1]->getTail());

    ASSERT_EQ(1, ch[1]->getChildren().size());
    ASSERT_EQ("p", ch[1]->getChildren()[0]->getName());
    ASSERT_EQ("pinner", ch[1]->getChildren()[0]->getValue());
    ASSERT_EQ("", ch[1]->getChildren()[0]->getTail());
}

TEST(TestMeiXmlImport, ParseNamespacesCorrectly) {
    // Not a valid looking document, but representative of what is being tested
    string input = "<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xmlns:xlink=\"http://www.foo.com/ns/foo\" xml:id=\"i\" meiversion=\"2013\"><note xlink:href=\"somecrazyvalue\" /></mei>";
    
    MeiDocument *doc = mei::XmlImport::documentFromText(input);
    vector<MeiElement*> notes = doc->getElementsByName("note");
    MeiAttribute *href = notes[0]->getAttribute("xlink:href");
//    ASSERT_TRUE(href->hasNamespace());
    ASSERT_EQ(href->getNamespace()->getPrefix(), "xlink");
    ASSERT_EQ(href->getNamespace()->getHref(), "http://www.foo.com/ns/foo");
}

TEST(TestMeiXmlImport, ParseCommentsCorrectly) {
    string input = "<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xmlns:xlink=\"http://www.foo.com/ns/foo\" xml:id=\"i\" meiversion=\"2013\"><!-- some comment --></mei>";
    MeiDocument *doc = mei::XmlImport::documentFromText(input);
    vector<MeiElement*> comments = doc->getElementsByName("_comment");
    
    ASSERT_EQ(1, comments.size());
    ASSERT_EQ(" some comment ", comments[0]->getValue());
}

TEST(TestMeiXmlImport, ReadFileIn) {
    MeiDocument* docf = mei::XmlImport::documentFromFile("beethoven.mei");
    ASSERT_NE((MeiDocument*)NULL, docf);

    Note *n = dynamic_cast<Note*>(docf->getElementById("d1e41"));
    ASSERT_EQ("c", n->m_Pitch.getPname()->getValue());
    ASSERT_EQ("4", n->m_Octave.getOct()->getValue());
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

TEST(TestMeiXmlImport, TestMalformedFileException) {
    ASSERT_THROW(mei::XmlImport::documentFromFile("malformed.mei"), mei::FileReadFailureException);
}