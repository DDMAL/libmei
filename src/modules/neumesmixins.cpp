#include "neumesmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::IneumeLogMixIn::IneumeLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::IneumeLogMixIn::~IneumeLogMixIn() {}
MeiAttribute* mei::IneumeLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::IneumeLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::IneumeLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::IneumeLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::IneumeLogMixIn::getName() {
    if (!b->hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->getAttribute("name");
};

void mei::IneumeLogMixIn::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    b->addAttribute(a);
};

bool mei::IneumeLogMixIn::hasName() {
    return b->hasAttribute("name");
};

void mei::IneumeLogMixIn::removeName() {
    b->removeAttribute("name");
};

mei::UneumeLogMixIn::UneumeLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::UneumeLogMixIn::~UneumeLogMixIn() {}
MeiAttribute* mei::UneumeLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::UneumeLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::UneumeLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::UneumeLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::UneumeLogMixIn::getName() {
    if (!b->hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->getAttribute("name");
};

void mei::UneumeLogMixIn::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    b->addAttribute(a);
};

bool mei::UneumeLogMixIn::hasName() {
    return b->hasAttribute("name");
};

void mei::UneumeLogMixIn::removeName() {
    b->removeAttribute("name");
};



