#include "facsimile.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Facsimile::Facsimile() :
    MeiElement("facsimile"),
    m_Common(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Facsimile, "facsimile");
mei::Facsimile::~Facsimile() {}

/* include <facsimile> */

mei::Surface::Surface() :
    MeiElement("surface"),
    m_Common(this),
    m_Coordinated(this),
    m_Datapointing(this),
    m_Declaring(this),
    m_Startid(this)
{
}
REGISTER_DEFINITION(mei::Surface, "surface");
mei::Surface::~Surface() {}

/* include <surface> */

mei::Zone::Zone() :
    MeiElement("zone"),
    m_Common(this),
    m_Coordinated(this),
    m_Datapointing(this)
{
}
REGISTER_DEFINITION(mei::Zone, "zone");
mei::Zone::~Zone() {}

/* include <zone> */



