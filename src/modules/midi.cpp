
#include "midi.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Cc::Cc() : 
    MeiElement("cc"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this),
    m_Midivalue(this) 
{
};
REGISTER_DEFINITION(mei::Cc, "cc");



mei::Chan::Chan() : 
    MeiElement("chan"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this) 
{
};
REGISTER_DEFINITION(mei::Chan, "chan");


MeiAttribute* mei::Chan::getNum() {
    if (!hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return getAttribute("num");
};

void mei::Chan::setNum(std::string _num) {
    if (!hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        addAttribute(a);
    }
};

bool mei::Chan::hasNum() {
    return hasAttribute("num");
};

void mei::Chan::removeNum() {
    removeAttribute("num");
};


mei::Chanpr::Chanpr() : 
    MeiElement("chanPr"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this) 
{
};
REGISTER_DEFINITION(mei::Chanpr, "chanPr");



mei::Cue::Cue() : 
    MeiElement("cue"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this) 
{
};
REGISTER_DEFINITION(mei::Cue, "cue");



mei::Hex::Hex() : 
    MeiElement("hex"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this) 
{
};
REGISTER_DEFINITION(mei::Hex, "hex");



mei::Marker::Marker() : 
    MeiElement("marker"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this) 
{
};
REGISTER_DEFINITION(mei::Marker, "marker");



mei::Metatext::Metatext() : 
    MeiElement("metaText"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this) 
{
};
REGISTER_DEFINITION(mei::Metatext, "metaText");



mei::Midi::Midi() : 
    MeiElement("midi"),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_CommonAnl(this),
    m_Alignment(this) 
{
};
REGISTER_DEFINITION(mei::Midi, "midi");



mei::Noteoff::Noteoff() : 
    MeiElement("noteOff"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this) 
{
};
REGISTER_DEFINITION(mei::Noteoff, "noteOff");



mei::Noteon::Noteon() : 
    MeiElement("noteOn"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this) 
{
};
REGISTER_DEFINITION(mei::Noteon, "noteOn");



mei::Port::Port() : 
    MeiElement("port"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this) 
{
};
REGISTER_DEFINITION(mei::Port, "port");



mei::Prog::Prog() : 
    MeiElement("prog"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this) 
{
};
REGISTER_DEFINITION(mei::Prog, "prog");



mei::Seqnum::Seqnum() : 
    MeiElement("seqNum"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this) 
{
};
REGISTER_DEFINITION(mei::Seqnum, "seqNum");


MeiAttribute* mei::Seqnum::getNum() {
    if (!hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return getAttribute("num");
};

void mei::Seqnum::setNum(std::string _num) {
    if (!hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        addAttribute(a);
    }
};

bool mei::Seqnum::hasNum() {
    return hasAttribute("num");
};

void mei::Seqnum::removeNum() {
    removeAttribute("num");
};


mei::Trkname::Trkname() : 
    MeiElement("trkName"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this) 
{
};
REGISTER_DEFINITION(mei::Trkname, "trkName");



mei::Vel::Vel() : 
    MeiElement("vel"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this) 
{
};
REGISTER_DEFINITION(mei::Vel, "vel");


MeiAttribute* mei::Vel::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::Vel::setForm(std::string _form) {
    if (!hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        addAttribute(a);
    }
};

bool mei::Vel::hasForm() {
    return hasAttribute("form");
};

void mei::Vel::removeForm() {
    removeAttribute("form");
};



