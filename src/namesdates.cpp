

#include "namesdates.h"
using std::string;


Corpname::Corpname() : m_Bibl(this), m_Common(this), m_Datable(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Lang(this), m_Name(this), m_Authorized(this), m_Canonical(this), m_Typed(this) {
    m_Base.setName("corpName");
};



Geogname::Geogname() : m_Bibl(this), m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Lang(this), m_Name(this), m_Authorized(this), m_Canonical(this), m_Typed(this) {
    m_Base.setName("geogName");
};



Periodname::Periodname() : m_Bibl(this), m_Common(this), m_Datable(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Lang(this), m_Name(this), m_Authorized(this), m_Canonical(this), m_Typed(this) {
    m_Base.setName("periodName");
};



Persname::Persname() : m_Bibl(this), m_Common(this), m_Datable(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Lang(this), m_Name(this), m_Authorized(this), m_Canonical(this), m_Typed(this) {
    m_Base.setName("persName");
};



Stylename::Stylename() : m_Bibl(this), m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Lang(this), m_Name(this), m_Authorized(this), m_Canonical(this), m_Typed(this) {
    m_Base.setName("styleName");
};




