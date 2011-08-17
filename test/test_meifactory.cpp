//
//  test_meifactory.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-17.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <gtest/gtest.h>
#include <iostream>
#include <mei/shared.h>
#include <mei/meielement.h>

using mei::MeiElement;
using mei::MeiFactory;
using mei::Note;

TEST(MeiFactoryTest, TestFactoryStart) {
    MeiElement * e = MeiFactory::createInstance("note");
    ASSERT_EQ("note", e->getName());
}

TEST(MeiFactoryTest, TestFactoryWithMixins) {
    Note *e = dynamic_cast<Note*>(MeiFactory::createInstance("note"));
    
    
    ASSERT_EQ("note", e->getName());
//    Note *n = static_cast<Note*>(e);
    // only note has these methods.
    e->m_NoteVis.setHeadshape("diamond");
    ASSERT_EQ("diamond", e->m_NoteVis.getHeadshape()->getValue());
}
