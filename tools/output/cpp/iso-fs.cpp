#include "iso-fs.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Bicond::Bicond() :
    MeiElement("bicond"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Bicond, "bicond");
mei::Bicond::~Bicond() {}
mei::Bicond::Bicond(const Bicond& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <bicond> */

mei::Binary::Binary() :
    MeiElement("binary"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Binary, "binary");
mei::Binary::~Binary() {}
mei::Binary::Binary(const Binary& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Binary::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Binary::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Binary::hasValue() {
    return hasAttribute("value");
};

void mei::Binary::removeValue() {
    removeAttribute("value");
};
/* include <binary> */

mei::Cond::Cond() :
    MeiElement("cond"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Cond, "cond");
mei::Cond::~Cond() {}
mei::Cond::Cond(const Cond& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <cond> */

mei::Default::Default() :
    MeiElement("default"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Default, "default");
mei::Default::~Default() {}
mei::Default::Default(const Default& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <default> */

mei::F::F() :
    MeiElement("f"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::F, "f");
mei::F::~F() {}
mei::F::F(const F& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::F::getName() {
    if (!hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return getAttribute("name");
};

void mei::F::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    addAttribute(a);
};

bool mei::F::hasName() {
    return hasAttribute("name");
};

void mei::F::removeName() {
    removeAttribute("name");
};
MeiAttribute* mei::F::getFVal() {
    if (!hasAttribute("fVal")) {
        throw AttributeNotFoundException("fVal");
    }
    return getAttribute("fVal");
};

void mei::F::setFVal(std::string _fVal) {
    MeiAttribute *a = new MeiAttribute("fVal", _fVal);
    addAttribute(a);
};

bool mei::F::hasFVal() {
    return hasAttribute("fVal");
};

void mei::F::removeFVal() {
    removeAttribute("fVal");
};
/* include <f> */

mei::FDecl::FDecl() :
    MeiElement("fDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FDecl, "fDecl");
mei::FDecl::~FDecl() {}
mei::FDecl::FDecl(const FDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::FDecl::getName() {
    if (!hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return getAttribute("name");
};

void mei::FDecl::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    addAttribute(a);
};

bool mei::FDecl::hasName() {
    return hasAttribute("name");
};

void mei::FDecl::removeName() {
    removeAttribute("name");
};
MeiAttribute* mei::FDecl::getOptional() {
    if (!hasAttribute("optional")) {
        throw AttributeNotFoundException("optional");
    }
    return getAttribute("optional");
};

void mei::FDecl::setOptional(std::string _optional) {
    MeiAttribute *a = new MeiAttribute("optional", _optional);
    addAttribute(a);
};

bool mei::FDecl::hasOptional() {
    return hasAttribute("optional");
};

void mei::FDecl::removeOptional() {
    removeAttribute("optional");
};
/* include <fDecl> */

mei::FDescr::FDescr() :
    MeiElement("fDescr"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FDescr, "fDescr");
mei::FDescr::~FDescr() {}
mei::FDescr::FDescr(const FDescr& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <fDescr> */

mei::FLib::FLib() :
    MeiElement("fLib"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FLib, "fLib");
mei::FLib::~FLib() {}
mei::FLib::FLib(const FLib& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <fLib> */

mei::Fs::Fs() :
    MeiElement("fs"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Fs, "fs");
mei::Fs::~Fs() {}
mei::Fs::Fs(const Fs& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Fs::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Fs::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Fs::hasType() {
    return hasAttribute("type");
};

void mei::Fs::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Fs::getFeats() {
    if (!hasAttribute("feats")) {
        throw AttributeNotFoundException("feats");
    }
    return getAttribute("feats");
};

void mei::Fs::setFeats(std::string _feats) {
    MeiAttribute *a = new MeiAttribute("feats", _feats);
    addAttribute(a);
};

bool mei::Fs::hasFeats() {
    return hasAttribute("feats");
};

void mei::Fs::removeFeats() {
    removeAttribute("feats");
};
/* include <fs> */

mei::FsConstraints::FsConstraints() :
    MeiElement("fsConstraints"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FsConstraints, "fsConstraints");
mei::FsConstraints::~FsConstraints() {}
mei::FsConstraints::FsConstraints(const FsConstraints& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <fsConstraints> */

mei::FsDecl::FsDecl() :
    MeiElement("fsDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FsDecl, "fsDecl");
mei::FsDecl::~FsDecl() {}
mei::FsDecl::FsDecl(const FsDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::FsDecl::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::FsDecl::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::FsDecl::hasType() {
    return hasAttribute("type");
};

void mei::FsDecl::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::FsDecl::getBaseTypes() {
    if (!hasAttribute("baseTypes")) {
        throw AttributeNotFoundException("baseTypes");
    }
    return getAttribute("baseTypes");
};

void mei::FsDecl::setBaseTypes(std::string _baseTypes) {
    MeiAttribute *a = new MeiAttribute("baseTypes", _baseTypes);
    addAttribute(a);
};

bool mei::FsDecl::hasBaseTypes() {
    return hasAttribute("baseTypes");
};

void mei::FsDecl::removeBaseTypes() {
    removeAttribute("baseTypes");
};
/* include <fsDecl> */

mei::FsDescr::FsDescr() :
    MeiElement("fsDescr"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FsDescr, "fsDescr");
mei::FsDescr::~FsDescr() {}
mei::FsDescr::FsDescr(const FsDescr& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <fsDescr> */

mei::FsdDecl::FsdDecl() :
    MeiElement("fsdDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FsdDecl, "fsdDecl");
mei::FsdDecl::~FsdDecl() {}
mei::FsdDecl::FsdDecl(const FsdDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <fsdDecl> */

mei::FsdLink::FsdLink() :
    MeiElement("fsdLink"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FsdLink, "fsdLink");
mei::FsdLink::~FsdLink() {}
mei::FsdLink::FsdLink(const FsdLink& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::FsdLink::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::FsdLink::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::FsdLink::hasType() {
    return hasAttribute("type");
};

void mei::FsdLink::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::FsdLink::getTarget() {
    if (!hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return getAttribute("target");
};

void mei::FsdLink::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    addAttribute(a);
};

bool mei::FsdLink::hasTarget() {
    return hasAttribute("target");
};

void mei::FsdLink::removeTarget() {
    removeAttribute("target");
};
/* include <fsdLink> */

mei::FvLib::FvLib() :
    MeiElement("fvLib"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FvLib, "fvLib");
mei::FvLib::~FvLib() {}
mei::FvLib::FvLib(const FvLib& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <fvLib> */

mei::If::If() :
    MeiElement("if"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::If, "if");
mei::If::~If() {}
mei::If::If(const If& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <if> */

mei::Iff::Iff() :
    MeiElement("iff"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Iff, "iff");
mei::Iff::~Iff() {}
mei::Iff::Iff(const Iff& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <iff> */

mei::Numeric::Numeric() :
    MeiElement("numeric"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Numeric, "numeric");
mei::Numeric::~Numeric() {}
mei::Numeric::Numeric(const Numeric& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Numeric::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Numeric::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Numeric::hasValue() {
    return hasAttribute("value");
};

void mei::Numeric::removeValue() {
    removeAttribute("value");
};
MeiAttribute* mei::Numeric::getMax() {
    if (!hasAttribute("max")) {
        throw AttributeNotFoundException("max");
    }
    return getAttribute("max");
};

void mei::Numeric::setMax(std::string _max) {
    MeiAttribute *a = new MeiAttribute("max", _max);
    addAttribute(a);
};

bool mei::Numeric::hasMax() {
    return hasAttribute("max");
};

void mei::Numeric::removeMax() {
    removeAttribute("max");
};
MeiAttribute* mei::Numeric::getTrunc() {
    if (!hasAttribute("trunc")) {
        throw AttributeNotFoundException("trunc");
    }
    return getAttribute("trunc");
};

void mei::Numeric::setTrunc(std::string _trunc) {
    MeiAttribute *a = new MeiAttribute("trunc", _trunc);
    addAttribute(a);
};

bool mei::Numeric::hasTrunc() {
    return hasAttribute("trunc");
};

void mei::Numeric::removeTrunc() {
    removeAttribute("trunc");
};
/* include <numeric> */

mei::String::String() :
    MeiElement("string"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::String, "string");
mei::String::~String() {}
mei::String::String(const String& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}

/* include <string> */

mei::Symbol::Symbol() :
    MeiElement("symbol"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}
REGISTER_DEFINITION(mei::Symbol, "symbol");
mei::Symbol::~Symbol() {}
mei::Symbol::Symbol(const Symbol& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Datcat(this)
{
}

MeiAttribute* mei::Symbol::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Symbol::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Symbol::hasValue() {
    return hasAttribute("value");
};

void mei::Symbol::removeValue() {
    removeAttribute("value");
};
/* include <symbol> */

mei::Then::Then() :
    MeiElement("then"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Then, "then");
mei::Then::~Then() {}
mei::Then::Then(const Then& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <then> */

mei::VAlt::VAlt() :
    MeiElement("vAlt"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::VAlt, "vAlt");
mei::VAlt::~VAlt() {}
mei::VAlt::VAlt(const VAlt& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <vAlt> */

mei::VColl::VColl() :
    MeiElement("vColl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::VColl, "vColl");
mei::VColl::~VColl() {}
mei::VColl::VColl(const VColl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::VColl::getOrg() {
    if (!hasAttribute("org")) {
        throw AttributeNotFoundException("org");
    }
    return getAttribute("org");
};

void mei::VColl::setOrg(std::string _org) {
    MeiAttribute *a = new MeiAttribute("org", _org);
    addAttribute(a);
};

bool mei::VColl::hasOrg() {
    return hasAttribute("org");
};

void mei::VColl::removeOrg() {
    removeAttribute("org");
};
/* include <vColl> */

mei::VDefault::VDefault() :
    MeiElement("vDefault"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::VDefault, "vDefault");
mei::VDefault::~VDefault() {}
mei::VDefault::VDefault(const VDefault& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <vDefault> */

mei::VLabel::VLabel() :
    MeiElement("vLabel"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::VLabel, "vLabel");
mei::VLabel::~VLabel() {}
mei::VLabel::VLabel(const VLabel& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::VLabel::getName() {
    if (!hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return getAttribute("name");
};

void mei::VLabel::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    addAttribute(a);
};

bool mei::VLabel::hasName() {
    return hasAttribute("name");
};

void mei::VLabel::removeName() {
    removeAttribute("name");
};
/* include <vLabel> */

mei::VMerge::VMerge() :
    MeiElement("vMerge"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::VMerge, "vMerge");
mei::VMerge::~VMerge() {}
mei::VMerge::VMerge(const VMerge& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::VMerge::getOrg() {
    if (!hasAttribute("org")) {
        throw AttributeNotFoundException("org");
    }
    return getAttribute("org");
};

void mei::VMerge::setOrg(std::string _org) {
    MeiAttribute *a = new MeiAttribute("org", _org);
    addAttribute(a);
};

bool mei::VMerge::hasOrg() {
    return hasAttribute("org");
};

void mei::VMerge::removeOrg() {
    removeAttribute("org");
};
/* include <vMerge> */

mei::VNot::VNot() :
    MeiElement("vNot"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::VNot, "vNot");
mei::VNot::~VNot() {}
mei::VNot::VNot(const VNot& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <vNot> */

mei::VRange::VRange() :
    MeiElement("vRange"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::VRange, "vRange");
mei::VRange::~VRange() {}
mei::VRange::VRange(const VRange& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <vRange> */



