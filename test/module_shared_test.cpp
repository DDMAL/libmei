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

TEST(SharedModuleTest, SettingOneAccidentalTest) {
    Accid a = Accid("xs");
    vector<Accid> oneAccidental;
    oneAccidental.push_back(a);
    
    Note n = Note();
    n.setAccidentals(oneAccidental);
}

TEST(SharedModuleTest, SettingMultipleAccidentalsTest) {
    Accid a1 = Accid("s");
    Accid a2 = Accid("f");
    Accid a3 = Accid("n");
    Accid a4 = Accid("qs");
    
    vector<Accid> fourAccidentals;
    fourAccidentals.push_back(a1);
    fourAccidentals.push_back(a2);
    fourAccidentals.push_back(a3);
    fourAccidentals.push_back(a4);
    
    Note n = Note();
    n.setAccidentals(fourAccidentals);
}

TEST(SharedModuleTest, SettingAccidentalWithAttributesTest) {  
    Accid a = Accid("xs");
    MeiAttribute attrColor = MeiAttribute("color", "fuscia");
    a.addAttribute(attrColor);
    
    vector<Accid> attrWithColor;
    attrWithColor.push_back(a);
    
    Note n = Note();
    n.setAccidentals(attrWithColor);
}



TEST(SharedModuleTest, GetOctaveExceptionTest) {
	Note n = Note();
	try {
		n.getOctave();
		ASSERT_TRUE(false); // this should never happen.
	}
	catch (AttributeNotFoundException) { 
        // this should always happen.
    }
}

TEST(SharedModuleTest, GetPitchNameExceptionTest) {
    Note n = Note();
    try {
        n.getPitchName();
        ASSERT_TRUE(false);
    } catch (AttributeNotFoundException) { }
}

TEST(SharedModuleTest, GetDurationExceptionTest) {
    Note n = Note();
    try {
        n.getDuration();
        ASSERT_TRUE(false);
    } catch (AttributeNotFoundException) { }
}





