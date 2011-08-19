
#include "ptrref.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Extptr::Extptr() : 
    MeiElement("extptr"),
    m_Common(this),
    m_Internetmedia(this),
    m_LinkCommon(this),
    m_LinkExternal(this) 
{
};
REGISTER_DEFINITION(mei::Extptr, "extptr");
mei::Extptr::~Extptr() {};



mei::Extref::Extref() : 
    MeiElement("extref"),
    m_Common(this),
    m_Internetmedia(this),
    m_Lang(this),
    m_LinkCommon(this),
    m_LinkExternal(this) 
{
};
REGISTER_DEFINITION(mei::Extref, "extref");
mei::Extref::~Extref() {};



mei::Ptr::Ptr() : 
    MeiElement("ptr"),
    m_Common(this),
    m_LinkCommon(this),
    m_Participantident(this) 
{
};
REGISTER_DEFINITION(mei::Ptr, "ptr");
mei::Ptr::~Ptr() {};



mei::Ref::Ref() : 
    MeiElement("ref"),
    m_Common(this),
    m_Lang(this),
    m_LinkCommon(this),
    m_Participantident(this) 
{
};
REGISTER_DEFINITION(mei::Ref, "ref");
mei::Ref::~Ref() {};




