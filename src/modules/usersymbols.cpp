#include "usersymbols.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AnchoredText::AnchoredText() :
    MeiElement("anchoredText"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Startid(this),
    m_Typed(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::AnchoredText, "anchoredText");
mei::AnchoredText::~AnchoredText() {}
mei::AnchoredText::AnchoredText(const AnchoredText& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Startid(this),
    m_Typed(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}

/* include <anchoredText> */

mei::Curve::Curve() :
    MeiElement("curve"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Color(this),
    m_Common(this),
    m_CommonPart(this),
    m_Curvature(this),
    m_Curverend(this),
    m_Facsimile(this),
    m_Startendid(this),
    m_Startid(this),
    m_Typed(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this)
{
}
REGISTER_DEFINITION(mei::Curve, "curve");
mei::Curve::~Curve() {}
mei::Curve::Curve(const Curve& other) :
    MeiElement(other),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Color(this),
    m_Common(this),
    m_CommonPart(this),
    m_Curvature(this),
    m_Curverend(this),
    m_Facsimile(this),
    m_Startendid(this),
    m_Startid(this),
    m_Typed(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this)
{
}

/* include <curve> */

mei::Line::Line() :
    MeiElement("line"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_DurationPerformed(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_LineVis(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Line, "line");
mei::Line::~Line() {}
mei::Line::Line(const Line& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_DurationPerformed(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_LineVis(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Typed(this)
{
}

/* include <line> */

mei::Mapping::Mapping() :
    MeiElement("mapping"),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Mapping, "mapping");
mei::Mapping::~Mapping() {}
mei::Mapping::Mapping(const Mapping& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <mapping> */

mei::PropName::PropName() :
    MeiElement("propName"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::PropName, "propName");
mei::PropName::~PropName() {}
mei::PropName::PropName(const PropName& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

MeiAttribute* mei::PropName::getType() {
    if (!hasAttribute("type")) {
        return NULL;
    }
    return getAttribute("type");
};

void mei::PropName::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::PropName::hasType() {
    return hasAttribute("type");
};

void mei::PropName::removeType() {
    removeAttribute("type");
};
/* include <propName> */

mei::PropValue::PropValue() :
    MeiElement("propValue"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::PropValue, "propValue");
mei::PropValue::~PropValue() {}
mei::PropValue::PropValue(const PropValue& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <propValue> */

mei::SymName::SymName() :
    MeiElement("symName"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::SymName, "symName");
mei::SymName::~SymName() {}
mei::SymName::SymName(const SymName& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <symName> */

mei::SymProp::SymProp() :
    MeiElement("symProp"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::SymProp, "symProp");
mei::SymProp::~SymProp() {}
mei::SymProp::SymProp(const SymProp& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <symProp> */

mei::Symbol::Symbol() :
    MeiElement("symbol"),
    m_Altsym(this),
    m_Authorized(this),
    m_Color(this),
    m_Common(this),
    m_CommonPart(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Extsym(this),
    m_Facsimile(this),
    m_Scalable(this),
    m_Startid(this),
    m_Typed(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Symbol, "symbol");
mei::Symbol::~Symbol() {}
mei::Symbol::Symbol(const Symbol& other) :
    MeiElement(other),
    m_Altsym(this),
    m_Authorized(this),
    m_Color(this),
    m_Common(this),
    m_CommonPart(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Extsym(this),
    m_Facsimile(this),
    m_Scalable(this),
    m_Startid(this),
    m_Typed(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}

/* include <symbol> */

mei::SymbolDef::SymbolDef() :
    MeiElement("symbolDef"),
    m_Common(this),
    m_CommonPart(this),
    m_Coordinated(this)
{
}
REGISTER_DEFINITION(mei::SymbolDef, "symbolDef");
mei::SymbolDef::~SymbolDef() {}
mei::SymbolDef::SymbolDef(const SymbolDef& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Coordinated(this)
{
}

/* include <symbolDef> */

mei::SymbolTable::SymbolTable() :
    MeiElement("symbolTable"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::SymbolTable, "symbolTable");
mei::SymbolTable::~SymbolTable() {}
mei::SymbolTable::SymbolTable(const SymbolTable& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <symbolTable> */



