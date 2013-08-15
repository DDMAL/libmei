#include "msdescription.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AccMat::AccMat() :
    MeiElement("accMat"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AccMat, "accMat");
mei::AccMat::~AccMat() {}
mei::AccMat::AccMat(const AccMat& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <accMat> */

mei::Acquisition::Acquisition() :
    MeiElement("acquisition"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Acquisition, "acquisition");
mei::Acquisition::~Acquisition() {}
mei::Acquisition::Acquisition(const Acquisition& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <acquisition> */

mei::Additional::Additional() :
    MeiElement("additional"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Additional, "additional");
mei::Additional::~Additional() {}
mei::Additional::Additional(const Additional& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <additional> */

mei::Additions::Additions() :
    MeiElement("additions"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Additions, "additions");
mei::Additions::~Additions() {}
mei::Additions::Additions(const Additions& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <additions> */

mei::AdminInfo::AdminInfo() :
    MeiElement("adminInfo"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::AdminInfo, "adminInfo");
mei::AdminInfo::~AdminInfo() {}
mei::AdminInfo::AdminInfo(const AdminInfo& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <adminInfo> */

mei::AltIdentifier::AltIdentifier() :
    MeiElement("altIdentifier"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AltIdentifier, "altIdentifier");
mei::AltIdentifier::~AltIdentifier() {}
mei::AltIdentifier::AltIdentifier(const AltIdentifier& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <altIdentifier> */

mei::Binding::Binding() :
    MeiElement("binding"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Binding, "binding");
mei::Binding::~Binding() {}
mei::Binding::Binding(const Binding& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

MeiAttribute* mei::Binding::getContemporary() {
    if (!hasAttribute("contemporary")) {
        throw AttributeNotFoundException("contemporary");
    }
    return getAttribute("contemporary");
};

void mei::Binding::setContemporary(std::string _contemporary) {
    MeiAttribute *a = new MeiAttribute("contemporary", _contemporary);
    addAttribute(a);
};

bool mei::Binding::hasContemporary() {
    return hasAttribute("contemporary");
};

void mei::Binding::removeContemporary() {
    removeAttribute("contemporary");
};
/* include <binding> */

mei::BindingDesc::BindingDesc() :
    MeiElement("bindingDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::BindingDesc, "bindingDesc");
mei::BindingDesc::~BindingDesc() {}
mei::BindingDesc::BindingDesc(const BindingDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <bindingDesc> */

mei::Catchwords::Catchwords() :
    MeiElement("catchwords"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Catchwords, "catchwords");
mei::Catchwords::~Catchwords() {}
mei::Catchwords::Catchwords(const Catchwords& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <catchwords> */

mei::Collation::Collation() :
    MeiElement("collation"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Collation, "collation");
mei::Collation::~Collation() {}
mei::Collation::Collation(const Collation& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <collation> */

mei::Collection::Collection() :
    MeiElement("collection"),
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
REGISTER_DEFINITION(mei::Collection, "collection");
mei::Collection::~Collection() {}
mei::Collection::Collection(const Collection& other) :
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

/* include <collection> */

mei::Colophon::Colophon() :
    MeiElement("colophon"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Colophon, "colophon");
mei::Colophon::~Colophon() {}
mei::Colophon::Colophon(const Colophon& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <colophon> */

mei::Condition::Condition() :
    MeiElement("condition"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Condition, "condition");
mei::Condition::~Condition() {}
mei::Condition::Condition(const Condition& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <condition> */

mei::CustEvent::CustEvent() :
    MeiElement("custEvent"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::CustEvent, "custEvent");
mei::CustEvent::~CustEvent() {}
mei::CustEvent::CustEvent(const CustEvent& other) :
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
    m_Typed(this)
{
}

/* include <custEvent> */

mei::CustodialHist::CustodialHist() :
    MeiElement("custodialHist"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::CustodialHist, "custodialHist");
mei::CustodialHist::~CustodialHist() {}
mei::CustodialHist::CustodialHist(const CustodialHist& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <custodialHist> */

mei::DecoDesc::DecoDesc() :
    MeiElement("decoDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::DecoDesc, "decoDesc");
mei::DecoDesc::~DecoDesc() {}
mei::DecoDesc::DecoDesc(const DecoDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <decoDesc> */

mei::DecoNote::DecoNote() :
    MeiElement("decoNote"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::DecoNote, "decoNote");
mei::DecoNote::~DecoNote() {}
mei::DecoNote::DecoNote(const DecoNote& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <decoNote> */

mei::Depth::Depth() :
    MeiElement("depth"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Depth, "depth");
mei::Depth::~Depth() {}
mei::Depth::Depth(const Depth& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}

/* include <depth> */

mei::Dim::Dim() :
    MeiElement("dim"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Dim, "dim");
mei::Dim::~Dim() {}
mei::Dim::Dim(const Dim& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}

/* include <dim> */

mei::Dimensions::Dimensions() :
    MeiElement("dimensions"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Dimensions, "dimensions");
mei::Dimensions::~Dimensions() {}
mei::Dimensions::Dimensions(const Dimensions& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}

MeiAttribute* mei::Dimensions::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Dimensions::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Dimensions::hasType() {
    return hasAttribute("type");
};

void mei::Dimensions::removeType() {
    removeAttribute("type");
};
/* include <dimensions> */

mei::Explicit::Explicit() :
    MeiElement("explicit"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_MsExcerpt(this)
{
}
REGISTER_DEFINITION(mei::Explicit, "explicit");
mei::Explicit::~Explicit() {}
mei::Explicit::Explicit(const Explicit& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_MsExcerpt(this)
{
}

/* include <explicit> */

mei::Filiation::Filiation() :
    MeiElement("filiation"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Filiation, "filiation");
mei::Filiation::~Filiation() {}
mei::Filiation::Filiation(const Filiation& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <filiation> */

mei::FinalRubric::FinalRubric() :
    MeiElement("finalRubric"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::FinalRubric, "finalRubric");
mei::FinalRubric::~FinalRubric() {}
mei::FinalRubric::FinalRubric(const FinalRubric& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <finalRubric> */

mei::Foliation::Foliation() :
    MeiElement("foliation"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Foliation, "foliation");
mei::Foliation::~Foliation() {}
mei::Foliation::Foliation(const Foliation& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <foliation> */

mei::HandDesc::HandDesc() :
    MeiElement("handDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::HandDesc, "handDesc");
mei::HandDesc::~HandDesc() {}
mei::HandDesc::HandDesc(const HandDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::HandDesc::getHands() {
    if (!hasAttribute("hands")) {
        throw AttributeNotFoundException("hands");
    }
    return getAttribute("hands");
};

void mei::HandDesc::setHands(std::string _hands) {
    MeiAttribute *a = new MeiAttribute("hands", _hands);
    addAttribute(a);
};

bool mei::HandDesc::hasHands() {
    return hasAttribute("hands");
};

void mei::HandDesc::removeHands() {
    removeAttribute("hands");
};
/* include <handDesc> */

mei::Height::Height() :
    MeiElement("height"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Height, "height");
mei::Height::~Height() {}
mei::Height::Height(const Height& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}

/* include <height> */

mei::Heraldry::Heraldry() :
    MeiElement("heraldry"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Heraldry, "heraldry");
mei::Heraldry::~Heraldry() {}
mei::Heraldry::Heraldry(const Heraldry& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <heraldry> */

mei::History::History() :
    MeiElement("history"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::History, "history");
mei::History::~History() {}
mei::History::History(const History& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <history> */

mei::Incipit::Incipit() :
    MeiElement("incipit"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_MsExcerpt(this)
{
}
REGISTER_DEFINITION(mei::Incipit, "incipit");
mei::Incipit::~Incipit() {}
mei::Incipit::Incipit(const Incipit& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_MsExcerpt(this)
{
}

/* include <incipit> */

mei::Institution::Institution() :
    MeiElement("institution"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Institution, "institution");
mei::Institution::~Institution() {}
mei::Institution::Institution(const Institution& other) :
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

/* include <institution> */

mei::Layout::Layout() :
    MeiElement("layout"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Layout, "layout");
mei::Layout::~Layout() {}
mei::Layout::Layout(const Layout& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Layout::getColumns() {
    if (!hasAttribute("columns")) {
        throw AttributeNotFoundException("columns");
    }
    return getAttribute("columns");
};

void mei::Layout::setColumns(std::string _columns) {
    MeiAttribute *a = new MeiAttribute("columns", _columns);
    addAttribute(a);
};

bool mei::Layout::hasColumns() {
    return hasAttribute("columns");
};

void mei::Layout::removeColumns() {
    removeAttribute("columns");
};
MeiAttribute* mei::Layout::getRuledLines() {
    if (!hasAttribute("ruledLines")) {
        throw AttributeNotFoundException("ruledLines");
    }
    return getAttribute("ruledLines");
};

void mei::Layout::setRuledLines(std::string _ruledLines) {
    MeiAttribute *a = new MeiAttribute("ruledLines", _ruledLines);
    addAttribute(a);
};

bool mei::Layout::hasRuledLines() {
    return hasAttribute("ruledLines");
};

void mei::Layout::removeRuledLines() {
    removeAttribute("ruledLines");
};
MeiAttribute* mei::Layout::getWrittenLines() {
    if (!hasAttribute("writtenLines")) {
        throw AttributeNotFoundException("writtenLines");
    }
    return getAttribute("writtenLines");
};

void mei::Layout::setWrittenLines(std::string _writtenLines) {
    MeiAttribute *a = new MeiAttribute("writtenLines", _writtenLines);
    addAttribute(a);
};

bool mei::Layout::hasWrittenLines() {
    return hasAttribute("writtenLines");
};

void mei::Layout::removeWrittenLines() {
    removeAttribute("writtenLines");
};
/* include <layout> */

mei::LayoutDesc::LayoutDesc() :
    MeiElement("layoutDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::LayoutDesc, "layoutDesc");
mei::LayoutDesc::~LayoutDesc() {}
mei::LayoutDesc::LayoutDesc(const LayoutDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <layoutDesc> */

mei::Locus::Locus() :
    MeiElement("locus"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Locus, "locus");
mei::Locus::~Locus() {}
mei::Locus::Locus(const Locus& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::Locus::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::Locus::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::Locus::hasScheme() {
    return hasAttribute("scheme");
};

void mei::Locus::removeScheme() {
    removeAttribute("scheme");
};
MeiAttribute* mei::Locus::getFrom() {
    if (!hasAttribute("from")) {
        throw AttributeNotFoundException("from");
    }
    return getAttribute("from");
};

void mei::Locus::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    addAttribute(a);
};

bool mei::Locus::hasFrom() {
    return hasAttribute("from");
};

void mei::Locus::removeFrom() {
    removeAttribute("from");
};
MeiAttribute* mei::Locus::getTo() {
    if (!hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return getAttribute("to");
};

void mei::Locus::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    addAttribute(a);
};

bool mei::Locus::hasTo() {
    return hasAttribute("to");
};

void mei::Locus::removeTo() {
    removeAttribute("to");
};
/* include <locus> */

mei::LocusGrp::LocusGrp() :
    MeiElement("locusGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::LocusGrp, "locusGrp");
mei::LocusGrp::~LocusGrp() {}
mei::LocusGrp::LocusGrp(const LocusGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::LocusGrp::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::LocusGrp::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::LocusGrp::hasScheme() {
    return hasAttribute("scheme");
};

void mei::LocusGrp::removeScheme() {
    removeAttribute("scheme");
};
/* include <locusGrp> */

mei::Material::Material() :
    MeiElement("material"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Material, "material");
mei::Material::~Material() {}
mei::Material::Material(const Material& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Canonical(this)
{
}

/* include <material> */

mei::MsContents::MsContents() :
    MeiElement("msContents"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MsExcerpt(this)
{
}
REGISTER_DEFINITION(mei::MsContents, "msContents");
mei::MsContents::~MsContents() {}
mei::MsContents::MsContents(const MsContents& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MsExcerpt(this)
{
}

MeiAttribute* mei::MsContents::getClass() {
    if (!hasAttribute("class")) {
        throw AttributeNotFoundException("class");
    }
    return getAttribute("class");
};

void mei::MsContents::setClass(std::string _class) {
    MeiAttribute *a = new MeiAttribute("class", _class);
    addAttribute(a);
};

bool mei::MsContents::hasClass() {
    return hasAttribute("class");
};

void mei::MsContents::removeClass() {
    removeAttribute("class");
};
/* include <msContents> */

mei::MsDesc::MsDesc() :
    MeiElement("msDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::MsDesc, "msDesc");
mei::MsDesc::~MsDesc() {}
mei::MsDesc::MsDesc(const MsDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this),
    m_Typed(this)
{
}

/* include <msDesc> */

mei::MsIdentifier::MsIdentifier() :
    MeiElement("msIdentifier"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::MsIdentifier, "msIdentifier");
mei::MsIdentifier::~MsIdentifier() {}
mei::MsIdentifier::MsIdentifier(const MsIdentifier& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <msIdentifier> */

mei::MsItem::MsItem() :
    MeiElement("msItem"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MsExcerpt(this)
{
}
REGISTER_DEFINITION(mei::MsItem, "msItem");
mei::MsItem::~MsItem() {}
mei::MsItem::MsItem(const MsItem& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MsExcerpt(this)
{
}

MeiAttribute* mei::MsItem::getClass() {
    if (!hasAttribute("class")) {
        throw AttributeNotFoundException("class");
    }
    return getAttribute("class");
};

void mei::MsItem::setClass(std::string _class) {
    MeiAttribute *a = new MeiAttribute("class", _class);
    addAttribute(a);
};

bool mei::MsItem::hasClass() {
    return hasAttribute("class");
};

void mei::MsItem::removeClass() {
    removeAttribute("class");
};
/* include <msItem> */

mei::MsItemStruct::MsItemStruct() :
    MeiElement("msItemStruct"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MsExcerpt(this)
{
}
REGISTER_DEFINITION(mei::MsItemStruct, "msItemStruct");
mei::MsItemStruct::~MsItemStruct() {}
mei::MsItemStruct::MsItemStruct(const MsItemStruct& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_MsExcerpt(this)
{
}

MeiAttribute* mei::MsItemStruct::getClass() {
    if (!hasAttribute("class")) {
        throw AttributeNotFoundException("class");
    }
    return getAttribute("class");
};

void mei::MsItemStruct::setClass(std::string _class) {
    MeiAttribute *a = new MeiAttribute("class", _class);
    addAttribute(a);
};

bool mei::MsItemStruct::hasClass() {
    return hasAttribute("class");
};

void mei::MsItemStruct::removeClass() {
    removeAttribute("class");
};
/* include <msItemStruct> */

mei::MsName::MsName() :
    MeiElement("msName"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::MsName, "msName");
mei::MsName::~MsName() {}
mei::MsName::MsName(const MsName& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <msName> */

mei::MsPart::MsPart() :
    MeiElement("msPart"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::MsPart, "msPart");
mei::MsPart::~MsPart() {}
mei::MsPart::MsPart(const MsPart& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <msPart> */

mei::MusicNotation::MusicNotation() :
    MeiElement("musicNotation"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::MusicNotation, "musicNotation");
mei::MusicNotation::~MusicNotation() {}
mei::MusicNotation::MusicNotation(const MusicNotation& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <musicNotation> */

mei::ObjectDesc::ObjectDesc() :
    MeiElement("objectDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::ObjectDesc, "objectDesc");
mei::ObjectDesc::~ObjectDesc() {}
mei::ObjectDesc::ObjectDesc(const ObjectDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::ObjectDesc::getForm() {
    if (!hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return getAttribute("form");
};

void mei::ObjectDesc::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    addAttribute(a);
};

bool mei::ObjectDesc::hasForm() {
    return hasAttribute("form");
};

void mei::ObjectDesc::removeForm() {
    removeAttribute("form");
};
/* include <objectDesc> */

mei::ObjectType::ObjectType() :
    MeiElement("objectType"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::ObjectType, "objectType");
mei::ObjectType::~ObjectType() {}
mei::ObjectType::ObjectType(const ObjectType& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Canonical(this)
{
}

/* include <objectType> */

mei::OrigDate::OrigDate() :
    MeiElement("origDate"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
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
REGISTER_DEFINITION(mei::OrigDate, "origDate");
mei::OrigDate::~OrigDate() {}
mei::OrigDate::OrigDate(const OrigDate& other) :
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
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <origDate> */

mei::OrigPlace::OrigPlace() :
    MeiElement("origPlace"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
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
REGISTER_DEFINITION(mei::OrigPlace, "origPlace");
mei::OrigPlace::~OrigPlace() {}
mei::OrigPlace::OrigPlace(const OrigPlace& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
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

/* include <origPlace> */

mei::Origin::Origin() :
    MeiElement("origin"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Origin, "origin");
mei::Origin::~Origin() {}
mei::Origin::Origin(const Origin& other) :
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
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <origin> */

mei::PhysDesc::PhysDesc() :
    MeiElement("physDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::PhysDesc, "physDesc");
mei::PhysDesc::~PhysDesc() {}
mei::PhysDesc::PhysDesc(const PhysDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <physDesc> */

mei::Provenance::Provenance() :
    MeiElement("provenance"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_Typed(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Provenance, "provenance");
mei::Provenance::~Provenance() {}
mei::Provenance::Provenance(const Provenance& other) :
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
    m_Typed(this),
    m_Responsibility(this)
{
}

/* include <provenance> */

mei::RecordHist::RecordHist() :
    MeiElement("recordHist"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::RecordHist, "recordHist");
mei::RecordHist::~RecordHist() {}
mei::RecordHist::RecordHist(const RecordHist& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <recordHist> */

mei::Repository::Repository() :
    MeiElement("repository"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Repository, "repository");
mei::Repository::~Repository() {}
mei::Repository::Repository(const Repository& other) :
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

/* include <repository> */

mei::Rubric::Rubric() :
    MeiElement("rubric"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Rubric, "rubric");
mei::Rubric::~Rubric() {}
mei::Rubric::Rubric(const Rubric& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <rubric> */

mei::ScriptDesc::ScriptDesc() :
    MeiElement("scriptDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::ScriptDesc, "scriptDesc");
mei::ScriptDesc::~ScriptDesc() {}
mei::ScriptDesc::ScriptDesc(const ScriptDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <scriptDesc> */

mei::Seal::Seal() :
    MeiElement("seal"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Seal, "seal");
mei::Seal::~Seal() {}
mei::Seal::Seal(const Seal& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

MeiAttribute* mei::Seal::getContemporary() {
    if (!hasAttribute("contemporary")) {
        throw AttributeNotFoundException("contemporary");
    }
    return getAttribute("contemporary");
};

void mei::Seal::setContemporary(std::string _contemporary) {
    MeiAttribute *a = new MeiAttribute("contemporary", _contemporary);
    addAttribute(a);
};

bool mei::Seal::hasContemporary() {
    return hasAttribute("contemporary");
};

void mei::Seal::removeContemporary() {
    removeAttribute("contemporary");
};
/* include <seal> */

mei::SealDesc::SealDesc() :
    MeiElement("sealDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::SealDesc, "sealDesc");
mei::SealDesc::~SealDesc() {}
mei::SealDesc::SealDesc(const SealDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <sealDesc> */

mei::SecFol::SecFol() :
    MeiElement("secFol"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::SecFol, "secFol");
mei::SecFol::~SecFol() {}
mei::SecFol::SecFol(const SecFol& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <secFol> */

mei::Signatures::Signatures() :
    MeiElement("signatures"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Signatures, "signatures");
mei::Signatures::~Signatures() {}
mei::Signatures::Signatures(const Signatures& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <signatures> */

mei::Source::Source() :
    MeiElement("source"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Source, "source");
mei::Source::~Source() {}
mei::Source::Source(const Source& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <source> */

mei::Stamp::Stamp() :
    MeiElement("stamp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Stamp, "stamp");
mei::Stamp::~Stamp() {}
mei::Stamp::Stamp(const Stamp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <stamp> */

mei::Summary::Summary() :
    MeiElement("summary"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Summary, "summary");
mei::Summary::~Summary() {}
mei::Summary::Summary(const Summary& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <summary> */

mei::Support::Support() :
    MeiElement("support"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Support, "support");
mei::Support::~Support() {}
mei::Support::Support(const Support& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <support> */

mei::SupportDesc::SupportDesc() :
    MeiElement("supportDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::SupportDesc, "supportDesc");
mei::SupportDesc::~SupportDesc() {}
mei::SupportDesc::SupportDesc(const SupportDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::SupportDesc::getMaterial() {
    if (!hasAttribute("material")) {
        throw AttributeNotFoundException("material");
    }
    return getAttribute("material");
};

void mei::SupportDesc::setMaterial(std::string _material) {
    MeiAttribute *a = new MeiAttribute("material", _material);
    addAttribute(a);
};

bool mei::SupportDesc::hasMaterial() {
    return hasAttribute("material");
};

void mei::SupportDesc::removeMaterial() {
    removeAttribute("material");
};
/* include <supportDesc> */

mei::Surrogates::Surrogates() :
    MeiElement("surrogates"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Surrogates, "surrogates");
mei::Surrogates::~Surrogates() {}
mei::Surrogates::Surrogates(const Surrogates& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <surrogates> */

mei::TypeDesc::TypeDesc() :
    MeiElement("typeDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::TypeDesc, "typeDesc");
mei::TypeDesc::~TypeDesc() {}
mei::TypeDesc::TypeDesc(const TypeDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <typeDesc> */

mei::Watermark::Watermark() :
    MeiElement("watermark"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Watermark, "watermark");
mei::Watermark::~Watermark() {}
mei::Watermark::Watermark(const Watermark& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <watermark> */

mei::Width::Width() :
    MeiElement("width"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Width, "width");
mei::Width::~Width() {}
mei::Width::Width(const Width& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}

/* include <width> */



