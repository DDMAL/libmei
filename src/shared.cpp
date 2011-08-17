

#include "shared.h"
using std::string;


Abbr::Abbr() : m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Lang(this), m_Handident(this), m_Sequence(this), m_Typed(this) {
    m_Base.setName("abbr");
};


string Abbr::getExpanValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("expan")) {
        throw AttributeNotFoundException("expan");
    }
    return m_Base.getAttributeValue("expan");
};

MeiAttribute* Abbr::getExpan() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("expan")) {
        throw AttributeNotFoundException("expan");
    }
    return m_Base.getAttribute("expan");
};

void Abbr::setExpan(std::string _expan) {
    if (!m_Base.hasAttribute("expan")) {
        MeiAttribute *a = new MeiAttribute("expan", _expan);
        m_Base.addAttribute(a);
    }
};

bool Abbr::hasExpan() {
    return m_Base.hasAttribute("expan");
};

void Abbr::removeExpan() {
    m_Base.removeAttribute("expan");
};


Accid::Accid() : m_Common(this), m_Facsimile(this), m_Typography(this), m_AccidLog(this), m_Accidental(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Staffloc(this), m_AccidVis(this), m_Color(this), m_VisualoffsetHo(this), m_VisualoffsetVo(this), m_Xy(this), m_Enclosingchars(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("accid");
};



Actor::Actor() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("actor");
};



Addrline::Addrline() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("addrLine");
};



Address::Address() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("address");
};



Annot::Annot() : m_Bibl(this), m_Common(this), m_Facsimile(this), m_Lang(this), m_Source(this), m_Typed(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this), m_LinkCommon(this), m_Participantident(this), m_LinkExternal(this), m_Responsibility(this) {
    m_Base.setName("annot");
};



Artic::Artic() : m_Common(this), m_Facsimile(this), m_Typography(this), m_Articulation(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Staffloc(this), m_Color(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_Enclosingchars(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("artic");
};



Barline::Barline() : m_Common(this), m_Facsimile(this), m_LinkCommon(this), m_Participantident(this), m_LinkExternal(this), m_BarlineLog(this), m_MeterconformanceBar(this), m_Barplacement(this), m_Color(this), m_Measurement(this), m_Width(this), m_TimestampMusical(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("barLine");
};



Bibl::Bibl() : m_Common(this), m_Facsimile(this), m_Lang(this), m_LinkCommon(this), m_LinkExternal(this) {
    m_Base.setName("bibl");
};



Body::Body() : m_Common(this), m_Declaring(this) {
    m_Base.setName("body");
};



Caption::Caption() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("caption");
};



Castgrp::Castgrp() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("castGrp");
};



Castitem::Castitem() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("castItem");
};



Castlist::Castlist() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("castList");
};



Chord::Chord() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Articulation(this), m_Augmentdots(this), m_DurationMusical(this), m_Fermatapresent(this), m_Syltext(this), m_Slurpresent(this), m_Tiepresent(this), m_Tupletpresent(this), m_Beamed(this), m_Lvpresent(this), m_ChordVis(this), m_Altsym(this), m_Color(this), m_Relativesize(this), m_Stemmed(this), m_StemmedCmn(this), m_Visibility(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_Xy(this), m_Beamsecondary(this), m_ArticulationPerformed(this), m_DurationPerformed(this), m_Instrumentident(this), m_Graced(this), m_CommonAnl(this), m_Alignment(this), m_Melodicfunction(this) {
    m_Base.setName("chord");
};



Clef::Clef() : m_Common(this), m_Facsimile(this), m_CommonAnl(this), m_Alignment(this), m_Clefshape(this), m_Lineloc(this), m_Octave(this), m_Octavedisplacement(this), m_Altsym(this), m_Color(this) {
    m_Base.setName("clef");
};



Clefchange::Clefchange() : m_Common(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Facsimile(this), m_Clefshape(this), m_Lineloc(this), m_Octave(this), m_Octavedisplacement(this), m_Altsym(this), m_Color(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("clefChange");
};



Custos::Custos() : m_Common(this), m_Facsimile(this), m_Source(this), m_CustosLog(this), m_Pitch(this), m_Octave(this), m_Altsym(this), m_Color(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("custos");
};



Date::Date() : m_Bibl(this), m_Calendared(this), m_Common(this), m_Datable(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("date");
};


string Date::getRegValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return m_Base.getAttributeValue("reg");
};

MeiAttribute* Date::getReg() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return m_Base.getAttribute("reg");
};

