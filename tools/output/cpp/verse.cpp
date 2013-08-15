#include "verse.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Caesura::Caesura() :
    MeiElement("caesura"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Caesura, "caesura");
mei::Caesura::~Caesura() {}
mei::Caesura::Caesura(const Caesura& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <caesura> */

mei::MetDecl::MetDecl() :
    MeiElement("metDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::MetDecl, "metDecl");
mei::MetDecl::~MetDecl() {}
mei::MetDecl::MetDecl(const MetDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

MeiAttribute* mei::MetDecl::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::MetDecl::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::MetDecl::hasType() {
    return hasAttribute("type");
};

void mei::MetDecl::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::MetDecl::getPattern() {
    if (!hasAttribute("pattern")) {
        throw AttributeNotFoundException("pattern");
    }
    return getAttribute("pattern");
};

void mei::MetDecl::setPattern(std::string _pattern) {
    MeiAttribute *a = new MeiAttribute("pattern", _pattern);
    addAttribute(a);
};

bool mei::MetDecl::hasPattern() {
    return hasAttribute("pattern");
};

void mei::MetDecl::removePattern() {
    removeAttribute("pattern");
};
/* include <metDecl> */

mei::MetSym::MetSym() :
    MeiElement("metSym"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::MetSym, "metSym");
mei::MetSym::~MetSym() {}
mei::MetSym::MetSym(const MetSym& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::MetSym::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::MetSym::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::MetSym::hasValue() {
    return hasAttribute("value");
};

void mei::MetSym::removeValue() {
    removeAttribute("value");
};
MeiAttribute* mei::MetSym::getTerminal() {
    if (!hasAttribute("terminal")) {
        throw AttributeNotFoundException("terminal");
    }
    return getAttribute("terminal");
};

void mei::MetSym::setTerminal(std::string _terminal) {
    MeiAttribute *a = new MeiAttribute("terminal", _terminal);
    addAttribute(a);
};

bool mei::MetSym::hasTerminal() {
    return hasAttribute("terminal");
};

void mei::MetSym::removeTerminal() {
    removeAttribute("terminal");
};
/* include <metSym> */

mei::Rhyme::Rhyme() :
    MeiElement("rhyme"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Rhyme, "rhyme");
mei::Rhyme::~Rhyme() {}
mei::Rhyme::Rhyme(const Rhyme& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Rhyme::getLabel() {
    if (!hasAttribute("label")) {
        throw AttributeNotFoundException("label");
    }
    return getAttribute("label");
};

void mei::Rhyme::setLabel(std::string _label) {
    MeiAttribute *a = new MeiAttribute("label", _label);
    addAttribute(a);
};

bool mei::Rhyme::hasLabel() {
    return hasAttribute("label");
};

void mei::Rhyme::removeLabel() {
    removeAttribute("label");
};
/* include <rhyme> */



