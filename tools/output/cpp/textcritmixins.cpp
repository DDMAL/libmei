#include "textcritmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::RdgPartMixIn::RdgPartMixIn(MeiElement *b) {
    this->b = b;
};

mei::RdgPartMixIn::~RdgPartMixIn() {}
MeiAttribute* mei::RdgPartMixIn::getWit() {
    if (!b->hasAttribute("wit")) {
        throw AttributeNotFoundException("wit");
    }
    return b->getAttribute("wit");
};

void mei::RdgPartMixIn::setWit(std::string _wit) {
    MeiAttribute *a = new MeiAttribute("wit", _wit);
    b->addAttribute(a);
};

bool mei::RdgPartMixIn::hasWit() {
    return b->hasAttribute("wit");
};

void mei::RdgPartMixIn::removeWit() {
    b->removeAttribute("wit");
};

/* include <witmixin> */
mei::TextCriticalMixIn::TextCriticalMixIn(MeiElement *b) {
    this->b = b;
};

mei::TextCriticalMixIn::~TextCriticalMixIn() {}
MeiAttribute* mei::TextCriticalMixIn::getType() {
    if (!b->hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->getAttribute("type");
};

void mei::TextCriticalMixIn::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    b->addAttribute(a);
};

bool mei::TextCriticalMixIn::hasType() {
    return b->hasAttribute("type");
};

void mei::TextCriticalMixIn::removeType() {
    b->removeAttribute("type");
};
MeiAttribute* mei::TextCriticalMixIn::getCause() {
    if (!b->hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->getAttribute("cause");
};

void mei::TextCriticalMixIn::setCause(std::string _cause) {
    MeiAttribute *a = new MeiAttribute("cause", _cause);
    b->addAttribute(a);
};

bool mei::TextCriticalMixIn::hasCause() {
    return b->hasAttribute("cause");
};

void mei::TextCriticalMixIn::removeCause() {
    b->removeAttribute("cause");
};
MeiAttribute* mei::TextCriticalMixIn::getVarSeq() {
    if (!b->hasAttribute("varSeq")) {
        throw AttributeNotFoundException("varSeq");
    }
    return b->getAttribute("varSeq");
};

void mei::TextCriticalMixIn::setVarSeq(std::string _varSeq) {
    MeiAttribute *a = new MeiAttribute("varSeq", _varSeq);
    b->addAttribute(a);
};

bool mei::TextCriticalMixIn::hasVarSeq() {
    return b->hasAttribute("varSeq");
};

void mei::TextCriticalMixIn::removeVarSeq() {
    b->removeAttribute("varSeq");
};
MeiAttribute* mei::TextCriticalMixIn::getHand() {
    if (!b->hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->getAttribute("hand");
};

void mei::TextCriticalMixIn::setHand(std::string _hand) {
    MeiAttribute *a = new MeiAttribute("hand", _hand);
    b->addAttribute(a);
};

bool mei::TextCriticalMixIn::hasHand() {
    return b->hasAttribute("hand");
};

void mei::TextCriticalMixIn::removeHand() {
    b->removeAttribute("hand");
};

/* include <handmixin> */
mei::WitnessedMixIn::WitnessedMixIn(MeiElement *b) {
    this->b = b;
};

mei::WitnessedMixIn::~WitnessedMixIn() {}
MeiAttribute* mei::WitnessedMixIn::getWit() {
    if (!b->hasAttribute("wit")) {
        throw AttributeNotFoundException("wit");
    }
    return b->getAttribute("wit");
};

void mei::WitnessedMixIn::setWit(std::string _wit) {
    MeiAttribute *a = new MeiAttribute("wit", _wit);
    b->addAttribute(a);
};

bool mei::WitnessedMixIn::hasWit() {
    return b->hasAttribute("wit");
};

void mei::WitnessedMixIn::removeWit() {
    b->removeAttribute("wit");
};

/* include <witmixin> */


