#include "usersymbols.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AnchoredText::AnchoredText() :
    MeiElement("anchoredText"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Common(this),
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
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this)
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
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this)
{
}

/* include <curve> */

mei::Line::Line() :
    MeiElement("line"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Color(this),
    m_Common(this),
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
    m_Xy2(this),
    m_Linerend(this)
{
}
REGISTER_DEFINITION(mei::Line, "line");
mei::Line::~Line() {}
mei::Line::Line(const Line& other) :
    MeiElement(other), 
    m_CommonAnl(this),
    m_Alignment(this),
    m_Color(this),
    m_Common(this),
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
    m_Xy2(this),
    m_Linerend(this)
{
}

/* include <line> */

mei::Symbol::Symbol() :
    MeiElement("symbol"),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Color(this),
    m_Common(this),
    m_Facsimile(this),
    m_Scalable(this),
    m_Startid(this),
    m_Typed(this),
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
    m_CommonAnl(this),
    m_Alignment(this),
    m_Color(this),
    m_Common(this),
    m_Facsimile(this),
    m_Scalable(this),
    m_Startid(this),
    m_Typed(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this)
{
}

MeiAttribute* mei::Symbol::getRef() {
    if (!hasAttribute("ref")) {
        throw AttributeNotFoundException("ref");
    }
    return getAttribute("ref");
};

void mei::Symbol::setRef(std::string _ref) {
    MeiAttribute *a = new MeiAttribute("ref", _ref);
    addAttribute(a);
};

bool mei::Symbol::hasRef() {
    return hasAttribute("ref");
};

void mei::Symbol::removeRef() {
    removeAttribute("ref");
};
/* include <symbol> */

mei::SymbolDef::SymbolDef() :
    MeiElement("symbolDef"),
    m_Common(this),
    m_Coordinated(this)
{
}
REGISTER_DEFINITION(mei::SymbolDef, "symbolDef");
mei::SymbolDef::~SymbolDef() {}
mei::SymbolDef::SymbolDef(const SymbolDef& other) :
    MeiElement(other), 
    m_Common(this),
    m_Coordinated(this)
{
}

/* include <symbolDef> */

mei::SymbolTable::SymbolTable() :
    MeiElement("symbolTable"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::SymbolTable, "symbolTable");
mei::SymbolTable::~SymbolTable() {}
mei::SymbolTable::SymbolTable(const SymbolTable& other) :
    MeiElement(other), 
    m_Common(this)
{
}

/* include <symbolTable> */



