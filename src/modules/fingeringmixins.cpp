#include "fingeringmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::FingGrpLogMixIn::FingGrpLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::FingGrpLogMixIn::~FingGrpLogMixIn() {}
MeiAttribute* mei::FingGrpLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::FingGrpLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::FingGrpLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::FingGrpLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::FingGrpVisMixIn::FingGrpVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::FingGrpVisMixIn::~FingGrpVisMixIn() {}
MeiAttribute* mei::FingGrpVisMixIn::getOrient() {
    if (!b->hasAttribute("orient")) {
        return NULL;
    }
    return b->getAttribute("orient");
};

void mei::FingGrpVisMixIn::setOrient(std::string _orient) {
    MeiAttribute *a = new MeiAttribute("orient", _orient);
    b->addAttribute(a);
};

bool mei::FingGrpVisMixIn::hasOrient() {
    return b->hasAttribute("orient");
};

void mei::FingGrpVisMixIn::removeOrient() {
    b->removeAttribute("orient");
};

/* include <orientmixin> */


