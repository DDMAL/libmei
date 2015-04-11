#include "namesdates.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

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
mei::CorpName::CorpName(const CorpName& other) :
    MeiElement(other),
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
mei::GeogName::GeogName(const GeogName& other) :
    MeiElement(other),
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
mei::PeriodName::PeriodName(const PeriodName& other) :
    MeiElement(other),
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
mei::PersName::PersName(const PersName& other) :
    MeiElement(other),
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
mei::StyleName::StyleName(const StyleName& other) :
    MeiElement(other),
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

/* include <styleName> */



