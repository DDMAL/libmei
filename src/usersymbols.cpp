

#include "usersymbols.h"
using std::string;


Anchoredtext::Anchoredtext() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Facsimile(this), m_Lang(this), m_Startid(this), m_Typed(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this) {
    m_Base.setName("anchoredText");
};



Curve::Curve() : m_CommonAnl(this), m_Alignment(this), m_Color(this), m_Common(this), m_Facsimile(this), m_Startendid(this), m_Startid(this), m_Typed(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Visualoffset2Vo(this), m_Xy(this), m_Xy2(this), m_Curvature(this), m_Curverend(this) {
    m_Base.setName("curve");
};



Line::Line() : m_CommonAnl(this), m_Alignment(this), m_Color(this), m_Common(this), m_Facsimile(this), m_Startendid(this), m_Startid(this), m_Typed(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Visualoffset2Vo(this), m_Xy(this), m_Xy2(this), m_Linerend(this) {
    m_Base.setName("line");
};



Symbol::Symbol() : m_CommonAnl(this), m_Alignment(this), m_Color(this), m_Common(this), m_Facsimile(this), m_Scalable(this), m_Startid(this), m_Typed(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this) {
    m_Base.setName("symbol");
};


string Symbol::getRefValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("ref")) {
        throw AttributeNotFoundException("ref");
    }
    return m_Base.getAttributeValue("ref");
};

MeiAttribute* Symbol::getRef() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("ref")) {
        throw AttributeNotFoundException("ref");
    }
    return m_Base.getAttribute("ref");
};

void Symbol::setRef(std::string _ref) {
    if (!m_Base.hasAttribute("ref")) {
        MeiAttribute *a = new MeiAttribute("ref", _ref);
        m_Base.addAttribute(a);
    }
};

bool Symbol::hasRef() {
    return m_Base.hasAttribute("ref");
};

void Symbol::removeRef() {
    m_Base.removeAttribute("ref");
};


Symboldef::Symboldef() : m_Common(this) {
    m_Base.setName("symbolDef");
};



Symboltable::Symboltable() : m_Common(this) {
    m_Base.setName("symbolTable");
};




