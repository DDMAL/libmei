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


// Testing the shared module, since it's the biggest of them all. If this works, the others should too...
TEST(MeiShared, NoteConstructorTest) {
    Note * n = new Note();
    
    ASSERT_EQ("note", n->m_Base.getName());
};

TEST(MeiShared, NoteDefinedMethodsTest) {
    // some methods are defined on Note(), and some are defined on a mixin.
    // test the methods that are defined on note first.
    
    Note * n = new Note();
    
    n->m_NoteVis.setHeadshape("diamond");
    
    ASSERT_TRUE(n->m_NoteVis.hasHeadshape());
    
    ASSERT_EQ("diamond", n->m_NoteVis.getHeadshapeValue());
    
    MeiAttribute* v = n->m_NoteVis.getHeadshape();
    ASSERT_EQ("diamond", v->getValue());
    ASSERT_EQ("headshape", v->getName());
    
    ASSERT_FALSE(n->m_NoteLogMensural.hasLig());
}

TEST(MeiShared, NoteDefinedBaseMethodsTest) {
    //test the interaction between the defined methods and the base methods.
    Note * n = new Note();
    
    ASSERT_FALSE(n->m_Base.hasAttribute("headshape"));
    
    n->m_NoteVis.setHeadshape("diamond");
    
    ASSERT_TRUE(n->m_Base.hasAttribute("headshape"));
    
    n->m_Base.removeAttribute("headshape");
    
    ASSERT_FALSE(n->m_NoteVis.hasHeadshape());
}

TEST(MeiShared, NoteMixinMethodsTest) {
    Note * n = new Note();
    
    ASSERT_FALSE(n->m_Color.hasColor());
    
    n->m_Color.setColor("black");
    
    ASSERT_EQ("black", n->m_Color.getColorValue());
    
    ASSERT_TRUE(n->m_Color.hasColor());
}


TEST(MEiShared, NoteMixinBaseMethodsTest) {
    // test the interaction between the special mixins and the base methods.
    Note * n = new Note();
    
    n->m_Color.setColor("black");
    
    ASSERT_TRUE(n->m_Base.hasAttribute("color"));
    
    n->m_Base.removeAttribute("color");
    
    ASSERT_FALSE(n->m_Color.hasColor());
}