#include "header.h"
using namespace std;

MeiHead::MeiHead() : m_Bibl(this), m_Common(this), m_Lang(this), m_Meiversion(this){
    m_Base.setName("meiHead");
};
//REGISTER_DEFINITION(MeiHead, "meiHead");

string MeiHead::getTypeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return m_Base.getAttributeValue("type");
};
            
MeiAttribute* MeiHead::getType() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return m_Base.getAttribute("type");
};
            
void MeiHead::setType(string _type) {
    if(!m_Base.hasAttribute("type")) {
        MeiAttribute * a = new MeiAttribute("type", _type);
        m_Base.addAttribute(a);
    }
};
            
bool MeiHead::hasType() {
    return m_Base.hasAttribute("type");
};
            
AccessRestrict::AccessRestrict() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("accessRestrict");
};
//REGISTER_DEFINITION(AccessRestrict, "accessRestrict");

AcqSource::AcqSource() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("acqSource");
};
//REGISTER_DEFINITION(AcqSource, "acqSource");

AltId::AltId() : m_Bibl(this), m_Common(this), m_Typed(this){
    m_Base.setName("altId");
};
//REGISTER_DEFINITION(AltId, "altId");

AppInfo::AppInfo() : m_Common(this){
    m_Base.setName("appInfo");
};
//REGISTER_DEFINITION(AppInfo, "appInfo");

Application::Application() : m_Common(this), m_Datable(this), m_Typed(this){
    m_Base.setName("application");
};
//REGISTER_DEFINITION(Application, "application");

string Application::getVersionValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("version")) {
        throw AttributeNotFoundException("version");
    }
    return m_Base.getAttributeValue("version");
};
            
MeiAttribute* Application::getVersion() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("version")) {
        throw AttributeNotFoundException("version");
    }
    return m_Base.getAttribute("version");
};
            
void Application::setVersion(string _version) {
    if(!m_Base.hasAttribute("version")) {
        MeiAttribute * a = new MeiAttribute("version", _version);
        m_Base.addAttribute(a);
    }
};
            
bool Application::hasVersion() {
    return m_Base.hasAttribute("version");
};
            
Availability::Availability() : m_Bibl(this), m_Common(this), m_Datapointing(this){
    m_Base.setName("availability");
};
//REGISTER_DEFINITION(Availability, "availability");

Change::Change() : m_Bibl(this), m_Common(this){
    m_Base.setName("change");
};
//REGISTER_DEFINITION(Change, "change");

ChangeDesc::ChangeDesc() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("changeDesc");
};
//REGISTER_DEFINITION(ChangeDesc, "changeDesc");

ClassCode::ClassCode() : m_Authorized(this), m_Bibl(this), m_Common(this), m_Name(this){
    m_Base.setName("classCode");
};
//REGISTER_DEFINITION(ClassCode, "classCode");

Classification::Classification() : m_Bibl(this), m_Common(this), m_Datapointing(this){
    m_Base.setName("classification");
};
//REGISTER_DEFINITION(Classification, "classification");

Condition::Condition() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("condition");
};
//REGISTER_DEFINITION(Condition, "condition");

Correction::Correction() : m_Bibl(this), m_Common(this), m_Datapointing(this), m_Lang(this), m_Regularmethod(this)
{
    m_Base.setName("correction");
};
//REGISTER_DEFINITION(Correction, "correction");

string Correction::getCorrlevelValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("corrlevel")) {
        throw AttributeNotFoundException("corrlevel");
    }
    return m_Base.getAttributeValue("corrlevel");
};
            
MeiAttribute* Correction::getCorrlevel() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("corrlevel")) {
        throw AttributeNotFoundException("corrlevel");
    }
    return m_Base.getAttribute("corrlevel");
};
            
void Correction::setCorrlevel(string _corrlevel) {
    if(!m_Base.hasAttribute("corrlevel")) {
        MeiAttribute * a = new MeiAttribute("corrlevel", _corrlevel);
        m_Base.addAttribute(a);
    }
};
            
bool Correction::hasCorrlevel() {
    return m_Base.hasAttribute("corrlevel");
};
            
