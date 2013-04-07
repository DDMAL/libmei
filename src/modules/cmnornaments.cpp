#include "cmnornaments.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mordent::Mordent() :
    MeiElement("mordent"),
    m_Common(this),
    m_Facsimile(this),
    m_MordentLog(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Ornamentaccid(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Mordent, "mordent");
mei::Mordent::~Mordent() {}
mei::Mordent::Mordent(const Mordent& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_MordentLog(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Ornamentaccid(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <mordent> */

mei::Trill::Trill() :
    MeiElement("trill"),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Ornamentaccid(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Trill, "trill");
mei::Trill::~Trill() {}
mei::Trill::Trill(const Trill& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Ornamentaccid(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <trill> */

mei::Turn::Turn() :
    MeiElement("turn"),
    m_Common(this),
    m_Facsimile(this),
    m_TurnLog(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Ornamentaccid(this),
    m_Startid(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Turn, "turn");
mei::Turn::~Turn() {}
mei::Turn::Turn(const Turn& other) :
    MeiElement(other),
    m_Common(this),
    m_Facsimile(this),
    m_TurnLog(this),
    m_Plist(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Ornamentaccid(this),
    m_Startid(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <turn> */



