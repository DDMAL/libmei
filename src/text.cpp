#include "text.h"
using namespace std;

Back::Back() : m_Common(this), m_Declaring(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("back");
};
//REGISTER_DEFINITION(Back, "back");

Quote::Quote() : m_Common(this), m_Lang(this), m_Xy(this), m_Facsimile(this){
    m_Base.setName("quote");
};
//REGISTER_DEFINITION(Quote, "quote");

Div::Div() : m_Common(this), m_Declaring(this), m_Lang(this), m_Typed(this), m_Facsimile(this)
{
    m_Base.setName("div");
};
//REGISTER_DEFINITION(Div, "div");

Front::Front() : m_Common(this), m_Declaring(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("front");
};
//REGISTER_DEFINITION(Front, "front");

Head::Head() : m_Common(this), m_Lang(this), m_Xy(this), m_Facsimile(this){
    m_Base.setName("head");
};
//REGISTER_DEFINITION(Head, "head");

Item::Item() : m_Common(this), m_Facsimile(this){
    m_Base.setName("item");
};
//REGISTER_DEFINITION(Item, "item");

L::L() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("l");
};
//REGISTER_DEFINITION(L, "l");

Lg::Lg() : m_Common(this), m_Declaring(this), m_Lang(this), m_Xy(this), m_Facsimile(this){
    m_Base.setName("lg");
};
//REGISTER_DEFINITION(Lg, "lg");

List::List() : m_Common(this), m_Lang(this), m_Xy(this), m_Facsimile(this){
    m_Base.setName("list");
};
//REGISTER_DEFINITION(List, "list");

string List::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* List::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void List::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool List::hasForm() {
    return m_Base.hasAttribute("form");
};
            