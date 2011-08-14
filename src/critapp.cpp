#include "critapp.h"
using namespace std;

App::App() : m_Common(this), m_Typed(this){
    m_Base.setName("app");
};
//REGISTER_DEFINITION(App, "app");

Lem::Lem() : m_Common(this), m_LinkCommon(this), m_LinkExternal(this), m_Typed(this), m_LinkInternal(this), 
m_RdgGes(this), m_RdgLog(this), m_RdgVis(this), m_RdgAnl(this), m_Crit(this){
    m_Base.setName("lem");
};
//REGISTER_DEFINITION(Lem, "lem");

Rdg::Rdg() : m_Common(this), m_LinkCommon(this), m_LinkExternal(this), m_Typed(this), m_LinkInternal(this), 
m_RdgGes(this), m_RdgLog(this), m_RdgVis(this), m_RdgAnl(this), m_Crit(this){
    m_Base.setName("rdg");
};
//REGISTER_DEFINITION(Rdg, "rdg");
