#include "fingering.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Fing::Fing() :
    MeiElement("fing"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_DurationPerformed(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Altsym(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Fing, "fing");
mei::Fing::~Fing() {}
mei::Fing::Fing(const Fing& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_DurationPerformed(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Altsym(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Typed(this)
{
}

/* include <fing> */

mei::FingGrp::FingGrp() :
    MeiElement("fingGrp"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_DurationPerformed(this),
    m_FingGrpLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_FingGrpVis(this),
    m_Altsym(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::FingGrp, "fingGrp");
mei::FingGrp::~FingGrp() {}
mei::FingGrp::FingGrp(const FingGrp& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_DurationPerformed(this),
    m_FingGrpLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_FingGrpVis(this),
    m_Altsym(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_Typed(this)
{
}

/* include <fingGrp> */



