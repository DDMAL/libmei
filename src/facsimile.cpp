#include "facsimile.h"
using namespace std;

Facsimile::Facsimile() : m_Common(this), m_Declaring(this){
    m_Base.setName("facsimile");
};
//REGISTER_DEFINITION(Facsimile, "facsimile");

Surface::Surface() : m_Common(this), m_Coordinated(this), m_Datapointing(this), m_Declaring(this), m_Startid(this), 
m_Startendid(this){
    m_Base.setName("surface");
};
//REGISTER_DEFINITION(Surface, "surface");

Zone::Zone() : m_Common(this), m_Coordinated(this), m_Datapointing(this){
    m_Base.setName("zone");
};
//REGISTER_DEFINITION(Zone, "zone");
