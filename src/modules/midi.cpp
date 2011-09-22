#include "midi.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
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
}
REGISTER_DEFINITION(mei::Cc, "cc");
mei::Cc::~Cc() {}

/* include <cc> */

mei::Chan::Chan() :
    MeiElement("chan"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::Chan, "chan");
mei::Chan::~Chan() {}

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
/* include <chan> */

mei::ChanPr::ChanPr() :
    MeiElement("chanPr"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::ChanPr, "chanPr");
mei::ChanPr::~ChanPr() {}

/* include <chanPr> */

mei::Cue::Cue() :
    MeiElement("cue"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::Cue, "cue");
mei::Cue::~Cue() {}

/* include <cue> */

mei::Hex::Hex() :
    MeiElement("hex"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::Hex, "hex");
mei::Hex::~Hex() {}

/* include <hex> */

mei::Marker::Marker() :
    MeiElement("marker"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::Marker, "marker");
mei::Marker::~Marker() {}

/* include <marker> */

mei::MetaText::MetaText() :
    MeiElement("metaText"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::MetaText, "metaText");
mei::MetaText::~MetaText() {}

/* include <metaText> */

mei::Midi::Midi() :
    MeiElement("midi"),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Midi, "midi");
mei::Midi::~Midi() {}

/* include <midi> */

mei::NoteOff::NoteOff() :
    MeiElement("noteOff"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::NoteOff, "noteOff");
mei::NoteOff::~NoteOff() {}

/* include <noteOff> */

mei::NoteOn::NoteOn() :
    MeiElement("noteOn"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this),
    m_Midinumber(this)
{
}
REGISTER_DEFINITION(mei::NoteOn, "noteOn");
mei::NoteOn::~NoteOn() {}

/* include <noteOn> */

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
}
REGISTER_DEFINITION(mei::Port, "port");
mei::Port::~Port() {}

/* include <port> */

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
}
REGISTER_DEFINITION(mei::Prog, "prog");
mei::Prog::~Prog() {}

/* include <prog> */

mei::SeqNum::SeqNum() :
    MeiElement("seqNum"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::SeqNum, "seqNum");
mei::SeqNum::~SeqNum() {}

MeiAttribute* mei::SeqNum::getNum() {
    if (!hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return getAttribute("num");
};

void mei::SeqNum::setNum(std::string _num) {
    if (!hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        addAttribute(a);
    }
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
    m_Staffident(this),
    m_Layerident(this),
    m_TimestampMusical(this)
{
}
REGISTER_DEFINITION(mei::TrkName, "trkName");
mei::TrkName::~TrkName() {}

/* include <trkName> */

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
}
REGISTER_DEFINITION(mei::Vel, "vel");
mei::Vel::~Vel() {}

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
/* include <vel> */



