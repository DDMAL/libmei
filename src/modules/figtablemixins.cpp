
#include "figtablemixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::TabularMixIn::TabularMixIn(MeiElement *b) {
    this->b = b;
};
mei::TabularMixIn::~TabularMixIn() {};

MeiAttribute* mei::TabularMixIn::getColspan() {
    if (!b->hasAttribute("colspan")) {
        throw AttributeNotFoundException("colspan");
    }
    return b->getAttribute("colspan");
};

void mei::TabularMixIn::setColspan(std::string _colspan) {
    if (!b->hasAttribute("colspan")) {
        MeiAttribute *a = new MeiAttribute("colspan", _colspan);
        b->addAttribute(a);
    }
};

bool mei::TabularMixIn::hasColspan() {
    return b->hasAttribute("colspan");
};

void mei::TabularMixIn::removeColspan() {
    b->removeAttribute("colspan");
};

MeiAttribute* mei::TabularMixIn::getRowspan() {
    if (!b->hasAttribute("rowspan")) {
        throw AttributeNotFoundException("rowspan");
    }
    return b->getAttribute("rowspan");
};

void mei::TabularMixIn::setRowspan(std::string _rowspan) {
    if (!b->hasAttribute("rowspan")) {
        MeiAttribute *a = new MeiAttribute("rowspan", _rowspan);
        b->addAttribute(a);
    }
};

bool mei::TabularMixIn::hasRowspan() {
    return b->hasAttribute("rowspan");
};

void mei::TabularMixIn::removeRowspan() {
    b->removeAttribute("rowspan");
};



