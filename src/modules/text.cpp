#include "text.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Back::Back() :
    MeiElement("back"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Back, "back");
mei::Back::~Back() {}

/* include <back> */

mei::Div::Div() :
    MeiElement("div"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Div, "div");
mei::Div::~Div() {}

/* include <div> */

mei::Front::Front() :
    MeiElement("front"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Front, "front");
mei::Front::~Front() {}

/* include <front> */

mei::Head::Head() :
    MeiElement("head"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Head, "head");
mei::Head::~Head() {}

/* include <head> */

mei::Item::Item() :
    MeiElement("item"),
    m_Common(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Item, "item");
mei::Item::~Item() {}

/* include <item> */

mei::L::L() :
    MeiElement("l"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::L, "l");
mei::L::~L() {}

/* include <l> */

mei::Lg::Lg() :
    MeiElement("lg"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Lg, "lg");
mei::Lg::~Lg() {}

/* include <lg> */

mei::List::List() :
    MeiElement("list"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::List, "list");
mei::List::~List() {}

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
/* include <list> */

mei::Quote::Quote() :
    MeiElement("quote"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Quote, "quote");
mei::Quote::~Quote() {}

/* include <quote> */



