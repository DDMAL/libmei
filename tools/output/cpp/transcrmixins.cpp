#include "transcrmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::CoordinatedMixIn::CoordinatedMixIn(MeiElement *b) {
    this->b = b;
};

mei::CoordinatedMixIn::~CoordinatedMixIn() {}
MeiAttribute* mei::CoordinatedMixIn::getStart() {
    if (!b->hasAttribute("start")) {
        throw AttributeNotFoundException("start");
    }
    return b->getAttribute("start");
};

void mei::CoordinatedMixIn::setStart(std::string _start) {
    MeiAttribute *a = new MeiAttribute("start", _start);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasStart() {
    return b->hasAttribute("start");
};

void mei::CoordinatedMixIn::removeStart() {
    b->removeAttribute("start");
};
MeiAttribute* mei::CoordinatedMixIn::getUlx() {
    if (!b->hasAttribute("ulx")) {
        throw AttributeNotFoundException("ulx");
    }
    return b->getAttribute("ulx");
};

void mei::CoordinatedMixIn::setUlx(std::string _ulx) {
    MeiAttribute *a = new MeiAttribute("ulx", _ulx);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasUlx() {
    return b->hasAttribute("ulx");
};

void mei::CoordinatedMixIn::removeUlx() {
    b->removeAttribute("ulx");
};
MeiAttribute* mei::CoordinatedMixIn::getUly() {
    if (!b->hasAttribute("uly")) {
        throw AttributeNotFoundException("uly");
    }
    return b->getAttribute("uly");
};

void mei::CoordinatedMixIn::setUly(std::string _uly) {
    MeiAttribute *a = new MeiAttribute("uly", _uly);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasUly() {
    return b->hasAttribute("uly");
};

void mei::CoordinatedMixIn::removeUly() {
    b->removeAttribute("uly");
};
MeiAttribute* mei::CoordinatedMixIn::getLrx() {
    if (!b->hasAttribute("lrx")) {
        throw AttributeNotFoundException("lrx");
    }
    return b->getAttribute("lrx");
};

void mei::CoordinatedMixIn::setLrx(std::string _lrx) {
    MeiAttribute *a = new MeiAttribute("lrx", _lrx);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasLrx() {
    return b->hasAttribute("lrx");
};

void mei::CoordinatedMixIn::removeLrx() {
    b->removeAttribute("lrx");
};
MeiAttribute* mei::CoordinatedMixIn::getLry() {
    if (!b->hasAttribute("lry")) {
        throw AttributeNotFoundException("lry");
    }
    return b->getAttribute("lry");
};

void mei::CoordinatedMixIn::setLry(std::string _lry) {
    MeiAttribute *a = new MeiAttribute("lry", _lry);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasLry() {
    return b->hasAttribute("lry");
};

void mei::CoordinatedMixIn::removeLry() {
    b->removeAttribute("lry");
};

/* include <lrymixin> */
mei::GlobalChangeMixIn::GlobalChangeMixIn(MeiElement *b) {
    this->b = b;
};

mei::GlobalChangeMixIn::~GlobalChangeMixIn() {}
MeiAttribute* mei::GlobalChangeMixIn::getChange() {
    if (!b->hasAttribute("change")) {
        throw AttributeNotFoundException("change");
    }
    return b->getAttribute("change");
};

void mei::GlobalChangeMixIn::setChange(std::string _change) {
    MeiAttribute *a = new MeiAttribute("change", _change);
    b->addAttribute(a);
};

bool mei::GlobalChangeMixIn::hasChange() {
    return b->hasAttribute("change");
};

void mei::GlobalChangeMixIn::removeChange() {
    b->removeAttribute("change");
};

/* include <changemixin> */
mei::GlobalFacsMixIn::GlobalFacsMixIn(MeiElement *b) {
    this->b = b;
};

mei::GlobalFacsMixIn::~GlobalFacsMixIn() {}
MeiAttribute* mei::GlobalFacsMixIn::getFacs() {
    if (!b->hasAttribute("facs")) {
        throw AttributeNotFoundException("facs");
    }
    return b->getAttribute("facs");
};

void mei::GlobalFacsMixIn::setFacs(std::string _facs) {
    MeiAttribute *a = new MeiAttribute("facs", _facs);
    b->addAttribute(a);
};

bool mei::GlobalFacsMixIn::hasFacs() {
    return b->hasAttribute("facs");
};

void mei::GlobalFacsMixIn::removeFacs() {
    b->removeAttribute("facs");
};

/* include <facsmixin> */


