#include "harmonymixins.h"
using namespace std;

FretlocationMixIn::FretlocationMixIn(BaseMeiElement *b) {
    this->b = b;
};
string FretlocationMixIn::getFretValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fret")) {
        throw AttributeNotFoundException("fret");
    }
    return b->m_Base.getAttributeValue("fret");
};
            
MeiAttribute* FretlocationMixIn::getFret() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fret")) {
        throw AttributeNotFoundException("fret");
    }
    return b->m_Base.getAttribute("fret");
};
            
void FretlocationMixIn::setFret(string _fret) {
    if(!b->m_Base.hasAttribute("fret")) {
        MeiAttribute * a = new MeiAttribute("fret", _fret);
        b->m_Base.addAttribute(a);
    }
};
            
bool FretlocationMixIn::hasFret() {
    return b->m_Base.hasAttribute("fret");
};
            