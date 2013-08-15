#include "cmn.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Arpeg::Arpeg() :
    MeiElement("arpeg")
{
}
REGISTER_DEFINITION(mei::Arpeg, "arpeg");
mei::Arpeg::~Arpeg() {}
mei::Arpeg::Arpeg(const Arpeg& other) :
    MeiElement(other),

{
}

/* include <arpeg> */

mei::BTrem::BTrem() :
    MeiElement("bTrem")
{
}
REGISTER_DEFINITION(mei::BTrem, "bTrem");
mei::BTrem::~BTrem() {}
mei::BTrem::BTrem(const BTrem& other) :
    MeiElement(other),

{
}

/* include <bTrem> */

mei::Beam::Beam() :
    MeiElement("beam")
{
}
REGISTER_DEFINITION(mei::Beam, "beam");
mei::Beam::~Beam() {}
mei::Beam::Beam(const Beam& other) :
    MeiElement(other),

{
}

/* include <beam> */

mei::BeamSpan::BeamSpan() :
    MeiElement("beamSpan")
{
}
REGISTER_DEFINITION(mei::BeamSpan, "beamSpan");
mei::BeamSpan::~BeamSpan() {}
mei::BeamSpan::BeamSpan(const BeamSpan& other) :
    MeiElement(other),

{
}

/* include <beamSpan> */

mei::BeatRpt::BeatRpt() :
    MeiElement("beatRpt")
{
}
REGISTER_DEFINITION(mei::BeatRpt, "beatRpt");
mei::BeatRpt::~BeatRpt() {}
mei::BeatRpt::BeatRpt(const BeatRpt& other) :
    MeiElement(other),

{
}

/* include <beatRpt> */

mei::Bend::Bend() :
    MeiElement("bend")
{
}
REGISTER_DEFINITION(mei::Bend, "bend");
mei::Bend::~Bend() {}
mei::Bend::Bend(const Bend& other) :
    MeiElement(other),

{
}

/* include <bend> */

mei::Breath::Breath() :
    MeiElement("breath")
{
}
REGISTER_DEFINITION(mei::Breath, "breath");
mei::Breath::~Breath() {}
mei::Breath::Breath(const Breath& other) :
    MeiElement(other),

{
}

/* include <breath> */

mei::FTrem::FTrem() :
    MeiElement("fTrem")
{
}
REGISTER_DEFINITION(mei::FTrem, "fTrem");
mei::FTrem::~FTrem() {}
mei::FTrem::FTrem(const FTrem& other) :
    MeiElement(other),

{
}

/* include <fTrem> */

mei::Fermata::Fermata() :
    MeiElement("fermata")
{
}
REGISTER_DEFINITION(mei::Fermata, "fermata");
mei::Fermata::~Fermata() {}
mei::Fermata::Fermata(const Fermata& other) :
    MeiElement(other),

{
}

/* include <fermata> */

mei::Gliss::Gliss() :
    MeiElement("gliss")
{
}
REGISTER_DEFINITION(mei::Gliss, "gliss");
mei::Gliss::~Gliss() {}
mei::Gliss::Gliss(const Gliss& other) :
    MeiElement(other),

{
}

/* include <gliss> */

mei::Hairpin::Hairpin() :
    MeiElement("hairpin")
{
}
REGISTER_DEFINITION(mei::Hairpin, "hairpin");
mei::Hairpin::~Hairpin() {}
mei::Hairpin::Hairpin(const Hairpin& other) :
    MeiElement(other),

{
}

/* include <hairpin> */

mei::HalfmRpt::HalfmRpt() :
    MeiElement("halfmRpt")
{
}
REGISTER_DEFINITION(mei::HalfmRpt, "halfmRpt");
mei::HalfmRpt::~HalfmRpt() {}
mei::HalfmRpt::HalfmRpt(const HalfmRpt& other) :
    MeiElement(other),

{
}

/* include <halfmRpt> */

mei::HarpPedal::HarpPedal() :
    MeiElement("harpPedal")
{
}
REGISTER_DEFINITION(mei::HarpPedal, "harpPedal");
mei::HarpPedal::~HarpPedal() {}
mei::HarpPedal::HarpPedal(const HarpPedal& other) :
    MeiElement(other),

{
}

/* include <harpPedal> */

mei::MRest::MRest() :
    MeiElement("mRest")
{
}
REGISTER_DEFINITION(mei::MRest, "mRest");
mei::MRest::~MRest() {}
mei::MRest::MRest(const MRest& other) :
    MeiElement(other),

{
}

/* include <mRest> */

