#include "neumes.h"
using namespace std;

Ineume::Ineume() : m_Color(this), m_Common(this), m_Typed(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("ineume");
};
//REGISTER_DEFINITION(Ineume, "ineume");

string Ineume::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Ineume::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Ineume::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Ineume::hasForm() {
    return m_Base.hasAttribute("form");
};
            
string Ineume::getNameValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return m_Base.getAttributeValue("name");
};
            
MeiAttribute* Ineume::getName() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return m_Base.getAttribute("name");
};
            
void Ineume::setName(string _name) {
    if(!m_Base.hasAttribute("name")) {
        MeiAttribute * a = new MeiAttribute("name", _name);
        m_Base.addAttribute(a);
    }
};
            
bool Ineume::hasName() {
    return m_Base.hasAttribute("name");
};
            
Syllable::Syllable() : m_Common(this){
    m_Base.setName("syllable");
};
//REGISTER_DEFINITION(Syllable, "syllable");

Uneume::Uneume() : m_Altsym(this), m_Color(this), m_Common(this), m_Relativesize(this), m_Syltext(this), 
m_Typed(this), m_Visibility(this), m_VisualoffsetHo(this), m_Xy(this), m_Visualoffset(this), 
m_Event(this), m_TupletAnl(this), m_CommonAnl(this), m_Harmonicfunction(this), m_Intervallicdesc(this), 
m_Melodicfunction(this), m_Solfa(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("uneume");
};
//REGISTER_DEFINITION(Uneume, "uneume");

string Uneume::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Uneume::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Uneume::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Uneume::hasForm() {
    return m_Base.hasAttribute("form");
};
            
string Uneume::getNameValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return m_Base.getAttributeValue("name");
};
            
MeiAttribute* Uneume::getName() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return m_Base.getAttribute("name");
};
            
void Uneume::setName(string _name) {
    if(!m_Base.hasAttribute("name")) {
        MeiAttribute * a = new MeiAttribute("name", _name);
        m_Base.addAttribute(a);
    }
};
            
bool Uneume::hasName() {
    return m_Base.hasAttribute("name");
};
            