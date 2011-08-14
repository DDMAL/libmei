#include "harmony.h"
using namespace std;

Barre::Barre() : m_Common(this), m_Startendid(this), m_Fretlocation(this){
    m_Base.setName("barre");
};
//REGISTER_DEFINITION(Barre, "barre");

ChordDef::ChordDef() : m_Common(this){
    m_Base.setName("chordDef");
};
//REGISTER_DEFINITION(ChordDef, "chordDef");

string ChordDef::getPosValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pos")) {
        throw AttributeNotFoundException("pos");
    }
    return m_Base.getAttributeValue("pos");
};
            
MeiAttribute* ChordDef::getPos() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pos")) {
        throw AttributeNotFoundException("pos");
    }
    return m_Base.getAttribute("pos");
};
            
void ChordDef::setPos(string _pos) {
    if(!m_Base.hasAttribute("pos")) {
        MeiAttribute * a = new MeiAttribute("pos", _pos);
        m_Base.addAttribute(a);
    }
};
            
bool ChordDef::hasPos() {
    return m_Base.hasAttribute("pos");
};
            
ChordMember::ChordMember() : m_AccidentalPerformed(this), m_Common(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_Intervalharmonic(this), m_Intervallicdesc(this), m_Fretlocation(this){
    m_Base.setName("chordMember");
};
//REGISTER_DEFINITION(ChordMember, "chordMember");

string ChordMember::getFingValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("fing")) {
        throw AttributeNotFoundException("fing");
    }
    return m_Base.getAttributeValue("fing");
};
            
MeiAttribute* ChordMember::getFing() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("fing")) {
        throw AttributeNotFoundException("fing");
    }
    return m_Base.getAttribute("fing");
};
            
void ChordMember::setFing(string _fing) {
    if(!m_Base.hasAttribute("fing")) {
        MeiAttribute * a = new MeiAttribute("fing", _fing);
        m_Base.addAttribute(a);
    }
};
            
bool ChordMember::hasFing() {
    return m_Base.hasAttribute("fing");
};
            
ChordTable::ChordTable() : m_Common(this){
    m_Base.setName("chordTable");
};
//REGISTER_DEFINITION(ChordTable, "chordTable");

F::F() : m_Altsym(this), m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), 
m_Facsimile(this){
    m_Base.setName("f");
};
//REGISTER_DEFINITION(F, "f");

string F::getExtenderValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return m_Base.getAttributeValue("extender");
};
            
MeiAttribute* F::getExtender() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return m_Base.getAttribute("extender");
};
            
void F::setExtender(string _extender) {
    if(!m_Base.hasAttribute("extender")) {
        MeiAttribute * a = new MeiAttribute("extender", _extender);
        m_Base.addAttribute(a);
    }
};
            
bool F::hasExtender() {
    return m_Base.hasAttribute("extender");
};
            
Fb::Fb() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("fb");
};
//REGISTER_DEFINITION(Fb, "fb");

Harm::Harm() : m_Common(this), m_DurationPerformed(this), m_DurationTimestamp(this), m_Placement(this), 
m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), m_Startendid(this), 
m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), 
m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("harm");
};
//REGISTER_DEFINITION(Harm, "harm");

string Harm::getChordrefValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("chordref")) {
        throw AttributeNotFoundException("chordref");
    }
    return m_Base.getAttributeValue("chordref");
};
            
MeiAttribute* Harm::getChordref() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("chordref")) {
        throw AttributeNotFoundException("chordref");
    }
    return m_Base.getAttribute("chordref");
};
            
void Harm::setChordref(string _chordref) {
    if(!m_Base.hasAttribute("chordref")) {
        MeiAttribute * a = new MeiAttribute("chordref", _chordref);
        m_Base.addAttribute(a);
    }
};
            
bool Harm::hasChordref() {
    return m_Base.hasAttribute("chordref");
};
            
string Harm::getExtenderValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return m_Base.getAttributeValue("extender");
};
            
MeiAttribute* Harm::getExtender() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return m_Base.getAttribute("extender");
};
            
void Harm::setExtender(string _extender) {
    if(!m_Base.hasAttribute("extender")) {
        MeiAttribute * a = new MeiAttribute("extender", _extender);
        m_Base.addAttribute(a);
    }
};
            
bool Harm::hasExtender() {
    return m_Base.hasAttribute("extender");
};
            
string Harm::getRendgridValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rendgrid")) {
        throw AttributeNotFoundException("rendgrid");
    }
    return m_Base.getAttributeValue("rendgrid");
};
            
MeiAttribute* Harm::getRendgrid() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rendgrid")) {
        throw AttributeNotFoundException("rendgrid");
    }
    return m_Base.getAttribute("rendgrid");
};
            
void Harm::setRendgrid(string _rendgrid) {
    if(!m_Base.hasAttribute("rendgrid")) {
        MeiAttribute * a = new MeiAttribute("rendgrid", _rendgrid);
        m_Base.addAttribute(a);
    }
};
            
bool Harm::hasRendgrid() {
    return m_Base.hasAttribute("rendgrid");
};
            