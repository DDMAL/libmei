#include "cmnornamentsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_mordentLogMixIn::Mei_mordentLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_mordentLogMixIn::~Mei_mordentLogMixIn() {}
MeiAttribute* mei::Mei_mordentLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_mordentLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_mordentLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_mordentLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::Mei_mordentLogMixIn::getLong() {
    if (!b->hasAttribute("long")) {
        throw AttributeNotFoundException("long");
    }
    return b->getAttribute("long");
};

void mei::Mei_mordentLogMixIn::setLong(std::string _long) {
    MeiAttribute *a = new MeiAttribute("long", _long);
    b->addAttribute(a);
};

bool mei::Mei_mordentLogMixIn::hasLong() {
    return b->hasAttribute("long");
};

void mei::Mei_mordentLogMixIn::removeLong() {
    b->removeAttribute("long");
};

/* include <longmixin> */
mei::Mei_ornamMixIn::Mei_ornamMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_ornamMixIn::~Mei_ornamMixIn() {}
MeiAttribute* mei::Mei_ornamMixIn::getOrnam() {
    if (!b->hasAttribute("ornam")) {
        throw AttributeNotFoundException("ornam");
    }
    return b->getAttribute("ornam");
};

void mei::Mei_ornamMixIn::setOrnam(std::string _ornam) {
    MeiAttribute *a = new MeiAttribute("ornam", _ornam);
    b->addAttribute(a);
};

bool mei::Mei_ornamMixIn::hasOrnam() {
    return b->hasAttribute("ornam");
};

void mei::Mei_ornamMixIn::removeOrnam() {
    b->removeAttribute("ornam");
};

/* include <ornammixin> */
mei::Mei_ornamentaccidMixIn::Mei_ornamentaccidMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_ornamentaccidMixIn::~Mei_ornamentaccidMixIn() {}
MeiAttribute* mei::Mei_ornamentaccidMixIn::getAccidupper() {
    if (!b->hasAttribute("accidupper")) {
        throw AttributeNotFoundException("accidupper");
    }
    return b->getAttribute("accidupper");
};

void mei::Mei_ornamentaccidMixIn::setAccidupper(std::string _accidupper) {
    MeiAttribute *a = new MeiAttribute("accidupper", _accidupper);
    b->addAttribute(a);
};

bool mei::Mei_ornamentaccidMixIn::hasAccidupper() {
    return b->hasAttribute("accidupper");
};

void mei::Mei_ornamentaccidMixIn::removeAccidupper() {
    b->removeAttribute("accidupper");
};
MeiAttribute* mei::Mei_ornamentaccidMixIn::getAccidlower() {
    if (!b->hasAttribute("accidlower")) {
        throw AttributeNotFoundException("accidlower");
    }
    return b->getAttribute("accidlower");
};

void mei::Mei_ornamentaccidMixIn::setAccidlower(std::string _accidlower) {
    MeiAttribute *a = new MeiAttribute("accidlower", _accidlower);
    b->addAttribute(a);
};

bool mei::Mei_ornamentaccidMixIn::hasAccidlower() {
    return b->hasAttribute("accidlower");
};

void mei::Mei_ornamentaccidMixIn::removeAccidlower() {
    b->removeAttribute("accidlower");
};

/* include <accidlowermixin> */
mei::Mei_turnLogMixIn::Mei_turnLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_turnLogMixIn::~Mei_turnLogMixIn() {}
MeiAttribute* mei::Mei_turnLogMixIn::getDelayed() {
    if (!b->hasAttribute("delayed")) {
        throw AttributeNotFoundException("delayed");
    }
    return b->getAttribute("delayed");
};

void mei::Mei_turnLogMixIn::setDelayed(std::string _delayed) {
    MeiAttribute *a = new MeiAttribute("delayed", _delayed);
    b->addAttribute(a);
};

bool mei::Mei_turnLogMixIn::hasDelayed() {
    return b->hasAttribute("delayed");
};

void mei::Mei_turnLogMixIn::removeDelayed() {
    b->removeAttribute("delayed");
};
MeiAttribute* mei::Mei_turnLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_turnLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_turnLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_turnLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */


