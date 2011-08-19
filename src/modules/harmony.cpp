
#include "harmony.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Barre::Barre() : 
    MeiElement("barre"),
    m_Common(this),
    m_Fretlocation(this),
    m_Startendid(this),
    m_Startid(this) 
{
};
REGISTER_DEFINITION(mei::Barre, "barre");
mei::Barre::~Barre() {};



mei::Chorddef::Chorddef() : 
    MeiElement("chordDef"),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Chorddef, "chordDef");
mei::Chorddef::~Chorddef() {};


MeiAttribute* mei::Chorddef::getPos() {
    if (!hasAttribute("pos")) {
        throw AttributeNotFoundException("pos");
    }
    return getAttribute("pos");
};

void mei::Chorddef::setPos(std::string _pos) {
    if (!hasAttribute("pos")) {
        MeiAttribute *a = new MeiAttribute("pos", _pos);
        addAttribute(a);
    }
};

bool mei::Chorddef::hasPos() {
    return hasAttribute("pos");
};

void mei::Chorddef::removePos() {
    removeAttribute("pos");
};


mei::Chordmember::Chordmember() : 
    MeiElement("chordMember"),
    m_Common(this),
    m_AccidentalPerformed(this),
    m_Fretlocation(this),
    m_Intervalharmonic(this),
    m_Pitch(this),
    m_Octave(this) 
{
};
REGISTER_DEFINITION(mei::Chordmember, "chordMember");
mei::Chordmember::~Chordmember() {};


MeiAttribute* mei::Chordmember::getFing() {
    if (!hasAttribute("fing")) {
        throw AttributeNotFoundException("fing");
    }
    return getAttribute("fing");
};

void mei::Chordmember::setFing(std::string _fing) {
    if (!hasAttribute("fing")) {
        MeiAttribute *a = new MeiAttribute("fing", _fing);
        addAttribute(a);
    }
};

bool mei::Chordmember::hasFing() {
    return hasAttribute("fing");
};

void mei::Chordmember::removeFing() {
    removeAttribute("fing");
};


mei::Chordtable::Chordtable() : 
    MeiElement("chordTable"),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Chordtable, "chordTable");
mei::Chordtable::~Chordtable() {};



mei::F::F() : 
    MeiElement("f"),
    m_Common(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Altsym(this),
    m_Facsimile(this) 
{
};
REGISTER_DEFINITION(mei::F, "f");
mei::F::~F() {};


MeiAttribute* mei::F::getExtender() {
    if (!hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return getAttribute("extender");
};

void mei::F::setExtender(std::string _extender) {
    if (!hasAttribute("extender")) {
        MeiAttribute *a = new MeiAttribute("extender", _extender);
        addAttribute(a);
    }
};

bool mei::F::hasExtender() {
    return hasAttribute("extender");
};

void mei::F::removeExtender() {
    removeAttribute("extender");
};


mei::Fb::Fb() : 
    MeiElement("fb"),
    m_Common(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Facsimile(this) 
{
};
REGISTER_DEFINITION(mei::Fb, "fb");
mei::Fb::~Fb() {};



mei::Harm::Harm() : 
    MeiElement("harm"),
    m_Common(this),
    m_Facsimile(this),
    m_HarmLog(this),
    m_Participantident(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
    m_HarmVis(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this) 
{
};
REGISTER_DEFINITION(mei::Harm, "harm");
mei::Harm::~Harm() {};




