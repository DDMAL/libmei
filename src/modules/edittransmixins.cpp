#include "edittransmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AgentidentMixIn::AgentidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::AgentidentMixIn::~AgentidentMixIn() {}
MeiAttribute* mei::AgentidentMixIn::getAgent() {
    if (!b->hasAttribute("agent")) {
        return NULL;
    }
    return b->getAttribute("agent");
};

void mei::AgentidentMixIn::setAgent(std::string _agent) {
    MeiAttribute *a = new MeiAttribute("agent", _agent);
    b->addAttribute(a);
};

bool mei::AgentidentMixIn::hasAgent() {
    return b->hasAttribute("agent");
};

void mei::AgentidentMixIn::removeAgent() {
    b->removeAttribute("agent");
};

/* include <agentmixin> */
mei::EditMixIn::EditMixIn(MeiElement *b) {
    this->b = b;
};

mei::EditMixIn::~EditMixIn() {}
MeiAttribute* mei::EditMixIn::getCert() {
    if (!b->hasAttribute("cert")) {
        return NULL;
    }
    return b->getAttribute("cert");
};

void mei::EditMixIn::setCert(std::string _cert) {
    MeiAttribute *a = new MeiAttribute("cert", _cert);
    b->addAttribute(a);
};

bool mei::EditMixIn::hasCert() {
    return b->hasAttribute("cert");
};

void mei::EditMixIn::removeCert() {
    b->removeAttribute("cert");
};
MeiAttribute* mei::EditMixIn::getEvidence() {
    if (!b->hasAttribute("evidence")) {
        return NULL;
    }
    return b->getAttribute("evidence");
};

void mei::EditMixIn::setEvidence(std::string _evidence) {
    MeiAttribute *a = new MeiAttribute("evidence", _evidence);
    b->addAttribute(a);
};

bool mei::EditMixIn::hasEvidence() {
    return b->hasAttribute("evidence");
};

void mei::EditMixIn::removeEvidence() {
    b->removeAttribute("evidence");
};

/* include <evidencemixin> */
mei::ExtentMixIn::ExtentMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExtentMixIn::~ExtentMixIn() {}
MeiAttribute* mei::ExtentMixIn::getExtent() {
    if (!b->hasAttribute("extent")) {
        return NULL;
    }
    return b->getAttribute("extent");
};

void mei::ExtentMixIn::setExtent(std::string _extent) {
    MeiAttribute *a = new MeiAttribute("extent", _extent);
    b->addAttribute(a);
};

bool mei::ExtentMixIn::hasExtent() {
    return b->hasAttribute("extent");
};

void mei::ExtentMixIn::removeExtent() {
    b->removeAttribute("extent");
};

/* include <extentmixin> */
mei::ReasonidentMixIn::ReasonidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::ReasonidentMixIn::~ReasonidentMixIn() {}
MeiAttribute* mei::ReasonidentMixIn::getReason() {
    if (!b->hasAttribute("reason")) {
        return NULL;
    }
    return b->getAttribute("reason");
};

void mei::ReasonidentMixIn::setReason(std::string _reason) {
    MeiAttribute *a = new MeiAttribute("reason", _reason);
    b->addAttribute(a);
};

bool mei::ReasonidentMixIn::hasReason() {
    return b->hasAttribute("reason");
};

void mei::ReasonidentMixIn::removeReason() {
    b->removeAttribute("reason");
};

/* include <reasonmixin> */


