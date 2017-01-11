#include "meimixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::NotationtypeMixIn::NotationtypeMixIn(MeiElement *b) {
    this->b = b;
};

mei::NotationtypeMixIn::~NotationtypeMixIn() {}
MeiAttribute* mei::NotationtypeMixIn::getNotationtype() {
    if (!b->hasAttribute("notationtype")) {
        return NULL;
    }
    return b->getAttribute("notationtype");
};

void mei::NotationtypeMixIn::setNotationtype(std::string _notationtype) {
    MeiAttribute *a = new MeiAttribute("notationtype", _notationtype);
    b->addAttribute(a);
};

bool mei::NotationtypeMixIn::hasNotationtype() {
    return b->hasAttribute("notationtype");
};

void mei::NotationtypeMixIn::removeNotationtype() {
    b->removeAttribute("notationtype");
};
MeiAttribute* mei::NotationtypeMixIn::getNotationsubtype() {
    if (!b->hasAttribute("notationsubtype")) {
        return NULL;
    }
    return b->getAttribute("notationsubtype");
};

void mei::NotationtypeMixIn::setNotationsubtype(std::string _notationsubtype) {
    MeiAttribute *a = new MeiAttribute("notationsubtype", _notationsubtype);
    b->addAttribute(a);
};

bool mei::NotationtypeMixIn::hasNotationsubtype() {
    return b->hasAttribute("notationsubtype");
};

void mei::NotationtypeMixIn::removeNotationsubtype() {
    b->removeAttribute("notationsubtype");
};

/* include <notationsubtypemixin> */


