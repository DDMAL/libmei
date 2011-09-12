#include "shared.h"

#include <string>
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Abbr::Abbr() :
    MeiElement("abbr"),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Handident(this),
    m_Sequence(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Abbr, "abbr");
mei::Abbr::~Abbr() {}

MeiAttribute* mei::Abbr::getExpan() {
    if (!hasAttribute("expan")) {
        throw AttributeNotFoundException("expan");
    }
    return getAttribute("expan");
};

void mei::Abbr::setExpan(std::string _expan) {
    if (!hasAttribute("expan")) {
        MeiAttribute *a = new MeiAttribute("expan", _expan);
        addAttribute(a);
    }
};

bool mei::Abbr::hasExpan() {
    return hasAttribute("expan");
};

void mei::Abbr::removeExpan() {
    removeAttribute("expan");
};
/* include <abbr> */

mei::Accid::Accid() :
    MeiElement("accid"),
    m_Common(this),
    m_Facsimile(this),
    m_Typography(this),
    m_AccidLog(this),
    m_Accidental(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Staffloc(this),
    m_AccidVis(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Enclosingchars(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Accid, "accid");
mei::Accid::~Accid() {}

/* include <accid> */

mei::Actor::Actor() :
    MeiElement("actor"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Actor, "actor");
mei::Actor::~Actor() {}

/* include <actor> */

mei::Addrline::Addrline() :
    MeiElement("addrLine"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Addrline, "addrLine");
mei::Addrline::~Addrline() {}

/* include <addrLine> */

mei::Address::Address() :
    MeiElement("address"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Address, "address");
mei::Address::~Address() {}

/* include <address> */

mei::Annot::Annot() :
    MeiElement("annot"),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Source(this),
    m_Typed(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Plist(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Annot, "annot");
mei::Annot::~Annot() {}

/* include <annot> */

mei::Artic::Artic() :
    MeiElement("artic"),
    m_Common(this),
    m_Facsimile(this),
    m_Typography(this),
    m_Articulation(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Staffloc(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Enclosingchars(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Artic, "artic");
mei::Artic::~Artic() {}

/* include <artic> */

mei::Barline::Barline() :
    MeiElement("barLine"),
    m_Common(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_BarlineLog(this),
    m_MeterconformanceBar(this),
    m_Barplacement(this),
    m_Color(this),
    m_Measurement(this),
    m_Width(this),
    m_TimestampMusical(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Barline, "barLine");
mei::Barline::~Barline() {}

/* include <barLine> */

mei::Bibl::Bibl() :
    MeiElement("bibl"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Bibl, "bibl");
mei::Bibl::~Bibl() {}

/* include <bibl> */

mei::Body::Body() :
    MeiElement("body"),
    m_Common(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Body, "body");
mei::Body::~Body() {}

/* include <body> */

mei::Caption::Caption() :
    MeiElement("caption"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Caption, "caption");
mei::Caption::~Caption() {}

/* include <caption> */

mei::Castgrp::Castgrp() :
    MeiElement("castGrp"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Castgrp, "castGrp");
mei::Castgrp::~Castgrp() {}

/* include <castGrp> */

mei::Castitem::Castitem() :
    MeiElement("castItem"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Castitem, "castItem");
mei::Castitem::~Castitem() {}

/* include <castItem> */

mei::Castlist::Castlist() :
    MeiElement("castList"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Castlist, "castList");
mei::Castlist::~Castlist() {}

/* include <castList> */

mei::Chord::Chord() :
    MeiElement("chord"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Articulation(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Syltext(this),
    m_Slurpresent(this),
    m_Tiepresent(this),
    m_Tupletpresent(this),
    m_Beamed(this),
    m_Lvpresent(this),
    m_ChordVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Relativesize(this),
    m_Stemmed(this),
    m_StemmedCmn(this),
    m_Visibility(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_Xy(this),
    m_Beamsecondary(this),
    m_ArticulationPerformed(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_Graced(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Melodicfunction(this)
{
}
REGISTER_DEFINITION(mei::Chord, "chord");
mei::Chord::~Chord() {}

/* include <chord> */

mei::Clef::Clef() :
    MeiElement("clef"),
    m_Common(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Clefshape(this),
    m_Lineloc(this),
    m_Octave(this),
    m_Octavedisplacement(this),
    m_Altsym(this),
    m_Color(this)
{
}
REGISTER_DEFINITION(mei::Clef, "clef");
mei::Clef::~Clef() {}

/* include <clef> */

mei::Clefchange::Clefchange() :
    MeiElement("clefChange"),
    m_Common(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Facsimile(this),
    m_Clefshape(this),
    m_Lineloc(this),
    m_Octave(this),
    m_Octavedisplacement(this),
    m_Altsym(this),
    m_Color(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Clefchange, "clefChange");
mei::Clefchange::~Clefchange() {}

/* include <clefChange> */

mei::Custos::Custos() :
    MeiElement("custos"),
    m_Common(this),
    m_Facsimile(this),
    m_Source(this),
    m_CustosLog(this),
    m_Pitch(this),
    m_Octave(this),
    m_Altsym(this),
    m_Color(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Custos, "custos");
mei::Custos::~Custos() {}

/* include <custos> */

mei::Date::Date() :
    MeiElement("date"),
    m_Bibl(this),
    m_Calendared(this),
    m_Common(this),
    m_Datable(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Date, "date");
mei::Date::~Date() {}

MeiAttribute* mei::Date::getReg() {
    if (!hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return getAttribute("reg");
};

void mei::Date::setReg(std::string _reg) {
    if (!hasAttribute("reg")) {
        MeiAttribute *a = new MeiAttribute("reg", _reg);
        addAttribute(a);
    }
};

bool mei::Date::hasReg() {
    return hasAttribute("reg");
};

void mei::Date::removeReg() {
    removeAttribute("reg");
};
/* include <date> */

mei::Dir::Dir() :
    MeiElement("dir"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
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
REGISTER_DEFINITION(mei::Dir, "dir");
mei::Dir::~Dir() {}

/* include <dir> */

mei::Dot::Dot() :
    MeiElement("dot"),
    m_Common(this),
    m_Facsimile(this),
    m_DotLog(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Staffloc(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Dot, "dot");
mei::Dot::~Dot() {}

/* include <dot> */

mei::Dynam::Dynam() :
    MeiElement("dynam"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_Midivalue(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Dynam, "dynam");
mei::Dynam::~Dynam() {}

/* include <dynam> */

mei::Edition::Edition() :
    MeiElement("edition"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Edition, "edition");
mei::Edition::~Edition() {}

/* include <edition> */

mei::Ending::Ending() :
    MeiElement("ending"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Pointing(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Ending, "ending");
mei::Ending::~Ending() {}

/* include <ending> */

mei::Expan::Expan() :
    MeiElement("expan"),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Handident(this),
    m_Sequence(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Expan, "expan");
mei::Expan::~Expan() {}

MeiAttribute* mei::Expan::getAbbr() {
    if (!hasAttribute("abbr")) {
        throw AttributeNotFoundException("abbr");
    }
    return getAttribute("abbr");
};

void mei::Expan::setAbbr(std::string _abbr) {
    if (!hasAttribute("abbr")) {
        MeiAttribute *a = new MeiAttribute("abbr", _abbr);
        addAttribute(a);
    }
};

bool mei::Expan::hasAbbr() {
    return hasAttribute("abbr");
};

void mei::Expan::removeAbbr() {
    removeAttribute("abbr");
};
/* include <expan> */

mei::Expansion::Expansion() :
    MeiElement("expansion"),
    m_Common(this),
    m_Source(this),
    m_Typed(this),
    m_Plist(this)
{
}
REGISTER_DEFINITION(mei::Expansion, "expansion");
mei::Expansion::~Expansion() {}

/* include <expansion> */

mei::Fw::Fw() :
    MeiElement("fw"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Fw, "fw");
mei::Fw::~Fw() {}

/* include <fw> */

mei::Group::Group() :
    MeiElement("group"),
    m_Common(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Group, "group");
mei::Group::~Group() {}

/* include <group> */

mei::Grpsym::Grpsym() :
    MeiElement("grpSym"),
    m_Common(this),
    m_Facsimile(this),
    m_Staffgroupingsym(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Grpsym, "grpSym");
mei::Grpsym::~Grpsym() {}

/* include <grpSym> */

mei::Identifier::Identifier() :
    MeiElement("identifier"),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Identifier, "identifier");
mei::Identifier::~Identifier() {}

/* include <identifier> */

mei::Incip::Incip() :
    MeiElement("incip"),
    m_Common(this),
    m_Bibl(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Incip, "incip");
mei::Incip::~Incip() {}

/* include <incip> */

mei::Instrdef::Instrdef() :
    MeiElement("instrDef"),
    m_Common(this),
    m_Channelized(this),
    m_Midiinstrument(this)
{
}
REGISTER_DEFINITION(mei::Instrdef, "instrDef");
mei::Instrdef::~Instrdef() {}

/* include <instrDef> */

mei::Instrgrp::Instrgrp() :
    MeiElement("instrGrp"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::Instrgrp, "instrGrp");
mei::Instrgrp::~Instrgrp() {}

/* include <instrGrp> */

mei::Keyaccid::Keyaccid() :
    MeiElement("keyAccid"),
    m_Accidental(this),
    m_Common(this),
    m_Enclosingchars(this),
    m_Facsimile(this),
    m_Pitch(this),
    m_Octave(this),
    m_Staffloc(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Keyaccid, "keyAccid");
mei::Keyaccid::~Keyaccid() {}

MeiAttribute* mei::Keyaccid::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::Keyaccid::setForm(std::string _form) {
    if (!hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        addAttribute(a);
    }
};

bool mei::Keyaccid::hasForm() {
    return hasAttribute("form");
};

void mei::Keyaccid::removeForm() {
    removeAttribute("form");
};
/* include <keyAccid> */

mei::Keysig::Keysig() :
    MeiElement("keySig"),
    m_Common(this),
    m_Facsimile(this),
    m_Accidental(this),
    m_Pitch(this)
{
}
REGISTER_DEFINITION(mei::Keysig, "keySig");
mei::Keysig::~Keysig() {}

MeiAttribute* mei::Keysig::getMode() {
    if (!hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return getAttribute("mode");
};

void mei::Keysig::setMode(std::string _mode) {
    if (!hasAttribute("mode")) {
        MeiAttribute *a = new MeiAttribute("mode", _mode);
        addAttribute(a);
    }
};

bool mei::Keysig::hasMode() {
    return hasAttribute("mode");
};

void mei::Keysig::removeMode() {
    removeAttribute("mode");
};
/* include <keySig> */

mei::Label::Label() :
    MeiElement("label"),
    m_Common(this),
    m_Facsimile(this),
    m_Source(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Label, "label");
mei::Label::~Label() {}

/* include <label> */

mei::Layer::Layer() :
    MeiElement("layer"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Meterconformance(this),
    m_Visibility(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Layer, "layer");
mei::Layer::~Layer() {}

/* include <layer> */

mei::Layerdef::Layerdef() :
    MeiElement("layerDef"),
    m_Common(this),
    m_Declaring(this),
    m_DurationDefault(this),
    m_Octavedefault(this),
    m_BeamingLog(this),
    m_LabelsAddl(this),
    m_BeamingVis(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_Instrumentident(this)
{
}
REGISTER_DEFINITION(mei::Layerdef, "layerDef");
mei::Layerdef::~Layerdef() {}

/* include <layerDef> */

mei::Lb::Lb() :
    MeiElement("lb"),
    m_Common(this),
    m_Facsimile(this),
    m_Source(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Lb, "lb");
mei::Lb::~Lb() {}

MeiAttribute* mei::Lb::getFunc() {
    if (!hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return getAttribute("func");
};

void mei::Lb::setFunc(std::string _func) {
    if (!hasAttribute("func")) {
        MeiAttribute *a = new MeiAttribute("func", _func);
        addAttribute(a);
    }
};

bool mei::Lb::hasFunc() {
    return hasAttribute("func");
};

void mei::Lb::removeFunc() {
    removeAttribute("func");
};
/* include <lb> */

mei::Mdiv::Mdiv() :
    MeiElement("mdiv"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Mdiv, "mdiv");
mei::Mdiv::~Mdiv() {}

/* include <mdiv> */

mei::Mei::Mei() :
    MeiElement("mei"),
    m_Meiversion(this)
{
}
REGISTER_DEFINITION(mei::Mei, "mei");
mei::Mei::~Mei() {}

/* include <mei> */

mei::Music::Music() :
    MeiElement("music"),
    m_Common(this),
    m_Declaring(this),
    m_Meiversion(this)
{
}
REGISTER_DEFINITION(mei::Music, "music");
mei::Music::~Music() {}

/* include <music> */

mei::Name::Name() :
    MeiElement("name"),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Name, "name");
mei::Name::~Name() {}

/* include <name> */

mei::Note::Note() :
    MeiElement("note"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Accidental(this),
    m_Articulation(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Pitch(this),
    m_Octave(this),
    m_Syltext(this),
    m_Slurpresent(this),
    m_Tiepresent(this),
    m_Tupletpresent(this),
    m_Beamed(this),
    m_Lvpresent(this),
    m_NoteLogMensural(this),
    m_NoteVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Coloration(this),
    m_Enclosingchars(this),
    m_Relativesize(this),
    m_Stemmed(this),
    m_StemmedCmn(this),
    m_Visibility(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_Xy(this),
    m_Beamsecondary(this),
    m_NoteGes(this),
    m_AccidentalPerformed(this),
    m_ArticulationPerformed(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_NoteGesCmn(this),
    m_Graced(this),
    m_DurationRatio(this),
    m_NoteGesTablature(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Harmonicfunction(this),
    m_Intervallicdesc(this),
    m_Intervalharmonic(this),
    m_Melodicfunction(this),
    m_Pitchclass(this),
    m_Solfa(this)
{
}
REGISTER_DEFINITION(mei::Note, "note");
mei::Note::~Note() {}

/* include <note> */

mei::Num::Num() :
    MeiElement("num"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Num, "num");
mei::Num::~Num() {}

/* include <num> */

mei::P::P() :
    MeiElement("p"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::P, "p");
mei::P::~P() {}

/* include <p> */

mei::Pad::Pad() :
    MeiElement("pad"),
    m_Common(this),
    m_PadLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this)
{
}
REGISTER_DEFINITION(mei::Pad, "pad");
mei::Pad::~Pad() {}

/* include <pad> */

mei::Part::Part() :
    MeiElement("part"),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Part, "part");
mei::Part::~Part() {}

/* include <part> */

mei::Parts::Parts() :
    MeiElement("parts"),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Parts, "parts");
mei::Parts::~Parts() {}

/* include <parts> */

mei::Pb::Pb() :
    MeiElement("pb"),
    m_Common(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_Source(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_PbVis(this)
{
}
REGISTER_DEFINITION(mei::Pb, "pb");
mei::Pb::~Pb() {}

/* include <pb> */

mei::Pgdesc::Pgdesc() :
    MeiElement("pgDesc"),
    m_Common(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Pgdesc, "pgDesc");
mei::Pgdesc::~Pgdesc() {}

/* include <pgDesc> */

mei::Pgfoot::Pgfoot() :
    MeiElement("pgFoot"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Pgfoot, "pgFoot");
mei::Pgfoot::~Pgfoot() {}

/* include <pgFoot> */

mei::Pgfoot2::Pgfoot2() :
    MeiElement("pgFoot2"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Pgfoot2, "pgFoot2");
mei::Pgfoot2::~Pgfoot2() {}

/* include <pgFoot2> */

mei::Pghead::Pghead() :
    MeiElement("pgHead"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Pghead, "pgHead");
mei::Pghead::~Pghead() {}

/* include <pgHead> */

mei::Pghead2::Pghead2() :
    MeiElement("pgHead2"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Pghead2, "pgHead2");
mei::Pghead2::~Pghead2() {}

/* include <pgHead2> */

mei::Phrase::Phrase() :
    MeiElement("phrase"),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Joined(this)
{
}
REGISTER_DEFINITION(mei::Phrase, "phrase");
mei::Phrase::~Phrase() {}

/* include <phrase> */

mei::Rend::Rend() :
    MeiElement("rend"),
    m_Color(this),
    m_Common(this),
    m_Lang(this),
    m_Typography(this),
    m_Horizontalalign(this)
{
}
REGISTER_DEFINITION(mei::Rend, "rend");
mei::Rend::~Rend() {}

MeiAttribute* mei::Rend::getAltrend() {
    if (!hasAttribute("altrend")) {
        throw AttributeNotFoundException("altrend");
    }
    return getAttribute("altrend");
};

void mei::Rend::setAltrend(std::string _altrend) {
    if (!hasAttribute("altrend")) {
        MeiAttribute *a = new MeiAttribute("altrend", _altrend);
        addAttribute(a);
    }
};

bool mei::Rend::hasAltrend() {
    return hasAttribute("altrend");
};

void mei::Rend::removeAltrend() {
    removeAttribute("altrend");
};
MeiAttribute* mei::Rend::getRend() {
    if (!hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return getAttribute("rend");
};

void mei::Rend::setRend(std::string _rend) {
    if (!hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        addAttribute(a);
    }
};

bool mei::Rend::hasRend() {
    return hasAttribute("rend");
};

void mei::Rend::removeRend() {
    removeAttribute("rend");
};
MeiAttribute* mei::Rend::getRotation() {
    if (!hasAttribute("rotation")) {
        throw AttributeNotFoundException("rotation");
    }
    return getAttribute("rotation");
};

void mei::Rend::setRotation(std::string _rotation) {
    if (!hasAttribute("rotation")) {
        MeiAttribute *a = new MeiAttribute("rotation", _rotation);
        addAttribute(a);
    }
};

bool mei::Rend::hasRotation() {
    return hasAttribute("rotation");
};

void mei::Rend::removeRotation() {
    removeAttribute("rotation");
};
MeiAttribute* mei::Rend::getValign() {
    if (!hasAttribute("valign")) {
        throw AttributeNotFoundException("valign");
    }
    return getAttribute("valign");
};

void mei::Rend::setValign(std::string _valign) {
    if (!hasAttribute("valign")) {
        MeiAttribute *a = new MeiAttribute("valign", _valign);
        addAttribute(a);
    }
};

bool mei::Rend::hasValign() {
    return hasAttribute("valign");
};

void mei::Rend::removeValign() {
    removeAttribute("valign");
};
/* include <rend> */

mei::Repository::Repository() :
    MeiElement("repository"),
    m_Bibl(this),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Repository, "repository");
mei::Repository::~Repository() {}

/* include <repository> */

mei::Rest::Rest() :
    MeiElement("rest"),
    m_Common(this),
    m_Facsimile(this),
    m_Augmentdots(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Tupletpresent(this),
    m_Beamed(this),
    m_Altsym(this),
    m_Color(this),
    m_Relativesize(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_RestVisMensural(this),
    m_Lineloc(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_DurationRatio(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Rest, "rest");
mei::Rest::~Rest() {}

/* include <rest> */

mei::Role::Role() :
    MeiElement("role"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Role, "role");
mei::Role::~Role() {}

/* include <role> */

mei::Roledesc::Roledesc() :
    MeiElement("roleDesc"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Roledesc, "roleDesc");
mei::Roledesc::~Roledesc() {}

/* include <roleDesc> */

mei::Sb::Sb() :
    MeiElement("sb"),
    m_Common(this),
    m_Facsimile(this),
    m_Source(this),
    m_SbVis(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Sb, "sb");
mei::Sb::~Sb() {}

/* include <sb> */

mei::Score::Score() :
    MeiElement("score"),
    m_Common(this),
    m_Declaring(this),
    m_Typed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Score, "score");
mei::Score::~Score() {}

/* include <score> */

mei::Scoredef::Scoredef() :
    MeiElement("scoreDef"),
    m_Common(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeysigsLog(this),
    m_MetersLog(this),
    m_Octavedefault(this),
    m_Transposition(this),
    m_BeamingLog(this),
    m_MensurationLog(this),
    m_MensurLog(this),
    m_DurationRatio(this),
    m_ScoredefVis(this),
    m_Barplacement(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeysigsVis(this),
    m_Lyricstyle(this),
    m_MetersVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Textstyle(this),
    m_ScoredefVisCmn(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurationVis(this),
    m_ScoredefGes(this),
    m_Channelized(this),
    m_Timebase(this),
    m_Miditempo(this),
    m_Mmtempo(this)
{
}
REGISTER_DEFINITION(mei::Scoredef, "scoreDef");
mei::Scoredef::~Scoredef() {}

/* include <scoreDef> */

mei::Section::Section() :
    MeiElement("section"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Pointing(this),
    m_SectionVis(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Section, "section");
mei::Section::~Section() {}

/* include <section> */

mei::Space::Space() :
    MeiElement("space"),
    m_Common(this),
    m_Facsimile(this),
    m_Augmentdots(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Tupletpresent(this),
    m_Beamed(this),
    m_SpaceVis(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Space, "space");
mei::Space::~Space() {}

/* include <space> */

mei::Stack::Stack() :
    MeiElement("stack"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Stack, "stack");
mei::Stack::~Stack() {}

MeiAttribute* mei::Stack::getDelim() {
    if (!hasAttribute("delim")) {
        throw AttributeNotFoundException("delim");
    }
    return getAttribute("delim");
};

void mei::Stack::setDelim(std::string _delim) {
    if (!hasAttribute("delim")) {
        MeiAttribute *a = new MeiAttribute("delim", _delim);
        addAttribute(a);
    }
};

bool mei::Stack::hasDelim() {
    return hasAttribute("delim");
};

void mei::Stack::removeDelim() {
    removeAttribute("delim");
};
MeiAttribute* mei::Stack::getAlign() {
    if (!hasAttribute("align")) {
        throw AttributeNotFoundException("align");
    }
    return getAttribute("align");
};

void mei::Stack::setAlign(std::string _align) {
    if (!hasAttribute("align")) {
        MeiAttribute *a = new MeiAttribute("align", _align);
        addAttribute(a);
    }
};

bool mei::Stack::hasAlign() {
    return hasAttribute("align");
};

void mei::Stack::removeAlign() {
    removeAttribute("align");
};
/* include <stack> */

mei::Staff::Staff() :
    MeiElement("staff"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Meterconformance(this),
    m_Visibility(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Staff, "staff");
mei::Staff::~Staff() {}

/* include <staff> */

mei::Staffdef::Staffdef() :
    MeiElement("staffDef"),
    m_Common(this),
    m_Declaring(this),
    m_CleffingLog(this),
    m_DurationDefault(this),
    m_KeysigsLog(this),
    m_MetersLog(this),
    m_Octavedefault(this),
    m_Transposition(this),
    m_BeamingLog(this),
    m_StaffdefLogMensural(this),
    m_MensurationLog(this),
    m_MensurLog(this),
    m_DurationRatio(this),
    m_StaffdefVis(this),
    m_CleffingVis(this),
    m_Distances(this),
    m_KeysigsVis(this),
    m_LabelsAddl(this),
    m_Lyricstyle(this),
    m_MetersVis(this),
    m_Multinummeasures(this),
    m_Onelinestaff(this),
    m_Scalable(this),
    m_Textstyle(this),
    m_Visibility(this),
    m_BeamingVis(this),
    m_Pianopedals(this),
    m_Rehearsal(this),
    m_Slurrend(this),
    m_Tierend(this),
    m_MensurationVis(this),
    m_Instrumentident(this),
    m_Timebase(this),
    m_StaffdefGesTablature(this)
{
}
REGISTER_DEFINITION(mei::Staffdef, "staffDef");
mei::Staffdef::~Staffdef() {}

/* include <staffDef> */

mei::Staffgrp::Staffgrp() :
    MeiElement("staffGrp"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_StaffgrpVis(this),
    m_LabelsAddl(this),
    m_Staffgroupingsym(this),
    m_Visibility(this),
    m_Instrumentident(this)
{
}
REGISTER_DEFINITION(mei::Staffgrp, "staffGrp");
mei::Staffgrp::~Staffgrp() {}

/* include <staffGrp> */

mei::Syl::Syl() :
    MeiElement("syl"),
    m_Common(this),
    m_Facsimile(this),
    m_SylLog(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Horizontalalign(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Syl, "syl");
mei::Syl::~Syl() {}

/* include <syl> */

mei::Tempo::Tempo() :
    MeiElement("tempo"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startid(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_Miditempo(this),
    m_Mmtempo(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Tempo, "tempo");
mei::Tempo::~Tempo() {}

/* include <tempo> */

mei::Title::Title() :
    MeiElement("title"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Title, "title");
mei::Title::~Title() {}

MeiAttribute* mei::Title::getLevel() {
    if (!hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return getAttribute("level");
};

void mei::Title::setLevel(std::string _level) {
    if (!hasAttribute("level")) {
        MeiAttribute *a = new MeiAttribute("level", _level);
        addAttribute(a);
    }
};

bool mei::Title::hasLevel() {
    return hasAttribute("level");
};

void mei::Title::removeLevel() {
    removeAttribute("level");
};
/* include <title> */

mei::Titlepage::Titlepage() :
    MeiElement("titlePage"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Titlepage, "titlePage");
mei::Titlepage::~Titlepage() {}

/* include <titlePage> */



