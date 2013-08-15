#include "cmnornaments.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mordent::Mordent() :
    MeiElement("mordent")
{
}
REGISTER_DEFINITION(mei::Mordent, "mordent");
mei::Mordent::~Mordent() {}
mei::Mordent::Mordent(const Mordent& other) :
    MeiElement(other),

{
}

/* include <mordent> */

mei::Trill::Trill() :
    MeiElement("trill")
{
}
REGISTER_DEFINITION(mei::Trill, "trill");
mei::Trill::~Trill() {}
mei::Trill::Trill(const Trill& other) :
    MeiElement(other),

{
}

/* include <trill> */

mei::Turn::Turn() :
    MeiElement("turn")
{
}
REGISTER_DEFINITION(mei::Turn, "turn");
mei::Turn::~Turn() {}
mei::Turn::Turn(const Turn& other) :
    MeiElement(other),

{
}

/* include <turn> */