void Date::setReg(std::string _reg) {
    if (!m_Base.hasAttribute("reg")) {
        MeiAttribute *a = new MeiAttribute("reg", _reg);
        m_Base.addAttribute(a);
    }
};

bool Date::hasReg() {
    return m_Base.hasAttribute("reg");
};

void Date::removeReg() {
    m_Base.removeAttribute("reg");
};


Dir::Dir() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Typed(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("dir");
};



Dot::Dot() : m_Common(this), m_Facsimile(this), m_DotLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Staffloc(this), m_Color(this), m_VisualoffsetHo(this), m_VisualoffsetVo(this), m_Xy(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("dot");
};



Dynam::Dynam() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), m_DurationPerformed(this), m_Midivalue(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("dynam");
};



Edition::Edition() : m_Common(this), m_Bibl(this) {
    m_Base.setName("edition");
};



Ending::Ending() : m_Common(this), m_Facsimile(this), m_Typed(this), m_LinkCommon(this), m_LinkExternal(this), m_Participantident(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("ending");
};



Expan::Expan() : m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Lang(this), m_Handident(this), m_Sequence(this), m_Typed(this) {
    m_Base.setName("expan");
};


string Expan::getAbbrValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("abbr")) {
        throw AttributeNotFoundException("abbr");
    }
    return m_Base.getAttributeValue("abbr");
};

MeiAttribute* Expan::getAbbr() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("abbr")) {
        throw AttributeNotFoundException("abbr");
    }
    return m_Base.getAttribute("abbr");
};

void Expan::setAbbr(std::string _abbr) {
    if (!m_Base.hasAttribute("abbr")) {
        MeiAttribute *a = new MeiAttribute("abbr", _abbr);
        m_Base.addAttribute(a);
    }
};

bool Expan::hasAbbr() {
    return m_Base.hasAttribute("abbr");
};

void Expan::removeAbbr() {
    m_Base.removeAttribute("abbr");
};


Expansion::Expansion() : m_Common(this), m_Source(this), m_Typed(this), m_Participantident(this) {
    m_Base.setName("expansion");
};



Fw::Fw() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Typed(this) {
    m_Base.setName("fw");
};



Group::Group() : m_Common(this), m_Declaring(this) {
    m_Base.setName("group");
};



Grpsym::Grpsym() : m_Common(this), m_Facsimile(this), m_Staffgroupingsym(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("grpSym");
};



Identifier::Identifier() : m_Bibl(this), m_Common(this), m_Facsimile(this), m_Typed(this) {
    m_Base.setName("identifier");
};



Incip::Incip() : m_Common(this), m_Bibl(this), m_Typed(this) {
    m_Base.setName("incip");
};



Instrdef::Instrdef() : m_Common(this), m_Channelized(this), m_Midiinstrument(this) {
    m_Base.setName("instrDef");
};



Instrgrp::Instrgrp() : m_Common(this) {
    m_Base.setName("instrGrp");
};



Keyaccid::Keyaccid() : m_Accidental(this), m_Common(this), m_Enclosingchars(this), m_Facsimile(this), m_Pitch(this), m_Octave(this), m_Staffloc(this), m_Xy(this) {
    m_Base.setName("keyAccid");
};


string Keyaccid::getFormValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};

MeiAttribute* Keyaccid::getForm() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};

void Keyaccid::setForm(std::string _form) {
    if (!m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};

bool Keyaccid::hasForm() {
    return m_Base.hasAttribute("form");
};

void Keyaccid::removeForm() {
    m_Base.removeAttribute("form");
};


Keysig::Keysig() : m_Common(this), m_Facsimile(this), m_Accidental(this), m_Pitch(this) {
    m_Base.setName("keySig");
};


string Keysig::getModeValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return m_Base.getAttributeValue("mode");
};

MeiAttribute* Keysig::getMode() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return m_Base.getAttribute("mode");
};

void Keysig::setMode(std::string _mode) {
    if (!m_Base.hasAttribute("mode")) {
        MeiAttribute *a = new MeiAttribute("mode", _mode);
        m_Base.addAttribute(a);
    }
};

bool Keysig::hasMode() {
    return m_Base.hasAttribute("mode");
};

void Keysig::removeMode() {
    m_Base.removeAttribute("mode");
};


