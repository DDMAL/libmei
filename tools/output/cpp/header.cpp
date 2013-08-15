#include "header.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AccessRestrict::AccessRestrict() :
    MeiElement("accessRestrict")
{
}
REGISTER_DEFINITION(mei::AccessRestrict, "accessRestrict");
mei::AccessRestrict::~AccessRestrict() {}
mei::AccessRestrict::AccessRestrict(const AccessRestrict& other) :
    MeiElement(other),

{
}

/* include <accessRestrict> */

mei::AcqSource::AcqSource() :
    MeiElement("acqSource")
{
}
REGISTER_DEFINITION(mei::AcqSource, "acqSource");
mei::AcqSource::~AcqSource() {}
mei::AcqSource::AcqSource(const AcqSource& other) :
    MeiElement(other),

{
}

/* include <acqSource> */

mei::AltId::AltId() :
    MeiElement("altId")
{
}
REGISTER_DEFINITION(mei::AltId, "altId");
mei::AltId::~AltId() {}
mei::AltId::AltId(const AltId& other) :
    MeiElement(other),

{
}

/* include <altId> */

mei::AppInfo::AppInfo() :
    MeiElement("appInfo")
{
}
REGISTER_DEFINITION(mei::AppInfo, "appInfo");
mei::AppInfo::~AppInfo() {}
mei::AppInfo::AppInfo(const AppInfo& other) :
    MeiElement(other),

{
}

/* include <appInfo> */

mei::Application::Application() :
    MeiElement("application")
{
}
REGISTER_DEFINITION(mei::Application, "application");
mei::Application::~Application() {}
mei::Application::Application(const Application& other) :
    MeiElement(other),

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

mei::Authority::Authority() :
    MeiElement("authority"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Authority, "authority");
