#include "shared.h"
using namespace std;

Abbr::Abbr() : m_Common(this), m_Lang(this), m_Typed(this), m_Edit(this), m_Trans(this), m_Facsimile(this)
{
    m_Base.setName("abbr");
};
//REGISTER_DEFINITION(Abbr, "abbr");

string Abbr::getExpanValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("expan")) {
        throw AttributeNotFoundException("expan");
    }
    return m_Base.getAttributeValue("expan");
};
            
MeiAttribute* Abbr::getExpan() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("expan")) {
        throw AttributeNotFoundException("expan");
    }
    return m_Base.getAttribute("expan");
};
            
void Abbr::setExpan(string _expan) {
    if(!m_Base.hasAttribute("expan")) {
        MeiAttribute * a = new MeiAttribute("expan", _expan);
        m_Base.addAttribute(a);
    }
};
            
bool Abbr::hasExpan() {
    return m_Base.hasAttribute("expan");
};
            
Accid::Accid() : m_Color(this), m_Common(this), m_Enclosingchars(this), m_Staffloc(this), m_Typography(this), 
m_VisualoffsetHo(this), m_VisualoffsetVo(this), m_Xy(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("accid");
};
//REGISTER_DEFINITION(Accid, "accid");

string Accid::getFuncValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return m_Base.getAttributeValue("func");
};
            
MeiAttribute* Accid::getFunc() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return m_Base.getAttribute("func");
};
            
void Accid::setFunc(string _func) {
    if(!m_Base.hasAttribute("func")) {
        MeiAttribute * a = new MeiAttribute("func", _func);
        m_Base.addAttribute(a);
    }
};
            
bool Accid::hasFunc() {
    return m_Base.hasAttribute("func");
};
            
string Accid::getPlaceValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return m_Base.getAttributeValue("place");
};
            
MeiAttribute* Accid::getPlace() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return m_Base.getAttribute("place");
};
            
void Accid::setPlace(string _place) {
    if(!m_Base.hasAttribute("place")) {
        MeiAttribute * a = new MeiAttribute("place", _place);
        m_Base.addAttribute(a);
    }
};
            
bool Accid::hasPlace() {
    return m_Base.hasAttribute("place");
};
            
Actor::Actor() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("actor");
};
//REGISTER_DEFINITION(Actor, "actor");

Address::Address() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("address");
};
//REGISTER_DEFINITION(Address, "address");

AddrLine::AddrLine() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("addrLine");
};
//REGISTER_DEFINITION(AddrLine, "addrLine");

Annot::Annot() : m_Bibl(this), m_Common(this), m_DurationPerformed(this), m_DurationTimestamp(this), 
m_Lang(this), m_Layerident(this), m_LinkCommon(this), m_LinkExternal(this), m_Responsibility(this), 
m_Staffident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Typed(this), 
m_LinkInternal(this), m_Startendid(this), m_Event(this), m_Controlevent(this), m_TupletAnl(this), 
m_TupletGes(this), m_CommonAnl(this), m_Crit(this), m_Source(this), m_RdgAnl(this), 
m_Edit(this), m_Facsimile(this), m_MidiEvent(this){
    m_Base.setName("annot");
};
//REGISTER_DEFINITION(Annot, "annot");

Artic::Artic() : m_Color(this), m_Common(this), m_Enclosingchars(this), m_Placement(this), m_Staffloc(this), 
m_Typography(this), m_Xy(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("artic");
};
//REGISTER_DEFINITION(Artic, "artic");

BarLine::BarLine() : m_Barplacement(this), m_Color(this), m_Common(this), m_LinkCommon(this), m_LinkExternal(this), 
m_Measurement(this), m_Width(this), m_MeterconformanceBar(this), m_TimestampMusical(this), 
m_LinkInternal(this), m_Event(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this), m_MidiEvent(this){
    m_Base.setName("barLine");
};
//REGISTER_DEFINITION(BarLine, "barLine");

string BarLine::getRendValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttributeValue("rend");
};
            
MeiAttribute* BarLine::getRend() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttribute("rend");
};
            
void BarLine::setRend(string _rend) {
    if(!m_Base.hasAttribute("rend")) {
        MeiAttribute * a = new MeiAttribute("rend", _rend);
        m_Base.addAttribute(a);
    }
};
            
bool BarLine::hasRend() {
    return m_Base.hasAttribute("rend");
};
            
Bibl::Bibl() : m_Common(this), m_Lang(this), m_LinkCommon(this), m_LinkExternal(this), m_Facsimile(this)
{
    m_Base.setName("bibl");
};
//REGISTER_DEFINITION(Bibl, "bibl");

Body::Body() : m_Common(this), m_Declaring(this){
    m_Base.setName("body");
};
//REGISTER_DEFINITION(Body, "body");

Caption::Caption() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("caption");
};
//REGISTER_DEFINITION(Caption, "caption");

CastList::CastList() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("castList");
};
//REGISTER_DEFINITION(CastList, "castList");

CastItem::CastItem() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("castItem");
};
//REGISTER_DEFINITION(CastItem, "castItem");

CastGrp::CastGrp() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("castGrp");
};
//REGISTER_DEFINITION(CastGrp, "castGrp");

Chord::Chord() : m_Altsym(this), m_ArticulationPerformed(this), m_Augmentdots(this), m_Color(this), 
m_Common(this), m_DurationMusical(this), m_DurationPerformed(this), m_Fermatapresent(this), 
m_Instrumentident(this), m_Relativesize(this), m_Stemmed(this), m_Syltext(this), 
m_Tupletpresent(this), m_Visibility(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), 
m_Xy(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), m_Visualoffset(this), 
m_Event(this), m_Beamed(this), m_Beamsecondary(this), m_Graced(this), m_Lvpresent(this), 
m_TupletAnl(this), m_TupletGes(this), m_CommonAnl(this), m_Melodicfunction(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("chord");
};
//REGISTER_DEFINITION(Chord, "chord");

string Chord::getClusterValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("cluster")) {
        throw AttributeNotFoundException("cluster");
    }
    return m_Base.getAttributeValue("cluster");
};
            
MeiAttribute* Chord::getCluster() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("cluster")) {
        throw AttributeNotFoundException("cluster");
    }
    return m_Base.getAttribute("cluster");
};
            
void Chord::setCluster(string _cluster) {
    if(!m_Base.hasAttribute("cluster")) {
        MeiAttribute * a = new MeiAttribute("cluster", _cluster);
        m_Base.addAttribute(a);
    }
};
            
bool Chord::hasCluster() {
    return m_Base.hasAttribute("cluster");
};
            
Clef::Clef() : m_Altsym(this), m_Clefshape(this), m_Color(this), m_Common(this), m_Lineloc(this), 
m_Octave(this), m_Octavedisplacement(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("clef");
};
//REGISTER_DEFINITION(Clef, "clef");

ClefChange::ClefChange() : m_Altsym(this), m_Clefshape(this), m_Color(this), m_Common(this), m_Lineloc(this), 
m_Octave(this), m_Octavedisplacement(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_Event(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("clefChange");
};
//REGISTER_DEFINITION(ClefChange, "clefChange");

Custos::Custos() : m_Altsym(this), m_Color(this), m_Common(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_TupletAnl(this), m_CommonAnl(this), m_Crit(this), m_Source(this), m_RdgAnl(this), 
m_Edit(this), m_Facsimile(this){
    m_Base.setName("custos");
};
//REGISTER_DEFINITION(Custos, "custos");

string Custos::getTargetValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return m_Base.getAttributeValue("target");
};
            
MeiAttribute* Custos::getTarget() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return m_Base.getAttribute("target");
};
            
void Custos::setTarget(string _target) {
    if(!m_Base.hasAttribute("target")) {
        MeiAttribute * a = new MeiAttribute("target", _target);
        m_Base.addAttribute(a);
    }
};
            
bool Custos::hasTarget() {
    return m_Base.hasAttribute("target");
};
            
Date::Date() : m_Bibl(this), m_Calendared(this), m_Common(this), m_Datable(this), m_Lang(this), 
m_Edit(this), m_Facsimile(this){
    m_Base.setName("date");
};
//REGISTER_DEFINITION(Date, "date");

string Date::getRegValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return m_Base.getAttributeValue("reg");
};
            
MeiAttribute* Date::getReg() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return m_Base.getAttribute("reg");
};
            
void Date::setReg(string _reg) {
    if(!m_Base.hasAttribute("reg")) {
        MeiAttribute * a = new MeiAttribute("reg", _reg);
        m_Base.addAttribute(a);
    }
};
            
bool Date::hasReg() {
    return m_Base.hasAttribute("reg");
};
            
Dir::Dir() : m_Common(this), m_DurationPerformed(this), m_DurationTimestamp(this), m_Lang(this), 
m_Placement(this), m_Typed(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), 
m_Xy(this), m_Startendid(this), m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), 
m_TupletAnl(this), m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("dir");
};
//REGISTER_DEFINITION(Dir, "dir");

Dot::Dot() : m_Color(this), m_Common(this), m_Staffloc(this), m_VisualoffsetHo(this), m_VisualoffsetVo(this), 
m_Xy(this), m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("dot");
};
//REGISTER_DEFINITION(Dot, "dot");

string Dot::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* Dot::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void Dot::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool Dot::hasForm() {
    return m_Base.hasAttribute("form");
};
            
Dynam::Dynam() : m_Common(this), m_DurationPerformed(this), m_DurationTimestamp(this), m_Lang(this), 
m_Placement(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), 
m_Startendid(this), m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), 
m_TupletAnl(this), m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this), 
m_Midivalue(this){
    m_Base.setName("dynam");
};
//REGISTER_DEFINITION(Dynam, "dynam");

Edition::Edition() : m_Bibl(this), m_Common(this){
    m_Base.setName("edition");
};
//REGISTER_DEFINITION(Edition, "edition");

Ending::Ending() : m_Common(this), m_LinkCommon(this), m_LinkExternal(this), m_Typed(this), m_LinkInternal(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("ending");
};
//REGISTER_DEFINITION(Ending, "ending");

Expan::Expan() : m_Common(this), m_Lang(this), m_Typed(this), m_Edit(this), m_Trans(this), m_Facsimile(this)
{
    m_Base.setName("expan");
};
//REGISTER_DEFINITION(Expan, "expan");

string Expan::getAbbrValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("abbr")) {
        throw AttributeNotFoundException("abbr");
    }
    return m_Base.getAttributeValue("abbr");
};
            
MeiAttribute* Expan::getAbbr() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("abbr")) {
        throw AttributeNotFoundException("abbr");
    }
    return m_Base.getAttribute("abbr");
};
            
void Expan::setAbbr(string _abbr) {
    if(!m_Base.hasAttribute("abbr")) {
        MeiAttribute * a = new MeiAttribute("abbr", _abbr);
        m_Base.addAttribute(a);
    }
};
            
bool Expan::hasAbbr() {
    return m_Base.hasAttribute("abbr");
};
            
Expansion::Expansion() : m_Common(this), m_Participantident(this), m_Typed(this), m_LinkInternal(this), m_Controlevent(this), 
m_Crit(this), m_Source(this), m_Edit(this){
    m_Base.setName("expansion");
};
//REGISTER_DEFINITION(Expansion, "expansion");

Fw::Fw() : m_Common(this), m_Lang(this), m_Typed(this), m_Facsimile(this){
    m_Base.setName("fw");
};
//REGISTER_DEFINITION(Fw, "fw");

Group::Group() : m_Common(this), m_Declaring(this){
    m_Base.setName("group");
};
//REGISTER_DEFINITION(Group, "group");

GrpSym::GrpSym() : m_Common(this), m_Staffgroupingsym(this), m_Xy(this), m_Visualoffset(this), m_TupletAnl(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("grpSym");
};
//REGISTER_DEFINITION(GrpSym, "grpSym");

Identifier::Identifier() : m_Bibl(this), m_Common(this), m_Typed(this), m_Facsimile(this){
    m_Base.setName("identifier");
};
//REGISTER_DEFINITION(Identifier, "identifier");

Incip::Incip() : m_Bibl(this), m_Common(this), m_Typed(this){
    m_Base.setName("incip");
};
//REGISTER_DEFINITION(Incip, "incip");

InstrGrp::InstrGrp() : m_Common(this){
    m_Base.setName("instrGrp");
};
//REGISTER_DEFINITION(InstrGrp, "instrGrp");

InstrDef::InstrDef() : m_Common(this), m_Channelized(this){
    m_Base.setName("instrDef");
};
//REGISTER_DEFINITION(InstrDef, "instrDef");

string InstrDef::getMidiInstrnumValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("midi.instrnum")) {
        throw AttributeNotFoundException("midi.instrnum");
    }
    return m_Base.getAttributeValue("midi.instrnum");
};
            
MeiAttribute* InstrDef::getMidiInstrnum() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("midi.instrnum")) {
        throw AttributeNotFoundException("midi.instrnum");
    }
    return m_Base.getAttribute("midi.instrnum");
};
            
void InstrDef::setMidiInstrnum(string _midiinstrnum) {
    if(!m_Base.hasAttribute("midi.instrnum")) {
        MeiAttribute * a = new MeiAttribute("midi.instrnum", _midiinstrnum);
        m_Base.addAttribute(a);
    }
};
            
bool InstrDef::hasMidiInstrnum() {
    return m_Base.hasAttribute("midi.instrnum");
};
            
string InstrDef::getMidiInstrnameValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("midi.instrname")) {
        throw AttributeNotFoundException("midi.instrname");
    }
    return m_Base.getAttributeValue("midi.instrname");
};
            
MeiAttribute* InstrDef::getMidiInstrname() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("midi.instrname")) {
        throw AttributeNotFoundException("midi.instrname");
    }
    return m_Base.getAttribute("midi.instrname");
};
            
void InstrDef::setMidiInstrname(string _midiinstrname) {
    if(!m_Base.hasAttribute("midi.instrname")) {
        MeiAttribute * a = new MeiAttribute("midi.instrname", _midiinstrname);
        m_Base.addAttribute(a);
    }
};
            
bool InstrDef::hasMidiInstrname() {
    return m_Base.hasAttribute("midi.instrname");
};
            
KeyAccid::KeyAccid() : m_Common(this), m_Enclosingchars(this), m_Staffloc(this), m_Xy(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_Facsimile(this){
    m_Base.setName("keyAccid");
};
//REGISTER_DEFINITION(KeyAccid, "keyAccid");

string KeyAccid::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* KeyAccid::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void KeyAccid::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool KeyAccid::hasForm() {
    return m_Base.hasAttribute("form");
};
            
KeySig::KeySig() : m_Common(this), m_Pitch(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_Facsimile(this){
    m_Base.setName("keySig");
};
//REGISTER_DEFINITION(KeySig, "keySig");

string KeySig::getModeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return m_Base.getAttributeValue("mode");
};
            
MeiAttribute* KeySig::getMode() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return m_Base.getAttribute("mode");
};
            
void KeySig::setMode(string _mode) {
    if(!m_Base.hasAttribute("mode")) {
        MeiAttribute * a = new MeiAttribute("mode", _mode);
        m_Base.addAttribute(a);
    }
};
            
bool KeySig::hasMode() {
    return m_Base.hasAttribute("mode");
};
            
Label::Label() : m_Common(this), m_Typed(this), m_Crit(this), m_Source(this), m_Edit(this), m_Facsimile(this)
{
    m_Base.setName("label");
};
//REGISTER_DEFINITION(Label, "label");

Layer::Layer() : m_Common(this), m_Declaring(this), m_Meterconformance(this), m_Visibility(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("layer");
};
//REGISTER_DEFINITION(Layer, "layer");

LayerDef::LayerDef() : m_BeamingVis(this), m_Common(this), m_Declaring(this), m_DurationDefault(this), 
m_Instrumentident(this), m_LabelsAddl(this), m_Octavedefault(this), m_Textstyle(this), 
m_Visibility(this), m_BeamingLog(this){
    m_Base.setName("layerDef");
};
//REGISTER_DEFINITION(LayerDef, "layerDef");

Lb::Lb() : m_Common(this), m_Typed(this), m_Crit(this), m_Source(this), m_Edit(this), m_Facsimile(this)
{
    m_Base.setName("lb");
};
//REGISTER_DEFINITION(Lb, "lb");

