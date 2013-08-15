#include "facsimilemixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_facsimileMixIn::Mei_facsimileMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_facsimileMixIn::~Mei_facsimileMixIn() {}
MeiAttribute* mei::Mei_facsimileMixIn::getFacs() {
    if (!b->hasAttribute("facs")) {
        throw AttributeNotFoundException("facs");
    }
    return b->getAttribute("facs");
};

void mei::Mei_facsimileMixIn::setFacs(std::string _facs) {
    MeiAttribute *a = new MeiAttribute("facs", _facs);
    b->addAttribute(a);
};

bool mei::Mei_facsimileMixIn::hasFacs() {
    return b->hasAttribute("facs");
};

void mei::Mei_facsimileMixIn::removeFacs() {
    b->removeAttribute("facs");
};

/* include <facsmixin> */


