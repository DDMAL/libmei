#include "tablaturemixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::NoteGesTablatureMixIn::NoteGesTablatureMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteGesTablatureMixIn::~NoteGesTablatureMixIn() {}
MeiAttribute* mei::NoteGesTablatureMixIn::getTabFret() {
    if (!b->hasAttribute("tab.fret")) {
        throw AttributeNotFoundException("tab.fret");
    }
    return b->getAttribute("tab.fret");
};

void mei::NoteGesTablatureMixIn::setTabFret(std::string _tabfret) {
    if (!b->hasAttribute("tab.fret")) {
        MeiAttribute *a = new MeiAttribute("tab.fret", _tabfret);
        b->addAttribute(a);
    }
};

bool mei::NoteGesTablatureMixIn::hasTabFret() {
    return b->hasAttribute("tab.fret");
};

void mei::NoteGesTablatureMixIn::removeTabFret() {
    b->removeAttribute("tab.fret");
};
MeiAttribute* mei::NoteGesTablatureMixIn::getTabString() {
    if (!b->hasAttribute("tab.string")) {
        throw AttributeNotFoundException("tab.string");
    }
    return b->getAttribute("tab.string");
};

void mei::NoteGesTablatureMixIn::setTabString(std::string _tabstring) {
    if (!b->hasAttribute("tab.string")) {
        MeiAttribute *a = new MeiAttribute("tab.string", _tabstring);
        b->addAttribute(a);
    }
};

bool mei::NoteGesTablatureMixIn::hasTabString() {
    return b->hasAttribute("tab.string");
};

void mei::NoteGesTablatureMixIn::removeTabString() {
    b->removeAttribute("tab.string");
};

mei::StaffDefGesTablatureMixIn::StaffDefGesTablatureMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffDefGesTablatureMixIn::~StaffDefGesTablatureMixIn() {}
MeiAttribute* mei::StaffDefGesTablatureMixIn::getTabStrings() {
    if (!b->hasAttribute("tab.strings")) {
        throw AttributeNotFoundException("tab.strings");
    }
    return b->getAttribute("tab.strings");
};

void mei::StaffDefGesTablatureMixIn::setTabStrings(std::string _tabstrings) {
    if (!b->hasAttribute("tab.strings")) {
        MeiAttribute *a = new MeiAttribute("tab.strings", _tabstrings);
        b->addAttribute(a);
    }
};

bool mei::StaffDefGesTablatureMixIn::hasTabStrings() {
    return b->hasAttribute("tab.strings");
};

void mei::StaffDefGesTablatureMixIn::removeTabStrings() {
    b->removeAttribute("tab.strings");
};



