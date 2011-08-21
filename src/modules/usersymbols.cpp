#include "usersymbols.h"

#include <string>
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;

mei::Anchoredtext::Anchoredtext() :
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
REGISTER_DEFINITION(mei::Anchoredtext, "anchoredText");
mei::Anchoredtext::~Anchoredtext() {}


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

MeiAttribute* mei::Symbol::getRef() {
    if (!hasAttribute("ref")) {
        throw AttributeNotFoundException("ref");
    }
    return getAttribute("ref");
};

void mei::Symbol::setRef(std::string _ref) {
    if (!hasAttribute("ref")) {
        MeiAttribute *a = new MeiAttribute("ref", _ref);
        addAttribute(a);
    }
};

bool mei::Symbol::hasRef() {
    return hasAttribute("ref");
};

void mei::Symbol::removeRef() {
    removeAttribute("ref");
};

mei::Symboldef::Symboldef() :
    MeiElement("symbolDef"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::Symboldef, "symbolDef");
mei::Symboldef::~Symboldef() {}


mei::Symboltable::Symboltable() :
    MeiElement("symbolTable"),
    m_Common(this)
{
}
REGISTER_DEFINITION(mei::Symboltable, "symbolTable");
mei::Symboltable::~Symboltable() {}




