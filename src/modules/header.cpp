

#include "header.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Accessrestrict::Accessrestrict() : 
    MeiElement("accessRestrict"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Accessrestrict, "accessRestrict");



mei::Acqsource::Acqsource() : 
    MeiElement("acqSource"),
    m_Bibl(this),
    m_Common(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Acqsource, "acqSource");



mei::Altid::Altid() : 
    MeiElement("altId"),
    m_Bibl(this),
    m_Common(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Altid, "altId");



mei::Appinfo::Appinfo() : 
    MeiElement("appInfo"),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Appinfo, "appInfo");



mei::Application::Application() : 
    MeiElement("application"),
    m_Common(this),
    m_Datable(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Application, "application");


MeiAttribute* mei::Application::getVersion() {
    if (!hasAttribute("version")) {
        throw AttributeNotFoundException("version");
    }
    return getAttribute("version");
};

void mei::Application::setVersion(std::string _version) {
    if (!hasAttribute("version")) {
        MeiAttribute *a = new MeiAttribute("version", _version);
        addAttribute(a);
    }
};

bool mei::Application::hasVersion() {
    return hasAttribute("version");
};

void mei::Application::removeVersion() {
    removeAttribute("version");
};


mei::Availability::Availability() : 
    MeiElement("availability"),
    m_Bibl(this),
    m_Common(this),
    m_Datapointing(this) 
{
};
REGISTER_DEFINITION(mei::Availability, "availability");



mei::Change::Change() : 
    MeiElement("change"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Change, "change");



mei::Changedesc::Changedesc() : 
    MeiElement("changeDesc"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Changedesc, "changeDesc");



mei::Classcode::Classcode() : 
    MeiElement("classCode"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Classcode, "classCode");



mei::Classification::Classification() : 
    MeiElement("classification"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this) 
{
};
REGISTER_DEFINITION(mei::Classification, "classification");



mei::Condition::Condition() : 
    MeiElement("condition"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Condition, "condition");



mei::Contentitem::Contentitem() : 
    MeiElement("contentItem"),
    m_Bibl(this),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Contentitem, "contentItem");



mei::Contents::Contents() : 
    MeiElement("contents"),
    m_Common(this),
    m_Bibl(this),
    m_LinkExternal(this) 
{
};
REGISTER_DEFINITION(mei::Contents, "contents");



mei::Correction::Correction() : 
    MeiElement("correction"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this) 
{
};
REGISTER_DEFINITION(mei::Correction, "correction");


MeiAttribute* mei::Correction::getCorrlevel() {
    if (!hasAttribute("corrlevel")) {
        throw AttributeNotFoundException("corrlevel");
    }
    return getAttribute("corrlevel");
};

void mei::Correction::setCorrlevel(std::string _corrlevel) {
    if (!hasAttribute("corrlevel")) {
        MeiAttribute *a = new MeiAttribute("corrlevel", _corrlevel);
        addAttribute(a);
    }
};

bool mei::Correction::hasCorrlevel() {
    return hasAttribute("corrlevel");
};

void mei::Correction::removeCorrlevel() {
    removeAttribute("corrlevel");
};


mei::Creation::Creation() : 
    MeiElement("creation"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Creation, "creation");



mei::Dimensions::Dimensions() : 
    MeiElement("dimensions"),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this) 
{
};
REGISTER_DEFINITION(mei::Dimensions, "dimensions");



mei::Editionstmt::Editionstmt() : 
    MeiElement("editionStmt"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Editionstmt, "editionStmt");



mei::Editorialdecl::Editorialdecl() : 
    MeiElement("editorialDecl"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Editorialdecl, "editorialDecl");



mei::Encodingdesc::Encodingdesc() : 
    MeiElement("encodingDesc"),
    m_Bibl(this),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Encodingdesc, "encodingDesc");



mei::Ensemble::Ensemble() : 
    MeiElement("ensemble"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Ensemble, "ensemble");



