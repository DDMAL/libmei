

#include "mensural.h"
using std::string;


Ligature::Ligature() : m_Common(this), m_Facsimile(this), m_LigatureLog(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("ligature");
};



Mensur::Mensur() : m_Common(this), m_Facsimile(this), m_MensurLog(this), m_DurationRatio(this), m_MensurVis(this), m_Color(this), m_Relativesize(this), m_Slashcount(this), m_Staffloc(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("mensur");
};



Proport::Proport() : m_Common(this), m_Facsimile(this), m_DurationRatio(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("proport");
};




