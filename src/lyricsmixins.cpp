

#include "lyricsmixins.h"
using std::string;


VerseLogMixIn::VerseLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string VerseLogMixIn::getRefrainValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("refrain")) {
        throw AttributeNotFoundException("refrain");
    }
    return b->m_Base.getAttributeValue("refrain");
};

MeiAttribute* VerseLogMixIn::getRefrain() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("refrain")) {
        throw AttributeNotFoundException("refrain");
    }
    return b->m_Base.getAttribute("refrain");
};

void VerseLogMixIn::setRefrain(std::string _refrain) {
    if (!b->m_Base.hasAttribute("refrain")) {
        MeiAttribute *a = new MeiAttribute("refrain", _refrain);
        b->m_Base.addAttribute(a);
    }
};

bool VerseLogMixIn::hasRefrain() {
    return b->m_Base.hasAttribute("refrain");
};

void VerseLogMixIn::removeRefrain() {
    b->m_Base.removeAttribute("refrain");
};

string VerseLogMixIn::getRhythmValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rhythm")) {
        throw AttributeNotFoundException("rhythm");
    }
    return b->m_Base.getAttributeValue("rhythm");
};

MeiAttribute* VerseLogMixIn::getRhythm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rhythm")) {
        throw AttributeNotFoundException("rhythm");
    }
    return b->m_Base.getAttribute("rhythm");
};

void VerseLogMixIn::setRhythm(std::string _rhythm) {
    if (!b->m_Base.hasAttribute("rhythm")) {
        MeiAttribute *a = new MeiAttribute("rhythm", _rhythm);
        b->m_Base.addAttribute(a);
    }
};

bool VerseLogMixIn::hasRhythm() {
    return b->m_Base.hasAttribute("rhythm");
};

void VerseLogMixIn::removeRhythm() {
    b->m_Base.removeAttribute("rhythm");
};