string Lb::getFuncValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return m_Base.getAttributeValue("func");
};
            
MeiAttribute* Lb::getFunc() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return m_Base.getAttribute("func");
};
            
void Lb::setFunc(string _func) {
    if(!m_Base.hasAttribute("func")) {
        MeiAttribute * a = new MeiAttribute("func", _func);
        m_Base.addAttribute(a);
    }
};
            
bool Lb::hasFunc() {
    return m_Base.hasAttribute("func");
};
            
Mdiv::Mdiv() : m_Common(this), m_Declaring(this), m_Typed(this), m_Facsimile(this){
    m_Base.setName("mdiv");
};
//REGISTER_DEFINITION(Mdiv, "mdiv");

Mei::Mei() : m_Meiversion(this){
    m_Base.setName("mei");
};
//REGISTER_DEFINITION(Mei, "mei");

string Mei::getXmlidValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("xml:id")) {
        throw AttributeNotFoundException("xml:id");
    }
    return m_Base.getAttributeValue("xml:id");
};
            
MeiAttribute* Mei::getXmlid() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("xml:id")) {
        throw AttributeNotFoundException("xml:id");
    }
    return m_Base.getAttribute("xml:id");
};
            
void Mei::setXmlid(string _xmlid) {
    if(!m_Base.hasAttribute("xml:id")) {
        MeiAttribute * a = new MeiAttribute("xml:id", _xmlid);
        m_Base.addAttribute(a);
    }
};
            
bool Mei::hasXmlid() {
    return m_Base.hasAttribute("xml:id");
};
            
Music::Music() : m_Common(this), m_Declaring(this), m_Meiversion(this){
    m_Base.setName("music");
};
//REGISTER_DEFINITION(Music, "music");

Name::Name() : m_Bibl(this), m_Common(this), m_Lang(this), m_Typed(this), m_Name(this), m_Facsimile(this)
{
    m_Base.setName("name");
};
//REGISTER_DEFINITION(Name, "name");

Note::Note() : m_AccidentalPerformed(this), m_Altsym(this), m_ArticulationPerformed(this), m_Augmentdots(this), 
m_Color(this), m_Common(this), m_DurationMusical(this), m_DurationPerformed(this), 
m_DurationRatio(this), m_Enclosingchars(this), m_Fermatapresent(this), m_Instrumentident(this), 
m_Relativesize(this), m_Stemmed(this), m_Syltext(this), m_Tupletpresent(this), m_Visibility(this), 
m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_Xy(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this), 
m_Visualoffset(this), m_Event(this), m_Beamed(this), m_Beamsecondary(this), m_Graced(this), 
m_Lvpresent(this), m_TupletAnl(this), m_TupletGes(this), m_MensurLog(this), m_MensurationLog(this), 
m_CommonAnl(this), m_Harmonicfunction(this), m_Intervallicdesc(this), m_Melodicfunction(this), 
m_Solfa(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("note");
};
//REGISTER_DEFINITION(Note, "note");

string Note::getOctGesValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("oct.ges")) {
        throw AttributeNotFoundException("oct.ges");
    }
    return m_Base.getAttributeValue("oct.ges");
};
            
MeiAttribute* Note::getOctGes() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("oct.ges")) {
        throw AttributeNotFoundException("oct.ges");
    }
    return m_Base.getAttribute("oct.ges");
};
            
void Note::setOctGes(string _octges) {
    if(!m_Base.hasAttribute("oct.ges")) {
        MeiAttribute * a = new MeiAttribute("oct.ges", _octges);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasOctGes() {
    return m_Base.hasAttribute("oct.ges");
};
            
string Note::getPnameGesValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pname.ges")) {
        throw AttributeNotFoundException("pname.ges");
    }
    return m_Base.getAttributeValue("pname.ges");
};
            
MeiAttribute* Note::getPnameGes() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pname.ges")) {
        throw AttributeNotFoundException("pname.ges");
    }
    return m_Base.getAttribute("pname.ges");
};
            
void Note::setPnameGes(string _pnameges) {
    if(!m_Base.hasAttribute("pname.ges")) {
        MeiAttribute * a = new MeiAttribute("pname.ges", _pnameges);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasPnameGes() {
    return m_Base.hasAttribute("pname.ges");
};
            
string Note::getPnumValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pnum")) {
        throw AttributeNotFoundException("pnum");
    }
    return m_Base.getAttributeValue("pnum");
};
            
MeiAttribute* Note::getPnum() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pnum")) {
        throw AttributeNotFoundException("pnum");
    }
    return m_Base.getAttribute("pnum");
};
            
void Note::setPnum(string _pnum) {
    if(!m_Base.hasAttribute("pnum")) {
        MeiAttribute * a = new MeiAttribute("pnum", _pnum);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasPnum() {
    return m_Base.hasAttribute("pnum");
};
            
string Note::getHeadshapeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("headshape")) {
        throw AttributeNotFoundException("headshape");
    }
    return m_Base.getAttributeValue("headshape");
};
            
MeiAttribute* Note::getHeadshape() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("headshape")) {
        throw AttributeNotFoundException("headshape");
    }
    return m_Base.getAttribute("headshape");
};
            
void Note::setHeadshape(string _headshape) {
    if(!m_Base.hasAttribute("headshape")) {
        MeiAttribute * a = new MeiAttribute("headshape", _headshape);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasHeadshape() {
    return m_Base.hasAttribute("headshape");
};
            
string Note::getColoredValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("colored")) {
        throw AttributeNotFoundException("colored");
    }
    return m_Base.getAttributeValue("colored");
};
            
MeiAttribute* Note::getColored() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("colored")) {
        throw AttributeNotFoundException("colored");
    }
    return m_Base.getAttribute("colored");
};
            
void Note::setColored(string _colored) {
    if(!m_Base.hasAttribute("colored")) {
        MeiAttribute * a = new MeiAttribute("colored", _colored);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasColored() {
    return m_Base.hasAttribute("colored");
};
            
string Note::getGlissValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("gliss")) {
        throw AttributeNotFoundException("gliss");
    }
    return m_Base.getAttributeValue("gliss");
};
            
MeiAttribute* Note::getGliss() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("gliss")) {
        throw AttributeNotFoundException("gliss");
    }
    return m_Base.getAttribute("gliss");
};
            
void Note::setGliss(string _gliss) {
    if(!m_Base.hasAttribute("gliss")) {
        MeiAttribute * a = new MeiAttribute("gliss", _gliss);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasGliss() {
    return m_Base.hasAttribute("gliss");
};
            
string Note::getLigValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("lig")) {
        throw AttributeNotFoundException("lig");
    }
    return m_Base.getAttributeValue("lig");
};
            
MeiAttribute* Note::getLig() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("lig")) {
        throw AttributeNotFoundException("lig");
    }
    return m_Base.getAttribute("lig");
};
            
void Note::setLig(string _lig) {
    if(!m_Base.hasAttribute("lig")) {
        MeiAttribute * a = new MeiAttribute("lig", _lig);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasLig() {
    return m_Base.hasAttribute("lig");
};
            
string Note::getPclassValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pclass")) {
        throw AttributeNotFoundException("pclass");
    }
    return m_Base.getAttributeValue("pclass");
};
            
MeiAttribute* Note::getPclass() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pclass")) {
        throw AttributeNotFoundException("pclass");
    }
    return m_Base.getAttribute("pclass");
};
            
void Note::setPclass(string _pclass) {
    if(!m_Base.hasAttribute("pclass")) {
        MeiAttribute * a = new MeiAttribute("pclass", _pclass);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasPclass() {
    return m_Base.hasAttribute("pclass");
};
            
string Note::getTabFretValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tab.fret")) {
        throw AttributeNotFoundException("tab.fret");
    }
    return m_Base.getAttributeValue("tab.fret");
};
            
MeiAttribute* Note::getTabFret() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tab.fret")) {
        throw AttributeNotFoundException("tab.fret");
    }
    return m_Base.getAttribute("tab.fret");
};
            
