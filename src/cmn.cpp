

#include "cmn.h"
using std::string;


Arpeg::Arpeg() : m_Common(this), m_Facsimile(this), m_ArpegLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_ArpegVis(this), m_Color(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("arpeg");
};



Btrem::Btrem() : m_Common(this), m_Facsimile(this), m_BtremLog(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Numbered(this), m_Slashcount(this), m_Numberplacement(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("bTrem");
};



Beam::Beam() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Beamedwith(this), m_Beamrend(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("beam");
};



Beamspan::Beamspan() : m_Common(this), m_Facsimile(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_Beamedwith(this), m_DurationMusical(this), m_Beamrend(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("beamSpan");
};



Beatrpt::Beatrpt() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_BeatrptVis(this), m_Altsym(this), m_Color(this), m_Expandable(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("beatRpt");
};



Bend::Bend() : m_Common(this), m_Facsimile(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_Color(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Visualoffset2Vo(this), m_Xy(this), m_Xy2(this), m_Curvature(this), m_Curverend(this), m_BendGes(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("bend");
};



Breath::Breath() : m_Common(this), m_Facsimile(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_Altsym(this), m_Color(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("breath");
};



Ftrem::Ftrem() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Slashcount(this), m_FtremGes(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("fTrem");
};



Fermata::Fermata() : m_Common(this), m_Facsimile(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_FermataVis(this), m_Altsym(this), m_Color(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("fermata");
};



Gliss::Gliss() : m_Common(this), m_Facsimile(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_GlissVis(this), m_Color(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Visualoffset2Vo(this), m_Xy(this), m_Xy2(this), m_Linerend(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("gliss");
};



Hairpin::Hairpin() : m_Common(this), m_Facsimile(this), m_HairpinLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_HairpinVis(this), m_Color(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Visualoffset2Vo(this), m_Xy(this), m_Xy2(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("hairpin");
};



Halfmrpt::Halfmrpt() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_DurationMusical(this), m_Altsym(this), m_Color(this), m_Expandable(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("halfmRpt");
};



Harppedal::Harppedal() : m_Common(this), m_Facsimile(this), m_HarppedalLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_Color(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("harpPedal");
};



Mrest::Mrest() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Fermatapresent(this), m_DurationMusical(this), m_Altsym(this), m_Cutout(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visibility(this), m_Xy(this), m_Relativesize(this), m_DurationPerformed(this), m_Instrumentident(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("mRest");
};



Mrpt::Mrpt() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Altsym(this), m_Color(this), m_Expandable(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("mRpt");
};



Mrpt2::Mrpt2() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Altsym(this), m_Color(this), m_Expandable(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("mRpt2");
};



Mspace::Mspace() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Fermatapresent(this), m_DurationMusical(this), m_Altsym(this), m_Cutout(this), m_Visibility(this), m_Xy(this), m_DurationPerformed(this), m_Instrumentident(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("mSpace");
};



Measure::Measure() : m_Common(this), m_Declaring(this), m_Facsimile(this), m_Typed(this), m_LinkCommon(this), m_Participantident(this), m_LinkExternal(this), m_MeasureLog(this), m_MeterconformanceBar(this), m_Barplacement(this), m_Measurement(this), m_Width(this), m_TimestampPerformed(this), m_CommonAnl(this), m_Alignment(this), m_Joined(this) {
    m_Base.setName("measure");
};



Multirest::Multirest() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Numbered(this), m_MultirestVis(this), m_Altsym(this), m_DurationPerformed(this), m_Instrumentident(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("multiRest");
};



Multirpt::Multirpt() : m_Common(this), m_Facsimile(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Numbered(this), m_Altsym(this), m_Expandable(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("multiRpt");
};



Octave::Octave() : m_Common(this), m_Facsimile(this), m_OctaveLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Octavedisplacement(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_Xy(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Linerend(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("octave");
};



Ossia::Ossia() : m_Common(this), m_Facsimile(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("ossia");
};



Pedal::Pedal() : m_Common(this), m_Facsimile(this), m_PedalLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_PedalVis(this), m_Color(this), m_Placement(this), m_Xy(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("pedal");
};



Reh::Reh() : m_Common(this), m_Facsimile(this), m_Staffident(this), m_Startid(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Color(this), m_Placement(this), m_Typography(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Xy(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("reh");
};



Slur::Slur() : m_Common(this), m_Facsimile(this), m_Typed(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_Color(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Visualoffset2Vo(this), m_Xy(this), m_Xy2(this), m_Curvature(this), m_Curverend(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this), m_Joined(this) {
    m_Base.setName("slur");
};



Tie::Tie() : m_Common(this), m_Facsimile(this), m_Typed(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_Color(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Visualoffset2Vo(this), m_Xy(this), m_Xy2(this), m_Curvature(this), m_Curverend(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("tie");
};



Tuplet::Tuplet() : m_Common(this), m_Facsimile(this), m_TupletLog(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Beamedwith(this), m_Augmentdots(this), m_DurationRatio(this), m_Startendid(this), m_Startid(this), m_TupletVis(this), m_Numberplacement(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("tuplet");
};



Tupletspan::Tupletspan() : m_Common(this), m_Facsimile(this), m_TupletspanLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Beamedwith(this), m_Augmentdots(this), m_DurationRatio(this), m_Startendid(this), m_Startid(this), m_TupletVis(this), m_Numberplacement(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("tupletSpan");
};




