

#include "lyrics.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Lyrics::Lyrics() : 
    MeiElement("lyrics"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Placement(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this) 
{
};
REGISTER_DEFINITION(mei::Lyrics, "lyrics");



mei::Verse::Verse() : 
    MeiElement("verse"),
    m_Common(this),
    m_Facsimile(this),
    m_Lang(this),
    m_VerseLog(this),
    m_Typography(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this) 
{
};
REGISTER_DEFINITION(mei::Verse, "verse");