Contents::Contents() : m_Bibl(this), m_Common(this), m_LinkExternal(this){
    m_Base.setName("contents");
};
//REGISTER_DEFINITION(Contents, "contents");

ContentItem::ContentItem() : m_Bibl(this), m_Common(this){
    m_Base.setName("contentItem");
};
//REGISTER_DEFINITION(ContentItem, "contentItem");

Creation::Creation() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("creation");
};
//REGISTER_DEFINITION(Creation, "creation");

Dimensions::Dimensions() : m_Bibl(this), m_Common(this), m_Measurement(this){
    m_Base.setName("dimensions");
};
//REGISTER_DEFINITION(Dimensions, "dimensions");

EditionStmt::EditionStmt() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("editionStmt");
};
//REGISTER_DEFINITION(EditionStmt, "editionStmt");

EditorialDecl::EditorialDecl() : m_Bibl(this), m_Common(this), m_Datapointing(this), m_Lang(this){
    m_Base.setName("editorialDecl");
};
//REGISTER_DEFINITION(EditorialDecl, "editorialDecl");

EncodingDesc::EncodingDesc() : m_Bibl(this), m_Common(this){
    m_Base.setName("encodingDesc");
};
//REGISTER_DEFINITION(EncodingDesc, "encodingDesc");

Ensemble::Ensemble() : m_Bibl(this), m_Common(this){
    m_Base.setName("ensemble");
};
//REGISTER_DEFINITION(Ensemble, "ensemble");

ExhibHist::ExhibHist() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("exhibHist");
};
//REGISTER_DEFINITION(ExhibHist, "exhibHist");

Extent::Extent() : m_Bibl(this), m_Common(this), m_Measurement(this){
    m_Base.setName("extent");
};
//REGISTER_DEFINITION(Extent, "extent");

FileDesc::FileDesc() : m_Bibl(this), m_Common(this){
    m_Base.setName("fileDesc");
};
//REGISTER_DEFINITION(FileDesc, "fileDesc");

Fingerprint::Fingerprint() : m_Common(this), m_Lang(this){
    m_Base.setName("fingerprint");
};
//REGISTER_DEFINITION(Fingerprint, "fingerprint");

Hand::Hand() : m_Bibl(this), m_Common(this), m_Lang(this), m_Medium(this), m_Responsibility(this), 
m_Crit(this), m_Edit(this){
    m_Base.setName("hand");
};
//REGISTER_DEFINITION(Hand, "hand");

string Hand::getInitialValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("initial")) {
        throw AttributeNotFoundException("initial");
    }
    return m_Base.getAttributeValue("initial");
};
            
MeiAttribute* Hand::getInitial() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("initial")) {
        throw AttributeNotFoundException("initial");
    }
    return m_Base.getAttribute("initial");
};
            
void Hand::setInitial(string _initial) {
    if(!m_Base.hasAttribute("initial")) {
        MeiAttribute * a = new MeiAttribute("initial", _initial);
        m_Base.addAttribute(a);
    }
};
            
bool Hand::hasInitial() {
    return m_Base.hasAttribute("initial");
};
            
HandList::HandList() : m_Bibl(this), m_Common(this){
    m_Base.setName("handList");
};
//REGISTER_DEFINITION(HandList, "handList");

History::History() : m_Bibl(this), m_Common(this){
    m_Base.setName("history");
};
//REGISTER_DEFINITION(History, "history");

IncipCode::IncipCode() : m_Bibl(this), m_Common(this), m_Internetmedia(this){
    m_Base.setName("incipCode");
};
//REGISTER_DEFINITION(IncipCode, "incipCode");

string IncipCode::getSpaceValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return m_Base.getAttributeValue("space");
};
            
MeiAttribute* IncipCode::getSpace() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return m_Base.getAttribute("space");
};
            
void IncipCode::setSpace(string _space) {
    if(!m_Base.hasAttribute("space")) {
        MeiAttribute * a = new MeiAttribute("space", _space);
        m_Base.addAttribute(a);
    }
};
            
bool IncipCode::hasSpace() {
    return m_Base.hasAttribute("space");
};
            
string IncipCode::getFormValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};
            
