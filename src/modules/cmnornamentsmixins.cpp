#include "cmnornamentsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::MordentLogMixIn::MordentLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MordentLogMixIn::~MordentLogMixIn() {}
MeiAttribute* mei::MordentLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::MordentLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::MordentLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::MordentLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::MordentLogMixIn::getLong() {
    if (!b->hasAttribute("long")) {
        throw AttributeNotFoundException("long");
    }
    return b->getAttribute("long");
};

void mei::MordentLogMixIn::setLong(std::string _long) {
    MeiAttribute *a = new MeiAttribute("long", _long);
    b->addAttribute(a);
};

bool mei::MordentLogMixIn::hasLong() {
    return b->hasAttribute("long");
};

void mei::MordentLogMixIn::removeLong() {
    b->removeAttribute("long");
};

mei::OrnamentaccidMixIn::OrnamentaccidMixIn(MeiElement *b) {
    this->b = b;
};

mei::OrnamentaccidMixIn::~OrnamentaccidMixIn() {}
MeiAttribute* mei::OrnamentaccidMixIn::getAccidupper() {
    if (!b->hasAttribute("accidupper")) {
        throw AttributeNotFoundException("accidupper");
    }
    return b->getAttribute("accidupper");
};

void mei::OrnamentaccidMixIn::setAccidupper(std::string _accidupper) {
    MeiAttribute *a = new MeiAttribute("accidupper", _accidupper);
    b->addAttribute(a);
};

bool mei::OrnamentaccidMixIn::hasAccidupper() {
    return b->hasAttribute("accidupper");
};

void mei::OrnamentaccidMixIn::removeAccidupper() {
    b->removeAttribute("accidupper");
};
MeiAttribute* mei::OrnamentaccidMixIn::getAccidlower() {
    if (!b->hasAttribute("accidlower")) {
        throw AttributeNotFoundException("accidlower");
    }
    return b->getAttribute("accidlower");
};

void mei::OrnamentaccidMixIn::setAccidlower(std::string _accidlower) {
    MeiAttribute *a = new MeiAttribute("accidlower", _accidlower);
    b->addAttribute(a);
};

bool mei::OrnamentaccidMixIn::hasAccidlower() {
    return b->hasAttribute("accidlower");
};

void mei::OrnamentaccidMixIn::removeAccidlower() {
    b->removeAttribute("accidlower");
};

mei::TurnLogMixIn::TurnLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::TurnLogMixIn::~TurnLogMixIn() {}
MeiAttribute* mei::TurnLogMixIn::getDelayed() {
    if (!b->hasAttribute("delayed")) {
        throw AttributeNotFoundException("delayed");
    }
    return b->getAttribute("delayed");
};

void mei::TurnLogMixIn::setDelayed(std::string _delayed) {
    MeiAttribute *a = new MeiAttribute("delayed", _delayed);
    b->addAttribute(a);
};

bool mei::TurnLogMixIn::hasDelayed() {
    return b->hasAttribute("delayed");
};

void mei::TurnLogMixIn::removeDelayed() {
    b->removeAttribute("delayed");
};
MeiAttribute* mei::TurnLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::TurnLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::TurnLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::TurnLogMixIn::removeForm() {
    b->removeAttribute("form");
};



