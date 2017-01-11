#include "cmn.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::Arpeg::Arpeg() :
    MeiElement("arpeg"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_ArpegLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startid(this),
    m_ArpegVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Arpeg, "arpeg");
mei::Arpeg::~Arpeg() {}
mei::Arpeg::Arpeg(const Arpeg& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_ArpegLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startid(this),
    m_ArpegVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <arpeg> */

mei::BTrem::BTrem() :
    MeiElement("bTrem"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_BTremLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Numbered(this),
    m_Numberplacement(this),
    m_Tremmeasured(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::BTrem, "bTrem");
mei::BTrem::~BTrem() {}
mei::BTrem::BTrem(const BTrem& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_BTremLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Numbered(this),
    m_Numberplacement(this),
    m_Tremmeasured(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <bTrem> */

mei::Beam::Beam() :
    MeiElement("beam"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Color(this),
    m_Beamrend(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Beam, "beam");
mei::Beam::~Beam() {}
mei::Beam::Beam(const Beam& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Color(this),
    m_Beamrend(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <beam> */

mei::BeamSpan::BeamSpan() :
    MeiElement("beamSpan"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_Beamedwith(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_Beamrend(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::BeamSpan, "beamSpan");
mei::BeamSpan::~BeamSpan() {}
mei::BeamSpan::BeamSpan(const BeamSpan& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_Beamedwith(this),
    m_DurationAdditive(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_Beamrend(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <beamSpan> */

mei::BeatRpt::BeatRpt() :
    MeiElement("beatRpt"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_BeatRptLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_BeatRptVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Plist(this),
    m_Targeteval(this)
{
}
REGISTER_DEFINITION(mei::BeatRpt, "beatRpt");
mei::BeatRpt::~BeatRpt() {}
mei::BeatRpt::BeatRpt(const BeatRpt& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_BeatRptLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_BeatRptVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Plist(this),
    m_Targeteval(this)
{
}

/* include <beatRpt> */

mei::Bend::Bend() :
    MeiElement("bend"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
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
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this),
    m_BendGes(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Bend, "bend");
mei::Bend::~Bend() {}
mei::Bend::Bend(const Bend& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
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
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this),
    m_BendGes(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <bend> */

mei::Breath::Breath() :
    MeiElement("breath"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
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
    m_Color(this),
    m_Extsym(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Breath, "breath");
mei::Breath::~Breath() {}
mei::Breath::Breath(const Breath& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
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
    m_Color(this),
    m_Extsym(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <breath> */

mei::FTrem::FTrem() :
    MeiElement("fTrem"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_FTremLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Slashcount(this),
    m_Tremmeasured(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::FTrem, "fTrem");
mei::FTrem::~FTrem() {}
mei::FTrem::FTrem(const FTrem& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_FTremLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationMusical(this),
    m_Slashcount(this),
    m_Tremmeasured(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <fTrem> */

mei::Fermata::Fermata() :
    MeiElement("fermata"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_FermataVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Fermata, "fermata");
mei::Fermata::~Fermata() {}
mei::Fermata::Fermata(const Fermata& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_FermataVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <fermata> */

mei::Gliss::Gliss() :
    MeiElement("gliss"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
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
    m_Color(this),
    m_Extsym(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Gliss, "gliss");
mei::Gliss::~Gliss() {}
mei::Gliss::Gliss(const Gliss& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
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
    m_Color(this),
    m_Extsym(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <gliss> */

mei::Hairpin::Hairpin() :
    MeiElement("hairpin"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_HairpinLog(this),
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
    m_HairpinVis(this),
    m_Color(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_DurationPerformed(this),
    m_Midivalue(this),
    m_Midivalue2(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Hairpin, "hairpin");
mei::Hairpin::~Hairpin() {}
mei::Hairpin::Hairpin(const Hairpin& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_HairpinLog(this),
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
    m_HairpinVis(this),
    m_Color(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_DurationPerformed(this),
    m_Midivalue(this),
    m_Midivalue2(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <hairpin> */

mei::HalfmRpt::HalfmRpt() :
    MeiElement("halfmRpt"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::HalfmRpt, "halfmRpt");
mei::HalfmRpt::~HalfmRpt() {}
mei::HalfmRpt::HalfmRpt(const HalfmRpt& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <halfmRpt> */

mei::HarpPedal::HarpPedal() :
    MeiElement("harpPedal"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_HarpPedalLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::HarpPedal, "harpPedal");
mei::HarpPedal::~HarpPedal() {}
mei::HarpPedal::HarpPedal(const HarpPedal& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_HarpPedalLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <harpPedal> */

mei::MRest::MRest() :
    MeiElement("mRest"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_DurationMusical(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Fermatapresent(this),
    m_Altsym(this),
    m_Cutout(this),
    m_Extsym(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_StafflocPitched(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visibility(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::MRest, "mRest");
mei::MRest::~MRest() {}
mei::MRest::MRest(const MRest& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_DurationMusical(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Fermatapresent(this),
    m_Altsym(this),
    m_Cutout(this),
    m_Extsym(this),
    m_Relativesize(this),
    m_Staffloc(this),
    m_StafflocPitched(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visibility(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <mRest> */

mei::MRpt::MRpt() :
    MeiElement("mRpt"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::MRpt, "mRpt");
mei::MRpt::~MRpt() {}
mei::MRpt::MRpt(const MRpt& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <mRpt> */

mei::MRpt2::MRpt2() :
    MeiElement("mRpt2"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::MRpt2, "mRpt2");
mei::MRpt2::~MRpt2() {}
mei::MRpt2::MRpt2(const MRpt2& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <mRpt2> */

mei::MSpace::MSpace() :
    MeiElement("mSpace"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Augmentdots(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Altsym(this),
    m_Cutout(this),
    m_Visibility(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::MSpace, "mSpace");
mei::MSpace::~MSpace() {}
mei::MSpace::MSpace(const MSpace& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Augmentdots(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Fermatapresent(this),
    m_Altsym(this),
    m_Cutout(this),
    m_Visibility(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <mSpace> */

mei::Measure::Measure() :
    MeiElement("measure"),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_MeasureLog(this),
    m_MeterconformanceBar(this),
    m_Barplacement(this),
    m_Measurement(this),
    m_Width(this),
    m_TimestampPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Joined(this),
    m_Targeteval(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Measure, "measure");
mei::Measure::~Measure() {}
mei::Measure::Measure(const Measure& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_MeasureLog(this),
    m_MeterconformanceBar(this),
    m_Barplacement(this),
    m_Measurement(this),
    m_Width(this),
    m_TimestampPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Joined(this),
    m_Targeteval(this),
    m_Typed(this)
{
}

/* include <measure> */

mei::MeterSig::MeterSig() :
    MeiElement("meterSig"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_MeterSigLog(this),
    m_MeterSigVis(this),
    m_Altsym(this),
    m_Extsym(this),
    m_Typography(this)
{
}
REGISTER_DEFINITION(mei::MeterSig, "meterSig");
mei::MeterSig::~MeterSig() {}
mei::MeterSig::MeterSig(const MeterSig& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_MeterSigLog(this),
    m_MeterSigVis(this),
    m_Altsym(this),
    m_Extsym(this),
    m_Typography(this)
{
}

/* include <meterSig> */

mei::MeterSigGrp::MeterSigGrp() :
    MeiElement("meterSigGrp"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_MeterSigGrpLog(this)
{
}
REGISTER_DEFINITION(mei::MeterSigGrp, "meterSigGrp");
mei::MeterSigGrp::~MeterSigGrp() {}
mei::MeterSigGrp::MeterSigGrp(const MeterSigGrp& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_MeterSigGrpLog(this)
{
}

/* include <meterSigGrp> */

mei::MultiRest::MultiRest() :
    MeiElement("multiRest"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Numbered(this),
    m_MultiRestVis(this),
    m_Altsym(this),
    m_Extsym(this),
    m_Staffloc(this),
    m_StafflocPitched(this),
    m_Typography(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::MultiRest, "multiRest");
mei::MultiRest::~MultiRest() {}
mei::MultiRest::MultiRest(const MultiRest& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Numbered(this),
    m_MultiRestVis(this),
    m_Altsym(this),
    m_Extsym(this),
    m_Staffloc(this),
    m_StafflocPitched(this),
    m_Typography(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <multiRest> */

mei::MultiRpt::MultiRpt() :
    MeiElement("multiRpt"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Numbered(this),
    m_Altsym(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::MultiRpt, "multiRpt");
mei::MultiRpt::~MultiRpt() {}
mei::MultiRpt::MultiRpt(const MultiRpt& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Numbered(this),
    m_Altsym(this),
    m_Expandable(this),
    m_Extsym(this),
    m_Typography(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <multiRpt> */

mei::Octave::Octave() :
    MeiElement("octave"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_OctaveLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Octavedisplacement(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Octave, "octave");
mei::Octave::~Octave() {}
mei::Octave::Octave(const Octave& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_OctaveLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_Octavedisplacement(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_Extender(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <octave> */

mei::Ossia::Ossia() :
    MeiElement("ossia"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Ossia, "ossia");
mei::Ossia::~Ossia() {}
mei::Ossia::Ossia(const Ossia& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <ossia> */

mei::Pedal::Pedal() :
    MeiElement("pedal"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_PedalLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_PedalVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Pedal, "pedal");
mei::Pedal::~Pedal() {}
mei::Pedal::Pedal(const Pedal& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_PedalLog(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_PedalVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Extsym(this),
    m_Linerend(this),
    m_LinerendBase(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <pedal> */

mei::Reh::Reh() :
    MeiElement("reh"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Staffident(this),
    m_Startid(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Color(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Reh, "reh");
mei::Reh::~Reh() {}
mei::Reh::Reh(const Reh& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Lang(this),
    m_Staffident(this),
    m_Startid(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Color(this),
    m_Placement(this),
    m_Typography(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <reh> */

mei::Slur::Slur() :
    MeiElement("slur"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
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
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Joined(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Slur, "slur");
mei::Slur::~Slur() {}
mei::Slur::Slur(const Slur& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
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
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Joined(this),
    m_Typed(this)
{
}

/* include <slur> */

mei::Tie::Tie() :
    MeiElement("tie"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Tie, "tie");
mei::Tie::~Tie() {}
mei::Tie::Tie(const Tie& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Curvature(this),
    m_Curverend(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <tie> */

mei::Tuplet::Tuplet() :
    MeiElement("tuplet"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_DurationRatio(this),
    m_Startendid(this),
    m_Startid(this),
    m_TupletVis(this),
    m_Color(this),
    m_Numberplacement(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Tuplet, "tuplet");
mei::Tuplet::~Tuplet() {}
mei::Tuplet::Tuplet(const Tuplet& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_DurationRatio(this),
    m_Startendid(this),
    m_Startid(this),
    m_TupletVis(this),
    m_Color(this),
    m_Numberplacement(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}

/* include <tuplet> */

mei::TupletSpan::TupletSpan() :
    MeiElement("tupletSpan"),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_DurationRatio(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_TupletVis(this),
    m_Color(this),
    m_Numberplacement(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::TupletSpan, "tupletSpan");
mei::TupletSpan::~TupletSpan() {}
mei::TupletSpan::TupletSpan(const TupletSpan& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Facsimile(this),
    m_Plist(this),
    m_Targeteval(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Augmentdots(this),
    m_DurationAdditive(this),
    m_DurationRatio(this),
    m_Startendid(this),
    m_Startid(this),
    m_Timestamp2Musical(this),
    m_TupletVis(this),
    m_Color(this),
    m_Numberplacement(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Typed(this)
{
}

/* include <tupletSpan> */



