#include "facsimile.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Facsimile::Facsimile() :
    MeiElement("facsimile")
{
}
REGISTER_DEFINITION(mei::Facsimile, "facsimile");
mei::Facsimile::~Facsimile() {}
mei::Facsimile::Facsimile(const Facsimile& other) :
    MeiElement(other),

{
}

/* include <facsimile> */

mei::Surface::Surface() :
    MeiElement("surface")
{
}
REGISTER_DEFINITION(mei::Surface, "surface");
mei::Surface::~Surface() {}
mei::Surface::Surface(const Surface& other) :
    MeiElement(other),

{
}

/* include <surface> */

mei::Zone::Zone() :
    MeiElement("zone")
{
}
REGISTER_DEFINITION(mei::Zone, "zone");
mei::Zone::~Zone() {}
mei::Zone::Zone(const Zone& other) :
    MeiElement(other),

{
}

/* include <zone> */



