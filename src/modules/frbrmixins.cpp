#include "frbrmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::RelMixIn::RelMixIn(MeiElement *b) {
    this->b = b;
};

mei::RelMixIn::~RelMixIn() {}
MeiAttribute* mei::RelMixIn::getRel() {
    if (!b->hasAttribute("rel")) {
        return NULL;
    }
    return b->getAttribute("rel");
};

void mei::RelMixIn::setRel(std::string _rel) {
    MeiAttribute *a = new MeiAttribute("rel", _rel);
    b->addAttribute(a);
};

bool mei::RelMixIn::hasRel() {
    return b->hasAttribute("rel");
};

void mei::RelMixIn::removeRel() {
    b->removeAttribute("rel");
};

/* include <relmixin> */


