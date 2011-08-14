#include "edittrans.h"
using namespace std;

Add::Add() : m_Common(this), m_Edit(this), m_Trans(this), m_Facsimile(this){
    m_Base.setName("add");
};
//REGISTER_DEFINITION(Add, "add");

Choice::Choice() : m_Common(this){
    m_Base.setName("choice");
};
//REGISTER_DEFINITION(Choice, "choice");

Corr::Corr() : m_Common(this), m_Edit(this), m_Trans(this){
    m_Base.setName("corr");
};
//REGISTER_DEFINITION(Corr, "corr");

Damage::Damage() : m_Common(this), m_Handident(this), m_Typed(this), m_Crit(this), m_Agentident(this), 
m_Extent(this), m_Trans(this), m_Facsimile(this){
    m_Base.setName("damage");
};
//REGISTER_DEFINITION(Damage, "damage");

string Damage::getDegreeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return m_Base.getAttributeValue("degree");
};
            
MeiAttribute* Damage::getDegree() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return m_Base.getAttribute("degree");
};
            
void Damage::setDegree(string _degree) {
    if(!m_Base.hasAttribute("degree")) {
        MeiAttribute * a = new MeiAttribute("degree", _degree);
        m_Base.addAttribute(a);
    }
};
            
bool Damage::hasDegree() {
    return m_Base.hasAttribute("degree");
};
            
Del::Del() : m_Common(this), m_Trans(this), m_Facsimile(this){
    m_Base.setName("del");
};
//REGISTER_DEFINITION(Del, "del");

string Del::getRendValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttributeValue("rend");
};
            
MeiAttribute* Del::getRend() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttribute("rend");
};
            
void Del::setRend(string _rend) {
    if(!m_Base.hasAttribute("rend")) {
        MeiAttribute * a = new MeiAttribute("rend", _rend);
        m_Base.addAttribute(a);
    }
};
            
bool Del::hasRend() {
    return m_Base.hasAttribute("rend");
};
            
Gap::Gap() : m_Common(this), m_Handident(this), m_Measurement(this), m_Crit(this), m_Extent(this), 
m_Reasonident(this), m_Edit(this), m_Trans(this){
    m_Base.setName("gap");
};
//REGISTER_DEFINITION(Gap, "gap");

HandShift::HandShift() : m_Common(this), m_Medium(this), m_Edit(this), m_Facsimile(this){
    m_Base.setName("handShift");
};
//REGISTER_DEFINITION(HandShift, "handShift");

string HandShift::getCharacterValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("character")) {
        throw AttributeNotFoundException("character");
    }
    return m_Base.getAttributeValue("character");
};
            
MeiAttribute* HandShift::getCharacter() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("character")) {
        throw AttributeNotFoundException("character");
    }
    return m_Base.getAttribute("character");
};
            
void HandShift::setCharacter(string _character) {
    if(!m_Base.hasAttribute("character")) {
        MeiAttribute * a = new MeiAttribute("character", _character);
        m_Base.addAttribute(a);
    }
};
            
bool HandShift::hasCharacter() {
    return m_Base.hasAttribute("character");
};
            
string HandShift::getNewValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("new")) {
        throw AttributeNotFoundException("new");
    }
    return m_Base.getAttributeValue("new");
};
            
MeiAttribute* HandShift::getNew() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("new")) {
        throw AttributeNotFoundException("new");
    }
    return m_Base.getAttribute("new");
};
            
void HandShift::setNew(string _new) {
    if(!m_Base.hasAttribute("new")) {
        MeiAttribute * a = new MeiAttribute("new", _new);
        m_Base.addAttribute(a);
    }
};
            
bool HandShift::hasNew() {
    return m_Base.hasAttribute("new");
};
            
string HandShift::getOldValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("old")) {
        throw AttributeNotFoundException("old");
    }
    return m_Base.getAttributeValue("old");
};
            
MeiAttribute* HandShift::getOld() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("old")) {
        throw AttributeNotFoundException("old");
    }
    return m_Base.getAttribute("old");
};
            
void HandShift::setOld(string _old) {
    if(!m_Base.hasAttribute("old")) {
        MeiAttribute * a = new MeiAttribute("old", _old);
        m_Base.addAttribute(a);
    }
};
            
bool HandShift::hasOld() {
    return m_Base.hasAttribute("old");
};
            
Orig::Orig() : m_Common(this), m_Typed(this), m_Edit(this), m_Facsimile(this){
    m_Base.setName("orig");
};
//REGISTER_DEFINITION(Orig, "orig");

Reg::Reg() : m_Authorized(this), m_Common(this), m_Name(this), m_Edit(this){
    m_Base.setName("reg");
};
//REGISTER_DEFINITION(Reg, "reg");

Restore::Restore() : m_Common(this), m_Typed(this), m_Trans(this), m_Facsimile(this){
    m_Base.setName("restore");
};
//REGISTER_DEFINITION(Restore, "restore");

string Restore::getDescValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("desc")) {
        throw AttributeNotFoundException("desc");
    }
    return m_Base.getAttributeValue("desc");
};
            
MeiAttribute* Restore::getDesc() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("desc")) {
        throw AttributeNotFoundException("desc");
    }
    return m_Base.getAttribute("desc");
};
            
void Restore::setDesc(string _desc) {
    if(!m_Base.hasAttribute("desc")) {
        MeiAttribute * a = new MeiAttribute("desc", _desc);
        m_Base.addAttribute(a);
    }
};
            
bool Restore::hasDesc() {
    return m_Base.hasAttribute("desc");
};
            
Sic::Sic() : m_Common(this), m_Facsimile(this){
    m_Base.setName("sic");
};
//REGISTER_DEFINITION(Sic, "sic");

Subst::Subst() : m_Common(this), m_Edit(this), m_Trans(this){
    m_Base.setName("subst");
};
//REGISTER_DEFINITION(Subst, "subst");

Supplied::Supplied() : m_Common(this), m_Agentident(this), m_Reasonident(this), m_Edit(this), m_Facsimile(this)
{
    m_Base.setName("supplied");
};
//REGISTER_DEFINITION(Supplied, "supplied");

Unclear::Unclear() : m_Common(this), m_Handident(this), m_Crit(this), m_Agentident(this), m_Reasonident(this), 
m_Edit(this), m_Trans(this), m_Facsimile(this){
    m_Base.setName("unclear");
};
//REGISTER_DEFINITION(Unclear, "unclear");
