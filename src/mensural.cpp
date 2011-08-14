#include "mensural.h"
using namespace std;

Mensur::Mensur() : m_Color(this), m_Common(this), m_Relativesize(this), m_Slashcount(this), m_Staffloc(this), 
m_TupletAnl(this), m_MensurLog(this), m_MensurationLog(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("mensur");
};
//REGISTER_DEFINITION(Mensur, "mensur");

string Mensur::getDotValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("dot")) {
        throw AttributeNotFoundException("dot");
    }
    return m_Base.getAttributeValue("dot");
};
            
MeiAttribute* Mensur::getDot() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("dot")) {
        throw AttributeNotFoundException("dot");
    }
    return m_Base.getAttribute("dot");
};
            
void Mensur::setDot(string _dot) {
    if(!m_Base.hasAttribute("dot")) {
        MeiAttribute * a = new MeiAttribute("dot", _dot);
        m_Base.addAttribute(a);
    }
};
            
bool Mensur::hasDot() {
    return m_Base.hasAttribute("dot");
};
            
string Mensur::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Mensur::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Mensur::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Mensur::hasForm() {
    return m_Base.hasAttribute("form");
};
            
string Mensur::getOrientValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("orient")) {
        throw AttributeNotFoundException("orient");
    }
    return m_Base.getAttributeValue("orient");
};
            
MeiAttribute* Mensur::getOrient() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("orient")) {
        throw AttributeNotFoundException("orient");
    }
    return m_Base.getAttribute("orient");
};
            
void Mensur::setOrient(string _orient) {
    if(!m_Base.hasAttribute("orient")) {
        MeiAttribute * a = new MeiAttribute("orient", _orient);
        m_Base.addAttribute(a);
    }
};
            
bool Mensur::hasOrient() {
    return m_Base.hasAttribute("orient");
};
            
string Mensur::getSignValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("sign")) {
        throw AttributeNotFoundException("sign");
    }
    return m_Base.getAttributeValue("sign");
};
            
MeiAttribute* Mensur::getSign() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("sign")) {
        throw AttributeNotFoundException("sign");
    }
    return m_Base.getAttribute("sign");
};
            
void Mensur::setSign(string _sign) {
    if(!m_Base.hasAttribute("sign")) {
        MeiAttribute * a = new MeiAttribute("sign", _sign);
        m_Base.addAttribute(a);
    }
};
            
bool Mensur::hasSign() {
    return m_Base.hasAttribute("sign");
};
            
Proport::Proport() : m_Common(this), m_DurationRatio(this), m_TupletAnl(this), m_MensurLog(this), m_MensurationLog(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("proport");
};
//REGISTER_DEFINITION(Proport, "proport");

Ligature::Ligature() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("ligature");
};
//REGISTER_DEFINITION(Ligature, "ligature");

string Ligature::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Ligature::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Ligature::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Ligature::hasForm() {
    return m_Base.hasAttribute("form");
};
            