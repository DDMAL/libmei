
#include "text.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Back::Back() : 
    MeiElement("back"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Back, "back");



mei::Div::Div() : 
    MeiElement("div"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Div, "div");



mei::Front::Front() : 
    MeiElement("front"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Front, "front");



mei::Head::Head() : 
    MeiElement("head"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::Head, "head");



mei::Item::Item() : 
    MeiElement("item"),
    m_Common(this),
    m_Facsimile(this) 
{
};
REGISTER_DEFINITION(mei::Item, "item");



mei::L::L() : 
    MeiElement("l"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::L, "l");



mei::Lg::Lg() : 
    MeiElement("lg"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::Lg, "lg");



mei::List::List() : 
    MeiElement("list"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::List, "list");


MeiAttribute* mei::List::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::List::setForm(std::string _form) {
    if (!hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        addAttribute(a);
    }
};

bool mei::List::hasForm() {
    return hasAttribute("form");
};

void mei::List::removeForm() {
    removeAttribute("form");
};


mei::Quote::Quote() : 
    MeiElement("quote"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::Quote, "quote");




