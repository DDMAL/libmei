#include "mensural.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Ligature::Ligature() :
    MeiElement("ligature")
{
}
REGISTER_DEFINITION(mei::Ligature, "ligature");
mei::Ligature::~Ligature() {}
mei::Ligature::Ligature(const Ligature& other) :
    MeiElement(other),

{
}

/* include <ligature> */

mei::Mensur::Mensur() :
    MeiElement("mensur")
{
}
REGISTER_DEFINITION(mei::Mensur, "mensur");
mei::Mensur::~Mensur() {}
mei::Mensur::Mensur(const Mensur& other) :
    MeiElement(other),

{
}

/* include <mensur> */

mei::Proport::Proport() :
    MeiElement("proport")
{
}
REGISTER_DEFINITION(mei::Proport, "proport");
mei::Proport::~Proport() {}
mei::Proport::Proport(const Proport& other) :
    MeiElement(other),

{
}

/* include <proport> */



