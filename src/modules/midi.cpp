#include "midi.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Cc::Cc() :
    MeiElement("cc"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this),
    m_Midivalue(this)
{
}
REGISTER_DEFINITION(mei::Cc, "cc");
mei::Cc::~Cc() {}
mei::Cc::Cc(const Cc& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this),
    m_Midivalue(this)
{
}

/* include <cc> */

mei::Chan::Chan() :
    MeiElement("chan"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::Chan, "chan");
mei::Chan::~Chan() {}
mei::Chan::Chan(const Chan& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}

MeiAttribute* mei::Chan::getNum() {
    if (!hasAttribute("num")) {
        return NULL;
    }
    return getAttribute("num");
};

void mei::Chan::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    addAttribute(a);
};

bool mei::Chan::hasNum() {
    return hasAttribute("num");
};

void mei::Chan::removeNum() {
    removeAttribute("num");
};
/* include <chan> */

mei::ChanPr::ChanPr() :
    MeiElement("chanPr"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::ChanPr, "chanPr");
mei::ChanPr::~ChanPr() {}
mei::ChanPr::ChanPr(const ChanPr& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}

/* include <chanPr> */

mei::Cue::Cue() :
    MeiElement("cue"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::Cue, "cue");
mei::Cue::~Cue() {}
mei::Cue::Cue(const Cue& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}

/* include <cue> */

mei::Hex::Hex() :
    MeiElement("hex"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::Hex, "hex");
mei::Hex::~Hex() {}
mei::Hex::Hex(const Hex& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}

/* include <hex> */

mei::InstrDef::InstrDef() :
    MeiElement("instrDef"),
    m_Common(this),
    m_CommonPart(this),
    m_Channelized(this),
    m_Midiinstrument(this)
{
}
REGISTER_DEFINITION(mei::InstrDef, "instrDef");
mei::InstrDef::~InstrDef() {}
mei::InstrDef::InstrDef(const InstrDef& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Channelized(this),
    m_Midiinstrument(this)
{
}

/* include <instrDef> */

mei::InstrGrp::InstrGrp() :
    MeiElement("instrGrp"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::InstrGrp, "instrGrp");
mei::InstrGrp::~InstrGrp() {}
mei::InstrGrp::InstrGrp(const InstrGrp& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <instrGrp> */

mei::Marker::Marker() :
    MeiElement("marker"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::Marker, "marker");
mei::Marker::~Marker() {}
mei::Marker::Marker(const Marker& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}

/* include <marker> */

mei::MetaText::MetaText() :
    MeiElement("metaText"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::MetaText, "metaText");
mei::MetaText::~MetaText() {}
mei::MetaText::MetaText(const MetaText& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}

/* include <metaText> */

mei::Midi::Midi() :
    MeiElement("midi"),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Midi, "midi");
mei::Midi::~Midi() {}
mei::Midi::Midi(const Midi& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <midi> */

mei::NoteOff::NoteOff() :
    MeiElement("noteOff"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::NoteOff, "noteOff");
mei::NoteOff::~NoteOff() {}
mei::NoteOff::NoteOff(const NoteOff& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}

/* include <noteOff> */

mei::NoteOn::NoteOn() :
    MeiElement("noteOn"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::NoteOn, "noteOn");
mei::NoteOn::~NoteOn() {}
mei::NoteOn::NoteOn(const NoteOn& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}

/* include <noteOn> */

mei::Port::Port() :
    MeiElement("port"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::Port, "port");
mei::Port::~Port() {}
mei::Port::Port(const Port& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}

/* include <port> */

mei::Prog::Prog() :
    MeiElement("prog"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::Prog, "prog");
mei::Prog::~Prog() {}
mei::Prog::Prog(const Prog& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}

/* include <prog> */

mei::SeqNum::SeqNum() :
    MeiElement("seqNum"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::SeqNum, "seqNum");
mei::SeqNum::~SeqNum() {}
mei::SeqNum::SeqNum(const SeqNum& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}

MeiAttribute* mei::SeqNum::getNum() {
    if (!hasAttribute("num")) {
        return NULL;
    }
    return getAttribute("num");
};

void mei::SeqNum::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    addAttribute(a);
};

bool mei::SeqNum::hasNum() {
    return hasAttribute("num");
};

void mei::SeqNum::removeNum() {
    removeAttribute("num");
};
/* include <seqNum> */

mei::TrkName::TrkName() :
    MeiElement("trkName"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::TrkName, "trkName");
mei::TrkName::~TrkName() {}
mei::TrkName::TrkName(const TrkName& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}

/* include <trkName> */

mei::Vel::Vel() :
    MeiElement("vel"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::Vel, "vel");
mei::Vel::~Vel() {}
mei::Vel::Vel(const Vel& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}

MeiAttribute* mei::Vel::getForm() {
    if (!hasAttribute("form")) {
        return NULL;
    }
    return getAttribute("form");
};

void mei::Vel::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::Vel::hasForm() {
    return hasAttribute("form");
};

void mei::Vel::removeForm() {
    removeAttribute("form");
};
/* include <vel> */



