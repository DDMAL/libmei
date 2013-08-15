#include "linkalignmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_alignmentMixIn::Mei_alignmentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_alignmentMixIn::~Mei_alignmentMixIn() {}
MeiAttribute* mei::Mei_alignmentMixIn::getWhen() {
    if (!b->hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->getAttribute("when");
};

void mei::Mei_alignmentMixIn::setWhen(std::string _when) {
    MeiAttribute *a = new MeiAttribute("when", _when);
    b->addAttribute(a);
};

bool mei::Mei_alignmentMixIn::hasWhen() {
    return b->hasAttribute("when");
};

void mei::Mei_alignmentMixIn::removeWhen() {
    b->removeAttribute("when");
};

/* include <whenmixin> */


