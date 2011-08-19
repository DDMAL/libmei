
#include "facsimilemixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::FacsimileMixIn::FacsimileMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::FacsimileMixIn::getFacs() {
    if (!b->hasAttribute("facs")) {
        throw AttributeNotFoundException("facs");
    }
    return b->getAttribute("facs");
};

void mei::FacsimileMixIn::setFacs(std::string _facs) {
    if (!b->hasAttribute("facs")) {
        MeiAttribute *a = new MeiAttribute("facs", _facs);
        b->addAttribute(a);
    }
};

bool mei::FacsimileMixIn::hasFacs() {
    return b->hasAttribute("facs");
};

void mei::FacsimileMixIn::removeFacs() {
    b->removeAttribute("facs");
};