void Note::setTabFret(string _tabfret) {
    if(!m_Base.hasAttribute("tab.fret")) {
        MeiAttribute * a = new MeiAttribute("tab.fret", _tabfret);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasTabFret() {
    return m_Base.hasAttribute("tab.fret");
};
            
string Note::getTabStringValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tab.string")) {
        throw AttributeNotFoundException("tab.string");
    }
    return m_Base.getAttributeValue("tab.string");
};
            
MeiAttribute* Note::getTabString() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tab.string")) {
        throw AttributeNotFoundException("tab.string");
    }
    return m_Base.getAttribute("tab.string");
};
            
void Note::setTabString(string _tabstring) {
    if(!m_Base.hasAttribute("tab.string")) {
        MeiAttribute * a = new MeiAttribute("tab.string", _tabstring);
        m_Base.addAttribute(a);
    }
};
            
bool Note::hasTabString() {
    return m_Base.hasAttribute("tab.string");
};
            
Num::Num() : m_Common(this), m_Lang(this), m_Measurement(this), m_Facsimile(this){
    m_Base.setName("num");
};
//REGISTER_DEFINITION(Num, "num");

P::P() : m_Common(this), m_Declaring(this), m_Lang(this), m_Xy(this), m_Facsimile(this){
    m_Base.setName("p");
};
//REGISTER_DEFINITION(P, "p");

Pad::Pad() : m_Common(this), m_Event(this){
    m_Base.setName("pad");
};
//REGISTER_DEFINITION(Pad, "pad");

string Pad::getNumValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttributeValue("num");
};
            
MeiAttribute* Pad::getNum() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttribute("num");
};
            
void Pad::setNum(string _num) {
    if(!m_Base.hasAttribute("num")) {
        MeiAttribute * a = new MeiAttribute("num", _num);
        m_Base.addAttribute(a);
    }
};
            
bool Pad::hasNum() {
    return m_Base.hasAttribute("num");
};
            
Parts::Parts() : m_Common(this), m_Declaring(this), m_Typed(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this){
    m_Base.setName("parts");
};
//REGISTER_DEFINITION(Parts, "parts");

Part::Part() : m_Common(this), m_Declaring(this), m_Typed(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this){
    m_Base.setName("part");
};
//REGISTER_DEFINITION(Part, "part");

Pb::Pb() : m_Common(this), m_LinkCommon(this), m_LinkExternal(this), m_TupletAnl(this), m_CommonAnl(this), 
m_Crit(this), m_Source(this), m_RdgAnl(this), m_Edit(this), m_Facsimile(this){
    m_Base.setName("pb");
};
//REGISTER_DEFINITION(Pb, "pb");

string Pb::getFuncValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return m_Base.getAttributeValue("func");
};
            
MeiAttribute* Pb::getFunc() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return m_Base.getAttribute("func");
};
            
void Pb::setFunc(string _func) {
    if(!m_Base.hasAttribute("func")) {
        MeiAttribute * a = new MeiAttribute("func", _func);
        m_Base.addAttribute(a);
    }
};
            
bool Pb::hasFunc() {
    return m_Base.hasAttribute("func");
};
            
PgDesc::PgDesc() : m_Common(this), m_Lang(this){
    m_Base.setName("pgDesc");
};
//REGISTER_DEFINITION(PgDesc, "pgDesc");

PgHead::PgHead() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("pgHead");
};
//REGISTER_DEFINITION(PgHead, "pgHead");

PgHead2::PgHead2() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("pgHead2");
};
//REGISTER_DEFINITION(PgHead2, "pgHead2");

PgFoot::PgFoot() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("pgFoot");
};
//REGISTER_DEFINITION(PgFoot, "pgFoot");

PgFoot2::PgFoot2() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("pgFoot2");
};
//REGISTER_DEFINITION(PgFoot2, "pgFoot2");

Phrase::Phrase() : m_Color(this), m_Common(this), m_Curvature(this), m_Curverend(this), m_DurationPerformed(this), 
m_DurationTimestamp(this), m_Joined(this), m_Xy(this), m_Xy2(this), m_Startendid(this), 
m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), 
m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("phrase");
};
//REGISTER_DEFINITION(Phrase, "phrase");

Rend::Rend() : m_Color(this), m_Common(this), m_Horizontalalign(this), m_Lang(this), m_Typography(this)
{
    m_Base.setName("rend");
};
//REGISTER_DEFINITION(Rend, "rend");

string Rend::getAltrendValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("altrend")) {
        throw AttributeNotFoundException("altrend");
    }
    return m_Base.getAttributeValue("altrend");
};
            
MeiAttribute* Rend::getAltrend() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("altrend")) {
        throw AttributeNotFoundException("altrend");
    }
    return m_Base.getAttribute("altrend");
};
            
void Rend::setAltrend(string _altrend) {
    if(!m_Base.hasAttribute("altrend")) {
        MeiAttribute * a = new MeiAttribute("altrend", _altrend);
        m_Base.addAttribute(a);
    }
};
            
bool Rend::hasAltrend() {
    return m_Base.hasAttribute("altrend");
};
            
string Rend::getRendValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttributeValue("rend");
};
            
MeiAttribute* Rend::getRend() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttribute("rend");
};
            
void Rend::setRend(string _rend) {
    if(!m_Base.hasAttribute("rend")) {
        MeiAttribute * a = new MeiAttribute("rend", _rend);
        m_Base.addAttribute(a);
    }
};
            
bool Rend::hasRend() {
    return m_Base.hasAttribute("rend");
};
            
string Rend::getRotationValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rotation")) {
        throw AttributeNotFoundException("rotation");
    }
    return m_Base.getAttributeValue("rotation");
};
            
MeiAttribute* Rend::getRotation() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rotation")) {
        throw AttributeNotFoundException("rotation");
    }
    return m_Base.getAttribute("rotation");
};
            
void Rend::setRotation(string _rotation) {
    if(!m_Base.hasAttribute("rotation")) {
        MeiAttribute * a = new MeiAttribute("rotation", _rotation);
        m_Base.addAttribute(a);
    }
};
            
bool Rend::hasRotation() {
    return m_Base.hasAttribute("rotation");
};
            
string Rend::getValignValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("valign")) {
        throw AttributeNotFoundException("valign");
    }
    return m_Base.getAttributeValue("valign");
};
            
MeiAttribute* Rend::getValign() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("valign")) {
        throw AttributeNotFoundException("valign");
    }
    return m_Base.getAttribute("valign");
};
            
void Rend::setValign(string _valign) {
    if(!m_Base.hasAttribute("valign")) {
        MeiAttribute * a = new MeiAttribute("valign", _valign);
        m_Base.addAttribute(a);
    }
};
            
bool Rend::hasValign() {
    return m_Base.hasAttribute("valign");
};
            
Repository::Repository() : m_Bibl(this), m_Common(this), m_Lang(this), m_Typed(this), m_Name(this), m_Facsimile(this)
{
    m_Base.setName("repository");
};
//REGISTER_DEFINITION(Repository, "repository");

Rest::Rest() : m_Altsym(this), m_Augmentdots(this), m_Color(this), m_Common(this), m_DurationMusical(this), 
m_DurationPerformed(this), m_DurationRatio(this), m_Fermatapresent(this), m_Instrumentident(this), 
m_Lineloc(this), m_Relativesize(this), m_Tupletpresent(this), m_Xy(this), m_Visualoffset(this), 
m_Event(this), m_Beamed(this), m_TupletAnl(this), m_TupletGes(this), m_MensurLog(this), 
m_MensurationLog(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("rest");
};
//REGISTER_DEFINITION(Rest, "rest");

string Rest::getSpacesValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spaces")) {
        throw AttributeNotFoundException("spaces");
    }
    return m_Base.getAttributeValue("spaces");
};
            
MeiAttribute* Rest::getSpaces() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spaces")) {
        throw AttributeNotFoundException("spaces");
    }
    return m_Base.getAttribute("spaces");
};
            
void Rest::setSpaces(string _spaces) {
    if(!m_Base.hasAttribute("spaces")) {
        MeiAttribute * a = new MeiAttribute("spaces", _spaces);
        m_Base.addAttribute(a);
    }
};
            
bool Rest::hasSpaces() {
    return m_Base.hasAttribute("spaces");
};
            
Role::Role() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("role");
};
//REGISTER_DEFINITION(Role, "role");

