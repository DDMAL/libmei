

#include "text.h"
using std::string;


Back::Back() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("back");
};



Div::Div() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Lang(this), m_Typed(this) {
    m_Base.setName("div");
};



Front::Front() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("front");
};



Head::Head() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Xy(this) {
    m_Base.setName("head");
};



Item::Item() : m_Common(this), m_Facsimile(this) {
    m_Base.setName("item");
};



L::L() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("l");
};



Lg::Lg() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Lang(this), m_Xy(this) {
    m_Base.setName("lg");
};



List::List() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Xy(this) {
    m_Base.setName("list");
};


string List::getFormValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};

MeiAttribute* List::getForm() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};

void List::setForm(std::string _form) {
    if (!m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};

bool List::hasForm() {
    return m_Base.hasAttribute("form");
};

void List::removeForm() {
    m_Base.removeAttribute("form");
};


Quote::Quote() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Xy(this) {
    m_Base.setName("quote");
};




