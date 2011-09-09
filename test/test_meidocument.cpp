//
// MeiDocument tests
//

#include <gtest/gtest.h>
#include <mei/meielement.h>
#include <mei/meidocument.h>
#include <mei/exceptions.h>
#include <mei/meinamespace.h>
#include <mei/shared.h>

using std::vector;
using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiNamespace;
using mei::Mei;
using mei::Music;
using mei::Body;
using mei::Staff;
using mei::Note;

TEST(TestMeiDocument, TestCreateDocWithName) {
    MeiDocument *doc = new MeiDocument("myfile");
    ASSERT_EQ("myfile", doc->getDocName());

    doc->setDocName("newname");
    ASSERT_EQ("newname", doc->getDocName());
}

TEST(TestMeiDocument, GetNamespace) {
    MeiDocument *doc = new MeiDocument("doc");
    MeiNamespace *ns = new MeiNamespace("prefix", "http://example.com/ns");

    ASSERT_EQ("http://www.music-encoding.org/ns/mei", doc->getNamespaces().at(0)->getHref());

    doc->addNamespace(ns);
    ASSERT_EQ(2, doc->getNamespaces().size());
    ASSERT_EQ(ns, doc->getNamespace("http://example.com/ns"));

    ASSERT_TRUE(doc->hasNamespace("http://www.music-encoding.org/ns/mei"));
    ASSERT_FALSE(doc->hasNamespace("http://www.mcgill.ca"));
}

TEST(TestMeiDocument, RootElement) {
    MeiDocument *doc = new MeiDocument("doc");
    Mei *m = new Mei();
    doc->setRootElement(m);

    ASSERT_EQ(m, doc->getRootElement());
}

// after adding a root to a document, you can find an element
TEST(TestMeiDocument, ElementById) {
    Mei *mei = new Mei();
    Music *mus = new Music();
    Body *body = new Body();
    Staff *staff = new Staff();
    Staff *s2 = new Staff();
    Note *n1 = new Note();
    string wantedId = n1->getId();
    Note *n2 = new Note();
    Note *n3 = new Note();
    Note *n4 = new Note();

    mei->addChild(mus);
    mus->addChild(body);
    body->addChild(staff);
    body->addChild(s2);
    staff->addChild(n1);
    staff->addChild(n2);
    staff->addChild(n3);
    s2->addChild(n4);

    MeiDocument *doc = new MeiDocument("doc");
    doc->setRootElement(mei);

    ASSERT_EQ(n1, doc->getElementById(wantedId));

    ASSERT_EQ(NULL, doc->getElementById("some-unknown-id"));

    // After adding the root element, making a new element works
    Note *n5 = new Note();
    string newid = n5->getId();
    s2->addChild(n5);
    ASSERT_EQ(n5, doc->getElementById(newid));

}

// Making a document sets the version
TEST(TestMeiDocument, SetVersion) {
    mei::MeiDocument *doc = new mei::MeiDocument();
    ASSERT_EQ("2011-05", doc->getVersion());
}

TEST(TestMeiDocument, ElementsByName) {
    Mei *mei = new Mei();
    Music *mus = new Music();
    Body *body = new Body();
    Staff *staff = new Staff();
    Staff *s2 = new Staff();
    Note *n1 = new Note();
    string wantedId = n1->getId();
    Note *n2 = new Note();
    Note *n3 = new Note();
    Note *n4 = new Note();
    
    mei->addChild(mus);
    mus->addChild(body);
    body->addChild(staff);
    body->addChild(s2);
    staff->addChild(n1);
    staff->addChild(n2);
    staff->addChild(n3);
    s2->addChild(n4);
    
    MeiDocument *doc = new MeiDocument("doc");
    doc->setRootElement(mei);
    
    std::vector<MeiElement*> notes = doc->getElementsByName("note");
    ASSERT_EQ(4, notes.size());
    
    std::vector<MeiElement*> rests = doc->getElementsByName("rest");
    ASSERT_EQ(0, rests.size());

    // After adding the root element, making a new element works
    Note *n5 = new Note();
    staff->addChild(n5);
    
    std::vector<MeiElement*> notes_new = doc->getElementsByName("note");
    ASSERT_EQ(5, notes_new.size());
    
}

TEST(TestMeiDocument, GetAncestorTest) {
    Mei *mei = new Mei();
    string meiId = mei->getId();
    
    Music *mus = new Music();
    string musId = mus->getId();
    
    Body *body = new Body();
    Staff *staff = new Staff();
    Staff *s2 = new Staff();
    Note *n1 = new Note();
    string wantedId = n1->getId();
    Note *n2 = new Note();
    Note *n3 = new Note();
    Note *n4 = new Note();
    
    mei->addChild(mus);
    mus->addChild(body);
    body->addChild(staff);
    body->addChild(s2);
    staff->addChild(n1);
    staff->addChild(n2);
    staff->addChild(n3);
    s2->addChild(n4);
    
    MeiDocument *doc = new MeiDocument("doc");
    doc->setRootElement(mei);
    
    // check basic case
    MeiElement* e = doc->getAncestor("music", n1);
    ASSERT_EQ(e->getName(), "music");
    ASSERT_EQ(e->getId(), musId);
    
    // check root element case
    MeiElement* m = doc->getAncestor("mei", n1);
    ASSERT_EQ(m->getId(), meiId);
    
    // check null case
    MeiElement* n = doc->getAncestor("accid", n1);
    ASSERT_EQ(NULL, n);
    
}