RoleDesc::RoleDesc() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("roleDesc");
};
//REGISTER_DEFINITION(RoleDesc, "roleDesc");

Sb::Sb() : m_Common(this), m_TupletAnl(this), m_CommonAnl(this), m_Crit(this), m_Source(this), 
m_RdgAnl(this), m_Edit(this), m_Facsimile(this){
    m_Base.setName("sb");
};
//REGISTER_DEFINITION(Sb, "sb");

string Sb::getRendValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttributeValue("rend");
};
            
MeiAttribute* Sb::getRend() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttribute("rend");
};
            
void Sb::setRend(string _rend) {
    if(!m_Base.hasAttribute("rend")) {
        MeiAttribute * a = new MeiAttribute("rend", _rend);
        m_Base.addAttribute(a);
    }
};
            
bool Sb::hasRend() {
    return m_Base.hasAttribute("rend");
};
            
Score::Score() : m_Common(this), m_Declaring(this), m_Typed(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this){
    m_Base.setName("score");
};
//REGISTER_DEFINITION(Score, "score");

ScoreDef::ScoreDef() : m_Barplacement(this), m_BeamingVis(this), m_CleffingLog(this), m_CleffingVis(this), 
m_Common(this), m_Distances(this), m_DurationDefault(this), m_KeysigsLog(this), 
m_KeysigsVis(this), m_Lyricstyle(this), m_MetersLog(this), m_MetersVis(this), m_Mmtempo(this), 
m_Multinummeasures(this), m_Octavedefault(this), m_Onelinestaff(this), m_Textstyle(this), 
m_Transposition(this), m_BeamingLog(this), m_Slurrend(this), m_Tierend(this), m_Pianopedals(this), 
m_Rehearsal(this), m_MensurationLog(this), m_MensurationVis(this), m_Channelized(this), 
m_Miditempo(this), m_Timebase(this){
    m_Base.setName("scoreDef");
};
//REGISTER_DEFINITION(ScoreDef, "scoreDef");

string ScoreDef::getTunePnameValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tune.pname")) {
        throw AttributeNotFoundException("tune.pname");
    }
    return m_Base.getAttributeValue("tune.pname");
};
            
MeiAttribute* ScoreDef::getTunePname() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tune.pname")) {
        throw AttributeNotFoundException("tune.pname");
    }
    return m_Base.getAttribute("tune.pname");
};
            
void ScoreDef::setTunePname(string _tunepname) {
    if(!m_Base.hasAttribute("tune.pname")) {
        MeiAttribute * a = new MeiAttribute("tune.pname", _tunepname);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasTunePname() {
    return m_Base.hasAttribute("tune.pname");
};
            
string ScoreDef::getTuneHzValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tune.Hz")) {
        throw AttributeNotFoundException("tune.Hz");
    }
    return m_Base.getAttributeValue("tune.Hz");
};
            
MeiAttribute* ScoreDef::getTuneHz() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tune.Hz")) {
        throw AttributeNotFoundException("tune.Hz");
    }
    return m_Base.getAttribute("tune.Hz");
};
            
void ScoreDef::setTuneHz(string _tuneHz) {
    if(!m_Base.hasAttribute("tune.Hz")) {
        MeiAttribute * a = new MeiAttribute("tune.Hz", _tuneHz);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasTuneHz() {
    return m_Base.hasAttribute("tune.Hz");
};
            
string ScoreDef::getTuneTemperValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tune.temper")) {
        throw AttributeNotFoundException("tune.temper");
    }
    return m_Base.getAttributeValue("tune.temper");
};
            
MeiAttribute* ScoreDef::getTuneTemper() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tune.temper")) {
        throw AttributeNotFoundException("tune.temper");
    }
    return m_Base.getAttribute("tune.temper");
};
            
void ScoreDef::setTuneTemper(string _tunetemper) {
    if(!m_Base.hasAttribute("tune.temper")) {
        MeiAttribute * a = new MeiAttribute("tune.temper", _tunetemper);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasTuneTemper() {
    return m_Base.hasAttribute("tune.temper");
};
            
string ScoreDef::getEndingRendValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("ending.rend")) {
        throw AttributeNotFoundException("ending.rend");
    }
    return m_Base.getAttributeValue("ending.rend");
};
            
MeiAttribute* ScoreDef::getEndingRend() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("ending.rend")) {
        throw AttributeNotFoundException("ending.rend");
    }
    return m_Base.getAttribute("ending.rend");
};
            
void ScoreDef::setEndingRend(string _endingrend) {
    if(!m_Base.hasAttribute("ending.rend")) {
        MeiAttribute * a = new MeiAttribute("ending.rend", _endingrend);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasEndingRend() {
    return m_Base.hasAttribute("ending.rend");
};
            
string ScoreDef::getMnumVisibleValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mnum.visible")) {
        throw AttributeNotFoundException("mnum.visible");
    }
    return m_Base.getAttributeValue("mnum.visible");
};
            
MeiAttribute* ScoreDef::getMnumVisible() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mnum.visible")) {
        throw AttributeNotFoundException("mnum.visible");
    }
    return m_Base.getAttribute("mnum.visible");
};
            
void ScoreDef::setMnumVisible(string _mnumvisible) {
    if(!m_Base.hasAttribute("mnum.visible")) {
        MeiAttribute * a = new MeiAttribute("mnum.visible", _mnumvisible);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasMnumVisible() {
    return m_Base.hasAttribute("mnum.visible");
};
            
string ScoreDef::getMusicNameValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("music.name")) {
        throw AttributeNotFoundException("music.name");
    }
    return m_Base.getAttributeValue("music.name");
};
            
MeiAttribute* ScoreDef::getMusicName() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("music.name")) {
        throw AttributeNotFoundException("music.name");
    }
    return m_Base.getAttribute("music.name");
};
            
void ScoreDef::setMusicName(string _musicname) {
    if(!m_Base.hasAttribute("music.name")) {
        MeiAttribute * a = new MeiAttribute("music.name", _musicname);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasMusicName() {
    return m_Base.hasAttribute("music.name");
};
            
string ScoreDef::getMusicSizeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("music.size")) {
        throw AttributeNotFoundException("music.size");
    }
    return m_Base.getAttributeValue("music.size");
};
            
MeiAttribute* ScoreDef::getMusicSize() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("music.size")) {
        throw AttributeNotFoundException("music.size");
    }
    return m_Base.getAttribute("music.size");
};
            
void ScoreDef::setMusicSize(string _musicsize) {
    if(!m_Base.hasAttribute("music.size")) {
        MeiAttribute * a = new MeiAttribute("music.size", _musicsize);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasMusicSize() {
    return m_Base.hasAttribute("music.size");
};
            
string ScoreDef::getOptimizeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("optimize")) {
        throw AttributeNotFoundException("optimize");
    }
    return m_Base.getAttributeValue("optimize");
};
            
MeiAttribute* ScoreDef::getOptimize() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("optimize")) {
        throw AttributeNotFoundException("optimize");
    }
    return m_Base.getAttribute("optimize");
};
            
void ScoreDef::setOptimize(string _optimize) {
    if(!m_Base.hasAttribute("optimize")) {
        MeiAttribute * a = new MeiAttribute("optimize", _optimize);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasOptimize() {
    return m_Base.hasAttribute("optimize");
};
            
string ScoreDef::getPageHeightValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.height")) {
        throw AttributeNotFoundException("page.height");
    }
    return m_Base.getAttributeValue("page.height");
};
            
MeiAttribute* ScoreDef::getPageHeight() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.height")) {
        throw AttributeNotFoundException("page.height");
    }
    return m_Base.getAttribute("page.height");
};
            
void ScoreDef::setPageHeight(string _pageheight) {
    if(!m_Base.hasAttribute("page.height")) {
        MeiAttribute * a = new MeiAttribute("page.height", _pageheight);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPageHeight() {
    return m_Base.hasAttribute("page.height");
};
            
string ScoreDef::getPageWidthValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.width")) {
        throw AttributeNotFoundException("page.width");
    }
    return m_Base.getAttributeValue("page.width");
};
            
MeiAttribute* ScoreDef::getPageWidth() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.width")) {
        throw AttributeNotFoundException("page.width");
    }
    return m_Base.getAttribute("page.width");
};
            
