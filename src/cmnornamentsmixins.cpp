

#include "cmnOrnamentsmixins.h"
using std::string;


MordentLogMixIn::MordentLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MordentLogMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* MordentLogMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void MordentLogMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool MordentLogMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void MordentLogMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};

string MordentLogMixIn::getLongValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("long")) {
        throw AttributeNotFoundException("long");
    }
    return b->m_Base.getAttributeValue("long");
};

MeiAttribute* MordentLogMixIn::getLong() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("long")) {
        throw AttributeNotFoundException("long");
    }
    return b->m_Base.getAttribute("long");
};

void MordentLogMixIn::setLong(std::string _long) {
    if (!b->m_Base.hasAttribute("long")) {
        MeiAttribute *a = new MeiAttribute("long", _long);
        b->m_Base.addAttribute(a);
    }
};

bool MordentLogMixIn::hasLong() {
    return b->m_Base.hasAttribute("long");
};

void MordentLogMixIn::removeLong() {
    b->m_Base.removeAttribute("long");
};


OrnamentaccidMixIn::OrnamentaccidMixIn(BaseMeiElement *b) {
    this->b = b;
};

string OrnamentaccidMixIn::getAccidupperValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accidupper")) {
        throw AttributeNotFoundException("accidupper");
    }
    return b->m_Base.getAttributeValue("accidupper");
};

MeiAttribute* OrnamentaccidMixIn::getAccidupper() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accidupper")) {
        throw AttributeNotFoundException("accidupper");
    }
    return b->m_Base.getAttribute("accidupper");
};

void OrnamentaccidMixIn::setAccidupper(std::string _accidupper) {
    if (!b->m_Base.hasAttribute("accidupper")) {
        MeiAttribute *a = new MeiAttribute("accidupper", _accidupper);
        b->m_Base.addAttribute(a);
    }
};

bool OrnamentaccidMixIn::hasAccidupper() {
    return b->m_Base.hasAttribute("accidupper");
};

void OrnamentaccidMixIn::removeAccidupper() {
    b->m_Base.removeAttribute("accidupper");
};

string OrnamentaccidMixIn::getAccidlowerValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accidlower")) {
        throw AttributeNotFoundException("accidlower");
    }
    return b->m_Base.getAttributeValue("accidlower");
};

MeiAttribute* OrnamentaccidMixIn::getAccidlower() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accidlower")) {
        throw AttributeNotFoundException("accidlower");
    }
    return b->m_Base.getAttribute("accidlower");
};

void OrnamentaccidMixIn::setAccidlower(std::string _accidlower) {
    if (!b->m_Base.hasAttribute("accidlower")) {
        MeiAttribute *a = new MeiAttribute("accidlower", _accidlower);
        b->m_Base.addAttribute(a);
    }
};

bool OrnamentaccidMixIn::hasAccidlower() {
    return b->m_Base.hasAttribute("accidlower");
};

void OrnamentaccidMixIn::removeAccidlower() {
    b->m_Base.removeAttribute("accidlower");
};


TurnLogMixIn::TurnLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TurnLogMixIn::getDelayedValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("delayed")) {
        throw AttributeNotFoundException("delayed");
    }
    return b->m_Base.getAttributeValue("delayed");
};

MeiAttribute* TurnLogMixIn::getDelayed() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("delayed")) {
        throw AttributeNotFoundException("delayed");
    }
    return b->m_Base.getAttribute("delayed");
};

void TurnLogMixIn::setDelayed(std::string _delayed) {
    if (!b->m_Base.hasAttribute("delayed")) {
        MeiAttribute *a = new MeiAttribute("delayed", _delayed);
        b->m_Base.addAttribute(a);
    }
};

bool TurnLogMixIn::hasDelayed() {
    return b->m_Base.hasAttribute("delayed");
};

void TurnLogMixIn::removeDelayed() {
    b->m_Base.removeAttribute("delayed");
};

string TurnLogMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* TurnLogMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void TurnLogMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool TurnLogMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void TurnLogMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};



