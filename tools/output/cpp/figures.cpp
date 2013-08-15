#include "figures.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Cell::Cell() :
    MeiElement("cell"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TableDecoration(this)
{
}
REGISTER_DEFINITION(mei::Cell, "cell");
mei::Cell::~Cell() {}
mei::Cell::Cell(const Cell& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TableDecoration(this)
{
}

/* include <cell> */

mei::FigDesc::FigDesc() :
    MeiElement("figDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::FigDesc, "figDesc");
mei::FigDesc::~FigDesc() {}
mei::FigDesc::FigDesc(const FigDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <figDesc> */

mei::Figure::Figure() :
    MeiElement("figure"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Figure, "figure");
mei::Figure::~Figure() {}
mei::Figure::Figure(const Figure& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this),
    m_Typed(this)
{
}

/* include <figure> */

mei::Formula::Formula() :
    MeiElement("formula"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Formula, "formula");
mei::Formula::~Formula() {}
mei::Formula::Formula(const Formula& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Formula::getNotation() {
    if (!hasAttribute("notation")) {
        throw AttributeNotFoundException("notation");
    }
    return getAttribute("notation");
};

void mei::Formula::setNotation(std::string _notation) {
    MeiAttribute *a = new MeiAttribute("notation", _notation);
    addAttribute(a);
};

bool mei::Formula::hasNotation() {
    return hasAttribute("notation");
};

void mei::Formula::removeNotation() {
    removeAttribute("notation");
};
/* include <formula> */

mei::NotatedMusic::NotatedMusic() :
    MeiElement("notatedMusic"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::NotatedMusic, "notatedMusic");
mei::NotatedMusic::~NotatedMusic() {}
mei::NotatedMusic::NotatedMusic(const NotatedMusic& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this),
    m_Typed(this)
{
}

/* include <notatedMusic> */

mei::Row::Row() :
    MeiElement("row"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TableDecoration(this)
{
}
REGISTER_DEFINITION(mei::Row, "row");
mei::Row::~Row() {}
mei::Row::Row(const Row& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_TableDecoration(this)
{
}

/* include <row> */

mei::Table::Table() :
    MeiElement("table"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Table, "table");
mei::Table::~Table() {}
mei::Table::Table(const Table& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Table::getRows() {
    if (!hasAttribute("rows")) {
        throw AttributeNotFoundException("rows");
    }
    return getAttribute("rows");
};

void mei::Table::setRows(std::string _rows) {
    MeiAttribute *a = new MeiAttribute("rows", _rows);
    addAttribute(a);
};

bool mei::Table::hasRows() {
    return hasAttribute("rows");
};

void mei::Table::removeRows() {
    removeAttribute("rows");
};
MeiAttribute* mei::Table::getCols() {
    if (!hasAttribute("cols")) {
        throw AttributeNotFoundException("cols");
    }
    return getAttribute("cols");
};

void mei::Table::setCols(std::string _cols) {
    MeiAttribute *a = new MeiAttribute("cols", _cols);
    addAttribute(a);
};

bool mei::Table::hasCols() {
    return hasAttribute("cols");
};

void mei::Table::removeCols() {
    removeAttribute("cols");
};
/* include <table> */