mei::Authority::~Authority() {}
mei::Authority::Authority(const Authority& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <authority> */

mei::Availability::Availability() :
    MeiElement("availability")
{
}
REGISTER_DEFINITION(mei::Availability, "availability");
mei::Availability::~Availability() {}
mei::Availability::Availability(const Availability& other) :
    MeiElement(other),

{
}

/* include <availability> */

mei::BiblFull::BiblFull() :
    MeiElement("biblFull"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_Sortable(this),
    m_DocStatus(this)
{
}
REGISTER_DEFINITION(mei::BiblFull, "biblFull");
mei::BiblFull::~BiblFull() {}
mei::BiblFull::BiblFull(const BiblFull& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_Sortable(this),
    m_DocStatus(this)
{
}

/* include <biblFull> */

mei::CRefPattern::CRefPattern() :
    MeiElement("cRefPattern"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PatternReplacement(this)
{
}
REGISTER_DEFINITION(mei::CRefPattern, "cRefPattern");
mei::CRefPattern::~CRefPattern() {}
mei::CRefPattern::CRefPattern(const CRefPattern& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PatternReplacement(this)
{
}

/* include <cRefPattern> */

mei::Calendar::Calendar() :
    MeiElement("calendar"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Calendar, "calendar");
mei::Calendar::~Calendar() {}
mei::Calendar::Calendar(const Calendar& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this)
{
}

/* include <calendar> */

mei::CalendarDesc::CalendarDesc() :
    MeiElement("calendarDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::CalendarDesc, "calendarDesc");
mei::CalendarDesc::~CalendarDesc() {}
mei::CalendarDesc::CalendarDesc(const CalendarDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <calendarDesc> */

mei::CatDesc::CatDesc() :
    MeiElement("catDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::CatDesc, "catDesc");
mei::CatDesc::~CatDesc() {}
mei::CatDesc::CatDesc(const CatDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <catDesc> */

mei::CatRef::CatRef() :
    MeiElement("catRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::CatRef, "catRef");
mei::CatRef::~CatRef() {}
mei::CatRef::CatRef(const CatRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::CatRef::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::CatRef::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::CatRef::hasScheme() {
    return hasAttribute("scheme");
};

void mei::CatRef::removeScheme() {
    removeAttribute("scheme");
};
/* include <catRef> */

mei::Category::Category() :
    MeiElement("category"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Category, "category");
mei::Category::~Category() {}
mei::Category::Category(const Category& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <category> */

mei::Change::Change() :
    MeiElement("change")
{
}
REGISTER_DEFINITION(mei::Change, "change");
mei::Change::~Change() {}
mei::Change::Change(const Change& other) :
    MeiElement(other),

{
}

/* include <change> */

mei::ChangeDesc::ChangeDesc() :
    MeiElement("changeDesc")
{
}
REGISTER_DEFINITION(mei::ChangeDesc, "changeDesc");
mei::ChangeDesc::~ChangeDesc() {}
mei::ChangeDesc::ChangeDesc(const ChangeDesc& other) :
    MeiElement(other),

{
}

/* include <changeDesc> */

mei::ClassCode::ClassCode() :
    MeiElement("classCode")
{
}
REGISTER_DEFINITION(mei::ClassCode, "classCode");
mei::ClassCode::~ClassCode() {}
mei::ClassCode::ClassCode(const ClassCode& other) :
    MeiElement(other),

{
}

/* include <classCode> */

mei::ClassDecl::ClassDecl() :
    MeiElement("classDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::ClassDecl, "classDecl");
mei::ClassDecl::~ClassDecl() {}
mei::ClassDecl::ClassDecl(const ClassDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <classDecl> */

mei::Classification::Classification() :
    MeiElement("classification")
{
}
REGISTER_DEFINITION(mei::Classification, "classification");
mei::Classification::~Classification() {}
mei::Classification::Classification(const Classification& other) :
    MeiElement(other),

{
}

/* include <classification> */

mei::Condition::Condition() :
    MeiElement("condition")
{
}
REGISTER_DEFINITION(mei::Condition, "condition");
mei::Condition::~Condition() {}
mei::Condition::Condition(const Condition& other) :
    MeiElement(other),

{
}

/* include <condition> */

mei::ContentItem::ContentItem() :
    MeiElement("contentItem")
{
}
REGISTER_DEFINITION(mei::ContentItem, "contentItem");
mei::ContentItem::~ContentItem() {}
mei::ContentItem::ContentItem(const ContentItem& other) :
    MeiElement(other),

{
}

/* include <contentItem> */

mei::Contents::Contents() :
    MeiElement("contents")
{
}
REGISTER_DEFINITION(mei::Contents, "contents");
mei::Contents::~Contents() {}
mei::Contents::Contents(const Contents& other) :
    MeiElement(other),

{
}

/* include <contents> */

mei::Correction::Correction() :
    MeiElement("correction")
{
}
REGISTER_DEFINITION(mei::Correction, "correction");
mei::Correction::~Correction() {}
mei::Correction::Correction(const Correction& other) :
    MeiElement(other),

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
    MeiElement("creation")
{
}
REGISTER_DEFINITION(mei::Creation, "creation");
mei::Creation::~Creation() {}
mei::Creation::Creation(const Creation& other) :
    MeiElement(other),

{
}

/* include <creation> */

mei::Dimensions::Dimensions() :
    MeiElement("dimensions")
{
}
REGISTER_DEFINITION(mei::Dimensions, "dimensions");
mei::Dimensions::~Dimensions() {}
mei::Dimensions::Dimensions(const Dimensions& other) :
    MeiElement(other),

{
}

/* include <dimensions> */

mei::Distributor::Distributor() :
    MeiElement("distributor"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Distributor, "distributor");
mei::Distributor::~Distributor() {}
mei::Distributor::Distributor(const Distributor& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <distributor> */

mei::Edition::Edition() :
    MeiElement("edition"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Edition, "edition");
mei::Edition::~Edition() {}
mei::Edition::Edition(const Edition& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <edition> */

mei::EditionStmt::EditionStmt() :
    MeiElement("editionStmt")
{
}
REGISTER_DEFINITION(mei::EditionStmt, "editionStmt");
mei::EditionStmt::~EditionStmt() {}
mei::EditionStmt::EditionStmt(const EditionStmt& other) :
    MeiElement(other),

{
}

/* include <editionStmt> */

mei::EditorialDecl::EditorialDecl() :
    MeiElement("editorialDecl")
{
}
REGISTER_DEFINITION(mei::EditorialDecl, "editorialDecl");
mei::EditorialDecl::~EditorialDecl() {}
mei::EditorialDecl::EditorialDecl(const EditorialDecl& other) :
    MeiElement(other),

{
}

/* include <editorialDecl> */

mei::EncodingDesc::EncodingDesc() :
    MeiElement("encodingDesc")
{
}
REGISTER_DEFINITION(mei::EncodingDesc, "encodingDesc");
mei::EncodingDesc::~EncodingDesc() {}
mei::EncodingDesc::EncodingDesc(const EncodingDesc& other) :
    MeiElement(other),

{
}

/* include <encodingDesc> */

mei::Ensemble::Ensemble() :
    MeiElement("ensemble")
{
}
REGISTER_DEFINITION(mei::Ensemble, "ensemble");
mei::Ensemble::~Ensemble() {}
mei::Ensemble::Ensemble(const Ensemble& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::Ensemble::getCode() {
    if (!hasAttribute("code")) {
        throw AttributeNotFoundException("code");
    }
    return getAttribute("code");
};

void mei::Ensemble::setCode(std::string _code) {
    MeiAttribute *a = new MeiAttribute("code", _code);
    addAttribute(a);
};

bool mei::Ensemble::hasCode() {
    return hasAttribute("code");
};

void mei::Ensemble::removeCode() {
    removeAttribute("code");
};
/* include <ensemble> */

mei::Event::Event() :
    MeiElement("event")
{
}
REGISTER_DEFINITION(mei::Event, "event");
mei::Event::~Event() {}
mei::Event::Event(const Event& other) :
    MeiElement(other),

{
}

/* include <event> */

mei::EventList::EventList() :
    MeiElement("eventList")
{
}
REGISTER_DEFINITION(mei::EventList, "eventList");
mei::EventList::~EventList() {}
mei::EventList::EventList(const EventList& other) :
    MeiElement(other),

{
}

/* include <eventList> */

mei::ExhibHist::ExhibHist() :
    MeiElement("exhibHist")
{
}
REGISTER_DEFINITION(mei::ExhibHist, "exhibHist");
mei::ExhibHist::~ExhibHist() {}
mei::ExhibHist::ExhibHist(const ExhibHist& other) :
    MeiElement(other),

{
}

/* include <exhibHist> */

mei::Extent::Extent() :
    MeiElement("extent")
{
}
REGISTER_DEFINITION(mei::Extent, "extent");
mei::Extent::~Extent() {}
mei::Extent::Extent(const Extent& other) :
    MeiElement(other),

{
}

/* include <extent> */

mei::FileDesc::FileDesc() :
    MeiElement("fileDesc")
{
}
REGISTER_DEFINITION(mei::FileDesc, "fileDesc");
mei::FileDesc::~FileDesc() {}
mei::FileDesc::FileDesc(const FileDesc& other) :
    MeiElement(other),

{
}

/* include <fileDesc> */

mei::Funder::Funder() :
    MeiElement("funder"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Funder, "funder");
mei::Funder::~Funder() {}
mei::Funder::Funder(const Funder& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <funder> */

mei::GeoDecl::GeoDecl() :
    MeiElement("geoDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::GeoDecl, "geoDecl");
mei::GeoDecl::~GeoDecl() {}
mei::GeoDecl::GeoDecl(const GeoDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

MeiAttribute* mei::GeoDecl::getDatum() {
    if (!hasAttribute("datum")) {
        throw AttributeNotFoundException("datum");
    }
    return getAttribute("datum");
};

void mei::GeoDecl::setDatum(std::string _datum) {
    MeiAttribute *a = new MeiAttribute("datum", _datum);
    addAttribute(a);
};

bool mei::GeoDecl::hasDatum() {
    return hasAttribute("datum");
};

void mei::GeoDecl::removeDatum() {
    removeAttribute("datum");
};
/* include <geoDecl> */

mei::Hand::Hand() :
    MeiElement("hand")
{
}
REGISTER_DEFINITION(mei::Hand, "hand");
mei::Hand::~Hand() {}
mei::Hand::Hand(const Hand& other) :
    MeiElement(other),

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
    MeiElement("handList")
{
}
REGISTER_DEFINITION(mei::HandList, "handList");
mei::HandList::~HandList() {}
mei::HandList::HandList(const HandList& other) :
    MeiElement(other),

{
}

/* include <handList> */

mei::HandNote::HandNote() :
    MeiElement("handNote"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_HandFeatures(this)
{
}
REGISTER_DEFINITION(mei::HandNote, "handNote");
mei::HandNote::~HandNote() {}
mei::HandNote::HandNote(const HandNote& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_HandFeatures(this)
{
}

/* include <handNote> */

mei::History::History() :
    MeiElement("history")
{
}
REGISTER_DEFINITION(mei::History, "history");
mei::History::~History() {}
mei::History::History(const History& other) :
    MeiElement(other),

{
}

/* include <history> */

mei::Hyphenation::Hyphenation() :
    MeiElement("hyphenation"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::Hyphenation, "hyphenation");
mei::Hyphenation::~Hyphenation() {}
mei::Hyphenation::Hyphenation(const Hyphenation& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

MeiAttribute* mei::Hyphenation::getEol() {
    if (!hasAttribute("eol")) {
        throw AttributeNotFoundException("eol");
    }
    return getAttribute("eol");
};

void mei::Hyphenation::setEol(std::string _eol) {
    MeiAttribute *a = new MeiAttribute("eol", _eol);
    addAttribute(a);
};

bool mei::Hyphenation::hasEol() {
    return hasAttribute("eol");
};

void mei::Hyphenation::removeEol() {
    removeAttribute("eol");
};
/* include <hyphenation> */

mei::Idno::Idno() :
    MeiElement("idno"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Idno, "idno");
mei::Idno::~Idno() {}
mei::Idno::Idno(const Idno& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}

MeiAttribute* mei::Idno::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Idno::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Idno::hasType() {
    return hasAttribute("type");
};

void mei::Idno::removeType() {
    removeAttribute("type");
};
/* include <idno> */

mei::IncipCode::IncipCode() :
    MeiElement("incipCode")
{
}
REGISTER_DEFINITION(mei::IncipCode, "incipCode");
mei::IncipCode::~IncipCode() {}
mei::IncipCode::IncipCode(const IncipCode& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::IncipCode::getSpace() {
    if (!hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return getAttribute("space");
};

void mei::IncipCode::setSpace(std::string _space) {
    MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(s, "space", _space);
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
    MeiElement("incipText")
{
}
REGISTER_DEFINITION(mei::IncipText, "incipText");
mei::IncipText::~IncipText() {}
mei::IncipText::IncipText(const IncipText& other) :
    MeiElement(other),

{
}

/* include <incipText> */

mei::Inscription::Inscription() :
    MeiElement("inscription")
{
}
REGISTER_DEFINITION(mei::Inscription, "inscription");
mei::Inscription::~Inscription() {}
mei::Inscription::Inscription(const Inscription& other) :
    MeiElement(other),

{
}

/* include <inscription> */

mei::InstrVoice::InstrVoice() :
    MeiElement("instrVoice")
{
}
REGISTER_DEFINITION(mei::InstrVoice, "instrVoice");
mei::InstrVoice::~InstrVoice() {}
mei::InstrVoice::InstrVoice(const InstrVoice& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::InstrVoice::getCode() {
    if (!hasAttribute("code")) {
        throw AttributeNotFoundException("code");
    }
    return getAttribute("code");
};

void mei::InstrVoice::setCode(std::string _code) {
    MeiAttribute *a = new MeiAttribute("code", _code);
    addAttribute(a);
};

bool mei::InstrVoice::hasCode() {
    return hasAttribute("code");
};

void mei::InstrVoice::removeCode() {
    removeAttribute("code");
};
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

mei::InstrVoiceGrp::InstrVoiceGrp() :
    MeiElement("instrVoiceGrp")
{
}
REGISTER_DEFINITION(mei::InstrVoiceGrp, "instrVoiceGrp");
mei::InstrVoiceGrp::~InstrVoiceGrp() {}
mei::InstrVoiceGrp::InstrVoiceGrp(const InstrVoiceGrp& other) :
    MeiElement(other),

{
}

/* include <instrVoiceGrp> */

mei::Instrumentation::Instrumentation() :
    MeiElement("instrumentation")
{
}
REGISTER_DEFINITION(mei::Instrumentation, "instrumentation");
mei::Instrumentation::~Instrumentation() {}
mei::Instrumentation::Instrumentation(const Instrumentation& other) :
    MeiElement(other),

{
}

/* include <instrumentation> */

mei::Interpretation::Interpretation() :
    MeiElement("interpretation")
{
}
REGISTER_DEFINITION(mei::Interpretation, "interpretation");
mei::Interpretation::~Interpretation() {}
mei::Interpretation::Interpretation(const Interpretation& other) :
    MeiElement(other),

{
}

/* include <interpretation> */

mei::Key::Key() :
    MeiElement("key")
{
}
REGISTER_DEFINITION(mei::Key, "key");
mei::Key::~Key() {}
mei::Key::Key(const Key& other) :
    MeiElement(other),

{
}

/* include <key> */

mei::Keywords::Keywords() :
    MeiElement("keywords"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Keywords, "keywords");
mei::Keywords::~Keywords() {}
mei::Keywords::Keywords(const Keywords& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Keywords::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::Keywords::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::Keywords::hasScheme() {
    return hasAttribute("scheme");
};

void mei::Keywords::removeScheme() {
    removeAttribute("scheme");
};
/* include <keywords> */

mei::LangUsage::LangUsage() :
    MeiElement("langUsage")
{
}
REGISTER_DEFINITION(mei::LangUsage, "langUsage");
mei::LangUsage::~LangUsage() {}
mei::LangUsage::LangUsage(const LangUsage& other) :
    MeiElement(other),

{
}

/* include <langUsage> */

mei::Language::Language() :
    MeiElement("language")
{
}
REGISTER_DEFINITION(mei::Language, "language");
mei::Language::~Language() {}
mei::Language::Language(const Language& other) :
    MeiElement(other),

{
}

/* include <language> */

mei::Licence::Licence() :
    MeiElement("licence"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Licence, "licence");
mei::Licence::~Licence() {}
mei::Licence::Licence(const Licence& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <licence> */

mei::ListChange::ListChange() :
    MeiElement("listChange"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::ListChange, "listChange");
mei::ListChange::~ListChange() {}
mei::ListChange::ListChange(const ListChange& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}

MeiAttribute* mei::ListChange::getOrdered() {
    if (!hasAttribute("ordered")) {
        throw AttributeNotFoundException("ordered");
    }
    return getAttribute("ordered");
};

void mei::ListChange::setOrdered(std::string _ordered) {
    MeiAttribute *a = new MeiAttribute("ordered", _ordered);
    addAttribute(a);
};

bool mei::ListChange::hasOrdered() {
    return hasAttribute("ordered");
};

void mei::ListChange::removeOrdered() {
    removeAttribute("ordered");
};
/* include <listChange> */

mei::ListPrefixDef::ListPrefixDef() :
    MeiElement("listPrefixDef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::ListPrefixDef, "listPrefixDef");
mei::ListPrefixDef::~ListPrefixDef() {}
mei::ListPrefixDef::ListPrefixDef(const ListPrefixDef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <listPrefixDef> */

mei::MeiHead::MeiHead() :
    MeiElement("meiHead")
{
}
REGISTER_DEFINITION(mei::MeiHead, "meiHead");
mei::MeiHead::~MeiHead() {}
mei::MeiHead::MeiHead(const MeiHead& other) :
    MeiElement(other),

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

mei::Mensuration::Mensuration() :
    MeiElement("mensuration")
{
}
REGISTER_DEFINITION(mei::Mensuration, "mensuration");
mei::Mensuration::~Mensuration() {}
mei::Mensuration::Mensuration(const Mensuration& other) :
    MeiElement(other),

{
}

/* include <mensuration> */

mei::Meter::Meter() :
    MeiElement("meter")
{
}
REGISTER_DEFINITION(mei::Meter, "meter");
mei::Meter::~Meter() {}
mei::Meter::Meter(const Meter& other) :
    MeiElement(other),

{
}

/* include <meter> */

mei::Namespace::Namespace() :
    MeiElement("namespace"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Namespace, "namespace");
mei::Namespace::~Namespace() {}
mei::Namespace::Namespace(const Namespace& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Namespace::getName() {
    if (!hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return getAttribute("name");
};

void mei::Namespace::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    addAttribute(a);
};

bool mei::Namespace::hasName() {
    return hasAttribute("name");
};

void mei::Namespace::removeName() {
    removeAttribute("name");
};
/* include <namespace> */

mei::Normalization::Normalization() :
    MeiElement("normalization")
{
}
REGISTER_DEFINITION(mei::Normalization, "normalization");
mei::Normalization::~Normalization() {}
mei::Normalization::Normalization(const Normalization& other) :
    MeiElement(other),

{
}

/* include <normalization> */

mei::NotesStmt::NotesStmt() :
    MeiElement("notesStmt")
{
}
REGISTER_DEFINITION(mei::NotesStmt, "notesStmt");
mei::NotesStmt::~NotesStmt() {}
mei::NotesStmt::NotesStmt(const NotesStmt& other) :
    MeiElement(other),

{
}

/* include <notesStmt> */

mei::PerfMedium::PerfMedium() :
    MeiElement("perfMedium")
{
}
REGISTER_DEFINITION(mei::PerfMedium, "perfMedium");
mei::PerfMedium::~PerfMedium() {}
mei::PerfMedium::PerfMedium(const PerfMedium& other) :
    MeiElement(other),

{
}

/* include <perfMedium> */

mei::PhysDesc::PhysDesc() :
    MeiElement("physDesc")
{
}
REGISTER_DEFINITION(mei::PhysDesc, "physDesc");
mei::PhysDesc::~PhysDesc() {}
mei::PhysDesc::PhysDesc(const PhysDesc& other) :
    MeiElement(other),

{
}

/* include <physDesc> */

mei::PhysLoc::PhysLoc() :
    MeiElement("physLoc")
{
}
REGISTER_DEFINITION(mei::PhysLoc, "physLoc");
mei::PhysLoc::~PhysLoc() {}
mei::PhysLoc::PhysLoc(const PhysLoc& other) :
    MeiElement(other),

{
}

/* include <physLoc> */

mei::PhysMedium::PhysMedium() :
    MeiElement("physMedium")
{
}
REGISTER_DEFINITION(mei::PhysMedium, "physMedium");
mei::PhysMedium::~PhysMedium() {}
mei::PhysMedium::PhysMedium(const PhysMedium& other) :
    MeiElement(other),

{
}

/* include <physMedium> */

mei::PlateNum::PlateNum() :
    MeiElement("plateNum")
{
}
REGISTER_DEFINITION(mei::PlateNum, "plateNum");
mei::PlateNum::~PlateNum() {}
mei::PlateNum::PlateNum(const PlateNum& other) :
    MeiElement(other),

{
}

/* include <plateNum> */

mei::PrefixDef::PrefixDef() :
    MeiElement("prefixDef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PatternReplacement(this)
{
}
REGISTER_DEFINITION(mei::PrefixDef, "prefixDef");
mei::PrefixDef::~PrefixDef() {}
mei::PrefixDef::PrefixDef(const PrefixDef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PatternReplacement(this)
{
}

MeiAttribute* mei::PrefixDef::getIdent() {
    if (!hasAttribute("ident")) {
        throw AttributeNotFoundException("ident");
    }
    return getAttribute("ident");
};

void mei::PrefixDef::setIdent(std::string _ident) {
    MeiAttribute *a = new MeiAttribute("ident", _ident);
    addAttribute(a);
};

bool mei::PrefixDef::hasIdent() {
    return hasAttribute("ident");
};

void mei::PrefixDef::removeIdent() {
    removeAttribute("ident");
};
/* include <prefixDef> */

mei::Price::Price() :
    MeiElement("price")
{
}
REGISTER_DEFINITION(mei::Price, "price");
mei::Price::~Price() {}
mei::Price::Price(const Price& other) :
    MeiElement(other),

{
}

/* include <price> */

mei::Principal::Principal() :
    MeiElement("principal"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Principal, "principal");
mei::Principal::~Principal() {}
mei::Principal::Principal(const Principal& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <principal> */

mei::ProfileDesc::ProfileDesc() :
    MeiElement("profileDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::ProfileDesc, "profileDesc");
mei::ProfileDesc::~ProfileDesc() {}
mei::ProfileDesc::ProfileDesc(const ProfileDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <profileDesc> */

mei::ProjectDesc::ProjectDesc() :
    MeiElement("projectDesc")
{
}
REGISTER_DEFINITION(mei::ProjectDesc, "projectDesc");
mei::ProjectDesc::~ProjectDesc() {}
mei::ProjectDesc::ProjectDesc(const ProjectDesc& other) :
    MeiElement(other),

{
}

/* include <projectDesc> */

mei::Provenance::Provenance() :
    MeiElement("provenance")
{
}
REGISTER_DEFINITION(mei::Provenance, "provenance");
mei::Provenance::~Provenance() {}
mei::Provenance::Provenance(const Provenance& other) :
    MeiElement(other),

{
}

/* include <provenance> */

mei::PubStmt::PubStmt() :
    MeiElement("pubStmt")
{
}
REGISTER_DEFINITION(mei::PubStmt, "pubStmt");
mei::PubStmt::~PubStmt() {}
mei::PubStmt::PubStmt(const PubStmt& other) :
    MeiElement(other),

{
}

/* include <pubStmt> */

mei::PublicationStmt::PublicationStmt() :
    MeiElement("publicationStmt"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::PublicationStmt, "publicationStmt");
mei::PublicationStmt::~PublicationStmt() {}
mei::PublicationStmt::PublicationStmt(const PublicationStmt& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <publicationStmt> */

mei::Quotation::Quotation() :
    MeiElement("quotation"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::Quotation, "quotation");
mei::Quotation::~Quotation() {}
mei::Quotation::Quotation(const Quotation& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

MeiAttribute* mei::Quotation::getMarks() {
    if (!hasAttribute("marks")) {
        throw AttributeNotFoundException("marks");
    }
    return getAttribute("marks");
};

void mei::Quotation::setMarks(std::string _marks) {
    MeiAttribute *a = new MeiAttribute("marks", _marks);
    addAttribute(a);
};

bool mei::Quotation::hasMarks() {
    return hasAttribute("marks");
};

void mei::Quotation::removeMarks() {
    removeAttribute("marks");
};
MeiAttribute* mei::Quotation::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::Quotation::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::Quotation::hasForm() {
    return hasAttribute("form");
};

void mei::Quotation::removeForm() {
    removeAttribute("form");
};
/* include <quotation> */

mei::RefState::RefState() :
    MeiElement("refState"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MilestoneUnit(this),
    m_Edition(this)
{
}
REGISTER_DEFINITION(mei::RefState, "refState");
mei::RefState::~RefState() {}
mei::RefState::RefState(const RefState& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MilestoneUnit(this),
    m_Edition(this)
{
}

MeiAttribute* mei::RefState::getLength() {
    if (!hasAttribute("length")) {
        throw AttributeNotFoundException("length");
    }
    return getAttribute("length");
};

void mei::RefState::setLength(std::string _length) {
    MeiAttribute *a = new MeiAttribute("length", _length);
    addAttribute(a);
};

bool mei::RefState::hasLength() {
    return hasAttribute("length");
};

void mei::RefState::removeLength() {
    removeAttribute("length");
};
MeiAttribute* mei::RefState::getDelim() {
    if (!hasAttribute("delim")) {
        throw AttributeNotFoundException("delim");
    }
    return getAttribute("delim");
};

void mei::RefState::setDelim(std::string _delim) {
    MeiAttribute *a = new MeiAttribute("delim", _delim);
    addAttribute(a);
};

bool mei::RefState::hasDelim() {
    return hasAttribute("delim");
};

void mei::RefState::removeDelim() {
    removeAttribute("delim");
};
/* include <refState> */

mei::RefsDecl::RefsDecl() :
    MeiElement("refsDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::RefsDecl, "refsDecl");
mei::RefsDecl::~RefsDecl() {}
mei::RefsDecl::RefsDecl(const RefsDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

/* include <refsDecl> */

mei::RelatedItem::RelatedItem() :
    MeiElement("relatedItem")
{
}
REGISTER_DEFINITION(mei::RelatedItem, "relatedItem");
mei::RelatedItem::~RelatedItem() {}
mei::RelatedItem::RelatedItem(const RelatedItem& other) :
    MeiElement(other),

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

mei::Rendition::Rendition() :
    MeiElement("rendition"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_StyleDef(this)
{
}
REGISTER_DEFINITION(mei::Rendition, "rendition");
mei::Rendition::~Rendition() {}
mei::Rendition::Rendition(const Rendition& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_StyleDef(this)
{
}

MeiAttribute* mei::Rendition::getScope() {
    if (!hasAttribute("scope")) {
        throw AttributeNotFoundException("scope");
    }
    return getAttribute("scope");
};

void mei::Rendition::setScope(std::string _scope) {
    MeiAttribute *a = new MeiAttribute("scope", _scope);
    addAttribute(a);
};

bool mei::Rendition::hasScope() {
    return hasAttribute("scope");
};

void mei::Rendition::removeScope() {
    removeAttribute("scope");
};
/* include <rendition> */

mei::Resp::Resp() :
    MeiElement("resp")
{
}
REGISTER_DEFINITION(mei::Resp, "resp");
mei::Resp::~Resp() {}
mei::Resp::Resp(const Resp& other) :
    MeiElement(other),

{
}

/* include <resp> */

mei::RespStmt::RespStmt() :
    MeiElement("respStmt")
{
}
REGISTER_DEFINITION(mei::RespStmt, "respStmt");
mei::RespStmt::~RespStmt() {}
mei::RespStmt::RespStmt(const RespStmt& other) :
    MeiElement(other),

{
}

/* include <respStmt> */

mei::RevisionDesc::RevisionDesc() :
    MeiElement("revisionDesc")
{
}
REGISTER_DEFINITION(mei::RevisionDesc, "revisionDesc");
mei::RevisionDesc::~RevisionDesc() {}
mei::RevisionDesc::RevisionDesc(const RevisionDesc& other) :
    MeiElement(other),

{
}

/* include <revisionDesc> */

mei::SamplingDecl::SamplingDecl() :
    MeiElement("samplingDecl")
{
}
REGISTER_DEFINITION(mei::SamplingDecl, "samplingDecl");
mei::SamplingDecl::~SamplingDecl() {}
mei::SamplingDecl::SamplingDecl(const SamplingDecl& other) :
    MeiElement(other),

{
}

/* include <samplingDecl> */

mei::ScriptNote::ScriptNote() :
    MeiElement("scriptNote"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_HandFeatures(this)
{
}
REGISTER_DEFINITION(mei::ScriptNote, "scriptNote");
mei::ScriptNote::~ScriptNote() {}
mei::ScriptNote::ScriptNote(const ScriptNote& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_HandFeatures(this)
{
}

/* include <scriptNote> */

mei::Segmentation::Segmentation() :
    MeiElement("segmentation")
{
}
REGISTER_DEFINITION(mei::Segmentation, "segmentation");
mei::Segmentation::~Segmentation() {}
mei::Segmentation::Segmentation(const Segmentation& other) :
    MeiElement(other),

{
}

/* include <segmentation> */

mei::SeriesStmt::SeriesStmt() :
    MeiElement("seriesStmt")
{
}
REGISTER_DEFINITION(mei::SeriesStmt, "seriesStmt");
mei::SeriesStmt::~SeriesStmt() {}
mei::SeriesStmt::SeriesStmt(const SeriesStmt& other) :
    MeiElement(other),

{
}

/* include <seriesStmt> */

mei::Source::Source() :
    MeiElement("source")
{
}
REGISTER_DEFINITION(mei::Source, "source");
mei::Source::~Source() {}
mei::Source::Source(const Source& other) :
    MeiElement(other),

{
}

/* include <source> */

mei::SourceDesc::SourceDesc() :
    MeiElement("sourceDesc")
{
}
REGISTER_DEFINITION(mei::SourceDesc, "sourceDesc");
mei::SourceDesc::~SourceDesc() {}
mei::SourceDesc::SourceDesc(const SourceDesc& other) :
    MeiElement(other),

{
}

/* include <sourceDesc> */

mei::Sponsor::Sponsor() :
    MeiElement("sponsor"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Sponsor, "sponsor");
mei::Sponsor::~Sponsor() {}
mei::Sponsor::Sponsor(const Sponsor& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <sponsor> */

mei::StdVals::StdVals() :
    MeiElement("stdVals")
{
}
REGISTER_DEFINITION(mei::StdVals, "stdVals");
mei::StdVals::~StdVals() {}
mei::StdVals::StdVals(const StdVals& other) :
    MeiElement(other),

{
}

/* include <stdVals> */

mei::StyleDefDecl::StyleDefDecl() :
    MeiElement("styleDefDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_StyleDef(this)
{
}
REGISTER_DEFINITION(mei::StyleDefDecl, "styleDefDecl");
mei::StyleDefDecl::~StyleDefDecl() {}
mei::StyleDefDecl::StyleDefDecl(const StyleDefDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_StyleDef(this)
{
}

/* include <styleDefDecl> */

mei::SysReq::SysReq() :
    MeiElement("sysReq")
{
}
REGISTER_DEFINITION(mei::SysReq, "sysReq");
mei::SysReq::~SysReq() {}
mei::SysReq::SysReq(const SysReq& other) :
    MeiElement(other),

{
}

/* include <sysReq> */

mei::TagUsage::TagUsage() :
    MeiElement("tagUsage"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::TagUsage, "tagUsage");
mei::TagUsage::~TagUsage() {}
mei::TagUsage::TagUsage(const TagUsage& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::TagUsage::getGi() {
    if (!hasAttribute("gi")) {
        throw AttributeNotFoundException("gi");
    }
    return getAttribute("gi");
};

void mei::TagUsage::setGi(std::string _gi) {
    MeiAttribute *a = new MeiAttribute("gi", _gi);
    addAttribute(a);
};

bool mei::TagUsage::hasGi() {
    return hasAttribute("gi");
};

void mei::TagUsage::removeGi() {
    removeAttribute("gi");
};
MeiAttribute* mei::TagUsage::getOccurs() {
    if (!hasAttribute("occurs")) {
        throw AttributeNotFoundException("occurs");
    }
    return getAttribute("occurs");
};

void mei::TagUsage::setOccurs(std::string _occurs) {
    MeiAttribute *a = new MeiAttribute("occurs", _occurs);
    addAttribute(a);
};

bool mei::TagUsage::hasOccurs() {
    return hasAttribute("occurs");
};

void mei::TagUsage::removeOccurs() {
    removeAttribute("occurs");
};
MeiAttribute* mei::TagUsage::getWithId() {
    if (!hasAttribute("withId")) {
        throw AttributeNotFoundException("withId");
    }
    return getAttribute("withId");
};

void mei::TagUsage::setWithId(std::string _withId) {
    MeiAttribute *a = new MeiAttribute("withId", _withId);
    addAttribute(a);
};

bool mei::TagUsage::hasWithId() {
    return hasAttribute("withId");
};

void mei::TagUsage::removeWithId() {
    removeAttribute("withId");
};
MeiAttribute* mei::TagUsage::getRender() {
    if (!hasAttribute("render")) {
        throw AttributeNotFoundException("render");
    }
    return getAttribute("render");
};

void mei::TagUsage::setRender(std::string _render) {
    MeiAttribute *a = new MeiAttribute("render", _render);
    addAttribute(a);
};

bool mei::TagUsage::hasRender() {
    return hasAttribute("render");
};

void mei::TagUsage::removeRender() {
    removeAttribute("render");
};
/* include <tagUsage> */

mei::TagsDecl::TagsDecl() :
    MeiElement("tagsDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::TagsDecl, "tagsDecl");
mei::TagsDecl::~TagsDecl() {}
mei::TagsDecl::TagsDecl(const TagsDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <tagsDecl> */

mei::Taxonomy::Taxonomy() :
    MeiElement("taxonomy"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Taxonomy, "taxonomy");
mei::Taxonomy::~Taxonomy() {}
mei::Taxonomy::Taxonomy(const Taxonomy& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <taxonomy> */

mei::TeiHeader::TeiHeader() :
    MeiElement("teiHeader"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::TeiHeader, "teiHeader");
mei::TeiHeader::~TeiHeader() {}
mei::TeiHeader::TeiHeader(const TeiHeader& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::TeiHeader::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::TeiHeader::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::TeiHeader::hasType() {
    return hasAttribute("type");
};

void mei::TeiHeader::removeType() {
    removeAttribute("type");
};
/* include <teiHeader> */

mei::Term::Term() :
    MeiElement("term")
{
}
REGISTER_DEFINITION(mei::Term, "term");
mei::Term::~Term() {}
mei::Term::Term(const Term& other) :
    MeiElement(other),

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
    MeiElement("termList")
{
}
REGISTER_DEFINITION(mei::TermList, "termList");
mei::TermList::~TermList() {}
mei::TermList::TermList(const TermList& other) :
    MeiElement(other),

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

mei::TextClass::TextClass() :
    MeiElement("textClass"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::TextClass, "textClass");
mei::TextClass::~TextClass() {}
mei::TextClass::TextClass(const TextClass& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

/* include <textClass> */

mei::TitleStmt::TitleStmt() :
    MeiElement("titleStmt")
{
}
REGISTER_DEFINITION(mei::TitleStmt, "titleStmt");
mei::TitleStmt::~TitleStmt() {}
mei::TitleStmt::TitleStmt(const TitleStmt& other) :
    MeiElement(other),

{
}

/* include <titleStmt> */

mei::TreatHist::TreatHist() :
    MeiElement("treatHist")
{
}
REGISTER_DEFINITION(mei::TreatHist, "treatHist");
mei::TreatHist::~TreatHist() {}
mei::TreatHist::TreatHist(const TreatHist& other) :
    MeiElement(other),

{
}

/* include <treatHist> */

mei::TreatSched::TreatSched() :
    MeiElement("treatSched")
{
}
REGISTER_DEFINITION(mei::TreatSched, "treatSched");
mei::TreatSched::~TreatSched() {}
mei::TreatSched::TreatSched(const TreatSched& other) :
    MeiElement(other),

{
}

/* include <treatSched> */

mei::TypeNote::TypeNote() :
    MeiElement("typeNote"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_HandFeatures(this)
{
}
REGISTER_DEFINITION(mei::TypeNote, "typeNote");
mei::TypeNote::~TypeNote() {}
mei::TypeNote::TypeNote(const TypeNote& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_HandFeatures(this)
{
}

/* include <typeNote> */

mei::Unpub::Unpub() :
    MeiElement("unpub")
{
}
REGISTER_DEFINITION(mei::Unpub, "unpub");
mei::Unpub::~Unpub() {}
mei::Unpub::Unpub(const Unpub& other) :
    MeiElement(other),

{
}

/* include <unpub> */

mei::UseRestrict::UseRestrict() :
    MeiElement("useRestrict")
{
}
REGISTER_DEFINITION(mei::UseRestrict, "useRestrict");
mei::UseRestrict::~UseRestrict() {}
mei::UseRestrict::UseRestrict(const UseRestrict& other) :
    MeiElement(other),

{
}

/* include <useRestrict> */

mei::Watermark::Watermark() :
    MeiElement("watermark")
{
}
REGISTER_DEFINITION(mei::Watermark, "watermark");
mei::Watermark::~Watermark() {}
mei::Watermark::Watermark(const Watermark& other) :
    MeiElement(other),

{
}

/* include <watermark> */

mei::Work::Work() :
    MeiElement("work")
{
}
REGISTER_DEFINITION(mei::Work, "work");
mei::Work::~Work() {}
mei::Work::Work(const Work& other) :
    MeiElement(other),

{
}

/* include <work> */

mei::WorkDesc::WorkDesc() :
    MeiElement("workDesc")
{
}
REGISTER_DEFINITION(mei::WorkDesc, "workDesc");
mei::WorkDesc::~WorkDesc() {}
mei::WorkDesc::WorkDesc(const WorkDesc& other) :
    MeiElement(other),

{
}

/* include <workDesc> */



