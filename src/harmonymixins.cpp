

#include "harmonymixins.h"
using std::string;


FretlocationMixIn::FretlocationMixIn(BaseMeiElement *b) {
    this->b = b;
};

string FretlocationMixIn::getFretValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fret")) {
        throw AttributeNotFoundException("fret");
    }
    return b->m_Base.getAttributeValue("fret");
};

MeiAttribute* FretlocationMixIn::getFret() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fret")) {
        throw AttributeNotFoundException("fret");
    }
    return b->m_Base.getAttribute("fret");
};

void FretlocationMixIn::setFret(std::string _fret) {
    if (!b->m_Base.hasAttribute("fret")) {
        MeiAttribute *a = new MeiAttribute("fret", _fret);
        b->m_Base.addAttribute(a);
    }
};

bool FretlocationMixIn::hasFret() {
    return b->m_Base.hasAttribute("fret");
};

void FretlocationMixIn::removeFret() {
    b->m_Base.removeAttribute("fret");
};


HarmLogMixIn::HarmLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string HarmLogMixIn::getChordrefValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("chordref")) {
        throw AttributeNotFoundException("chordref");
    }
    return b->m_Base.getAttributeValue("chordref");
};

MeiAttribute* HarmLogMixIn::getChordref() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("chordref")) {
        throw AttributeNotFoundException("chordref");
    }
    return b->m_Base.getAttribute("chordref");
};

void HarmLogMixIn::setChordref(std::string _chordref) {
    if (!b->m_Base.hasAttribute("chordref")) {
        MeiAttribute *a = new MeiAttribute("chordref", _chordref);
        b->m_Base.addAttribute(a);
    }
};

bool HarmLogMixIn::hasChordref() {
    return b->m_Base.hasAttribute("chordref");
};

void HarmLogMixIn::removeChordref() {
    b->m_Base.removeAttribute("chordref");
};


HarmVisMixIn::HarmVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string HarmVisMixIn::getExtenderValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return b->m_Base.getAttributeValue("extender");
};

MeiAttribute* HarmVisMixIn::getExtender() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return b->m_Base.getAttribute("extender");
};

void HarmVisMixIn::setExtender(std::string _extender) {
    if (!b->m_Base.hasAttribute("extender")) {
        MeiAttribute *a = new MeiAttribute("extender", _extender);
        b->m_Base.addAttribute(a);
    }
};

bool HarmVisMixIn::hasExtender() {
    return b->m_Base.hasAttribute("extender");
};

void HarmVisMixIn::removeExtender() {
    b->m_Base.removeAttribute("extender");
};

string HarmVisMixIn::getRendgridValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rendgrid")) {
        throw AttributeNotFoundException("rendgrid");
    }
    return b->m_Base.getAttributeValue("rendgrid");
};

MeiAttribute* HarmVisMixIn::getRendgrid() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rendgrid")) {
        throw AttributeNotFoundException("rendgrid");
    }
    return b->m_Base.getAttribute("rendgrid");
};

void HarmVisMixIn::setRendgrid(std::string _rendgrid) {
    if (!b->m_Base.hasAttribute("rendgrid")) {
        MeiAttribute *a = new MeiAttribute("rendgrid", _rendgrid);
        b->m_Base.addAttribute(a);
    }
};

bool HarmVisMixIn::hasRendgrid() {
    return b->m_Base.hasAttribute("rendgrid");
};

void HarmVisMixIn::removeRendgrid() {
    b->m_Base.removeAttribute("rendgrid");
};



