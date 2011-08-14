#include "edittransmixins.h"
using namespace std;

AgentidentMixIn::AgentidentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string AgentidentMixIn::getAgentValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return b->m_Base.getAttributeValue("agent");
};
            
MeiAttribute* AgentidentMixIn::getAgent() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return b->m_Base.getAttribute("agent");
};
            
void AgentidentMixIn::setAgent(string _agent) {
    if(!b->m_Base.hasAttribute("agent")) {
        MeiAttribute * a = new MeiAttribute("agent", _agent);
        b->m_Base.addAttribute(a);
    }
};
            
bool AgentidentMixIn::hasAgent() {
    return b->m_Base.hasAttribute("agent");
};
            
ExtentMixIn::ExtentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ExtentMixIn::getExtentValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return b->m_Base.getAttributeValue("extent");
};
            
MeiAttribute* ExtentMixIn::getExtent() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return b->m_Base.getAttribute("extent");
};
            
void ExtentMixIn::setExtent(string _extent) {
    if(!b->m_Base.hasAttribute("extent")) {
        MeiAttribute * a = new MeiAttribute("extent", _extent);
        b->m_Base.addAttribute(a);
    }
};
            
bool ExtentMixIn::hasExtent() {
    return b->m_Base.hasAttribute("extent");
};
            
ReasonidentMixIn::ReasonidentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ReasonidentMixIn::getReasonValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return b->m_Base.getAttributeValue("reason");
};
            
MeiAttribute* ReasonidentMixIn::getReason() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return b->m_Base.getAttribute("reason");
};
            
void ReasonidentMixIn::setReason(string _reason) {
    if(!b->m_Base.hasAttribute("reason")) {
        MeiAttribute * a = new MeiAttribute("reason", _reason);
        b->m_Base.addAttribute(a);
    }
};
            
bool ReasonidentMixIn::hasReason() {
    return b->m_Base.hasAttribute("reason");
};
            
EditMixIn::EditMixIn(BaseMeiElement *b) {
    this->b = b;
};
string EditMixIn::getCertValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cert")) {
        throw AttributeNotFoundException("cert");
    }
    return b->m_Base.getAttributeValue("cert");
};
            
MeiAttribute* EditMixIn::getCert() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cert")) {
        throw AttributeNotFoundException("cert");
    }
    return b->m_Base.getAttribute("cert");
};
            
void EditMixIn::setCert(string _cert) {
    if(!b->m_Base.hasAttribute("cert")) {
        MeiAttribute * a = new MeiAttribute("cert", _cert);
        b->m_Base.addAttribute(a);
    }
};
            
bool EditMixIn::hasCert() {
    return b->m_Base.hasAttribute("cert");
};
            
string EditMixIn::getEvidenceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("evidence")) {
        throw AttributeNotFoundException("evidence");
    }
    return b->m_Base.getAttributeValue("evidence");
};
            
MeiAttribute* EditMixIn::getEvidence() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("evidence")) {
        throw AttributeNotFoundException("evidence");
    }
    return b->m_Base.getAttribute("evidence");
};
            
void EditMixIn::setEvidence(string _evidence) {
    if(!b->m_Base.hasAttribute("evidence")) {
        MeiAttribute * a = new MeiAttribute("evidence", _evidence);
        b->m_Base.addAttribute(a);
    }
};
            
bool EditMixIn::hasEvidence() {
    return b->m_Base.hasAttribute("evidence");
};
            
string EditMixIn::getRespValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->m_Base.getAttributeValue("resp");
};
            
MeiAttribute* EditMixIn::getResp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->m_Base.getAttribute("resp");
};
            
void EditMixIn::setResp(string _resp) {
    if(!b->m_Base.hasAttribute("resp")) {
        MeiAttribute * a = new MeiAttribute("resp", _resp);
        b->m_Base.addAttribute(a);
    }
};
            
bool EditMixIn::hasResp() {
    return b->m_Base.hasAttribute("resp");
};
            
string EditMixIn::getSourceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->m_Base.getAttributeValue("source");
};
            
MeiAttribute* EditMixIn::getSource() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->m_Base.getAttribute("source");
};
            
void EditMixIn::setSource(string _source) {
    if(!b->m_Base.hasAttribute("source")) {
        MeiAttribute * a = new MeiAttribute("source", _source);
        b->m_Base.addAttribute(a);
    }
};
            
bool EditMixIn::hasSource() {
    return b->m_Base.hasAttribute("source");
};
            
TransMixIn::TransMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TransMixIn::getHandValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->m_Base.getAttributeValue("hand");
};
            
MeiAttribute* TransMixIn::getHand() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->m_Base.getAttribute("hand");
};
            
void TransMixIn::setHand(string _hand) {
    if(!b->m_Base.hasAttribute("hand")) {
        MeiAttribute * a = new MeiAttribute("hand", _hand);
        b->m_Base.addAttribute(a);
    }
};
            
bool TransMixIn::hasHand() {
    return b->m_Base.hasAttribute("hand");
};
            
string TransMixIn::getSeqValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->m_Base.getAttributeValue("seq");
};
            
MeiAttribute* TransMixIn::getSeq() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->m_Base.getAttribute("seq");
};
            
void TransMixIn::setSeq(string _seq) {
    if(!b->m_Base.hasAttribute("seq")) {
        MeiAttribute * a = new MeiAttribute("seq", _seq);
        b->m_Base.addAttribute(a);
    }
};
            
bool TransMixIn::hasSeq() {
    return b->m_Base.hasAttribute("seq");
};
            