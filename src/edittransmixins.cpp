

#include "edittransmixins.h"
using std::string;


AgentidentMixIn::AgentidentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AgentidentMixIn::getAgentValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return b->m_Base.getAttributeValue("agent");
};

MeiAttribute* AgentidentMixIn::getAgent() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return b->m_Base.getAttribute("agent");
};

void AgentidentMixIn::setAgent(std::string _agent) {
    if (!b->m_Base.hasAttribute("agent")) {
        MeiAttribute *a = new MeiAttribute("agent", _agent);
        b->m_Base.addAttribute(a);
    }
};

bool AgentidentMixIn::hasAgent() {
    return b->m_Base.hasAttribute("agent");
};

void AgentidentMixIn::removeAgent() {
    b->m_Base.removeAttribute("agent");
};


EditMixIn::EditMixIn(BaseMeiElement *b) {
    this->b = b;
};

string EditMixIn::getCertValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cert")) {
        throw AttributeNotFoundException("cert");
    }
    return b->m_Base.getAttributeValue("cert");
};

MeiAttribute* EditMixIn::getCert() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cert")) {
        throw AttributeNotFoundException("cert");
    }
    return b->m_Base.getAttribute("cert");
};

void EditMixIn::setCert(std::string _cert) {
    if (!b->m_Base.hasAttribute("cert")) {
        MeiAttribute *a = new MeiAttribute("cert", _cert);
        b->m_Base.addAttribute(a);
    }
};

bool EditMixIn::hasCert() {
    return b->m_Base.hasAttribute("cert");
};

void EditMixIn::removeCert() {
    b->m_Base.removeAttribute("cert");
};

string EditMixIn::getEvidenceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("evidence")) {
        throw AttributeNotFoundException("evidence");
    }
    return b->m_Base.getAttributeValue("evidence");
};

MeiAttribute* EditMixIn::getEvidence() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("evidence")) {
        throw AttributeNotFoundException("evidence");
    }
    return b->m_Base.getAttribute("evidence");
};

void EditMixIn::setEvidence(std::string _evidence) {
    if (!b->m_Base.hasAttribute("evidence")) {
        MeiAttribute *a = new MeiAttribute("evidence", _evidence);
        b->m_Base.addAttribute(a);
    }
};

bool EditMixIn::hasEvidence() {
    return b->m_Base.hasAttribute("evidence");
};

void EditMixIn::removeEvidence() {
    b->m_Base.removeAttribute("evidence");
};


ExtentMixIn::ExtentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ExtentMixIn::getExtentValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return b->m_Base.getAttributeValue("extent");
};

MeiAttribute* ExtentMixIn::getExtent() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return b->m_Base.getAttribute("extent");
};

void ExtentMixIn::setExtent(std::string _extent) {
    if (!b->m_Base.hasAttribute("extent")) {
        MeiAttribute *a = new MeiAttribute("extent", _extent);
        b->m_Base.addAttribute(a);
    }
};

bool ExtentMixIn::hasExtent() {
    return b->m_Base.hasAttribute("extent");
};

void ExtentMixIn::removeExtent() {
    b->m_Base.removeAttribute("extent");
};


ReasonidentMixIn::ReasonidentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ReasonidentMixIn::getReasonValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return b->m_Base.getAttributeValue("reason");
};

MeiAttribute* ReasonidentMixIn::getReason() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return b->m_Base.getAttribute("reason");
};

void ReasonidentMixIn::setReason(std::string _reason) {
    if (!b->m_Base.hasAttribute("reason")) {
        MeiAttribute *a = new MeiAttribute("reason", _reason);
        b->m_Base.addAttribute(a);
    }
};

bool ReasonidentMixIn::hasReason() {
    return b->m_Base.hasAttribute("reason");
};

void ReasonidentMixIn::removeReason() {
    b->m_Base.removeAttribute("reason");
};



