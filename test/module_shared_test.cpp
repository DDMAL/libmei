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
#include <mei/exceptions.h>

#include <string>
#include <vector>

using std::string;
using std::vector;

TEST(NoteTest, AccidentalTest) {
	Note Do = Note();
	
    vector<string> as = vector<string>();
    as.push_back("s");
    as.push_back("f");
	Do.setAccidentals(as);

    ASSERT_EQ(Do.getAccidentals().size(), 2);
    ASSERT_EQ(Do.getAccidentals()[0], "s");
    ASSERT_EQ(Do.getAccidentals()[1], "f");

    Do.addAccidental("ff");
    ASSERT_EQ(Do.getAccidentals().size(), 3);
    ASSERT_EQ(Do.getAccidentals()[2], "ff");

    as.clear();
    as.push_back("ss");
    Do.setAccidentals(as);
    ASSERT_EQ(Do.getAccidentals().size(), 1);

}

TEST(NoteTest, NoteAttributeTest) {
    Note n = Note();
    n.setOctave("4");
    ASSERT_EQ(n.getOctave(), "4");

    n.setPitchName("A");
    ASSERT_EQ(n.getPitchName(), "A");
}

/*
   getAccidentals() doesn't throw an exception yet
TEST(NoteTest, AccidentalExceptionTest) {
	Note Do = Note();

	try {
        vector<Accid> accids = Do.getAccidentals();
        ASSERT_TRUE(false); // shouldn't get here
    } catch (AttributeNotFoundException) {

    }
}
*/

TEST(NoteTest, OctaveExceptionTest) {
    Note n = Note();
    try {
        n.getOctave();
        ASSERT_TRUE(false); // shouldn't get here
    } catch (AttributeNotFoundException) {

    }
}

TEST(NoteTest, PitchExceptionTest) {
    Note n = Note();
    try {
        n.getPitchName();
        ASSERT_TRUE(false); // shouldn't get here
    } catch (AttributeNotFoundException) {

    }
}
