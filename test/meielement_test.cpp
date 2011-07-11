#include <gtest/gtest.h>

#include <mei/meielement.h>
#include <mei/meiattribute.h>


// Test that ana MeiElement exists and the name can be retrieved
TEST(MeiElementTest, NameTest) {
	MeiElement element = MeiElement ("note");
	ASSERT_EQ("note", element.getName());
}

//Test that a value can be set to an MeiElement
TEST(MeiElementTest, ValueTest) {
	MeiElement element = MeiElement("note");
	element.setValue("3");
	ASSERT_EQ("3", element.getValue());
}

TEST(MeiElementTest, IdTest) {
    MeiElement element = MeiElement("note");
    element.setId("1234567890");
    ASSERT_EQ("1234567890", element.getId());
    ASSERT_EQ("1234567890", element.getAttribute("id")->getValue());
}


//Test that an attribute can be added to an MeiElement's attribute list and then removed
TEST(MeiElementTest, AttributeTest) {
	MeiElement element = MeiElement ("note");
	MeiAttribute *attribute = new MeiAttribute ("accid","sharp");
	
	vector<MeiAttribute*> attr = element.getAttributes();
	ASSERT_EQ((unsigned int)0, attr.size());
	
	element.addAttribute(attribute);
	attr = element.getAttributes();
	ASSERT_EQ((unsigned int)1, attr.size());
	
	ASSERT_TRUE(element.hasAttribute("accid"));
	
	element.removeAttribute("accid");
	attr = element.getAttributes();
	ASSERT_EQ((unsigned int)0, attr.size());
	
	delete attribute;
}

//Test an MeiElement's children, and their add/remove functionality
TEST(MeiElementTest, AddOneChildTest) {
	MeiElement parent = MeiElement ("staff");
	MeiElement child = MeiElement ("note");
	
	vector<MeiElement*> children = parent.getChildren();
	ASSERT_EQ((unsigned int)0, children.size());
	
	parent.addChild(&child);
	children = parent.getChildren();
	
	ASSERT_EQ((unsigned int)1, children.size());
	
	ASSERT_TRUE(parent.hasChild("note"));
}

TEST(MeiElementTest, RemoveChildrenTest) {
	MeiElement parent = MeiElement ("staff");
	MeiElement child = MeiElement ("note");
	
	parent.addChild(&child);
	ASSERT_EQ((unsigned int)1, parent.getChildren().size());
	
	parent.removeChildren("note");
	ASSERT_EQ((unsigned int)0, parent.getChildren().size());
}

// This is written for when RemoveChild actually works.
//TEST(MeiElementTest, RemoveChildTest) {
//	MeiElement parent = MeiElement ("staff");
//	MeiElement child = MeiElement ("note");
//	
//	parent.addChild(child);
//	ASSERT_EQ((unsigned int)1, parent.getChildren().size());
//	
//	parent.removeChild(child);
//	ASSERT_EQ((unsigned int)0, parent.getChildren().size());
//}

TEST(MeiElementTest, AddManyChildrenTest) {
    MeiElement n = MeiElement("note");
    MeiElement c = MeiElement("accid");
    MeiElement b = MeiElement("accid");
    
    vector<MeiElement*> children;
    children.push_back(&c);
    children.push_back(&b);
    
    n.addChildren(children);
    
    vector<MeiElement*> notechildren = n.getChildren();
    ASSERT_EQ((unsigned int)2, notechildren.size());
}




