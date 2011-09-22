#include "figtable.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Fig::Fig() :
    MeiElement("fig"),
    m_Common(this),
    m_Facsimile(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Fig, "fig");
mei::Fig::~Fig() {}

/* include <fig> */

mei::FigDesc::FigDesc() :
    MeiElement("figDesc"),
    m_Common(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::FigDesc, "figDesc");
mei::FigDesc::~FigDesc() {}

/* include <figDesc> */

mei::Graphic::Graphic() :
    MeiElement("graphic"),
    m_Common(this),
    m_Declaring(this),
    m_Internetmedia(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_Measurement(this),
    m_Typed(this),
    m_Width(this)
{
}
REGISTER_DEFINITION(mei::Graphic, "graphic");
mei::Graphic::~Graphic() {}

MeiAttribute* mei::Graphic::getHeight() {
    if (!hasAttribute("height")) {
        throw AttributeNotFoundException("height");
    }
    return getAttribute("height");
};

void mei::Graphic::setHeight(std::string _height) {
    if (!hasAttribute("height")) {
        MeiAttribute *a = new MeiAttribute("height", _height);
        addAttribute(a);
    }
};

bool mei::Graphic::hasHeight() {
    return hasAttribute("height");
};

void mei::Graphic::removeHeight() {
    removeAttribute("height");
};
/* include <graphic> */

mei::Table::Table() :
    MeiElement("table"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Table, "table");
mei::Table::~Table() {}

/* include <table> */

mei::Td::Td() :
    MeiElement("td"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this),
    m_Tabular(this)
{
}
REGISTER_DEFINITION(mei::Td, "td");
mei::Td::~Td() {}

/* include <td> */

mei::Th::Th() :
    MeiElement("th"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this),
    m_Tabular(this)
{
}
REGISTER_DEFINITION(mei::Th, "th");
mei::Th::~Th() {}

/* include <th> */

mei::Tr::Tr() :
    MeiElement("tr"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this)
{
}
REGISTER_DEFINITION(mei::Tr, "tr");
mei::Tr::~Tr() {}

/* include <tr> */



