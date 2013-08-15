#include "namesdatesmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::DatableCustomMixIn::DatableCustomMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatableCustomMixIn::~DatableCustomMixIn() {}
MeiAttribute* mei::DatableCustomMixIn::getWhen-custom() {
    if (!b->hasAttribute("when-custom")) {
        throw AttributeNotFoundException("when-custom");
    }
    return b->getAttribute("when-custom");
};

void mei::DatableCustomMixIn::setWhen-custom(std::string _when-custom) {
    MeiAttribute *a = new MeiAttribute("when-custom", _when-custom);
    b->addAttribute(a);
};

bool mei::DatableCustomMixIn::hasWhen-custom() {
    return b->hasAttribute("when-custom");
};

void mei::DatableCustomMixIn::removeWhen-custom() {
    b->removeAttribute("when-custom");
};
MeiAttribute* mei::DatableCustomMixIn::getNotBefore-custom() {
    if (!b->hasAttribute("notBefore-custom")) {
        throw AttributeNotFoundException("notBefore-custom");
    }
    return b->getAttribute("notBefore-custom");
};

void mei::DatableCustomMixIn::setNotBefore-custom(std::string _notBefore-custom) {
    MeiAttribute *a = new MeiAttribute("notBefore-custom", _notBefore-custom);
    b->addAttribute(a);
};

bool mei::DatableCustomMixIn::hasNotBefore-custom() {
    return b->hasAttribute("notBefore-custom");
};

void mei::DatableCustomMixIn::removeNotBefore-custom() {
    b->removeAttribute("notBefore-custom");
};
MeiAttribute* mei::DatableCustomMixIn::getNotAfter-custom() {
    if (!b->hasAttribute("notAfter-custom")) {
        throw AttributeNotFoundException("notAfter-custom");
    }
    return b->getAttribute("notAfter-custom");
};

void mei::DatableCustomMixIn::setNotAfter-custom(std::string _notAfter-custom) {
    MeiAttribute *a = new MeiAttribute("notAfter-custom", _notAfter-custom);
    b->addAttribute(a);
};

bool mei::DatableCustomMixIn::hasNotAfter-custom() {
    return b->hasAttribute("notAfter-custom");
};

void mei::DatableCustomMixIn::removeNotAfter-custom() {
    b->removeAttribute("notAfter-custom");
};
MeiAttribute* mei::DatableCustomMixIn::getFrom-custom() {
    if (!b->hasAttribute("from-custom")) {
        throw AttributeNotFoundException("from-custom");
    }
    return b->getAttribute("from-custom");
};

void mei::DatableCustomMixIn::setFrom-custom(std::string _from-custom) {
    MeiAttribute *a = new MeiAttribute("from-custom", _from-custom);
    b->addAttribute(a);
};

bool mei::DatableCustomMixIn::hasFrom-custom() {
    return b->hasAttribute("from-custom");
};

void mei::DatableCustomMixIn::removeFrom-custom() {
    b->removeAttribute("from-custom");
};
MeiAttribute* mei::DatableCustomMixIn::getTo-custom() {
    if (!b->hasAttribute("to-custom")) {
        throw AttributeNotFoundException("to-custom");
    }
    return b->getAttribute("to-custom");
};

void mei::DatableCustomMixIn::setTo-custom(std::string _to-custom) {
    MeiAttribute *a = new MeiAttribute("to-custom", _to-custom);
    b->addAttribute(a);
};

bool mei::DatableCustomMixIn::hasTo-custom() {
    return b->hasAttribute("to-custom");
};

void mei::DatableCustomMixIn::removeTo-custom() {
    b->removeAttribute("to-custom");
};
MeiAttribute* mei::DatableCustomMixIn::getDatingPoint() {
    if (!b->hasAttribute("datingPoint")) {
        throw AttributeNotFoundException("datingPoint");
    }
    return b->getAttribute("datingPoint");
};

void mei::DatableCustomMixIn::setDatingPoint(std::string _datingPoint) {
    MeiAttribute *a = new MeiAttribute("datingPoint", _datingPoint);
    b->addAttribute(a);
};

bool mei::DatableCustomMixIn::hasDatingPoint() {
    return b->hasAttribute("datingPoint");
};

