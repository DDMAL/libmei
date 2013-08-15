#include "coremixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::MilestoneUnitMixIn::MilestoneUnitMixIn(MeiElement *b) {
    this->b = b;
};

mei::MilestoneUnitMixIn::~MilestoneUnitMixIn() {}
MeiAttribute* mei::MilestoneUnitMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->getAttribute("unit");
};

void mei::MilestoneUnitMixIn::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::MilestoneUnitMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::MilestoneUnitMixIn::removeUnit() {
    b->removeAttribute("unit");
};

/* include <unitmixin> */


