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
#include <mei/meielement.h>
#include <mei/meinamespace.h>
#include <mei/meiattribute.h>
#include <mei/exceptions.h>

#include <string>
#include <utility>

using std::string;
using mei::MeiDocument;
using mei::MeiElement;
using mei::XmlExport;
using mei::MeiNamespace;
using mei::MeiAttribute;
using mei::XmlProcessingInstruction;
using mei::XmlInstructions;

TEST(TextXmlMeiExport, TestBasicExport) {
    MeiDocument *docf = mei::XmlImport::documentFromFile("beethoven.mei");
    XmlExport::meiDocumentToFile(docf, "filename.mei");
}

TEST(TextXmlMeiExport, TextExportWithComments) {
    MeiDocument *docf = mei::XmlImport::documentFromFile("campion.mei");
    XmlExport::meiDocumentToFile(docf, "campion-out.mei");
}

// Test that we can turn a document into a valid string
TEST(TestXmlMeiExport, ExportToString) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);

    string expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"myid\" meiversion=\"2012\"/>\n";
    string ret = XmlExport::meiDocumentToText(d);
    ASSERT_EQ(expected, ret);
}

// Test that we export values and tails properly
TEST(TestXmlMeiExport, ExportValueAndTail) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiElement *note = mei::MeiFactory::createInstance("note", "noteid");
    note->setValue("value");
    note->setTail("tail");
    root->addChild(note);

    string expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"myid\" meiversion=\"2012\"><note xml:id=\"noteid\">value</note>tail</mei>\n";
    string ret = XmlExport::meiDocumentToText(d);
    ASSERT_EQ(expected, ret);
}

// Test that comments are created correctly
TEST(TestXmlMeiExport, ExportComment) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiElement *comment = new mei::MeiElement("_comment");
    comment->setValue("comment");
    comment->setTail("t");
    root->addChild(comment);

    string expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"myid\" meiversion=\"2012\"><!--comment-->t</mei>\n";
    string ret = XmlExport::meiDocumentToText(d);
    ASSERT_EQ(expected, ret);
}

// Test that adding a namespace to an attribute makes it turn up on the
// root element
TEST(TestXmlMeiExport, ExportNamespace) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiNamespace *xlink = new MeiNamespace("xlink", "http://www.w3.org/1999/xlink");
    MeiAttribute *attr = new MeiAttribute(xlink, "title", "my awesome thing");
    root->addAttribute(attr);

    string expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
xmlns:xlink=\"http://www.w3.org/1999/xlink\" xml:id=\"myid\" xlink:title=\"my awesome thing\" meiversion=\"2012\"/>\n";
    string ret = XmlExport::meiDocumentToText(d);
    ASSERT_EQ(expected, ret);
}

// Test that adding a namespace to an attribute makes it turn up on the
// root element
TEST(TestXmlMeiExport, ExportNamespace2) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiNamespace *xlink = new MeiNamespace("xlink", "http://www.w3.org/1999/xlink");
    MeiAttribute *attr = new MeiAttribute(xlink, "title", "my awesome thing");
    MeiElement *music = mei::MeiFactory::createInstance("music", "musid");
    music->addAttribute(attr);
    music->setValue("mus!");
    root->addChild(music);

    string expected = "<?xml version=\"1.0\"?>\n<mei xmlns=\"http://www.music-encoding.org/ns/mei\" \
xmlns:xlink=\"http://www.w3.org/1999/xlink\" xml:id=\"myid\" meiversion=\"2012\">\n  <music \
xml:id=\"musid\" xlink:title=\"my awesome thing\">mus!</music>\n</mei>\n";
    string ret = XmlExport::meiDocumentToText(d);
    ASSERT_EQ(expected, ret);
}

TEST(TestXmlMeiExport, ThrowsDocumentRootException) {
    MeiDocument *d = new MeiDocument();
    ASSERT_THROW(XmlExport::meiDocumentToText(d), mei::DocumentRootNotSetException);
}

TEST(TestXmlMeiExport, ThrowsFileWriteFailureException) {
    MeiDocument *d = new MeiDocument();
    MeiElement *m = new MeiElement("mei");
    d->setRootElement(m);
    ASSERT_THROW(XmlExport::meiDocumentToFile(d, "C:/StupidName"), mei::FileWriteFailureException);
}

TEST(TestXmlMeiExport, TestElementToText) {
    MeiElement *measure = mei::MeiFactory::createInstance("measure", "measureid");
    MeiElement *layer = mei::MeiFactory::createInstance("layer", "layerid");
    MeiElement *note = mei::MeiFactory::createInstance("note", "noteid");

    note->addAttribute("pname", "c");
    note->addAttribute("oct", "3");

    measure->addChild(layer);
    layer->addChild(note);

    string expected = "<?xml version=\"1.0\"?>\n<measure xmlns=\"http://www.music-encoding.org/ns/mei\" \
xml:id=\"measureid\">\n  <layer xml:id=\"layerid\">\n    \
<note xml:id=\"noteid\" pname=\"c\" oct=\"3\"/>\n  </layer>\n</measure>\n";

    string ret = XmlExport::meiElementToText(measure);
    ASSERT_EQ(expected, ret);
}

TEST(TestXmlMeiExport, TestXmlProcessingInstructionsToFile) {
    XmlInstructions procinst;
    
    std::string name1 = "xml-model";
    std::string value1 = "href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://purl.oclc.org/dsdl/schematron\"";
    
    std::string name2 = "xml-stylesheet";
    std::string value2 = "href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://relaxng.org/ns/structure/1.0\"";
    
    XmlProcessingInstruction *xpi1 = new std::pair<std::string, std::string>(name1, value1);
    XmlProcessingInstruction *xpi2 = new std::pair<std::string, std::string>(name2, value2);
    
    procinst.push_back(xpi1);
    procinst.push_back(xpi2);
    
    MeiDocument *d = new MeiDocument();
    MeiElement *m = new MeiElement("mei");
    d->setRootElement(m);
    
    ASSERT_TRUE(XmlExport::meiDocumentToFile(d, "test-procinst.mei", procinst));
}

TEST(TestXmlMeiExport, TestXmlProcessingInstructionsToText) {
    XmlInstructions procinst;
    
    std::string name1 = "xml-model";
    std::string value1 = "href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://purl.oclc.org/dsdl/schematron\"";
    
    std::string name2 = "xml-stylesheet";
    std::string value2 = "href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://relaxng.org/ns/structure/1.0\"";
    
    XmlProcessingInstruction *xpi1 = new std::pair<std::string, std::string>(name1, value1);
    XmlProcessingInstruction *xpi2 = new std::pair<std::string, std::string>(name2, value2);
    
    procinst.push_back(xpi1);
    procinst.push_back(xpi2);
    
    MeiDocument *d = new MeiDocument();
    MeiElement *m = new MeiElement("mei");
    m->setId("m1234");
    d->setRootElement(m);
    
    string expected = "<\?xml version=\"1.0\"\?>\n<\?xml-model href=\"mei-2012.rng\" \
type=\"application/xml\" schematypens=\"http://purl.oclc.org/dsdl/schematron\"\?>\n<\?xml-stylesheet \
href=\"mei-2012.rng\" type=\"application/xml\" schematypens=\"http://relaxng.org/ns/structure/1.0\"\?>\n<mei \
xmlns=\"http://www.music-encoding.org/ns/mei\" xml:id=\"m1234\" meiversion=\"2012\"/>\n";

    ASSERT_EQ(expected, XmlExport::meiDocumentToText(d, procinst));
}
