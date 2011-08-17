

#include "figtable.h"
using std::string;


Fig::Fig() : m_Common(this), m_Facsimile(this), m_LinkCommon(this), m_LinkExternal(this), m_Xy(this) {
    m_Base.setName("fig");
};



Figdesc::Figdesc() : m_Common(this), m_Lang(this) {
    m_Base.setName("figDesc");
};



Graphic::Graphic() : m_Common(this), m_Declaring(this), m_Internetmedia(this), m_Facsimile(this), m_LinkExternal(this), m_Measurement(this), m_Typed(this), m_Width(this) {
    m_Base.setName("graphic");
};


string Graphic::getHeightValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("height")) {
        throw AttributeNotFoundException("height");
    }
    return m_Base.getAttributeValue("height");
};

MeiAttribute* Graphic::getHeight() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("height")) {
        throw AttributeNotFoundException("height");
    }
    return m_Base.getAttribute("height");
};

void Graphic::setHeight(std::string _height) {
    if (!m_Base.hasAttribute("height")) {
        MeiAttribute *a = new MeiAttribute("height", _height);
        m_Base.addAttribute(a);
    }
};

bool Graphic::hasHeight() {
    return m_Base.hasAttribute("height");
};

void Graphic::removeHeight() {
    m_Base.removeAttribute("height");
};


Table::Table() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Xy(this) {
    m_Base.setName("table");
};



Td::Td() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Xy(this), m_Tabular(this) {
    m_Base.setName("td");
};



Th::Th() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Xy(this), m_Tabular(this) {
    m_Base.setName("th");
};



Tr::Tr() : m_Common(this), m_Facsimile(this), m_Lang(this), m_Xy(this) {
    m_Base.setName("tr");
};




