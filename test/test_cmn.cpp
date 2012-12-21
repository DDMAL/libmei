//
//  test_shared.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-12.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

#include <gtest.h>
#include <mei/shared.h>
#include <mei/header.h>
#include <mei/cmn.h>
#include <mei/meidocument.h>
#include <mei/meielement.h>
#include <mei/meinamespace.h>
#include <mei/xmlimport.h>
using mei::MeiDocument;
using mei::MeiAttribute;
using mei::MeiElement;
using mei::MeiNamespace;
using mei::Note;
using mei::Tie;
using mei::Measure;
using mei::XmlImport;

using std::vector;
using std::string;

/* Create an MEI Document for testing. */
MeiDocument* createMeiDocument() {
    string doctxt = "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?> \
        <mei xmlns=\"http://www.music-encoding.org/ns/mei\" meiversion=\"2012\"> \
        <meiHead xml:id=\"id-meihead\"></meiHead> \
        <music xml:id=\"id-music\"><body xml:id=\"id-body\"> \
            <section xml:id=\"id-section\"> \
                <measure xml:id=\"id-measure\"> \
                    <staff xml:id=\"id-staff\" n=\"staffname\"><layer xml:id=\"id-layer\"></layer></staff> \
                </measure> \
            </section> \
        </body></music> \
        </mei> \
    ";

    return XmlImport::documentFromText(doctxt);
}

TEST(CmnModuleTest, TestTieMembership) {
    MeiDocument* doc = createMeiDocument();

    MeiElement* layer = doc->getElementById("id-layer");
    MeiElement* measure = doc->getElementById("id-measure");

    Note* n1 = new Note();
    Note* n2 = new Note();
    Note* n3 = new Note();
    Note* n4 = new Note();

    layer->addChild(n1);
    layer->addChild(n2);
    layer->addChild(n3);
    layer->addChild(n4);

    Tie* t1 = new Tie();
    measure->addChild(t1);

    t1->m_Startid.setStartid(n1->getId());
    t1->m_Startendid.setEndid(n4->getId());
    t1->m_Staffident.setStaff("staffname");
    
    vector<MeiElement*> members = t1->getMembers();
    ASSERT_EQ(4, members.size());
}