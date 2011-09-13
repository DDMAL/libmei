//
//  test_shared.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-12.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include <mei/shared.h>
#include <mei/header.h>
#include <mei/cmn.h>
#include <mei/meidocument.h>
#include <mei/meielement.h>
#include <mei/meinamespace.h>
using mei::MeiDocument;
using mei::MeiAttribute;
using mei::MeiElement;
using mei::MeiNamespace;
using mei::Note;
using mei::Mei;
using mei::Music;
using mei::Meihead;
using mei::Body;
using mei::Accid;
using mei::Layer;
using mei::Tie;
using mei::Section;
using mei::Staff;
using mei::Measure;

using std::vector;

/* Create an MEI Document for testing. */
MeiDocument* createMeiDocument() {
    Mei* m = new Mei();
    Meihead* mh = new Meihead();
    m->addChild(mh);
    Music* ms = new Music();
    m->addChild(ms);
    Body* bd = new Body();
    ms->addChild(bd);
    Section* sec = new Section();
    bd->addChild(sec);
    Measure* meas = new Measure();
    sec->addChild(meas);
    Staff* stf = new Staff();
    meas->addChild(stf);
    Layer* lay = new Layer();
    stf->addChild(lay);

    MeiDocument* doc = new MeiDocument();
    doc->setRootElement(m);

    return doc;
}

TEST(CmnModuleTest, TestTieMembership) {
    MeiDocument* doc = createMeiDocument();

    vector<MeiElement*> layers = doc->getElementsByName("layer");
    MeiElement* layer = layers.front();

    vector<MeiElement*> measures = doc->getElementsByName("measure");
    MeiElement* measure = measures.front();

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

    t1->addAttribute("startid", n1->getId());
    t1->addAttribute("endid", n4->getId());
    
    vector<MeiElement*> members = t1->getMembers();
    ASSERT_EQ(2, members.size());
}