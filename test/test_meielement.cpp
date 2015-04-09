/*
 libmei
 Copyright (c) 2011 Alastair Porter, Andrew Hankinson
*/

#include <mei/meielement.h>
#include <mei/meidocument.h>
#include <mei/mei.h>
#include <mei/shared.h>
#include <mei/exceptions.h>

#include <execinfo.h>
#include <signal.h>
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
using mei::Staff;
using mei::Layer;
using mei::Accid;
using mei::Note;


TEST(TestMeiElement, TestConstructor) {
    MeiElement *m = new MeiElement("note");
    ASSERT_EQ("note", m->getName());
}

TEST(TestMeiElement, TestGetSet) {
    MeiElement *p = new MeiElement("p");
    p->setValue("this is a sentence");
    ASSERT_EQ("this is a sentence", p->getValue());

    p->setTail("atail");

    // We know an id is 'm-<uuid>', so we can check the length
    ASSERT_EQ(38, p->getId().length());
    ASSERT_EQ("atail", p->getTail());
}

TEST(TestMeiElement, TestGetNoAttribute) {
    MeiElement *p = new MeiElement("note");
    ASSERT_EQ(NULL, p->getAttribute("color"));
}

TEST(TestMeiElement, TestNamespacesOnElements) {
    MeiElement *p = new MeiElement("note");
    MeiNamespace *ns = new MeiNamespace("xlink", "http://www.w3.org/xlink/something");
    p->addNamespace(ns);
    
    ASSERT_TRUE(p->hasNamespace("http://www.w3.org/xlink/something"));
    ASSERT_TRUE(p->hasNamespacePrefix("xlink"));
    
    ASSERT_EQ(ns, p->getNamespaceByPrefix("xlink"));
    ASSERT_EQ(ns, p->getNamespace("http://www.w3.org/xlink/something"));
    
    MeiNamespace *ns2 = new MeiNamespace("xinlclude", "http://www.w3.org/xinclude/something");
    p->addNamespace(ns2);
    ASSERT_EQ(2, p->getNamespaces().size());
    
    MeiElement *p2 = new MeiElement("note");
    vector<MeiNamespace*> stuff;
    stuff.push_back(ns);
    stuff.push_back(ns2);
    p2->setNamespaces(stuff);
    
    ASSERT_EQ(2, p2->getNamespaces().size());
}

