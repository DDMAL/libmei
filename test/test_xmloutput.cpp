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
#include <mei/meiattribute.h>
#include <mei/exceptions.h>

#include <string>
#include <utility>

using std::string;
using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiAttribute;
using mei::XMLImportResult;
using mei::MEI_STRICT_IMPORT;

TEST(TextXmlMeiExport, TestBasicExport) {
    XMLImportResult imp = mei::documentFromFile("beethoven.mei");
    mei::documentToFile(imp.getMeiDocument(), "filename.mei");
}

TEST(TextXmlMeiExport, TextExportWithComments) {
    XMLImportResult imp = mei::documentFromFile("campion.mei");
    mei::documentToFile(imp.getMeiDocument(), "campion-out.mei");
}

// Test that we can turn a document into a valid string
TEST(TestXmlMeiExport, ExportToString) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);

    string expected = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<mei xml:id=\"myid\" xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2013\" />\n";
    
    string ret = mei::documentToText(d);

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

    string expected = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<mei xml:id=\"myid\" xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2013\">\n\t<note xml:id=\"noteid\">value</note>tail</mei>\n";

    string ret = mei::documentToText(d);
    ASSERT_EQ(expected, ret);
}

// Test that comments are created correctly
TEST(TestXmlMeiExport, ExportComment) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiElement *comment = new mei::MeiElement("_comment");
    comment->setValue("comment");
    comment->setTail("tail");
    root->addChild(comment);

    string expected = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<mei xml:id=\"myid\" xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2013\">\n\t<!--comment-->tail</mei>\n";
    string ret = mei::documentToText(d);
    ASSERT_EQ(expected, ret);
}

// Test that adding a namespace to an attribute makes it turn up on the
// root element
TEST(TestXmlMeiExport, ExportNamespace) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiAttribute *xlink = new MeiAttribute("xmlns:xlink", "http://www.w3.org/1999/xlink");
    MeiAttribute *attr = new MeiAttribute("xlink:title", "my awesome thing");
    root->addAttribute(xlink);
    root->addAttribute(attr);

    string expected = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<mei xml:id=\"myid\" xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2013\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" xlink:title=\"my awesome thing\" />\n";
    string ret = mei::documentToText(d);
    ASSERT_EQ(expected, ret);
}

TEST(TestXmlMeiExport, ExportNamespace2) {
    MeiDocument *d = new MeiDocument();
    MeiElement *root = mei::MeiFactory::createInstance("mei", "myid");
    d->setRootElement(root);
    MeiAttribute *xlink = new MeiAttribute("xmlns:xlink", "http://www.w3.org/1999/xlink");
    MeiAttribute *attr = new MeiAttribute("xlink:title", "my awesome thing");
    MeiElement *music = mei::MeiFactory::createInstance("music", "musid");
    root->addAttribute(xlink);
    music->addAttribute(attr);
    music->setValue("mus!");
    root->addChild(music);

    string expected = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<mei xml:id=\"myid\" xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2013\" xmlns:xlink=\"http://www.w3.org/1999/xlink\">\n\t<music xml:id=\"musid\" xlink:title=\"my awesome thing\">mus!</music>\n</mei>\n";
    string ret = mei::documentToText(d);
    ASSERT_EQ(expected, ret);
}

TEST(TestXmlMeiExport, ThrowsExceptionIfRootNotSet) {
    MeiDocument *d = new MeiDocument();
    ASSERT_THROW(mei::documentToText(d), mei::DocumentRootNotSetException);
}

TEST(TestXmlMeiExport, ThrowsFileWriteFailureException) {
    MeiDocument *d = new MeiDocument();
    MeiElement *m = new MeiElement("mei");
    d->setRootElement(m);
    ASSERT_THROW(mei::documentToFile(d, "C:/StupidName"), mei::FileWriteFailureException);
}

TEST(TestXmlMeiExport, TestElementToText) {
    MeiElement *measure = mei::MeiFactory::createInstance("measure", "measureid");
    MeiElement *layer = mei::MeiFactory::createInstance("layer", "layerid");
    MeiElement *note = mei::MeiFactory::createInstance("note", "noteid");

    note->addAttribute("pname", "c");
    note->addAttribute("oct", "3");

    measure->addChild(layer);
    layer->addChild(note);

    string expected = "<measure xml:id=\"measureid\">\n\t<layer xml:id=\"layerid\">\n\t\t<note xml:id=\"noteid\" pname=\"c\" oct=\"3\" />\n\t</layer>\n</measure>\n";

    string ret = mei::elementToText(measure);
    ASSERT_EQ(expected, ret);
}

TEST(TestXmlMeiExport, TestExportProcessingInstructions)
{
    XMLImportResult res = mei::documentFromFile("test-procinst.mei", MEI_STRICT_IMPORT);
    bool out = mei::documentToFile(res.getMeiDocument(), "procinst-filename.mei", res.getXMLProcessingInstructions());
    
    ASSERT_TRUE(out);
}

TEST(TestXmlMeiExport, TestSibmeiImportExport)
{
    XMLImportResult res = mei::documentFromFile("sibmei.mei");
    bool out = mei::documentToFile(res.getMeiDocument(), "sibmei-filename.mei");
    ASSERT_TRUE(out);
}
