/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter, and Others
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:
    
    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef CMN_H_
#define CMN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"

#include "meielement.h"
#include "meidocument.h"
#include <vector>

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "cmnmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
/** \brief 
 */
class MEI_EXPORT Arpeg : public MeiElement {
    public:
        Arpeg();
        Arpeg(const Arpeg& other);
        virtual ~Arpeg();

/* include <arpeg> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        ArpegLogMixIn    m_ArpegLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        ArpegVisMixIn    m_ArpegVis;
        ColorMixIn    m_Color;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Arpeg);
};

/** \brief 
 */
class MEI_EXPORT BTrem : public MeiElement {
    public:
        BTrem();
        BTrem(const BTrem& other);
        virtual ~BTrem();

/* include <bTrem> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        BTremLogMixIn    m_BTremLog;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        NumberedMixIn    m_Numbered;
        SlashcountMixIn    m_Slashcount;
        NumberplacementMixIn    m_Numberplacement;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(BTrem);
};

/** \brief 
 */
class MEI_EXPORT Beam : public MeiElement {
    public:
        Beam();
        Beam(const Beam& other);
        virtual ~Beam();

/* include <beam> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        BeamedwithMixIn    m_Beamedwith;
        BeamrendMixIn    m_Beamrend;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Beam);
};

/** \brief 
 */
class MEI_EXPORT BeamSpan : public MeiElement {
    public:
        BeamSpan();
        BeamSpan(const BeamSpan& other);
        virtual ~BeamSpan();

/* include <beamSpan> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        BeamedwithMixIn    m_Beamedwith;
        DurationMusicalMixIn    m_DurationMusical;
        BeamrendMixIn    m_Beamrend;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(BeamSpan);
};

/** \brief 
 */
class MEI_EXPORT BeatRpt : public MeiElement {
    public:
        BeatRpt();
        BeatRpt(const BeatRpt& other);
        virtual ~BeatRpt();

/* include <beatRpt> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        BeatRptVisMixIn    m_BeatRptVis;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(BeatRpt);
};

/** \brief 
 */
class MEI_EXPORT Bend : public MeiElement {
    public:
        Bend();
        Bend(const Bend& other);
        virtual ~Bend();

/* include <bend> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        ColorMixIn    m_Color;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurverendMixIn    m_Curverend;
        BendGesMixIn    m_BendGes;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Bend);
};

/** \brief 
 */
class MEI_EXPORT Breath : public MeiElement {
    public:
        Breath();
        Breath(const Breath& other);
        virtual ~Breath();

/* include <breath> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Breath);
};

/** \brief 
 */
class MEI_EXPORT FTrem : public MeiElement {
    public:
        FTrem();
        FTrem(const FTrem& other);
        virtual ~FTrem();

/* include <fTrem> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        SlashcountMixIn    m_Slashcount;
        FTremGesMixIn    m_FTremGes;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(FTrem);
};

/** \brief 
 */
class MEI_EXPORT Fermata : public MeiElement {
    public:
        Fermata();
        Fermata(const Fermata& other);
        virtual ~Fermata();

/* include <fermata> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        FermataVisMixIn    m_FermataVis;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Fermata);
};

/** \brief 
 */
class MEI_EXPORT Gliss : public MeiElement {
    public:
        Gliss();
        Gliss(const Gliss& other);
        virtual ~Gliss();

/* include <gliss> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        GlissVisMixIn    m_GlissVis;
        ColorMixIn    m_Color;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        LinerendMixIn    m_Linerend;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Gliss);
};

/** \brief 
 */
class MEI_EXPORT Hairpin : public MeiElement {
    public:
        Hairpin();
        Hairpin(const Hairpin& other);
        virtual ~Hairpin();

/* include <hairpin> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        HairpinLogMixIn    m_HairpinLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        HairpinVisMixIn    m_HairpinVis;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Hairpin);
};

/** \brief 
 */
class MEI_EXPORT HalfmRpt : public MeiElement {
    public:
        HalfmRpt();
        HalfmRpt(const HalfmRpt& other);
        virtual ~HalfmRpt();

/* include <halfmRpt> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        DurationMusicalMixIn    m_DurationMusical;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(HalfmRpt);
};

/** \brief 
 */
class MEI_EXPORT HarpPedal : public MeiElement {
    public:
        HarpPedal();
        HarpPedal(const HarpPedal& other);
        virtual ~HarpPedal();

/* include <harpPedal> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        HarpPedalLogMixIn    m_HarpPedalLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(HarpPedal);
};

/** \brief 
 */
class MEI_EXPORT MRest : public MeiElement {
    public:
        MRest();
        MRest(const MRest& other);
        virtual ~MRest();

/* include <mRest> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        FermatapresentMixIn    m_Fermatapresent;
        DurationMusicalMixIn    m_DurationMusical;
        AltsymMixIn    m_Altsym;
        CutoutMixIn    m_Cutout;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        VisibilityMixIn    m_Visibility;
        XyMixIn    m_Xy;
        RelativesizeMixIn    m_Relativesize;
        DurationPerformedMixIn    m_DurationPerformed;
        InstrumentidentMixIn    m_Instrumentident;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MRest);
};

/** \brief 
 */
class MEI_EXPORT MRpt : public MeiElement {
    public:
        MRpt();
        MRpt(const MRpt& other);
        virtual ~MRpt();

/* include <mRpt> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MRpt);
};

/** \brief 
 */
class MEI_EXPORT MRpt2 : public MeiElement {
    public:
        MRpt2();
        MRpt2(const MRpt2& other);
        virtual ~MRpt2();

/* include <mRpt2> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MRpt2);
};

/** \brief 
 */
class MEI_EXPORT MSpace : public MeiElement {
    public:
        MSpace();
        MSpace(const MSpace& other);
        virtual ~MSpace();

/* include <mSpace> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        FermatapresentMixIn    m_Fermatapresent;
        DurationMusicalMixIn    m_DurationMusical;
        AltsymMixIn    m_Altsym;
        CutoutMixIn    m_Cutout;
        VisibilityMixIn    m_Visibility;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        InstrumentidentMixIn    m_Instrumentident;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MSpace);
};

/** \brief 
 */
class MEI_EXPORT Measure : public MeiElement {
    public:
        Measure();
        Measure(const Measure& other);
        virtual ~Measure();

/* include <measure> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        PointingMixIn    m_Pointing;
        MeasureLogMixIn    m_MeasureLog;
        MeterconformanceBarMixIn    m_MeterconformanceBar;
        BarplacementMixIn    m_Barplacement;
        MeasurementMixIn    m_Measurement;
        WidthMixIn    m_Width;
        TimestampPerformedMixIn    m_TimestampPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        JoinedMixIn    m_Joined;

    private:
        REGISTER_DECLARATION(Measure);
};

/** \brief 
 */
class MEI_EXPORT MultiRest : public MeiElement {
    public:
        MultiRest();
        MultiRest(const MultiRest& other);
        virtual ~MultiRest();

/* include <multiRest> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        NumberedMixIn    m_Numbered;
        MultiRestVisMixIn    m_MultiRestVis;
        AltsymMixIn    m_Altsym;
        DurationPerformedMixIn    m_DurationPerformed;
        InstrumentidentMixIn    m_Instrumentident;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MultiRest);
};

/** \brief 
 */
class MEI_EXPORT MultiRpt : public MeiElement {
    public:
        MultiRpt();
        MultiRpt(const MultiRpt& other);
        virtual ~MultiRpt();

/* include <multiRpt> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        NumberedMixIn    m_Numbered;
        AltsymMixIn    m_Altsym;
        ExpandableMixIn    m_Expandable;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MultiRpt);
};

/** \brief 
 */
class MEI_EXPORT Octave : public MeiElement {
    public:
        Octave();
        Octave(const Octave& other);
        virtual ~Octave();

/* include <octave> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        OctaveLogMixIn    m_OctaveLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        OctavedisplacementMixIn    m_Octavedisplacement;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        XyMixIn    m_Xy;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        LinerendMixIn    m_Linerend;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Octave);
};

/** \brief 
 */
class MEI_EXPORT Ossia : public MeiElement {
    public:
        Ossia();
        Ossia(const Ossia& other);
        virtual ~Ossia();

/* include <ossia> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Ossia);
};

/** \brief 
 */
class MEI_EXPORT Pedal : public MeiElement {
    public:
        Pedal();
        Pedal(const Pedal& other);
        virtual ~Pedal();

/* include <pedal> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PedalLogMixIn    m_PedalLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        PedalVisMixIn    m_PedalVis;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        XyMixIn    m_Xy;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Pedal);
};

/** \brief 
 */
class MEI_EXPORT Reh : public MeiElement {
    public:
        Reh();
        Reh(const Reh& other);
        virtual ~Reh();

/* include <reh> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        StaffidentMixIn    m_Staffident;
        StartidMixIn    m_Startid;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Reh);
};

/** \brief 
 */
class MEI_EXPORT Slur : public MeiElement {
    public:
        Slur();
        Slur(const Slur& other);
        virtual ~Slur();

/* include <slur> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        ColorMixIn    m_Color;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurverendMixIn    m_Curverend;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        JoinedMixIn    m_Joined;

    private:
        REGISTER_DECLARATION(Slur);
};

/** \brief 
 */
class MEI_EXPORT Tie : public MeiElement {
    public:
        Tie();
        Tie(const Tie& other);
        virtual ~Tie();

