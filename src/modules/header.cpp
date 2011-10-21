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
mei::AccessRestrict::AccessRestrict(const AccessRestrict& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

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
mei::AcqSource::AcqSource(const AcqSource& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this),
    m_Lang(this)
{
}

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
mei::AltId::AltId(const AltId& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this),
    m_Typed(this)
{
}

/* include <altId> */

mei::AppInfo::AppInfo() :
    MeiElement("appInfo"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::AppInfo, "appInfo");
mei::AppInfo::~AppInfo() {}
mei::AppInfo::AppInfo(const AppInfo& other) :
    MeiElement(other), 
    m_Common(this)
{
}

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
mei::Application::Application(const Application& other) :
    MeiElement(other), 
    m_Common(this),
    m_Datable(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Application::getVersion() {
    if (!hasAttribute("version")) {
        throw AttributeNotFoundException("version");
    }
    return getAttribute("version");
};

void mei::Application::setVersion(std::string _version) {
    MeiAttribute *a = new MeiAttribute("version", _version);
    addAttribute(a);
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
mei::Availability::Availability(const Availability& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this),
    m_Datapointing(this)
{
}

/* include <availability> */

mei::Change::Change() :
    MeiElement("change"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Change, "change");
mei::Change::~Change() {}
mei::Change::Change(const Change& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::ChangeDesc::ChangeDesc(const ChangeDesc& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

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
mei::ClassCode::ClassCode(const ClassCode& other) :
    MeiElement(other), 
    m_Common(this),
    m_Authorized(this),
    m_Bibl(this)
{
}

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
mei::Classification::Classification(const Classification& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this)
{
}

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
mei::Condition::Condition(const Condition& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <condition> */

mei::ContentItem::ContentItem() :
    MeiElement("contentItem"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::ContentItem, "contentItem");
mei::ContentItem::~ContentItem() {}
mei::ContentItem::ContentItem(const ContentItem& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this)
{
}

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
mei::Contents::Contents(const Contents& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Pointing(this)
{
}

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
mei::Correction::Correction(const Correction& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this)
{
}

MeiAttribute* mei::Correction::getCorrlevel() {
    if (!hasAttribute("corrlevel")) {
        throw AttributeNotFoundException("corrlevel");
    }
    return getAttribute("corrlevel");
};

void mei::Correction::setCorrlevel(std::string _corrlevel) {
    MeiAttribute *a = new MeiAttribute("corrlevel", _corrlevel);
    addAttribute(a);
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
mei::Creation::Creation(const Creation& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

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
mei::Dimensions::Dimensions(const Dimensions& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}

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
mei::EditionStmt::EditionStmt(const EditionStmt& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

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
mei::EditorialDecl::EditorialDecl(const EditorialDecl& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

/* include <editorialDecl> */

mei::EncodingDesc::EncodingDesc() :
    MeiElement("encodingDesc"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::EncodingDesc, "encodingDesc");
mei::EncodingDesc::~EncodingDesc() {}
mei::EncodingDesc::EncodingDesc(const EncodingDesc& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this)
{
}

/* include <encodingDesc> */

mei::Ensemble::Ensemble() :
    MeiElement("ensemble"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Ensemble, "ensemble");
mei::Ensemble::~Ensemble() {}
mei::Ensemble::Ensemble(const Ensemble& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::Event::Event(const Event& other) :
    MeiElement(other), 
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
mei::EventList::EventList(const EventList& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this),
    m_Typed(this)
{
}

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
mei::ExhibHist::ExhibHist(const ExhibHist& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

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
mei::Extent::Extent(const Extent& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}

/* include <extent> */

mei::FileDesc::FileDesc() :
    MeiElement("fileDesc"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::FileDesc, "fileDesc");
mei::FileDesc::~FileDesc() {}
mei::FileDesc::FileDesc(const FileDesc& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this)
{
}

/* include <fileDesc> */

mei::Fingerprint::Fingerprint() :
    MeiElement("fingerprint"),
    m_Common(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Fingerprint, "fingerprint");
mei::Fingerprint::~Fingerprint() {}
mei::Fingerprint::Fingerprint(const Fingerprint& other) :
    MeiElement(other), 
    m_Common(this),
    m_Lang(this)
{
}

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
mei::Hand::Hand(const Hand& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Medium(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Hand::getInitial() {
    if (!hasAttribute("initial")) {
        throw AttributeNotFoundException("initial");
    }
    return getAttribute("initial");
};

void mei::Hand::setInitial(std::string _initial) {
    MeiAttribute *a = new MeiAttribute("initial", _initial);
    addAttribute(a);
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
mei::HandList::HandList(const HandList& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

/* include <handList> */

mei::History::History() :
    MeiElement("history"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::History, "history");
mei::History::~History() {}
mei::History::History(const History& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::IncipCode::IncipCode(const IncipCode& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Internetmedia(this)
{
}

MeiAttribute* mei::IncipCode::getSpace() {
    if (!hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return getAttribute("space");
};

void mei::IncipCode::setSpace(std::string _space) {
    MeiAttribute *a = new MeiAttribute("space", _space);
        MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
        a->setNamespace(s);
    addAttribute(a);
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
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
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
mei::IncipText::IncipText(const IncipText& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this),
    m_Pointing(this),
    m_Internetmedia(this)
{
}

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
mei::Inscription::Inscription(const Inscription& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

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
mei::InstrVoice::InstrVoice(const InstrVoice& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this),
    m_Regularized(this)
{
}

MeiAttribute* mei::InstrVoice::getCount() {
    if (!hasAttribute("count")) {
        throw AttributeNotFoundException("count");
    }
    return getAttribute("count");
};

void mei::InstrVoice::setCount(std::string _count) {
    MeiAttribute *a = new MeiAttribute("count", _count);
    addAttribute(a);
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
    MeiAttribute *a = new MeiAttribute("solo", _solo);
    addAttribute(a);
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
mei::Interpretation::Interpretation(const Interpretation& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

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
mei::Key::Key(const Key& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Accidental(this),
    m_Pitch(this)
{
}

MeiAttribute* mei::Key::getMode() {
    if (!hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return getAttribute("mode");
};

void mei::Key::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    addAttribute(a);
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
mei::LangUsage::LangUsage(const LangUsage& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this)
{
}

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
mei::Language::Language(const Language& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}

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
mei::MeiHead::MeiHead(const MeiHead& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this),
    m_Lang(this),
    m_Meiversion(this)
{
}

MeiAttribute* mei::MeiHead::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::MeiHead::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
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
mei::Meter::Meter(const Meter& other) :
    MeiElement(other), 
    m_MetersLog(this),
    m_MetersVis(this)
{
}

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
mei::Normalization::Normalization(const Normalization& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this),
    m_Regularmethod(this)
{
}

/* include <normalization> */

mei::NotesStmt::NotesStmt() :
    MeiElement("notesStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::NotesStmt, "notesStmt");
mei::NotesStmt::~NotesStmt() {}
mei::NotesStmt::NotesStmt(const NotesStmt& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::PerfMedium::PerfMedium(const PerfMedium& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this)
{
}

/* include <perfMedium> */

mei::Performer::Performer() :
    MeiElement("performer"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Performer, "performer");
mei::Performer::~Performer() {}
mei::Performer::Performer(const Performer& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

/* include <performer> */

mei::PhysDesc::PhysDesc() :
    MeiElement("physDesc"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PhysDesc, "physDesc");
mei::PhysDesc::~PhysDesc() {}
mei::PhysDesc::PhysDesc(const PhysDesc& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

/* include <physDesc> */

mei::PhysLoc::PhysLoc() :
    MeiElement("physLoc"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PhysLoc, "physLoc");
mei::PhysLoc::~PhysLoc() {}
mei::PhysLoc::PhysLoc(const PhysLoc& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::PhysMedium::PhysMedium(const PhysMedium& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Authorized(this),
    m_Lang(this)
{
}

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
mei::PlateNum::PlateNum(const PlateNum& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

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
mei::Price::Price(const Price& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Measurement(this)
{
}

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
mei::ProjectDesc::ProjectDesc(const ProjectDesc& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

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
mei::Provenance::Provenance(const Provenance& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <provenance> */

mei::PubStmt::PubStmt() :
    MeiElement("pubStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::PubStmt, "pubStmt");
mei::PubStmt::~PubStmt() {}
mei::PubStmt::PubStmt(const PubStmt& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::RelatedItem::RelatedItem(const RelatedItem& other) :
    MeiElement(other), 
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::RelatedItem::getRel() {
    if (!hasAttribute("rel")) {
        throw AttributeNotFoundException("rel");
    }
    return getAttribute("rel");
};

void mei::RelatedItem::setRel(std::string _rel) {
    MeiAttribute *a = new MeiAttribute("rel", _rel);
    addAttribute(a);
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
mei::Resp::Resp(const Resp& other) :
    MeiElement(other), 
    m_Authorized(this)
{
}

/* include <resp> */

mei::RespStmt::RespStmt() :
    MeiElement("respStmt"),
    m_Bibl(this),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::RespStmt, "respStmt");
mei::RespStmt::~RespStmt() {}
mei::RespStmt::RespStmt(const RespStmt& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this)
{
}

/* include <respStmt> */

mei::RevisionDesc::RevisionDesc() :
    MeiElement("revisionDesc"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::RevisionDesc, "revisionDesc");
mei::RevisionDesc::~RevisionDesc() {}
mei::RevisionDesc::RevisionDesc(const RevisionDesc& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::SamplingDecl::SamplingDecl(const SamplingDecl& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

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
mei::Segmentation::Segmentation(const Segmentation& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

/* include <segmentation> */

mei::SeriesStmt::SeriesStmt() :
    MeiElement("seriesStmt"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::SeriesStmt, "seriesStmt");
mei::SeriesStmt::~SeriesStmt() {}
mei::SeriesStmt::SeriesStmt(const SeriesStmt& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::Source::Source(const Source& other) :
    MeiElement(other), 
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this),
    m_Pointing(this)
{
}

/* include <source> */

mei::SourceDesc::SourceDesc() :
    MeiElement("sourceDesc"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::SourceDesc, "sourceDesc");
mei::SourceDesc::~SourceDesc() {}
mei::SourceDesc::SourceDesc(const SourceDesc& other) :
    MeiElement(other), 
    m_Common(this)
{
}

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
mei::StdVals::StdVals(const StdVals& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Datapointing(this),
    m_Lang(this)
{
}

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
mei::SysReq::SysReq(const SysReq& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Lang(this)
{
}

/* include <sysReq> */

mei::Term::Term() :
    MeiElement("term"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Term, "term");
mei::Term::~Term() {}
mei::Term::Term(const Term& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

MeiAttribute* mei::Term::getClasscode() {
    if (!hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return getAttribute("classcode");
};

void mei::Term::setClasscode(std::string _classcode) {
    MeiAttribute *a = new MeiAttribute("classcode", _classcode);
    addAttribute(a);
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
mei::TermList::TermList(const TermList& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

MeiAttribute* mei::TermList::getClasscode() {
    if (!hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return getAttribute("classcode");
};

void mei::TermList::setClasscode(std::string _classcode) {
    MeiAttribute *a = new MeiAttribute("classcode", _classcode);
    addAttribute(a);
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
mei::TitleStmt::TitleStmt(const TitleStmt& other) :
    MeiElement(other), 
    m_Bibl(this),
    m_Common(this)
{
}

/* include <titleStmt> */

mei::TreatHist::TreatHist() :
    MeiElement("treatHist"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TreatHist, "treatHist");
mei::TreatHist::~TreatHist() {}
mei::TreatHist::TreatHist(const TreatHist& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

/* include <treatHist> */

mei::TreatSched::TreatSched() :
    MeiElement("treatSched"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::TreatSched, "treatSched");
mei::TreatSched::~TreatSched() {}
mei::TreatSched::TreatSched(const TreatSched& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

/* include <treatSched> */

mei::Unpub::Unpub() :
    MeiElement("unpub"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Unpub, "unpub");
mei::Unpub::~Unpub() {}
mei::Unpub::Unpub(const Unpub& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

/* include <unpub> */

mei::UseRestrict::UseRestrict() :
    MeiElement("useRestrict"),
    m_Common(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::UseRestrict, "useRestrict");
mei::UseRestrict::~UseRestrict() {}
mei::UseRestrict::UseRestrict(const UseRestrict& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this)
{
}

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
mei::Watermark::Watermark(const Watermark& other) :
    MeiElement(other), 
    m_Common(this),
    m_Bibl(this),
    m_Facsimile(this)
{
}

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
mei::Work::Work(const Work& other) :
    MeiElement(other), 
    m_Datapointing(this),
    m_Common(this),
    m_Bibl(this)
{
}

/* include <work> */

mei::WorkDesc::WorkDesc() :
    MeiElement("workDesc"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::WorkDesc, "workDesc");
mei::WorkDesc::~WorkDesc() {}
mei::WorkDesc::WorkDesc(const WorkDesc& other) :
    MeiElement(other), 
    m_Common(this)
{
}

/* include <workDesc> */



