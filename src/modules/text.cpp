
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
mei::Back::~Back() {};



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
mei::Div::~Div() {};



mei::Front::Front() : 
    MeiElement("front"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Front, "front");
mei::Front::~Front() {};



mei::Head::Head() : 
    MeiElement("head"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::Head, "head");
mei::Head::~Head() {};



mei::Item::Item() : 
    MeiElement("item"),
    m_Common(this),
    m_Facsimile(this) 
{
};
REGISTER_DEFINITION(mei::Item, "item");
mei::Item::~Item() {};



mei::L::L() : 
    MeiElement("l"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::L, "l");
mei::L::~L() {};



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
mei::Lg::~Lg() {};



mei::List::List() : 
    MeiElement("list"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::List, "list");
mei::List::~List() {};


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
mei::Quote::~Quote() {};




