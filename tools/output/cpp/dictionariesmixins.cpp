#include "dictionariesmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::EntryLikeMixIn::EntryLikeMixIn(MeiElement *b) {
    this->b = b;
};

mei::EntryLikeMixIn::~EntryLikeMixIn() {}
MeiAttribute* mei::EntryLikeMixIn::getType() {
    if (!b->hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->getAttribute("type");
};

void mei::EntryLikeMixIn::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    b->addAttribute(a);
};

bool mei::EntryLikeMixIn::hasType() {
    return b->hasAttribute("type");
};

void mei::EntryLikeMixIn::removeType() {
    b->removeAttribute("type");
};

/* include <typemixin> */
mei::LexicographicMixIn::LexicographicMixIn(MeiElement *b) {
    this->b = b;
};

mei::LexicographicMixIn::~LexicographicMixIn() {}
MeiAttribute* mei::LexicographicMixIn::getExpand() {
    if (!b->hasAttribute("expand")) {
        throw AttributeNotFoundException("expand");
    }
    return b->getAttribute("expand");
};

void mei::LexicographicMixIn::setExpand(std::string _expand) {
    MeiAttribute *a = new MeiAttribute("expand", _expand);
    b->addAttribute(a);
};

bool mei::LexicographicMixIn::hasExpand() {
    return b->hasAttribute("expand");
};

void mei::LexicographicMixIn::removeExpand() {
    b->removeAttribute("expand");
};
MeiAttribute* mei::LexicographicMixIn::getNorm() {
    if (!b->hasAttribute("norm")) {
        throw AttributeNotFoundException("norm");
    }
    return b->getAttribute("norm");
};

void mei::LexicographicMixIn::setNorm(std::string _norm) {
    MeiAttribute *a = new MeiAttribute("norm", _norm);
    b->addAttribute(a);
};

bool mei::LexicographicMixIn::hasNorm() {
    return b->hasAttribute("norm");
};

void mei::LexicographicMixIn::removeNorm() {
    b->removeAttribute("norm");
};
MeiAttribute* mei::LexicographicMixIn::getSplit() {
    if (!b->hasAttribute("split")) {
        throw AttributeNotFoundException("split");
    }
    return b->getAttribute("split");
};

void mei::LexicographicMixIn::setSplit(std::string _split) {
    MeiAttribute *a = new MeiAttribute("split", _split);
    b->addAttribute(a);
};

bool mei::LexicographicMixIn::hasSplit() {
    return b->hasAttribute("split");
};

void mei::LexicographicMixIn::removeSplit() {
    b->removeAttribute("split");
};
MeiAttribute* mei::LexicographicMixIn::getValue() {
    if (!b->hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return b->getAttribute("value");
};

void mei::LexicographicMixIn::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    b->addAttribute(a);
};

bool mei::LexicographicMixIn::hasValue() {
    return b->hasAttribute("value");
};

void mei::LexicographicMixIn::removeValue() {
    b->removeAttribute("value");
};
MeiAttribute* mei::LexicographicMixIn::getOrig() {
    if (!b->hasAttribute("orig")) {
        throw AttributeNotFoundException("orig");
    }
    return b->getAttribute("orig");
};

void mei::LexicographicMixIn::setOrig(std::string _orig) {
    MeiAttribute *a = new MeiAttribute("orig", _orig);
    b->addAttribute(a);
};

bool mei::LexicographicMixIn::hasOrig() {
    return b->hasAttribute("orig");
};

void mei::LexicographicMixIn::removeOrig() {
    b->removeAttribute("orig");
};
MeiAttribute* mei::LexicographicMixIn::getLocation() {
    if (!b->hasAttribute("location")) {
        throw AttributeNotFoundException("location");
    }
    return b->getAttribute("location");
};

void mei::LexicographicMixIn::setLocation(std::string _location) {
    MeiAttribute *a = new MeiAttribute("location", _location);
    b->addAttribute(a);
};

bool mei::LexicographicMixIn::hasLocation() {
    return b->hasAttribute("location");
};

void mei::LexicographicMixIn::removeLocation() {
    b->removeAttribute("location");
};
MeiAttribute* mei::LexicographicMixIn::getMergedIn() {
    if (!b->hasAttribute("mergedIn")) {
        throw AttributeNotFoundException("mergedIn");
    }
    return b->getAttribute("mergedIn");
};

void mei::LexicographicMixIn::setMergedIn(std::string _mergedIn) {
    MeiAttribute *a = new MeiAttribute("mergedIn", _mergedIn);
    b->addAttribute(a);
};

bool mei::LexicographicMixIn::hasMergedIn() {
    return b->hasAttribute("mergedIn");
};

void mei::LexicographicMixIn::removeMergedIn() {
    b->removeAttribute("mergedIn");
};
MeiAttribute* mei::LexicographicMixIn::getOpt() {
    if (!b->hasAttribute("opt")) {
        throw AttributeNotFoundException("opt");
    }
    return b->getAttribute("opt");
};

void mei::LexicographicMixIn::setOpt(std::string _opt) {
    MeiAttribute *a = new MeiAttribute("opt", _opt);
    b->addAttribute(a);
};

bool mei::LexicographicMixIn::hasOpt() {
    return b->hasAttribute("opt");
};

void mei::LexicographicMixIn::removeOpt() {
    b->removeAttribute("opt");
};

/* include <optmixin> */


