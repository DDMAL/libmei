
#include "edittransmixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::AgentidentMixIn::AgentidentMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::AgentidentMixIn::getAgent() {
    if (!b->hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return b->getAttribute("agent");
};

void mei::AgentidentMixIn::setAgent(std::string _agent) {
    if (!b->hasAttribute("agent")) {
        MeiAttribute *a = new MeiAttribute("agent", _agent);
        b->addAttribute(a);
    }
};

bool mei::AgentidentMixIn::hasAgent() {
    return b->hasAttribute("agent");
};

void mei::AgentidentMixIn::removeAgent() {
    b->removeAttribute("agent");
};


mei::EditMixIn::EditMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::EditMixIn::getCert() {
    if (!b->hasAttribute("cert")) {
        throw AttributeNotFoundException("cert");
    }
    return b->getAttribute("cert");
};

void mei::EditMixIn::setCert(std::string _cert) {
    if (!b->hasAttribute("cert")) {
        MeiAttribute *a = new MeiAttribute("cert", _cert);
        b->addAttribute(a);
    }
};

bool mei::EditMixIn::hasCert() {
    return b->hasAttribute("cert");
};

void mei::EditMixIn::removeCert() {
    b->removeAttribute("cert");
};

MeiAttribute* mei::EditMixIn::getEvidence() {
    if (!b->hasAttribute("evidence")) {
        throw AttributeNotFoundException("evidence");
    }
    return b->getAttribute("evidence");
};

void mei::EditMixIn::setEvidence(std::string _evidence) {
    if (!b->hasAttribute("evidence")) {
        MeiAttribute *a = new MeiAttribute("evidence", _evidence);
        b->addAttribute(a);
    }
};

bool mei::EditMixIn::hasEvidence() {
    return b->hasAttribute("evidence");
};

void mei::EditMixIn::removeEvidence() {
    b->removeAttribute("evidence");
};


mei::ExtentMixIn::ExtentMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::ExtentMixIn::getExtent() {
    if (!b->hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return b->getAttribute("extent");
};

void mei::ExtentMixIn::setExtent(std::string _extent) {
    if (!b->hasAttribute("extent")) {
        MeiAttribute *a = new MeiAttribute("extent", _extent);
        b->addAttribute(a);
    }
};

bool mei::ExtentMixIn::hasExtent() {
    return b->hasAttribute("extent");
};

void mei::ExtentMixIn::removeExtent() {
    b->removeAttribute("extent");
};


mei::ReasonidentMixIn::ReasonidentMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::ReasonidentMixIn::getReason() {
    if (!b->hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return b->getAttribute("reason");
};

void mei::ReasonidentMixIn::setReason(std::string _reason) {
    if (!b->hasAttribute("reason")) {
        MeiAttribute *a = new MeiAttribute("reason", _reason);
        b->addAttribute(a);
    }
};

bool mei::ReasonidentMixIn::hasReason() {
    return b->hasAttribute("reason");
};

void mei::ReasonidentMixIn::removeReason() {
    b->removeAttribute("reason");
};



