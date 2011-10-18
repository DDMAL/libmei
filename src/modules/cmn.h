/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani
    
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

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "cmnmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
/** \brief arpeggiation ― Indicates that the notes of a chord are to be performed
 *  successively rather than simultaneously, usually from lowest to highest.
 * 
 *  Sometimes called a "roll". The modern symbol is a vertical wavy line preceding
 *  the chord. When the notes of the chord are to be performed from highest to
 *  lowest, an arrowhead may be added to the lower end of the line. Even though it
 *  is redundant, an arrowhead is sometimes added to the upper end of the line for
 *  the sake of consistency or when the direction of successive arpeggios
 *  alternates. In music for keyboard instruments, sometimes a distinction is made
 *  between a single arpeggio in which both hands play successively and simultaneous
 *  arpeggios in two hands. In the case of the former, multiple values may be
 *  required in the staff and layer attributes. Arpeggios that do not cross staves,
 *  but still involve more than one layer require multiple values for the layer
 *  attribute.
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

/** \brief bowed tremolo ― A rapid alternation on a single pitch or chord.
 * 
 *  This element should also be used for wind double and triple tonguing and for
 *  flutter tonguing when these are expressed as tremolandi. For alternation between
 *  a pair of notes or chords, use the fTrem element. The num attribute can be used
 *  to store a number to be rendered along with a tremolo. The slash attribute
 *  indicates the number of slashes to be drawn. The number of slashes indicates the
 *  exact note values in an aural rendition of measured tremolandi, i.e., 4ths or
 *  8ths=1, 16ths=2, 32nds=3, 64ths=4, 128ths=5, 256ths=6. See Read, p. 393-394. The
 *  stem modifier (slash or z) must also be explicitly set on the child <note> or
 *  <chord> element for a complete visual representation. See Read, p. 394, ex.
 *  23-21, line 5.
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

/** \brief beam ― A container for a series of explicitly beamed events that begins and
 *  ends entirely within a measure.
 * 
 *  For beams that cross the bar line, use the beamSpan element. Secondary beams may
 *  be broken explicitly using the breaksec attribute on the notes or chords under
 *  the beam. Automated beaming, as opposed to explicitly marked beams, may be
 *  indicated for an entire score, part or section by using the beam.group and
 *  beam.rests attributes on these elements.
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

/** \brief beam span ― Alternative element for explicitly encoding beams which extend
 *  across bar lines.
 * 
 *  The starting point of the beam may be indicated by either a tstamp, tstamp.ges,
 *  tstamp.real or startid attribute, while the ending point may be recorded by
 *  either a dur, dur.ges or endid attribute. It is a semantic error not to specify
 *  one starting and one ending type of attribute.
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

/** \brief beat repeat ― An indication that material on a preceding beat should be
 *  repeated.
 * 
 *  It is also used in guitar or rhythm parts to indicate where chord changes occur.
 *  When these parts require durations longer or shorter than a beat, however, note
 *  elements with appropriately-shaped note heads should be employed.
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

/** \brief bend ― A variation in pitch (often micro-tonal) upwards or downwards during
 *  the course of a note.
 * 
 *  Typically, the performer attacks the note at "true" pitch, bends the intonation,
 *  then returns to true pitch. The bend element can also be used for scoop, plop,
 *  falloff, and doit performance effects. It should *not* be used for l.v. (laissez
 *  vibrer) indications. Precise performance data that differs from the logical
 *  events in a measure may be recorded within the bend element. The starting point
 *  of the bend may be indicated by either a tstamp, tstamp.ges, tstamp.real or
 *  startid attribute. It is a semantic error not to specify a starting attribute.
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

/** \brief breath mark ― A indication of a point at which the performer on an instrument
 *  requiring breath (including the voice) may breathe.
 * 
 *  It also may indicate a short pause or break for instruments *not* requiring
 *  breath. Therefore, it often functions as a guide to phrasing. The usual sign for
 *  the breath mark is a comma; however, other visual forms of the breath mark may
 *  be indicated using the altsym attribute. The starting point of the breath mark
 *  may be indicated by either a tstamp, tstamp.ges, tstamp.real or startid
 *  attribute. It is a semantic error not to specify a starting point attribute.
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

/** \brief fingered tremolo ― A rapid alternation between a pair of notes (or chords or
 *  perhaps between a note and a chord) that are (usually) farther apart than a
 *  major second.
 * 
 *  For rapid alternation between notes on the same pitch (bowed tremolo, double
 *  &amp; triple tonguing, and flutter tonguing) use the <bTrem> element. The slash
 *  attribute records the number of slashes required — 4ths or 8ths=1, 16ths=2,
 *  32nds=3, 64ths=4, 128ths=5, 256ths=6.
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

/** \brief fermata ― An indication placed over a note or rest to indicate that it should
 *  be held longer than its written value.
 * 
 *  May also occur over a bar line to indicate the end of a phrase or section.
 *  Sometimes called a 'hold' or 'pause'. The <fermata> element is a specialized
 *  form of, i.e., syntactic sugar for, dir/@type="fermata" with &ferm; or &uferm;
 *  as its PCDATA content. The shape attribute may be used to record whether the
 *  fermata is curved or square. Other visual forms of a fermata may be indicated
 *  via the altsym attribute. The starting point of the fermata may be indicated by
 *  either a tstamp, tstamp.ges, tstamp.real or startid attribute. It is a semantic
 *  error not to specify a starting point attribute.
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

/** \brief glissando ― A continuous or sliding movement from one pitch to another,
 *  usually indicated by a straight or wavy line.
 * 
 *  Commonly also called a 'slide'. The term 'glissando' is frequently used to
 *  indicate both the case where distinct intermediate pitches are produced (as on
 *  the piano) and the case where they are not (as on the trombone), though the
 *  latter is sometimes referred to as 'portamento'. The visual appearance of the
 *  indicating line may be recorded in the rend attribute. Precise performance data,
 *  that is, exact pitches, may be recorded within the <gliss> element. The starting
 *  point of the glissando may be indicated by either a tstamp, tstamp.ges,
 *  tstamp.real or startid attribute. It is a semantic error not to specify a
 *  starting point attribute.
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

/** \brief hairpin ― Indicates continuous dynamics expressed on the score as wedge-shaped
 *  graphics, e.g.
 * 
 *  < and >. The starting point of the hairpin may be indicated by either a tstamp,
 *  tstamp.ges, tstamp.real or startid attribute, while the ending point may be
 *  recorded by either a dur, dur.ges or endid attribute. It is a semantic error not
 *  to specify one starting and one ending type of attribute. Please note that the
 *  value of the dur attribute is not a true duration, but rather a time stamp for
 *  the end point of the hairpin.
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

/** \brief half-measure repeat ― A half-measure repeat in any meter.
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

/** \brief harp pedal ― Harp pedal diagram.
 * 
 *  The starting point of the harp pedal diagram may be indicated by either a
 *  tstamp, tstamp.ges, tstamp.real or startid attribute. It is a semantic error not
 *  to specify a starting point attribute.
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

/** \brief measure rest ― Complete measure rest in any meter (Read, p.
 * 
 *  97-98). Automatically-generated numbering of consecutive measures of rest may be
 *  controlled via the multi.number attribute on the scoreDef or staffDef elements.
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

/** \brief measure repeat ― An indication that the previous measure should be repeated.
 * 
 *  The automated numbering of consecutive measures of rest may be controlled via
 *  the multi.number attribute on the scoreDef or staffDef elements.
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

/** \brief 2-measure repeat ― An indication that the previous two measures should be
 *  repeated.
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

/** \brief measure space ― Complete measure consisting of empty space in any meter.
 * 
 *  The automated numbering of consecutive measures of space may be controlled via
 *  the multi.number attribute on the scoreDef or staffDef elements.
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

/** \brief measure ― "Unit of musical time consisting of a fixed number of note-values of
 *  a given type, as determined by the prevailing meter, and delimited in musical
 *  notation by two bar lines." (New Harvard Dictionary of Music) In MEI, the
 *  measure element is a grouping mechanism for events and control events.
 * 
 *  Pointing attributes make it possible to connect this element to other internal
 *  or external entities, such as media objects or annotations.
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

/** \brief multi-rest ― Multiple measures of rest compressed into a single symbol,
 *  frequently found in performer parts.
 * 
 *  The num attribute can used to store a number to be rendered along with the note.
 *  See Read, p. 102-105.
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

/** \brief multi-repeat ― Multiple repeated measures.
 * 
 *  In modern publishing practice, repeats of more than two measures should be
 *  written out using repeat signs. This element, however, is provided for handling
 *  non-standard practices often found in manuscript. The num attribute records the
 *  number of measures to be repeated.
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

/** \brief octave ― An indication that a passage should be performed one or more octaves
 *  above or below its written pitch.
 * 
 *  The dis and dis.place attributes record the amount and direction of
 *  displacement, respectively. The rend attribute captures the appearance of the
 *  continuation line associated with the octave displacement. The starting point of
 *  the octave displacement may be indicated by either a tstamp, tstamp.ges,
 *  tstamp.real or startid attribute, while the ending point may be recorded by
 *  either a dur, dur.ges or endid attribute. It is a semantic error not to specify
 *  one starting and one ending type of attribute. Please note that the dur
 *  attribute here is not a true duration, but rather a time stamp for the end point
 *  of the octave displacement. Also, note that the dur attribute is not required
 *  because the octave displacement can be visually instantaneous.
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

/** \brief ossia ― An alternate notational version *present in the source being
 *  transcribed*.
 * 
 *  The alternative material often provides a simpler, easier to perform option,
 *  while at other times the alternate material provides indications of performance
 *  practice, such as ornamentation. Often an ossia is rendered above the main staff
 *  on a reduced-size staff. Sometimes the alternate material occurs on the same
 *  staff as the primary text, but in a separate layer. In this case, the
 *  alternative material is often rendered in small-sized notation.
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

/** \brief pedal ― Piano pedal mark (Read, p.
 * 
 *  317-318). The starting point of the pedal mark may be indicated by either a
 *  tstamp, tstamp.ges, tstamp.real or startid attribute. It is a semantic error not
 *  to specify a starting point attribute.
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

/** \brief rehearsal mark ― In an orchestral score and its corresponding parts, a mark
 *  indicating a convenient point from which to resume rehearsal after a break.
 * 
 *  It may also be called a rehearsal figure, or when numbers are used instead of
 *  letters, a rehearsal number. See Read, p. 443. <reh> uses a subset of
 *  model.textphraseLike.limited.
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

/** \brief slur ― Historically, the term "slur" indicated two notes performed legato,
 *  while the term "phrase" was used for a "unified melodic idea".
 * 
 *  Nowadays, however, "slur" often has the same meaning as "phrase" (See Read, p.
 *  265-266), since the visual rendition of the two concepts is the same. MEI
 *  provides two distinct elements so that those users wishing to maintain a
 *  distinction for historical reasons may do so. If the user does not want to
 *  maintain the distinction, then the more generic <slur> element should be
 *  employed. The starting point of the slur may be indicated by either a tstamp,
 *  tstamp.ges, tstamp.real or startid attribute, while the ending point may be
 *  recorded by either a dur, dur.ges or endid attribute. It is a semantic error not
 *  to specify one starting and one ending type of attribute. Either place, bulge,
 *  or bezier attributes may be used to record the curvature of the slur. The slur
 *  and tie elements may be used instead of the slur.* and tie.* attributes provided
 *  on chord and note elements when 1) they are required by software, or 2)
 *  multiple, alternative slurs are needed. Please note that the dur attribute is
 *  not a true duration, but rather a time stamp for the end point of the slur.
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

/** \brief tie ― An indication that two notes of the same pitch form a single note with
 *  their combined rhythmic values.
 * 
 *  Most often it is rendered as a curved line connecting the two notes. See Read,
 *  p. 110-111, 122.
 */
