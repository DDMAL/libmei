#include "headermixins.h"

#include <string>
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;

mei::RegularmethodMixIn::RegularmethodMixIn(MeiElement *b) {
    this->b = b;
};

mei::RegularmethodMixIn::~RegularmethodMixIn() {}
MeiAttribute* mei::RegularmethodMixIn::getMethod() {
    if (!b->hasAttribute("method")) {
        throw AttributeNotFoundException("method");
    }
    return b->getAttribute("method");
};

void mei::RegularmethodMixIn::setMethod(std::string _method) {
    if (!b->hasAttribute("method")) {
        MeiAttribute *a = new MeiAttribute("method", _method);
        b->addAttribute(a);
    }
};

bool mei::RegularmethodMixIn::hasMethod() {
    return b->hasAttribute("method");
};

void mei::RegularmethodMixIn::removeMethod() {
    b->removeAttribute("method");
};