Label::Label() : m_Common(this), m_Facsimile(this), m_Source(this), m_Typed(this) {
    m_Base.setName("label");
};



Layer::Layer() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Meterconformance(this), m_Visibility(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("layer");
};



Layerdef::Layerdef() : m_Common(this), m_Declaring(this), m_DurationDefault(this), m_Octavedefault(this), m_BeamingLog(this), m_LabelsAddl(this), m_BeamingVis(this), m_Textstyle(this), m_Visibility(this), m_Instrumentident(this) {
    m_Base.setName("layerDef");
};



Lb::Lb() : m_Common(this), m_Facsimile(this), m_Source(this), m_Typed(this) {
    m_Base.setName("lb");
};


string Lb::getFuncValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return m_Base.getAttributeValue("func");
};

MeiAttribute* Lb::getFunc() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return m_Base.getAttribute("func");
};

void Lb::setFunc(std::string _func) {
    if (!m_Base.hasAttribute("func")) {
        MeiAttribute *a = new MeiAttribute("func", _func);
        m_Base.addAttribute(a);
    }
};

bool Lb::hasFunc() {
    return m_Base.hasAttribute("func");
};

void Lb::removeFunc() {
    m_Base.removeAttribute("func");
};


Mdiv::Mdiv() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Typed(this) {
    m_Base.setName("mdiv");
};



Mei::Mei() : m_Meiversion(this) {
    m_Base.setName("mei");
};



Music::Music() : m_Common(this), m_Declaring(this), m_Meiversion(this) {
    m_Base.setName("music");
};



Name::Name() : m_Bibl(this), m_Common(this), m_Facsimile(this), m_Lang(this), m_Name(this), m_Authorized(this), m_Canonical(this), m_Typed(this) {
    m_Base.setName("name");
};



Note::Note() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Accidental(this), m_Articulation(this), m_Augmentdots(this), m_DurationMusical(this), m_Fermatapresent(this), m_Pitch(this), m_Octave(this), m_Syltext(this), m_Slurpresent(this), m_Tiepresent(this), m_Tupletpresent(this), m_Beamed(this), m_Lvpresent(this), m_NoteLogMensural(this), m_NoteVis(this), m_Altsym(this), m_Color(this), m_Coloration(this), m_Enclosingchars(this), m_Relativesize(this), m_Stemmed(this), m_StemmedCmn(this), m_Visibility(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_Xy(this), m_Beamsecondary(this), m_NoteGes(this), m_AccidentalPerformed(this), m_ArticulationPerformed(this), m_DurationPerformed(this), m_Instrumentident(this), m_NoteGesCmn(this), m_Graced(this), m_DurationRatio(this), m_NoteGesTablature(this), m_CommonAnl(this), m_Alignment(this), m_Harmonicfunction(this), m_Intervallicdesc(this), m_Intervalharmonic(this), m_Melodicfunction(this), m_Pitchclass(this), m_Solfa(this) {
    m_Base.setName("note");
};



Num::Num() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Measurement(this) {
    m_Base.setName("num");
};



P::P() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Lang(this), m_Xy(this) {
    m_Base.setName("p");
};



Pad::Pad() : m_Common(this), m_PadLog(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this) {
    m_Base.setName("pad");
};



Part::Part() : m_Common(this), m_Declaring(this), m_Typed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("part");
};



Parts::Parts() : m_Common(this), m_Declaring(this), m_Typed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("parts");
};



Pb::Pb() : m_Common(this), m_Facsimile(this), m_LinkCommon(this), m_LinkExternal(this), m_Source(this), m_CommonAnl(this), m_Alignment(this), m_PbVis(this) {
    m_Base.setName("pb");
};



Pgdesc::Pgdesc() : m_Common(this), m_Lang(this) {
    m_Base.setName("pgDesc");
};



Pgfoot::Pgfoot() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("pgFoot");
};



Pgfoot2::Pgfoot2() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("pgFoot2");
};



Pghead::Pghead() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("pgHead");
};



Pghead2::Pghead2() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("pgHead2");
};



Phrase::Phrase() : m_Common(this), m_Facsimile(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_Color(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Visualoffset2Vo(this), m_Xy(this), m_Xy2(this), m_Curvature(this), m_Curverend(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this), m_Joined(this) {
    m_Base.setName("phrase");
};



Rend::Rend() : m_Color(this), m_Common(this), m_Lang(this), m_Typography(this), m_Horizontalalign(this) {
    m_Base.setName("rend");
};


string Rend::getAltrendValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("altrend")) {
        throw AttributeNotFoundException("altrend");
    }
    return m_Base.getAttributeValue("altrend");
};

