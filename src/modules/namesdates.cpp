#include "namesdates.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::CorpName::CorpName() :
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
}
REGISTER_DEFINITION(mei::CorpName, "corpName");
mei::CorpName::~CorpName() {}

/* include <corpName> */

mei::GeogName::GeogName() :
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
}
REGISTER_DEFINITION(mei::GeogName, "geogName");
mei::GeogName::~GeogName() {}

/* include <geogName> */

mei::PeriodName::PeriodName() :
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
}
REGISTER_DEFINITION(mei::PeriodName, "periodName");
mei::PeriodName::~PeriodName() {}

/* include <periodName> */

mei::PersName::PersName() :
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
}
REGISTER_DEFINITION(mei::PersName, "persName");
mei::PersName::~PersName() {}

/* include <persName> */

mei::StyleName::StyleName() :
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
}
REGISTER_DEFINITION(mei::StyleName, "styleName");
mei::StyleName::~StyleName() {}

/* include <styleName> */



