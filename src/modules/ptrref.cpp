#include "ptrref.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Ptr::Ptr() :
    MeiElement("ptr"),
    m_Common(this),
    m_CommonPart(this),
    m_Internetmedia(this),
    m_Pointing(this),
    m_Targeteval(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Ptr, "ptr");
mei::Ptr::~Ptr() {}
mei::Ptr::Ptr(const Ptr& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Internetmedia(this),
    m_Pointing(this),
    m_Targeteval(this),
    m_Typed(this)
{
}

/* include <ptr> */

mei::Ref::Ref() :
    MeiElement("ref"),
    m_Common(this),
    m_CommonPart(this),
    m_Internetmedia(this),
    m_Lang(this),
    m_Pointing(this),
    m_Targeteval(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Ref, "ref");
mei::Ref::~Ref() {}
mei::Ref::Ref(const Ref& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Internetmedia(this),
    m_Lang(this),
    m_Pointing(this),
    m_Targeteval(this),
    m_Typed(this)
{
}

/* include <ref> */