mei::Event::Event() : 
    MeiElement("event"),
    m_Bibl(this),
    m_Calendared(this),
    m_Common(this),
    m_Datable(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Event, "event");



mei::Eventlist::Eventlist() : 
    MeiElement("eventList"),
    m_Bibl(this),
    m_Common(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Eventlist, "eventList");



mei::Exhibhist::Exhibhist() : 
    MeiElement("exhibHist"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Exhibhist, "exhibHist");



mei::Extent::Extent() : 
    MeiElement("extent"),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this) 
{
};
REGISTER_DEFINITION(mei::Extent, "extent");



mei::Filedesc::Filedesc() : 
    MeiElement("fileDesc"),
    m_Bibl(this),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Filedesc, "fileDesc");



mei::Fingerprint::Fingerprint() : 
    MeiElement("fingerprint"),
    m_Common(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Fingerprint, "fingerprint");



mei::Hand::Hand() : 
    MeiElement("hand"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Medium(this),
    m_Responsibility(this) 
{
};
REGISTER_DEFINITION(mei::Hand, "hand");


MeiAttribute* mei::Hand::getInitial() {
    if (!hasAttribute("initial")) {
        throw AttributeNotFoundException("initial");
    }
    return getAttribute("initial");
};

void mei::Hand::setInitial(std::string _initial) {
    if (!hasAttribute("initial")) {
        MeiAttribute *a = new MeiAttribute("initial", _initial);
        addAttribute(a);
    }
};

bool mei::Hand::hasInitial() {
    return hasAttribute("initial");
};

void mei::Hand::removeInitial() {
    removeAttribute("initial");
};


mei::Handlist::Handlist() : 
    MeiElement("handList"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Handlist, "handList");



mei::History::History() : 
    MeiElement("history"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::History, "history");



mei::Incipcode::Incipcode() : 
    MeiElement("incipCode"),
    m_Common(this),
    m_Bibl(this),
    m_Internetmedia(this) 
{
};
REGISTER_DEFINITION(mei::Incipcode, "incipCode");


MeiAttribute* mei::Incipcode::getSpace() {
    if (!hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return getAttribute("space");
};

void mei::Incipcode::setSpace(std::string _space) {
    if (!hasAttribute("space")) {
        MeiAttribute *a = new MeiAttribute("space", _space);
        addAttribute(a);
    }
};

bool mei::Incipcode::hasSpace() {
    return hasAttribute("space");
};

void mei::Incipcode::removeSpace() {
    removeAttribute("space");
};

MeiAttribute* mei::Incipcode::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::Incipcode::setForm(std::string _form) {
    if (!hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        addAttribute(a);
    }
};

bool mei::Incipcode::hasForm() {
    return hasAttribute("form");
};

void mei::Incipcode::removeForm() {
    removeAttribute("form");
};


mei::Inscription::Inscription() : 
    MeiElement("inscription"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Inscription, "inscription");



mei::Instrvoice::Instrvoice() : 
    MeiElement("instrVoice"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this),
    m_Regularized(this) 
{
};
REGISTER_DEFINITION(mei::Instrvoice, "instrVoice");


MeiAttribute* mei::Instrvoice::getCount() {
    if (!hasAttribute("count")) {
        throw AttributeNotFoundException("count");
    }
    return getAttribute("count");
};

void mei::Instrvoice::setCount(std::string _count) {
    if (!hasAttribute("count")) {
        MeiAttribute *a = new MeiAttribute("count", _count);
        addAttribute(a);
    }
};

bool mei::Instrvoice::hasCount() {
    return hasAttribute("count");
};

void mei::Instrvoice::removeCount() {
    removeAttribute("count");
};

MeiAttribute* mei::Instrvoice::getSolo() {
    if (!hasAttribute("solo")) {
        throw AttributeNotFoundException("solo");
    }
    return getAttribute("solo");
};

void mei::Instrvoice::setSolo(std::string _solo) {
    if (!hasAttribute("solo")) {
        MeiAttribute *a = new MeiAttribute("solo", _solo);
        addAttribute(a);
    }
};

bool mei::Instrvoice::hasSolo() {
    return hasAttribute("solo");
};

void mei::Instrvoice::removeSolo() {
    removeAttribute("solo");
};


mei::Interpretation::Interpretation() : 
    MeiElement("interpretation"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Interpretation, "interpretation");



mei::Key::Key() : 
    MeiElement("key"),
    m_Common(this),
    m_Bibl(this),
    m_AccidentalPerformed(this),
    m_Pitch(this) 
{
};
REGISTER_DEFINITION(mei::Key, "key");


MeiAttribute* mei::Key::getMode() {
    if (!hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return getAttribute("mode");
};

void mei::Key::setMode(std::string _mode) {
    if (!hasAttribute("mode")) {
        MeiAttribute *a = new MeiAttribute("mode", _mode);
        addAttribute(a);
    }
};

bool mei::Key::hasMode() {
    return hasAttribute("mode");
};

void mei::Key::removeMode() {
    removeAttribute("mode");
};


mei::Langusage::Langusage() : 
    MeiElement("langUsage"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this) 
{
};
REGISTER_DEFINITION(mei::Langusage, "langUsage");



mei::Language::Language() : 
    MeiElement("language"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this) 
{
};
REGISTER_DEFINITION(mei::Language, "language");



mei::Meihead::Meihead() : 
    MeiElement("meiHead"),
    m_Bibl(this),
    m_Common(this),
    m_Lang(this),
    m_Meiversion(this) 
{
};
REGISTER_DEFINITION(mei::Meihead, "meiHead");


MeiAttribute* mei::Meihead::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Meihead::setType(std::string _type) {
    if (!hasAttribute("type")) {
        MeiAttribute *a = new MeiAttribute("type", _type);
        addAttribute(a);
    }
};

bool mei::Meihead::hasType() {
    return hasAttribute("type");
};

void mei::Meihead::removeType() {
    removeAttribute("type");
};


mei::Normalization::Normalization() : 
    MeiElement("normalization"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this) 
{
};
REGISTER_DEFINITION(mei::Normalization, "normalization");



mei::Notesstmt::Notesstmt() : 
    MeiElement("notesStmt"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Notesstmt, "notesStmt");



mei::Perfmedium::Perfmedium() : 
    MeiElement("perfMedium"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this) 
{
};
REGISTER_DEFINITION(mei::Perfmedium, "perfMedium");



mei::Performer::Performer() : 
    MeiElement("performer"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Performer, "performer");



mei::Physdesc::Physdesc() : 
    MeiElement("physDesc"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Physdesc, "physDesc");



mei::Physloc::Physloc() : 
    MeiElement("physLoc"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Physloc, "physLoc");



mei::Physmedium::Physmedium() : 
    MeiElement("physMedium"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Physmedium, "physMedium");



mei::Platenum::Platenum() : 
    MeiElement("plateNum"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this) 
{
};
REGISTER_DEFINITION(mei::Platenum, "plateNum");



mei::Price::Price() : 
    MeiElement("price"),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this) 
{
};
REGISTER_DEFINITION(mei::Price, "price");



mei::Projectdesc::Projectdesc() : 
    MeiElement("projectDesc"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Projectdesc, "projectDesc");



mei::Provenance::Provenance() : 
    MeiElement("provenance"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Provenance, "provenance");



mei::Pubstmt::Pubstmt() : 
    MeiElement("pubStmt"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Pubstmt, "pubStmt");



mei::Relateditem::Relateditem() : 
    MeiElement("relatedItem"),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Relateditem, "relatedItem");


MeiAttribute* mei::Relateditem::getRel() {
    if (!hasAttribute("rel")) {
        throw AttributeNotFoundException("rel");
    }
    return getAttribute("rel");
};

void mei::Relateditem::setRel(std::string _rel) {
    if (!hasAttribute("rel")) {
        MeiAttribute *a = new MeiAttribute("rel", _rel);
        addAttribute(a);
    }
};

bool mei::Relateditem::hasRel() {
    return hasAttribute("rel");
};

void mei::Relateditem::removeRel() {
    removeAttribute("rel");
};


mei::Resp::Resp() : 
    MeiElement("resp"),
    m_Authorized(this) 
{
};
REGISTER_DEFINITION(mei::Resp, "resp");



mei::Respstmt::Respstmt() : 
    MeiElement("respStmt"),
    m_Bibl(this),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Respstmt, "respStmt");



