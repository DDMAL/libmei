#include "msdescriptionmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::MsExcerptMixIn::MsExcerptMixIn(MeiElement *b) {
    this->b = b;
};

mei::MsExcerptMixIn::~MsExcerptMixIn() {}
MeiAttribute* mei::MsExcerptMixIn::getDefective() {
    if (!b->hasAttribute("defective")) {
        throw AttributeNotFoundException("defective");
    }
    return b->getAttribute("defective");
};

void mei::MsExcerptMixIn::setDefective(std::string _defective) {
    MeiAttribute *a = new MeiAttribute("defective", _defective);
    b->addAttribute(a);
};

bool mei::MsExcerptMixIn::hasDefective() {
    return b->hasAttribute("defective");
};

void mei::MsExcerptMixIn::removeDefective() {
    b->removeAttribute("defective");
};

/* include <defectivemixin> */


