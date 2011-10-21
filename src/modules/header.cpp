#include "header.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AccessRestrict::AccessRestrict() :
    MeiElement("accessRestrict"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::AccessRestrict, "accessRestrict");
mei::AccessRestrict::~AccessRestrict() {}

/* include <accessRestrict> */

mei::AcqSource::AcqSource() :
    MeiElement("acqSource"),
    m_Bibl(this),
    m_Common(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::AcqSource, "acqSource");
mei::AcqSource::~AcqSource() {}

/* include <acqSource> */

mei::AltId::AltId() :
    MeiElement("altId"),
    m_Bibl(this),
    m_Common(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AltId, "altId");
mei::AltId::~AltId() {}

/* include <altId> */

mei::AppInfo::AppInfo() :
    MeiElement("appInfo"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::AppInfo, "appInfo");
mei::AppInfo::~AppInfo() {}

/* include <appInfo> */

mei::Application::Application() :
    MeiElement("application"),
    m_Common(this),
    m_Datable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Application, "application");
mei::Application::~Application() {}

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
/* include <application> */

mei::Availability::Availability() :
    MeiElement("availability"),
    m_Bibl(this),
    m_Common(this),
    m_Datapointing(this)
{
}
REGISTER_DEFINITION(mei::Availability, "availability");
mei::Availability::~Availability() {}

/* include <availability> */

mei::Change::Change() :
    MeiElement("change"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Change, "change");
mei::Change::~Change() {}

/* include <change> */

mei::ChangeDesc::ChangeDesc() :
    MeiElement("changeDesc"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::ChangeDesc, "changeDesc");
mei::ChangeDesc::~ChangeDesc() {}

/* include <changeDesc> */

mei::ClassCode::ClassCode() :
    MeiElement("classCode"),
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::ClassCode, "classCode");
mei::ClassCode::~ClassCode() {}

/* include <classCode> */

mei::Classification::Classification() :
    MeiElement("classification"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this)
{
}
REGISTER_DEFINITION(mei::Classification, "classification");
mei::Classification::~Classification() {}

/* include <classification> */

mei::Condition::Condition() :
    MeiElement("condition"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Condition, "condition");
mei::Condition::~Condition() {}

/* include <condition> */

mei::ContentItem::ContentItem() :
    MeiElement("contentItem"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::ContentItem, "contentItem");
mei::ContentItem::~ContentItem() {}

/* include <contentItem> */

mei::Contents::Contents() :
    MeiElement("contents"),
    m_Common(this),
    m_Bibl(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Contents, "contents");
mei::Contents::~Contents() {}

/* include <contents> */

mei::Correction::Correction() :
    MeiElement("correction"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this)
{
}
REGISTER_DEFINITION(mei::Correction, "correction");
mei::Correction::~Correction() {}

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
/* include <correction> */

mei::Creation::Creation() :
    MeiElement("creation"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Creation, "creation");
mei::Creation::~Creation() {}

/* include <creation> */

mei::Dimensions::Dimensions() :
    MeiElement("dimensions"),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Dimensions, "dimensions");
mei::Dimensions::~Dimensions() {}

/* include <dimensions> */

mei::EditionStmt::EditionStmt() :
    MeiElement("editionStmt"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::EditionStmt, "editionStmt");
mei::EditionStmt::~EditionStmt() {}

/* include <editionStmt> */

mei::EditorialDecl::EditorialDecl() :
    MeiElement("editorialDecl"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::EditorialDecl, "editorialDecl");
mei::EditorialDecl::~EditorialDecl() {}

/* include <editorialDecl> */

mei::EncodingDesc::EncodingDesc() :
    MeiElement("encodingDesc"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::EncodingDesc, "encodingDesc");
mei::EncodingDesc::~EncodingDesc() {}

/* include <encodingDesc> */

mei::Ensemble::Ensemble() :
    MeiElement("ensemble"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Ensemble, "ensemble");
mei::Ensemble::~Ensemble() {}

/* include <ensemble> */

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
}
REGISTER_DEFINITION(mei::Event, "event");
mei::Event::~Event() {}

/* include <event> */

mei::EventList::EventList() :
    MeiElement("eventList"),
    m_Bibl(this),
    m_Common(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::EventList, "eventList");
mei::EventList::~EventList() {}

/* include <eventList> */

mei::ExhibHist::ExhibHist() :
    MeiElement("exhibHist"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::ExhibHist, "exhibHist");
