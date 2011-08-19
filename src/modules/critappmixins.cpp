

#include "critappmixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::CritMixIn::CritMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::CritMixIn::getCause() {
    if (!b->hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->getAttribute("cause");
};

void mei::CritMixIn::setCause(std::string _cause) {
    if (!b->hasAttribute("cause")) {
        MeiAttribute *a = new MeiAttribute("cause", _cause);
        b->addAttribute(a);
    }
};

bool mei::CritMixIn::hasCause() {
    return b->hasAttribute("cause");
};

void mei::CritMixIn::removeCause() {
    b->removeAttribute("cause");
};


mei::SourceMixIn::SourceMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::SourceMixIn::getSource() {
    if (!b->hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->getAttribute("source");
};

void mei::SourceMixIn::setSource(std::string _source) {
    if (!b->hasAttribute("source")) {
        MeiAttribute *a = new MeiAttribute("source", _source);
        b->addAttribute(a);
    }
};

bool mei::SourceMixIn::hasSource() {
    return b->hasAttribute("source");
};

void mei::SourceMixIn::removeSource() {
    b->removeAttribute("source");
};