void ScoreDef::setPageWidth(string _pagewidth) {
    if(!m_Base.hasAttribute("page.width")) {
        MeiAttribute * a = new MeiAttribute("page.width", _pagewidth);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPageWidth() {
    return m_Base.hasAttribute("page.width");
};
            
string ScoreDef::getPageUnitsValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.units")) {
        throw AttributeNotFoundException("page.units");
    }
    return m_Base.getAttributeValue("page.units");
};
            
MeiAttribute* ScoreDef::getPageUnits() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.units")) {
        throw AttributeNotFoundException("page.units");
    }
    return m_Base.getAttribute("page.units");
};
            
void ScoreDef::setPageUnits(string _pageunits) {
    if(!m_Base.hasAttribute("page.units")) {
        MeiAttribute * a = new MeiAttribute("page.units", _pageunits);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPageUnits() {
    return m_Base.hasAttribute("page.units");
};
            
string ScoreDef::getPageTopmarValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.topmar")) {
        throw AttributeNotFoundException("page.topmar");
    }
    return m_Base.getAttributeValue("page.topmar");
};
            
MeiAttribute* ScoreDef::getPageTopmar() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.topmar")) {
        throw AttributeNotFoundException("page.topmar");
    }
    return m_Base.getAttribute("page.topmar");
};
            
void ScoreDef::setPageTopmar(string _pagetopmar) {
    if(!m_Base.hasAttribute("page.topmar")) {
        MeiAttribute * a = new MeiAttribute("page.topmar", _pagetopmar);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPageTopmar() {
    return m_Base.hasAttribute("page.topmar");
};
            
string ScoreDef::getPageBotmarValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.botmar")) {
        throw AttributeNotFoundException("page.botmar");
    }
    return m_Base.getAttributeValue("page.botmar");
};
            
MeiAttribute* ScoreDef::getPageBotmar() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.botmar")) {
        throw AttributeNotFoundException("page.botmar");
    }
    return m_Base.getAttribute("page.botmar");
};
            
void ScoreDef::setPageBotmar(string _pagebotmar) {
    if(!m_Base.hasAttribute("page.botmar")) {
        MeiAttribute * a = new MeiAttribute("page.botmar", _pagebotmar);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPageBotmar() {
    return m_Base.hasAttribute("page.botmar");
};
            
string ScoreDef::getPageLeftmarValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.leftmar")) {
        throw AttributeNotFoundException("page.leftmar");
    }
    return m_Base.getAttributeValue("page.leftmar");
};
            
MeiAttribute* ScoreDef::getPageLeftmar() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.leftmar")) {
        throw AttributeNotFoundException("page.leftmar");
    }
    return m_Base.getAttribute("page.leftmar");
};
            
void ScoreDef::setPageLeftmar(string _pageleftmar) {
    if(!m_Base.hasAttribute("page.leftmar")) {
        MeiAttribute * a = new MeiAttribute("page.leftmar", _pageleftmar);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPageLeftmar() {
    return m_Base.hasAttribute("page.leftmar");
};
            
string ScoreDef::getPageRightmarValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.rightmar")) {
        throw AttributeNotFoundException("page.rightmar");
    }
    return m_Base.getAttributeValue("page.rightmar");
};
            
MeiAttribute* ScoreDef::getPageRightmar() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.rightmar")) {
        throw AttributeNotFoundException("page.rightmar");
    }
    return m_Base.getAttribute("page.rightmar");
};
            
void ScoreDef::setPageRightmar(string _pagerightmar) {
    if(!m_Base.hasAttribute("page.rightmar")) {
        MeiAttribute * a = new MeiAttribute("page.rightmar", _pagerightmar);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPageRightmar() {
    return m_Base.hasAttribute("page.rightmar");
};
            
string ScoreDef::getPagePanelsValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.panels")) {
        throw AttributeNotFoundException("page.panels");
    }
    return m_Base.getAttributeValue("page.panels");
};
            
MeiAttribute* ScoreDef::getPagePanels() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.panels")) {
        throw AttributeNotFoundException("page.panels");
    }
    return m_Base.getAttribute("page.panels");
};
            
void ScoreDef::setPagePanels(string _pagepanels) {
    if(!m_Base.hasAttribute("page.panels")) {
        MeiAttribute * a = new MeiAttribute("page.panels", _pagepanels);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPagePanels() {
    return m_Base.hasAttribute("page.panels");
};
            
string ScoreDef::getPageScaleValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.scale")) {
        throw AttributeNotFoundException("page.scale");
    }
    return m_Base.getAttributeValue("page.scale");
};
            
MeiAttribute* ScoreDef::getPageScale() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("page.scale")) {
        throw AttributeNotFoundException("page.scale");
    }
    return m_Base.getAttribute("page.scale");
};
            
void ScoreDef::setPageScale(string _pagescale) {
    if(!m_Base.hasAttribute("page.scale")) {
        MeiAttribute * a = new MeiAttribute("page.scale", _pagescale);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasPageScale() {
    return m_Base.hasAttribute("page.scale");
};
            
string ScoreDef::getSpacingPackexpValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing.packexp")) {
        throw AttributeNotFoundException("spacing.packexp");
    }
    return m_Base.getAttributeValue("spacing.packexp");
};
            
MeiAttribute* ScoreDef::getSpacingPackexp() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing.packexp")) {
        throw AttributeNotFoundException("spacing.packexp");
    }
    return m_Base.getAttribute("spacing.packexp");
};
            
void ScoreDef::setSpacingPackexp(string _spacingpackexp) {
    if(!m_Base.hasAttribute("spacing.packexp")) {
        MeiAttribute * a = new MeiAttribute("spacing.packexp", _spacingpackexp);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasSpacingPackexp() {
    return m_Base.hasAttribute("spacing.packexp");
};
            
string ScoreDef::getSpacingPackfactValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing.packfact")) {
        throw AttributeNotFoundException("spacing.packfact");
    }
    return m_Base.getAttributeValue("spacing.packfact");
};
            
MeiAttribute* ScoreDef::getSpacingPackfact() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing.packfact")) {
        throw AttributeNotFoundException("spacing.packfact");
    }
    return m_Base.getAttribute("spacing.packfact");
};
            
void ScoreDef::setSpacingPackfact(string _spacingpackfact) {
    if(!m_Base.hasAttribute("spacing.packfact")) {
        MeiAttribute * a = new MeiAttribute("spacing.packfact", _spacingpackfact);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasSpacingPackfact() {
    return m_Base.hasAttribute("spacing.packfact");
};
            
string ScoreDef::getSpacingStaffValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing.staff")) {
        throw AttributeNotFoundException("spacing.staff");
    }
    return m_Base.getAttributeValue("spacing.staff");
};
            
MeiAttribute* ScoreDef::getSpacingStaff() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing.staff")) {
        throw AttributeNotFoundException("spacing.staff");
    }
    return m_Base.getAttribute("spacing.staff");
};
            
void ScoreDef::setSpacingStaff(string _spacingstaff) {
    if(!m_Base.hasAttribute("spacing.staff")) {
        MeiAttribute * a = new MeiAttribute("spacing.staff", _spacingstaff);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasSpacingStaff() {
    return m_Base.hasAttribute("spacing.staff");
};
            
string ScoreDef::getSpacingSystemValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing.system")) {
        throw AttributeNotFoundException("spacing.system");
    }
    return m_Base.getAttributeValue("spacing.system");
};
            
MeiAttribute* ScoreDef::getSpacingSystem() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing.system")) {
        throw AttributeNotFoundException("spacing.system");
    }
    return m_Base.getAttribute("spacing.system");
};
            
void ScoreDef::setSpacingSystem(string _spacingsystem) {
    if(!m_Base.hasAttribute("spacing.system")) {
        MeiAttribute * a = new MeiAttribute("spacing.system", _spacingsystem);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasSpacingSystem() {
    return m_Base.hasAttribute("spacing.system");
};
            
string ScoreDef::getSystemLeftmarValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("system.leftmar")) {
        throw AttributeNotFoundException("system.leftmar");
    }
    return m_Base.getAttributeValue("system.leftmar");
};
            
