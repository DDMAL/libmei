#include "lyrics.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Lyrics::Lyrics() :
    MeiElement("lyrics"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Placement(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Lyrics, "lyrics");
mei::Lyrics::~Lyrics() {}
mei::Lyrics::Lyrics(const Lyrics& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Placement(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <lyrics> */

mei::Verse::Verse() :
    MeiElement("verse"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_VerseLog(this),
    m_Color(this),
    m_Typography(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Verse, "verse");
mei::Verse::~Verse() {}
mei::Verse::Verse(const Verse& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_VerseLog(this),
    m_Color(this),
    m_Typography(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <verse> */



