
#include "namesdates.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Corpname::Corpname() : 
    MeiElement("corpName"),
    m_Bibl(this),
    m_Common(this),
    m_Datable(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Corpname, "corpName");
mei::Corpname::~Corpname() {};



mei::Geogname::Geogname() : 
    MeiElement("geogName"),
    m_Bibl(this),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Geogname, "geogName");
mei::Geogname::~Geogname() {};



mei::Periodname::Periodname() : 
    MeiElement("periodName"),
    m_Bibl(this),
    m_Common(this),
    m_Datable(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Periodname, "periodName");
mei::Periodname::~Periodname() {};



mei::Persname::Persname() : 
    MeiElement("persName"),
    m_Bibl(this),
    m_Common(this),
    m_Datable(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Persname, "persName");
mei::Persname::~Persname() {};



mei::Stylename::Stylename() : 
    MeiElement("styleName"),
    m_Bibl(this),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Stylename, "styleName");
mei::Stylename::~Stylename() {};




