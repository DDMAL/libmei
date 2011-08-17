

#include "ptrref.h"
using std::string;


Extptr::Extptr() : m_Common(this), m_Internetmedia(this), m_LinkCommon(this), m_LinkExternal(this) {
    m_Base.setName("extptr");
};



Extref::Extref() : m_Common(this), m_Internetmedia(this), m_Lang(this), m_LinkCommon(this), m_LinkExternal(this) {
    m_Base.setName("extref");
};



Ptr::Ptr() : m_Common(this), m_LinkCommon(this), m_Participantident(this) {
    m_Base.setName("ptr");
};



Ref::Ref() : m_Common(this), m_Lang(this), m_LinkCommon(this), m_Participantident(this) {
    m_Base.setName("ref");
};




