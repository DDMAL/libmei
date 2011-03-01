/*
 *  meielement_test.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/1/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */


#include <gtest/gtest.h>

#include <mei/meielement.h>


// Test that incr() increases the constructor parameter by 1
TEST(MeiElementTest, NameTest) {
    
	MeiElement element = MeiElement ("note"); 
	
    ASSERT_EQ("note", element.getName()); 
}

