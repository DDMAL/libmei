/*
 libmei
 Copyright (c) 2011 Alastair Porter, Andrew Hankinson
 */

#include <mei/mei.h>
#include <mei/meiattribute.h>
#include <mei/meinamespace.h>
#include <mei/exceptions.h>
#include <mei/shared.h>
#include <mei/xmlexport.h>

#include <stdlib.h>
#include <stdio.h>
#include <exception>
#include <stdexcept>

#include <gtest/gtest.h>

using std::vector;
using std::string;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::XmlExport;
using mei::Mei;
using mei::Note;


TEST(TestMeiAttribute, TestNameValueConstructor) {
    MeiAttribute *a = new MeiAttribute("pname", "c");
    ASSERT_EQ("pname", a->getName());
    ASSERT_EQ("c", a->getValue());
}

TEST(TestMeiAttribute, TestNsNameValueConstructor) {
    MeiNamespace *ns = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(ns, "base", "blahblahblah");
    
    MeiNamespace *ns2 = a->getNamespace();
    ASSERT_EQ(ns, ns2);
}

TEST(TestMeiAttribute, TestNameValueCopyConstructor) {
    MeiAttribute *a = new MeiAttribute("pname", "c");
    MeiAttribute *b = new MeiAttribute(*a);
    b->setValue("d");
    
    ASSERT_EQ(b->getName(), a->getName());
    ASSERT_NE(b->getValue(), a->getValue());
}

TEST(TestMeiAttribute, TestNsNameValueCopyConstructor) {
    MeiNamespace *ns = new MeiNamespace("pfx", "http://example.org/prefix/");
    MeiAttribute *a = new MeiAttribute(ns, "base", "#foo");
    
    MeiAttribute *b = new MeiAttribute(*a);
    
    MeiNamespace *ns2 = b->getNamespace();
    
    ASSERT_EQ(ns2->getPrefix(), "pfx");
    ASSERT_EQ(ns2->getHref(), "http://example.org/prefix/");
    
    // test the global namespace attributes
    MeiDocument *doc = new MeiDocument();
    MeiNamespace *y = new MeiNamespace("ynot", "http://example.org/ynot/");

    Mei *m = new Mei();
    m->addNamespace(y);
    m->setId("m-21ce1ba5-f055-42cc-88db-03ab5bc837c2");
    
    Note *n = new Note();
    n->setId("m-903c95ae-3030-4e90-bf53-4aba90dca7ac");
    m->addChild(n);
    n->addAttribute(b);
    
    // test the use of the xml: namespace. See the note in xmlexport.cpp on how libxml2 handles
    // this namespace prefix different than others.
    MeiNamespace *x = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *c = new MeiAttribute(x, "base", "blahblahblah");
    n->addAttribute(c);

    doc->setRootElement(m);
    
    string expected = "<?xml version=\"1.0\"?>\n<mei xml:id=\"m-21ce1ba5-f055-42cc-88db-03ab5bc837c2\" meiversion=\"2013\" xmlns:ynot=\"http://example.org/ynot/\" xmlns=\"http://www.music-encoding.org/ns/mei\">\n\t<note xml:id=\"m-903c95ae-3030-4e90-bf53-4aba90dca7ac\" xml:base=\"blahblahblah\" />\n</mei>\n";
   
    ASSERT_EQ(XmlExport::meiDocumentToText(doc), expected);
}
