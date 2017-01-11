/*
    Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter, and Others

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
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "cmnmixins.h"
#include "usersymbolsmixins.h"
#include "externalsymbolsmixins.h"
#include "analysismixins.h"
#include "performancemixins.h"
#include "midimixins.h"


namespace mei {
/** \brief (arpeggiation) – Indicates that the notes of a chord are to be performed
 *  successively rather than simultaneously, usually from lowest to highest.
 * 
 *  Sometimes called a "roll".
 */
class MEI_EXPORT Arpeg : public MeiElement {
    public:
        Arpeg();
        Arpeg(const Arpeg& other);
        virtual ~Arpeg();

/* include <arpeg> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        ArpegLogMixIn    m_ArpegLog;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartidMixIn    m_Startid;
        ArpegVisMixIn    m_ArpegVis;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExtsymMixIn    m_Extsym;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Arpeg);
};

/** \brief (bowed tremolo) – A rapid alternation on a single pitch or chord.
 */
class MEI_EXPORT BTrem : public MeiElement {
    public:
        BTrem();
        BTrem(const BTrem& other);
        virtual ~BTrem();

/* include <bTrem> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        BTremLogMixIn    m_BTremLog;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationMusicalMixIn    m_DurationMusical;
        NumberedMixIn    m_Numbered;
        NumberplacementMixIn    m_Numberplacement;
        TremmeasuredMixIn    m_Tremmeasured;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(BTrem);
};

/** \brief A container for a series of explicitly beamed events that begins and ends
 *  entirely within a measure.
 */
class MEI_EXPORT Beam : public MeiElement {
    public:
        Beam();
        Beam(const Beam& other);
        virtual ~Beam();

/* include <beam> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        BeamedwithMixIn    m_Beamedwith;
        ColorMixIn    m_Color;
        BeamrendMixIn    m_Beamrend;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Beam);
};

/** \brief (beam span) – Alternative element for explicitly encoding beams, particularly
 *  those which extend across bar lines.
 */
class MEI_EXPORT BeamSpan : public MeiElement {
    public:
        BeamSpan();
        BeamSpan(const BeamSpan& other);
        virtual ~BeamSpan();

/* include <beamSpan> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        BeamedwithMixIn    m_Beamedwith;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
        ColorMixIn    m_Color;
        BeamrendMixIn    m_Beamrend;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(BeamSpan);
};

/** \brief (beat repeat) – An indication that material on a preceding beat should be
 *  repeated.
 */
class MEI_EXPORT BeatRpt : public MeiElement {
    public:
        BeatRpt();
        BeatRpt(const BeatRpt& other);
        virtual ~BeatRpt();

/* include <beatRpt> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        BeatRptLogMixIn    m_BeatRptLog;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        BeatRptVisMixIn    m_BeatRptVis;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtsymMixIn    m_Extsym;
        TypographyMixIn    m_Typography;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;

    private:
        REGISTER_DECLARATION(BeatRpt);
};

/** \brief A variation in pitch (often micro-tonal) upwards or downwards during the course
 *  of a note.
 */
class MEI_EXPORT Bend : public MeiElement {
    public:
        Bend();
        Bend(const Bend& other);
        virtual ~Bend();

/* include <bend> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
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
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Bend);
};

/** \brief (breath mark) – A indication of a point at which the performer on an
 *  instrument requiring breath (including the voice) may breathe.
 */
class MEI_EXPORT Breath : public MeiElement {
    public:
        Breath();
        Breath(const Breath& other);
        virtual ~Breath();

/* include <breath> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExtsymMixIn    m_Extsym;
        PlacementMixIn    m_Placement;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Breath);
};

/** \brief (fingered tremolo) – A rapid alternation between a pair of notes (or chords or
 *  perhaps between a note and a chord) that are (usually) farther apart than a
 *  major second.
 */
class MEI_EXPORT FTrem : public MeiElement {
    public:
        FTrem();
        FTrem(const FTrem& other);
        virtual ~FTrem();

/* include <fTrem> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        FTremLogMixIn    m_FTremLog;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationMusicalMixIn    m_DurationMusical;
        SlashcountMixIn    m_Slashcount;
        TremmeasuredMixIn    m_Tremmeasured;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(FTrem);
};

/** \brief An indication placed over a note or rest to indicate that it should be held
 *  longer than its written value.
 * 
 *  May also occur over a bar line to indicate the end of a phrase or section.
 *  Sometimes called a 'hold' or 'pause'.
 */
class MEI_EXPORT Fermata : public MeiElement {
    public:
        Fermata();
        Fermata(const Fermata& other);
        virtual ~Fermata();

/* include <fermata> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        FermataVisMixIn    m_FermataVis;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExtsymMixIn    m_Extsym;
        PlacementMixIn    m_Placement;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Fermata);
};

/** \brief (glissando) – A continuous or sliding movement from one pitch to another,
 *  usually indicated by a straight or wavy line.
 */
class MEI_EXPORT Gliss : public MeiElement {
    public:
        Gliss();
        Gliss(const Gliss& other);
        virtual ~Gliss();

/* include <gliss> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExtsymMixIn    m_Extsym;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        LinerendMixIn    m_Linerend;
        LinerendBaseMixIn    m_LinerendBase;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Gliss);
};

/** \brief Indicates continuous dynamics expressed on the score as wedge-shaped graphics,
 *  e.g.
 * 
 *  < and >.
 */
class MEI_EXPORT Hairpin : public MeiElement {
    public:
        Hairpin();
        Hairpin(const Hairpin& other);
        virtual ~Hairpin();

/* include <hairpin> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        HairpinLogMixIn    m_HairpinLog;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
        HairpinVisMixIn    m_HairpinVis;
        ColorMixIn    m_Color;
        LinerendBaseMixIn    m_LinerendBase;
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
        MidivalueMixIn    m_Midivalue;
        Midivalue2MixIn    m_Midivalue2;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Hairpin);
};

/** \brief (half-measure repeat) – A half-measure repeat in any meter.
 */
class MEI_EXPORT HalfmRpt : public MeiElement {
    public:
        HalfmRpt();
        HalfmRpt(const HalfmRpt& other);
        virtual ~HalfmRpt();

/* include <halfmRpt> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        DurationMusicalMixIn    m_DurationMusical;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtsymMixIn    m_Extsym;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(HalfmRpt);
};

/** \brief (harp pedal) – Harp pedal diagram.
 */
class MEI_EXPORT HarpPedal : public MeiElement {
    public:
        HarpPedal();
        HarpPedal(const HarpPedal& other);
        virtual ~HarpPedal();

/* include <harpPedal> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        HarpPedalLogMixIn    m_HarpPedalLog;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExtsymMixIn    m_Extsym;
        PlacementMixIn    m_Placement;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(HarpPedal);
};

/** \brief (measure rest) – Complete measure rest in any meter.
 */
class MEI_EXPORT MRest : public MeiElement {
    public:
        MRest();
        MRest(const MRest& other);
        virtual ~MRest();

/* include <mRest> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        DurationMusicalMixIn    m_DurationMusical;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        FermatapresentMixIn    m_Fermatapresent;
        AltsymMixIn    m_Altsym;
        CutoutMixIn    m_Cutout;
        ExtsymMixIn    m_Extsym;
        RelativesizeMixIn    m_Relativesize;
        StafflocMixIn    m_Staffloc;
        StafflocPitchedMixIn    m_StafflocPitched;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        VisibilityMixIn    m_Visibility;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        InstrumentidentMixIn    m_Instrumentident;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MRest);
};

/** \brief (measure repeat) – An indication that the previous measure should be repeated.
 */
class MEI_EXPORT MRpt : public MeiElement {
    public:
        MRpt();
        MRpt(const MRpt& other);
        virtual ~MRpt();

/* include <mRpt> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtsymMixIn    m_Extsym;
        TypographyMixIn    m_Typography;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MRpt);
};

/** \brief (2-measure repeat) – An indication that the previous two measures should be
 *  repeated.
 */
class MEI_EXPORT MRpt2 : public MeiElement {
    public:
        MRpt2();
        MRpt2(const MRpt2& other);
        virtual ~MRpt2();

/* include <mRpt2> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExpandableMixIn    m_Expandable;
        ExtsymMixIn    m_Extsym;
        TypographyMixIn    m_Typography;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MRpt2);
};

/** \brief (measure space) – A measure containing only empty space in any meter.
 */
class MEI_EXPORT MSpace : public MeiElement {
    public:
        MSpace();
        MSpace(const MSpace& other);
        virtual ~MSpace();

/* include <mSpace> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        AugmentdotsMixIn    m_Augmentdots;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        DurationMusicalMixIn    m_DurationMusical;
        FermatapresentMixIn    m_Fermatapresent;
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

/** \brief Unit of musical time consisting of a fixed number of note-values of a given
 *  type, as determined by the prevailing meter, and delimited in musical notation
 *  by bar lines.
 */
class MEI_EXPORT Measure : public MeiElement {
    public:
        Measure();
        Measure(const Measure& other);
        virtual ~Measure();

/* include <measure> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
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
        TargetevalMixIn    m_Targeteval;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Measure);
};

/** \brief (meter signature) – Written meter signature.
 */
class MEI_EXPORT MeterSig : public MeiElement {
    public:
        MeterSig();
        MeterSig(const MeterSig& other);
        virtual ~MeterSig();

/* include <meterSig> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        MeterSigLogMixIn    m_MeterSigLog;
        MeterSigVisMixIn    m_MeterSigVis;
        AltsymMixIn    m_Altsym;
        ExtsymMixIn    m_Extsym;
        TypographyMixIn    m_Typography;

    private:
        REGISTER_DECLARATION(MeterSig);
};

/** \brief (meter signature group) – Used to capture alternating, interchanging, and
 *  mixed meter signatures.
 */
class MEI_EXPORT MeterSigGrp : public MeiElement {
    public:
        MeterSigGrp();
        MeterSigGrp(const MeterSigGrp& other);
        virtual ~MeterSigGrp();

/* include <meterSigGrp> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        MeterSigGrpLogMixIn    m_MeterSigGrpLog;

    private:
        REGISTER_DECLARATION(MeterSigGrp);
};

/** \brief (multiple rest) – Multiple measures of rest compressed into a single symbol,
 *  frequently found in performer parts.
 */
class MEI_EXPORT MultiRest : public MeiElement {
    public:
        MultiRest();
        MultiRest(const MultiRest& other);
        virtual ~MultiRest();

/* include <multiRest> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        NumberedMixIn    m_Numbered;
        MultiRestVisMixIn    m_MultiRestVis;
        AltsymMixIn    m_Altsym;
        ExtsymMixIn    m_Extsym;
        StafflocMixIn    m_Staffloc;
        StafflocPitchedMixIn    m_StafflocPitched;
        TypographyMixIn    m_Typography;
        DurationPerformedMixIn    m_DurationPerformed;
        InstrumentidentMixIn    m_Instrumentident;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MultiRest);
};

/** \brief (multiple repeat) – Multiple repeated measures.
 */
class MEI_EXPORT MultiRpt : public MeiElement {
    public:
        MultiRpt();
        MultiRpt(const MultiRpt& other);
        virtual ~MultiRpt();

/* include <multiRpt> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        NumberedMixIn    m_Numbered;
        AltsymMixIn    m_Altsym;
        ExpandableMixIn    m_Expandable;
        ExtsymMixIn    m_Extsym;
        TypographyMixIn    m_Typography;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(MultiRpt);
};

/** \brief An indication that a passage should be performed one or more octaves above or
 *  below its written pitch.
 */
class MEI_EXPORT Octave : public MeiElement {
    public:
        Octave();
        Octave(const Octave& other);
        virtual ~Octave();

/* include <octave> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        OctaveLogMixIn    m_OctaveLog;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        OctavedisplacementMixIn    m_Octavedisplacement;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
        ColorMixIn    m_Color;
        ExtenderMixIn    m_Extender;
        LinerendMixIn    m_Linerend;
        LinerendBaseMixIn    m_LinerendBase;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Octave);
};

/** \brief An alternate notational version
 */
class MEI_EXPORT Ossia : public MeiElement {
    public:
        Ossia();
        Ossia(const Ossia& other);
        virtual ~Ossia();

/* include <ossia> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Ossia);
};

/** \brief Piano pedal mark.
 */
class MEI_EXPORT Pedal : public MeiElement {
    public:
        Pedal();
        Pedal(const Pedal& other);
        virtual ~Pedal();

/* include <pedal> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PedalLogMixIn    m_PedalLog;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        PedalVisMixIn    m_PedalVis;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExtsymMixIn    m_Extsym;
        LinerendMixIn    m_Linerend;
        LinerendBaseMixIn    m_LinerendBase;
        PlacementMixIn    m_Placement;
        TypographyMixIn    m_Typography;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Pedal);
};

/** \brief (rehearsal mark) – In an orchestral score and its corresponding parts, a mark
 *  indicating a convenient point from which to resume rehearsal after a break.
 */
class MEI_EXPORT Reh : public MeiElement {
    public:
        Reh();
        Reh(const Reh& other);
        virtual ~Reh();

/* include <reh> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
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
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Reh);
};

/** \brief Indication of 1) a "unified melodic idea" or 2) performance technique.
 */
class MEI_EXPORT Slur : public MeiElement {
    public:
        Slur();
        Slur(const Slur& other);
        virtual ~Slur();

/* include <slur> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
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
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Slur);
};

/** \brief An indication that two notes of the same pitch form a single note with their
 *  combined rhythmic values.
 */
class MEI_EXPORT Tie : public MeiElement {
    public:
        Tie();
        Tie(const Tie& other);
        virtual ~Tie();

/* include <tie> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
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
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Tie);
};

/** \brief A group of notes with "irregular" (sometimes called "irrational") rhythmic
 *  values, for example, three notes in the time normally occupied by two or nine in
 *  the time of five.
 */
class MEI_EXPORT Tuplet : public MeiElement {
    public:
        Tuplet();
        Tuplet(const Tuplet& other);
        virtual ~Tuplet();

/* include <tuplet> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        BeamedwithMixIn    m_Beamedwith;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        DurationRatioMixIn    m_DurationRatio;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        TupletVisMixIn    m_TupletVis;
        ColorMixIn    m_Color;
        NumberplacementMixIn    m_Numberplacement;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Tuplet);
};

/** \brief (tuplet span) – Alternative element for encoding tuplets, especially useful
 *  for tuplets that extend across bar lines.
 */
class MEI_EXPORT TupletSpan : public MeiElement {
    public:
        TupletSpan();
        TupletSpan(const TupletSpan& other);
        virtual ~TupletSpan();

/* include <tupletSpan> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        BeamedwithMixIn    m_Beamedwith;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        DurationRatioMixIn    m_DurationRatio;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
        TupletVisMixIn    m_TupletVis;
        ColorMixIn    m_Color;
        NumberplacementMixIn    m_Numberplacement;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(TupletSpan);
};
}
#endif  // CMN_H_
