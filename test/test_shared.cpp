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
#include <mei/meielement.h>
#include <mei/meinamespace.h>
using mei::MeiAttribute;
using mei::MeiElement;
using mei::MeiNamespace;
using mei::Note;
using mei::Accid;
using mei::Layer;


// Testing the shared module, since it's the biggest of them all. If this works, the others should too...
TEST(MeiShared, NoteConstructorTest) {
    Note * n = new Note();
    
    ASSERT_EQ("note", n->getName());
};

TEST(MeiShared, NoteDefinedMethodsTest) {
    // some methods are defined on Note(), and some are defined on a mixin.
    // test the methods that are defined on note first.
    
    Note * n = new Note();
    
    n->m_NoteVis.setHeadshape("diamond");
    
    ASSERT_TRUE(n->m_NoteVis.hasHeadshape());
    
    ASSERT_EQ("diamond", n->m_NoteVis.getHeadshape()->getValue());
    
    MeiAttribute* v = n->m_NoteVis.getHeadshape();
    ASSERT_EQ("diamond", v->getValue());
    ASSERT_EQ("headshape", v->getName());
    
    ASSERT_FALSE(n->m_NoteLogMensural.hasLig());
}

TEST(MeiShared, NoteDefinedBaseMethodsTest) {
    //test the interaction between the defined methods and the base methods.
    Note * n = new Note();
    
    ASSERT_FALSE(n->hasAttribute("headshape"));
    
    n->m_NoteVis.setHeadshape("diamond");
    
    ASSERT_TRUE(n->hasAttribute("headshape"));
    
    n->removeAttribute("headshape");
    
    ASSERT_FALSE(n->m_NoteVis.hasHeadshape());
}

TEST(MeiShared, NoteMixinMethodsTest) {
    Note *n = new Note();
    
    ASSERT_FALSE(n->m_Color.hasColor());
    
    n->m_Color.setColor("black");
    
    ASSERT_EQ("black", n->m_Color.getColor()->getValue());
    
    ASSERT_TRUE(n->m_Color.hasColor());
}


TEST(MeiShared, NoteMixinBaseMethodsTest) {
    // test the interaction between the special mixins and the base methods.
    Note *n = new Note();
    
    n->m_Color.setColor("black");
    
    ASSERT_TRUE(n->hasAttribute("color"));
    
    n->removeAttribute("color");
    
    ASSERT_FALSE(n->m_Color.hasColor());
}

TEST(MeiShared, NamespacedElementTest) {
    Note *n = new Note();
    n->m_Common.setBase("foobar");
    ASSERT_TRUE(n->m_Common.hasBase());

    MeiAttribute *a = n->m_Common.getBase();
    ASSERT_TRUE(a->hasNamespace());

    MeiNamespace *s = a->getNamespace();
    ASSERT_EQ("http://www.w3.org/XML/1998/namespace", s->getHref());

}