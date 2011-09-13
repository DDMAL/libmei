#include "ptrref.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Ptr::Ptr() :
    MeiElement("ptr"),
    m_Common(this),
    m_Internetmedia(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Ptr, "ptr");
mei::Ptr::~Ptr() {}

/* include <ptr> */

mei::Ref::Ref() :
    MeiElement("ref"),
    m_Common(this),
    m_Internetmedia(this),
    m_Lang(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Ref, "ref");
mei::Ref::~Ref() {}

/* include <ref> */



