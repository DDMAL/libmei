

#include "neumesmixins.h"
using std::string;


IneumeLogMixIn::IneumeLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string IneumeLogMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* IneumeLogMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void IneumeLogMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool IneumeLogMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void IneumeLogMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};

string IneumeLogMixIn::getNameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->m_Base.getAttributeValue("name");
};

MeiAttribute* IneumeLogMixIn::getName() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->m_Base.getAttribute("name");
};

void IneumeLogMixIn::setName(std::string _name) {
    if (!b->m_Base.hasAttribute("name")) {
        MeiAttribute *a = new MeiAttribute("name", _name);
        b->m_Base.addAttribute(a);
    }
};

bool IneumeLogMixIn::hasName() {
    return b->m_Base.hasAttribute("name");
};

void IneumeLogMixIn::removeName() {
    b->m_Base.removeAttribute("name");
};


UneumeLogMixIn::UneumeLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string UneumeLogMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* UneumeLogMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void UneumeLogMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool UneumeLogMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void UneumeLogMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};

string UneumeLogMixIn::getNameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->m_Base.getAttributeValue("name");
};

MeiAttribute* UneumeLogMixIn::getName() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return b->m_Base.getAttribute("name");
};

void UneumeLogMixIn::setName(std::string _name) {
    if (!b->m_Base.hasAttribute("name")) {
        MeiAttribute *a = new MeiAttribute("name", _name);
        b->m_Base.addAttribute(a);
    }
};

bool UneumeLogMixIn::hasName() {
    return b->m_Base.hasAttribute("name");
};

void UneumeLogMixIn::removeName() {
    b->m_Base.removeAttribute("name");
};



