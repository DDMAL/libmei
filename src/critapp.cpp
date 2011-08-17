

#include "critapp.h"
using std::string;


App::App() : m_Common(this), m_Typed(this) {
    m_Base.setName("app");
};



Lem::Lem() : m_Common(this), m_Crit(this), m_Handident(this), m_Responsibility(this), m_Sequence(this), m_Source(this), m_Typed(this), m_LinkCommon(this), m_LinkExternal(this), m_Participantident(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("lem");
};



Rdg::Rdg() : m_Common(this), m_Crit(this), m_Handident(this), m_Responsibility(this), m_Sequence(this), m_Source(this), m_Typed(this), m_LinkCommon(this), m_LinkExternal(this), m_Participantident(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("rdg");
};




