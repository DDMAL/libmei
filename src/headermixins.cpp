

#include "headermixins.h"
using std::string;


RegularmethodMixIn::RegularmethodMixIn(BaseMeiElement *b) {
    this->b = b;
};

string RegularmethodMixIn::getMethodValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("method")) {
        throw AttributeNotFoundException("method");
    }
    return b->m_Base.getAttributeValue("method");
};

MeiAttribute* RegularmethodMixIn::getMethod() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("method")) {
        throw AttributeNotFoundException("method");
    }
    return b->m_Base.getAttribute("method");
};

void RegularmethodMixIn::setMethod(std::string _method) {
    if (!b->m_Base.hasAttribute("method")) {
        MeiAttribute *a = new MeiAttribute("method", _method);
        b->m_Base.addAttribute(a);
    }
};

bool RegularmethodMixIn::hasMethod() {
    return b->m_Base.hasAttribute("method");
};

void RegularmethodMixIn::removeMethod() {
    b->m_Base.removeAttribute("method");
};



