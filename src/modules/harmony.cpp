#include "harmony.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Barre::Barre() :
    MeiElement("barre"),
    m_Common(this),
    m_Fretlocation(this),
    m_Startendid(this),
    m_Startid(this)
{
}
REGISTER_DEFINITION(mei::Barre, "barre");
mei::Barre::~Barre() {}
mei::Barre::Barre(const Barre& other) :
    MeiElement(other), 
    m_Common(this),
    m_Fretlocation(this),
    m_Startendid(this),
    m_Startid(this)
{
}

/* include <barre> */

mei::ChordDef::ChordDef() :
    MeiElement("chordDef"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::ChordDef, "chordDef");
mei::ChordDef::~ChordDef() {}
mei::ChordDef::ChordDef(const ChordDef& other) :
    MeiElement(other), 
    m_Common(this)
{
}

MeiAttribute* mei::ChordDef::getPos() {
    if (!hasAttribute("pos")) {
        throw AttributeNotFoundException("pos");
    }
    return getAttribute("pos");
};

void mei::ChordDef::setPos(std::string _pos) {
    if (!hasAttribute("pos")) {
        MeiAttribute *a = new MeiAttribute("pos", _pos);
        addAttribute(a);
    }
};

bool mei::ChordDef::hasPos() {
    return hasAttribute("pos");
};

void mei::ChordDef::removePos() {
    removeAttribute("pos");
};
/* include <chordDef> */

mei::ChordMember::ChordMember() :
    MeiElement("chordMember"),
    m_Common(this),
    m_AccidentalPerformed(this),
    m_Fretlocation(this),
    m_Intervalharmonic(this),
    m_Pitch(this),
    m_Octave(this)
{
}
REGISTER_DEFINITION(mei::ChordMember, "chordMember");
mei::ChordMember::~ChordMember() {}
mei::ChordMember::ChordMember(const ChordMember& other) :
    MeiElement(other), 
    m_Common(this),
    m_AccidentalPerformed(this),
    m_Fretlocation(this),
    m_Intervalharmonic(this),
    m_Pitch(this),
    m_Octave(this)
{
}

MeiAttribute* mei::ChordMember::getFing() {
    if (!hasAttribute("fing")) {
        throw AttributeNotFoundException("fing");
    }
    return getAttribute("fing");
};

void mei::ChordMember::setFing(std::string _fing) {
    if (!hasAttribute("fing")) {
        MeiAttribute *a = new MeiAttribute("fing", _fing);
        addAttribute(a);
    }
};

bool mei::ChordMember::hasFing() {
    return hasAttribute("fing");
};

void mei::ChordMember::removeFing() {
    removeAttribute("fing");
};
/* include <chordMember> */

mei::ChordTable::ChordTable() :
    MeiElement("chordTable"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::ChordTable, "chordTable");
mei::ChordTable::~ChordTable() {}
mei::ChordTable::ChordTable(const ChordTable& other) :
    MeiElement(other), 
    m_Common(this)
{
}

/* include <chordTable> */

mei::F::F() :
    MeiElement("f"),
    m_Common(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Altsym(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::F, "f");
mei::F::~F() {}
mei::F::F(const F& other) :
    MeiElement(other), 
    m_Common(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Altsym(this),
    m_Facsimile(this)
{
}

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
/* include <f> */

mei::Fb::Fb() :
    MeiElement("fb"),
    m_Common(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Fb, "fb");
mei::Fb::~Fb() {}
mei::Fb::Fb(const Fb& other) :
    MeiElement(other), 
    m_Common(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Facsimile(this)
{
}

/* include <fb> */

mei::Harm::Harm() :
    MeiElement("harm"),
    m_Common(this),
    m_Facsimile(this),
    m_HarmLog(this),
    m_Plist(this),
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
}
REGISTER_DEFINITION(mei::Harm, "harm");
mei::Harm::~Harm() {}
mei::Harm::Harm(const Harm& other) :
    MeiElement(other), 
    m_Common(this),
    m_Facsimile(this),
    m_HarmLog(this),
    m_Plist(this),
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
}

/* include <harm> */



