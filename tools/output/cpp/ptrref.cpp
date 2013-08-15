#include "ptrref.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Ptr::Ptr() :
    MeiElement("ptr")
{
}
REGISTER_DEFINITION(mei::Ptr, "ptr");
mei::Ptr::~Ptr() {}
mei::Ptr::Ptr(const Ptr& other) :
    MeiElement(other),

{
}

/* include <ptr> */

mei::Ref::Ref() :
    MeiElement("ref")
{
}
REGISTER_DEFINITION(mei::Ref, "ref");
mei::Ref::~Ref() {}
mei::Ref::Ref(const Ref& other) :
    MeiElement(other),

{
}

/* include <ref> */



