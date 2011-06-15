#include <gtest/gtest.h>
#include <mei/shared.h>
#include <mei/exceptions.h>

#include <string>
#include <vector>

using std::string;
using std::vector;

TEST(NoteTest, SettingOneAccidentalTest) {
    vector<Accid> oneAccidental;
    oneAccidental.push_back(Accid("xs"));

    Note n = Note();
    n.setAccidentals(oneAccidental);
	ASSERT_EQ((unsigned int)1, n.getAccidentals().size());
	ASSERT_TRUE(n.hasAttribute("accid"));

    n.addAccidental(Accid("xf"));
    ASSERT_FALSE(n.hasAttribute("accid"));
    ASSERT_EQ((unsigned int)2, n.getAccidentals().size());
}

TEST(NoteTest, SettingMultipleAccidentalsTest) {
    vector<Accid> fourAccidentals;
    fourAccidentals.push_back(Accid("s"));
    fourAccidentals.push_back(Accid("f"));
    fourAccidentals.push_back(Accid("n"));
    fourAccidentals.push_back(Accid("qs"));

    Note n = Note();
    n.setAccidentals(fourAccidentals);
	ASSERT_TRUE(n.hasChild("accid"));
    ASSERT_EQ((unsigned int)4, n.getAccidentals().size());
}

TEST(NoteTest, SettingAccidentalWithAttributesTest) {  
    Accid a = Accid("xs");
    MeiAttribute attrColor = MeiAttribute("color", "fuscia");
    a.addAttribute(attrColor);

    vector<Accid> attrWithColor;
    attrWithColor.push_back(a);

    Note n = Note();
    n.setAccidentals(attrWithColor);
	ASSERT_TRUE(n.hasChild("accid"));

    ASSERT_EQ("fuscia", n.getAccidentals()[0].getAttribute("color")->getValue());
}

TEST(NoteTest, NoteAttributeTest) {
    Note n = Note();
    n.setOctave("4");
    ASSERT_EQ(n.getOctave(), "4");

    n.setPitchName("A");
    ASSERT_EQ(n.getPitchName(), "A");
}

TEST(NoteTest, OctaveExceptionTest) {
    Note n = Note();
    try {
        n.getOctave();
        ASSERT_TRUE(false); // shouldn't get here
    } catch (AttributeNotFoundException) {

    }
}

TEST(NoteTest, GetDurationExceptionTest) {
    Note n = Note();
    try {
        n.getDuration();
        ASSERT_TRUE(false);
    } catch (AttributeNotFoundException) { }
}

TEST(NoteTest, PitchExceptionTest) {
    Note n = Note();
    try {
        n.getPitchName();
        ASSERT_TRUE(false); // shouldn't get here
    } catch (AttributeNotFoundException) {

    }
}