class MEI_EXPORT Tie : public MeiElement {
    public:
        Tie();
        Tie(const Tie& other);
        virtual ~Tie();

        MeiElement* getSystem();
        std::string attachedToStaff();

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

/** \brief tuplet ― A group of notes with "irregular" (sometimes called "irrational")
 *  rhythmic values, for example, three notes in the time normally occupied by two
 *  or nine in the time of five.
 * 
 *  The beam sub-element is allowed so that custom beaming may be indicated, e.g., a
 *  septuplet may be divided into a group of three plus a group of four notes. See
 *  Read, p. 187-215. The tuplet element may also used for bowed tremolo (Read, p.
 *  394) and double, triple, or flutter tonguing (Read, p. 348-349); that is, for
 *  repetition of the same pitch. In the case of irrational durations, such as such
 *  as two quarter notes in the time of five 8th notes in a measure of 5/8 time,
 *  decimal values may be used in the dur.ges attribute. For example, the dur.ges
 *  attribute would take the value "2.5" if the midi.div attribute's value was "1".
 *  The num and numbase attributes may be used for explicit labelling of a tuplet,
 *  such as, '3' with an 8th-note triplet, '3:2' over a quarter-note triplet, etc.
 *  The rendering of the ratio, however, is dependent on the num.format attribute
 *  found in the att.vis.tuplet attribute class.
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

/** \brief tuplet span ― Alternative element for encoding tuplets, especially useful for
 *  tuplets that extend across bar lines.
 * 
 *  The starting point of the tuplet may be indicated by either a tstamp,
 *  tstamp.ges, tstamp.real or startid attribute, while the ending point may be
 *  recorded using a dur, dur.ges or endid attribute. It is a semantic error not to
 *  specify one starting and one ending type of attribute.
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
