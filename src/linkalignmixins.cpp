

#include "linkalignmixins.h"
using std::string;


AlignmentMixIn::AlignmentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AlignmentMixIn::getWhenValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->m_Base.getAttributeValue("when");
};

MeiAttribute* AlignmentMixIn::getWhen() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->m_Base.getAttribute("when");
};

void AlignmentMixIn::setWhen(std::string _when) {
    if (!b->m_Base.hasAttribute("when")) {
        MeiAttribute *a = new MeiAttribute("when", _when);
        b->m_Base.addAttribute(a);
    }
};

bool AlignmentMixIn::hasWhen() {
    return b->m_Base.hasAttribute("when");
};

void AlignmentMixIn::removeWhen() {
    b->m_Base.removeAttribute("when");
};