void mei::DatableCustomMixIn::removeDatingPoint() {
    b->removeAttribute("datingPoint");
};
MeiAttribute* mei::DatableCustomMixIn::getDatingMethod() {
    if (!b->hasAttribute("datingMethod")) {
        throw AttributeNotFoundException("datingMethod");
    }
    return b->getAttribute("datingMethod");
};

void mei::DatableCustomMixIn::setDatingMethod(std::string _datingMethod) {
    MeiAttribute *a = new MeiAttribute("datingMethod", _datingMethod);
    b->addAttribute(a);
};

bool mei::DatableCustomMixIn::hasDatingMethod() {
    return b->hasAttribute("datingMethod");
};

void mei::DatableCustomMixIn::removeDatingMethod() {
    b->removeAttribute("datingMethod");
};

/* include <datingMethodmixin> */
mei::DatableIsoMixIn::DatableIsoMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatableIsoMixIn::~DatableIsoMixIn() {}
MeiAttribute* mei::DatableIsoMixIn::getWhen-iso() {
    if (!b->hasAttribute("when-iso")) {
        throw AttributeNotFoundException("when-iso");
    }
    return b->getAttribute("when-iso");
};

void mei::DatableIsoMixIn::setWhen-iso(std::string _when-iso) {
    MeiAttribute *a = new MeiAttribute("when-iso", _when-iso);
    b->addAttribute(a);
};

bool mei::DatableIsoMixIn::hasWhen-iso() {
    return b->hasAttribute("when-iso");
};

void mei::DatableIsoMixIn::removeWhen-iso() {
    b->removeAttribute("when-iso");
};
MeiAttribute* mei::DatableIsoMixIn::getNotBefore-iso() {
    if (!b->hasAttribute("notBefore-iso")) {
        throw AttributeNotFoundException("notBefore-iso");
    }
    return b->getAttribute("notBefore-iso");
};

void mei::DatableIsoMixIn::setNotBefore-iso(std::string _notBefore-iso) {
    MeiAttribute *a = new MeiAttribute("notBefore-iso", _notBefore-iso);
    b->addAttribute(a);
};

bool mei::DatableIsoMixIn::hasNotBefore-iso() {
    return b->hasAttribute("notBefore-iso");
};

void mei::DatableIsoMixIn::removeNotBefore-iso() {
    b->removeAttribute("notBefore-iso");
};
MeiAttribute* mei::DatableIsoMixIn::getNotAfter-iso() {
    if (!b->hasAttribute("notAfter-iso")) {
        throw AttributeNotFoundException("notAfter-iso");
    }
    return b->getAttribute("notAfter-iso");
};

void mei::DatableIsoMixIn::setNotAfter-iso(std::string _notAfter-iso) {
    MeiAttribute *a = new MeiAttribute("notAfter-iso", _notAfter-iso);
    b->addAttribute(a);
};

bool mei::DatableIsoMixIn::hasNotAfter-iso() {
    return b->hasAttribute("notAfter-iso");
};

void mei::DatableIsoMixIn::removeNotAfter-iso() {
    b->removeAttribute("notAfter-iso");
};
MeiAttribute* mei::DatableIsoMixIn::getFrom-iso() {
    if (!b->hasAttribute("from-iso")) {
        throw AttributeNotFoundException("from-iso");
    }
    return b->getAttribute("from-iso");
};

void mei::DatableIsoMixIn::setFrom-iso(std::string _from-iso) {
    MeiAttribute *a = new MeiAttribute("from-iso", _from-iso);
    b->addAttribute(a);
};

bool mei::DatableIsoMixIn::hasFrom-iso() {
    return b->hasAttribute("from-iso");
};

void mei::DatableIsoMixIn::removeFrom-iso() {
    b->removeAttribute("from-iso");
};
MeiAttribute* mei::DatableIsoMixIn::getTo-iso() {
    if (!b->hasAttribute("to-iso")) {
        throw AttributeNotFoundException("to-iso");
    }
    return b->getAttribute("to-iso");
};

void mei::DatableIsoMixIn::setTo-iso(std::string _to-iso) {
    MeiAttribute *a = new MeiAttribute("to-iso", _to-iso);
    b->addAttribute(a);
};

bool mei::DatableIsoMixIn::hasTo-iso() {
    return b->hasAttribute("to-iso");
};

void mei::DatableIsoMixIn::removeTo-iso() {
    b->removeAttribute("to-iso");
};

/* include <to-isomixin> */


