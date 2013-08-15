#include "edittransmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_agentidentMixIn::Mei_agentidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_agentidentMixIn::~Mei_agentidentMixIn() {}
MeiAttribute* mei::Mei_agentidentMixIn::getAgent() {
    if (!b->hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return b->getAttribute("agent");
};

void mei::Mei_agentidentMixIn::setAgent(std::string _agent) {
    MeiAttribute *a = new MeiAttribute("agent", _agent);
    b->addAttribute(a);
};

bool mei::Mei_agentidentMixIn::hasAgent() {
    return b->hasAttribute("agent");
};

void mei::Mei_agentidentMixIn::removeAgent() {
    b->removeAttribute("agent");
};

/* include <agentmixin> */
mei::Mei_editMixIn::Mei_editMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_editMixIn::~Mei_editMixIn() {}
MeiAttribute* mei::Mei_editMixIn::getCert() {
    if (!b->hasAttribute("cert")) {
        throw AttributeNotFoundException("cert");
    }
    return b->getAttribute("cert");
};

void mei::Mei_editMixIn::setCert(std::string _cert) {
    MeiAttribute *a = new MeiAttribute("cert", _cert);
    b->addAttribute(a);
};

bool mei::Mei_editMixIn::hasCert() {
    return b->hasAttribute("cert");
};

void mei::Mei_editMixIn::removeCert() {
    b->removeAttribute("cert");
};
MeiAttribute* mei::Mei_editMixIn::getEvidence() {
    if (!b->hasAttribute("evidence")) {
        throw AttributeNotFoundException("evidence");
    }
    return b->getAttribute("evidence");
};

void mei::Mei_editMixIn::setEvidence(std::string _evidence) {
    MeiAttribute *a = new MeiAttribute("evidence", _evidence);
    b->addAttribute(a);
};

bool mei::Mei_editMixIn::hasEvidence() {
    return b->hasAttribute("evidence");
};

void mei::Mei_editMixIn::removeEvidence() {
    b->removeAttribute("evidence");
};

/* include <evidencemixin> */
mei::Mei_extentMixIn::Mei_extentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_extentMixIn::~Mei_extentMixIn() {}
MeiAttribute* mei::Mei_extentMixIn::getExtent() {
    if (!b->hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return b->getAttribute("extent");
};

void mei::Mei_extentMixIn::setExtent(std::string _extent) {
    MeiAttribute *a = new MeiAttribute("extent", _extent);
    b->addAttribute(a);
};

bool mei::Mei_extentMixIn::hasExtent() {
    return b->hasAttribute("extent");
};

void mei::Mei_extentMixIn::removeExtent() {
    b->removeAttribute("extent");
};

/* include <extentmixin> */
mei::Mei_reasonidentMixIn::Mei_reasonidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_reasonidentMixIn::~Mei_reasonidentMixIn() {}
MeiAttribute* mei::Mei_reasonidentMixIn::getReason() {
    if (!b->hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return b->getAttribute("reason");
};

void mei::Mei_reasonidentMixIn::setReason(std::string _reason) {
    MeiAttribute *a = new MeiAttribute("reason", _reason);
    b->addAttribute(a);
};

bool mei::Mei_reasonidentMixIn::hasReason() {
    return b->hasAttribute("reason");
};

void mei::Mei_reasonidentMixIn::removeReason() {
    b->removeAttribute("reason");
};

/* include <reasonmixin> */