MeiAttribute* IncipCode::getForm() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};
            
void IncipCode::setForm(string _form) {
    if(!m_Base.hasAttribute("form")) {
        MeiAttribute * a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};
            
bool IncipCode::hasForm() {
    return m_Base.hasAttribute("form");
};
            
Inscription::Inscription() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("inscription");
};
//REGISTER_DEFINITION(Inscription, "inscription");

InstrVoice::InstrVoice() : m_Authorized(this), m_Bibl(this), m_Common(this), m_Name(this){
    m_Base.setName("instrVoice");
};
//REGISTER_DEFINITION(InstrVoice, "instrVoice");

string InstrVoice::getCountValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("count")) {
        throw AttributeNotFoundException("count");
    }
    return m_Base.getAttributeValue("count");
};
            
MeiAttribute* InstrVoice::getCount() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("count")) {
        throw AttributeNotFoundException("count");
    }
    return m_Base.getAttribute("count");
};
            
void InstrVoice::setCount(string _count) {
    if(!m_Base.hasAttribute("count")) {
        MeiAttribute * a = new MeiAttribute("count", _count);
        m_Base.addAttribute(a);
    }
};
            
bool InstrVoice::hasCount() {
    return m_Base.hasAttribute("count");
};
            
string InstrVoice::getSoloValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("solo")) {
        throw AttributeNotFoundException("solo");
    }
    return m_Base.getAttributeValue("solo");
};
            
MeiAttribute* InstrVoice::getSolo() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("solo")) {
        throw AttributeNotFoundException("solo");
    }
    return m_Base.getAttribute("solo");
};
            
void InstrVoice::setSolo(string _solo) {
    if(!m_Base.hasAttribute("solo")) {
        MeiAttribute * a = new MeiAttribute("solo", _solo);
        m_Base.addAttribute(a);
    }
};
            
bool InstrVoice::hasSolo() {
    return m_Base.hasAttribute("solo");
};
            
string InstrVoice::getRegValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return m_Base.getAttributeValue("reg");
};
            
MeiAttribute* InstrVoice::getReg() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return m_Base.getAttribute("reg");
};
            
void InstrVoice::setReg(string _reg) {
    if(!m_Base.hasAttribute("reg")) {
        MeiAttribute * a = new MeiAttribute("reg", _reg);
        m_Base.addAttribute(a);
    }
};
            
bool InstrVoice::hasReg() {
    return m_Base.hasAttribute("reg");
};
            
Interpretation::Interpretation() : m_Bibl(this), m_Common(this), m_Datapointing(this), m_Lang(this){
    m_Base.setName("interpretation");
};
//REGISTER_DEFINITION(Interpretation, "interpretation");

Key::Key() : m_AccidentalPerformed(this), m_Bibl(this), m_Common(this), m_Pitch(this), m_AccidentalArticulationSlurpresentTiepresentPitched(this)
{
    m_Base.setName("key");
};
//REGISTER_DEFINITION(Key, "key");

string Key::getModeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return m_Base.getAttributeValue("mode");
};
            
MeiAttribute* Key::getMode() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return m_Base.getAttribute("mode");
};
            
void Key::setMode(string _mode) {
    if(!m_Base.hasAttribute("mode")) {
        MeiAttribute * a = new MeiAttribute("mode", _mode);
        m_Base.addAttribute(a);
    }
};
            
bool Key::hasMode() {
    return m_Base.hasAttribute("mode");
};
            
TermList::TermList() : m_Bibl(this), m_Common(this){
    m_Base.setName("termList");
};
//REGISTER_DEFINITION(TermList, "termList");

string TermList::getClasscodeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return m_Base.getAttributeValue("classcode");
};
            
MeiAttribute* TermList::getClasscode() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return m_Base.getAttribute("classcode");
};
            
void TermList::setClasscode(string _classcode) {
    if(!m_Base.hasAttribute("classcode")) {
        MeiAttribute * a = new MeiAttribute("classcode", _classcode);
        m_Base.addAttribute(a);
    }
};
            
bool TermList::hasClasscode() {
    return m_Base.hasAttribute("classcode");
};
            
