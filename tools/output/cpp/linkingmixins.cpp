#include "linkingmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::GlobalLinkingMixIn::GlobalLinkingMixIn(MeiElement *b) {
    this->b = b;
};

mei::GlobalLinkingMixIn::~GlobalLinkingMixIn() {}
MeiAttribute* mei::GlobalLinkingMixIn::getCorresp() {
    if (!b->hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->getAttribute("corresp");
};

void mei::GlobalLinkingMixIn::setCorresp(std::string _corresp) {
    MeiAttribute *a = new MeiAttribute("corresp", _corresp);
    b->addAttribute(a);
};

bool mei::GlobalLinkingMixIn::hasCorresp() {
    return b->hasAttribute("corresp");
};

void mei::GlobalLinkingMixIn::removeCorresp() {
    b->removeAttribute("corresp");
};
MeiAttribute* mei::GlobalLinkingMixIn::getSynch() {
    if (!b->hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->getAttribute("synch");
};

void mei::GlobalLinkingMixIn::setSynch(std::string _synch) {
    MeiAttribute *a = new MeiAttribute("synch", _synch);
    b->addAttribute(a);
};

bool mei::GlobalLinkingMixIn::hasSynch() {
    return b->hasAttribute("synch");
};

void mei::GlobalLinkingMixIn::removeSynch() {
    b->removeAttribute("synch");
};
MeiAttribute* mei::GlobalLinkingMixIn::getSameAs() {
    if (!b->hasAttribute("sameAs")) {
        throw AttributeNotFoundException("sameAs");
    }
    return b->getAttribute("sameAs");
};

void mei::GlobalLinkingMixIn::setSameAs(std::string _sameAs) {
    MeiAttribute *a = new MeiAttribute("sameAs", _sameAs);
    b->addAttribute(a);
};

bool mei::GlobalLinkingMixIn::hasSameAs() {
    return b->hasAttribute("sameAs");
};

void mei::GlobalLinkingMixIn::removeSameAs() {
    b->removeAttribute("sameAs");
};
MeiAttribute* mei::GlobalLinkingMixIn::getCopyOf() {
    if (!b->hasAttribute("copyOf")) {
        throw AttributeNotFoundException("copyOf");
    }
    return b->getAttribute("copyOf");
};

void mei::GlobalLinkingMixIn::setCopyOf(std::string _copyOf) {
    MeiAttribute *a = new MeiAttribute("copyOf", _copyOf);
    b->addAttribute(a);
};

bool mei::GlobalLinkingMixIn::hasCopyOf() {
    return b->hasAttribute("copyOf");
};

void mei::GlobalLinkingMixIn::removeCopyOf() {
    b->removeAttribute("copyOf");
};
MeiAttribute* mei::GlobalLinkingMixIn::getNext() {
    if (!b->hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->getAttribute("next");
};

void mei::GlobalLinkingMixIn::setNext(std::string _next) {
    MeiAttribute *a = new MeiAttribute("next", _next);
    b->addAttribute(a);
};

bool mei::GlobalLinkingMixIn::hasNext() {
    return b->hasAttribute("next");
};

void mei::GlobalLinkingMixIn::removeNext() {
    b->removeAttribute("next");
};
MeiAttribute* mei::GlobalLinkingMixIn::getPrev() {
    if (!b->hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->getAttribute("prev");
};

void mei::GlobalLinkingMixIn::setPrev(std::string _prev) {
    MeiAttribute *a = new MeiAttribute("prev", _prev);
    b->addAttribute(a);
};

bool mei::GlobalLinkingMixIn::hasPrev() {
    return b->hasAttribute("prev");
};

void mei::GlobalLinkingMixIn::removePrev() {
    b->removeAttribute("prev");
};
MeiAttribute* mei::GlobalLinkingMixIn::getExclude() {
    if (!b->hasAttribute("exclude")) {
        throw AttributeNotFoundException("exclude");
    }
    return b->getAttribute("exclude");
};

void mei::GlobalLinkingMixIn::setExclude(std::string _exclude) {
    MeiAttribute *a = new MeiAttribute("exclude", _exclude);
    b->addAttribute(a);
};

bool mei::GlobalLinkingMixIn::hasExclude() {
    return b->hasAttribute("exclude");
};

void mei::GlobalLinkingMixIn::removeExclude() {
    b->removeAttribute("exclude");
};
MeiAttribute* mei::GlobalLinkingMixIn::getSelect() {
    if (!b->hasAttribute("select")) {
        throw AttributeNotFoundException("select");
    }
    return b->getAttribute("select");
};

void mei::GlobalLinkingMixIn::setSelect(std::string _select) {
    MeiAttribute *a = new MeiAttribute("select", _select);
    b->addAttribute(a);
};

bool mei::GlobalLinkingMixIn::hasSelect() {
    return b->hasAttribute("select");
};

void mei::GlobalLinkingMixIn::removeSelect() {
    b->removeAttribute("select");
};

/* include <selectmixin> */


