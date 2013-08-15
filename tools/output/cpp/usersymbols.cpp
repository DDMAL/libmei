#include "usersymbols.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AnchoredText::AnchoredText() :
    MeiElement("anchoredText")
{
}
REGISTER_DEFINITION(mei::AnchoredText, "anchoredText");
mei::AnchoredText::~AnchoredText() {}
mei::AnchoredText::AnchoredText(const AnchoredText& other) :
    MeiElement(other),

{
}

/* include <anchoredText> */

mei::Curve::Curve() :
    MeiElement("curve")
{
}
REGISTER_DEFINITION(mei::Curve, "curve");
mei::Curve::~Curve() {}
mei::Curve::Curve(const Curve& other) :
    MeiElement(other),

{
}

/* include <curve> */

mei::Line::Line() :
    MeiElement("line")
{
}
REGISTER_DEFINITION(mei::Line, "line");
mei::Line::~Line() {}
mei::Line::Line(const Line& other) :
    MeiElement(other),

{
}

/* include <line> */

mei::Symbol::Symbol() :
    MeiElement("symbol")
{
}
REGISTER_DEFINITION(mei::Symbol, "symbol");
mei::Symbol::~Symbol() {}
mei::Symbol::Symbol(const Symbol& other) :
    MeiElement(other),

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
    MeiElement("symbolDef")
{
}
REGISTER_DEFINITION(mei::SymbolDef, "symbolDef");
mei::SymbolDef::~SymbolDef() {}
mei::SymbolDef::SymbolDef(const SymbolDef& other) :
    MeiElement(other),

{
}

/* include <symbolDef> */

mei::SymbolTable::SymbolTable() :
    MeiElement("symbolTable")
{
}
REGISTER_DEFINITION(mei::SymbolTable, "symbolTable");
mei::SymbolTable::~SymbolTable() {}
mei::SymbolTable::SymbolTable(const SymbolTable& other) :
    MeiElement(other),

{
}

/* include <symbolTable> */



