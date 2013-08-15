#include "gaiji.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Char::Char() :
    MeiElement("char"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Char, "char");
mei::Char::~Char() {}
mei::Char::Char(const Char& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <char> */

mei::CharDecl::CharDecl() :
    MeiElement("charDecl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::CharDecl, "charDecl");
mei::CharDecl::~CharDecl() {}
mei::CharDecl::CharDecl(const CharDecl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <charDecl> */

mei::CharName::CharName() :
    MeiElement("charName"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::CharName, "charName");
mei::CharName::~CharName() {}
mei::CharName::CharName(const CharName& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <charName> */

mei::CharProp::CharProp() :
    MeiElement("charProp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::CharProp, "charProp");
mei::CharProp::~CharProp() {}
mei::CharProp::CharProp(const CharProp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <charProp> */

mei::G::G() :
    MeiElement("g"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::G, "g");
mei::G::~G() {}
mei::G::G(const G& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

MeiAttribute* mei::G::getRef() {
    if (!hasAttribute("ref")) {
        throw AttributeNotFoundException("ref");
    }
    return getAttribute("ref");
};

void mei::G::setRef(std::string _ref) {
    MeiAttribute *a = new MeiAttribute("ref", _ref);
    addAttribute(a);
};

bool mei::G::hasRef() {
    return hasAttribute("ref");
};

void mei::G::removeRef() {
    removeAttribute("ref");
};
/* include <g> */

mei::Glyph::Glyph() :
    MeiElement("glyph"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Glyph, "glyph");
mei::Glyph::~Glyph() {}
mei::Glyph::Glyph(const Glyph& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <glyph> */

mei::GlyphName::GlyphName() :
    MeiElement("glyphName"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::GlyphName, "glyphName");
mei::GlyphName::~GlyphName() {}
mei::GlyphName::GlyphName(const GlyphName& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <glyphName> */

mei::LocalName::LocalName() :
    MeiElement("localName"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::LocalName, "localName");
mei::LocalName::~LocalName() {}
mei::LocalName::LocalName(const LocalName& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <localName> */

mei::Mapping::Mapping() :
    MeiElement("mapping"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Mapping, "mapping");
mei::Mapping::~Mapping() {}
mei::Mapping::Mapping(const Mapping& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <mapping> */

mei::UnicodeName::UnicodeName() :
    MeiElement("unicodeName"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::UnicodeName, "unicodeName");
mei::UnicodeName::~UnicodeName() {}
mei::UnicodeName::UnicodeName(const UnicodeName& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::UnicodeName::getVersion() {
    if (!hasAttribute("version")) {
        throw AttributeNotFoundException("version");
    }
    return getAttribute("version");
};

void mei::UnicodeName::setVersion(std::string _version) {
    MeiAttribute *a = new MeiAttribute("version", _version);
    addAttribute(a);
};

bool mei::UnicodeName::hasVersion() {
    return hasAttribute("version");
};

void mei::UnicodeName::removeVersion() {
    removeAttribute("version");
};
/* include <unicodeName> */

mei::Value::Value() :
    MeiElement("value"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Value, "value");
mei::Value::~Value() {}
mei::Value::Value(const Value& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <value> */



