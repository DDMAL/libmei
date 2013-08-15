#include "solesmes.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Division::Division() :
    MeiElement("division"),
    m_Common(this),
    m_Facsimile(this),
    m_SolesmesDivision(this)
{
}
REGISTER_DEFINITION(mei::Division, "division");
mei::Division::~Division() {}
mei::Division::Division(const Division& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_SolesmesDivision(this)
{
}

/* include <division> */

mei::Episema::Episema() :
    MeiElement("episema"),
    m_Common(this),
    m_Facsimile(this),
    m_SolesmesEpisema(this),
    m_Startendid(this),
    m_Startid(this)
{
}
REGISTER_DEFINITION(mei::Episema, "episema");
mei::Episema::~Episema() {}
mei::Episema::Episema(const Episema& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_SolesmesEpisema(this),
    m_Startendid(this),
    m_Startid(this)
{
}

/* include <episema> */

mei::Nc::Nc() :
    MeiElement("nc"),
    m_Common(this),
    m_SolesmesNc(this)
{
}
REGISTER_DEFINITION(mei::Nc, "nc");
mei::Nc::~Nc() {}
mei::Nc::Nc(const Nc& other) :
    MeiElement(other),
    m_Common(this),
    m_SolesmesNc(this)
{
}

/* include <nc> */

mei::Neume::Neume() :
    MeiElement("neume"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_SolesmesNeume(this)
{
}
REGISTER_DEFINITION(mei::Neume, "neume");
mei::Neume::~Neume() {}
mei::Neume::Neume(const Neume& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_SolesmesNeume(this)
{
}

/* include <neume> */



