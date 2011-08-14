#include "critappmixins.h"
using namespace std;

SourceMixIn::SourceMixIn(BaseMeiElement *b) {
    this->b = b;
};
string SourceMixIn::getSourceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->m_Base.getAttributeValue("source");
};
            
MeiAttribute* SourceMixIn::getSource() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->m_Base.getAttribute("source");
};
            
void SourceMixIn::setSource(string _source) {
    if(!b->m_Base.hasAttribute("source")) {
        MeiAttribute * a = new MeiAttribute("source", _source);
        b->m_Base.addAttribute(a);
    }
};
            
bool SourceMixIn::hasSource() {
    return b->m_Base.hasAttribute("source");
};
            
RdgGesMixIn::RdgGesMixIn(BaseMeiElement *b) {
    this->b = b;
};
RdgLogMixIn::RdgLogMixIn(BaseMeiElement *b) {
    this->b = b;
};
RdgVisMixIn::RdgVisMixIn(BaseMeiElement *b) {
    this->b = b;
};
RdgAnlMixIn::RdgAnlMixIn(BaseMeiElement *b) {
    this->b = b;
};
string RdgAnlMixIn::getCopyofValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("copyof")) {
        throw AttributeNotFoundException("copyof");
    }
    return b->m_Base.getAttributeValue("copyof");
};
            
MeiAttribute* RdgAnlMixIn::getCopyof() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("copyof")) {
        throw AttributeNotFoundException("copyof");
    }
    return b->m_Base.getAttribute("copyof");
};
            
void RdgAnlMixIn::setCopyof(string _copyof) {
    if(!b->m_Base.hasAttribute("copyof")) {
        MeiAttribute * a = new MeiAttribute("copyof", _copyof);
        b->m_Base.addAttribute(a);
    }
};
            
bool RdgAnlMixIn::hasCopyof() {
    return b->m_Base.hasAttribute("copyof");
};
            
string RdgAnlMixIn::getCorrespValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->m_Base.getAttributeValue("corresp");
};
            
MeiAttribute* RdgAnlMixIn::getCorresp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->m_Base.getAttribute("corresp");
};
            
void RdgAnlMixIn::setCorresp(string _corresp) {
    if(!b->m_Base.hasAttribute("corresp")) {
        MeiAttribute * a = new MeiAttribute("corresp", _corresp);
        b->m_Base.addAttribute(a);
    }
};
            
bool RdgAnlMixIn::hasCorresp() {
    return b->m_Base.hasAttribute("corresp");
};
            
string RdgAnlMixIn::getNextValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->m_Base.getAttributeValue("next");
};
            
MeiAttribute* RdgAnlMixIn::getNext() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->m_Base.getAttribute("next");
};
            
void RdgAnlMixIn::setNext(string _next) {
    if(!b->m_Base.hasAttribute("next")) {
        MeiAttribute * a = new MeiAttribute("next", _next);
        b->m_Base.addAttribute(a);
    }
};
            
bool RdgAnlMixIn::hasNext() {
    return b->m_Base.hasAttribute("next");
};
            
string RdgAnlMixIn::getPrevValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->m_Base.getAttributeValue("prev");
};
            
MeiAttribute* RdgAnlMixIn::getPrev() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->m_Base.getAttribute("prev");
};
            
void RdgAnlMixIn::setPrev(string _prev) {
    if(!b->m_Base.hasAttribute("prev")) {
        MeiAttribute * a = new MeiAttribute("prev", _prev);
        b->m_Base.addAttribute(a);
    }
};
            
bool RdgAnlMixIn::hasPrev() {
    return b->m_Base.hasAttribute("prev");
};
            
string RdgAnlMixIn::getSameasValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("sameas")) {
        throw AttributeNotFoundException("sameas");
    }
    return b->m_Base.getAttributeValue("sameas");
};
            
MeiAttribute* RdgAnlMixIn::getSameas() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("sameas")) {
        throw AttributeNotFoundException("sameas");
    }
    return b->m_Base.getAttribute("sameas");
};
            
