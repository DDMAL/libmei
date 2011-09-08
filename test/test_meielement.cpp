/*
 libmei
 Copyright (c) 2011 Alastair Porter, Andrew Hankinson
*/

#include <mei/meielement.h>
#include <mei/mei.h>
#include <mei/shared.h>
#include <mei/exceptions.h>

#include <execinfo.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include <iostream>
#include <exception>
#include <stdexcept>

#include <gtest/gtest.h>

using mei::MeiElement;
using mei::MeiAttribute;
using mei::Staff;
using mei::Layer;
using mei::Accid;
using mei::Note;

TEST(MeiElementTest, TestConstructor) {
    MeiElement *m = new MeiElement("note");
    ASSERT_EQ("note", m->getName());
}

TEST(MeiElementTest, TestGetSet) {
    MeiElement *p = new MeiElement("p");
    p->setValue("this is a sentence");
    ASSERT_EQ("this is a sentence", p->getValue());

    p->setTail("atail");
    p->setNs("somenamespace");

    // We know an id is 'm-<uuid>', so we can check the length
    ASSERT_EQ(38, p->getId().length());
    ASSERT_EQ("atail", p->getTail());
    ASSERT_EQ("somenamespace", p->getNs());
}

TEST(MeiElementTest, TestGetNoAttribute) {
    MeiElement *p = new MeiElement("note");
    ASSERT_EQ(NULL, p->getAttribute("color"));
}

// Adding an attribute to an element sets the attr's element.
TEST(MeiElementTest, TestAttributeLink) {
    MeiElement *p = new MeiElement("note");
    MeiAttribute *a = new MeiAttribute("pname", "c");
    p->addAttribute(a);
    ASSERT_EQ(p, a->getElement());

    // And when adding many attrs
    MeiAttribute *b = new MeiAttribute("pname", "d");
    MeiAttribute *c = new MeiAttribute("stem.dir", "down");
    vector<MeiAttribute*> atts;
    atts.push_back(b);
    atts.push_back(c);
    p->setAttributes(atts);
    ASSERT_EQ(2, p->getAttributes().size());
    ASSERT_EQ(p, b->getElement());
    ASSERT_EQ(p, c->getElement());
}

TEST(MeiElementTest, TestGetSetHasAttributes) {
    MeiElement *p = new MeiElement("note");

    MeiAttribute *attr1 = new MeiAttribute("pname", "c");
    MeiAttribute *attr2 = new MeiAttribute("stem.dir", "down");

    vector<MeiAttribute*> attrs;
    attrs.push_back(attr1);
    attrs.push_back(attr2);
    p->setAttributes(attrs);

    ASSERT_EQ(2, p->getAttributes().size());
    ASSERT_TRUE(p->hasAttribute("pname"));
    ASSERT_TRUE(p->hasAttribute("stem.dir"));
    ASSERT_EQ("c", p->getAttribute("pname")->getValue());
    
    // Adding a new attribute to the initial list doesn't
    // affect the attributes in the element
    attrs.push_back(new MeiAttribute("oct", "4"));
    ASSERT_EQ(2, p->getAttributes().size());
}

TEST(MeiElementTest, TestAddAttribute) {
    MeiElement *p = new MeiElement("note");
    MeiAttribute *attr1 = new MeiAttribute("pname", "c");
    MeiAttribute *attr2 = new MeiAttribute("pname", "d");

    p->addAttribute(attr1);
    ASSERT_TRUE(p->hasAttribute("pname"));
    ASSERT_EQ("c", p->getAttribute("pname")->getValue());
    // Adding the same named attribute replaces it
    p->addAttribute(attr2);
    ASSERT_EQ("d", p->getAttribute("pname")->getValue());
}

TEST(MeiElementTest, TestRemoveAttribute) {
    MeiElement *p = new MeiElement("note");
    MeiAttribute *attr1 = new MeiAttribute("pname", "c");

    p->addAttribute(attr1);
    ASSERT_TRUE(p->hasAttribute("pname"));

    p->removeAttribute("pname");
    ASSERT_FALSE(p->hasAttribute("pname"));
}

TEST(MeiElementTest, TestConstGetAttributes) {
    MeiElement *p = new MeiElement("note");
    MeiAttribute *attr1 = new MeiAttribute("pname", "c");
    MeiAttribute *attr2 = new MeiAttribute("oct", "4");    
    
    p->addAttribute(attr1);
    p->addAttribute(attr2);
    
    vector<MeiAttribute*> atts = p->getAttributes();
    ASSERT_EQ(2, atts.size());
    
    // Adding to the returned vector doesn't affect the element
    atts.push_back(new MeiAttribute("stem.dir", "up"));
    ASSERT_EQ(2, p->getAttributes().size());
}

// If we get a pointer to an attribute, we can change it
TEST(MeiElementTest, TestChangeAttributeValue) {
    MeiElement *p = new MeiElement("note");
    MeiAttribute *attr1 = new MeiAttribute("pname", "c");
    p->addAttribute(attr1);
    
    vector<MeiAttribute*> atts = p->getAttributes();
    atts[0]->setValue("d");
    ASSERT_EQ("d", p->getAttribute("pname")->getValue());
}

