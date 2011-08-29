//
// MeiDocument tests
//

#include <gtest/gtest.h>
#include <mei/meielement.h>
#include <mei/meidocument.h>
#include <mei/exceptions.h>
#include <mei/meinamespace.h>
#include <mei/shared.h>

using mei::MeiDocument;
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
    mei->setId(mei::generateId());
    Music *mus = new Music();
    mus->setId(mei::generateId());
    Body *body = new Body();
    body->setId(mei::generateId());
    Staff *staff = new Staff();
    staff->setId(mei::generateId());
    Staff *s2 = new Staff();
    s2->setId(mei::generateId());
    Note *n1 = new Note();
    string wantedId = mei::generateId();
    n1->setId(wantedId);
    Note *n2 = new Note();
    n2->setId(mei::generateId());
    Note *n3 = new Note();
    n3->setId(mei::generateId());
    Note *n4 = new Note();
    n4->setId(mei::generateId());

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
    n5->setId("a-new-id");
    s2->addChild(n5);
    ASSERT_EQ(n5, doc->getElementById("a-new-id"));

}
