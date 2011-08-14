//
//  test_meielement.cpp
//  mei
//
//  Created by Andrew Hankinson on 11-08-09.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <mei/meielement.h>
#include <mei/mei.h>
#include <mei/exceptions.h>

#include <gtest/gtest.h>
#include <stdio.h>
#include <iostream>

#include <exception>
#include <stdexcept>

#include <execinfo.h>
#include <signal.h>
#include <stdlib.h>

TEST(MeiElementTest, TestBasicConstructor) {
    MeiElement * m = new MeiElement("note");
    ASSERT_EQ("note", m->getName());
}

TEST(MeiElementTest, TestValueConstructor) {
    MeiElement * m = new MeiElement("p", "this is a foobar string");
    ASSERT_EQ("this is a foobar string", m->getValue());
}

TEST(MeiElementTest, TestFullConstructor) {
    MeiElement * p = new MeiElement("staff");
    MeiElement * m = new MeiElement("note", "", MEI_PREFIX, MEI_NS, p);
    ASSERT_EQ("note", m->getName());
}

TEST(MeiElementTest, TestGetSetValue) {
    MeiElement * p = new MeiElement("p");
    p->setValue("this is a sentence");
    ASSERT_EQ("this is a sentence", p->getValue());
}

TEST(MeiElementTest, TestGetSetHasAttributes) {
    MeiElement * p = new MeiElement("note");
    
    MeiAttribute * attr1 = new MeiAttribute("pname", "c");
    MeiAttribute * attr2 = new MeiAttribute("stem.dir", "down");
    
    vector<MeiAttribute*> attrs;
    attrs.push_back(attr1);
    attrs.push_back(attr2);
    p->setAttributes(attrs);
    
    ASSERT_TRUE(p->hasAttribute("pname"));
    
    ASSERT_THROW(p->getAttribute("color"), std::runtime_error);
    ASSERT_EQ("c", p->getAttribute("pname")->getValue());
}

TEST(MeiElementTest, TestAddAttribute) {
    MeiElement * p = new MeiElement("note");
    MeiAttribute * attr1 = new MeiAttribute("pname", "c");
    MeiAttribute * attr2 = new MeiAttribute("pname", "d");
    
    p->addAttribute(attr1);
    ASSERT_TRUE(p->hasAttribute("pname"));
    ASSERT_THROW(p->addAttribute(attr2), std::runtime_error);   
}

TEST(MeiElementTest, TestRemoveAttribute) {
    MeiElement * p = new MeiElement("note");
    MeiAttribute * attr1 = new MeiAttribute("pname", "c");
    
    p->addAttribute(attr1);
    ASSERT_TRUE(p->hasAttribute("pname"));
    
    p->removeAttribute("pname");
    ASSERT_FALSE(p->hasAttribute("pname"));
}

TEST(MeiElementTest, TestGetSetHasChildren) {
    MeiElement * p = new MeiElement("note");
    MeiElement * c1 = new MeiElement("accid");
    MeiElement * c2 = new MeiElement("accid");
    c2->setId("1234");
    
    ASSERT_EQ((unsigned int)0, p->getChildren().size());
    
    p->addChild(c1);
    ASSERT_TRUE(p->hasChildren("accid"));
    ASSERT_TRUE(p->hasChild(c1));
    
    vector<MeiElement*> chrn;
    chrn.push_back(c2);
    p->setChildren(chrn);
    ASSERT_FALSE(p->hasChild(c1));
    ASSERT_TRUE(p->hasChild(c2));
    ASSERT_EQ("accid", p->getChildById("1234")->getName());
    ASSERT_THROW(p->getChildById("4567"), std::runtime_error);
}

TEST(MeiElementTest, TestAddRemoveChild) {
    MeiElement * p = new MeiElement("note");
    MeiElement * c1 = new MeiElement("accid");
    
    p->addChild(c1);
    ASSERT_TRUE(p->hasChild(c1));
    ASSERT_TRUE(p->hasChildren("accid"));
    
    p->removeChild(c1);
    ASSERT_FALSE(p->hasChild(c1));
    ASSERT_FALSE(p->hasChildren("accid"));
}

TEST(MeiElementTest, TestAddRemoveChildren) {
    MeiElement * p = new MeiElement("note");
    MeiElement * c1 = new MeiElement("accid");
    MeiElement * c2 = new MeiElement("accid");
    MeiElement * c3 = new MeiElement("note");
    
    vector<MeiElement*> chn;
    chn.push_back(c1);
    chn.push_back(c2);
    chn.push_back(c3);
    
    p->setChildren(chn);
    ASSERT_TRUE(p->hasChildren("accid"));
    p->removeChildren("accid");
    
    ASSERT_EQ((unsigned int)1, p->getChildren().size());
    ASSERT_FALSE(p->hasChildren("accid"));
    ASSERT_TRUE(p->hasChildren("note"));
}

TEST(MeiElementTest, TestGetDescendentsByName) {
    
}

TEST(MeiElementTest, TestGetDescendentsById) {
    
}

TEST(MeiElementTest, TestGetSetParent) {
    MeiElement * s = new MeiElement("staff");
    MeiElement * n = new MeiElement("note");
    
    n->setParent(s);
    ASSERT_EQ(n->getParent()->getName(), "staff");
    
    MeiElement * ns = new MeiElement("layer");
    n->setParent(ns);
    ASSERT_EQ(n->getParent()->getName(), "layer");
}

TEST(MeiElementTest, TestGetSetTail) {
    MeiElement * p = new MeiElement("p");
    MeiElement * b = new MeiElement("b");
    
    p->setValue("This is the first half of the string without ");
    b->setValue("the bolded part ");
    b->setTail("and then the tail.");
    
    ASSERT_EQ(b->getTail(), "and then the tail.");
}