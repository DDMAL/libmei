#include "critappmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_critMixIn::Mei_critMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_critMixIn::~Mei_critMixIn() {}
MeiAttribute* mei::Mei_critMixIn::getCause() {
    if (!b->hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->getAttribute("cause");
};

void mei::Mei_critMixIn::setCause(std::string _cause) {
    MeiAttribute *a = new MeiAttribute("cause", _cause);
    b->addAttribute(a);
};

bool mei::Mei_critMixIn::hasCause() {
    return b->hasAttribute("cause");
};

void mei::Mei_critMixIn::removeCause() {
    b->removeAttribute("cause");
};

/* include <causemixin> */
mei::Mei_sourceMixIn::Mei_sourceMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_sourceMixIn::~Mei_sourceMixIn() {}
MeiAttribute* mei::Mei_sourceMixIn::getSource() {
    if (!b->hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->getAttribute("source");
};

void mei::Mei_sourceMixIn::setSource(std::string _source) {
    MeiAttribute *a = new MeiAttribute("source", _source);
    b->addAttribute(a);
};

bool mei::Mei_sourceMixIn::hasSource() {
    return b->hasAttribute("source");
};

void mei::Mei_sourceMixIn::removeSource() {
    b->removeAttribute("source");
};

/* include <sourcemixin> */