MeiAttribute* ScoreDef::getSystemLeftmar() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("system.leftmar")) {
        throw AttributeNotFoundException("system.leftmar");
    }
    return m_Base.getAttribute("system.leftmar");
};
            
void ScoreDef::setSystemLeftmar(string _systemleftmar) {
    if(!m_Base.hasAttribute("system.leftmar")) {
        MeiAttribute * a = new MeiAttribute("system.leftmar", _systemleftmar);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasSystemLeftmar() {
    return m_Base.hasAttribute("system.leftmar");
};
            
string ScoreDef::getSystemRightmarValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("system.rightmar")) {
        throw AttributeNotFoundException("system.rightmar");
    }
    return m_Base.getAttributeValue("system.rightmar");
};
            
MeiAttribute* ScoreDef::getSystemRightmar() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("system.rightmar")) {
        throw AttributeNotFoundException("system.rightmar");
    }
    return m_Base.getAttribute("system.rightmar");
};
            
void ScoreDef::setSystemRightmar(string _systemrightmar) {
    if(!m_Base.hasAttribute("system.rightmar")) {
        MeiAttribute * a = new MeiAttribute("system.rightmar", _systemrightmar);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasSystemRightmar() {
    return m_Base.hasAttribute("system.rightmar");
};
            
string ScoreDef::getSystemTopmarValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("system.topmar")) {
        throw AttributeNotFoundException("system.topmar");
    }
    return m_Base.getAttributeValue("system.topmar");
};
            
MeiAttribute* ScoreDef::getSystemTopmar() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("system.topmar")) {
        throw AttributeNotFoundException("system.topmar");
    }
    return m_Base.getAttribute("system.topmar");
};
            
void ScoreDef::setSystemTopmar(string _systemtopmar) {
    if(!m_Base.hasAttribute("system.topmar")) {
        MeiAttribute * a = new MeiAttribute("system.topmar", _systemtopmar);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasSystemTopmar() {
    return m_Base.hasAttribute("system.topmar");
};
            
string ScoreDef::getGridShowValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return m_Base.getAttributeValue("grid.show");
};
            
MeiAttribute* ScoreDef::getGridShow() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return m_Base.getAttribute("grid.show");
};
            
void ScoreDef::setGridShow(string _gridshow) {
    if(!m_Base.hasAttribute("grid.show")) {
        MeiAttribute * a = new MeiAttribute("grid.show", _gridshow);
        m_Base.addAttribute(a);
    }
};
            
bool ScoreDef::hasGridShow() {
    return m_Base.hasAttribute("grid.show");
};
            
Section::Section() : m_Common(this), m_Declaring(this), m_LinkCommon(this), m_LinkExternal(this), m_Typed(this), 
m_LinkInternal(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("section");
};
//REGISTER_DEFINITION(Section, "section");

string Section::getRestartValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("restart")) {
        throw AttributeNotFoundException("restart");
    }
    return m_Base.getAttributeValue("restart");
};
            
MeiAttribute* Section::getRestart() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("restart")) {
        throw AttributeNotFoundException("restart");
    }
    return m_Base.getAttribute("restart");
};
            
void Section::setRestart(string _restart) {
    if(!m_Base.hasAttribute("restart")) {
        MeiAttribute * a = new MeiAttribute("restart", _restart);
        m_Base.addAttribute(a);
    }
};
            
bool Section::hasRestart() {
    return m_Base.hasAttribute("restart");
};
            
Space::Space() : m_Augmentdots(this), m_Common(this), m_DurationMusical(this), m_DurationPerformed(this), 
m_Fermatapresent(this), m_Tupletpresent(this), m_Event(this), m_Beamed(this), m_TupletAnl(this), 
m_TupletGes(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("space");
};
//REGISTER_DEFINITION(Space, "space");

string Space::getCompressableValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("compressable")) {
        throw AttributeNotFoundException("compressable");
    }
    return m_Base.getAttributeValue("compressable");
};
            
MeiAttribute* Space::getCompressable() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("compressable")) {
        throw AttributeNotFoundException("compressable");
    }
    return m_Base.getAttribute("compressable");
};
            
void Space::setCompressable(string _compressable) {
    if(!m_Base.hasAttribute("compressable")) {
        MeiAttribute * a = new MeiAttribute("compressable", _compressable);
        m_Base.addAttribute(a);
    }
};
            
bool Space::hasCompressable() {
    return m_Base.hasAttribute("compressable");
};
            
Stack::Stack() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("stack");
};
//REGISTER_DEFINITION(Stack, "stack");

string Stack::getDelimValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("delim")) {
        throw AttributeNotFoundException("delim");
    }
    return m_Base.getAttributeValue("delim");
};
            
MeiAttribute* Stack::getDelim() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("delim")) {
        throw AttributeNotFoundException("delim");
    }
    return m_Base.getAttribute("delim");
};
            
void Stack::setDelim(string _delim) {
    if(!m_Base.hasAttribute("delim")) {
        MeiAttribute * a = new MeiAttribute("delim", _delim);
        m_Base.addAttribute(a);
    }
};
            
bool Stack::hasDelim() {
    return m_Base.hasAttribute("delim");
};
            
string Stack::getAlignValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("align")) {
        throw AttributeNotFoundException("align");
    }
    return m_Base.getAttributeValue("align");
};
            
MeiAttribute* Stack::getAlign() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("align")) {
        throw AttributeNotFoundException("align");
    }
    return m_Base.getAttribute("align");
};
            
void Stack::setAlign(string _align) {
    if(!m_Base.hasAttribute("align")) {
        MeiAttribute * a = new MeiAttribute("align", _align);
        m_Base.addAttribute(a);
    }
};
            
bool Stack::hasAlign() {
    return m_Base.hasAttribute("align");
};
            
Staff::Staff() : m_Common(this), m_Declaring(this), m_Meterconformance(this), m_Visibility(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("staff");
};
//REGISTER_DEFINITION(Staff, "staff");

StaffDef::StaffDef() : m_BeamingVis(this), m_CleffingLog(this), m_CleffingVis(this), m_Common(this), m_Declaring(this), 
m_Distances(this), m_DurationDefault(this), m_Instrumentident(this), m_KeysigsLog(this), 
m_KeysigsVis(this), m_LabelsAddl(this), m_Lyricstyle(this), m_MetersLog(this), m_MetersVis(this), 
m_Multinummeasures(this), m_Octavedefault(this), m_Onelinestaff(this), m_Scalable(this), 
m_Textstyle(this), m_Transposition(this), m_Visibility(this), m_BeamingLog(this), 
m_Slurrend(this), m_Tierend(this), m_Pianopedals(this), m_Rehearsal(this), m_MensurationLog(this), 
m_MensurationVis(this), m_Timebase(this){
    m_Base.setName("staffDef");
};
//REGISTER_DEFINITION(StaffDef, "staffDef");

string StaffDef::getGridShowValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return m_Base.getAttributeValue("grid.show");
};
            
MeiAttribute* StaffDef::getGridShow() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return m_Base.getAttribute("grid.show");
};
            
void StaffDef::setGridShow(string _gridshow) {
    if(!m_Base.hasAttribute("grid.show")) {
        MeiAttribute * a = new MeiAttribute("grid.show", _gridshow);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasGridShow() {
    return m_Base.hasAttribute("grid.show");
};
            
string StaffDef::getLayerschemeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("layerscheme")) {
        throw AttributeNotFoundException("layerscheme");
    }
    return m_Base.getAttributeValue("layerscheme");
};
            
MeiAttribute* StaffDef::getLayerscheme() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("layerscheme")) {
        throw AttributeNotFoundException("layerscheme");
    }
    return m_Base.getAttribute("layerscheme");
};
            
void StaffDef::setLayerscheme(string _layerscheme) {
    if(!m_Base.hasAttribute("layerscheme")) {
        MeiAttribute * a = new MeiAttribute("layerscheme", _layerscheme);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasLayerscheme() {
    return m_Base.hasAttribute("layerscheme");
};
            
string StaffDef::getLinesValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("lines")) {
        throw AttributeNotFoundException("lines");
    }
    return m_Base.getAttributeValue("lines");
};
            
