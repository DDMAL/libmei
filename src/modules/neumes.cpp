#include "neumes.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Ineume::Ineume() :
    MeiElement("ineume"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_IneumeLog(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Staffloc(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Ineume, "ineume");
mei::Ineume::~Ineume() {}
mei::Ineume::Ineume(const Ineume& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_IneumeLog(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Staffloc(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <ineume> */

mei::Syllable::Syllable() :
    MeiElement("syllable"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::Syllable, "syllable");
mei::Syllable::~Syllable() {}
mei::Syllable::Syllable(const Syllable& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <syllable> */

mei::Uneume::Uneume() :
    MeiElement("uneume"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Typed(this),
    m_UneumeLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Syltext(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualoffsetHo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Harmonicfunction(this),
    m_Intervalmelodic(this),
    m_Melodicfunction(this),
    m_Solfa(this)
{
}
REGISTER_DEFINITION(mei::Uneume, "uneume");
mei::Uneume::~Uneume() {}
mei::Uneume::Uneume(const Uneume& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Typed(this),
    m_UneumeLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Syltext(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_Typography(this),
    m_Visibility(this),
    m_VisualoffsetHo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Harmonicfunction(this),
    m_Intervalmelodic(this),
    m_Melodicfunction(this),
    m_Solfa(this)
{
}

/* include <uneume> */



