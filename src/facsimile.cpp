

#include "facsimile.h"
using std::string;


Facsimile::Facsimile() : m_Common(this), m_Declaring(this) {
    m_Base.setName("facsimile");
};



Surface::Surface() : m_Common(this), m_Coordinated(this), m_Datapointing(this), m_Declaring(this), m_Startid(this) {
    m_Base.setName("surface");
};



Zone::Zone() : m_Common(this), m_Coordinated(this), m_Datapointing(this) {
    m_Base.setName("zone");
};




