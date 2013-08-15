#include "versemixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::EnjambMixIn::EnjambMixIn(MeiElement *b) {
    this->b = b;
};

mei::EnjambMixIn::~EnjambMixIn() {}
MeiAttribute* mei::EnjambMixIn::getEnjamb() {
    if (!b->hasAttribute("enjamb")) {
        throw AttributeNotFoundException("enjamb");
    }
    return b->getAttribute("enjamb");
};

void mei::EnjambMixIn::setEnjamb(std::string _enjamb) {
    MeiAttribute *a = new MeiAttribute("enjamb", _enjamb);
    b->addAttribute(a);
};

bool mei::EnjambMixIn::hasEnjamb() {
    return b->hasAttribute("enjamb");
};

void mei::EnjambMixIn::removeEnjamb() {
    b->removeAttribute("enjamb");
};

/* include <enjambmixin> */
mei::MetricalMixIn::MetricalMixIn(MeiElement *b) {
    this->b = b;
};

mei::MetricalMixIn::~MetricalMixIn() {}
MeiAttribute* mei::MetricalMixIn::getMet() {
    if (!b->hasAttribute("met")) {
        throw AttributeNotFoundException("met");
    }
    return b->getAttribute("met");
};

void mei::MetricalMixIn::setMet(std::string _met) {
    MeiAttribute *a = new MeiAttribute("met", _met);
    b->addAttribute(a);
};

bool mei::MetricalMixIn::hasMet() {
    return b->hasAttribute("met");
};

void mei::MetricalMixIn::removeMet() {
    b->removeAttribute("met");
};
MeiAttribute* mei::MetricalMixIn::getReal() {
    if (!b->hasAttribute("real")) {
        throw AttributeNotFoundException("real");
    }
    return b->getAttribute("real");
};

void mei::MetricalMixIn::setReal(std::string _real) {
    MeiAttribute *a = new MeiAttribute("real", _real);
    b->addAttribute(a);
};

bool mei::MetricalMixIn::hasReal() {
    return b->hasAttribute("real");
};

void mei::MetricalMixIn::removeReal() {
    b->removeAttribute("real");
};
MeiAttribute* mei::MetricalMixIn::getRhyme() {
    if (!b->hasAttribute("rhyme")) {
        throw AttributeNotFoundException("rhyme");
    }
    return b->getAttribute("rhyme");
};

void mei::MetricalMixIn::setRhyme(std::string _rhyme) {
    MeiAttribute *a = new MeiAttribute("rhyme", _rhyme);
    b->addAttribute(a);
};

bool mei::MetricalMixIn::hasRhyme() {
    return b->hasAttribute("rhyme");
};

void mei::MetricalMixIn::removeRhyme() {
    b->removeAttribute("rhyme");
};

/* include <rhymemixin> */


