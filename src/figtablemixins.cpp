#include "figtablemixins.h"
using namespace std;

TabularMixIn::TabularMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TabularMixIn::getColspanValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("colspan")) {
        throw AttributeNotFoundException("colspan");
    }
    return b->m_Base.getAttributeValue("colspan");
};
            
MeiAttribute* TabularMixIn::getColspan() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("colspan")) {
        throw AttributeNotFoundException("colspan");
    }
    return b->m_Base.getAttribute("colspan");
};
            
void TabularMixIn::setColspan(string _colspan) {
    if(!b->m_Base.hasAttribute("colspan")) {
        MeiAttribute * a = new MeiAttribute("colspan", _colspan);
        b->m_Base.addAttribute(a);
    }
};
            
bool TabularMixIn::hasColspan() {
    return b->m_Base.hasAttribute("colspan");
};
            
string TabularMixIn::getRowspanValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rowspan")) {
        throw AttributeNotFoundException("rowspan");
    }
    return b->m_Base.getAttributeValue("rowspan");
};
            
MeiAttribute* TabularMixIn::getRowspan() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rowspan")) {
        throw AttributeNotFoundException("rowspan");
    }
    return b->m_Base.getAttribute("rowspan");
};
            
void TabularMixIn::setRowspan(string _rowspan) {
    if(!b->m_Base.hasAttribute("rowspan")) {
        MeiAttribute * a = new MeiAttribute("rowspan", _rowspan);
        b->m_Base.addAttribute(a);
    }
};
            
bool TabularMixIn::hasRowspan() {
    return b->m_Base.hasAttribute("rowspan");
};
            