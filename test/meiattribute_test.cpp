/*
 *  meiattribute_test.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/4/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include <gtest/gtest.h>

#include <mei/meiattribute.h>


TEST(MeiAttributeTest, NameTest) {
    
	MeiAttribute attribute = MeiAttribute ("accid","sharp"); 
	
    ASSERT_EQ("accid", attribute.getName()); 
	
	ASSERT_EQ("sharp", attribute.getValue()); 
}


