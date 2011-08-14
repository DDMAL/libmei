#include "cmnOrnamentsmixins.h"
using namespace std;

OrnamentaccidMixIn::OrnamentaccidMixIn(BaseMeiElement *b) {
    this->b = b;
};
string OrnamentaccidMixIn::getAccidupperValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accidupper")) {
        throw AttributeNotFoundException("accidupper");
    }
    return b->m_Base.getAttributeValue("accidupper");
};
            
MeiAttribute* OrnamentaccidMixIn::getAccidupper() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accidupper")) {
        throw AttributeNotFoundException("accidupper");
    }
    return b->m_Base.getAttribute("accidupper");
};
            
void OrnamentaccidMixIn::setAccidupper(string _accidupper) {
    if(!b->m_Base.hasAttribute("accidupper")) {
        MeiAttribute * a = new MeiAttribute("accidupper", _accidupper);
        b->m_Base.addAttribute(a);
    }
};
            
bool OrnamentaccidMixIn::hasAccidupper() {
    return b->m_Base.hasAttribute("accidupper");
};
            
string OrnamentaccidMixIn::getAccidlowerValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accidlower")) {
        throw AttributeNotFoundException("accidlower");
    }
    return b->m_Base.getAttributeValue("accidlower");
};
            
MeiAttribute* OrnamentaccidMixIn::getAccidlower() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accidlower")) {
        throw AttributeNotFoundException("accidlower");
    }
    return b->m_Base.getAttribute("accidlower");
};
            
void OrnamentaccidMixIn::setAccidlower(string _accidlower) {
    if(!b->m_Base.hasAttribute("accidlower")) {
        MeiAttribute * a = new MeiAttribute("accidlower", _accidlower);
        b->m_Base.addAttribute(a);
    }
};
            
bool OrnamentaccidMixIn::hasAccidlower() {
    return b->m_Base.hasAttribute("accidlower");
};
            