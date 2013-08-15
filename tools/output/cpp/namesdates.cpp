#include "namesdates.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AddName::AddName() :
    MeiElement("addName"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AddName, "addName");
mei::AddName::~AddName() {}
mei::AddName::AddName(const AddName& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <addName> */

mei::Affiliation::Affiliation() :
    MeiElement("affiliation"),
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
    m_DatableCustom(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Affiliation, "affiliation");
mei::Affiliation::~Affiliation() {}
mei::Affiliation::Affiliation(const Affiliation& other) :
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
    m_DatableCustom(this),
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <affiliation> */

mei::Age::Age() :
    MeiElement("age"),
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
REGISTER_DEFINITION(mei::Age, "age");
mei::Age::~Age() {}
mei::Age::Age(const Age& other) :
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

MeiAttribute* mei::Age::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Age::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Age::hasValue() {
    return hasAttribute("value");
};

void mei::Age::removeValue() {
    removeAttribute("value");
};
/* include <age> */

mei::Birth::Birth() :
    MeiElement("birth"),
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
    m_DatableCustom(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Birth, "birth");
mei::Birth::~Birth() {}
mei::Birth::Birth(const Birth& other) :
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
    m_DatableCustom(this),
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <birth> */

mei::Bloc::Bloc() :
    MeiElement("bloc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Bloc, "bloc");
mei::Bloc::~Bloc() {}
mei::Bloc::Bloc(const Bloc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <bloc> */

mei::Climate::Climate() :
    MeiElement("climate"),
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
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Climate, "climate");
mei::Climate::~Climate() {}
mei::Climate::Climate(const Climate& other) :
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
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <climate> */

mei::CorpName::CorpName() :
    MeiElement("corpName")
{
}
REGISTER_DEFINITION(mei::CorpName, "corpName");
mei::CorpName::~CorpName() {}
mei::CorpName::CorpName(const CorpName& other) :
    MeiElement(other),

{
}

/* include <corpName> */

mei::Country::Country() :
    MeiElement("country"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Country, "country");
mei::Country::~Country() {}
mei::Country::Country(const Country& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <country> */

mei::Death::Death() :
    MeiElement("death"),
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
    m_DatableCustom(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Death, "death");
mei::Death::~Death() {}
mei::Death::Death(const Death& other) :
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
    m_DatableCustom(this),
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <death> */

mei::District::District() :
    MeiElement("district"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::District, "district");
mei::District::~District() {}
mei::District::District(const District& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <district> */

mei::Education::Education() :
    MeiElement("education"),
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
    m_DatableCustom(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Education, "education");
mei::Education::~Education() {}
mei::Education::Education(const Education& other) :
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
    m_DatableCustom(this),
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <education> */

mei::Event::Event() :
    MeiElement("event"),
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
    m_Typed(this),
    m_Naming(this),
    m_Canonical(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Event, "event");
mei::Event::~Event() {}
mei::Event::Event(const Event& other) :
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
    m_Typed(this),
    m_Naming(this),
    m_Canonical(this),
    m_Sortable(this)
{
}

MeiAttribute* mei::Event::getWhere() {
    if (!hasAttribute("where")) {
        throw AttributeNotFoundException("where");
    }
    return getAttribute("where");
};

void mei::Event::setWhere(std::string _where) {
    MeiAttribute *a = new MeiAttribute("where", _where);
    addAttribute(a);
};

bool mei::Event::hasWhere() {
    return hasAttribute("where");
};

void mei::Event::removeWhere() {
    removeAttribute("where");
};
/* include <event> */

mei::Faith::Faith() :
    MeiElement("faith"),
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
    m_DatableCustom(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Faith, "faith");
mei::Faith::~Faith() {}
mei::Faith::Faith(const Faith& other) :
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
    m_DatableCustom(this),
    m_Canonical(this)
{
}

/* include <faith> */

mei::Floruit::Floruit() :
    MeiElement("floruit"),
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
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Floruit, "floruit");
mei::Floruit::~Floruit() {}
mei::Floruit::Floruit(const Floruit& other) :
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
    m_Responsibility(this)
{
}

/* include <floruit> */

mei::Forename::Forename() :
    MeiElement("forename"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Forename, "forename");
mei::Forename::~Forename() {}
mei::Forename::Forename(const Forename& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <forename> */

mei::GenName::GenName() :
    MeiElement("genName"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::GenName, "genName");
mei::GenName::~GenName() {}
mei::GenName::GenName(const GenName& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <genName> */

mei::Geo::Geo() :
    MeiElement("geo"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Geo, "geo");
mei::Geo::~Geo() {}
mei::Geo::Geo(const Geo& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this)
{
}

/* include <geo> */

mei::GeogFeat::GeogFeat() :
    MeiElement("geogFeat"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::GeogFeat, "geogFeat");
mei::GeogFeat::~GeogFeat() {}
mei::GeogFeat::GeogFeat(const GeogFeat& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <geogFeat> */

mei::GeogName::GeogName() :
    MeiElement("geogName")
{
}
REGISTER_DEFINITION(mei::GeogName, "geogName");
mei::GeogName::~GeogName() {}
mei::GeogName::GeogName(const GeogName& other) :
    MeiElement(other),

{
}

/* include <geogName> */

mei::LangKnowledge::LangKnowledge() :
    MeiElement("langKnowledge"),
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
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::LangKnowledge, "langKnowledge");
mei::LangKnowledge::~LangKnowledge() {}
mei::LangKnowledge::LangKnowledge(const LangKnowledge& other) :
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
    m_Responsibility(this)
{
}

MeiAttribute* mei::LangKnowledge::getTags() {
    if (!hasAttribute("tags")) {
        throw AttributeNotFoundException("tags");
    }
    return getAttribute("tags");
};

void mei::LangKnowledge::setTags(std::string _tags) {
    MeiAttribute *a = new MeiAttribute("tags", _tags);
    addAttribute(a);
};

bool mei::LangKnowledge::hasTags() {
    return hasAttribute("tags");
};

void mei::LangKnowledge::removeTags() {
    removeAttribute("tags");
};
/* include <langKnowledge> */

mei::LangKnown::LangKnown() :
    MeiElement("langKnown"),
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
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::LangKnown, "langKnown");
mei::LangKnown::~LangKnown() {}
mei::LangKnown::LangKnown(const LangKnown& other) :
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
    m_Responsibility(this)
{
}

MeiAttribute* mei::LangKnown::getTag() {
    if (!hasAttribute("tag")) {
        throw AttributeNotFoundException("tag");
    }
    return getAttribute("tag");
};

void mei::LangKnown::setTag(std::string _tag) {
    MeiAttribute *a = new MeiAttribute("tag", _tag);
    addAttribute(a);
};

bool mei::LangKnown::hasTag() {
    return hasAttribute("tag");
};

void mei::LangKnown::removeTag() {
    removeAttribute("tag");
};
MeiAttribute* mei::LangKnown::getLevel() {
    if (!hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return getAttribute("level");
};

void mei::LangKnown::setLevel(std::string _level) {
    MeiAttribute *a = new MeiAttribute("level", _level);
    addAttribute(a);
};

bool mei::LangKnown::hasLevel() {
    return hasAttribute("level");
};

void mei::LangKnown::removeLevel() {
    removeAttribute("level");
};
/* include <langKnown> */

mei::ListEvent::ListEvent() :
    MeiElement("listEvent"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::ListEvent, "listEvent");
mei::ListEvent::~ListEvent() {}
mei::ListEvent::ListEvent(const ListEvent& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}

/* include <listEvent> */

mei::ListNym::ListNym() :
    MeiElement("listNym"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::ListNym, "listNym");
mei::ListNym::~ListNym() {}
mei::ListNym::ListNym(const ListNym& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}

/* include <listNym> */

mei::ListOrg::ListOrg() :
    MeiElement("listOrg"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::ListOrg, "listOrg");
mei::ListOrg::~ListOrg() {}
mei::ListOrg::ListOrg(const ListOrg& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}

/* include <listOrg> */

mei::ListPerson::ListPerson() :
    MeiElement("listPerson"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::ListPerson, "listPerson");
mei::ListPerson::~ListPerson() {}
mei::ListPerson::ListPerson(const ListPerson& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}

/* include <listPerson> */

mei::ListPlace::ListPlace() :
    MeiElement("listPlace"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::ListPlace, "listPlace");
mei::ListPlace::~ListPlace() {}
mei::ListPlace::ListPlace(const ListPlace& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declarable(this),
    m_Sortable(this)
{
}

/* include <listPlace> */

mei::ListRelation::ListRelation() :
    MeiElement("listRelation"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::ListRelation, "listRelation");
mei::ListRelation::~ListRelation() {}
mei::ListRelation::ListRelation(const ListRelation& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Sortable(this)
{
}

/* include <listRelation> */

mei::Location::Location() :
    MeiElement("location"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Location, "location");
mei::Location::~Location() {}
mei::Location::Location(const Location& other) :
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
    m_DatableCustom(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

/* include <location> */

mei::NameLink::NameLink() :
    MeiElement("nameLink"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::NameLink, "nameLink");
mei::NameLink::~NameLink() {}
mei::NameLink::NameLink(const NameLink& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <nameLink> */

mei::Nationality::Nationality() :
    MeiElement("nationality"),
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
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Nationality, "nationality");
mei::Nationality::~Nationality() {}
mei::Nationality::Nationality(const Nationality& other) :
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
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <nationality> */

mei::Nym::Nym() :
    MeiElement("nym"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Nym, "nym");
mei::Nym::~Nym() {}
mei::Nym::Nym(const Nym& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Sortable(this)
{
}

MeiAttribute* mei::Nym::getParts() {
    if (!hasAttribute("parts")) {
        throw AttributeNotFoundException("parts");
    }
    return getAttribute("parts");
};

void mei::Nym::setParts(std::string _parts) {
    MeiAttribute *a = new MeiAttribute("parts", _parts);
    addAttribute(a);
};

bool mei::Nym::hasParts() {
    return hasAttribute("parts");
};

void mei::Nym::removeParts() {
    removeAttribute("parts");
};
/* include <nym> */

mei::Occupation::Occupation() :
    MeiElement("occupation"),
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
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Occupation, "occupation");
mei::Occupation::~Occupation() {}
mei::Occupation::Occupation(const Occupation& other) :
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
    m_Naming(this),
    m_Canonical(this)
{
}

MeiAttribute* mei::Occupation::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::Occupation::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::Occupation::hasScheme() {
    return hasAttribute("scheme");
};

void mei::Occupation::removeScheme() {
    removeAttribute("scheme");
};
MeiAttribute* mei::Occupation::getCode() {
    if (!hasAttribute("code")) {
        throw AttributeNotFoundException("code");
    }
    return getAttribute("code");
};

void mei::Occupation::setCode(std::string _code) {
    MeiAttribute *a = new MeiAttribute("code", _code);
    addAttribute(a);
};

bool mei::Occupation::hasCode() {
    return hasAttribute("code");
};

void mei::Occupation::removeCode() {
    removeAttribute("code");
};
/* include <occupation> */

mei::Offset::Offset() :
    MeiElement("offset"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Offset, "offset");
mei::Offset::~Offset() {}
mei::Offset::Offset(const Offset& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <offset> */

mei::Org::Org() :
    MeiElement("org"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Org, "org");
mei::Org::~Org() {}
mei::Org::Org(const Org& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Sortable(this)
{
}

MeiAttribute* mei::Org::getRole() {
    if (!hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return getAttribute("role");
};

void mei::Org::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    addAttribute(a);
};

bool mei::Org::hasRole() {
    return hasAttribute("role");
};

void mei::Org::removeRole() {
    removeAttribute("role");
};
/* include <org> */

mei::OrgName::OrgName() :
    MeiElement("orgName"),
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
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::OrgName, "orgName");
mei::OrgName::~OrgName() {}
mei::OrgName::OrgName(const OrgName& other) :
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
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <orgName> */

mei::PeriodName::PeriodName() :
    MeiElement("periodName")
{
}
REGISTER_DEFINITION(mei::PeriodName, "periodName");
mei::PeriodName::~PeriodName() {}
mei::PeriodName::PeriodName(const PeriodName& other) :
    MeiElement(other),

{
}

/* include <periodName> */

mei::PersName::PersName() :
    MeiElement("persName")
{
}
REGISTER_DEFINITION(mei::PersName, "persName");
mei::PersName::~PersName() {}
mei::PersName::PersName(const PersName& other) :
    MeiElement(other),

{
}

/* include <persName> */

mei::Person::Person() :
    MeiElement("person"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Person, "person");
mei::Person::~Person() {}
mei::Person::Person(const Person& other) :
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
    m_Sortable(this)
{
}

MeiAttribute* mei::Person::getRole() {
    if (!hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return getAttribute("role");
};

void mei::Person::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    addAttribute(a);
};

bool mei::Person::hasRole() {
    return hasAttribute("role");
};

void mei::Person::removeRole() {
    removeAttribute("role");
};
MeiAttribute* mei::Person::getSex() {
    if (!hasAttribute("sex")) {
        throw AttributeNotFoundException("sex");
    }
    return getAttribute("sex");
};

void mei::Person::setSex(std::string _sex) {
    MeiAttribute *a = new MeiAttribute("sex", _sex);
    addAttribute(a);
};

bool mei::Person::hasSex() {
    return hasAttribute("sex");
};

void mei::Person::removeSex() {
    removeAttribute("sex");
};
MeiAttribute* mei::Person::getAge() {
    if (!hasAttribute("age")) {
        throw AttributeNotFoundException("age");
    }
    return getAttribute("age");
};

void mei::Person::setAge(std::string _age) {
    MeiAttribute *a = new MeiAttribute("age", _age);
    addAttribute(a);
};

bool mei::Person::hasAge() {
    return hasAttribute("age");
};

void mei::Person::removeAge() {
    removeAttribute("age");
};
/* include <person> */

mei::PersonGrp::PersonGrp() :
    MeiElement("personGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::PersonGrp, "personGrp");
mei::PersonGrp::~PersonGrp() {}
mei::PersonGrp::PersonGrp(const PersonGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Sortable(this)
{
}

MeiAttribute* mei::PersonGrp::getRole() {
    if (!hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return getAttribute("role");
};

void mei::PersonGrp::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    addAttribute(a);
};

bool mei::PersonGrp::hasRole() {
    return hasAttribute("role");
};

void mei::PersonGrp::removeRole() {
    removeAttribute("role");
};
MeiAttribute* mei::PersonGrp::getSex() {
    if (!hasAttribute("sex")) {
        throw AttributeNotFoundException("sex");
    }
    return getAttribute("sex");
};

void mei::PersonGrp::setSex(std::string _sex) {
    MeiAttribute *a = new MeiAttribute("sex", _sex);
    addAttribute(a);
};

bool mei::PersonGrp::hasSex() {
    return hasAttribute("sex");
};

void mei::PersonGrp::removeSex() {
    removeAttribute("sex");
};
MeiAttribute* mei::PersonGrp::getAge() {
    if (!hasAttribute("age")) {
        throw AttributeNotFoundException("age");
    }
    return getAttribute("age");
};

void mei::PersonGrp::setAge(std::string _age) {
    MeiAttribute *a = new MeiAttribute("age", _age);
    addAttribute(a);
};

bool mei::PersonGrp::hasAge() {
    return hasAttribute("age");
};

void mei::PersonGrp::removeAge() {
    removeAttribute("age");
};
MeiAttribute* mei::PersonGrp::getSize() {
    if (!hasAttribute("size")) {
        throw AttributeNotFoundException("size");
    }
    return getAttribute("size");
};

void mei::PersonGrp::setSize(std::string _size) {
    MeiAttribute *a = new MeiAttribute("size", _size);
    addAttribute(a);
};

bool mei::PersonGrp::hasSize() {
    return hasAttribute("size");
};

void mei::PersonGrp::removeSize() {
    removeAttribute("size");
};
/* include <personGrp> */

mei::Place::Place() :
    MeiElement("place"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Place, "place");
mei::Place::~Place() {}
mei::Place::Place(const Place& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Sortable(this)
{
}

/* include <place> */

mei::PlaceName::PlaceName() :
    MeiElement("placeName"),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::PlaceName, "placeName");
mei::PlaceName::~PlaceName() {}
mei::PlaceName::PlaceName(const PlaceName& other) :
    MeiElement(other),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <placeName> */

mei::Population::Population() :
    MeiElement("population"),
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
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Population, "population");
mei::Population::~Population() {}
mei::Population::Population(const Population& other) :
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
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <population> */

mei::Region::Region() :
    MeiElement("region"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Region, "region");
mei::Region::~Region() {}
mei::Region::Region(const Region& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <region> */

mei::Relation::Relation() :
    MeiElement("relation"),
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
    m_Canonical(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Relation, "relation");
mei::Relation::~Relation() {}
mei::Relation::Relation(const Relation& other) :
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
    m_Canonical(this),
    m_Sortable(this)
{
}

MeiAttribute* mei::Relation::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Relation::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Relation::hasType() {
    return hasAttribute("type");
};

void mei::Relation::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Relation::getName() {
    if (!hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return getAttribute("name");
};

void mei::Relation::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    addAttribute(a);
};

bool mei::Relation::hasName() {
    return hasAttribute("name");
};

void mei::Relation::removeName() {
    removeAttribute("name");
};
MeiAttribute* mei::Relation::getPassive() {
    if (!hasAttribute("passive")) {
        throw AttributeNotFoundException("passive");
    }
    return getAttribute("passive");
};

void mei::Relation::setPassive(std::string _passive) {
    MeiAttribute *a = new MeiAttribute("passive", _passive);
    addAttribute(a);
};

bool mei::Relation::hasPassive() {
    return hasAttribute("passive");
};

void mei::Relation::removePassive() {
    removeAttribute("passive");
};
/* include <relation> */

mei::RelationGrp::RelationGrp() :
    MeiElement("relationGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::RelationGrp, "relationGrp");
mei::RelationGrp::~RelationGrp() {}
mei::RelationGrp::RelationGrp(const RelationGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Sortable(this)
{
}

/* include <relationGrp> */

mei::Residence::Residence() :
    MeiElement("residence"),
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
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::Residence, "residence");
mei::Residence::~Residence() {}
mei::Residence::Residence(const Residence& other) :
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
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <residence> */

mei::RoleName::RoleName() :
    MeiElement("roleName"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::RoleName, "roleName");
mei::RoleName::~RoleName() {}
mei::RoleName::RoleName(const RoleName& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <roleName> */

mei::Settlement::Settlement() :
    MeiElement("settlement"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}
REGISTER_DEFINITION(mei::Settlement, "settlement");
mei::Settlement::~Settlement() {}
mei::Settlement::Settlement(const Settlement& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this),
    m_Datable(this),
    m_DatableW3c(this),
    m_DatableIso(this),
    m_DatableCustom(this)
{
}

/* include <settlement> */

mei::Sex::Sex() :
    MeiElement("sex"),
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
REGISTER_DEFINITION(mei::Sex, "sex");
mei::Sex::~Sex() {}
mei::Sex::Sex(const Sex& other) :
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

MeiAttribute* mei::Sex::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Sex::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Sex::hasValue() {
    return hasAttribute("value");
};

void mei::Sex::removeValue() {
    removeAttribute("value");
};
/* include <sex> */

mei::SocecStatus::SocecStatus() :
    MeiElement("socecStatus"),
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
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::SocecStatus, "socecStatus");
mei::SocecStatus::~SocecStatus() {}
mei::SocecStatus::SocecStatus(const SocecStatus& other) :
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
    m_Naming(this),
    m_Canonical(this)
{
}

MeiAttribute* mei::SocecStatus::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::SocecStatus::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::SocecStatus::hasScheme() {
    return hasAttribute("scheme");
};

void mei::SocecStatus::removeScheme() {
    removeAttribute("scheme");
};
MeiAttribute* mei::SocecStatus::getCode() {
    if (!hasAttribute("code")) {
        throw AttributeNotFoundException("code");
    }
    return getAttribute("code");
};

void mei::SocecStatus::setCode(std::string _code) {
    MeiAttribute *a = new MeiAttribute("code", _code);
    addAttribute(a);
};

bool mei::SocecStatus::hasCode() {
    return hasAttribute("code");
};

void mei::SocecStatus::removeCode() {
    removeAttribute("code");
};
/* include <socecStatus> */

mei::State::State() :
    MeiElement("state"),
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
    m_Typed(this),
    m_Naming(this),
    m_Canonical(this)
{
}
REGISTER_DEFINITION(mei::State, "state");
mei::State::~State() {}
mei::State::State(const State& other) :
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
    m_Typed(this),
    m_Naming(this),
    m_Canonical(this)
{
}

/* include <state> */

mei::StyleName::StyleName() :
    MeiElement("styleName")
{
}
REGISTER_DEFINITION(mei::StyleName, "styleName");
mei::StyleName::~StyleName() {}
mei::StyleName::StyleName(const StyleName& other) :
    MeiElement(other),

{
}

/* include <styleName> */

mei::Surname::Surname() :
    MeiElement("surname"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Surname, "surname");
mei::Surname::~Surname() {}
mei::Surname::Surname(const Surname& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Personal(this),
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <surname> */

mei::Terrain::Terrain() :
    MeiElement("terrain"),
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
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Terrain, "terrain");
mei::Terrain::~Terrain() {}
mei::Terrain::Terrain(const Terrain& other) :
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
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <terrain> */

mei::Trait::Trait() :
    MeiElement("trait"),
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
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Trait, "trait");
mei::Trait::~Trait() {}
mei::Trait::Trait(const Trait& other) :
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
    m_Naming(this),
    m_Canonical(this),
    m_Typed(this)
{
}

/* include <trait> */



