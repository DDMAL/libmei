

#include "linkalignmixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::AlignmentMixIn::AlignmentMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::AlignmentMixIn::getWhen() {
    if (!b->hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->getAttribute("when");
};

void mei::AlignmentMixIn::setWhen(std::string _when) {
    if (!b->hasAttribute("when")) {
        MeiAttribute *a = new MeiAttribute("when", _when);
        b->addAttribute(a);
    }
};

bool mei::AlignmentMixIn::hasWhen() {
    return b->hasAttribute("when");
};

void mei::AlignmentMixIn::removeWhen() {
    b->removeAttribute("when");
};



