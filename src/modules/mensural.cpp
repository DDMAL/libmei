
#include "mensural.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Ligature::Ligature() : 
    MeiElement("ligature"),
    m_Common(this),
    m_Facsimile(this),
    m_LigatureLog(this),
    m_CommonAnl(this),
    m_Alignment(this) 
{
};
REGISTER_DEFINITION(mei::Ligature, "ligature");



mei::Mensur::Mensur() : 
    MeiElement("mensur"),
    m_Common(this),
    m_Facsimile(this),
    m_MensurLog(this),
    m_DurationRatio(this),
    m_MensurVis(this),
    m_Color(this),
    m_Relativesize(this),
    m_Slashcount(this),
    m_Staffloc(this),
    m_CommonAnl(this),
    m_Alignment(this) 
{
};
REGISTER_DEFINITION(mei::Mensur, "mensur");



mei::Proport::Proport() : 
    MeiElement("proport"),
    m_Common(this),
    m_Facsimile(this),
    m_DurationRatio(this),
    m_CommonAnl(this),
    m_Alignment(this) 
{
};
REGISTER_DEFINITION(mei::Proport, "proport");




