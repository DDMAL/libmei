#include "mensural.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Ligature::Ligature() :
    MeiElement("ligature"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_LigatureLog(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Ligature, "ligature");
mei::Ligature::~Ligature() {}
mei::Ligature::Ligature(const Ligature& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_LigatureLog(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <ligature> */

mei::Mensur::Mensur() :
    MeiElement("mensur"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_MensurLog(this),
    m_DurationRatio(this),
    m_Slashcount(this),
    m_MensuralShared(this),
    m_MensurVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Mensur, "mensur");
mei::Mensur::~Mensur() {}
mei::Mensur::Mensur(const Mensur& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_MensurLog(this),
    m_DurationRatio(this),
    m_Slashcount(this),
    m_MensuralShared(this),
    m_MensurVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <mensur> */

mei::Proport::Proport() :
    MeiElement("proport"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_DurationRatio(this),
    m_Altsym(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Proport, "proport");
mei::Proport::~Proport() {}
mei::Proport::Proport(const Proport& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_DurationRatio(this),
    m_Altsym(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <proport> */