MeiAttribute* Rend::getAltrend() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("altrend")) {
        throw AttributeNotFoundException("altrend");
    }
    return m_Base.getAttribute("altrend");
};

void Rend::setAltrend(std::string _altrend) {
    if (!m_Base.hasAttribute("altrend")) {
        MeiAttribute *a = new MeiAttribute("altrend", _altrend);
        m_Base.addAttribute(a);
    }
};

bool Rend::hasAltrend() {
    return m_Base.hasAttribute("altrend");
};

void Rend::removeAltrend() {
    m_Base.removeAttribute("altrend");
};

string Rend::getRendValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttributeValue("rend");
};

MeiAttribute* Rend::getRend() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttribute("rend");
};

void Rend::setRend(std::string _rend) {
    if (!m_Base.hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        m_Base.addAttribute(a);
    }
};

bool Rend::hasRend() {
    return m_Base.hasAttribute("rend");
};

void Rend::removeRend() {
    m_Base.removeAttribute("rend");
};

string Rend::getRotationValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rotation")) {
        throw AttributeNotFoundException("rotation");
    }
    return m_Base.getAttributeValue("rotation");
};

MeiAttribute* Rend::getRotation() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rotation")) {
        throw AttributeNotFoundException("rotation");
    }
    return m_Base.getAttribute("rotation");
};

void Rend::setRotation(std::string _rotation) {
    if (!m_Base.hasAttribute("rotation")) {
        MeiAttribute *a = new MeiAttribute("rotation", _rotation);
        m_Base.addAttribute(a);
    }
};

bool Rend::hasRotation() {
    return m_Base.hasAttribute("rotation");
};

void Rend::removeRotation() {
    m_Base.removeAttribute("rotation");
};

string Rend::getValignValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("valign")) {
        throw AttributeNotFoundException("valign");
    }
    return m_Base.getAttributeValue("valign");
};

MeiAttribute* Rend::getValign() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("valign")) {
        throw AttributeNotFoundException("valign");
    }
    return m_Base.getAttribute("valign");
};

void Rend::setValign(std::string _valign) {
    if (!m_Base.hasAttribute("valign")) {
        MeiAttribute *a = new MeiAttribute("valign", _valign);
        m_Base.addAttribute(a);
    }
};

bool Rend::hasValign() {
    return m_Base.hasAttribute("valign");
};

void Rend::removeValign() {
    m_Base.removeAttribute("valign");
};


Repository::Repository() : m_Bibl(this), m_Common(this), m_Facsimile(this), m_Lang(this), m_Name(this), m_Authorized(this), m_Canonical(this), m_Typed(this) {
    m_Base.setName("repository");
};



Rest::Rest() : m_Common(this), m_Facsimile(this), m_Augmentdots(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_DurationMusical(this), m_Fermatapresent(this), m_Tupletpresent(this), m_Beamed(this), m_Altsym(this), m_Color(this), m_Relativesize(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_RestVisMensural(this), m_Lineloc(this), m_DurationPerformed(this), m_Instrumentident(this), m_DurationRatio(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("rest");
};



Role::Role() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("role");
};



Roledesc::Roledesc() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("roleDesc");
};



Sb::Sb() : m_Common(this), m_Facsimile(this), m_Source(this), m_SbVis(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("sb");
};



Score::Score() : m_Common(this), m_Declaring(this), m_Typed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("score");
};



Scoredef::Scoredef() : m_Common(this), m_CleffingLog(this), m_DurationDefault(this), m_KeysigsLog(this), m_MetersLog(this), m_Octavedefault(this), m_Transposition(this), m_BeamingLog(this), m_MensurationLog(this), m_MensurLog(this), m_DurationRatio(this), m_ScoredefVis(this), m_Barplacement(this), m_CleffingVis(this), m_Distances(this), m_KeysigsVis(this), m_Lyricstyle(this), m_MetersVis(this), m_Multinummeasures(this), m_Onelinestaff(this), m_Textstyle(this), m_ScoredefVisCmn(this), m_BeamingVis(this), m_Pianopedals(this), m_Rehearsal(this), m_Slurrend(this), m_Tierend(this), m_MensurationVis(this), m_ScoredefGes(this), m_Channelized(this), m_Timebase(this), m_Miditempo(this), m_Mmtempo(this) {
    m_Base.setName("scoreDef");
};



