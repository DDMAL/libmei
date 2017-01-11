#include "text.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Back::Back() :
    MeiElement("back"),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Back, "back");
mei::Back::~Back() {}
mei::Back::Back(const Back& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <back> */

mei::Front::Front() :
    MeiElement("front"),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Front, "front");
mei::Front::~Front() {}
mei::Front::Front(const Front& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <front> */

mei::L::L() :
    MeiElement("l"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::L, "l");
mei::L::~L() {}
mei::L::L(const L& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <l> */

mei::Lg::Lg() :
    MeiElement("lg"),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Lg, "lg");
mei::Lg::~Lg() {}
mei::Lg::Lg(const Lg& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Xy(this)
{
}

/* include <lg> */

mei::Li::Li() :
    MeiElement("li"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Li, "li");
mei::Li::~Li() {}
mei::Li::Li(const Li& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <li> */

mei::List::List() :
    MeiElement("list"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::List, "list");
mei::List::~List() {}
mei::List::List(const List& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}

MeiAttribute* mei::List::getForm() {
    if (!hasAttribute("form")) {
        return NULL;
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
MeiAttribute* mei::List::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::List::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::List::hasType() {
    return hasAttribute("type");
};

void mei::List::removeType() {
    removeAttribute("type");
};
/* include <list> */

mei::Quote::Quote() :
    MeiElement("quote"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Quote, "quote");
mei::Quote::~Quote() {}
mei::Quote::Quote(const Quote& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Xy(this)
{
}

/* include <quote> */



