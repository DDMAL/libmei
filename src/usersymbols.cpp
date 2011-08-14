#include "usersymbols.h"
using namespace std;

AnchoredText::AnchoredText() : m_Common(this), m_Lang(this), m_Startid(this), m_Typed(this), m_Xy(this), m_Startendid(this), 
m_Visualoffset(this), m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this)
{
    m_Base.setName("anchoredText");
};
//REGISTER_DEFINITION(AnchoredText, "anchoredText");

Curve::Curve() : m_Color(this), m_Common(this), m_Curvature(this), m_Curverend(this), m_Typed(this), 
m_Xy(this), m_Xy2(this), m_Startendid(this), m_Visualoffset2(this), m_Visualoffset(this), 
m_TupletAnl(this), m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("curve");
};
//REGISTER_DEFINITION(Curve, "curve");

Line::Line() : m_Color(this), m_Common(this), m_Linerend(this), m_Typed(this), m_Xy(this), m_Xy2(this), 
m_Startendid(this), m_Visualoffset2(this), m_Visualoffset(this), m_TupletAnl(this), 
m_CommonAnl(this), m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("line");
};
//REGISTER_DEFINITION(Line, "line");

Symbol::Symbol() : m_Color(this), m_Common(this), m_Scalable(this), m_Startid(this), m_Typed(this), 
m_Xy(this), m_Startendid(this), m_Visualoffset(this), m_TupletAnl(this), m_CommonAnl(this), 
m_RdgAnl(this), m_Facsimile(this){
    m_Base.setName("symbol");
};
//REGISTER_DEFINITION(Symbol, "symbol");

string Symbol::getRefValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("ref")) {
        throw AttributeNotFoundException("ref");
    }
    return m_Base.getAttributeValue("ref");
};
            
MeiAttribute* Symbol::getRef() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("ref")) {
        throw AttributeNotFoundException("ref");
    }
    return m_Base.getAttribute("ref");
};
            
void Symbol::setRef(string _ref) {
    if(!m_Base.hasAttribute("ref")) {
        MeiAttribute * a = new MeiAttribute("ref", _ref);
        m_Base.addAttribute(a);
    }
};
            
bool Symbol::hasRef() {
    return m_Base.hasAttribute("ref");
};
            
SymbolDef::SymbolDef() : m_Common(this){
    m_Base.setName("symbolDef");
};
//REGISTER_DEFINITION(SymbolDef, "symbolDef");

SymbolTable::SymbolTable() : m_Common(this){
    m_Base.setName("symbolTable");
};
//REGISTER_DEFINITION(SymbolTable, "symbolTable");
