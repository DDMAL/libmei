#include "derived-module-meimixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::SolesmesDivisionMixIn::SolesmesDivisionMixIn(MeiElement *b) {
    this->b = b;
};

mei::SolesmesDivisionMixIn::~SolesmesDivisionMixIn() {}
MeiAttribute* mei::SolesmesDivisionMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::SolesmesDivisionMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::SolesmesDivisionMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::SolesmesDivisionMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::SolesmesEpisemaMixIn::SolesmesEpisemaMixIn(MeiElement *b) {
    this->b = b;
};

mei::SolesmesEpisemaMixIn::~SolesmesEpisemaMixIn() {}
MeiAttribute* mei::SolesmesEpisemaMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::SolesmesEpisemaMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::SolesmesEpisemaMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::SolesmesEpisemaMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::SolesmesNcMixIn::SolesmesNcMixIn(MeiElement *b) {
    this->b = b;
};

mei::SolesmesNcMixIn::~SolesmesNcMixIn() {}
MeiAttribute* mei::SolesmesNcMixIn::getAuctus() {
    if (!b->hasAttribute("auctus")) {
        throw AttributeNotFoundException("auctus");
    }
    return b->getAttribute("auctus");
};

void mei::SolesmesNcMixIn::setAuctus(std::string _auctus) {
    MeiAttribute *a = new MeiAttribute("auctus", _auctus);
    b->addAttribute(a);
};

bool mei::SolesmesNcMixIn::hasAuctus() {
    return b->hasAttribute("auctus");
};

void mei::SolesmesNcMixIn::removeAuctus() {
    b->removeAttribute("auctus");
};
MeiAttribute* mei::SolesmesNcMixIn::getDeminutus() {
    if (!b->hasAttribute("deminutus")) {
        throw AttributeNotFoundException("deminutus");
    }
    return b->getAttribute("deminutus");
};

void mei::SolesmesNcMixIn::setDeminutus(std::string _deminutus) {
    MeiAttribute *a = new MeiAttribute("deminutus", _deminutus);
    b->addAttribute(a);
};

bool mei::SolesmesNcMixIn::hasDeminutus() {
    return b->hasAttribute("deminutus");
};

void mei::SolesmesNcMixIn::removeDeminutus() {
    b->removeAttribute("deminutus");
};
MeiAttribute* mei::SolesmesNcMixIn::getQuilisma() {
    if (!b->hasAttribute("quilisma")) {
        throw AttributeNotFoundException("quilisma");
    }
    return b->getAttribute("quilisma");
};

void mei::SolesmesNcMixIn::setQuilisma(std::string _quilisma) {
    MeiAttribute *a = new MeiAttribute("quilisma", _quilisma);
    b->addAttribute(a);
};

bool mei::SolesmesNcMixIn::hasQuilisma() {
    return b->hasAttribute("quilisma");
};

void mei::SolesmesNcMixIn::removeQuilisma() {
    b->removeAttribute("quilisma");
};
MeiAttribute* mei::SolesmesNcMixIn::getInclinatum() {
    if (!b->hasAttribute("inclinatum")) {
        throw AttributeNotFoundException("inclinatum");
    }
    return b->getAttribute("inclinatum");
};

void mei::SolesmesNcMixIn::setInclinatum(std::string _inclinatum) {
    MeiAttribute *a = new MeiAttribute("inclinatum", _inclinatum);
    b->addAttribute(a);
};

bool mei::SolesmesNcMixIn::hasInclinatum() {
    return b->hasAttribute("inclinatum");
};

void mei::SolesmesNcMixIn::removeInclinatum() {
    b->removeAttribute("inclinatum");
};

/* include <inclinatummixin> */
mei::SolesmesNeumeMixIn::SolesmesNeumeMixIn(MeiElement *b) {
    this->b = b;
};

mei::SolesmesNeumeMixIn::~SolesmesNeumeMixIn() {}
MeiAttribute* mei::SolesmesNeumeMixIn::getName() {
    if (!b->hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->getAttribute("name");
};

void mei::SolesmesNeumeMixIn::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    b->addAttribute(a);
};

bool mei::SolesmesNeumeMixIn::hasName() {
    return b->hasAttribute("name");
};

void mei::SolesmesNeumeMixIn::removeName() {
    b->removeAttribute("name");
};
MeiAttribute* mei::SolesmesNeumeMixIn::getVariant() {
    if (!b->hasAttribute("variant")) {
        throw AttributeNotFoundException("variant");
    }
    return b->getAttribute("variant");
};

void mei::SolesmesNeumeMixIn::setVariant(std::string _variant) {
    MeiAttribute *a = new MeiAttribute("variant", _variant);
    b->addAttribute(a);
};

bool mei::SolesmesNeumeMixIn::hasVariant() {
    return b->hasAttribute("variant");
};

void mei::SolesmesNeumeMixIn::removeVariant() {
    b->removeAttribute("variant");
};

/* include <variantmixin> */


