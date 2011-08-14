#include "ptrref.h"
using namespace std;

Extptr::Extptr() : m_Common(this), m_Internetmedia(this), m_LinkCommon(this), m_LinkExternal(this){
    m_Base.setName("extptr");
};
//REGISTER_DEFINITION(Extptr, "extptr");

Extref::Extref() : m_Common(this), m_Internetmedia(this), m_Lang(this), m_LinkCommon(this), m_LinkExternal(this)
{
    m_Base.setName("extref");
};
//REGISTER_DEFINITION(Extref, "extref");

Ptr::Ptr() : m_Common(this), m_LinkCommon(this), m_LinkInternal(this){
    m_Base.setName("ptr");
};
//REGISTER_DEFINITION(Ptr, "ptr");

Ref::Ref() : m_Common(this), m_Lang(this), m_LinkCommon(this), m_LinkInternal(this){
    m_Base.setName("ref");
};
//REGISTER_DEFINITION(Ref, "ref");
