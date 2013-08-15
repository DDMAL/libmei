#include "textcrit.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::App::App() :
    MeiElement("app"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::App, "app");
mei::App::~App() {}
mei::App::App(const App& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::App::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::App::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::App::hasType() {
    return hasAttribute("type");
};

void mei::App::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::App::getFrom() {
    if (!hasAttribute("from")) {
        throw AttributeNotFoundException("from");
    }
    return getAttribute("from");
};

void mei::App::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    addAttribute(a);
};

bool mei::App::hasFrom() {
    return hasAttribute("from");
};

void mei::App::removeFrom() {
    removeAttribute("from");
};
MeiAttribute* mei::App::getTo() {
    if (!hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return getAttribute("to");
};

void mei::App::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    addAttribute(a);
};

bool mei::App::hasTo() {
    return hasAttribute("to");
};

void mei::App::removeTo() {
    removeAttribute("to");
};
MeiAttribute* mei::App::getLoc() {
    if (!hasAttribute("loc")) {
        throw AttributeNotFoundException("loc");
    }
    return getAttribute("loc");
};

void mei::App::setLoc(std::string _loc) {
    MeiAttribute *a = new MeiAttribute("loc", _loc);
    addAttribute(a);
};

bool mei::App::hasLoc() {
    return hasAttribute("loc");
};

void mei::App::removeLoc() {
    removeAttribute("loc");
};
/* include <app> */

mei::LacunaEnd::LacunaEnd() :
    MeiElement("lacunaEnd"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}
REGISTER_DEFINITION(mei::LacunaEnd, "lacunaEnd");
mei::LacunaEnd::~LacunaEnd() {}
mei::LacunaEnd::LacunaEnd(const LacunaEnd& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}

/* include <lacunaEnd> */

mei::LacunaStart::LacunaStart() :
    MeiElement("lacunaStart"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}
REGISTER_DEFINITION(mei::LacunaStart, "lacunaStart");
mei::LacunaStart::~LacunaStart() {}
mei::LacunaStart::LacunaStart(const LacunaStart& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}

/* include <lacunaStart> */

mei::Lem::Lem() :
    MeiElement("lem"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TextCritical(this),
    m_Responsibility(this),
    m_Witnessed(this)
{
}
REGISTER_DEFINITION(mei::Lem, "lem");
mei::Lem::~Lem() {}
mei::Lem::Lem(const Lem& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TextCritical(this),
    m_Responsibility(this),
    m_Witnessed(this)
{
}

/* include <lem> */

mei::ListApp::ListApp() :
    MeiElement("listApp"),
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
REGISTER_DEFINITION(mei::ListApp, "listApp");
mei::ListApp::~ListApp() {}
mei::ListApp::ListApp(const ListApp& other) :
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

/* include <listApp> */

mei::ListWit::ListWit() :
    MeiElement("listWit"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::ListWit, "listWit");
mei::ListWit::~ListWit() {}
mei::ListWit::ListWit(const ListWit& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}

/* include <listWit> */

mei::Rdg::Rdg() :
    MeiElement("rdg"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TextCritical(this),
    m_Responsibility(this),
    m_Witnessed(this)
{
}
REGISTER_DEFINITION(mei::Rdg, "rdg");
mei::Rdg::~Rdg() {}
mei::Rdg::Rdg(const Rdg& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TextCritical(this),
    m_Responsibility(this),
    m_Witnessed(this)
{
}

/* include <rdg> */

mei::RdgGrp::RdgGrp() :
    MeiElement("rdgGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TextCritical(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::RdgGrp, "rdgGrp");
mei::RdgGrp::~RdgGrp() {}
mei::RdgGrp::RdgGrp(const RdgGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TextCritical(this),
    m_Responsibility(this)
{
}

/* include <rdgGrp> */

mei::VariantEncoding::VariantEncoding() :
    MeiElement("variantEncoding"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::VariantEncoding, "variantEncoding");
mei::VariantEncoding::~VariantEncoding() {}
mei::VariantEncoding::VariantEncoding(const VariantEncoding& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::VariantEncoding::getMethod() {
    if (!hasAttribute("method")) {
        throw AttributeNotFoundException("method");
    }
    return getAttribute("method");
};

void mei::VariantEncoding::setMethod(std::string _method) {
    MeiAttribute *a = new MeiAttribute("method", _method);
    addAttribute(a);
};

bool mei::VariantEncoding::hasMethod() {
    return hasAttribute("method");
};

void mei::VariantEncoding::removeMethod() {
    removeAttribute("method");
};
MeiAttribute* mei::VariantEncoding::getLocation() {
    if (!hasAttribute("location")) {
        throw AttributeNotFoundException("location");
    }
    return getAttribute("location");
};

void mei::VariantEncoding::setLocation(std::string _location) {
    MeiAttribute *a = new MeiAttribute("location", _location);
    addAttribute(a);
};

bool mei::VariantEncoding::hasLocation() {
    return hasAttribute("location");
};

void mei::VariantEncoding::removeLocation() {
    removeAttribute("location");
};
/* include <variantEncoding> */

mei::Wit::Wit() :
    MeiElement("wit"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}
REGISTER_DEFINITION(mei::Wit, "wit");
mei::Wit::~Wit() {}
mei::Wit::Wit(const Wit& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}

/* include <wit> */

mei::WitDetail::WitDetail() :
    MeiElement("witDetail"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this),
    m_Responsibility(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::WitDetail, "witDetail");
mei::WitDetail::~WitDetail() {}
mei::WitDetail::WitDetail(const WitDetail& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this),
    m_Responsibility(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::WitDetail::getWit() {
    if (!hasAttribute("wit")) {
        throw AttributeNotFoundException("wit");
    }
    return getAttribute("wit");
};

void mei::WitDetail::setWit(std::string _wit) {
    MeiAttribute *a = new MeiAttribute("wit", _wit);
    addAttribute(a);
};

bool mei::WitDetail::hasWit() {
    return hasAttribute("wit");
};

void mei::WitDetail::removeWit() {
    removeAttribute("wit");
};
MeiAttribute* mei::WitDetail::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::WitDetail::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::WitDetail::hasType() {
    return hasAttribute("type");
};

void mei::WitDetail::removeType() {
    removeAttribute("type");
};
/* include <witDetail> */

mei::WitEnd::WitEnd() :
    MeiElement("witEnd"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}
REGISTER_DEFINITION(mei::WitEnd, "witEnd");
mei::WitEnd::~WitEnd() {}
mei::WitEnd::WitEnd(const WitEnd& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}

/* include <witEnd> */

mei::WitStart::WitStart() :
    MeiElement("witStart"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}
REGISTER_DEFINITION(mei::WitStart, "witStart");
mei::WitStart::~WitStart() {}
mei::WitStart::WitStart(const WitStart& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_RdgPart(this)
{
}

/* include <witStart> */

mei::Witness::Witness() :
    MeiElement("witness"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Witness, "witness");
mei::Witness::~Witness() {}
mei::Witness::Witness(const Witness& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}

/* include <witness> */



