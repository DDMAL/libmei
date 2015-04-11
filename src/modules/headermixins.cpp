#include "headermixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::RegularmethodMixIn::RegularmethodMixIn(MeiElement *b) {
    this->b = b;
};

mei::RegularmethodMixIn::~RegularmethodMixIn() {}
MeiAttribute* mei::RegularmethodMixIn::getMethod() {
    if (!b->hasAttribute("method")) {
        return NULL;
    }
    return b->getAttribute("method");
};

void mei::RegularmethodMixIn::setMethod(std::string _method) {
    MeiAttribute *a = new MeiAttribute("method", _method);
    b->addAttribute(a);
};

bool mei::RegularmethodMixIn::hasMethod() {
    return b->hasAttribute("method");
};

void mei::RegularmethodMixIn::removeMethod() {
    b->removeAttribute("method");
};

/* include <methodmixin> */


