

#include "tablaturemixins.h"
using std::string;


NoteGesTablatureMixIn::NoteGesTablatureMixIn(BaseMeiElement *b) {
    this->b = b;
};

string NoteGesTablatureMixIn::getTabFretValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tab.fret")) {
        throw AttributeNotFoundException("tab.fret");
    }
    return b->m_Base.getAttributeValue("tab.fret");
};

MeiAttribute* NoteGesTablatureMixIn::getTabFret() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tab.fret")) {
        throw AttributeNotFoundException("tab.fret");
    }
    return b->m_Base.getAttribute("tab.fret");
};

void NoteGesTablatureMixIn::setTabFret(std::string _tabfret) {
    if (!b->m_Base.hasAttribute("tab.fret")) {
        MeiAttribute *a = new MeiAttribute("tab.fret", _tabfret);
        b->m_Base.addAttribute(a);
    }
};

bool NoteGesTablatureMixIn::hasTabFret() {
    return b->m_Base.hasAttribute("tab.fret");
};

void NoteGesTablatureMixIn::removeTabFret() {
    b->m_Base.removeAttribute("tab.fret");
};

string NoteGesTablatureMixIn::getTabStringValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tab.string")) {
        throw AttributeNotFoundException("tab.string");
    }
    return b->m_Base.getAttributeValue("tab.string");
};

MeiAttribute* NoteGesTablatureMixIn::getTabString() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tab.string")) {
        throw AttributeNotFoundException("tab.string");
    }
    return b->m_Base.getAttribute("tab.string");
};

void NoteGesTablatureMixIn::setTabString(std::string _tabstring) {
    if (!b->m_Base.hasAttribute("tab.string")) {
        MeiAttribute *a = new MeiAttribute("tab.string", _tabstring);
        b->m_Base.addAttribute(a);
    }
};

bool NoteGesTablatureMixIn::hasTabString() {
    return b->m_Base.hasAttribute("tab.string");
};

void NoteGesTablatureMixIn::removeTabString() {
    b->m_Base.removeAttribute("tab.string");
};


StaffdefGesTablatureMixIn::StaffdefGesTablatureMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StaffdefGesTablatureMixIn::getTabStringsValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tab.strings")) {
        throw AttributeNotFoundException("tab.strings");
    }
    return b->m_Base.getAttributeValue("tab.strings");
};

MeiAttribute* StaffdefGesTablatureMixIn::getTabStrings() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tab.strings")) {
        throw AttributeNotFoundException("tab.strings");
    }
    return b->m_Base.getAttribute("tab.strings");
};

void StaffdefGesTablatureMixIn::setTabStrings(std::string _tabstrings) {
    if (!b->m_Base.hasAttribute("tab.strings")) {
        MeiAttribute *a = new MeiAttribute("tab.strings", _tabstrings);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefGesTablatureMixIn::hasTabStrings() {
    return b->m_Base.hasAttribute("tab.strings");
};

void StaffdefGesTablatureMixIn::removeTabStrings() {
    b->m_Base.removeAttribute("tab.strings");
};



