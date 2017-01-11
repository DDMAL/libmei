//
//  test_meifactory.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-17.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <gtest/gtest.h>
#include <mei/shared.h>
#include <mei/meielement.h>
#include <mei/exceptions.h>

using mei::ElementNotRegisteredException;
using mei::MeiElement;
using mei::MeiFactory;
using mei::Note;

TEST(TestMeiFactory, TestFactoryStart) {
    MeiElement *e = MeiFactory::createInstance("note", "anid");
    ASSERT_EQ("note", e->getName());
    ASSERT_EQ("anid", e->getId());
}

TEST(TestMeiFactory, TestFactoryStartDefaultId) {
    // Empty ID makes a random one
    MeiElement *e = MeiFactory::createInstance("note", "");
    ASSERT_EQ("note", e->getName());
    ASSERT_EQ(38, e->getId().length());
}

TEST(TestMeiFactory, TestFactoryWithMixins) {
    Note *e = dynamic_cast<Note*>(MeiFactory::createInstance("note", "anid"));
    
    
    ASSERT_EQ("note", e->getName());
//    Note *n = static_cast<Note*>(e);
    // only note has these methods.
    e->m_Noteheads.setHeadShape("diamond");
    ASSERT_EQ("diamond", e->m_Noteheads.getHeadShape()->getValue());
}

TEST(TestMeiFactory, TestFactoryBadElement) {
    ASSERT_THROW(MeiFactory::createInstance("badelement", ""), ElementNotRegisteredException);
}
