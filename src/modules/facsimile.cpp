#include "facsimile.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Facsimile::Facsimile() :
    MeiElement("facsimile"),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Facsimile, "facsimile");
mei::Facsimile::~Facsimile() {}
mei::Facsimile::Facsimile(const Facsimile& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this)
{
}

/* include <facsimile> */

mei::Surface::Surface() :
    MeiElement("surface"),
    m_Common(this),
    m_CommonPart(this),
    m_Coordinated(this),
    m_Datapointing(this),
    m_Declaring(this),
    m_Startid(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Surface, "surface");
mei::Surface::~Surface() {}
mei::Surface::Surface(const Surface& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Coordinated(this),
    m_Datapointing(this),
    m_Declaring(this),
    m_Startid(this),
    m_Typed(this)
{
}

/* include <surface> */

mei::Zone::Zone() :
    MeiElement("zone"),
    m_Common(this),
    m_CommonPart(this),
    m_Coordinated(this),
    m_Datapointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Zone, "zone");
mei::Zone::~Zone() {}
mei::Zone::Zone(const Zone& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Coordinated(this),
    m_Datapointing(this),
    m_Typed(this)
{
}

/* include <zone> */



