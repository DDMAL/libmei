
#include "cmn.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Arpeg::Arpeg() : 
    MeiElement("arpeg"),
    m_Common(this),
    m_Facsimile(this),
    m_ArpegLog(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Arpeg, "arpeg");



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
};
REGISTER_DEFINITION(mei::Btrem, "bTrem");



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
};
REGISTER_DEFINITION(mei::Beam, "beam");



mei::Beamspan::Beamspan() : 
    MeiElement("beamSpan"),
    m_Common(this),
    m_Facsimile(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Beamspan, "beamSpan");



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
};
REGISTER_DEFINITION(mei::Beatrpt, "beatRpt");



mei::Bend::Bend() : 
    MeiElement("bend"),
    m_Common(this),
    m_Facsimile(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Bend, "bend");



mei::Breath::Breath() : 
    MeiElement("breath"),
    m_Common(this),
    m_Facsimile(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Breath, "breath");



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
};
REGISTER_DEFINITION(mei::Ftrem, "fTrem");



mei::Fermata::Fermata() : 
    MeiElement("fermata"),
    m_Common(this),
    m_Facsimile(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Fermata, "fermata");



mei::Gliss::Gliss() : 
    MeiElement("gliss"),
    m_Common(this),
    m_Facsimile(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Gliss, "gliss");



mei::Hairpin::Hairpin() : 
    MeiElement("hairpin"),
    m_Common(this),
    m_Facsimile(this),
    m_HairpinLog(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Hairpin, "hairpin");



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
};
REGISTER_DEFINITION(mei::Halfmrpt, "halfmRpt");



mei::Harppedal::Harppedal() : 
    MeiElement("harpPedal"),
    m_Common(this),
    m_Facsimile(this),
    m_HarppedalLog(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Harppedal, "harpPedal");



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
};
REGISTER_DEFINITION(mei::Mrest, "mRest");



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
};
REGISTER_DEFINITION(mei::Mrpt, "mRpt");



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
};
REGISTER_DEFINITION(mei::Mrpt2, "mRpt2");



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
};
REGISTER_DEFINITION(mei::Mspace, "mSpace");



mei::Measure::Measure() : 
    MeiElement("measure"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this),
    m_LinkCommon(this),
    m_Participantident(this),
    m_LinkExternal(this),
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
};
REGISTER_DEFINITION(mei::Measure, "measure");



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
};
REGISTER_DEFINITION(mei::Multirest, "multiRest");



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
};
REGISTER_DEFINITION(mei::Multirpt, "multiRpt");



mei::Octave::Octave() : 
    MeiElement("octave"),
    m_Common(this),
    m_Facsimile(this),
    m_OctaveLog(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Octave, "octave");



mei::Ossia::Ossia() : 
    MeiElement("ossia"),
    m_Common(this),
    m_Facsimile(this),
    m_CommonAnl(this),
    m_Alignment(this) 
{
};
REGISTER_DEFINITION(mei::Ossia, "ossia");



mei::Pedal::Pedal() : 
    MeiElement("pedal"),
    m_Common(this),
    m_Facsimile(this),
    m_PedalLog(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Pedal, "pedal");



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
};
REGISTER_DEFINITION(mei::Reh, "reh");



mei::Slur::Slur() : 
    MeiElement("slur"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Slur, "slur");



mei::Tie::Tie() : 
    MeiElement("tie"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Tie, "tie");



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
};
REGISTER_DEFINITION(mei::Tuplet, "tuplet");



mei::Tupletspan::Tupletspan() : 
    MeiElement("tupletSpan"),
    m_Common(this),
    m_Facsimile(this),
    m_TupletspanLog(this),
    m_Participantident(this),
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
};
REGISTER_DEFINITION(mei::Tupletspan, "tupletSpan");