Language::Language() : m_Authorized(this), m_Bibl(this), m_Common(this), m_Name(this){
    m_Base.setName("language");
};
//REGISTER_DEFINITION(Language, "language");

LangUsage::LangUsage() : m_Bibl(this), m_Common(this), m_Datapointing(this){
    m_Base.setName("langUsage");
};
//REGISTER_DEFINITION(LangUsage, "langUsage");

Normalization::Normalization() : m_Bibl(this), m_Common(this), m_Datapointing(this), m_Lang(this), m_Regularmethod(this)
{
    m_Base.setName("normalization");
};
//REGISTER_DEFINITION(Normalization, "normalization");

NotesStmt::NotesStmt() : m_Bibl(this), m_Common(this){
    m_Base.setName("notesStmt");
};
//REGISTER_DEFINITION(NotesStmt, "notesStmt");

PerfMedium::PerfMedium() : m_Authorized(this), m_Bibl(this), m_Common(this), m_Name(this){
    m_Base.setName("perfMedium");
};
//REGISTER_DEFINITION(PerfMedium, "perfMedium");

Performer::Performer() : m_Bibl(this), m_Common(this){
    m_Base.setName("performer");
};
//REGISTER_DEFINITION(Performer, "performer");

PhysDesc::PhysDesc() : m_Bibl(this), m_Common(this){
    m_Base.setName("physDesc");
};
//REGISTER_DEFINITION(PhysDesc, "physDesc");

PhysLoc::PhysLoc() : m_Bibl(this), m_Common(this){
    m_Base.setName("physLoc");
};
//REGISTER_DEFINITION(PhysLoc, "physLoc");

PhysMedium::PhysMedium() : m_Authorized(this), m_Bibl(this), m_Common(this), m_Lang(this), m_Name(this){
    m_Base.setName("physMedium");
};
//REGISTER_DEFINITION(PhysMedium, "physMedium");

PlateNum::PlateNum() : m_Bibl(this), m_Common(this), m_Facsimile(this){
    m_Base.setName("plateNum");
};
//REGISTER_DEFINITION(PlateNum, "plateNum");

Price::Price() : m_Bibl(this), m_Common(this), m_Measurement(this){
    m_Base.setName("price");
};
//REGISTER_DEFINITION(Price, "price");

ProjectDesc::ProjectDesc() : m_Bibl(this), m_Common(this), m_Datapointing(this), m_Lang(this){
    m_Base.setName("projectDesc");
};
//REGISTER_DEFINITION(ProjectDesc, "projectDesc");

Provenance::Provenance() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("provenance");
};
//REGISTER_DEFINITION(Provenance, "provenance");

PubStmt::PubStmt() : m_Bibl(this), m_Common(this){
    m_Base.setName("pubStmt");
};
//REGISTER_DEFINITION(PubStmt, "pubStmt");

RelatedItem::RelatedItem() : m_Bibl(this), m_Common(this), m_Datapointing(this){
    m_Base.setName("relatedItem");
};
//REGISTER_DEFINITION(RelatedItem, "relatedItem");

string RelatedItem::getRelValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rel")) {
        throw AttributeNotFoundException("rel");
    }
    return m_Base.getAttributeValue("rel");
};
            
MeiAttribute* RelatedItem::getRel() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rel")) {
        throw AttributeNotFoundException("rel");
    }
    return m_Base.getAttribute("rel");
};
            
void RelatedItem::setRel(string _rel) {
    if(!m_Base.hasAttribute("rel")) {
        MeiAttribute * a = new MeiAttribute("rel", _rel);
        m_Base.addAttribute(a);
    }
};
            
bool RelatedItem::hasRel() {
    return m_Base.hasAttribute("rel");
};
            
Resp::Resp() : m_Authorized(this), m_Name(this){
    m_Base.setName("resp");
};
//REGISTER_DEFINITION(Resp, "resp");

RespStmt::RespStmt() : m_Bibl(this), m_Common(this){
    m_Base.setName("respStmt");
};
//REGISTER_DEFINITION(RespStmt, "respStmt");

RevisionDesc::RevisionDesc() : m_Bibl(this), m_Common(this){
    m_Base.setName("revisionDesc");
};
//REGISTER_DEFINITION(RevisionDesc, "revisionDesc");

