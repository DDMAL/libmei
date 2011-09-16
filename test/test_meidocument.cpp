//
// MeiDocument tests
//

#include <gtest/gtest.h>
#include <mei/meielement.h>
#include <mei/meidocument.h>
#include <mei/exceptions.h>
#include <mei/meinamespace.h>
#include <mei/shared.h>

using std::string;
using std::vector;

using mei::MeiDocument;
using mei::MeiElement;
using mei::MeiNamespace;
using mei::Mei;
using mei::Music;
using mei::Body;
using mei::Staff;
using mei::Note;

TEST(TestMeiDocument, GetNamespace) {
    MeiDocument *doc = new MeiDocument();
    MeiNamespace *ns = new MeiNamespace("prefix", "http://example.com/ns");

    ASSERT_EQ("http://www.music-encoding.org/ns/mei", doc->getNamespaces().at(0)->getHref());

    doc->addNamespace(ns);
    ASSERT_EQ(2, doc->getNamespaces().size());
    ASSERT_EQ(ns, doc->getNamespace("http://example.com/ns"));

    ASSERT_TRUE(doc->hasNamespace("http://www.music-encoding.org/ns/mei"));
    ASSERT_FALSE(doc->hasNamespace("http://www.mcgill.ca"));
}

TEST(TestMeiDocument, RootElement) {
    MeiDocument *doc = new MeiDocument();
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
    MeiDocument *doc = new MeiDocument();

    ASSERT_EQ(NULL, doc->getElementById(wantedId));

    mei->addChild(mus);
    mus->addChild(body);
    body->addChild(staff);
    body->addChild(s2);
    staff->addChild(n1);
    staff->addChild(n2);
    staff->addChild(n3);
    s2->addChild(n4);

    doc->setRootElement(mei);

    ASSERT_EQ(n1, doc->getElementById(wantedId));

    ASSERT_EQ(NULL, doc->getElementById("some-unknown-id"));

    // After adding the root element, making a new element works
    Note *n5 = new Note();
    string newid = n5->getId();
    s2->addChild(n5);
    ASSERT_EQ(n5, doc->getElementById(newid));

    // removing the element from the document, clear from document map
    s2->removeChild(n5);
    ASSERT_EQ(NULL, doc->getElementById(newid));
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
    
    MeiDocument *doc = new MeiDocument();
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

TEST(TestMeiDocument, DocumentPointers) {
    Mei *mei = new Mei();
    Music *mus = new Music();
    Body *body = new Body();
    Staff *staff = new Staff();

    // If an element is added as a child and neither element is attached to a document, nothing happens. 
    ASSERT_EQ(NULL, mei->getDocument());
    mei->addChild(mus);
    ASSERT_EQ(NULL, mus->getDocument());

    MeiDocument *doc = new MeiDocument();

    // add root to document, all elements should have their document pointer updated
    mus->addChild(body);
    doc->setRootElement(mei);
    ASSERT_EQ(doc, mei->getDocument());
    ASSERT_EQ(doc, mus->getDocument());
    ASSERT_EQ(doc, body->getDocument());

    // add another element as a child, child element should be linked to the same document
    body->addChild(staff);
    ASSERT_EQ(doc, staff->getDocument());
}

TEST(TestMeiDocument, FlattenedDocTree) {
    Mei *mei = new Mei();
    Music *mus = new Music();
    Body *body = new Body();
    Staff *staff = new Staff();
    Staff *s2 = new Staff();
    Note *n1 = new Note();
    Note *n2 = new Note();
    Note *n3 = new Note();
    
    MeiDocument *doc = new MeiDocument();

    mei->addChild(mus);
    // empty since mei not added as document root yet
    ASSERT_TRUE(doc->getFlattenedTree().empty());

    doc->setRootElement(mei);
    ASSERT_EQ(2, doc->getFlattenedTree().size());

    mus->addChild(body);    
    body->addChild(staff);
    body->addChild(s2);
    staff->addChild(n1);
    staff->addChild(n2);
    s2->addChild(n3);

    
    int pos = n2->getPositionInDocument();
    doc->lookBack(pos, "mei");

    
    ASSERT_EQ(8, doc->getFlattenedTree().size());

    staff->removeChild(n2);
    ASSERT_EQ(7, doc->getFlattenedTree().size());
    ASSERT_EQ(s2, doc->getFlattenedTree()[5]);
    
    staff->removeChildrenWithName("note");
    ASSERT_EQ(6, doc->getFlattenedTree().size());
    
    body->deleteAllChildren();
    ASSERT_EQ(3, doc->getFlattenedTree().size());

    std::vector<MeiElement*> newChildren;
    Staff *newStaff1 = new Staff();
    Staff *newStaff2 = new Staff();
    newChildren.push_back(newStaff1);
    newChildren.push_back(newStaff2);
    body->setChildren(newChildren);
    ASSERT_EQ(5, doc->getFlattenedTree().size());

    // check contents
    MeiElement* elements[] = { mei, mus, body, newStaff1, newStaff2 };
    std::vector<MeiElement*> rightOrder (elements, elements + sizeof(elements) / sizeof(MeiElement));

    for (int i = 0; i < rightOrder.size(); i++) {
        // check don't overshoot memory allocation
        ASSERT_LT(i, doc->getFlattenedTree().size());
        ASSERT_EQ(rightOrder[i], doc->getFlattenedTree()[i]);
    }
        
}
