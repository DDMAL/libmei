#include "core.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Abbr::Abbr() :
    MeiElement("abbr"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Abbr, "abbr");
mei::Abbr::~Abbr() {}
mei::Abbr::Abbr(const Abbr& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Abbr::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Abbr::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Abbr::hasType() {
    return hasAttribute("type");
};

void mei::Abbr::removeType() {
    removeAttribute("type");
};
/* include <abbr> */

mei::Add::Add() :
    MeiElement("add"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Placement(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Add, "add");
mei::Add::~Add() {}
mei::Add::Add(const Add& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Placement(this),
    m_Typed(this)
{
}

/* include <add> */

mei::AddrLine::AddrLine() :
    MeiElement("addrLine"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::AddrLine, "addrLine");
mei::AddrLine::~AddrLine() {}
mei::AddrLine::AddrLine(const AddrLine& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <addrLine> */

mei::Address::Address() :
    MeiElement("address"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Address, "address");
mei::Address::~Address() {}
mei::Address::Address(const Address& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <address> */

mei::Analytic::Analytic() :
    MeiElement("analytic"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Analytic, "analytic");
mei::Analytic::~Analytic() {}
mei::Analytic::Analytic(const Analytic& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <analytic> */

mei::Author::Author() :
    MeiElement("author"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Author, "author");
mei::Author::~Author() {}
mei::Author::Author(const Author& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <author> */

mei::Bibl::Bibl() :
    MeiElement("bibl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_Typed(this),
    m_Sortable(this),
    m_DocStatus(this)
{
}
REGISTER_DEFINITION(mei::Bibl, "bibl");
mei::Bibl::~Bibl() {}
mei::Bibl::Bibl(const Bibl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_Typed(this),
    m_Sortable(this),
    m_DocStatus(this)
{
}

/* include <bibl> */

mei::BiblScope::BiblScope() :
    MeiElement("biblScope"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::BiblScope, "biblScope");
mei::BiblScope::~BiblScope() {}
mei::BiblScope::BiblScope(const BiblScope& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::BiblScope::getUnit() {
    if (!hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return getAttribute("unit");
};

void mei::BiblScope::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    addAttribute(a);
};

bool mei::BiblScope::hasUnit() {
    return hasAttribute("unit");
};

void mei::BiblScope::removeUnit() {
    removeAttribute("unit");
};
MeiAttribute* mei::BiblScope::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::BiblScope::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::BiblScope::hasType() {
    return hasAttribute("type");
};

void mei::BiblScope::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::BiblScope::getFrom() {
    if (!hasAttribute("from")) {
        throw AttributeNotFoundException("from");
    }
    return getAttribute("from");
};

void mei::BiblScope::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    addAttribute(a);
};

bool mei::BiblScope::hasFrom() {
    return hasAttribute("from");
};

void mei::BiblScope::removeFrom() {
    removeAttribute("from");
};
MeiAttribute* mei::BiblScope::getTo() {
    if (!hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return getAttribute("to");
};

void mei::BiblScope::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    addAttribute(a);
};

bool mei::BiblScope::hasTo() {
    return hasAttribute("to");
};

void mei::BiblScope::removeTo() {
    removeAttribute("to");
};
/* include <biblScope> */

mei::BiblStruct::BiblStruct() :
    MeiElement("biblStruct"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_Typed(this),
    m_Sortable(this),
    m_DocStatus(this)
{
}
REGISTER_DEFINITION(mei::BiblStruct, "biblStruct");
mei::BiblStruct::~BiblStruct() {}
mei::BiblStruct::BiblStruct(const BiblStruct& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_Typed(this),
    m_Sortable(this),
    m_DocStatus(this)
{
}

/* include <biblStruct> */

mei::BinaryObject::BinaryObject() :
    MeiElement("binaryObject"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Media(this),
    m_InternetMedia(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::BinaryObject, "binaryObject");
mei::BinaryObject::~BinaryObject() {}
mei::BinaryObject::BinaryObject(const BinaryObject& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Media(this),
    m_InternetMedia(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Typed(this)
{
}

MeiAttribute* mei::BinaryObject::getUrl() {
    if (!hasAttribute("url")) {
        throw AttributeNotFoundException("url");
    }
    return getAttribute("url");
};

void mei::BinaryObject::setUrl(std::string _url) {
    MeiAttribute *a = new MeiAttribute("url", _url);
    addAttribute(a);
};

bool mei::BinaryObject::hasUrl() {
    return hasAttribute("url");
};

void mei::BinaryObject::removeUrl() {
    removeAttribute("url");
};
MeiAttribute* mei::BinaryObject::getEncoding() {
    if (!hasAttribute("encoding")) {
        throw AttributeNotFoundException("encoding");
    }
    return getAttribute("encoding");
};

void mei::BinaryObject::setEncoding(std::string _encoding) {
    MeiAttribute *a = new MeiAttribute("encoding", _encoding);
    addAttribute(a);
};

bool mei::BinaryObject::hasEncoding() {
    return hasAttribute("encoding");
};

void mei::BinaryObject::removeEncoding() {
    removeAttribute("encoding");
};
/* include <binaryObject> */

mei::Cb::Cb() :
    MeiElement("cb"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Edition(this),
    m_Spanning(this),
    m_Breaking(this)
{
}
REGISTER_DEFINITION(mei::Cb, "cb");
mei::Cb::~Cb() {}
mei::Cb::Cb(const Cb& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Edition(this),
    m_Spanning(this),
    m_Breaking(this)
{
}

/* include <cb> */

mei::Choice::Choice() :
    MeiElement("choice"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Choice, "choice");
mei::Choice::~Choice() {}
mei::Choice::Choice(const Choice& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <choice> */

mei::Cit::Cit() :
    MeiElement("cit"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Cit, "cit");
mei::Cit::~Cit() {}
mei::Cit::Cit(const Cit& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <cit> */

mei::CitedRange::CitedRange() :
    MeiElement("citedRange"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::CitedRange, "citedRange");
mei::CitedRange::~CitedRange() {}
mei::CitedRange::CitedRange(const CitedRange& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::CitedRange::getUnit() {
    if (!hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return getAttribute("unit");
};

void mei::CitedRange::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    addAttribute(a);
};

bool mei::CitedRange::hasUnit() {
    return hasAttribute("unit");
};

void mei::CitedRange::removeUnit() {
    removeAttribute("unit");
};
MeiAttribute* mei::CitedRange::getFrom() {
    if (!hasAttribute("from")) {
        throw AttributeNotFoundException("from");
    }
    return getAttribute("from");
};

void mei::CitedRange::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    addAttribute(a);
};

bool mei::CitedRange::hasFrom() {
    return hasAttribute("from");
};

void mei::CitedRange::removeFrom() {
    removeAttribute("from");
};
MeiAttribute* mei::CitedRange::getTo() {
    if (!hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return getAttribute("to");
};

void mei::CitedRange::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    addAttribute(a);
};

bool mei::CitedRange::hasTo() {
    return hasAttribute("to");
};

void mei::CitedRange::removeTo() {
    removeAttribute("to");
};
/* include <citedRange> */

mei::Corr::Corr() :
    MeiElement("corr"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Corr, "corr");
mei::Corr::~Corr() {}
mei::Corr::Corr(const Corr& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <corr> */

mei::Date::Date() :
    MeiElement("date"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Date, "date");
mei::Date::~Date() {}
mei::Date::Date(const Date& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <date> */

mei::Del::Del() :
    MeiElement("del"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Del, "del");
mei::Del::~Del() {}
mei::Del::Del(const Del& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <del> */

mei::Desc::Desc() :
    MeiElement("desc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Translatable(this)
{
}
REGISTER_DEFINITION(mei::Desc, "desc");
mei::Desc::~Desc() {}
mei::Desc::Desc(const Desc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Translatable(this)
{
}

/* include <desc> */

mei::Distinct::Distinct() :
    MeiElement("distinct"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Distinct, "distinct");
mei::Distinct::~Distinct() {}
mei::Distinct::Distinct(const Distinct& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Distinct::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Distinct::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Distinct::hasType() {
    return hasAttribute("type");
};

void mei::Distinct::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Distinct::getTime() {
    if (!hasAttribute("time")) {
        throw AttributeNotFoundException("time");
    }
    return getAttribute("time");
};

void mei::Distinct::setTime(std::string _time) {
    MeiAttribute *a = new MeiAttribute("time", _time);
    addAttribute(a);
};

bool mei::Distinct::hasTime() {
    return hasAttribute("time");
};

void mei::Distinct::removeTime() {
    removeAttribute("time");
};
MeiAttribute* mei::Distinct::getSpace() {
    if (!hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return getAttribute("space");
};

void mei::Distinct::setSpace(std::string _space) {
    MeiAttribute *a = new MeiAttribute("space", _space);
    addAttribute(a);
};

bool mei::Distinct::hasSpace() {
    return hasAttribute("space");
};

void mei::Distinct::removeSpace() {
    removeAttribute("space");
};
MeiAttribute* mei::Distinct::getSocial() {
    if (!hasAttribute("social")) {
        throw AttributeNotFoundException("social");
    }
    return getAttribute("social");
};

void mei::Distinct::setSocial(std::string _social) {
    MeiAttribute *a = new MeiAttribute("social", _social);
    addAttribute(a);
};

bool mei::Distinct::hasSocial() {
    return hasAttribute("social");
};

void mei::Distinct::removeSocial() {
    removeAttribute("social");
};
/* include <distinct> */

mei::DivGen::DivGen() :
    MeiElement("divGen"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::DivGen, "divGen");
mei::DivGen::~DivGen() {}
mei::DivGen::DivGen(const DivGen& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::DivGen::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::DivGen::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::DivGen::hasType() {
    return hasAttribute("type");
};

void mei::DivGen::removeType() {
    removeAttribute("type");
};
/* include <divGen> */

mei::Editor::Editor() :
    MeiElement("editor"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Editor, "editor");
mei::Editor::~Editor() {}
mei::Editor::Editor(const Editor& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <editor> */

mei::Email::Email() :
    MeiElement("email"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Email, "email");
mei::Email::~Email() {}
mei::Email::Email(const Email& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <email> */

mei::Emph::Emph() :
    MeiElement("emph"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Emph, "emph");
mei::Emph::~Emph() {}
mei::Emph::Emph(const Emph& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <emph> */

mei::Expan::Expan() :
    MeiElement("expan"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Expan, "expan");
mei::Expan::~Expan() {}
mei::Expan::Expan(const Expan& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

/* include <expan> */

mei::Foreign::Foreign() :
    MeiElement("foreign"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Foreign, "foreign");
mei::Foreign::~Foreign() {}
mei::Foreign::Foreign(const Foreign& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <foreign> */

mei::Gap::Gap() :
    MeiElement("gap"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Gap, "gap");
mei::Gap::~Gap() {}
mei::Gap::Gap(const Gap& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Gap::getReason() {
    if (!hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return getAttribute("reason");
};

void mei::Gap::setReason(std::string _reason) {
    MeiAttribute *a = new MeiAttribute("reason", _reason);
    addAttribute(a);
};

bool mei::Gap::hasReason() {
    return hasAttribute("reason");
};

void mei::Gap::removeReason() {
    removeAttribute("reason");
};
MeiAttribute* mei::Gap::getHand() {
    if (!hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return getAttribute("hand");
};

void mei::Gap::setHand(std::string _hand) {
    MeiAttribute *a = new MeiAttribute("hand", _hand);
    addAttribute(a);
};

bool mei::Gap::hasHand() {
    return hasAttribute("hand");
};

void mei::Gap::removeHand() {
    removeAttribute("hand");
};
MeiAttribute* mei::Gap::getAgent() {
    if (!hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return getAttribute("agent");
};

void mei::Gap::setAgent(std::string _agent) {
    MeiAttribute *a = new MeiAttribute("agent", _agent);
    addAttribute(a);
};

bool mei::Gap::hasAgent() {
    return hasAttribute("agent");
};

void mei::Gap::removeAgent() {
    removeAttribute("agent");
};
/* include <gap> */

mei::Gb::Gb() :
    MeiElement("gb"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Spanning(this),
    m_Breaking(this)
{
}
REGISTER_DEFINITION(mei::Gb, "gb");
mei::Gb::~Gb() {}
mei::Gb::Gb(const Gb& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Spanning(this),
    m_Breaking(this)
{
}

/* include <gb> */

mei::Gloss::Gloss() :
    MeiElement("gloss"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this),
    m_Translatable(this),
    m_Typed(this),
    m_Pointing(this),
    m_CReferencing(this)
{
}
REGISTER_DEFINITION(mei::Gloss, "gloss");
mei::Gloss::~Gloss() {}
mei::Gloss::Gloss(const Gloss& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this),
    m_Translatable(this),
    m_Typed(this),
    m_Pointing(this),
    m_CReferencing(this)
{
}

/* include <gloss> */

mei::Graphic::Graphic() :
    MeiElement("graphic"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Media(this),
    m_InternetMedia(this),
    m_Resourced(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Graphic, "graphic");
mei::Graphic::~Graphic() {}
mei::Graphic::Graphic(const Graphic& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Media(this),
    m_InternetMedia(this),
    m_Resourced(this),
    m_Declaring(this)
{
}

/* include <graphic> */

mei::Head::Head() :
    MeiElement("head"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Head, "head");
mei::Head::~Head() {}
mei::Head::Head(const Head& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <head> */

mei::HeadItem::HeadItem() :
    MeiElement("headItem"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::HeadItem, "headItem");
mei::HeadItem::~HeadItem() {}
mei::HeadItem::HeadItem(const HeadItem& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <headItem> */

mei::HeadLabel::HeadLabel() :
    MeiElement("headLabel"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::HeadLabel, "headLabel");
mei::HeadLabel::~HeadLabel() {}
mei::HeadLabel::HeadLabel(const HeadLabel& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <headLabel> */

mei::Hi::Hi() :
    MeiElement("hi"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Hi, "hi");
mei::Hi::~Hi() {}
mei::Hi::Hi(const Hi& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <hi> */

mei::Imprint::Imprint() :
    MeiElement("imprint"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Imprint, "imprint");
mei::Imprint::~Imprint() {}
mei::Imprint::Imprint(const Imprint& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <imprint> */

mei::Index::Index() :
    MeiElement("index"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Spanning(this)
{
}
REGISTER_DEFINITION(mei::Index, "index");
mei::Index::~Index() {}
mei::Index::Index(const Index& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Spanning(this)
{
}

MeiAttribute* mei::Index::getIndexName() {
    if (!hasAttribute("indexName")) {
        throw AttributeNotFoundException("indexName");
    }
    return getAttribute("indexName");
};

void mei::Index::setIndexName(std::string _indexName) {
    MeiAttribute *a = new MeiAttribute("indexName", _indexName);
    addAttribute(a);
};

bool mei::Index::hasIndexName() {
    return hasAttribute("indexName");
};

void mei::Index::removeIndexName() {
    removeAttribute("indexName");
};
/* include <index> */

mei::Item::Item() :
    MeiElement("item"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Item, "item");
mei::Item::~Item() {}
mei::Item::Item(const Item& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}

/* include <item> */

mei::L::L() :
    MeiElement("l"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Metrical(this),
    m_Enjamb(this),
    m_Fragmentable(this)
{
}
REGISTER_DEFINITION(mei::L, "l");
mei::L::~L() {}
mei::L::L(const L& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Metrical(this),
    m_Enjamb(this),
    m_Fragmentable(this)
{
}

/* include <l> */

mei::Label::Label() :
    MeiElement("label"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Placement(this)
{
}
REGISTER_DEFINITION(mei::Label, "label");
mei::Label::~Label() {}
mei::Label::Label(const Label& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Placement(this)
{
}

/* include <label> */

mei::Lb::Lb() :
    MeiElement("lb"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Edition(this),
    m_Spanning(this),
    m_Breaking(this)
{
}
REGISTER_DEFINITION(mei::Lb, "lb");
mei::Lb::~Lb() {}
mei::Lb::Lb(const Lb& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Edition(this),
    m_Spanning(this),
    m_Breaking(this)
{
}

/* include <lb> */

mei::Lg::Lg() :
    MeiElement("lg"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_DivLike(this),
    m_Metrical(this),
    m_Fragmentable(this),
    m_Typed(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Lg, "lg");
mei::Lg::~Lg() {}
mei::Lg::Lg(const Lg& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_DivLike(this),
    m_Metrical(this),
    m_Fragmentable(this),
    m_Typed(this),
    m_Declaring(this)
{
}

/* include <lg> */

mei::List::List() :
    MeiElement("list"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::List, "list");
mei::List::~List() {}
mei::List::List(const List& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}

MeiAttribute* mei::List::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::List::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::List::hasType() {
    return hasAttribute("type");
};

void mei::List::removeType() {
    removeAttribute("type");
};
/* include <list> */

mei::ListBibl::ListBibl() :
    MeiElement("listBibl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this),
    m_Declarable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::ListBibl, "listBibl");
mei::ListBibl::~ListBibl() {}
mei::ListBibl::ListBibl(const ListBibl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this),
    m_Declarable(this),
    m_Typed(this)
{
}

/* include <listBibl> */

mei::Measure::Measure() :
    MeiElement("measure"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Measurement(this)
{
}
REGISTER_DEFINITION(mei::Measure, "measure");
mei::Measure::~Measure() {}
mei::Measure::Measure(const Measure& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Measurement(this)
{
}

MeiAttribute* mei::Measure::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Measure::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Measure::hasType() {
    return hasAttribute("type");
};

void mei::Measure::removeType() {
    removeAttribute("type");
};
/* include <measure> */

mei::MeasureGrp::MeasureGrp() :
    MeiElement("measureGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Measurement(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::MeasureGrp, "measureGrp");
mei::MeasureGrp::~MeasureGrp() {}
mei::MeasureGrp::MeasureGrp(const MeasureGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Measurement(this),
    m_Typed(this)
{
}

/* include <measureGrp> */

mei::Media::Media() :
    MeiElement("media"),
    m_Typed(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Media(this),
    m_InternetMedia(this),
    m_Resourced(this),
    m_Declaring(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this)
{
}
REGISTER_DEFINITION(mei::Media, "media");
mei::Media::~Media() {}
mei::Media::Media(const Media& other) :
    MeiElement(other),
    m_Typed(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Media(this),
    m_InternetMedia(this),
    m_Resourced(this),
    m_Declaring(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this)
{
}

MeiAttribute* mei::Media::getMimeType() {
    if (!hasAttribute("mimeType")) {
        throw AttributeNotFoundException("mimeType");
    }
    return getAttribute("mimeType");
};

void mei::Media::setMimeType(std::string _mimeType) {
    MeiAttribute *a = new MeiAttribute("mimeType", _mimeType);
    addAttribute(a);
};

bool mei::Media::hasMimeType() {
    return hasAttribute("mimeType");
};

void mei::Media::removeMimeType() {
    removeAttribute("mimeType");
};
/* include <media> */

mei::Meeting::Meeting() :
    MeiElement("meeting"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Meeting, "meeting");
mei::Meeting::~Meeting() {}
mei::Meeting::Meeting(const Meeting& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <meeting> */

mei::Mentioned::Mentioned() :
    MeiElement("mentioned"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Mentioned, "mentioned");
mei::Mentioned::~Mentioned() {}
mei::Mentioned::Mentioned(const Mentioned& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <mentioned> */

mei::Milestone::Milestone() :
    MeiElement("milestone"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MilestoneUnit(this),
    m_Typed(this),
    m_Edition(this),
    m_Spanning(this),
    m_Breaking(this)
{
}
REGISTER_DEFINITION(mei::Milestone, "milestone");
mei::Milestone::~Milestone() {}
mei::Milestone::Milestone(const Milestone& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MilestoneUnit(this),
    m_Typed(this),
    m_Edition(this),
    m_Spanning(this),
    m_Breaking(this)
{
}

/* include <milestone> */

mei::Monogr::Monogr() :
    MeiElement("monogr"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Monogr, "monogr");
mei::Monogr::~Monogr() {}
mei::Monogr::Monogr(const Monogr& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <monogr> */

mei::Name::Name() :
    MeiElement("name"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Name, "name");
mei::Name::~Name() {}
mei::Name::Name(const Name& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <name> */

mei::Note::Note() :
    MeiElement("note"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this),
    m_Pointing(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Note, "note");
mei::Note::~Note() {}
mei::Note::Note(const Note& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this),
    m_Pointing(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Note::getAnchored() {
    if (!hasAttribute("anchored")) {
        throw AttributeNotFoundException("anchored");
    }
    return getAttribute("anchored");
};

void mei::Note::setAnchored(std::string _anchored) {
    MeiAttribute *a = new MeiAttribute("anchored", _anchored);
    addAttribute(a);
};

bool mei::Note::hasAnchored() {
    return hasAttribute("anchored");
};

void mei::Note::removeAnchored() {
    removeAttribute("anchored");
};
MeiAttribute* mei::Note::getTargetEnd() {
    if (!hasAttribute("targetEnd")) {
        throw AttributeNotFoundException("targetEnd");
    }
    return getAttribute("targetEnd");
};

void mei::Note::setTargetEnd(std::string _targetEnd) {
    MeiAttribute *a = new MeiAttribute("targetEnd", _targetEnd);
    addAttribute(a);
};

bool mei::Note::hasTargetEnd() {
    return hasAttribute("targetEnd");
};

void mei::Note::removeTargetEnd() {
    removeAttribute("targetEnd");
};
/* include <note> */

mei::Num::Num() :
    MeiElement("num"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Num, "num");
mei::Num::~Num() {}
mei::Num::Num(const Num& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ranging(this)
{
}

MeiAttribute* mei::Num::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Num::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Num::hasType() {
    return hasAttribute("type");
};

void mei::Num::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Num::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Num::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Num::hasValue() {
    return hasAttribute("value");
};

void mei::Num::removeValue() {
    removeAttribute("value");
};
/* include <num> */

mei::Orig::Orig() :
    MeiElement("orig"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Orig, "orig");
mei::Orig::~Orig() {}
mei::Orig::Orig(const Orig& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Responsibility(this)
{
}

/* include <orig> */

mei::P::P() :
    MeiElement("p"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this),
    m_Fragmentable(this)
{
}
REGISTER_DEFINITION(mei::P, "p");
mei::P::~P() {}
mei::P::P(const P& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this),
    m_Fragmentable(this)
{
}

/* include <p> */

mei::Pb::Pb() :
    MeiElement("pb"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Edition(this),
    m_Spanning(this),
    m_Breaking(this)
{
}
REGISTER_DEFINITION(mei::Pb, "pb");
mei::Pb::~Pb() {}
mei::Pb::Pb(const Pb& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Edition(this),
    m_Spanning(this),
    m_Breaking(this)
{
}

/* include <pb> */

mei::PostBox::PostBox() :
    MeiElement("postBox"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::PostBox, "postBox");
mei::PostBox::~PostBox() {}
mei::PostBox::PostBox(const PostBox& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <postBox> */

mei::PostCode::PostCode() :
    MeiElement("postCode"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::PostCode, "postCode");
mei::PostCode::~PostCode() {}
mei::PostCode::PostCode(const PostCode& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <postCode> */

mei::Ptr::Ptr() :
    MeiElement("ptr"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_InternetMedia(this),
    m_Typed(this),
    m_Declaring(this),
    m_CReferencing(this)
{
}
REGISTER_DEFINITION(mei::Ptr, "ptr");
mei::Ptr::~Ptr() {}
mei::Ptr::Ptr(const Ptr& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_InternetMedia(this),
    m_Typed(this),
    m_Declaring(this),
    m_CReferencing(this)
{
}

/* include <ptr> */

mei::PubPlace::PubPlace() :
    MeiElement("pubPlace"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::PubPlace, "pubPlace");
mei::PubPlace::~PubPlace() {}
mei::PubPlace::PubPlace(const PubPlace& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <pubPlace> */

mei::Publisher::Publisher() :
    MeiElement("publisher"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Publisher, "publisher");
mei::Publisher::~Publisher() {}
mei::Publisher::Publisher(const Publisher& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <publisher> */

mei::Q::Q() :
    MeiElement("q"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::Q, "q");
mei::Q::~Q() {}
mei::Q::Q(const Q& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this),
    m_Source(this)
{
}

MeiAttribute* mei::Q::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Q::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Q::hasType() {
    return hasAttribute("type");
};

void mei::Q::removeType() {
    removeAttribute("type");
};
/* include <q> */

mei::Quote::Quote() :
    MeiElement("quote"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_MsExcerpt(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::Quote, "quote");
mei::Quote::~Quote() {}
mei::Quote::Quote(const Quote& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_MsExcerpt(this),
    m_Source(this)
{
}

/* include <quote> */

mei::Ref::Ref() :
    MeiElement("ref"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_InternetMedia(this),
    m_Typed(this),
    m_Declaring(this),
    m_CReferencing(this)
{
}
REGISTER_DEFINITION(mei::Ref, "ref");
mei::Ref::~Ref() {}
mei::Ref::Ref(const Ref& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_InternetMedia(this),
    m_Typed(this),
    m_Declaring(this),
    m_CReferencing(this)
{
}

/* include <ref> */

mei::Reg::Reg() :
    MeiElement("reg"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Reg, "reg");
mei::Reg::~Reg() {}
mei::Reg::Reg(const Reg& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <reg> */

mei::RelatedItem::RelatedItem() :
    MeiElement("relatedItem"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::RelatedItem, "relatedItem");
mei::RelatedItem::~RelatedItem() {}
mei::RelatedItem::RelatedItem(const RelatedItem& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

MeiAttribute* mei::RelatedItem::getTarget() {
    if (!hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return getAttribute("target");
};

void mei::RelatedItem::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    addAttribute(a);
};

bool mei::RelatedItem::hasTarget() {
    return hasAttribute("target");
};

void mei::RelatedItem::removeTarget() {
    removeAttribute("target");
};
/* include <relatedItem> */

mei::Resp::Resp() :
    MeiElement("resp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Resp, "resp");
mei::Resp::~Resp() {}
mei::Resp::Resp(const Resp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Canonical(this)
{
}

/* include <resp> */

mei::RespStmt::RespStmt() :
    MeiElement("respStmt"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::RespStmt, "respStmt");
mei::RespStmt::~RespStmt() {}
mei::RespStmt::RespStmt(const RespStmt& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <respStmt> */

mei::Rs::Rs() :
    MeiElement("rs"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Rs, "rs");
mei::Rs::~Rs() {}
mei::Rs::Rs(const Rs& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <rs> */

mei::Said::Said() :
    MeiElement("said"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::Said, "said");
mei::Said::~Said() {}
mei::Said::Said(const Said& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}

MeiAttribute* mei::Said::getAloud() {
    if (!hasAttribute("aloud")) {
        throw AttributeNotFoundException("aloud");
    }
    return getAttribute("aloud");
};

void mei::Said::setAloud(std::string _aloud) {
    MeiAttribute *a = new MeiAttribute("aloud", _aloud);
    addAttribute(a);
};

bool mei::Said::hasAloud() {
    return hasAttribute("aloud");
};

void mei::Said::removeAloud() {
    removeAttribute("aloud");
};
MeiAttribute* mei::Said::getDirect() {
    if (!hasAttribute("direct")) {
        throw AttributeNotFoundException("direct");
    }
    return getAttribute("direct");
};

void mei::Said::setDirect(std::string _direct) {
    MeiAttribute *a = new MeiAttribute("direct", _direct);
    addAttribute(a);
};

bool mei::Said::hasDirect() {
    return hasAttribute("direct");
};

void mei::Said::removeDirect() {
    removeAttribute("direct");
};
/* include <said> */

mei::Series::Series() :
    MeiElement("series"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Series, "series");
mei::Series::~Series() {}
mei::Series::Series(const Series& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <series> */

mei::Sic::Sic() :
    MeiElement("sic"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Sic, "sic");
mei::Sic::~Sic() {}
mei::Sic::Sic(const Sic& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Responsibility(this)
{
}

/* include <sic> */

mei::SoCalled::SoCalled() :
    MeiElement("soCalled"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::SoCalled, "soCalled");
mei::SoCalled::~SoCalled() {}
mei::SoCalled::SoCalled(const SoCalled& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <soCalled> */

mei::Sp::Sp() :
    MeiElement("sp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::Sp, "sp");
mei::Sp::~Sp() {}
mei::Sp::Sp(const Sp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}

/* include <sp> */

mei::Speaker::Speaker() :
    MeiElement("speaker"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Speaker, "speaker");
mei::Speaker::~Speaker() {}
mei::Speaker::Speaker(const Speaker& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <speaker> */

mei::Stage::Stage() :
    MeiElement("stage"),
    m_Ascribed(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Stage, "stage");
mei::Stage::~Stage() {}
mei::Stage::Stage(const Stage& other) :
    MeiElement(other),
    m_Ascribed(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Stage::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Stage::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Stage::hasType() {
    return hasAttribute("type");
};

void mei::Stage::removeType() {
    removeAttribute("type");
};
/* include <stage> */

mei::Street::Street() :
    MeiElement("street"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Street, "street");
mei::Street::~Street() {}
mei::Street::Street(const Street& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <street> */

mei::TeiCorpus::TeiCorpus() :
    MeiElement("teiCorpus"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::TeiCorpus, "teiCorpus");
mei::TeiCorpus::~TeiCorpus() {}
mei::TeiCorpus::TeiCorpus(const TeiCorpus& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::TeiCorpus::getVersion() {
    if (!hasAttribute("version")) {
        throw AttributeNotFoundException("version");
    }
    return getAttribute("version");
};

void mei::TeiCorpus::setVersion(std::string _version) {
    MeiAttribute *a = new MeiAttribute("version", _version);
    addAttribute(a);
};

bool mei::TeiCorpus::hasVersion() {
    return hasAttribute("version");
};

void mei::TeiCorpus::removeVersion() {
    removeAttribute("version");
};
/* include <teiCorpus> */

mei::Term::Term() :
    MeiElement("term"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this),
    m_Pointing(this),
    m_Typed(this),
    m_Canonical(this),
    m_Sortable(this),
    m_CReferencing(this)
{
}
REGISTER_DEFINITION(mei::Term, "term");
mei::Term::~Term() {}
mei::Term::Term(const Term& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this),
    m_Pointing(this),
    m_Typed(this),
    m_Canonical(this),
    m_Sortable(this),
    m_CReferencing(this)
{
}

/* include <term> */

mei::TextLang::TextLang() :
    MeiElement("textLang"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::TextLang, "textLang");
mei::TextLang::~TextLang() {}
mei::TextLang::TextLang(const TextLang& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::TextLang::getMainLang() {
    if (!hasAttribute("mainLang")) {
        throw AttributeNotFoundException("mainLang");
    }
    return getAttribute("mainLang");
};

void mei::TextLang::setMainLang(std::string _mainLang) {
    MeiAttribute *a = new MeiAttribute("mainLang", _mainLang);
    addAttribute(a);
};

bool mei::TextLang::hasMainLang() {
    return hasAttribute("mainLang");
};

void mei::TextLang::removeMainLang() {
    removeAttribute("mainLang");
};
MeiAttribute* mei::TextLang::getOtherLangs() {
    if (!hasAttribute("otherLangs")) {
        throw AttributeNotFoundException("otherLangs");
    }
    return getAttribute("otherLangs");
};

void mei::TextLang::setOtherLangs(std::string _otherLangs) {
    MeiAttribute *a = new MeiAttribute("otherLangs", _otherLangs);
    addAttribute(a);
};

bool mei::TextLang::hasOtherLangs() {
    return hasAttribute("otherLangs");
};

void mei::TextLang::removeOtherLangs() {
    removeAttribute("otherLangs");
};
/* include <textLang> */

mei::Time::Time() :
    MeiElement("time"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Time, "time");
mei::Time::~Time() {}
mei::Time::Time(const Time& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <time> */

mei::Title::Title() :
    MeiElement("title"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Title, "title");
mei::Title::~Title() {}
mei::Title::Title(const Title& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Canonical(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Title::getLevel() {
    if (!hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return getAttribute("level");
};

void mei::Title::setLevel(std::string _level) {
    MeiAttribute *a = new MeiAttribute("level", _level);
    addAttribute(a);
};

bool mei::Title::hasLevel() {
    return hasAttribute("level");
};

void mei::Title::removeLevel() {
    removeAttribute("level");
};
MeiAttribute* mei::Title::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Title::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Title::hasType() {
    return hasAttribute("type");
};

void mei::Title::removeType() {
    removeAttribute("type");
};
/* include <title> */

mei::Unclear::Unclear() :
    MeiElement("unclear"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Unclear, "unclear");
mei::Unclear::~Unclear() {}
mei::Unclear::Unclear(const Unclear& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Unclear::getReason() {
    if (!hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return getAttribute("reason");
};

void mei::Unclear::setReason(std::string _reason) {
    MeiAttribute *a = new MeiAttribute("reason", _reason);
    addAttribute(a);
};

bool mei::Unclear::hasReason() {
    return hasAttribute("reason");
};

void mei::Unclear::removeReason() {
    removeAttribute("reason");
};
MeiAttribute* mei::Unclear::getHand() {
    if (!hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return getAttribute("hand");
};

void mei::Unclear::setHand(std::string _hand) {
    MeiAttribute *a = new MeiAttribute("hand", _hand);
    addAttribute(a);
};

bool mei::Unclear::hasHand() {
    return hasAttribute("hand");
};

void mei::Unclear::removeHand() {
    removeAttribute("hand");
};
MeiAttribute* mei::Unclear::getAgent() {
    if (!hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return getAttribute("agent");
};

void mei::Unclear::setAgent(std::string _agent) {
    MeiAttribute *a = new MeiAttribute("agent", _agent);
    addAttribute(a);
};

bool mei::Unclear::hasAgent() {
    return hasAttribute("agent");
};

void mei::Unclear::removeAgent() {
    removeAttribute("agent");
};
/* include <unclear> */