TEST(MeiElementTest, TestGetSetParent) {
    MeiElement *s = new Staff();
    MeiElement *n = new Note();
    ASSERT_EQ(NULL, n->getParent());
    ASSERT_FALSE(s->hasParent());
    
    n->setParent(s);
    ASSERT_EQ(n->getParent()->getName(), "staff");
    
    MeiElement *ns = new Layer();
    n->setParent(ns);
    ASSERT_EQ(n->getParent()->getName(), "layer");
}

TEST(MeiElementTest, TestAddChild) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c1 = new Accid();
    c1->addAttribute(new MeiAttribute("x", "y"));
    MeiElement *c2 = new Accid();

    ASSERT_EQ(0, p->getChildren().size());

    p->addChild(c1);
    ASSERT_TRUE(p->hasChildren("accid"));
    ASSERT_EQ(1, p->getChildren().size());

    p->addChild(c2);
    ASSERT_TRUE(p->hasChildren("accid"));
    ASSERT_EQ(2, p->getChildren().size());
}

TEST(MeiElementTest, TestSetChildren) {
    MeiElement *p = new Note();
    MeiElement *ch1 = new Accid();
    MeiElement *ch2 = new mei::Dot();
    MeiElement *ch3 = new mei::Artic();
    
    p->addChild(ch1);
    ASSERT_EQ(1, p->getChildren().size());
    
    vector<MeiElement*> children;
    children.push_back(ch2);
    children.push_back(ch3);
    p->setChildren(children);
    ASSERT_EQ(2, p->getChildren().size());
    // Can't affect children by changing the initial vector
    children.push_back(new Accid());
    ASSERT_EQ(2, p->getChildren().size());
    
    p->addChild(ch1);
    ASSERT_EQ(3, p->getChildren().size());
}

TEST(MeiElementTest, TestHasChildren) {
    MeiElement *p = new Note();
    ASSERT_FALSE(p->hasChildren());
    
    p->addChild(new Accid());
    ASSERT_TRUE(p->hasChildren("accid"));
    ASSERT_TRUE(p->hasChildren());
    ASSERT_FALSE(p->hasChildren("artic"));
}

TEST(MeiElementTest, TestConstGetChildren) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c2 = new Accid();
    MeiElement *c3 = new Note();
    vector<MeiElement*> chn;
    chn.push_back(c2);
    chn.push_back(c3);
    p->setChildren(chn);

    vector<MeiElement*> get = p->getChildren();
    // Can't add a new element to the vector
    get.push_back(new mei::Artic());
    ASSERT_EQ(2, p->getChildren().size());
}

TEST(MeiElementTest, TestGetChildrenByName) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c1 = new Accid();
    MeiElement *c2 = new Accid();
    MeiElement *c3 = new Note();
    vector<MeiElement*> chn;
    chn.push_back(c1);
    chn.push_back(c2);
    chn.push_back(c3);
    p->setChildren(chn);
    ASSERT_EQ(3, p->getChildren().size());
    vector<MeiElement*> get = p->getChildrenByName("accid");
    ASSERT_EQ(2, get.size());  
}

TEST(MeiElementTest, TestChangeChildValue) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c = new Note();
    c->addAttribute(new MeiAttribute("pname", "c"));
    p->addChild(c);
    vector<MeiElement*> get = p->getChildren();
    get[0]->getAttribute("pname")->setValue("d");
    ASSERT_EQ("d", p->getChildren()[0]->getAttribute("pname")->getValue());
}

TEST(MeiElementTest, TestRemoveChild) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c1 = new Accid();

    p->addChild(c1);
    ASSERT_TRUE(p->hasChildren("accid"));
    ASSERT_EQ(1, p->getChildren().size());

    p->removeChild(c1);
    ASSERT_FALSE(p->hasChildren("accid"));
    ASSERT_EQ(0, p->getChildren().size());
}

TEST(MeiElementTest, TestRemoveChildByName) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c1 = new Accid();
    MeiElement *c2 = new Accid();
    MeiElement *c3 = new Note();

    vector<MeiElement*> chn;
    chn.push_back(c1);
    chn.push_back(c2);
    chn.push_back(c3);

    p->setChildren(chn);
    ASSERT_TRUE(p->hasChildren("accid"));
    ASSERT_EQ(3, p->getChildren().size());
    p->removeChildrenWithName("accid");

    ASSERT_EQ(1, p->getChildren().size());
    ASSERT_FALSE(p->hasChildren("accid"));
    ASSERT_TRUE(p->hasChildren("note"));
}

TEST(MeiElementTest, TestDeleteChildren) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c1 = new Accid();
    MeiElement *c2 = new Accid();
    MeiElement *c3 = new Note();
    vector<MeiElement*> chn;
    chn.push_back(c1);
    chn.push_back(c2);
    chn.push_back(c3);
    p->setChildren(chn);
    
    ASSERT_EQ(3, p->getChildren().size());
    p->deleteAllChildren();
    ASSERT_EQ(0, p->getChildren().size());
}