void RdgAnlMixIn::setSameas(string _sameas) {
    if(!b->m_Base.hasAttribute("sameas")) {
        MeiAttribute * a = new MeiAttribute("sameas", _sameas);
        b->m_Base.addAttribute(a);
    }
};
            
bool RdgAnlMixIn::hasSameas() {
    return b->m_Base.hasAttribute("sameas");
};
            
string RdgAnlMixIn::getSynchValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->m_Base.getAttributeValue("synch");
};
            
MeiAttribute* RdgAnlMixIn::getSynch() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->m_Base.getAttribute("synch");
};
            
void RdgAnlMixIn::setSynch(string _synch) {
    if(!b->m_Base.hasAttribute("synch")) {
        MeiAttribute * a = new MeiAttribute("synch", _synch);
        b->m_Base.addAttribute(a);
    }
};
            
bool RdgAnlMixIn::hasSynch() {
    return b->m_Base.hasAttribute("synch");
};
            
string RdgAnlMixIn::getWhenValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->m_Base.getAttributeValue("when");
};
            
MeiAttribute* RdgAnlMixIn::getWhen() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->m_Base.getAttribute("when");
};
            
void RdgAnlMixIn::setWhen(string _when) {
    if(!b->m_Base.hasAttribute("when")) {
        MeiAttribute * a = new MeiAttribute("when", _when);
        b->m_Base.addAttribute(a);
    }
};
            
bool RdgAnlMixIn::hasWhen() {
    return b->m_Base.hasAttribute("when");
};
            
CritMixIn::CritMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CritMixIn::getCauseValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->m_Base.getAttributeValue("cause");
};
            
MeiAttribute* CritMixIn::getCause() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->m_Base.getAttribute("cause");
};
            
void CritMixIn::setCause(string _cause) {
    if(!b->m_Base.hasAttribute("cause")) {
        MeiAttribute * a = new MeiAttribute("cause", _cause);
        b->m_Base.addAttribute(a);
    }
};
            
bool CritMixIn::hasCause() {
    return b->m_Base.hasAttribute("cause");
};
            
string CritMixIn::getHandValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->m_Base.getAttributeValue("hand");
};
            
MeiAttribute* CritMixIn::getHand() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->m_Base.getAttribute("hand");
};
            
void CritMixIn::setHand(string _hand) {
    if(!b->m_Base.hasAttribute("hand")) {
        MeiAttribute * a = new MeiAttribute("hand", _hand);
        b->m_Base.addAttribute(a);
    }
};
            
bool CritMixIn::hasHand() {
    return b->m_Base.hasAttribute("hand");
};
            
string CritMixIn::getRespValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->m_Base.getAttributeValue("resp");
};
            
MeiAttribute* CritMixIn::getResp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->m_Base.getAttribute("resp");
};
            
void CritMixIn::setResp(string _resp) {
    if(!b->m_Base.hasAttribute("resp")) {
        MeiAttribute * a = new MeiAttribute("resp", _resp);
        b->m_Base.addAttribute(a);
    }
};
            
bool CritMixIn::hasResp() {
    return b->m_Base.hasAttribute("resp");
};
            
string CritMixIn::getSeqValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->m_Base.getAttributeValue("seq");
};
            
MeiAttribute* CritMixIn::getSeq() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->m_Base.getAttribute("seq");
};
            
void CritMixIn::setSeq(string _seq) {
    if(!b->m_Base.hasAttribute("seq")) {
        MeiAttribute * a = new MeiAttribute("seq", _seq);
        b->m_Base.addAttribute(a);
    }
};
            
bool CritMixIn::hasSeq() {
    return b->m_Base.hasAttribute("seq");
};
            
string CritMixIn::getSourceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->m_Base.getAttributeValue("source");
};
            
MeiAttribute* CritMixIn::getSource() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->m_Base.getAttribute("source");
};
            
void CritMixIn::setSource(string _source) {
    if(!b->m_Base.hasAttribute("source")) {
        MeiAttribute * a = new MeiAttribute("source", _source);
        b->m_Base.addAttribute(a);
    }
};
            
bool CritMixIn::hasSource() {
    return b->m_Base.hasAttribute("source");
};
            