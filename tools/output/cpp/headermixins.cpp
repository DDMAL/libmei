#include "headermixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::PatternReplacementMixIn::PatternReplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::PatternReplacementMixIn::~PatternReplacementMixIn() {}
MeiAttribute* mei::PatternReplacementMixIn::getMatchPattern() {
    if (!b->hasAttribute("matchPattern")) {
        throw AttributeNotFoundException("matchPattern");
    }
    return b->getAttribute("matchPattern");
};

void mei::PatternReplacementMixIn::setMatchPattern(std::string _matchPattern) {
    MeiAttribute *a = new MeiAttribute("matchPattern", _matchPattern);
    b->addAttribute(a);
};

bool mei::PatternReplacementMixIn::hasMatchPattern() {
    return b->hasAttribute("matchPattern");
};

void mei::PatternReplacementMixIn::removeMatchPattern() {
    b->removeAttribute("matchPattern");
};
MeiAttribute* mei::PatternReplacementMixIn::getReplacementPattern() {
    if (!b->hasAttribute("replacementPattern")) {
        throw AttributeNotFoundException("replacementPattern");
    }
    return b->getAttribute("replacementPattern");
};

void mei::PatternReplacementMixIn::setReplacementPattern(std::string _replacementPattern) {
    MeiAttribute *a = new MeiAttribute("replacementPattern", _replacementPattern);
    b->addAttribute(a);
};

bool mei::PatternReplacementMixIn::hasReplacementPattern() {
    return b->hasAttribute("replacementPattern");
};

void mei::PatternReplacementMixIn::removeReplacementPattern() {
    b->removeAttribute("replacementPattern");
};

/* include <replacementPatternmixin> */
mei::Mei_regularmethodMixIn::Mei_regularmethodMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_regularmethodMixIn::~Mei_regularmethodMixIn() {}
MeiAttribute* mei::Mei_regularmethodMixIn::getMethod() {
    if (!b->hasAttribute("method")) {
        throw AttributeNotFoundException("method");
    }
    return b->getAttribute("method");
};

void mei::Mei_regularmethodMixIn::setMethod(std::string _method) {
    MeiAttribute *a = new MeiAttribute("method", _method);
    b->addAttribute(a);
};

bool mei::Mei_regularmethodMixIn::hasMethod() {
    return b->hasAttribute("method");
};

void mei::Mei_regularmethodMixIn::removeMethod() {
    b->removeAttribute("method");
};

/* include <methodmixin> */