SamplingDecl::SamplingDecl() : m_Bibl(this), m_Common(this), m_Datapointing(this), m_Lang(this){
    m_Base.setName("samplingDecl");
};
//REGISTER_DEFINITION(SamplingDecl, "samplingDecl");

Segmentation::Segmentation() : m_Bibl(this), m_Common(this), m_Datapointing(this), m_Lang(this){
    m_Base.setName("segmentation");
};
//REGISTER_DEFINITION(Segmentation, "segmentation");

SeriesStmt::SeriesStmt() : m_Bibl(this), m_Common(this){
    m_Base.setName("seriesStmt");
};
//REGISTER_DEFINITION(SeriesStmt, "seriesStmt");

Source::Source() : m_Bibl(this), m_Common(this), m_Datapointing(this){
    m_Base.setName("source");
};
//REGISTER_DEFINITION(Source, "source");

SourceDesc::SourceDesc() : m_Common(this){
    m_Base.setName("sourceDesc");
};
//REGISTER_DEFINITION(SourceDesc, "sourceDesc");

StdVals::StdVals() : m_Bibl(this), m_Common(this), m_Datapointing(this), m_Lang(this){
    m_Base.setName("stdVals");
};
//REGISTER_DEFINITION(StdVals, "stdVals");

SysReq::SysReq() : m_Bibl(this), m_Common(this), m_Lang(this){
    m_Base.setName("sysReq");
};
//REGISTER_DEFINITION(SysReq, "sysReq");

Term::Term() : m_Bibl(this), m_Common(this){
    m_Base.setName("term");
};
//REGISTER_DEFINITION(Term, "term");

string Term::getClasscodeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return m_Base.getAttributeValue("classcode");
};
            
MeiAttribute* Term::getClasscode() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return m_Base.getAttribute("classcode");
};
            
void Term::setClasscode(string _classcode) {
    if(!m_Base.hasAttribute("classcode")) {
        MeiAttribute * a = new MeiAttribute("classcode", _classcode);
        m_Base.addAttribute(a);
    }
};
            
bool Term::hasClasscode() {
    return m_Base.hasAttribute("classcode");
};
            
TitleStmt::TitleStmt() : m_Bibl(this), m_Common(this){
    m_Base.setName("titleStmt");
};
//REGISTER_DEFINITION(TitleStmt, "titleStmt");

TreatHist::TreatHist() : m_Bibl(this), m_Common(this){
    m_Base.setName("treatHist");
};
//REGISTER_DEFINITION(TreatHist, "treatHist");

TreatSched::TreatSched() : m_Bibl(this), m_Common(this){
    m_Base.setName("treatSched");
};
//REGISTER_DEFINITION(TreatSched, "treatSched");

Unpub::Unpub() : m_Bibl(this), m_Common(this){
    m_Base.setName("unpub");
};
//REGISTER_DEFINITION(Unpub, "unpub");

UseRestrict::UseRestrict() : m_Bibl(this), m_Common(this){
    m_Base.setName("useRestrict");
};
//REGISTER_DEFINITION(UseRestrict, "useRestrict");

Watermark::Watermark() : m_Bibl(this), m_Common(this), m_Facsimile(this){
    m_Base.setName("watermark");
};
//REGISTER_DEFINITION(Watermark, "watermark");

WorkDesc::WorkDesc() : m_Common(this){
    m_Base.setName("workDesc");
};
//REGISTER_DEFINITION(WorkDesc, "workDesc");

Work::Work() : m_Bibl(this), m_Common(this), m_Datapointing(this){
    m_Base.setName("work");
};
//REGISTER_DEFINITION(Work, "work");

EventList::EventList() : m_Bibl(this), m_Common(this), m_Typed(this){
    m_Base.setName("eventList");
};
//REGISTER_DEFINITION(EventList, "eventList");

Event::Event() : m_Bibl(this), m_Calendared(this), m_Common(this), m_Datable(this), m_Lang(this), 
m_Edit(this){
    m_Base.setName("event");
};
//REGISTER_DEFINITION(Event, "event");
