#include "neumes.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Ineume::Ineume() :
    MeiElement("ineume")
{
}
REGISTER_DEFINITION(mei::Ineume, "ineume");
mei::Ineume::~Ineume() {}
mei::Ineume::Ineume(const Ineume& other) :
    MeiElement(other),

{
}

/* include <ineume> */

mei::Syllable::Syllable() :
    MeiElement("syllable")
{
}
REGISTER_DEFINITION(mei::Syllable, "syllable");
mei::Syllable::~Syllable() {}
mei::Syllable::Syllable(const Syllable& other) :
    MeiElement(other),

{
}

/* include <syllable> */

mei::Uneume::Uneume() :
    MeiElement("uneume")
{
}
REGISTER_DEFINITION(mei::Uneume, "uneume");
mei::Uneume::~Uneume() {}
mei::Uneume::Uneume(const Uneume& other) :
    MeiElement(other),

{
}

/* include <uneume> */



