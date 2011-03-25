/*
 *  module_shared_test.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include <gtest/gtest.h>
#include <mei/shared.h>

TEST(SharedModuleTest, NoteAttributesTest) {
	Note Do = Note();
	
	Do.setAccidental("sharp");
	Do.setOctave("4");
	Do.setPitchName("A");
	
	ASSERT_EQ(Do.getAccidental(), "sharp"); 	//Test to see if a valid accidental is aquired
	ASSERT_EQ(Do.getOctave(), "4"); 	//Test to see if a valid octave is aquired
	ASSERT_EQ(Do.getPitchName(), "A"); 	//Test to see if a valid pitchname is aquired
}

TEST(SharedModuleTest, ExceptionTest) {
	Note Do = Note();
	
	try {
		
		Do.getAccidental();
		ASSERT_TRUE(false);
		
		Do.getOctave();
		ASSERT_TRUE(false);
		
		Do.getPitchName();
		ASSERT_TRUE(false);
		
	}
	catch (...) {
	}
	
}



