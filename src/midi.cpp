#include "midi.h"
using namespace std;

Cc::Cc() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Midinumber(this), 
m_Midivalue(this), m_MidiEvent(this){
    m_Base.setName("cc");
};
//REGISTER_DEFINITION(Cc, "cc");

Chan::Chan() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_MidiEvent(this)
{
    m_Base.setName("chan");
};
//REGISTER_DEFINITION(Chan, "chan");

string Chan::getNumValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttributeValue("num");
};
            
MeiAttribute* Chan::getNum() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttribute("num");
};
            
void Chan::setNum(string _num) {
    if(!m_Base.hasAttribute("num")) {
        MeiAttribute * a = new MeiAttribute("num", _num);
        m_Base.addAttribute(a);
    }
};
            
bool Chan::hasNum() {
    return m_Base.hasAttribute("num");
};
            
ChanPr::ChanPr() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Midinumber(this), 
m_MidiEvent(this){
    m_Base.setName("chanPr");
};
//REGISTER_DEFINITION(ChanPr, "chanPr");

Cue::Cue() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_MidiEvent(this)
{
    m_Base.setName("cue");
};
//REGISTER_DEFINITION(Cue, "cue");

Hex::Hex() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_MidiEvent(this)
{
    m_Base.setName("hex");
};
//REGISTER_DEFINITION(Hex, "hex");

Marker::Marker() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_MidiEvent(this)
{
    m_Base.setName("marker");
};
//REGISTER_DEFINITION(Marker, "marker");

MetaText::MetaText() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_MidiEvent(this)
{
    m_Base.setName("metaText");
};
//REGISTER_DEFINITION(MetaText, "metaText");

Midi::Midi() : m_Common(this), m_Layerident(this), m_Staffident(this), m_Event(this), m_Controlevent(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_MidiEvent(this){
    m_Base.setName("midi");
};
//REGISTER_DEFINITION(Midi, "midi");

NoteOff::NoteOff() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Midinumber(this), 
m_MidiEvent(this){
    m_Base.setName("noteOff");
};
//REGISTER_DEFINITION(NoteOff, "noteOff");

NoteOn::NoteOn() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Midinumber(this), 
m_MidiEvent(this){
    m_Base.setName("noteOn");
};
//REGISTER_DEFINITION(NoteOn, "noteOn");

Port::Port() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Midinumber(this), 
m_MidiEvent(this){
    m_Base.setName("port");
};
//REGISTER_DEFINITION(Port, "port");

Prog::Prog() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Midinumber(this), 
m_MidiEvent(this){
    m_Base.setName("prog");
};
//REGISTER_DEFINITION(Prog, "prog");

SeqNum::SeqNum() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_MidiEvent(this)
{
    m_Base.setName("seqNum");
};
//REGISTER_DEFINITION(SeqNum, "seqNum");

string SeqNum::getNumValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttributeValue("num");
};
            
MeiAttribute* SeqNum::getNum() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttribute("num");
};
            
void SeqNum::setNum(string _num) {
    if(!m_Base.hasAttribute("num")) {
        MeiAttribute * a = new MeiAttribute("num", _num);
        m_Base.addAttribute(a);
    }
};
            
bool SeqNum::hasNum() {
    return m_Base.hasAttribute("num");
};
            
TrkName::TrkName() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_MidiEvent(this)
{
    m_Base.setName("trkName");
};
//REGISTER_DEFINITION(TrkName, "trkName");

Vel::Vel() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Midinumber(this), 
m_MidiEvent(this){
    m_Base.setName("vel");
};
//REGISTER_DEFINITION(Vel, "vel");

string Vel::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Vel::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Vel::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Vel::hasForm() {
    return m_Base.hasAttribute("form");
};
            