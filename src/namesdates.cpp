#include "namesdates.h"
using namespace std;

CorpName::CorpName() : m_Bibl(this), m_Common(this), m_Datable(this), m_Lang(this), m_Typed(this), m_Name(this), 
m_Edit(this), m_Facsimile(this){
    m_Base.setName("corpName");
};
//REGISTER_DEFINITION(CorpName, "corpName");

GeogName::GeogName() : m_Bibl(this), m_Common(this), m_Lang(this), m_Typed(this), m_Name(this), m_Edit(this), 
m_Facsimile(this){
    m_Base.setName("geogName");
};
//REGISTER_DEFINITION(GeogName, "geogName");

PeriodName::PeriodName() : m_Bibl(this), m_Common(this), m_Datable(this), m_Lang(this), m_Typed(this), m_Name(this), 
m_Edit(this), m_Facsimile(this){
    m_Base.setName("periodName");
};
//REGISTER_DEFINITION(PeriodName, "periodName");

PersName::PersName() : m_Bibl(this), m_Common(this), m_Datable(this), m_Lang(this), m_Typed(this), m_Name(this), 
m_Edit(this), m_Facsimile(this){
    m_Base.setName("persName");
};
//REGISTER_DEFINITION(PersName, "persName");

StyleName::StyleName() : m_Bibl(this), m_Common(this), m_Lang(this), m_Typed(this), m_Name(this), m_Edit(this), 
m_Facsimile(this){
    m_Base.setName("styleName");
};
//REGISTER_DEFINITION(StyleName, "styleName");
