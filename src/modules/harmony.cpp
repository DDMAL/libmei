#include "harmony.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Barre::Barre() :
    MeiElement("barre"),
    m_Common(this),
    m_CommonPart(this),
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
    m_CommonPart(this),
    m_Fretlocation(this),
    m_Startendid(this),
    m_Startid(this)
{
}

/* include <barre> */

mei::ChordDef::ChordDef() :
    MeiElement("chordDef"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::ChordDef, "chordDef");
mei::ChordDef::~ChordDef() {}
mei::ChordDef::ChordDef(const ChordDef& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

MeiAttribute* mei::ChordDef::getPos() {
    if (!hasAttribute("pos")) {
        return NULL;
    }
    return getAttribute("pos");
};

void mei::ChordDef::setPos(std::string _pos) {
    MeiAttribute *a = new MeiAttribute("pos", _pos);
    addAttribute(a);
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
    m_CommonPart(this),
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
    m_CommonPart(this),
    m_AccidentalPerformed(this),
    m_Fretlocation(this),
    m_Intervalharmonic(this),
    m_Pitch(this),
    m_Octave(this)
{
}

MeiAttribute* mei::ChordMember::getFing() {
    if (!hasAttribute("fing")) {
        return NULL;
    }
    return getAttribute("fing");
};

void mei::ChordMember::setFing(std::string _fing) {
    MeiAttribute *a = new MeiAttribute("fing", _fing);
    addAttribute(a);
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
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::ChordTable, "chordTable");
mei::ChordTable::~ChordTable() {}
mei::ChordTable::ChordTable(const ChordTable& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <chordTable> */

mei::F::F() :
    MeiElement("f"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_DurationPerformed(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Altsym(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::F, "f");
mei::F::~F() {}
mei::F::F(const F& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_DurationPerformed(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Altsym(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}

/* include <f> */

mei::Fb::Fb() :
    MeiElement("fb"),
    m_Common(this),
    m_CommonPart(this),
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
    m_CommonPart(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Facsimile(this)
{
}

/* include <fb> */

mei::Harm::Harm() :
    MeiElement("harm"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_HarmLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_HarmVis(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Intervalharmonic(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Harm, "harm");
mei::Harm::~Harm() {}
mei::Harm::Harm(const Harm& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_HarmLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_HarmVis(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Intervalharmonic(this),
    m_Typed(this)
{
}

/* include <harm> */



