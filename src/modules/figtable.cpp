

#include "figtable.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Fig::Fig() : 
    MeiElement("fig"),
    m_Common(this),
    m_Facsimile(this),
    m_LinkCommon(this),
    m_LinkExternal(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::Fig, "fig");



mei::Figdesc::Figdesc() : 
    MeiElement("figDesc"),
    m_Common(this),
    m_Lang(this) 
{
};
REGISTER_DEFINITION(mei::Figdesc, "figDesc");



mei::Graphic::Graphic() : 
    MeiElement("graphic"),
    m_Common(this),
    m_Declaring(this),
    m_Internetmedia(this),
    m_Facsimile(this),
    m_LinkExternal(this),
    m_Measurement(this),
    m_Typed(this),
    m_Width(this) 
{
};
REGISTER_DEFINITION(mei::Graphic, "graphic");


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


mei::Table::Table() : 
    MeiElement("table"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::Table, "table");



mei::Td::Td() : 
    MeiElement("td"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this),
    m_Tabular(this) 
{
};
REGISTER_DEFINITION(mei::Td, "td");



mei::Th::Th() : 
    MeiElement("th"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this),
    m_Tabular(this) 
{
};
REGISTER_DEFINITION(mei::Th, "th");



mei::Tr::Tr() : 
    MeiElement("tr"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Xy(this) 
{
};
REGISTER_DEFINITION(mei::Tr, "tr");