mei::ExhibHist::~ExhibHist() {}

/* include <exhibHist> */

mei::Extent::Extent() :
    MeiElement("extent"),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Extent, "extent");
mei::Extent::~Extent() {}

/* include <extent> */

mei::FileDesc::FileDesc() :
    MeiElement("fileDesc"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::FileDesc, "fileDesc");
mei::FileDesc::~FileDesc() {}

/* include <fileDesc> */

mei::Fingerprint::Fingerprint() :
    MeiElement("fingerprint"),
    m_Common(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Fingerprint, "fingerprint");
mei::Fingerprint::~Fingerprint() {}

/* include <fingerprint> */

mei::Hand::Hand() :
    MeiElement("hand"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Medium(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Hand, "hand");
mei::Hand::~Hand() {}

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
/* include <hand> */

mei::HandList::HandList() :
    MeiElement("handList"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::HandList, "handList");
mei::HandList::~HandList() {}

/* include <handList> */

mei::History::History() :
    MeiElement("history"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::History, "history");
mei::History::~History() {}

/* include <history> */

mei::IncipCode::IncipCode() :
    MeiElement("incipCode"),
    m_Common(this),
    m_Bibl(this),
    m_Internetmedia(this)
{
}
REGISTER_DEFINITION(mei::IncipCode, "incipCode");
mei::IncipCode::~IncipCode() {}

MeiAttribute* mei::IncipCode::getSpace() {
    if (!hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return getAttribute("space");
};

void mei::IncipCode::setSpace(std::string _space) {
    if (!hasAttribute("space")) {
        MeiAttribute *a = new MeiAttribute("space", _space);
        MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
        a->setNamespace(s);
        addAttribute(a);
    }
};

bool mei::IncipCode::hasSpace() {
    return hasAttribute("space");
};

void mei::IncipCode::removeSpace() {
    removeAttribute("space");
};
MeiAttribute* mei::IncipCode::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::IncipCode::setForm(std::string _form) {
    if (!hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        addAttribute(a);
    }
};

bool mei::IncipCode::hasForm() {
    return hasAttribute("form");
};

void mei::IncipCode::removeForm() {
    removeAttribute("form");
};
/* include <incipCode> */

mei::IncipText::IncipText() :
    MeiElement("incipText"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Pointing(this),
    m_Internetmedia(this)
{
}
REGISTER_DEFINITION(mei::IncipText, "incipText");
mei::IncipText::~IncipText() {}

/* include <incipText> */

mei::Inscription::Inscription() :
    MeiElement("inscription"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Inscription, "inscription");
mei::Inscription::~Inscription() {}

/* include <inscription> */

mei::InstrVoice::InstrVoice() :
    MeiElement("instrVoice"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this),
    m_Regularized(this)
{
}
REGISTER_DEFINITION(mei::InstrVoice, "instrVoice");
mei::InstrVoice::~InstrVoice() {}

MeiAttribute* mei::InstrVoice::getCount() {
    if (!hasAttribute("count")) {
        throw AttributeNotFoundException("count");
    }
    return getAttribute("count");
};

void mei::InstrVoice::setCount(std::string _count) {
    if (!hasAttribute("count")) {
        MeiAttribute *a = new MeiAttribute("count", _count);
        addAttribute(a);
    }
};

bool mei::InstrVoice::hasCount() {
    return hasAttribute("count");
};

void mei::InstrVoice::removeCount() {
    removeAttribute("count");
};
MeiAttribute* mei::InstrVoice::getSolo() {
    if (!hasAttribute("solo")) {
        throw AttributeNotFoundException("solo");
    }
    return getAttribute("solo");
};

void mei::InstrVoice::setSolo(std::string _solo) {
    if (!hasAttribute("solo")) {
        MeiAttribute *a = new MeiAttribute("solo", _solo);
        addAttribute(a);
    }
};

bool mei::InstrVoice::hasSolo() {
    return hasAttribute("solo");
};

void mei::InstrVoice::removeSolo() {
    removeAttribute("solo");
};
/* include <instrVoice> */

mei::Interpretation::Interpretation() :
    MeiElement("interpretation"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Interpretation, "interpretation");
mei::Interpretation::~Interpretation() {}

/* include <interpretation> */

mei::Key::Key() :
    MeiElement("key"),
    m_Common(this),
    m_Bibl(this),
    m_Accidental(this),
    m_Pitch(this)
{
}
REGISTER_DEFINITION(mei::Key, "key");
mei::Key::~Key() {}

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
/* include <key> */

mei::LangUsage::LangUsage() :
    MeiElement("langUsage"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this)
{
}
REGISTER_DEFINITION(mei::LangUsage, "langUsage");
mei::LangUsage::~LangUsage() {}

/* include <langUsage> */

mei::Language::Language() :
    MeiElement("language"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}
REGISTER_DEFINITION(mei::Language, "language");
mei::Language::~Language() {}

/* include <language> */

mei::MeiHead::MeiHead() :
    MeiElement("meiHead"),
    m_Bibl(this),
    m_Common(this),
    m_Lang(this),
    m_Meiversion(this)
{
}
REGISTER_DEFINITION(mei::MeiHead, "meiHead");
mei::MeiHead::~MeiHead() {}

MeiAttribute* mei::MeiHead::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::MeiHead::setType(std::string _type) {
    if (!hasAttribute("type")) {
        MeiAttribute *a = new MeiAttribute("type", _type);
        addAttribute(a);
    }
};

bool mei::MeiHead::hasType() {
    return hasAttribute("type");
};

void mei::MeiHead::removeType() {
    removeAttribute("type");
};
/* include <meiHead> */

mei::Meter::Meter() :
    MeiElement("meter"),
    m_MetersLog(this),
    m_MetersVis(this)
{
}
REGISTER_DEFINITION(mei::Meter, "meter");
mei::Meter::~Meter() {}

/* include <meter> */

mei::Normalization::Normalization() :
    MeiElement("normalization"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this)
{
}
REGISTER_DEFINITION(mei::Normalization, "normalization");
mei::Normalization::~Normalization() {}

/* include <normalization> */

mei::NotesStmt::NotesStmt() :
    MeiElement("notesStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::NotesStmt, "notesStmt");
mei::NotesStmt::~NotesStmt() {}

/* include <notesStmt> */

mei::PerfMedium::PerfMedium() :
    MeiElement("perfMedium"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}
REGISTER_DEFINITION(mei::PerfMedium, "perfMedium");
mei::PerfMedium::~PerfMedium() {}

/* include <perfMedium> */

mei::Performer::Performer() :
    MeiElement("performer"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Performer, "performer");
mei::Performer::~Performer() {}

/* include <performer> */

mei::PhysDesc::PhysDesc() :
    MeiElement("physDesc"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PhysDesc, "physDesc");
mei::PhysDesc::~PhysDesc() {}

/* include <physDesc> */

mei::PhysLoc::PhysLoc() :
    MeiElement("physLoc"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PhysLoc, "physLoc");
mei::PhysLoc::~PhysLoc() {}

/* include <physLoc> */

mei::PhysMedium::PhysMedium() :
    MeiElement("physMedium"),
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PhysMedium, "physMedium");
mei::PhysMedium::~PhysMedium() {}

/* include <physMedium> */

mei::PlateNum::PlateNum() :
    MeiElement("plateNum"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::PlateNum, "plateNum");
mei::PlateNum::~PlateNum() {}

/* include <plateNum> */

mei::Price::Price() :
    MeiElement("price"),
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Price, "price");
mei::Price::~Price() {}

/* include <price> */

mei::ProjectDesc::ProjectDesc() :
    MeiElement("projectDesc"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::ProjectDesc, "projectDesc");
mei::ProjectDesc::~ProjectDesc() {}

/* include <projectDesc> */

mei::Provenance::Provenance() :
    MeiElement("provenance"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Provenance, "provenance");
mei::Provenance::~Provenance() {}

/* include <provenance> */

mei::PubStmt::PubStmt() :
    MeiElement("pubStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PubStmt, "pubStmt");
mei::PubStmt::~PubStmt() {}

/* include <pubStmt> */

mei::RelatedItem::RelatedItem() :
    MeiElement("relatedItem"),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::RelatedItem, "relatedItem");
mei::RelatedItem::~RelatedItem() {}

MeiAttribute* mei::RelatedItem::getRel() {
    if (!hasAttribute("rel")) {
        throw AttributeNotFoundException("rel");
    }
    return getAttribute("rel");
};

void mei::RelatedItem::setRel(std::string _rel) {
    if (!hasAttribute("rel")) {
        MeiAttribute *a = new MeiAttribute("rel", _rel);
        addAttribute(a);
    }
};

bool mei::RelatedItem::hasRel() {
    return hasAttribute("rel");
};

void mei::RelatedItem::removeRel() {
    removeAttribute("rel");
};
/* include <relatedItem> */

mei::Resp::Resp() :
    MeiElement("resp"),
    m_Authorized(this)
{
}
REGISTER_DEFINITION(mei::Resp, "resp");
mei::Resp::~Resp() {}

/* include <resp> */

mei::RespStmt::RespStmt() :
    MeiElement("respStmt"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::RespStmt, "respStmt");
mei::RespStmt::~RespStmt() {}

/* include <respStmt> */

mei::RevisionDesc::RevisionDesc() :
    MeiElement("revisionDesc"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::RevisionDesc, "revisionDesc");
mei::RevisionDesc::~RevisionDesc() {}

/* include <revisionDesc> */

mei::SamplingDecl::SamplingDecl() :
    MeiElement("samplingDecl"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::SamplingDecl, "samplingDecl");
mei::SamplingDecl::~SamplingDecl() {}

/* include <samplingDecl> */

mei::Segmentation::Segmentation() :
    MeiElement("segmentation"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Segmentation, "segmentation");
mei::Segmentation::~Segmentation() {}

/* include <segmentation> */

mei::SeriesStmt::SeriesStmt() :
    MeiElement("seriesStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::SeriesStmt, "seriesStmt");
mei::SeriesStmt::~SeriesStmt() {}

/* include <seriesStmt> */

mei::Source::Source() :
    MeiElement("source"),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Source, "source");
mei::Source::~Source() {}

/* include <source> */

mei::SourceDesc::SourceDesc() :
    MeiElement("sourceDesc"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::SourceDesc, "sourceDesc");
mei::SourceDesc::~SourceDesc() {}

/* include <sourceDesc> */

mei::StdVals::StdVals() :
    MeiElement("stdVals"),
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::StdVals, "stdVals");
mei::StdVals::~StdVals() {}

/* include <stdVals> */

mei::SysReq::SysReq() :
    MeiElement("sysReq"),
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::SysReq, "sysReq");
mei::SysReq::~SysReq() {}

