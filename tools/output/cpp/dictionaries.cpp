#include "dictionaries.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Case::Case() :
    MeiElement("case"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Case, "case");
mei::Case::~Case() {}
mei::Case::Case(const Case& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <case> */

mei::Colloc::Colloc() :
    MeiElement("colloc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Colloc, "colloc");
mei::Colloc::~Colloc() {}
mei::Colloc::Colloc(const Colloc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Typed(this)
{
}

/* include <colloc> */

mei::Def::Def() :
    MeiElement("def"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Def, "def");
mei::Def::~Def() {}
mei::Def::Def(const Def& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <def> */

mei::DictScrap::DictScrap() :
    MeiElement("dictScrap"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::DictScrap, "dictScrap");
mei::DictScrap::~DictScrap() {}
mei::DictScrap::DictScrap(const DictScrap& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <dictScrap> */

mei::Entry::Entry() :
    MeiElement("entry"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EntryLike(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::Entry, "entry");
mei::Entry::~Entry() {}
mei::Entry::Entry(const Entry& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EntryLike(this),
    m_Sortable(this)
{
}

/* include <entry> */

mei::EntryFree::EntryFree() :
    MeiElement("entryFree"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EntryLike(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::EntryFree, "entryFree");
mei::EntryFree::~EntryFree() {}
mei::EntryFree::EntryFree(const EntryFree& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EntryLike(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Sortable(this)
{
}

/* include <entryFree> */

mei::Etym::Etym() :
    MeiElement("etym"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Etym, "etym");
mei::Etym::~Etym() {}
mei::Etym::Etym(const Etym& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <etym> */

mei::Form::Form() :
    MeiElement("form"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Form, "form");
mei::Form::~Form() {}
mei::Form::Form(const Form& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Form::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Form::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Form::hasType() {
    return hasAttribute("type");
};

void mei::Form::removeType() {
    removeAttribute("type");
};
/* include <form> */

mei::Gen::Gen() :
    MeiElement("gen"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Gen, "gen");
mei::Gen::~Gen() {}
mei::Gen::Gen(const Gen& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <gen> */

mei::Gram::Gram() :
    MeiElement("gram"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Gram, "gram");
mei::Gram::~Gram() {}
mei::Gram::Gram(const Gram& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Gram::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Gram::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Gram::hasType() {
    return hasAttribute("type");
};

void mei::Gram::removeType() {
    removeAttribute("type");
};
/* include <gram> */

mei::GramGrp::GramGrp() :
    MeiElement("gramGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::GramGrp, "gramGrp");
mei::GramGrp::~GramGrp() {}
mei::GramGrp::GramGrp(const GramGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Typed(this)
{
}

/* include <gramGrp> */

mei::Hom::Hom() :
    MeiElement("hom"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Hom, "hom");
mei::Hom::~Hom() {}
mei::Hom::Hom(const Hom& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <hom> */

mei::Hyph::Hyph() :
    MeiElement("hyph"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Hyph, "hyph");
mei::Hyph::~Hyph() {}
mei::Hyph::Hyph(const Hyph& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <hyph> */

mei::IType::IType() :
    MeiElement("iType"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::IType, "iType");
mei::IType::~IType() {}
mei::IType::IType(const IType& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::IType::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::IType::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::IType::hasType() {
    return hasAttribute("type");
};

void mei::IType::removeType() {
    removeAttribute("type");
};
/* include <iType> */

mei::Lang::Lang() :
    MeiElement("lang"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Lang, "lang");
mei::Lang::~Lang() {}
mei::Lang::Lang(const Lang& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <lang> */

mei::Lbl::Lbl() :
    MeiElement("lbl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Lbl, "lbl");
mei::Lbl::~Lbl() {}
mei::Lbl::Lbl(const Lbl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Lbl::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Lbl::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Lbl::hasType() {
    return hasAttribute("type");
};

void mei::Lbl::removeType() {
    removeAttribute("type");
};
/* include <lbl> */

mei::Mood::Mood() :
    MeiElement("mood"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Mood, "mood");
mei::Mood::~Mood() {}
mei::Mood::Mood(const Mood& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <mood> */

mei::Number::Number() :
    MeiElement("number"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Number, "number");
mei::Number::~Number() {}
mei::Number::Number(const Number& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <number> */

mei::ORef::ORef() :
    MeiElement("oRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::ORef, "oRef");
mei::ORef::~ORef() {}
mei::ORef::ORef(const ORef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::ORef::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::ORef::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::ORef::hasType() {
    return hasAttribute("type");
};

void mei::ORef::removeType() {
    removeAttribute("type");
};
/* include <oRef> */

mei::OVar::OVar() :
    MeiElement("oVar"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::OVar, "oVar");
mei::OVar::~OVar() {}
mei::OVar::OVar(const OVar& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::OVar::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::OVar::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::OVar::hasType() {
    return hasAttribute("type");
};

void mei::OVar::removeType() {
    removeAttribute("type");
};
/* include <oVar> */

mei::Orth::Orth() :
    MeiElement("orth"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Orth, "orth");
mei::Orth::~Orth() {}
mei::Orth::Orth(const Orth& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Orth::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Orth::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Orth::hasType() {
    return hasAttribute("type");
};

void mei::Orth::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Orth::getExtent() {
    if (!hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return getAttribute("extent");
};

void mei::Orth::setExtent(std::string _extent) {
    MeiAttribute *a = new MeiAttribute("extent", _extent);
    addAttribute(a);
};

bool mei::Orth::hasExtent() {
    return hasAttribute("extent");
};

void mei::Orth::removeExtent() {
    removeAttribute("extent");
};
/* include <orth> */

mei::PRef::PRef() :
    MeiElement("pRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::PRef, "pRef");
mei::PRef::~PRef() {}
mei::PRef::PRef(const PRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <pRef> */

mei::PVar::PVar() :
    MeiElement("pVar"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::PVar, "pVar");
mei::PVar::~PVar() {}
mei::PVar::PVar(const PVar& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <pVar> */

mei::Per::Per() :
    MeiElement("per"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Per, "per");
mei::Per::~Per() {}
mei::Per::Per(const Per& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <per> */

mei::Pos::Pos() :
    MeiElement("pos"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Pos, "pos");
mei::Pos::~Pos() {}
mei::Pos::Pos(const Pos& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <pos> */

mei::Pron::Pron() :
    MeiElement("pron"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Pron, "pron");
mei::Pron::~Pron() {}
mei::Pron::Pron(const Pron& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Pron::getExtent() {
    if (!hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return getAttribute("extent");
};

void mei::Pron::setExtent(std::string _extent) {
    MeiAttribute *a = new MeiAttribute("extent", _extent);
    addAttribute(a);
};

bool mei::Pron::hasExtent() {
    return hasAttribute("extent");
};

void mei::Pron::removeExtent() {
    removeAttribute("extent");
};
MeiAttribute* mei::Pron::getNotation() {
    if (!hasAttribute("notation")) {
        throw AttributeNotFoundException("notation");
    }
    return getAttribute("notation");
};

void mei::Pron::setNotation(std::string _notation) {
    MeiAttribute *a = new MeiAttribute("notation", _notation);
    addAttribute(a);
};

bool mei::Pron::hasNotation() {
    return hasAttribute("notation");
};

void mei::Pron::removeNotation() {
    removeAttribute("notation");
};
/* include <pron> */

mei::Re::Re() :
    MeiElement("re"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Re, "re");
mei::Re::~Re() {}
mei::Re::Re(const Re& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this),
    m_Typed(this)
{
}

/* include <re> */

mei::Sense::Sense() :
    MeiElement("sense"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Sense, "sense");
mei::Sense::~Sense() {}
mei::Sense::Sense(const Sense& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Sense::getLevel() {
    if (!hasAttribute("level")) {
        throw AttributeNotFoundException("level");
    }
    return getAttribute("level");
};

void mei::Sense::setLevel(std::string _level) {
    MeiAttribute *a = new MeiAttribute("level", _level);
    addAttribute(a);
};

bool mei::Sense::hasLevel() {
    return hasAttribute("level");
};

void mei::Sense::removeLevel() {
    removeAttribute("level");
};
/* include <sense> */

mei::Stress::Stress() :
    MeiElement("stress"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Stress, "stress");
mei::Stress::~Stress() {}
mei::Stress::Stress(const Stress& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <stress> */

mei::Subc::Subc() :
    MeiElement("subc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Subc, "subc");
mei::Subc::~Subc() {}
mei::Subc::Subc(const Subc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <subc> */

mei::SuperEntry::SuperEntry() :
    MeiElement("superEntry"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EntryLike(this),
    m_Sortable(this)
{
}
REGISTER_DEFINITION(mei::SuperEntry, "superEntry");
mei::SuperEntry::~SuperEntry() {}
mei::SuperEntry::SuperEntry(const SuperEntry& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EntryLike(this),
    m_Sortable(this)
{
}

/* include <superEntry> */

mei::Syll::Syll() :
    MeiElement("syll"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Syll, "syll");
mei::Syll::~Syll() {}
mei::Syll::Syll(const Syll& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <syll> */

mei::Tns::Tns() :
    MeiElement("tns"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Tns, "tns");
mei::Tns::~Tns() {}
mei::Tns::Tns(const Tns& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

/* include <tns> */

mei::Usg::Usg() :
    MeiElement("usg"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Usg, "usg");
mei::Usg::~Usg() {}
mei::Usg::Usg(const Usg& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Usg::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Usg::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Usg::hasType() {
    return hasAttribute("type");
};

void mei::Usg::removeType() {
    removeAttribute("type");
};
/* include <usg> */

mei::Xr::Xr() :
    MeiElement("xr"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Xr, "xr");
mei::Xr::~Xr() {}
mei::Xr::Xr(const Xr& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Lexicographic(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Xr::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Xr::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Xr::hasType() {
    return hasAttribute("type");
};

void mei::Xr::removeType() {
    removeAttribute("type");
};
/* include <xr> */



