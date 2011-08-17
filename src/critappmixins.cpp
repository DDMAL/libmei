

#include "critappmixins.h"
using std::string;


CritMixIn::CritMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CritMixIn::getCauseValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->m_Base.getAttributeValue("cause");
};

MeiAttribute* CritMixIn::getCause() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->m_Base.getAttribute("cause");
};

void CritMixIn::setCause(std::string _cause) {
    if (!b->m_Base.hasAttribute("cause")) {
        MeiAttribute *a = new MeiAttribute("cause", _cause);
        b->m_Base.addAttribute(a);
    }
};

bool CritMixIn::hasCause() {
    return b->m_Base.hasAttribute("cause");
};

void CritMixIn::removeCause() {
    b->m_Base.removeAttribute("cause");
};


SourceMixIn::SourceMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SourceMixIn::getSourceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->m_Base.getAttributeValue("source");
};

MeiAttribute* SourceMixIn::getSource() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->m_Base.getAttribute("source");
};

void SourceMixIn::setSource(std::string _source) {
    if (!b->m_Base.hasAttribute("source")) {
        MeiAttribute *a = new MeiAttribute("source", _source);
        b->m_Base.addAttribute(a);
    }
};

bool SourceMixIn::hasSource() {
    return b->m_Base.hasAttribute("source");
};

void SourceMixIn::removeSource() {
    b->m_Base.removeAttribute("source");
};



