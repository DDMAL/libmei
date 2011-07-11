#include <gtest/gtest.h>
#include <mei/mei.h>
#include <mei/shared.h>
#include <mei/cmn.h>

TEST(TypesTest, MakeDurationElementTest) {
	Note note = Note();
	note.setDuration(4);
	ASSERT_EQ(note.getName(),"note");
	ASSERT_EQ(note.getDuration(), 4);
}

TEST(TypesTest, IsDottedTest) {
	Note note = Note();
	Dot *dot = new Dot();
	note.addChild(dot);
	ASSERT_EQ(note.isDotted(),true);
	note.removeChild(dot);
	ASSERT_EQ(note.isDotted(),false);
	MeiAttribute *dotsattr = new MeiAttribute("dots","1");
	note.addAttribute(dotsattr);
	ASSERT_EQ(note.isDotted(),true);
	delete dotsattr;
}

TEST(TypesTest, MakeSpatialElementTest) {
	Staff staff = Staff();
	staff.setFacs("m-5ac4a460-d095-427e-b0a9-a07ad546c1ae");
	ASSERT_EQ(staff.getFacs(),"m-5ac4a460-d095-427e-b0a9-a07ad546c1ae");
	staff.deleteFacs();
	MeiAttribute *facsattr = new MeiAttribute("facs","m-5ac4a460-d095-427e-b0a9-a07ad546c1ae");
	staff.addAttribute(facsattr);
	ASSERT_EQ(staff.getFacs(), "m-5ac4a460-d095-427e-b0a9-a07ad546c1ae");
	delete facsattr;
}

TEST(TypesTest, MakeSpanningElementTest) {
	Staff staff = Staff();
	Note note1 = Note();
	Note note2 = Note();
	Note note3 = Note();
	staff.addChild(&note1);
	staff.addChild(&note2);
	staff.addChild(&note3);
	note1.setId("m-5ac4a460-d095-427e-b0a9-a07ad546c1ae");
	note2.setId("1234567890");
	Slur slur = Slur();
	slur.setStartElement(&note1);
	slur.setEndElement(&note2);
	slur.setStaffElement(&staff);
	ASSERT_EQ(slur.getStartId(),"m-5ac4a460-d095-427e-b0a9-a07ad546c1ae");
	ASSERT_EQ(slur.getEndId(),"1234567890");
}