Section::Section() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Typed(this), m_LinkCommon(this), m_LinkExternal(this), m_Participantident(this), m_SectionVis(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("section");
};



Space::Space() : m_Common(this), m_Facsimile(this), m_Augmentdots(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_DurationMusical(this), m_Fermatapresent(this), m_Tupletpresent(this), m_Beamed(this), m_SpaceVis(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("space");
};



Stack::Stack() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("stack");
};


string Stack::getDelimValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("delim")) {
        throw AttributeNotFoundException("delim");
    }
    return m_Base.getAttributeValue("delim");
};

MeiAttribute* Stack::getDelim() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("delim")) {
        throw AttributeNotFoundException("delim");
    }
    return m_Base.getAttribute("delim");
};

void Stack::setDelim(std::string _delim) {
    if (!m_Base.hasAttribute("delim")) {
        MeiAttribute *a = new MeiAttribute("delim", _delim);
        m_Base.addAttribute(a);
    }
};

bool Stack::hasDelim() {
    return m_Base.hasAttribute("delim");
};

void Stack::removeDelim() {
    m_Base.removeAttribute("delim");
};

string Stack::getAlignValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("align")) {
        throw AttributeNotFoundException("align");
    }
    return m_Base.getAttributeValue("align");
};

MeiAttribute* Stack::getAlign() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("align")) {
        throw AttributeNotFoundException("align");
    }
    return m_Base.getAttribute("align");
};

void Stack::setAlign(std::string _align) {
    if (!m_Base.hasAttribute("align")) {
        MeiAttribute *a = new MeiAttribute("align", _align);
        m_Base.addAttribute(a);
    }
};

bool Stack::hasAlign() {
    return m_Base.hasAttribute("align");
};

void Stack::removeAlign() {
    m_Base.removeAttribute("align");
};


Staff::Staff() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Meterconformance(this), m_Visibility(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("staff");
};



Staffdef::Staffdef() : m_Common(this), m_Declaring(this), m_CleffingLog(this), m_DurationDefault(this), m_KeysigsLog(this), m_MetersLog(this), m_Octavedefault(this), m_Transposition(this), m_BeamingLog(this), m_StaffdefLogMensural(this), m_MensurationLog(this), m_MensurLog(this), m_DurationRatio(this), m_StaffdefVis(this), m_CleffingVis(this), m_Distances(this), m_KeysigsVis(this), m_LabelsAddl(this), m_Lyricstyle(this), m_MetersVis(this), m_Multinummeasures(this), m_Onelinestaff(this), m_Scalable(this), m_Textstyle(this), m_Visibility(this), m_BeamingVis(this), m_Pianopedals(this), m_Rehearsal(this), m_Slurrend(this), m_Tierend(this), m_MensurationVis(this), m_Instrumentident(this), m_Timebase(this), m_StaffdefGesTablature(this) {
    m_Base.setName("staffDef");
};



Staffgrp::Staffgrp() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_StaffgrpVis(this), m_LabelsAddl(this), m_Staffgroupingsym(this), m_Visibility(this), m_Instrumentident(this) {
    m_Base.setName("staffGrp");
};



Syl::Syl() : m_Common(this), m_Facsimile(this), m_SylLog(this), m_Typography(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_Horizontalalign(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("syl");
};



Tempo::Tempo() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startid(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), m_Miditempo(this), m_Mmtempo(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("tempo");
};



Title::Title() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Name(this), m_Authorized(this), m_Canonical(this), m_Typed(this) {
    m_Base.setName("title");
};


string Title::getLevelValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return m_Base.getAttributeValue("level");
};

MeiAttribute* Title::getLevel() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return m_Base.getAttribute("level");
};

void Title::setLevel(std::string _level) {
    if (!m_Base.hasAttribute("level")) {
        MeiAttribute *a = new MeiAttribute("level", _level);
        m_Base.addAttribute(a);
    }
};

bool Title::hasLevel() {
    return m_Base.hasAttribute("level");
};

void Title::removeLevel() {
    m_Base.removeAttribute("level");
};


Titlepage::Titlepage() : m_Common(this), m_Facsimile(this), m_Lang(this) {
    m_Base.setName("titlePage");
};