mei::Revisiondesc::Revisiondesc() : 
    MeiElement("revisionDesc"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Revisiondesc, "revisionDesc");



mei::Samplingdecl::Samplingdecl() : 
    MeiElement("samplingDecl"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Samplingdecl, "samplingDecl");



mei::Segmentation::Segmentation() : 
    MeiElement("segmentation"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Segmentation, "segmentation");



mei::Seriesstmt::Seriesstmt() : 
    MeiElement("seriesStmt"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Seriesstmt, "seriesStmt");



mei::Source::Source() : 
    MeiElement("source"),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Source, "source");



mei::Sourcedesc::Sourcedesc() : 
    MeiElement("sourceDesc"),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Sourcedesc, "sourceDesc");



mei::Stdvals::Stdvals() : 
    MeiElement("stdVals"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Stdvals, "stdVals");



mei::Sysreq::Sysreq() : 
    MeiElement("sysReq"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Sysreq, "sysReq");



mei::Term::Term() : 
    MeiElement("term"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Term, "term");


MeiAttribute* mei::Term::getClasscode() {
    if (!hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return getAttribute("classcode");
};

void mei::Term::setClasscode(std::string _classcode) {
    if (!hasAttribute("classcode")) {
        MeiAttribute *a = new MeiAttribute("classcode", _classcode);
        addAttribute(a);
    }
};

bool mei::Term::hasClasscode() {
    return hasAttribute("classcode");
};

void mei::Term::removeClasscode() {
    removeAttribute("classcode");
};


mei::Termlist::Termlist() : 
    MeiElement("termList"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Termlist, "termList");


MeiAttribute* mei::Termlist::getClasscode() {
    if (!hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return getAttribute("classcode");
};

void mei::Termlist::setClasscode(std::string _classcode) {
    if (!hasAttribute("classcode")) {
        MeiAttribute *a = new MeiAttribute("classcode", _classcode);
        addAttribute(a);
    }
};

bool mei::Termlist::hasClasscode() {
    return hasAttribute("classcode");
};

void mei::Termlist::removeClasscode() {
    removeAttribute("classcode");
};


mei::Titlestmt::Titlestmt() : 
    MeiElement("titleStmt"),
    m_Bibl(this),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Titlestmt, "titleStmt");



mei::Treathist::Treathist() : 
    MeiElement("treatHist"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Treathist, "treatHist");



mei::Treatsched::Treatsched() : 
    MeiElement("treatSched"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Treatsched, "treatSched");



mei::Unpub::Unpub() : 
    MeiElement("unpub"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Unpub, "unpub");



mei::Userestrict::Userestrict() : 
    MeiElement("useRestrict"),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Userestrict, "useRestrict");



mei::Watermark::Watermark() : 
    MeiElement("watermark"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this) 
{
};
REGISTER_DEFINITION(mei::Watermark, "watermark");



mei::Work::Work() : 
    MeiElement("work"),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this) 
{
};
REGISTER_DEFINITION(mei::Work, "work");



mei::Workdesc::Workdesc() : 
    MeiElement("workDesc"),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Workdesc, "workDesc");




