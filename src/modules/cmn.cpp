#include "cmn.h"

#include <string>
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;

mei::Arpeg::Arpeg() :
    MeiElement("arpeg"),
    m_Common(this),
    m_Facsimile(this),
    m_ArpegLog(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_ArpegVis(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Arpeg, "arpeg");
mei::Arpeg::~Arpeg() {}


mei::Btrem::Btrem() :
    MeiElement("bTrem"),
    m_Common(this),
    m_Facsimile(this),
    m_BtremLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Numbered(this),
    m_Slashcount(this),
    m_Numberplacement(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Btrem, "bTrem");
mei::Btrem::~Btrem() {}


mei::Beam::Beam() :
    MeiElement("beam"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Beamrend(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Beam, "beam");
mei::Beam::~Beam() {}


mei::Beamspan::Beamspan() :
    MeiElement("beamSpan"),
    m_Common(this),
    m_Facsimile(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Beamedwith(this),
    m_DurationMusical(this),
    m_Beamrend(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Beamspan, "beamSpan");
mei::Beamspan::~Beamspan() {}


mei::Beatrpt::Beatrpt() :
    MeiElement("beatRpt"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_BeatrptVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Beatrpt, "beatRpt");
mei::Beatrpt::~Beatrpt() {}


mei::Bend::Bend() :
    MeiElement("bend"),
    m_Common(this),
    m_Facsimile(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
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
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Bend, "bend");
mei::Bend::~Bend() {}


mei::Breath::Breath() :
    MeiElement("breath"),
    m_Common(this),
    m_Facsimile(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Altsym(this),
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
REGISTER_DEFINITION(mei::Breath, "breath");
mei::Breath::~Breath() {}


mei::Ftrem::Ftrem() :
    MeiElement("fTrem"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Slashcount(this),
    m_FtremGes(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Ftrem, "fTrem");
mei::Ftrem::~Ftrem() {}


mei::Fermata::Fermata() :
    MeiElement("fermata"),
    m_Common(this),
    m_Facsimile(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_FermataVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Fermata, "fermata");
mei::Fermata::~Fermata() {}


mei::Gliss::Gliss() :
    MeiElement("gliss"),
    m_Common(this),
    m_Facsimile(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_GlissVis(this),
    m_Color(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Visualoffset2Vo(this),
    m_Xy(this),
    m_Xy2(this),
    m_Linerend(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Gliss, "gliss");
mei::Gliss::~Gliss() {}


mei::Hairpin::Hairpin() :
    MeiElement("hairpin"),
    m_Common(this),
    m_Facsimile(this),
    m_HairpinLog(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
    m_HairpinVis(this),
    m_Color(this),
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
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Hairpin, "hairpin");
mei::Hairpin::~Hairpin() {}


mei::Halfmrpt::Halfmrpt() :
    MeiElement("halfmRpt"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_DurationMusical(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Halfmrpt, "halfmRpt");
mei::Halfmrpt::~Halfmrpt() {}


mei::Harppedal::Harppedal() :
    MeiElement("harpPedal"),
    m_Common(this),
    m_Facsimile(this),
    m_HarppedalLog(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_Color(this),
    m_Placement(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Xy(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Harppedal, "harpPedal");
mei::Harppedal::~Harppedal() {}


mei::Mrest::Mrest() :
    MeiElement("mRest"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Fermatapresent(this),
    m_DurationMusical(this),
    m_Altsym(this),
    m_Cutout(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visibility(this),
    m_Xy(this),
    m_Relativesize(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Mrest, "mRest");
mei::Mrest::~Mrest() {}


mei::Mrpt::Mrpt() :
    MeiElement("mRpt"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Mrpt, "mRpt");
mei::Mrpt::~Mrpt() {}


mei::Mrpt2::Mrpt2() :
    MeiElement("mRpt2"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Mrpt2, "mRpt2");
mei::Mrpt2::~Mrpt2() {}


mei::Mspace::Mspace() :
    MeiElement("mSpace"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Fermatapresent(this),
    m_DurationMusical(this),
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
REGISTER_DEFINITION(mei::Mspace, "mSpace");
mei::Mspace::~Mspace() {}


mei::Measure::Measure() :
    MeiElement("measure"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Pointing(this),
    m_Targets(this),
    m_MeasureLog(this),
    m_MeterconformanceBar(this),
    m_Barplacement(this),
    m_Measurement(this),
    m_Width(this),
    m_TimestampPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this),
    m_Joined(this)
{
}
REGISTER_DEFINITION(mei::Measure, "measure");
mei::Measure::~Measure() {}


mei::Multirest::Multirest() :
    MeiElement("multiRest"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Numbered(this),
    m_MultirestVis(this),
    m_Altsym(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Multirest, "multiRest");
mei::Multirest::~Multirest() {}


mei::Multirpt::Multirpt() :
    MeiElement("multiRpt"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Numbered(this),
    m_Altsym(this),
    m_Expandable(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Multirpt, "multiRpt");
mei::Multirpt::~Multirpt() {}


mei::Octave::Octave() :
    MeiElement("octave"),
    m_Common(this),
    m_Facsimile(this),
    m_OctaveLog(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Octavedisplacement(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
    m_Xy(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_Visualoffset2Ho(this),
    m_Visualoffset2To(this),
    m_Linerend(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Octave, "octave");
mei::Octave::~Octave() {}


mei::Ossia::Ossia() :
    MeiElement("ossia"),
    m_Common(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Ossia, "ossia");
mei::Ossia::~Ossia() {}


mei::Pedal::Pedal() :
    MeiElement("pedal"),
    m_Common(this),
    m_Facsimile(this),
    m_PedalLog(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_PedalVis(this),
    m_Color(this),
    m_Placement(this),
    m_Xy(this),
    m_VisualoffsetHo(this),
    m_VisualoffsetTo(this),
    m_VisualoffsetVo(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Pedal, "pedal");
mei::Pedal::~Pedal() {}


mei::Reh::Reh() :
    MeiElement("reh"),
    m_Common(this),
    m_Facsimile(this),
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
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Reh, "reh");
mei::Reh::~Reh() {}


mei::Slur::Slur() :
    MeiElement("slur"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
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
    m_Joined(this)
{
}
REGISTER_DEFINITION(mei::Slur, "slur");
mei::Slur::~Slur() {}


mei::Tie::Tie() :
    MeiElement("tie"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Startendid(this),
    m_Startid(this),
    m_DurationTimestamp(this),
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
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Tie, "tie");
mei::Tie::~Tie() {}


mei::Tuplet::Tuplet() :
    MeiElement("tuplet"),
    m_Common(this),
    m_Facsimile(this),
    m_TupletLog(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Augmentdots(this),
    m_DurationRatio(this),
    m_Startendid(this),
    m_Startid(this),
    m_TupletVis(this),
    m_Numberplacement(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Tuplet, "tuplet");
mei::Tuplet::~Tuplet() {}


mei::Tupletspan::Tupletspan() :
    MeiElement("tupletSpan"),
    m_Common(this),
    m_Facsimile(this),
    m_TupletspanLog(this),
    m_Targets(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Beamedwith(this),
    m_Augmentdots(this),
    m_DurationRatio(this),
    m_Startendid(this),
    m_Startid(this),
    m_TupletVis(this),
    m_Numberplacement(this),
    m_DurationPerformed(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::Tupletspan, "tupletSpan");
mei::Tupletspan::~Tupletspan() {}




