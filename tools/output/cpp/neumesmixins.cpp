#include "neumesmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_ineumeLogMixIn::Mei_ineumeLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_ineumeLogMixIn::~Mei_ineumeLogMixIn() {}
MeiAttribute* mei::Mei_ineumeLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_ineumeLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_ineumeLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_ineumeLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::Mei_ineumeLogMixIn::getName() {
    if (!b->hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->getAttribute("name");
};

void mei::Mei_ineumeLogMixIn::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    b->addAttribute(a);
};

bool mei::Mei_ineumeLogMixIn::hasName() {
    return b->hasAttribute("name");
};

void mei::Mei_ineumeLogMixIn::removeName() {
    b->removeAttribute("name");
};

/* include <namemixin> */
mei::Mei_uneumeLogMixIn::Mei_uneumeLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_uneumeLogMixIn::~Mei_uneumeLogMixIn() {}
MeiAttribute* mei::Mei_uneumeLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_uneumeLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_uneumeLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_uneumeLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::Mei_uneumeLogMixIn::getName() {
    if (!b->hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->getAttribute("name");
};

void mei::Mei_uneumeLogMixIn::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    b->addAttribute(a);
};

bool mei::Mei_uneumeLogMixIn::hasName() {
    return b->hasAttribute("name");
};

void mei::Mei_uneumeLogMixIn::removeName() {
    b->removeAttribute("name");
};

/* include <namemixin> */


