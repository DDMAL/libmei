#include "figtable.h"
using namespace std;

Graphic::Graphic() : m_Common(this), m_Declaring(this), m_Internetmedia(this), m_LinkExternal(this), 
m_Measurement(this), m_Width(this), m_Typed(this), m_Facsimile(this){
    m_Base.setName("graphic");
};
//REGISTER_DEFINITION(Graphic, "graphic");

string Graphic::getHeightValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("height")) {
        throw AttributeNotFoundException("height");
    }
    return m_Base.getAttributeValue("height");
};
            
MeiAttribute* Graphic::getHeight() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("height")) {
        throw AttributeNotFoundException("height");
    }
    return m_Base.getAttribute("height");
};
            
void Graphic::setHeight(string _height) {
    if(!m_Base.hasAttribute("height")) {
        MeiAttribute * a = new MeiAttribute("height", _height);
        m_Base.addAttribute(a);
    }
};
            
bool Graphic::hasHeight() {
    return m_Base.hasAttribute("height");
};
            
Fig::Fig() : m_Common(this), m_LinkCommon(this), m_LinkExternal(this), m_Xy(this), m_Facsimile(this)
{
    m_Base.setName("fig");
};
//REGISTER_DEFINITION(Fig, "fig");

FigDesc::FigDesc() : m_Common(this), m_Lang(this){
    m_Base.setName("figDesc");
};
//REGISTER_DEFINITION(FigDesc, "figDesc");

Table::Table() : m_Common(this), m_Lang(this), m_Xy(this), m_Facsimile(this){
    m_Base.setName("table");
};
//REGISTER_DEFINITION(Table, "table");

Td::Td() : m_Common(this), m_Lang(this), m_Xy(this), m_Facsimile(this), m_Tabular(this){
    m_Base.setName("td");
};
//REGISTER_DEFINITION(Td, "td");

Th::Th() : m_Common(this), m_Lang(this), m_Xy(this), m_Facsimile(this), m_Tabular(this){
    m_Base.setName("th");
};
//REGISTER_DEFINITION(Th, "th");

Tr::Tr() : m_Common(this), m_Lang(this), m_Xy(this), m_Facsimile(this){
    m_Base.setName("tr");
};
//REGISTER_DEFINITION(Tr, "tr");
