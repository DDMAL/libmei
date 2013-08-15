#include "tagdocs.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AltIdent::AltIdent() :
    MeiElement("altIdent"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AltIdent, "altIdent");
mei::AltIdent::~AltIdent() {}
mei::AltIdent::AltIdent(const AltIdent& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <altIdent> */

mei::Att::Att() :
    MeiElement("att"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Att, "att");
mei::Att::~Att() {}
mei::Att::Att(const Att& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Att::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::Att::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::Att::hasScheme() {
    return hasAttribute("scheme");
};

void mei::Att::removeScheme() {
    removeAttribute("scheme");
};
/* include <att> */

mei::AttDef::AttDef() :
    MeiElement("attDef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}
REGISTER_DEFINITION(mei::AttDef, "attDef");
mei::AttDef::~AttDef() {}
mei::AttDef::AttDef(const AttDef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}

MeiAttribute* mei::AttDef::getUsage() {
    if (!hasAttribute("usage")) {
        throw AttributeNotFoundException("usage");
    }
    return getAttribute("usage");
};

void mei::AttDef::setUsage(std::string _usage) {
    MeiAttribute *a = new MeiAttribute("usage", _usage);
    addAttribute(a);
};

bool mei::AttDef::hasUsage() {
    return hasAttribute("usage");
};

void mei::AttDef::removeUsage() {
    removeAttribute("usage");
};
MeiAttribute* mei::AttDef::getNs() {
    if (!hasAttribute("ns")) {
        throw AttributeNotFoundException("ns");
    }
    return getAttribute("ns");
};

void mei::AttDef::setNs(std::string _ns) {
    MeiAttribute *a = new MeiAttribute("ns", _ns);
    addAttribute(a);
};

bool mei::AttDef::hasNs() {
    return hasAttribute("ns");
};

void mei::AttDef::removeNs() {
    removeAttribute("ns");
};
/* include <attDef> */

mei::AttList::AttList() :
    MeiElement("attList"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::AttList, "attList");
mei::AttList::~AttList() {}
mei::AttList::AttList(const AttList& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::AttList::getOrg() {
    if (!hasAttribute("org")) {
        throw AttributeNotFoundException("org");
    }
    return getAttribute("org");
};

void mei::AttList::setOrg(std::string _org) {
    MeiAttribute *a = new MeiAttribute("org", _org);
    addAttribute(a);
};

bool mei::AttList::hasOrg() {
    return hasAttribute("org");
};

void mei::AttList::removeOrg() {
    removeAttribute("org");
};
/* include <attList> */

mei::AttRef::AttRef() :
    MeiElement("attRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::AttRef, "attRef");
mei::AttRef::~AttRef() {}
mei::AttRef::AttRef(const AttRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::AttRef::getName() {
    if (!hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return getAttribute("name");
};

void mei::AttRef::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    addAttribute(a);
};

bool mei::AttRef::hasName() {
    return hasAttribute("name");
};

void mei::AttRef::removeName() {
    removeAttribute("name");
};
/* include <attRef> */

mei::ClassRef::ClassRef() :
    MeiElement("classRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_ReadFrom(this)
{
}
REGISTER_DEFINITION(mei::ClassRef, "classRef");
mei::ClassRef::~ClassRef() {}
mei::ClassRef::ClassRef(const ClassRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_ReadFrom(this)
{
}

MeiAttribute* mei::ClassRef::getKey() {
    if (!hasAttribute("key")) {
        throw AttributeNotFoundException("key");
    }
    return getAttribute("key");
};

void mei::ClassRef::setKey(std::string _key) {
    MeiAttribute *a = new MeiAttribute("key", _key);
    addAttribute(a);
};

bool mei::ClassRef::hasKey() {
    return hasAttribute("key");
};

void mei::ClassRef::removeKey() {
    removeAttribute("key");
};
/* include <classRef> */

mei::ClassSpec::ClassSpec() :
    MeiElement("classSpec"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}
REGISTER_DEFINITION(mei::ClassSpec, "classSpec");
mei::ClassSpec::~ClassSpec() {}
mei::ClassSpec::ClassSpec(const ClassSpec& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}

MeiAttribute* mei::ClassSpec::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::ClassSpec::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::ClassSpec::hasType() {
    return hasAttribute("type");
};

void mei::ClassSpec::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::ClassSpec::getGenerate() {
    if (!hasAttribute("generate")) {
        throw AttributeNotFoundException("generate");
    }
    return getAttribute("generate");
};

void mei::ClassSpec::setGenerate(std::string _generate) {
    MeiAttribute *a = new MeiAttribute("generate", _generate);
    addAttribute(a);
};

bool mei::ClassSpec::hasGenerate() {
    return hasAttribute("generate");
};

void mei::ClassSpec::removeGenerate() {
    removeAttribute("generate");
};
/* include <classSpec> */

mei::Classes::Classes() :
    MeiElement("classes"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Classes, "classes");
mei::Classes::~Classes() {}
mei::Classes::Classes(const Classes& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Classes::getMode() {
    if (!hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return getAttribute("mode");
};

void mei::Classes::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    addAttribute(a);
};

bool mei::Classes::hasMode() {
    return hasAttribute("mode");
};

void mei::Classes::removeMode() {
    removeAttribute("mode");
};
/* include <classes> */

mei::Code::Code() :
    MeiElement("code"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Code, "code");
mei::Code::~Code() {}
mei::Code::Code(const Code& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Code::getLang() {
    if (!hasAttribute("lang")) {
        throw AttributeNotFoundException("lang");
    }
    return getAttribute("lang");
};

void mei::Code::setLang(std::string _lang) {
    MeiAttribute *a = new MeiAttribute("lang", _lang);
    addAttribute(a);
};

bool mei::Code::hasLang() {
    return hasAttribute("lang");
};

void mei::Code::removeLang() {
    removeAttribute("lang");
};
/* include <code> */

mei::Constraint::Constraint() :
    MeiElement("constraint"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Constraint, "constraint");
mei::Constraint::~Constraint() {}
mei::Constraint::Constraint(const Constraint& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <constraint> */

mei::ConstraintSpec::ConstraintSpec() :
    MeiElement("constraintSpec"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::ConstraintSpec, "constraintSpec");
mei::ConstraintSpec::~ConstraintSpec() {}
mei::ConstraintSpec::ConstraintSpec(const ConstraintSpec& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this),
    m_Typed(this)
{
}

MeiAttribute* mei::ConstraintSpec::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::ConstraintSpec::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::ConstraintSpec::hasScheme() {
    return hasAttribute("scheme");
};

void mei::ConstraintSpec::removeScheme() {
    removeAttribute("scheme");
};
/* include <constraintSpec> */

mei::Content::Content() :
    MeiElement("content"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Content, "content");
mei::Content::~Content() {}
mei::Content::Content(const Content& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Content::getAutoPrefix() {
    if (!hasAttribute("autoPrefix")) {
        throw AttributeNotFoundException("autoPrefix");
    }
    return getAttribute("autoPrefix");
};

void mei::Content::setAutoPrefix(std::string _autoPrefix) {
    MeiAttribute *a = new MeiAttribute("autoPrefix", _autoPrefix);
    addAttribute(a);
};

bool mei::Content::hasAutoPrefix() {
    return hasAttribute("autoPrefix");
};

void mei::Content::removeAutoPrefix() {
    removeAttribute("autoPrefix");
};
/* include <content> */

mei::Datatype::Datatype() :
    MeiElement("datatype"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Datatype, "datatype");
mei::Datatype::~Datatype() {}
mei::Datatype::Datatype(const Datatype& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Datatype::getMinOccurs() {
    if (!hasAttribute("minOccurs")) {
        throw AttributeNotFoundException("minOccurs");
    }
    return getAttribute("minOccurs");
};

void mei::Datatype::setMinOccurs(std::string _minOccurs) {
    MeiAttribute *a = new MeiAttribute("minOccurs", _minOccurs);
    addAttribute(a);
};

bool mei::Datatype::hasMinOccurs() {
    return hasAttribute("minOccurs");
};

void mei::Datatype::removeMinOccurs() {
    removeAttribute("minOccurs");
};
MeiAttribute* mei::Datatype::getMaxOccurs() {
    if (!hasAttribute("maxOccurs")) {
        throw AttributeNotFoundException("maxOccurs");
    }
    return getAttribute("maxOccurs");
};

void mei::Datatype::setMaxOccurs(std::string _maxOccurs) {
    MeiAttribute *a = new MeiAttribute("maxOccurs", _maxOccurs);
    addAttribute(a);
};

bool mei::Datatype::hasMaxOccurs() {
    return hasAttribute("maxOccurs");
};

void mei::Datatype::removeMaxOccurs() {
    removeAttribute("maxOccurs");
};
/* include <datatype> */

mei::DefaultVal::DefaultVal() :
    MeiElement("defaultVal"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::DefaultVal, "defaultVal");
mei::DefaultVal::~DefaultVal() {}
mei::DefaultVal::DefaultVal(const DefaultVal& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <defaultVal> */

mei::Eg::Eg() :
    MeiElement("eg"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Eg, "eg");
mei::Eg::~Eg() {}
mei::Eg::Eg(const Eg& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <eg> */

mei::EgXML::EgXML() :
    MeiElement("egXML"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::EgXML, "egXML");
mei::EgXML::~EgXML() {}
mei::EgXML::EgXML(const EgXML& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Source(this)
{
}

MeiAttribute* mei::EgXML::getValid() {
    if (!hasAttribute("valid")) {
        throw AttributeNotFoundException("valid");
    }
    return getAttribute("valid");
};

void mei::EgXML::setValid(std::string _valid) {
    MeiAttribute *a = new MeiAttribute("valid", _valid);
    addAttribute(a);
};

bool mei::EgXML::hasValid() {
    return hasAttribute("valid");
};

void mei::EgXML::removeValid() {
    removeAttribute("valid");
};
/* include <egXML> */

mei::ElementRef::ElementRef() :
    MeiElement("elementRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_ReadFrom(this)
{
}
REGISTER_DEFINITION(mei::ElementRef, "elementRef");
mei::ElementRef::~ElementRef() {}
mei::ElementRef::ElementRef(const ElementRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_ReadFrom(this)
{
}

MeiAttribute* mei::ElementRef::getKey() {
    if (!hasAttribute("key")) {
        throw AttributeNotFoundException("key");
    }
    return getAttribute("key");
};

void mei::ElementRef::setKey(std::string _key) {
    MeiAttribute *a = new MeiAttribute("key", _key);
    addAttribute(a);
};

bool mei::ElementRef::hasKey() {
    return hasAttribute("key");
};

void mei::ElementRef::removeKey() {
    removeAttribute("key");
};
/* include <elementRef> */

mei::ElementSpec::ElementSpec() :
    MeiElement("elementSpec"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this),
    m_Namespaceable(this)
{
}
REGISTER_DEFINITION(mei::ElementSpec, "elementSpec");
mei::ElementSpec::~ElementSpec() {}
mei::ElementSpec::ElementSpec(const ElementSpec& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this),
    m_Namespaceable(this)
{
}

MeiAttribute* mei::ElementSpec::getPrefix() {
    if (!hasAttribute("prefix")) {
        throw AttributeNotFoundException("prefix");
    }
    return getAttribute("prefix");
};

void mei::ElementSpec::setPrefix(std::string _prefix) {
    MeiAttribute *a = new MeiAttribute("prefix", _prefix);
    addAttribute(a);
};

bool mei::ElementSpec::hasPrefix() {
    return hasAttribute("prefix");
};

void mei::ElementSpec::removePrefix() {
    removeAttribute("prefix");
};
/* include <elementSpec> */

mei::Equiv::Equiv() :
    MeiElement("equiv"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InternetMedia(this)
{
}
REGISTER_DEFINITION(mei::Equiv, "equiv");
mei::Equiv::~Equiv() {}
mei::Equiv::Equiv(const Equiv& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InternetMedia(this)
{
}

MeiAttribute* mei::Equiv::getName() {
    if (!hasAttribute("name")) {
        throw AttributeNotFoundException("name");
    }
    return getAttribute("name");
};

void mei::Equiv::setName(std::string _name) {
    MeiAttribute *a = new MeiAttribute("name", _name);
    addAttribute(a);
};

bool mei::Equiv::hasName() {
    return hasAttribute("name");
};

void mei::Equiv::removeName() {
    removeAttribute("name");
};
MeiAttribute* mei::Equiv::getUri() {
    if (!hasAttribute("uri")) {
        throw AttributeNotFoundException("uri");
    }
    return getAttribute("uri");
};

void mei::Equiv::setUri(std::string _uri) {
    MeiAttribute *a = new MeiAttribute("uri", _uri);
    addAttribute(a);
};

bool mei::Equiv::hasUri() {
    return hasAttribute("uri");
};

void mei::Equiv::removeUri() {
    removeAttribute("uri");
};
MeiAttribute* mei::Equiv::getFilter() {
    if (!hasAttribute("filter")) {
        throw AttributeNotFoundException("filter");
    }
    return getAttribute("filter");
};

void mei::Equiv::setFilter(std::string _filter) {
    MeiAttribute *a = new MeiAttribute("filter", _filter);
    addAttribute(a);
};

bool mei::Equiv::hasFilter() {
    return hasAttribute("filter");
};

void mei::Equiv::removeFilter() {
    removeAttribute("filter");
};
/* include <equiv> */

mei::Exemplum::Exemplum() :
    MeiElement("exemplum"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Translatable(this)
{
}
REGISTER_DEFINITION(mei::Exemplum, "exemplum");
mei::Exemplum::~Exemplum() {}
mei::Exemplum::Exemplum(const Exemplum& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Translatable(this)
{
}

/* include <exemplum> */

mei::Gi::Gi() :
    MeiElement("gi"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Gi, "gi");
mei::Gi::~Gi() {}
mei::Gi::Gi(const Gi& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Gi::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::Gi::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::Gi::hasScheme() {
    return hasAttribute("scheme");
};

void mei::Gi::removeScheme() {
    removeAttribute("scheme");
};
/* include <gi> */

mei::Ident::Ident() :
    MeiElement("ident"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Ident, "ident");
mei::Ident::~Ident() {}
mei::Ident::Ident(const Ident& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <ident> */

mei::ListRef::ListRef() :
    MeiElement("listRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::ListRef, "listRef");
mei::ListRef::~ListRef() {}
mei::ListRef::ListRef(const ListRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <listRef> */

mei::MacroRef::MacroRef() :
    MeiElement("macroRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_ReadFrom(this)
{
}
REGISTER_DEFINITION(mei::MacroRef, "macroRef");
mei::MacroRef::~MacroRef() {}
mei::MacroRef::MacroRef(const MacroRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_ReadFrom(this)
{
}

MeiAttribute* mei::MacroRef::getKey() {
    if (!hasAttribute("key")) {
        throw AttributeNotFoundException("key");
    }
    return getAttribute("key");
};

void mei::MacroRef::setKey(std::string _key) {
    MeiAttribute *a = new MeiAttribute("key", _key);
    addAttribute(a);
};

bool mei::MacroRef::hasKey() {
    return hasAttribute("key");
};

void mei::MacroRef::removeKey() {
    removeAttribute("key");
};
/* include <macroRef> */

mei::MacroSpec::MacroSpec() :
    MeiElement("macroSpec"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}
REGISTER_DEFINITION(mei::MacroSpec, "macroSpec");
mei::MacroSpec::~MacroSpec() {}
mei::MacroSpec::MacroSpec(const MacroSpec& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}

MeiAttribute* mei::MacroSpec::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::MacroSpec::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::MacroSpec::hasType() {
    return hasAttribute("type");
};

void mei::MacroSpec::removeType() {
    removeAttribute("type");
};
/* include <macroSpec> */

mei::MemberOf::MemberOf() :
    MeiElement("memberOf"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::MemberOf, "memberOf");
mei::MemberOf::~MemberOf() {}
mei::MemberOf::MemberOf(const MemberOf& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::MemberOf::getKey() {
    if (!hasAttribute("key")) {
        throw AttributeNotFoundException("key");
    }
    return getAttribute("key");
};

void mei::MemberOf::setKey(std::string _key) {
    MeiAttribute *a = new MeiAttribute("key", _key);
    addAttribute(a);
};

bool mei::MemberOf::hasKey() {
    return hasAttribute("key");
};

void mei::MemberOf::removeKey() {
    removeAttribute("key");
};
MeiAttribute* mei::MemberOf::getMode() {
    if (!hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return getAttribute("mode");
};

void mei::MemberOf::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    addAttribute(a);
};

bool mei::MemberOf::hasMode() {
    return hasAttribute("mode");
};

void mei::MemberOf::removeMode() {
    removeAttribute("mode");
};
MeiAttribute* mei::MemberOf::getMax() {
    if (!hasAttribute("max")) {
        throw AttributeNotFoundException("max");
    }
    return getAttribute("max");
};

void mei::MemberOf::setMax(std::string _max) {
    MeiAttribute *a = new MeiAttribute("max", _max);
    addAttribute(a);
};

bool mei::MemberOf::hasMax() {
    return hasAttribute("max");
};

void mei::MemberOf::removeMax() {
    removeAttribute("max");
};
MeiAttribute* mei::MemberOf::getMin() {
    if (!hasAttribute("min")) {
        throw AttributeNotFoundException("min");
    }
    return getAttribute("min");
};

void mei::MemberOf::setMin(std::string _min) {
    MeiAttribute *a = new MeiAttribute("min", _min);
    addAttribute(a);
};

bool mei::MemberOf::hasMin() {
    return hasAttribute("min");
};

void mei::MemberOf::removeMin() {
    removeAttribute("min");
};
/* include <memberOf> */

mei::ModuleRef::ModuleRef() :
    MeiElement("moduleRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_ReadFrom(this)
{
}
REGISTER_DEFINITION(mei::ModuleRef, "moduleRef");
mei::ModuleRef::~ModuleRef() {}
mei::ModuleRef::ModuleRef(const ModuleRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_ReadFrom(this)
{
}

MeiAttribute* mei::ModuleRef::getPrefix() {
    if (!hasAttribute("prefix")) {
        throw AttributeNotFoundException("prefix");
    }
    return getAttribute("prefix");
};

void mei::ModuleRef::setPrefix(std::string _prefix) {
    MeiAttribute *a = new MeiAttribute("prefix", _prefix);
    addAttribute(a);
};

bool mei::ModuleRef::hasPrefix() {
    return hasAttribute("prefix");
};

void mei::ModuleRef::removePrefix() {
    removeAttribute("prefix");
};
/* include <moduleRef> */

mei::ModuleSpec::ModuleSpec() :
    MeiElement("moduleSpec"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::ModuleSpec, "moduleSpec");
mei::ModuleSpec::~ModuleSpec() {}
mei::ModuleSpec::ModuleSpec(const ModuleSpec& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this),
    m_Typed(this)
{
}

/* include <moduleSpec> */

mei::Remarks::Remarks() :
    MeiElement("remarks"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Translatable(this)
{
}
REGISTER_DEFINITION(mei::Remarks, "remarks");
mei::Remarks::~Remarks() {}
mei::Remarks::Remarks(const Remarks& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Translatable(this)
{
}

/* include <remarks> */

mei::SchemaSpec::SchemaSpec() :
    MeiElement("schemaSpec"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this),
    m_Namespaceable(this),
    m_ReadFrom(this)
{
}
REGISTER_DEFINITION(mei::SchemaSpec, "schemaSpec");
mei::SchemaSpec::~SchemaSpec() {}
mei::SchemaSpec::SchemaSpec(const SchemaSpec& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Identified(this),
    m_Combinable(this),
    m_Deprecated(this),
    m_Namespaceable(this),
    m_ReadFrom(this)
{
}

MeiAttribute* mei::SchemaSpec::getStart() {
    if (!hasAttribute("start")) {
        throw AttributeNotFoundException("start");
    }
    return getAttribute("start");
};

void mei::SchemaSpec::setStart(std::string _start) {
    MeiAttribute *a = new MeiAttribute("start", _start);
    addAttribute(a);
};

bool mei::SchemaSpec::hasStart() {
    return hasAttribute("start");
};

void mei::SchemaSpec::removeStart() {
    removeAttribute("start");
};
MeiAttribute* mei::SchemaSpec::getPrefix() {
    if (!hasAttribute("prefix")) {
        throw AttributeNotFoundException("prefix");
    }
    return getAttribute("prefix");
};

void mei::SchemaSpec::setPrefix(std::string _prefix) {
    MeiAttribute *a = new MeiAttribute("prefix", _prefix);
    addAttribute(a);
};

bool mei::SchemaSpec::hasPrefix() {
    return hasAttribute("prefix");
};

void mei::SchemaSpec::removePrefix() {
    removeAttribute("prefix");
};
MeiAttribute* mei::SchemaSpec::getTargetLang() {
    if (!hasAttribute("targetLang")) {
        throw AttributeNotFoundException("targetLang");
    }
    return getAttribute("targetLang");
};

void mei::SchemaSpec::setTargetLang(std::string _targetLang) {
    MeiAttribute *a = new MeiAttribute("targetLang", _targetLang);
    addAttribute(a);
};

bool mei::SchemaSpec::hasTargetLang() {
    return hasAttribute("targetLang");
};

void mei::SchemaSpec::removeTargetLang() {
    removeAttribute("targetLang");
};
MeiAttribute* mei::SchemaSpec::getDocLang() {
    if (!hasAttribute("docLang")) {
        throw AttributeNotFoundException("docLang");
    }
    return getAttribute("docLang");
};

void mei::SchemaSpec::setDocLang(std::string _docLang) {
    MeiAttribute *a = new MeiAttribute("docLang", _docLang);
    addAttribute(a);
};

bool mei::SchemaSpec::hasDocLang() {
    return hasAttribute("docLang");
};

void mei::SchemaSpec::removeDocLang() {
    removeAttribute("docLang");
};
/* include <schemaSpec> */

mei::SpecDesc::SpecDesc() :
    MeiElement("specDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::SpecDesc, "specDesc");
mei::SpecDesc::~SpecDesc() {}
mei::SpecDesc::SpecDesc(const SpecDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::SpecDesc::getKey() {
    if (!hasAttribute("key")) {
        throw AttributeNotFoundException("key");
    }
    return getAttribute("key");
};

void mei::SpecDesc::setKey(std::string _key) {
    MeiAttribute *a = new MeiAttribute("key", _key);
    addAttribute(a);
};

bool mei::SpecDesc::hasKey() {
    return hasAttribute("key");
};

void mei::SpecDesc::removeKey() {
    removeAttribute("key");
};
MeiAttribute* mei::SpecDesc::getAtts() {
    if (!hasAttribute("atts")) {
        throw AttributeNotFoundException("atts");
    }
    return getAttribute("atts");
};

void mei::SpecDesc::setAtts(std::string _atts) {
    MeiAttribute *a = new MeiAttribute("atts", _atts);
    addAttribute(a);
};

bool mei::SpecDesc::hasAtts() {
    return hasAttribute("atts");
};

void mei::SpecDesc::removeAtts() {
    removeAttribute("atts");
};
/* include <specDesc> */

mei::SpecGrp::SpecGrp() :
    MeiElement("specGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::SpecGrp, "specGrp");
mei::SpecGrp::~SpecGrp() {}
mei::SpecGrp::SpecGrp(const SpecGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <specGrp> */

mei::SpecGrpRef::SpecGrpRef() :
    MeiElement("specGrpRef"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::SpecGrpRef, "specGrpRef");
mei::SpecGrpRef::~SpecGrpRef() {}
mei::SpecGrpRef::SpecGrpRef(const SpecGrpRef& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::SpecGrpRef::getTarget() {
    if (!hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return getAttribute("target");
};

void mei::SpecGrpRef::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    addAttribute(a);
};

bool mei::SpecGrpRef::hasTarget() {
    return hasAttribute("target");
};

void mei::SpecGrpRef::removeTarget() {
    removeAttribute("target");
};
/* include <specGrpRef> */

mei::SpecList::SpecList() :
    MeiElement("specList"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::SpecList, "specList");
mei::SpecList::~SpecList() {}
mei::SpecList::SpecList(const SpecList& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <specList> */

mei::Tag::Tag() :
    MeiElement("tag"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Tag, "tag");
mei::Tag::~Tag() {}
mei::Tag::Tag(const Tag& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Tag::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Tag::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Tag::hasType() {
    return hasAttribute("type");
};

void mei::Tag::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Tag::getScheme() {
    if (!hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return getAttribute("scheme");
};

void mei::Tag::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    addAttribute(a);
};

bool mei::Tag::hasScheme() {
    return hasAttribute("scheme");
};

void mei::Tag::removeScheme() {
    removeAttribute("scheme");
};
/* include <tag> */

mei::Val::Val() :
    MeiElement("val"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Val, "val");
mei::Val::~Val() {}
mei::Val::Val(const Val& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <val> */

mei::ValDesc::ValDesc() :
    MeiElement("valDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Translatable(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}
REGISTER_DEFINITION(mei::ValDesc, "valDesc");
mei::ValDesc::~ValDesc() {}
mei::ValDesc::ValDesc(const ValDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Translatable(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}

/* include <valDesc> */

mei::ValItem::ValItem() :
    MeiElement("valItem"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}
REGISTER_DEFINITION(mei::ValItem, "valItem");
mei::ValItem::~ValItem() {}
mei::ValItem::ValItem(const ValItem& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}

MeiAttribute* mei::ValItem::getIdent() {
    if (!hasAttribute("ident")) {
        throw AttributeNotFoundException("ident");
    }
    return getAttribute("ident");
};

void mei::ValItem::setIdent(std::string _ident) {
    MeiAttribute *a = new MeiAttribute("ident", _ident);
    addAttribute(a);
};

bool mei::ValItem::hasIdent() {
    return hasAttribute("ident");
};

void mei::ValItem::removeIdent() {
    removeAttribute("ident");
};
/* include <valItem> */

mei::ValList::ValList() :
    MeiElement("valList"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}
REGISTER_DEFINITION(mei::ValList, "valList");
mei::ValList::~ValList() {}
mei::ValList::ValList(const ValList& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Combinable(this),
    m_Deprecated(this)
{
}

MeiAttribute* mei::ValList::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::ValList::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::ValList::hasType() {
    return hasAttribute("type");
};

void mei::ValList::removeType() {
    removeAttribute("type");
};
/* include <valList> */



