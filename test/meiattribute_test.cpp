#include <gtest/gtest.h>

#include <mei/meiattribute.h>


TEST(MeiAttributeTest, NameTest) {

	MeiAttribute attribute = MeiAttribute ("accid","sharp");
	
    ASSERT_EQ("accid", attribute.getName());
	
	ASSERT_EQ("sharp", attribute.getValue());
}