mei::MRpt::MRpt() :
    MeiElement("mRpt")
{
}
REGISTER_DEFINITION(mei::MRpt, "mRpt");
mei::MRpt::~MRpt() {}
mei::MRpt::MRpt(const MRpt& other) :
    MeiElement(other),

{
}

/* include <mRpt> */

mei::MRpt2::MRpt2() :
    MeiElement("mRpt2")
{
}
REGISTER_DEFINITION(mei::MRpt2, "mRpt2");
mei::MRpt2::~MRpt2() {}
mei::MRpt2::MRpt2(const MRpt2& other) :
    MeiElement(other),

{
}

/* include <mRpt2> */

mei::MSpace::MSpace() :
    MeiElement("mSpace")
{
}
REGISTER_DEFINITION(mei::MSpace, "mSpace");
mei::MSpace::~MSpace() {}
mei::MSpace::MSpace(const MSpace& other) :
    MeiElement(other),

{
}

/* include <mSpace> */

mei::Measure::Measure() :
    MeiElement("measure")
{
}
REGISTER_DEFINITION(mei::Measure, "measure");
mei::Measure::~Measure() {}
mei::Measure::Measure(const Measure& other) :
    MeiElement(other),

{
}

/* include <measure> */

mei::MeterSig::MeterSig() :
    MeiElement("meterSig")
{
}
REGISTER_DEFINITION(mei::MeterSig, "meterSig");
mei::MeterSig::~MeterSig() {}
mei::MeterSig::MeterSig(const MeterSig& other) :
    MeiElement(other),

{
}

/* include <meterSig> */

mei::MultiRest::MultiRest() :
    MeiElement("multiRest")
{
}
REGISTER_DEFINITION(mei::MultiRest, "multiRest");
mei::MultiRest::~MultiRest() {}
mei::MultiRest::MultiRest(const MultiRest& other) :
    MeiElement(other),

{
}

/* include <multiRest> */

mei::MultiRpt::MultiRpt() :
    MeiElement("multiRpt")
{
}
REGISTER_DEFINITION(mei::MultiRpt, "multiRpt");
mei::MultiRpt::~MultiRpt() {}
mei::MultiRpt::MultiRpt(const MultiRpt& other) :
    MeiElement(other),

{
}

/* include <multiRpt> */

mei::Octave::Octave() :
    MeiElement("octave")
{
}
REGISTER_DEFINITION(mei::Octave, "octave");
mei::Octave::~Octave() {}
mei::Octave::Octave(const Octave& other) :
    MeiElement(other),

{
}

/* include <octave> */

mei::Ossia::Ossia() :
    MeiElement("ossia")
{
}
REGISTER_DEFINITION(mei::Ossia, "ossia");
mei::Ossia::~Ossia() {}
mei::Ossia::Ossia(const Ossia& other) :
    MeiElement(other),

{
}

/* include <ossia> */

mei::Pedal::Pedal() :
    MeiElement("pedal")
{
}
REGISTER_DEFINITION(mei::Pedal, "pedal");
mei::Pedal::~Pedal() {}
mei::Pedal::Pedal(const Pedal& other) :
    MeiElement(other),

{
}

/* include <pedal> */

mei::Reh::Reh() :
    MeiElement("reh")
{
}
REGISTER_DEFINITION(mei::Reh, "reh");
mei::Reh::~Reh() {}
mei::Reh::Reh(const Reh& other) :
    MeiElement(other),

{
}

/* include <reh> */

mei::Slur::Slur() :
    MeiElement("slur")
{
}
REGISTER_DEFINITION(mei::Slur, "slur");
mei::Slur::~Slur() {}
mei::Slur::Slur(const Slur& other) :
    MeiElement(other),

{
}

/* include <slur> */

mei::Tie::Tie() :
    MeiElement("tie")
{
}
REGISTER_DEFINITION(mei::Tie, "tie");
mei::Tie::~Tie() {}
mei::Tie::Tie(const Tie& other) :
    MeiElement(other),

{
}

/* include <tie> */

mei::Tuplet::Tuplet() :
    MeiElement("tuplet")
{
}
REGISTER_DEFINITION(mei::Tuplet, "tuplet");
mei::Tuplet::~Tuplet() {}
mei::Tuplet::Tuplet(const Tuplet& other) :
    MeiElement(other),

{
}

/* include <tuplet> */

mei::TupletSpan::TupletSpan() :
    MeiElement("tupletSpan")
{
}
REGISTER_DEFINITION(mei::TupletSpan, "tupletSpan");
mei::TupletSpan::~TupletSpan() {}
mei::TupletSpan::TupletSpan(const TupletSpan& other) :
    MeiElement(other),

{
}

/* include <tupletSpan> */