// Adding an attribute to an element sets the attr's element.
TEST(TestMeiElement, TestAttributeLink) {
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

TEST(TestMeiElement, TestGetSetHasAttributes) {
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

TEST(TestMeiElement, TestAddAttribute) {
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

TEST(TestMeiElement, TestAddAttributeByStrings) {
    MeiElement *p = new MeiElement("note");
    p->addAttribute("pname", "c");
    
    ASSERT_TRUE(p->hasAttribute("pname"));
    ASSERT_EQ("c", p->getAttribute("pname")->getValue());
}

TEST(TestMeiElement, TestRemoveAttribute) {
    MeiElement *p = new MeiElement("note");
    MeiAttribute *attr1 = new MeiAttribute("pname", "c");

    p->addAttribute(attr1);
    ASSERT_TRUE(p->hasAttribute("pname"));

    p->removeAttribute("pname");
    ASSERT_FALSE(p->hasAttribute("pname"));
}

TEST(TestMeiElement, TestConstGetAttributes) {
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
TEST(TestMeiElement, TestChangeAttributeValue) {
    MeiElement *p = new MeiElement("note");
    MeiAttribute *attr1 = new MeiAttribute("pname", "c");
    p->addAttribute(attr1);
    
    vector<MeiAttribute*> atts = p->getAttributes();
    atts[0]->setValue("d");
    ASSERT_EQ("d", p->getAttribute("pname")->getValue());
}

TEST(TestMeiElement, TestGetSetParent) {
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

TEST(TestMeiElement, TestAddChild) {
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

TEST(TestMeiElement, TestAddChildWithParent) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c1 = new Accid();
    
    p->addChild(c1);
    ASSERT_EQ(p, c1->getParent());
}

TEST(TestMeiElement, TestAddChildBefore) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c1 = new MeiElement("accid");
    MeiElement *c2 = new MeiElement("accid");
    MeiElement *c3 = new MeiElement("accid");
    MeiElement *c4 = new MeiElement("accid");
    p->addChild(c1);
    p->addChild(c2);

    ASSERT_EQ(2, p->getChildren().size());
    p->addChildBefore(c2, c3);
    ASSERT_EQ(3, p->getChildren().size());
    ASSERT_EQ(c3, p->getChildren()[1]);

    p->addChildBefore(c1, c4);
    ASSERT_EQ(4, p->getChildren().size());
    ASSERT_EQ(c4, p->getChildren()[0]);

    // Adding before an element that doesn't exist does nothing
    MeiElement *c5 = new MeiElement("accid");
    MeiElement *c6 = new MeiElement("accid");
    p->addChildBefore(c5, c6);
    ASSERT_EQ(4, p->getChildren().size());
}

TEST(TestMeiElement, TestSetChildren) {
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

TEST(TestMeiElement, TestHasChildren) {
    MeiElement *p = new Note();
    ASSERT_FALSE(p->hasChildren());
    
    p->addChild(new Accid());
    ASSERT_TRUE(p->hasChildren("accid"));
    ASSERT_TRUE(p->hasChildren());
    ASSERT_FALSE(p->hasChildren("artic"));
}

TEST(TestMeiElement, TestConstGetChildren) {
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

TEST(TestMeiElement, TestGetChildrenByName) {
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

TEST(TestMeiElement, TestChangeChildValue) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c = new Note();
    c->addAttribute(new MeiAttribute("pname", "c"));
    p->addChild(c);
    vector<MeiElement*> get = p->getChildren();
    get[0]->getAttribute("pname")->setValue("d");
    ASSERT_EQ("d", p->getChildren()[0]->getAttribute("pname")->getValue());
}

TEST(TestMeiElement, TestRemoveChild) {
    MeiElement *p = new MeiElement("note");
    MeiElement *c1 = new Accid();

    p->addChild(c1);
    ASSERT_TRUE(p->hasChildren("accid"));
    ASSERT_EQ(1, p->getChildren().size());

    p->removeChild(c1);
    ASSERT_FALSE(p->hasChildren("accid"));
    ASSERT_EQ(0, p->getChildren().size());
}

TEST(TestMeiElement, TestRemoveChildByName) {
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
    p->removeChildrenByName("accid");

    ASSERT_EQ(1, p->getChildren().size());
    ASSERT_FALSE(p->hasChildren("accid"));
    ASSERT_TRUE(p->hasChildren("note"));
}

TEST(TestMeiElement, TestDeleteChildren) {
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

TEST(TestMeiElement, GetAncestorTest) {
    MeiElement *m1 = new MeiElement("music");
    string musicId = m1->getId();
    MeiElement *b1 = new MeiElement("body");
    string bodyId = b1->getId();
    MeiElement *s1 = new MeiElement("staff");
    MeiElement *n1 = new MeiElement("note");
    MeiElement *a1 = new MeiElement("accid");
    
    m1->addChild(b1);
    b1->addChild(s1);
    s1->addChild(n1);
    n1->addChild(a1);
    
    // test basic case
    ASSERT_EQ(bodyId, a1->getAncestor("body")->getId());
    
    // test root case
    ASSERT_EQ(musicId, a1->getAncestor("music")->getId());
    
    // test null case
    ASSERT_EQ(NULL, a1->getAncestor("mei"));
}

TEST(TestMeiElement, GetDescendentsTest) {
    MeiElement *m1 = new MeiElement("music");
    string musicId = m1->getId();
    MeiElement *b1 = new MeiElement("body");
    MeiElement *s1 = new MeiElement("staff");
    MeiElement *n1 = new MeiElement("note");
    MeiElement *a1 = new MeiElement("accid");
    
    m1->addChild(b1);
    b1->addChild(s1);
    s1->addChild(n1);
    n1->addChild(a1);
    
    // check basic case
    vector<MeiElement*> res = m1->getDescendants();
    ASSERT_EQ(4, res.size());
    
    vector<MeiElement*> res2 = a1->getDescendants();
    ASSERT_EQ(0, res2.size());
    
}

TEST(TestMeiElement, GetPeersTest) {
    MeiElement *m1 = new MeiElement("music");
    string musicId = m1->getId();
    MeiElement *b1 = new MeiElement("body");
    MeiElement *s1 = new MeiElement("staff");
    MeiElement *n1 = new MeiElement("note");
    string nId = n1->getId();
    MeiElement *n2 = new MeiElement("note");
    MeiElement *n3 = new MeiElement("note");
    MeiElement *n4 = new MeiElement("note");    
    string n4Id = n4->getId();
    
    m1->addChild(b1);
    b1->addChild(s1);
    s1->addChild(n1);
    s1->addChild(n2);
    s1->addChild(n3);
    s1->addChild(n4);
    
    vector<MeiElement*> res = n2->getPeers();
    
    ASSERT_EQ(4, res.size());
    
    // check the ordering
    ASSERT_EQ(nId, res[0]->getId());
    ASSERT_EQ(n4Id, res[3]->getId());
    
}

TEST(TestMeiElement, GetPositionInDocument) {
    MeiElement* m = new MeiElement("mei");
    MeiElement *m1 = new MeiElement("music");
    string musicId = m1->getId();
    MeiElement *b1 = new MeiElement("body");
    MeiElement *s1 = new MeiElement("staff");
    MeiElement *n1 = new MeiElement("note");
    string nId = n1->getId();
    MeiElement *n2 = new MeiElement("note");
    MeiElement *n3 = new MeiElement("note");
    MeiElement *n4 = new MeiElement("note");    
    string n4Id = n4->getId();
    
    m->addChild(m1);
    m1->addChild(b1);
    b1->addChild(s1);
    s1->addChild(n1);
    s1->addChild(n2);
    s1->addChild(n3);
    
    MeiDocument* doc = new MeiDocument();
    doc->setRootElement(m);
    
    ASSERT_EQ(4, n1->getPositionInDocument());
    ASSERT_EQ(-1, n4->getPositionInDocument());
    
}

TEST(TestMeiElement, CopyConstructor) {
    Note *n1 = new Note();
    n1->m_NoteVis.setHeadshape("diamond");
    n1->m_Pitch.setPname("c");

    Note *n2 = new Note(*n1);

    ASSERT_NE(n1->getId(),n2->getId());
    ASSERT_EQ(n1->getAttributes().size(), n2->getAttributes().size());
    ASSERT_EQ("diamond", n2->m_NoteVis.getHeadshape()->getValue());
    ASSERT_EQ("c", n2->m_Pitch.getPname()->getValue());

    n2->m_Pitch.setPname("a");

    ASSERT_EQ("a", n2->m_Pitch.getPname()->getValue());
    ASSERT_EQ("c", n1->m_Pitch.getPname()->getValue());
    
}

TEST(TestMeiElement, TestSetDocument) {
    MeiElement *m = new MeiElement("mei");
    MeiDocument *doc = new MeiDocument();
    
    ASSERT_THROW(m->setDocument(doc), mei::DocumentRootNotSetException);
    
    doc->setRootElement(m);
    ASSERT_EQ(doc->getRootElement(), m);
}

TEST(TestMeiElement, TestLookBack) {
    MeiElement *m = new MeiElement("mei");
    MeiElement *music = new MeiElement("music");
    MeiElement *body = new MeiElement("body");
    MeiElement *staff = new MeiElement("staff");
    MeiElement *note = new MeiElement("note");
    
    MeiDocument *doc = new MeiDocument();
    doc->setRootElement(m);

    m->addChild(music);
    music->addChild(body);
    body->addChild(staff);
    staff->addChild(note);

    ASSERT_EQ(music->lookBack("mei"), m);
    ASSERT_EQ(staff->lookBack("mei"), m);
}

TEST(TestMeiElement, TestPrintElement) {
    MeiElement *m = new MeiElement("mei");
    MeiElement *music = new MeiElement("music");
    MeiElement *body = new MeiElement("body");
    MeiElement *staff = new MeiElement("staff");
    Note *note = new Note();
    Note *note2 = new Note();
    
    MeiDocument *doc = new MeiDocument();
    doc->setRootElement(m);
    
    m->addChild(music);
    music->addChild(body);
    body->addChild(staff);
    staff->addChild(note);
    staff->addChild(note2);
    
    note->m_NoteVis.setHeadshape("diamond");
    note->m_Pitch.setPname("c");

    note2->m_Pitch.setPname("d");
    
    m->printElement();
    
    /* 
        The printElement method does not return anything, so the value of it can't really be tested.
        This test simply ensures that it is capable of being called without failing. 
        So we just assert that everything's OK here if we haven't segfaulted by now.
    */
    ASSERT_TRUE(true);
}

