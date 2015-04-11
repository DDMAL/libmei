//
//  test_shared.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-12.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <gtest/gtest.h>
#include <mei/shared.h>
#include <mei/header.h>
#include <mei/meielement.h>
using mei::MeiAttribute;
using mei::MeiElement;
using mei::Note;
using mei::Hand;
using mei::Accid;
using mei::Layer;


// Testing the shared module, since it's the biggest of them all. If this works, the others should too...
TEST(TestMeiShared, NoteConstructorTest) {
    Note* n = new Note();
    
    ASSERT_EQ("note", n->getName());
};

TEST(TestMeiShared, HandDefinedMethodsTest) {
    // some methods are defined on Hand(), and some are defined on a mixin.
    // test the methods that are defined on hand first.
    
    Hand* h = new Hand();
    
    h->setInitial("true");
    
    ASSERT_TRUE(h->hasInitial());
    
    ASSERT_EQ("true", h->getInitial()->getValue());
    
    MeiAttribute* i = h->getInitial();
    ASSERT_EQ("true", i->getValue());
    ASSERT_EQ("initial", i->getName());
}

TEST(TestMeiShared, NoteDefinedBaseMethodsTest) {
    //test the interaction between the defined methods and the base methods.
    Note * n = new Note();
    
    ASSERT_FALSE(n->hasAttribute("headshape"));
    
    n->m_NoteVis.setHeadshape("diamond");
    
    ASSERT_TRUE(n->hasAttribute("headshape"));
    
    n->removeAttribute("headshape");
    
    ASSERT_FALSE(n->m_NoteVis.hasHeadshape());
}

TEST(TestMeiShared, NoteMixinMethodsTest) {
    Note *n = new Note();
    
    ASSERT_FALSE(n->m_Color.hasColor());
    
    n->m_Color.setColor("black");
    
    ASSERT_EQ("black", n->m_Color.getColor()->getValue());
    
    ASSERT_TRUE(n->m_Color.hasColor());
}


TEST(TestMeiShared, NoteMixinBaseMethodsTest) {
    // test the interaction between the special mixins and the base methods.
    Note *n = new Note();
    
    n->m_Color.setColor("black");
    
    ASSERT_TRUE(n->hasAttribute("color"));
    
    n->removeAttribute("color");
    
    ASSERT_FALSE(n->m_Color.hasColor());
}