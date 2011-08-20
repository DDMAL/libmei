#include "ptrref.h"

#include <string>
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;

mei::Ptr::Ptr() :
    MeiElement("ptr"),
    m_Common(this),
    m_Internetmedia(this),
    m_Pointing(this),
    m_Targets(this)
{
}
REGISTER_DEFINITION(mei::Ptr, "ptr");
mei::Ptr::~Ptr() {}


mei::Ref::Ref() :
    MeiElement("ref"),
    m_Common(this),
    m_Internetmedia(this),
    m_Lang(this),
    m_Pointing(this),
    m_Targets(this)
{
}
REGISTER_DEFINITION(mei::Ref, "ref");
mei::Ref::~Ref() {}




