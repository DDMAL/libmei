#include "tagdocsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::CombinableMixIn::CombinableMixIn(MeiElement *b) {
    this->b = b;
};

mei::CombinableMixIn::~CombinableMixIn() {}
MeiAttribute* mei::CombinableMixIn::getMode() {
    if (!b->hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return b->getAttribute("mode");
};

void mei::CombinableMixIn::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    b->addAttribute(a);
};

bool mei::CombinableMixIn::hasMode() {
    return b->hasAttribute("mode");
};

void mei::CombinableMixIn::removeMode() {
    b->removeAttribute("mode");
};

/* include <modemixin> */
mei::DeprecatedMixIn::DeprecatedMixIn(MeiElement *b) {
    this->b = b;
};

mei::DeprecatedMixIn::~DeprecatedMixIn() {}
MeiAttribute* mei::DeprecatedMixIn::getValidUntil() {
    if (!b->hasAttribute("validUntil")) {
        throw AttributeNotFoundException("validUntil");
    }
    return b->getAttribute("validUntil");
};

void mei::DeprecatedMixIn::setValidUntil(std::string _validUntil) {
    MeiAttribute *a = new MeiAttribute("validUntil", _validUntil);
    b->addAttribute(a);
};

bool mei::DeprecatedMixIn::hasValidUntil() {
    return b->hasAttribute("validUntil");
};

void mei::DeprecatedMixIn::removeValidUntil() {
    b->removeAttribute("validUntil");
};

/* include <validUntilmixin> */
mei::IdentifiedMixIn::IdentifiedMixIn(MeiElement *b) {
    this->b = b;
};

mei::IdentifiedMixIn::~IdentifiedMixIn() {}
MeiAttribute* mei::IdentifiedMixIn::getIdent() {
    if (!b->hasAttribute("ident")) {
        throw AttributeNotFoundException("ident");
    }
    return b->getAttribute("ident");
};

void mei::IdentifiedMixIn::setIdent(std::string _ident) {
    MeiAttribute *a = new MeiAttribute("ident", _ident);
    b->addAttribute(a);
};

bool mei::IdentifiedMixIn::hasIdent() {
    return b->hasAttribute("ident");
};

void mei::IdentifiedMixIn::removeIdent() {
    b->removeAttribute("ident");
};
MeiAttribute* mei::IdentifiedMixIn::getPredeclare() {
    if (!b->hasAttribute("predeclare")) {
        throw AttributeNotFoundException("predeclare");
    }
    return b->getAttribute("predeclare");
};

void mei::IdentifiedMixIn::setPredeclare(std::string _predeclare) {
    MeiAttribute *a = new MeiAttribute("predeclare", _predeclare);
    b->addAttribute(a);
};

bool mei::IdentifiedMixIn::hasPredeclare() {
    return b->hasAttribute("predeclare");
};

void mei::IdentifiedMixIn::removePredeclare() {
    b->removeAttribute("predeclare");
};
MeiAttribute* mei::IdentifiedMixIn::getModule() {
    if (!b->hasAttribute("module")) {
        throw AttributeNotFoundException("module");
    }
    return b->getAttribute("module");
};

void mei::IdentifiedMixIn::setModule(std::string _module) {
    MeiAttribute *a = new MeiAttribute("module", _module);
    b->addAttribute(a);
};

bool mei::IdentifiedMixIn::hasModule() {
    return b->hasAttribute("module");
};

void mei::IdentifiedMixIn::removeModule() {
    b->removeAttribute("module");
};
MeiAttribute* mei::IdentifiedMixIn::getStatus() {
    if (!b->hasAttribute("status")) {
        throw AttributeNotFoundException("status");
    }
    return b->getAttribute("status");
};

void mei::IdentifiedMixIn::setStatus(std::string _status) {
    MeiAttribute *a = new MeiAttribute("status", _status);
    b->addAttribute(a);
};

bool mei::IdentifiedMixIn::hasStatus() {
    return b->hasAttribute("status");
};

void mei::IdentifiedMixIn::removeStatus() {
    b->removeAttribute("status");
};

/* include <statusmixin> */
mei::NamespaceableMixIn::NamespaceableMixIn(MeiElement *b) {
    this->b = b;
};

mei::NamespaceableMixIn::~NamespaceableMixIn() {}
MeiAttribute* mei::NamespaceableMixIn::getNs() {
    if (!b->hasAttribute("ns")) {
        throw AttributeNotFoundException("ns");
    }
    return b->getAttribute("ns");
};

void mei::NamespaceableMixIn::setNs(std::string _ns) {
    MeiAttribute *a = new MeiAttribute("ns", _ns);
    b->addAttribute(a);
};

bool mei::NamespaceableMixIn::hasNs() {
    return b->hasAttribute("ns");
};

void mei::NamespaceableMixIn::removeNs() {
    b->removeAttribute("ns");
};

/* include <nsmixin> */


