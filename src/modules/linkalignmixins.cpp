#include "linkalignmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AlignmentMixIn::AlignmentMixIn(MeiElement *b) {
    this->b = b;
};

mei::AlignmentMixIn::~AlignmentMixIn() {}
MeiAttribute* mei::AlignmentMixIn::getWhen() {
    if (!b->hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->getAttribute("when");
};

void mei::AlignmentMixIn::setWhen(std::string _when) {
    MeiAttribute *a = new MeiAttribute("when", _when);
    b->addAttribute(a);
};

bool mei::AlignmentMixIn::hasWhen() {
    return b->hasAttribute("when");
};

void mei::AlignmentMixIn::removeWhen() {
    b->removeAttribute("when");
};



