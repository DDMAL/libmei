#include "figtablemixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::TabularMixIn::TabularMixIn(MeiElement *b) {
    this->b = b;
};

mei::TabularMixIn::~TabularMixIn() {}
MeiAttribute* mei::TabularMixIn::getColspan() {
    if (!b->hasAttribute("colspan")) {
        return NULL;
    }
    return b->getAttribute("colspan");
};

void mei::TabularMixIn::setColspan(std::string _colspan) {
    MeiAttribute *a = new MeiAttribute("colspan", _colspan);
    b->addAttribute(a);
};

bool mei::TabularMixIn::hasColspan() {
    return b->hasAttribute("colspan");
};

void mei::TabularMixIn::removeColspan() {
    b->removeAttribute("colspan");
};
MeiAttribute* mei::TabularMixIn::getRowspan() {
    if (!b->hasAttribute("rowspan")) {
        return NULL;
    }
    return b->getAttribute("rowspan");
};

void mei::TabularMixIn::setRowspan(std::string _rowspan) {
    MeiAttribute *a = new MeiAttribute("rowspan", _rowspan);
    b->addAttribute(a);
};

bool mei::TabularMixIn::hasRowspan() {
    return b->hasAttribute("rowspan");
};

void mei::TabularMixIn::removeRowspan() {
    b->removeAttribute("rowspan");
};

/* include <rowspanmixin> */


