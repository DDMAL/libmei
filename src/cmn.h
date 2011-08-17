
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
#include "exceptions.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "cmnmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
    
/** \brief   arpeggiation ― Indicates that the notes of a chord are to be performed
    * successively rather than simultaneously, usually from lowest to highest.
    * Sometimes called a "roll". The modern symbol is a vertical wavy line preceding
    * the chord. When the notes of the chord are to be performed from highest to
    * lowest, an arrowhead may be added to the lower end of the line. Even though it
    * is redundant, an arrowhead is sometimes added to the upper end of the line for
    * the sake of consistency or when the direction of successive arpeggios
    * alternates. In music for keyboard instruments, sometimes a distinction is made
    * between a single arpeggio in which both hands play successively and simultaneous
    * arpeggios in two hands. In the case of the former, multiple values may be
    * required in the staff and layer attributes. Arpeggios that do not cross staves,
    * but still involve more than one layer require multiple values for the layer
    * attribute.
    */

class Arpeg : public MeiElement {
    public:
        Arpeg();
        virtual ~Arpeg() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    ArpegLogMixIn    m_ArpegLog;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   bowed tremolo ― A rapid alternation on a single pitch or chord. This element
    * should also be used for wind double and triple tonguing and for flutter tonguing
    * when these are expressed as tremolandi. For alternation between a pair of notes
    * or chords, use the fTrem element. The num attribute can be used to store a
    * number to be rendered along with a tremolo. The slash attribute indicates the
    * number of slashes to be drawn. The number of slashes indicates the exact note
    * values in an aural rendition of measured tremolandi, i.e., 4ths or 8ths=1,
    * 16ths=2, 32nds=3, 64ths=4, 128ths=5, 256ths=6. See Read, p. 393-394. The stem
    * modifier (slash or z) must also be explicitly set on the child <note> or <chord>
    * element for a complete visual representation. See Read, p. 394, ex. 23-21, line
    * 5.
    */

class Btrem : public MeiElement {
    public:
        Btrem();
        virtual ~Btrem() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    BtremLogMixIn    m_BtremLog;
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
        REGISTER_DECLARATION(Btrem);
};


/** \brief   beam ― A container for a series of explicitly beamed events that begins and
    * ends entirely within a measure. For beams that cross the bar line, use the
    * beamSpan element. Secondary beams may be broken explicitly using the breaksec
    * attribute on the notes or chords under the beam. Automated beaming, as opposed
    * to explicitly marked beams, may be indicated for an entire score, part or
    * section by using the beam.group and beam.rests attributes on these elements.
    */

class Beam : public MeiElement {
    public:
        Beam();
        virtual ~Beam() {};
        
        
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


/** \brief   beam span ― Alternative element for explicitly encoding beams which extend
    * across bar lines. The starting point of the beam may be indicated by either a
    * tstamp, tstamp.ges, tstamp.real or startid attribute, while the ending point may
    * be recorded by either a dur, dur.ges or endid attribute. It is a semantic error
    * not to specify one starting and one ending type of attribute.
    */

class Beamspan : public MeiElement {
    public:
        Beamspan();
        virtual ~Beamspan() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    ParticipantidentMixIn    m_Participantident;
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
        REGISTER_DECLARATION(Beamspan);
};


/** \brief   beat repeat ― An indication that material on a preceding beat should be
    * repeated. It is also used in guitar or rhythm parts to indicate where chord
    * changes occur. When these parts require durations longer or shorter than a beat,
    * however, note elements with appropriately-shaped note heads should be employed.
    */

class Beatrpt : public MeiElement {
    public:
        Beatrpt();
        virtual ~Beatrpt() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TimestampMusicalMixIn    m_TimestampMusical;
    TimestampPerformedMixIn    m_TimestampPerformed;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    BeatrptVisMixIn    m_BeatrptVis;
    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    ExpandableMixIn    m_Expandable;
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    private:
        REGISTER_DECLARATION(Beatrpt);
};


/** \brief   bend ― A variation in pitch (often micro-tonal) upwards or downwards during
    * the course of a note. Typically, the performer attacks the note at "true" pitch,
    * bends the intonation, then returns to true pitch. The bend element can also be
    * used for scoop, plop, falloff, and doit performance effects. It should *not* be
    * used for l.v. (laissez vibrer) indications. Precise performance data that
    * differs from the logical events in a measure may be recorded within the bend
    * element. The starting point of the bend may be indicated by either a tstamp,
    * tstamp.ges, tstamp.real or startid attribute. It is a semantic error not to
    * specify a starting attribute.
    */

class Bend : public MeiElement {
    public:
        Bend();
        virtual ~Bend() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   breath mark ― A indication of a point at which the performer on an instrument
    * requiring breath (including the voice) may breathe. It also may indicate a short
    * pause or break for instruments *not* requiring breath. Therefore, it often
    * functions as a guide to phrasing. The usual sign for the breath mark is a comma;
    * however, other visual forms of the breath mark may be indicated using the altsym
    * attribute. The starting point of the breath mark may be indicated by either a
    * tstamp, tstamp.ges, tstamp.real or startid attribute. It is a semantic error not
    * to specify a starting point attribute.
    */

class Breath : public MeiElement {
    public:
        Breath();
        virtual ~Breath() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   fingered tremolo ― A rapid alternation between a pair of notes (or chords or
    * perhaps between a note and a chord) that are (usually) farther apart than a
    * major second. For rapid alternation between notes on the same pitch (bowed
    * tremolo, double &amp; triple tonguing, and flutter tonguing) use the <bTrem>
    * element. The slash attribute records the number of slashes required — 4ths or
    * 8ths=1, 16ths=2, 32nds=3, 64ths=4, 128ths=5, 256ths=6.
    */

class Ftrem : public MeiElement {
    public:
        Ftrem();
        virtual ~Ftrem() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TimestampMusicalMixIn    m_TimestampMusical;
    TimestampPerformedMixIn    m_TimestampPerformed;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    SlashcountMixIn    m_Slashcount;
    FtremGesMixIn    m_FtremGes;
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    private:
        REGISTER_DECLARATION(Ftrem);
};


/** \brief   fermata ― An indication placed over a note or rest to indicate that it should
    * be held longer than its written value. May also occur over a bar line to
    * indicate the end of a phrase or section. Sometimes called a 'hold' or 'pause'.
    * The <fermata> element is a specialized form of, i.e., syntactic sugar for,
    * dir/@type="fermata" with &ferm; or &uferm; as its PCDATA content. The shape
    * attribute may be used to record whether the fermata is curved or square. Other
    * visual forms of a fermata may be indicated via the altsym attribute. The
    * starting point of the fermata may be indicated by either a tstamp, tstamp.ges,
    * tstamp.real or startid attribute. It is a semantic error not to specify a
    * starting point attribute.
    */

class Fermata : public MeiElement {
    public:
        Fermata();
        virtual ~Fermata() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   glissando ― A continuous or sliding movement from one pitch to another,
    * usually indicated by a straight or wavy line. Commonly also called a 'slide'.
    * The term 'glissando' is frequently used to indicate both the case where distinct
    * intermediate pitches are produced (as on the piano) and the case where they are
    * not (as on the trombone), though the latter is sometimes referred to as
    * 'portamento'. The visual appearance of the indicating line may be recorded in
    * the rend attribute. Precise performance data, that is, exact pitches, may be
    * recorded within the <gliss> element. The starting point of the glissando may be
    * indicated by either a tstamp, tstamp.ges, tstamp.real or startid attribute. It
    * is a semantic error not to specify a starting point attribute.
    */

class Gliss : public MeiElement {
    public:
        Gliss();
        virtual ~Gliss() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   hairpin ― Indicates continuous dynamics expressed on the score as wedge-shaped
    * graphics, e.g. < and >. The starting point of the hairpin may be indicated by
    * either a tstamp, tstamp.ges, tstamp.real or startid attribute, while the ending
    * point may be recorded by either a dur, dur.ges or endid attribute. It is a
    * semantic error not to specify one starting and one ending type of attribute.
    * Please note that the value of the dur attribute is not a true duration, but
    * rather a time stamp for the end point of the hairpin.
    */

class Hairpin : public MeiElement {
    public:
        Hairpin();
        virtual ~Hairpin() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    HairpinLogMixIn    m_HairpinLog;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   half-measure repeat ― A half-measure repeat in any meter.
    */

class Halfmrpt : public MeiElement {
    public:
        Halfmrpt();
        virtual ~Halfmrpt() {};
        
        
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
        REGISTER_DECLARATION(Halfmrpt);
};


/** \brief   harp pedal ― Harp pedal diagram. The starting point of the harp pedal diagram
    * may be indicated by either a tstamp, tstamp.ges, tstamp.real or startid
    * attribute. It is a semantic error not to specify a starting point attribute.
    */

class Harppedal : public MeiElement {
    public:
        Harppedal();
        virtual ~Harppedal() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    HarppedalLogMixIn    m_HarppedalLog;
    ParticipantidentMixIn    m_Participantident;
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
        REGISTER_DECLARATION(Harppedal);
};


/** \brief   measure rest ― Complete measure rest in any meter (Read, p. 97-98).
    * Automatically-generated numbering of consecutive measures of rest may be
    * controlled via the multi.number attribute on the scoreDef or staffDef elements.
    */

class Mrest : public MeiElement {
    public:
        Mrest();
        virtual ~Mrest() {};
        
        
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
        REGISTER_DECLARATION(Mrest);
};


/** \brief   measure repeat ― An indication that the previous measure should be repeated.
    * The automated numbering of consecutive measures of rest may be controlled via
    * the multi.number attribute on the scoreDef or staffDef elements.
    */

class Mrpt : public MeiElement {
    public:
        Mrpt();
        virtual ~Mrpt() {};
        
        
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
        REGISTER_DECLARATION(Mrpt);
};


/** \brief   2-measure repeat ― An indication that the previous two measures should be
    * repeated.
    */

class Mrpt2 : public MeiElement {
    public:
        Mrpt2();
        virtual ~Mrpt2() {};
        
        
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
        REGISTER_DECLARATION(Mrpt2);
};


/** \brief   measure space ― Complete measure consisting of empty space in any meter. The
    * automated numbering of consecutive measures of space may be controlled via the
    * multi.number attribute on the scoreDef or staffDef elements.
    */

class Mspace : public MeiElement {
    public:
        Mspace();
        virtual ~Mspace() {};
        
        
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
        REGISTER_DECLARATION(Mspace);
};


/** \brief   measure ― "Unit of musical time consisting of a fixed number of note-values of
    * a given type, as determined by the prevailing meter, and delimited in musical
    * notation by two bar lines." (New Harvard Dictionary of Music) In MEI, the
    * measure element is a grouping mechanism for events and control events. It is
    * also a linking element that uses attributes to connect the MEI document to an
    * external electronic object or to another location within the MEI instance.
    */

class Measure : public MeiElement {
    public:
        Measure();
        virtual ~Measure() {};
        
        
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    FacsimileMixIn    m_Facsimile;
    TypedMixIn    m_Typed;
    LinkCommonMixIn    m_LinkCommon;
    ParticipantidentMixIn    m_Participantident;
    LinkExternalMixIn    m_LinkExternal;
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


/** \brief   multi-rest ― Multiple measures of rest compressed into a single symbol,
    * frequently found in performer parts. The num attribute can used to store a
    * number to be rendered along with the note. See Read, p. 102-105.
    */

class Multirest : public MeiElement {
    public:
        Multirest();
        virtual ~Multirest() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TimestampMusicalMixIn    m_TimestampMusical;
    TimestampPerformedMixIn    m_TimestampPerformed;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    NumberedMixIn    m_Numbered;
    MultirestVisMixIn    m_MultirestVis;
    AltsymMixIn    m_Altsym;
    DurationPerformedMixIn    m_DurationPerformed;
    InstrumentidentMixIn    m_Instrumentident;
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    private:
        REGISTER_DECLARATION(Multirest);
};


/** \brief   multi-repeat ― Multiple repeated measures. In modern publishing practice,
    * repeats of more than two measures should be written out using repeat signs. This
    * element, however, is provided for handling non-standard practices often found in
    * manuscript. The num attribute records the number of measures to be repeated.
    */

class Multirpt : public MeiElement {
    public:
        Multirpt();
        virtual ~Multirpt() {};
        
        
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
        REGISTER_DECLARATION(Multirpt);
};


/** \brief   octave ― An indication that a passage should be performed one or more octaves
    * above or below its written pitch. The dis and dis.place attributes record the
    * amount and direction of displacement, respectively. The rend attribute captures
    * the appearance of the continuation line associated with the octave displacement.
    * The starting point of the octave displacement may be indicated by either a
    * tstamp, tstamp.ges, tstamp.real or startid attribute, while the ending point may
    * be recorded by either a dur, dur.ges or endid attribute. It is a semantic error
    * not to specify one starting and one ending type of attribute. Please note that
    * the dur attribute here is not a true duration, but rather a time stamp for the
    * end point of the octave displacement. Also, note that the dur attribute is not
    * required because the octave displacement can be visually instantaneous.
    */

class Octave : public MeiElement {
    public:
        Octave();
        virtual ~Octave() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    OctaveLogMixIn    m_OctaveLog;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   ossia ― An alternate notational version *present in the source being
    * transcribed*. The alternative material often provides a simpler, easier to
    * perform option, while at other times the alternate material provides indications
    * of performance practice, such as ornamentation. Often an ossia is rendered above
    * the main staff on a reduced-size staff. Sometimes the alternate material occurs
    * on the same staff as the primary text, but in a separate layer. In this case,
    * the alternative material is often rendered in small-sized notation.
    */

class Ossia : public MeiElement {
    public:
        Ossia();
        virtual ~Ossia() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    private:
        REGISTER_DECLARATION(Ossia);
};


/** \brief   pedal ― Piano pedal mark (Read, p. 317-318). The starting point of the pedal
    * mark may be indicated by either a tstamp, tstamp.ges, tstamp.real or startid
    * attribute. It is a semantic error not to specify a starting point attribute.
    */

class Pedal : public MeiElement {
    public:
        Pedal();
        virtual ~Pedal() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    PedalLogMixIn    m_PedalLog;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   rehearsal mark ― In an orchestral score and its corresponding parts, a mark
    * indicating a convenient point from which to resume rehearsal after a break. It
    * may also be called a rehearsal figure, or when numbers are used instead of
    * letters, a rehearsal number. See Read, p. 443. <reh> uses a subset of
    * model.textphraseLike.limited.
    */

class Reh : public MeiElement {
    public:
        Reh();
        virtual ~Reh() {};
        
        
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


/** \brief   slur ― Historically, the term "slur" indicated two notes performed legato,
    * while the term "phrase" was used for a "unified melodic idea". Nowadays,
    * however, "slur" often has the same meaning as "phrase" (See Read, p. 265-266),
    * since the visual rendition of the two concepts is the same. MEI provides two
    * distinct elements so that those users wishing to maintain a distinction for
    * historical reasons may do so. If the user does not want to maintain the
    * distinction, then the more generic <slur> element should be employed. The
    * starting point of the slur may be indicated by either a tstamp, tstamp.ges,
    * tstamp.real or startid attribute, while the ending point may be recorded by
    * either a dur, dur.ges or endid attribute. It is a semantic error not to specify
    * one starting and one ending type of attribute. Either place, bulge, or bezier
    * attributes may be used to record the curvature of the slur. The slur and tie
    * elements may be used instead of the slur.* and tie.* attributes provided on
    * chord and note elements when 1) they are required by software, or 2) multiple,
    * alternative slurs are needed. Please note that the dur attribute is not a true
    * duration, but rather a time stamp for the end point of the slur.
    */

class Slur : public MeiElement {
    public:
        Slur();
        virtual ~Slur() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TypedMixIn    m_Typed;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   tie ― An indication that two notes of the same pitch form a single note with
    * their combined rhythmic values. Most often it is rendered as a curved line
    * connecting the two notes. See Read, p. 110-111, 122.
    */

class Tie : public MeiElement {
    public:
        Tie();
        virtual ~Tie() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TypedMixIn    m_Typed;
    ParticipantidentMixIn    m_Participantident;
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


/** \brief   tuplet ― A group of notes with "irregular" (sometimes called "irrational")
    * rhythmic values, for example, three notes in the time normally occupied by two
    * or nine in the time of five. The beam sub-element is allowed so that custom
    * beaming may be indicated, e.g., a septuplet may be divided into a group of three
    * plus a group of four notes. See Read, p. 187-215. The tuplet element may also
    * used for bowed tremolo (Read, p. 394) and double, triple, or flutter tonguing
    * (Read, p. 348-349); that is, for repetition of the same pitch. In the case of
    * irrational durations, such as such as two quarter notes in the time of five 8th
    * notes in a measure of 5/8 time, decimal values may be used in the dur.ges
    * attribute. For example, the dur.ges attribute would take the value "2.5" if the
    * midi.div attribute's value was "1". The num and numbase attributes may be used
    * for explicit labelling of a tuplet, such as, '3' with an 8th-note triplet, '3:2'
    * over a quarter-note triplet, etc. The rendering of the ratio, however, is
    * dependent on the num.format attribute found in the att.vis.tuplet attribute
    * class.
    */

class Tuplet : public MeiElement {
    public:
        Tuplet();
        virtual ~Tuplet() {};
        
        
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


/** \brief   tuplet span ― Alternative element for encoding tuplets, especially useful for
    * tuplets that extend across bar lines. The starting point of the tuplet may be
    * indicated by either a tstamp, tstamp.ges, tstamp.real or startid attribute,
    * while the ending point may be recorded using a dur, dur.ges or endid attribute.
    * It is a semantic error not to specify one starting and one ending type of
    * attribute.
    */

class Tupletspan : public MeiElement {
    public:
        Tupletspan();
        virtual ~Tupletspan() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TupletspanLogMixIn    m_TupletspanLog;
    ParticipantidentMixIn    m_Participantident;
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
        REGISTER_DECLARATION(Tupletspan);
};


}
#endif // CMN_H_