        MeiElement* getSystem();

        std::vector<mei::MeiElement*> getMembers();



        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        ColorMixIn    m_Color;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurverendMixIn    m_Curverend;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Tie);
};

/** \brief 
 */
class MEI_EXPORT Tuplet : public MeiElement {
    public:
        Tuplet();
        Tuplet(const Tuplet& other);
        virtual ~Tuplet();

/* include <tuplet> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TupletLogMixIn    m_TupletLog;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        BeamedwithMixIn    m_Beamedwith;
        AugmentdotsMixIn    m_Augmentdots;
        DurationRatioMixIn    m_DurationRatio;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        TupletVisMixIn    m_TupletVis;
        NumberplacementMixIn    m_Numberplacement;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Tuplet);
};

/** \brief 
 */
class MEI_EXPORT TupletSpan : public MeiElement {
    public:
        TupletSpan();
        TupletSpan(const TupletSpan& other);
        virtual ~TupletSpan();

/* include <tupletSpan> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TupletSpanLogMixIn    m_TupletSpanLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        BeamedwithMixIn    m_Beamedwith;
        AugmentdotsMixIn    m_Augmentdots;
        DurationRatioMixIn    m_DurationRatio;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        TupletVisMixIn    m_TupletVis;
        NumberplacementMixIn    m_Numberplacement;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(TupletSpan);
};
}
#endif  // CMN_H_
