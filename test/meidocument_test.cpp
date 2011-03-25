/*
 *  meidocument_test.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/11/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include <gtest/gtest.h>
#include <mei/meidocument.h>

TEST(MeiDocumentTest, NameTest) {
	MeiDocument doc = MeiDocument("document1","UTF-8");
	
	ASSERT_EQ("document1", doc.getName());

}


//Test that a document's encoding can be changed to a desired encoding
TEST(MeiDocumentTest, EncodingTest) {
	MeiDocument doc = MeiDocument("document1","UTF-8");
	
	ASSERT_EQ("UTF-8", doc.getEncoding());
	
	doc.setEncoding("Unicode");
	
	ASSERT_EQ("Unicode", doc.getEncoding());
}

//Test that an element exists, can be added and/or removed from a document
TEST(MeiDocumentTest, ElementTest) {
	MeiDocument doc = MeiDocument("document1","UTF-8");
	MeiElement* root = new MeiElement("note");
	doc.setRootElement(root);

	ASSERT_EQ(doc.getRootElement()->getName(), "note");
	
}