/* include <sysReq> */

mei::Term::Term() :
    MeiElement("term"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Term, "term");
mei::Term::~Term() {}

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
/* include <term> */

mei::TermList::TermList() :
    MeiElement("termList"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TermList, "termList");
mei::TermList::~TermList() {}

MeiAttribute* mei::TermList::getClasscode() {
    if (!hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return getAttribute("classcode");
};

void mei::TermList::setClasscode(std::string _classcode) {
    if (!hasAttribute("classcode")) {
        MeiAttribute *a = new MeiAttribute("classcode", _classcode);
        addAttribute(a);
    }
};

bool mei::TermList::hasClasscode() {
    return hasAttribute("classcode");
};

void mei::TermList::removeClasscode() {
    removeAttribute("classcode");
};
/* include <termList> */

mei::TitleStmt::TitleStmt() :
    MeiElement("titleStmt"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::TitleStmt, "titleStmt");
mei::TitleStmt::~TitleStmt() {}

/* include <titleStmt> */

mei::TreatHist::TreatHist() :
    MeiElement("treatHist"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TreatHist, "treatHist");
mei::TreatHist::~TreatHist() {}

/* include <treatHist> */

mei::TreatSched::TreatSched() :
    MeiElement("treatSched"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TreatSched, "treatSched");
mei::TreatSched::~TreatSched() {}

/* include <treatSched> */

mei::Unpub::Unpub() :
    MeiElement("unpub"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Unpub, "unpub");
mei::Unpub::~Unpub() {}

/* include <unpub> */

mei::UseRestrict::UseRestrict() :
    MeiElement("useRestrict"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::UseRestrict, "useRestrict");
mei::UseRestrict::~UseRestrict() {}

/* include <useRestrict> */

mei::Watermark::Watermark() :
    MeiElement("watermark"),
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}
REGISTER_DEFINITION(mei::Watermark, "watermark");
mei::Watermark::~Watermark() {}

/* include <watermark> */

mei::Work::Work() :
    MeiElement("work"),
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Work, "work");
mei::Work::~Work() {}

/* include <work> */

mei::WorkDesc::WorkDesc() :
    MeiElement("workDesc"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::WorkDesc, "workDesc");
mei::WorkDesc::~WorkDesc() {}

/* include <workDesc> */



