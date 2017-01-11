#include "namesdates.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AddName::AddName() :
    MeiElement("addName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AddName, "addName");
mei::AddName::~AddName() {}
mei::AddName::AddName(const AddName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <addName> */

mei::Bloc::Bloc() :
    MeiElement("bloc"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Bloc, "bloc");
mei::Bloc::~Bloc() {}
mei::Bloc::Bloc(const Bloc& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <bloc> */

mei::CorpName::CorpName() :
    MeiElement("corpName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::CorpName, "corpName");
mei::CorpName::~CorpName() {}
mei::CorpName::CorpName(const CorpName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <corpName> */

mei::Country::Country() :
    MeiElement("country"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Country, "country");
mei::Country::~Country() {}
mei::Country::Country(const Country& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <country> */

mei::District::District() :
    MeiElement("district"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::District, "district");
mei::District::~District() {}
mei::District::District(const District& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <district> */

mei::FamName::FamName() :
    MeiElement("famName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::FamName, "famName");
mei::FamName::~FamName() {}
mei::FamName::FamName(const FamName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <famName> */

mei::ForeName::ForeName() :
    MeiElement("foreName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::ForeName, "foreName");
mei::ForeName::~ForeName() {}
mei::ForeName::ForeName(const ForeName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <foreName> */

mei::GenName::GenName() :
    MeiElement("genName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::GenName, "genName");
mei::GenName::~GenName() {}
mei::GenName::GenName(const GenName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <genName> */

mei::GeogFeat::GeogFeat() :
    MeiElement("geogFeat"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::GeogFeat, "geogFeat");
mei::GeogFeat::~GeogFeat() {}
mei::GeogFeat::GeogFeat(const GeogFeat& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <geogFeat> */

mei::GeogName::GeogName() :
    MeiElement("geogName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::GeogName, "geogName");
mei::GeogName::~GeogName() {}
mei::GeogName::GeogName(const GeogName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <geogName> */

mei::NameLink::NameLink() :
    MeiElement("nameLink"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::NameLink, "nameLink");
mei::NameLink::~NameLink() {}
mei::NameLink::NameLink(const NameLink& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <nameLink> */

mei::PeriodName::PeriodName() :
    MeiElement("periodName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::PeriodName, "periodName");
mei::PeriodName::~PeriodName() {}
mei::PeriodName::PeriodName(const PeriodName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <periodName> */

mei::PersName::PersName() :
    MeiElement("persName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::PersName, "persName");
mei::PersName::~PersName() {}
mei::PersName::PersName(const PersName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <persName> */

mei::PostBox::PostBox() :
    MeiElement("postBox"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PostBox, "postBox");
mei::PostBox::~PostBox() {}
mei::PostBox::PostBox(const PostBox& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <postBox> */

mei::PostCode::PostCode() :
    MeiElement("postCode"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::PostCode, "postCode");
mei::PostCode::~PostCode() {}
mei::PostCode::PostCode(const PostCode& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <postCode> */

mei::Region::Region() :
    MeiElement("region"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Region, "region");
mei::Region::~Region() {}
mei::Region::Region(const Region& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <region> */

mei::RoleName::RoleName() :
    MeiElement("roleName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::RoleName, "roleName");
mei::RoleName::~RoleName() {}
mei::RoleName::RoleName(const RoleName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <roleName> */

mei::Settlement::Settlement() :
    MeiElement("settlement"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Settlement, "settlement");
mei::Settlement::~Settlement() {}
mei::Settlement::Settlement(const Settlement& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <settlement> */

mei::Street::Street() :
    MeiElement("street"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}
REGISTER_DEFINITION(mei::Street, "street");
mei::Street::~Street() {}
mei::Street::Street(const Street& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this)
{
}

/* include <street> */

mei::StyleName::StyleName() :
    MeiElement("styleName"),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::StyleName, "styleName");
mei::StyleName::~StyleName() {}
mei::StyleName::StyleName(const StyleName& other) :
    MeiElement(other),
    m_Bibl(this),
    m_Common(this),
    m_CommonPart(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Name(this),
    m_Authorized(this),
    m_Canonical(this),
    m_Datable(this),
    m_Filing(this),
    m_Typed(this)
{
}

/* include <styleName> */



