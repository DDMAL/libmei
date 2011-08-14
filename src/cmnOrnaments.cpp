#include "cmnOrnaments.h"
using namespace std;

Mordent::Mordent() : m_Color(this), m_Common(this), m_Placement(this), m_Startendid(this), m_Visualoffset(this), 
m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), m_Ornamentaccid(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("mordent");
};
//REGISTER_DEFINITION(Mordent, "mordent");

string Mordent::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Mordent::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Mordent::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Mordent::hasForm() {
    return m_Base.hasAttribute("form");
};
            
string Mordent::getLongValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("long")) {
        throw AttributeNotFoundException("long");
    }
    return m_Base.getAttributeValue("long");
};
            
MeiAttribute* Mordent::getLong() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("long")) {
        throw AttributeNotFoundException("long");
    }
    return m_Base.getAttribute("long");
};
            
void Mordent::setLong(string _long) {
    if(!m_Base.hasAttribute("long")) {
        MeiAttribute * a = new MeiAttribute("long", _long);
        m_Base.addAttribute(a);
    }
};
            
bool Mordent::hasLong() {
    return m_Base.hasAttribute("long");
};
            
Trill::Trill() : m_Color(this), m_Common(this), m_DurationPerformed(this), m_DurationTimestamp(this), 
m_Placement(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), 
m_Startendid(this), m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), 
m_TupletAnl(this), m_TupletGes(this), m_CommonAnl(this), m_Ornamentaccid(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("trill");
};
//REGISTER_DEFINITION(Trill, "trill");

Turn::Turn() : m_Color(this), m_Common(this), m_Placement(this), m_Startid(this), m_Xy(this), m_Startendid(this), 
m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_Ornamentaccid(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("turn");
};
//REGISTER_DEFINITION(Turn, "turn");

string Turn::getDelayedValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("delayed")) {
        throw AttributeNotFoundException("delayed");
    }
    return m_Base.getAttributeValue("delayed");
};
            
MeiAttribute* Turn::getDelayed() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("delayed")) {
        throw AttributeNotFoundException("delayed");
    }
    return m_Base.getAttribute("delayed");
};
            
void Turn::setDelayed(string _delayed) {
    if(!m_Base.hasAttribute("delayed")) {
        MeiAttribute * a = new MeiAttribute("delayed", _delayed);
        m_Base.addAttribute(a);
    }
};
            
bool Turn::hasDelayed() {
    return m_Base.hasAttribute("delayed");
};
            
string Turn::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Turn::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Turn::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Turn::hasForm() {
    return m_Base.hasAttribute("form");
};
            