MeiAttribute* StaffDef::getLines() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("lines")) {
        throw AttributeNotFoundException("lines");
    }
    return m_Base.getAttribute("lines");
};
            
void StaffDef::setLines(string _lines) {
    if(!m_Base.hasAttribute("lines")) {
        MeiAttribute * a = new MeiAttribute("lines", _lines);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasLines() {
    return m_Base.hasAttribute("lines");
};
            
string StaffDef::getLinesColorValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("lines.color")) {
        throw AttributeNotFoundException("lines.color");
    }
    return m_Base.getAttributeValue("lines.color");
};
            
MeiAttribute* StaffDef::getLinesColor() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("lines.color")) {
        throw AttributeNotFoundException("lines.color");
    }
    return m_Base.getAttribute("lines.color");
};
            
void StaffDef::setLinesColor(string _linescolor) {
    if(!m_Base.hasAttribute("lines.color")) {
        MeiAttribute * a = new MeiAttribute("lines.color", _linescolor);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasLinesColor() {
    return m_Base.hasAttribute("lines.color");
};
            
string StaffDef::getLinesVisibleValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("lines.visible")) {
        throw AttributeNotFoundException("lines.visible");
    }
    return m_Base.getAttributeValue("lines.visible");
};
            
MeiAttribute* StaffDef::getLinesVisible() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("lines.visible")) {
        throw AttributeNotFoundException("lines.visible");
    }
    return m_Base.getAttribute("lines.visible");
};
            
void StaffDef::setLinesVisible(string _linesvisible) {
    if(!m_Base.hasAttribute("lines.visible")) {
        MeiAttribute * a = new MeiAttribute("lines.visible", _linesvisible);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasLinesVisible() {
    return m_Base.hasAttribute("lines.visible");
};
            
string StaffDef::getSpacingValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing")) {
        throw AttributeNotFoundException("spacing");
    }
    return m_Base.getAttributeValue("spacing");
};
            
MeiAttribute* StaffDef::getSpacing() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("spacing")) {
        throw AttributeNotFoundException("spacing");
    }
    return m_Base.getAttribute("spacing");
};
            
void StaffDef::setSpacing(string _spacing) {
    if(!m_Base.hasAttribute("spacing")) {
        MeiAttribute * a = new MeiAttribute("spacing", _spacing);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasSpacing() {
    return m_Base.hasAttribute("spacing");
};
            
string StaffDef::getProportNumValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("proport.num")) {
        throw AttributeNotFoundException("proport.num");
    }
    return m_Base.getAttributeValue("proport.num");
};
            
MeiAttribute* StaffDef::getProportNum() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("proport.num")) {
        throw AttributeNotFoundException("proport.num");
    }
    return m_Base.getAttribute("proport.num");
};
            
void StaffDef::setProportNum(string _proportnum) {
    if(!m_Base.hasAttribute("proport.num")) {
        MeiAttribute * a = new MeiAttribute("proport.num", _proportnum);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasProportNum() {
    return m_Base.hasAttribute("proport.num");
};
            
string StaffDef::getProportNumbaseValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("proport.numbase")) {
        throw AttributeNotFoundException("proport.numbase");
    }
    return m_Base.getAttributeValue("proport.numbase");
};
            
MeiAttribute* StaffDef::getProportNumbase() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("proport.numbase")) {
        throw AttributeNotFoundException("proport.numbase");
    }
    return m_Base.getAttribute("proport.numbase");
};
            
void StaffDef::setProportNumbase(string _proportnumbase) {
    if(!m_Base.hasAttribute("proport.numbase")) {
        MeiAttribute * a = new MeiAttribute("proport.numbase", _proportnumbase);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasProportNumbase() {
    return m_Base.hasAttribute("proport.numbase");
};
            
string StaffDef::getTabStringsValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tab.strings")) {
        throw AttributeNotFoundException("tab.strings");
    }
    return m_Base.getAttributeValue("tab.strings");
};
            
MeiAttribute* StaffDef::getTabStrings() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("tab.strings")) {
        throw AttributeNotFoundException("tab.strings");
    }
    return m_Base.getAttribute("tab.strings");
};
            
void StaffDef::setTabStrings(string _tabstrings) {
    if(!m_Base.hasAttribute("tab.strings")) {
        MeiAttribute * a = new MeiAttribute("tab.strings", _tabstrings);
        m_Base.addAttribute(a);
    }
};
            
bool StaffDef::hasTabStrings() {
    return m_Base.hasAttribute("tab.strings");
};
            
StaffGrp::StaffGrp() : m_Common(this), m_Declaring(this), m_Staffgroupingsym(this), m_Instrumentident(this), 
m_LabelsAddl(this), m_Visibility(this), m_Facsimile(this){
    m_Base.setName("staffGrp");
};
//REGISTER_DEFINITION(StaffGrp, "staffGrp");

string StaffGrp::getBarthruValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("barthru")) {
        throw AttributeNotFoundException("barthru");
    }
    return m_Base.getAttributeValue("barthru");
};
            
MeiAttribute* StaffGrp::getBarthru() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("barthru")) {
        throw AttributeNotFoundException("barthru");
    }
    return m_Base.getAttribute("barthru");
};
            
void StaffGrp::setBarthru(string _barthru) {
    if(!m_Base.hasAttribute("barthru")) {
        MeiAttribute * a = new MeiAttribute("barthru", _barthru);
        m_Base.addAttribute(a);
    }
};
            
bool StaffGrp::hasBarthru() {
    return m_Base.hasAttribute("barthru");
};
            
Syl::Syl() : m_Common(this), m_Horizontalalign(this), m_Typography(this), m_Xy(this), m_Visualoffset(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("syl");
};
//REGISTER_DEFINITION(Syl, "syl");

string Syl::getConValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("con")) {
        throw AttributeNotFoundException("con");
    }
    return m_Base.getAttributeValue("con");
};
            
MeiAttribute* Syl::getCon() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("con")) {
        throw AttributeNotFoundException("con");
    }
    return m_Base.getAttribute("con");
};
            
void Syl::setCon(string _con) {
    if(!m_Base.hasAttribute("con")) {
        MeiAttribute * a = new MeiAttribute("con", _con);
        m_Base.addAttribute(a);
    }
};
            
bool Syl::hasCon() {
    return m_Base.hasAttribute("con");
};
            
string Syl::getWordposValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("wordpos")) {
        throw AttributeNotFoundException("wordpos");
    }
    return m_Base.getAttributeValue("wordpos");
};
            
MeiAttribute* Syl::getWordpos() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("wordpos")) {
        throw AttributeNotFoundException("wordpos");
    }
    return m_Base.getAttribute("wordpos");
};
            
void Syl::setWordpos(string _wordpos) {
    if(!m_Base.hasAttribute("wordpos")) {
        MeiAttribute * a = new MeiAttribute("wordpos", _wordpos);
        m_Base.addAttribute(a);
    }
};
            
bool Syl::hasWordpos() {
    return m_Base.hasAttribute("wordpos");
};
            
Tempo::Tempo() : m_Common(this), m_Lang(this), m_Mmtempo(this), m_Placement(this), m_Startid(this), 
m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), m_Startendid(this), 
m_Visualoffset2(this), m_Visualoffset(this), m_Controlevent(this), m_TupletAnl(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this), m_Miditempo(this){
    m_Base.setName("tempo");
};
//REGISTER_DEFINITION(Tempo, "tempo");

Title::Title() : m_Common(this), m_Lang(this), m_Typed(this), m_Name(this), m_Facsimile(this){
    m_Base.setName("title");
};
//REGISTER_DEFINITION(Title, "title");

string Title::getLevelValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return m_Base.getAttributeValue("level");
};
            
MeiAttribute* Title::getLevel() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return m_Base.getAttribute("level");
};
            
void Title::setLevel(string _level) {
    if(!m_Base.hasAttribute("level")) {
        MeiAttribute * a = new MeiAttribute("level", _level);
        m_Base.addAttribute(a);
    }
};
            
bool Title::hasLevel() {
    return m_Base.hasAttribute("level");
};
            
TitlePage::TitlePage() : m_Common(this), m_Lang(this), m_Facsimile(this){
    m_Base.setName("titlePage");
};
//REGISTER_DEFINITION(TitlePage, "titlePage");
