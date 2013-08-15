#include "tablaturemixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_noteGesTablatureMixIn::Mei_noteGesTablatureMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_noteGesTablatureMixIn::~Mei_noteGesTablatureMixIn() {}
MeiAttribute* mei::Mei_noteGesTablatureMixIn::getTabFret() {
    if (!b->hasAttribute("tab.fret")) {
        throw AttributeNotFoundException("tab.fret");
    }
    return b->getAttribute("tab.fret");
};

void mei::Mei_noteGesTablatureMixIn::setTabFret(std::string _tabfret) {
    MeiAttribute *a = new MeiAttribute("tab.fret", _tabfret);
    b->addAttribute(a);
};

bool mei::Mei_noteGesTablatureMixIn::hasTabFret() {
    return b->hasAttribute("tab.fret");
};

void mei::Mei_noteGesTablatureMixIn::removeTabFret() {
    b->removeAttribute("tab.fret");
};
MeiAttribute* mei::Mei_noteGesTablatureMixIn::getTabString() {
    if (!b->hasAttribute("tab.string")) {
        throw AttributeNotFoundException("tab.string");
    }
    return b->getAttribute("tab.string");
};

void mei::Mei_noteGesTablatureMixIn::setTabString(std::string _tabstring) {
    MeiAttribute *a = new MeiAttribute("tab.string", _tabstring);
    b->addAttribute(a);
};

bool mei::Mei_noteGesTablatureMixIn::hasTabString() {
    return b->hasAttribute("tab.string");
};

void mei::Mei_noteGesTablatureMixIn::removeTabString() {
    b->removeAttribute("tab.string");
};

/* include <tab.stringmixin> */
mei::Mei_staffDefGesTablatureMixIn::Mei_staffDefGesTablatureMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_staffDefGesTablatureMixIn::~Mei_staffDefGesTablatureMixIn() {}
MeiAttribute* mei::Mei_staffDefGesTablatureMixIn::getTabStrings() {
    if (!b->hasAttribute("tab.strings")) {
        throw AttributeNotFoundException("tab.strings");
    }
    return b->getAttribute("tab.strings");
};

void mei::Mei_staffDefGesTablatureMixIn::setTabStrings(std::string _tabstrings) {
    MeiAttribute *a = new MeiAttribute("tab.strings", _tabstrings);
    b->addAttribute(a);
};

bool mei::Mei_staffDefGesTablatureMixIn::hasTabStrings() {
    return b->hasAttribute("tab.strings");
};

void mei::Mei_staffDefGesTablatureMixIn::removeTabStrings() {
    b->removeAttribute("tab.strings");
};

/* include <tab.stringsmixin> */


