#include "midi.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Cc::Cc() :
    MeiElement("cc")
{
}
REGISTER_DEFINITION(mei::Cc, "cc");
mei::Cc::~Cc() {}
mei::Cc::Cc(const Cc& other) :
    MeiElement(other),

{
}

/* include <cc> */

mei::Chan::Chan() :
    MeiElement("chan")
{
}
REGISTER_DEFINITION(mei::Chan, "chan");
mei::Chan::~Chan() {}
mei::Chan::Chan(const Chan& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::Chan::getNum() {
    if (!hasAttribute("num")) {
        throw AttributeNotFoundException("num");
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
    MeiElement("chanPr")
{
}
REGISTER_DEFINITION(mei::ChanPr, "chanPr");
mei::ChanPr::~ChanPr() {}
mei::ChanPr::ChanPr(const ChanPr& other) :
    MeiElement(other),

{
}

/* include <chanPr> */

mei::Cue::Cue() :
    MeiElement("cue")
{
}
REGISTER_DEFINITION(mei::Cue, "cue");
mei::Cue::~Cue() {}
mei::Cue::Cue(const Cue& other) :
    MeiElement(other),

{
}

/* include <cue> */

mei::Hex::Hex() :
    MeiElement("hex")
{
}
REGISTER_DEFINITION(mei::Hex, "hex");
mei::Hex::~Hex() {}
mei::Hex::Hex(const Hex& other) :
    MeiElement(other),

{
}

/* include <hex> */

mei::InstrDef::InstrDef() :
    MeiElement("instrDef")
{
}
REGISTER_DEFINITION(mei::InstrDef, "instrDef");
mei::InstrDef::~InstrDef() {}
mei::InstrDef::InstrDef(const InstrDef& other) :
    MeiElement(other),

{
}

/* include <instrDef> */

mei::InstrGrp::InstrGrp() :
    MeiElement("instrGrp")
{
}
REGISTER_DEFINITION(mei::InstrGrp, "instrGrp");
mei::InstrGrp::~InstrGrp() {}
mei::InstrGrp::InstrGrp(const InstrGrp& other) :
    MeiElement(other),

{
}

/* include <instrGrp> */

mei::Marker::Marker() :
    MeiElement("marker")
{
}
REGISTER_DEFINITION(mei::Marker, "marker");
mei::Marker::~Marker() {}
mei::Marker::Marker(const Marker& other) :
    MeiElement(other),

{
}

/* include <marker> */

mei::MetaText::MetaText() :
    MeiElement("metaText")
{
}
REGISTER_DEFINITION(mei::MetaText, "metaText");
mei::MetaText::~MetaText() {}
mei::MetaText::MetaText(const MetaText& other) :
    MeiElement(other),

{
}

/* include <metaText> */

mei::Midi::Midi() :
    MeiElement("midi")
{
}
REGISTER_DEFINITION(mei::Midi, "midi");
mei::Midi::~Midi() {}
mei::Midi::Midi(const Midi& other) :
    MeiElement(other),

{
}

/* include <midi> */

mei::NoteOff::NoteOff() :
    MeiElement("noteOff")
{
}
REGISTER_DEFINITION(mei::NoteOff, "noteOff");
mei::NoteOff::~NoteOff() {}
mei::NoteOff::NoteOff(const NoteOff& other) :
    MeiElement(other),

{
}

/* include <noteOff> */

mei::NoteOn::NoteOn() :
    MeiElement("noteOn")
{
}
REGISTER_DEFINITION(mei::NoteOn, "noteOn");
mei::NoteOn::~NoteOn() {}
mei::NoteOn::NoteOn(const NoteOn& other) :
    MeiElement(other),

{
}

/* include <noteOn> */

mei::Port::Port() :
    MeiElement("port")
{
}
REGISTER_DEFINITION(mei::Port, "port");
mei::Port::~Port() {}
mei::Port::Port(const Port& other) :
    MeiElement(other),

{
}

/* include <port> */

mei::Prog::Prog() :
    MeiElement("prog")
{
}
REGISTER_DEFINITION(mei::Prog, "prog");
mei::Prog::~Prog() {}
mei::Prog::Prog(const Prog& other) :
    MeiElement(other),

{
}

/* include <prog> */

mei::SeqNum::SeqNum() :
    MeiElement("seqNum")
{
}
REGISTER_DEFINITION(mei::SeqNum, "seqNum");
mei::SeqNum::~SeqNum() {}
mei::SeqNum::SeqNum(const SeqNum& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::SeqNum::getNum() {
    if (!hasAttribute("num")) {
        throw AttributeNotFoundException("num");
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
    MeiElement("trkName")
{
}
REGISTER_DEFINITION(mei::TrkName, "trkName");
mei::TrkName::~TrkName() {}
mei::TrkName::TrkName(const TrkName& other) :
    MeiElement(other),

{
}

/* include <trkName> */

mei::Vel::Vel() :
    MeiElement("vel")
{
}
REGISTER_DEFINITION(mei::Vel, "vel");
mei::Vel::~Vel() {}
mei::Vel::Vel(const Vel& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::Vel::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
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



