#include "cmn.h"

#include <string>

#include "meielement.h"
#include "meidocument.h"
#include <vector>
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;

using std::vector;
using std::find;
using mei::MeiElement;
using mei::MeiDocument;
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Arpeg::Arpeg() :
    MeiElement("arpeg"),
    m_Common(this),
    m_Facsimile(this),
    m_ArpegLog(this),
    m_Plist(this),
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

/* include <arpeg> */

mei::BTrem::BTrem() :
    MeiElement("bTrem"),
    m_Common(this),
    m_Facsimile(this),
    m_BTremLog(this),
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
REGISTER_DEFINITION(mei::BTrem, "bTrem");
mei::BTrem::~BTrem() {}

/* include <bTrem> */

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

/* include <beam> */

mei::BeamSpan::BeamSpan() :
    MeiElement("beamSpan"),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
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
REGISTER_DEFINITION(mei::BeamSpan, "beamSpan");
mei::BeamSpan::~BeamSpan() {}

/* include <beamSpan> */

mei::BeatRpt::BeatRpt() :
    MeiElement("beatRpt"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_BeatRptVis(this),
    m_Altsym(this),
    m_Color(this),
    m_Expandable(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::BeatRpt, "beatRpt");
mei::BeatRpt::~BeatRpt() {}

/* include <beatRpt> */

mei::Bend::Bend() :
    MeiElement("bend"),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
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

/* include <bend> */

mei::Breath::Breath() :
    MeiElement("breath"),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
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

/* include <breath> */

mei::FTrem::FTrem() :
    MeiElement("fTrem"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Slashcount(this),
    m_FTremGes(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::FTrem, "fTrem");
mei::FTrem::~FTrem() {}

/* include <fTrem> */

mei::Fermata::Fermata() :
    MeiElement("fermata"),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
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

/* include <fermata> */

mei::Gliss::Gliss() :
    MeiElement("gliss"),
    m_Common(this),
    m_Facsimile(this),
    m_Plist(this),
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

/* include <gliss> */

mei::Hairpin::Hairpin() :
    MeiElement("hairpin"),
    m_Common(this),
    m_Facsimile(this),
    m_HairpinLog(this),
    m_Plist(this),
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

/* include <hairpin> */

mei::HalfmRpt::HalfmRpt() :
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
REGISTER_DEFINITION(mei::HalfmRpt, "halfmRpt");
mei::HalfmRpt::~HalfmRpt() {}

/* include <halfmRpt> */

mei::HarpPedal::HarpPedal() :
    MeiElement("harpPedal"),
    m_Common(this),
    m_Facsimile(this),
    m_HarpPedalLog(this),
    m_Plist(this),
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
REGISTER_DEFINITION(mei::HarpPedal, "harpPedal");
mei::HarpPedal::~HarpPedal() {}

/* include <harpPedal> */

mei::MRest::MRest() :
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
REGISTER_DEFINITION(mei::MRest, "mRest");
mei::MRest::~MRest() {}

/* include <mRest> */

mei::MRpt::MRpt() :
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
REGISTER_DEFINITION(mei::MRpt, "mRpt");
mei::MRpt::~MRpt() {}

/* include <mRpt> */

mei::MRpt2::MRpt2() :
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
REGISTER_DEFINITION(mei::MRpt2, "mRpt2");
mei::MRpt2::~MRpt2() {}

/* include <mRpt2> */

mei::MSpace::MSpace() :
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
REGISTER_DEFINITION(mei::MSpace, "mSpace");
mei::MSpace::~MSpace() {}

/* include <mSpace> */

mei::Measure::Measure() :
    MeiElement("measure"),
    m_Common(this),
    m_Declaring(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Pointing(this),
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

/* include <measure> */

mei::MultiRest::MultiRest() :
    MeiElement("multiRest"),
    m_Common(this),
    m_Facsimile(this),
    m_TimestampMusical(this),
    m_TimestampPerformed(this),
    m_Staffident(this),
    m_Layerident(this),
    m_Numbered(this),
    m_MultiRestVis(this),
    m_Altsym(this),
    m_DurationPerformed(this),
    m_Instrumentident(this),
    m_CommonAnl(this),
    m_Alignment(this)
{
}
REGISTER_DEFINITION(mei::MultiRest, "multiRest");
mei::MultiRest::~MultiRest() {}

/* include <multiRest> */

mei::MultiRpt::MultiRpt() :
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
REGISTER_DEFINITION(mei::MultiRpt, "multiRpt");
mei::MultiRpt::~MultiRpt() {}

/* include <multiRpt> */

mei::Octave::Octave() :
    MeiElement("octave"),
    m_Common(this),
    m_Facsimile(this),
    m_OctaveLog(this),
    m_Plist(this),
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

/* include <octave> */

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

/* include <ossia> */

mei::Pedal::Pedal() :
    MeiElement("pedal"),
    m_Common(this),
    m_Facsimile(this),
    m_PedalLog(this),
    m_Plist(this),
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

/* include <pedal> */

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

/* include <reh> */

mei::Slur::Slur() :
    MeiElement("slur"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Plist(this),
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

/* include <slur> */

mei::Tie::Tie() :
    MeiElement("tie"),
    m_Common(this),
    m_Facsimile(this),
    m_Typed(this),
    m_Plist(this),
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

std::vector<mei::MeiElement*> mei::Tie::getMembers() {
    // gets the member notes of the tie.
    MeiDocument* doc = this->getDocument();

    string startid = this->getAttribute("startid")->getValue();
    string endid = this->getAttribute("endid")->getValue();

    MeiElement* startElement = doc->getElementById(startid);
    MeiElement* endElement = doc->getElementById(endid);

    vector<MeiElement*> flat = doc->getFlattenedTree();
    vector<MeiElement*> res;
    string staff = this->attachedToStaff();

    for (unsigned int i = startElement->getPositionInDocument(); i <= endElement->getPositionInDocument(); ++i) {
        if (flat[i]->getName() == "note" || flat[i]->getName() == "rest") {
            if(flat[i]->getAncestor("staff")->getAttribute("n")->getValue() == staff) {
                res.push_back(flat[i]);
            }
        }
    }
    return res;
}

string mei::Tie::attachedToStaff() {
    return this->getAttribute("staff")->getValue();
}

MeiElement* mei::Tie::getSystem() {
    return this->lookBack("sb");
}



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

/* include <tuplet> */

mei::TupletSpan::TupletSpan() :
    MeiElement("tupletSpan"),
    m_Common(this),
    m_Facsimile(this),
    m_TupletSpanLog(this),
    m_Plist(this),
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
REGISTER_DEFINITION(mei::TupletSpan, "tupletSpan");
mei::TupletSpan::~TupletSpan() {}

/* include <tupletSpan> */



