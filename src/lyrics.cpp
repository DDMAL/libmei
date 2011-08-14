#include "lyrics.h"
using namespace std;

Lyrics::Lyrics() : m_Common(this), m_Lang(this), m_Layerident(this), m_Placement(this), m_Staffident(this), 
m_Typography(this), m_Event(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this), m_MidiEvent(this){
    m_Base.setName("lyrics");
};
//REGISTER_DEFINITION(Lyrics, "lyrics");

Verse::Verse() : m_Common(this), m_Lang(this), m_Typography(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), 
m_Xy(this), m_Visualoffset(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), 
m_Facsimile(this){
    m_Base.setName("verse");
};
//REGISTER_DEFINITION(Verse, "verse");

string Verse::getRefrainValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("refrain")) {
        throw AttributeNotFoundException("refrain");
    }
    return m_Base.getAttributeValue("refrain");
};
            
MeiAttribute* Verse::getRefrain() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("refrain")) {
        throw AttributeNotFoundException("refrain");
    }
    return m_Base.getAttribute("refrain");
};
            
void Verse::setRefrain(string _refrain) {
    if(!m_Base.hasAttribute("refrain")) {
        MeiAttribute * a = new MeiAttribute("refrain", _refrain);
        m_Base.addAttribute(a);
    }
};
            
bool Verse::hasRefrain() {
    return m_Base.hasAttribute("refrain");
};
            
string Verse::getRhythmValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rhythm")) {
        throw AttributeNotFoundException("rhythm");
    }
    return m_Base.getAttributeValue("rhythm");
};
            
MeiAttribute* Verse::getRhythm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rhythm")) {
        throw AttributeNotFoundException("rhythm");
    }
    return m_Base.getAttribute("rhythm");
};
            
void Verse::setRhythm(string _rhythm) {
    if(!m_Base.hasAttribute("rhythm")) {
        MeiAttribute * a = new MeiAttribute("rhythm", _rhythm);
        m_Base.addAttribute(a);
    }
};
            
bool Verse::hasRhythm() {
    return m_Base.hasAttribute("rhythm");
};
            