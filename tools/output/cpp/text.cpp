#include "text.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Back::Back() :
    MeiElement("back")
{
}
REGISTER_DEFINITION(mei::Back, "back");
mei::Back::~Back() {}
mei::Back::Back(const Back& other) :
    MeiElement(other),

{
}

/* include <back> */

mei::Div::Div() :
    MeiElement("div")
{
}
REGISTER_DEFINITION(mei::Div, "div");
mei::Div::~Div() {}
mei::Div::Div(const Div& other) :
    MeiElement(other),

{
}

/* include <div> */

mei::Front::Front() :
    MeiElement("front")
{
}
REGISTER_DEFINITION(mei::Front, "front");
mei::Front::~Front() {}
mei::Front::Front(const Front& other) :
    MeiElement(other),

{
}

/* include <front> */

mei::Head::Head() :
    MeiElement("head")
{
}
REGISTER_DEFINITION(mei::Head, "head");
mei::Head::~Head() {}
mei::Head::Head(const Head& other) :
    MeiElement(other),

{
}

/* include <head> */

mei::Item::Item() :
    MeiElement("item")
{
}
REGISTER_DEFINITION(mei::Item, "item");
mei::Item::~Item() {}
mei::Item::Item(const Item& other) :
    MeiElement(other),

{
}

/* include <item> */

mei::L::L() :
    MeiElement("l")
{
}
REGISTER_DEFINITION(mei::L, "l");
mei::L::~L() {}
mei::L::L(const L& other) :
    MeiElement(other),

{
}

/* include <l> */

mei::Lg::Lg() :
    MeiElement("lg")
{
}
REGISTER_DEFINITION(mei::Lg, "lg");
mei::Lg::~Lg() {}
mei::Lg::Lg(const Lg& other) :
    MeiElement(other),

{
}

/* include <lg> */

mei::List::List() :
    MeiElement("list")
{
}
REGISTER_DEFINITION(mei::List, "list");
mei::List::~List() {}
mei::List::List(const List& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::List::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::List::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::List::hasForm() {
    return hasAttribute("form");
};

void mei::List::removeForm() {
    removeAttribute("form");
};
/* include <list> */

mei::Quote::Quote() :
    MeiElement("quote")
{
}
REGISTER_DEFINITION(mei::Quote, "quote");
mei::Quote::~Quote() {}
mei::Quote::Quote(const Quote& other) :
    MeiElement(other),

{
}

/* include <quote> */



