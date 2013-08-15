#include "figtablemixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_tabularMixIn::Mei_tabularMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_tabularMixIn::~Mei_tabularMixIn() {}
MeiAttribute* mei::Mei_tabularMixIn::getColspan() {
    if (!b->hasAttribute("colspan")) {
        throw AttributeNotFoundException("colspan");
    }
    return b->getAttribute("colspan");
};

void mei::Mei_tabularMixIn::setColspan(std::string _colspan) {
    MeiAttribute *a = new MeiAttribute("colspan", _colspan);
    b->addAttribute(a);
};

bool mei::Mei_tabularMixIn::hasColspan() {
    return b->hasAttribute("colspan");
};

void mei::Mei_tabularMixIn::removeColspan() {
    b->removeAttribute("colspan");
};
MeiAttribute* mei::Mei_tabularMixIn::getRowspan() {
    if (!b->hasAttribute("rowspan")) {
        throw AttributeNotFoundException("rowspan");
    }
    return b->getAttribute("rowspan");
};

void mei::Mei_tabularMixIn::setRowspan(std::string _rowspan) {
    MeiAttribute *a = new MeiAttribute("rowspan", _rowspan);
    b->addAttribute(a);
};

bool mei::Mei_tabularMixIn::hasRowspan() {
    return b->hasAttribute("rowspan");
};

void mei::Mei_tabularMixIn::removeRowspan() {
    b->removeAttribute("rowspan");
};

/* include <rowspanmixin> */


