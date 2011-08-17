

#include "neumes.h"
using std::string;


Ineume::Ineume() : m_Common(this), m_Facsimile(this), m_Typed(this), m_IneumeLog(this), m_Color(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("ineume");
};



Syllable::Syllable() : m_Common(this) {
    m_Base.setName("syllable");
};



Uneume::Uneume() : m_Common(this), m_Facsimile(this), m_Typed(this), m_UneumeLog(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Syltext(this), m_Altsym(this), m_Color(this), m_Relativesize(this), m_VisualoffsetHo(this), m_Xy(this), m_Visibility(this), m_CommonAnl(this), m_Alignment(this), m_Harmonicfunction(this), m_Melodicfunction(this), m_Intervallicdesc(this), m_Intervalharmonic(this), m_Solfa(this) {
    m_Base.setName("uneume");
};




