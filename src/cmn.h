/*
    Copyright (c) 2011 Jamie Klassen, Alastair Porter, Mahtab Ghamsari-Esfahani, Andrew Hankinson

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

#include "facsimilemixins.h"
#include "analysismixins.h"
#include "mensuralmixins.h"
#include "sharedmixins.h"
#include "cmnmixins.h"
#include "critappmixins.h"
#include "midimixins.h"
using namespace std;
/** \brief  arpeggiation ― Indicates that the notes of a chord are to be performed
 *          successively rather than simultaneously, usually from lowest to highest.
 *
 * Sometimes called a "roll". The modern symbol is a vertical wavy line preceding          
 *          the chord. When the notes of the chord are to be performed from highest to          
 *          lowest, an arrowhead may be added to the lower end of the line. Even though it          
 *          is redundant, an arrowhead is sometimes added to the upper end of the line for          
 *          the sake of consistency or when the direction of successive arpeggios          
 *          alternates. In music for keyboard instruments, sometimes a distinction is made          
 *          between a single arpeggio in which both hands play successively and simultaneous          
 *          arpeggios in two hands. In the case of the former, multiple values may be          
 *          required in the staff and layer attributes. Arpeggios that do not cross staves,          
 *          but still involve more than one layer require multiple values for the layer          
 *          attribute..
 */
struct Arpeg : public BaseMeiElement{
    Arpeg();
    virtual ~Arpeg() {};

    string getOrderValue() throw (AttributeNotFoundException);

    MeiAttribute* getOrder() throw (AttributeNotFoundException);
    void setOrder(string _order);
    bool hasOrder();

    string getArrowValue() throw (AttributeNotFoundException);

    MeiAttribute* getArrow() throw (AttributeNotFoundException);
    void setArrow(string _arrow);
    bool hasArrow();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    XyMixIn    m_Xy;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Arpeg);
};

/** \brief  beam ― A container for a series of explicitly beamed events that begins and
 *          ends entirely within a measure.
 *
 * For beams that cross the bar line, use the beamSpan element. Secondary beams may          
 *          be broken explicitly using the breaksec attribute on the notes or chords under          
 *          the beam. Automated beaming, as opposed to explicitly marked beams, may be          
 *          indicated for an entire score, part or section by using the beam.group and          
 *          beam.rests attributes on these elements..
 */
struct Beam : public BaseMeiElement{
    Beam();
    virtual ~Beam() {};

    CommonMixIn    m_Common;
    EventMixIn    m_Event;
    BeamedwithMixIn    m_Beamedwith;
    BeamrendMixIn    m_Beamrend;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Beam);
};

/** \brief  beam span ― Alternative element for explicitly encoding beams which extend
 *          across bar lines.
 *
 * The starting point of the beam may be indicated by either a tstamp, tstamp.ges,          
 *          tstamp.real or startid attribute, while the ending point may be recorded by          
 *          either a dur, dur.ges or endid attribute. It is a semantic error not to specify          
 *          one starting and one ending type of attribute..
 */
struct BeamSpan : public BaseMeiElement{
    BeamSpan();
    virtual ~BeamSpan() {};

    CommonMixIn    m_Common;
    DurationMusicalMixIn    m_DurationMusical;
    DurationPerformedMixIn    m_DurationPerformed;
    StartendidMixIn    m_Startendid;
    ControleventMixIn    m_Controlevent;
    BeamedwithMixIn    m_Beamedwith;
    BeamrendMixIn    m_Beamrend;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(BeamSpan);
};

/** \brief  beat repeat ― An indication that material on a preceding beat should be
 *          repeated.
 *
 * It is also used in guitar or rhythm parts to indicate where chord changes occur.          
 *          When these parts require durations longer or shorter than a beat, however, note          
 *          elements with appropriately-shaped note heads should be employed..
 */
struct BeatRpt : public BaseMeiElement{
    BeatRpt();
    virtual ~BeatRpt() {};

    string getRendValue() throw (AttributeNotFoundException);

    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(string _rend);
    bool hasRend();

    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    EventMixIn    m_Event;
    ExpandableMixIn    m_Expandable;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(BeatRpt);
};

/** \brief  bend ― A variation in pitch (often micro-tonal) upwards or downwards during
 *          the course of a note.
 *
 * Typically, the performer attacks the note at "true" pitch, bends the intonation,          
 *          then returns to true pitch. The bend element can also be used for scoop, plop,          
 *          falloff, and doit performance effects. It should *not* be used for l.v. (laissez          
 *          vibrer) indications. Precise performance data that differs from the logical          
 *          events in a measure may be recorded within the bend element. The starting point          
 *          of the bend may be indicated by either a tstamp, tstamp.ges, tstamp.real or          
 *          startid attribute. It is a semantic error not to specify a starting attribute..
 */
struct Bend : public BaseMeiElement{
    Bend();
    virtual ~Bend() {};

    string getAmountValue() throw (AttributeNotFoundException);

    MeiAttribute* getAmount() throw (AttributeNotFoundException);
    void setAmount(string _amount);
    bool hasAmount();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    CurvatureMixIn    m_Curvature;
    CurverendMixIn    m_Curverend;
    XyMixIn    m_Xy;
    Xy2MixIn    m_Xy2;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Bend);
};

/** \brief  breath mark ― A indication of a point at which the performer on an instrument
 *          requiring breath (including the voice) may breathe.
 *
 * It also may indicate a short pause or break for instruments *not* requiring          
 *          breath. Therefore, it often functions as a guide to phrasing. The usual sign for          
 *          the breath mark is a comma; however, other visual forms of the breath mark may          
 *          be indicated using the altsym attribute. The starting point of the breath mark          
 *          may be indicated by either a tstamp, tstamp.ges, tstamp.real or startid          
 *          attribute. It is a semantic error not to specify a starting point attribute..
 */
struct Breath : public BaseMeiElement{
    Breath();
    virtual ~Breath() {};

    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    PlacementMixIn    m_Placement;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Breath);
};

/** \brief  bowed tremolo ― A rapid alternation on a single pitch or chord.
 *
 * This element should also be used for wind double and triple tonguing and for          
 *          flutter tonguing when these are expressed as tremolandi. For alternation between          
 *          a pair of notes or chords, use the fTrem element. The num attribute can be used          
 *          to store a number to be rendered along with a tremolo. The slash attribute          
 *          indicates the number of slashes to be drawn. The number of slashes indicates the          
 *          exact note values in an aural rendition of measured tremolandi, i.e., 4ths or          
 *          8ths=1, 16ths=2, 32nds=3, 64ths=4, 128ths=5, 256ths=6. See Read, p. 393-394. The          
 *          stem modifier (slash or z) must also be explicitly set on the child <note> or          
 *          <chord> element for a complete visual representation. See Read, p. 394, ex.          
 *          23-21, line 5..
 */
struct BTrem : public BaseMeiElement{
    BTrem();
    virtual ~BTrem() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    CommonMixIn    m_Common;
    SlashcountMixIn    m_Slashcount;
    EventMixIn    m_Event;
    NumberedMixIn    m_Numbered;
    NumberplacementMixIn    m_Numberplacement;
    TupletAnlMixIn    m_TupletAnl;
    TupletVisMixIn    m_TupletVis;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(BTrem);
};

/** \brief  fermata ― An indication placed over a note or rest to indicate that it should
 *          be held longer than its written value.
 *
 * May also occur over a bar line to indicate the end of a phrase or section.          
 *          Sometimes called a 'hold' or 'pause'. The <fermata> element is a specialized          
 *          form of, i.e., syntactic sugar for, dir/@type="fermata" with &ferm; or &uferm;          
 *          as its PCDATA content. The shape attribute may be used to record whether the          
 *          fermata is curved or square. Other visual forms of a fermata may be indicated          
 *          via the altsym attribute. The starting point of the fermata may be indicated by          
 *          either a tstamp, tstamp.ges, tstamp.real or startid attribute. It is a semantic          
 *          error not to specify a starting point attribute..
 */
struct Fermata : public BaseMeiElement{
    Fermata();
    virtual ~Fermata() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    string getShapeValue() throw (AttributeNotFoundException);

    MeiAttribute* getShape() throw (AttributeNotFoundException);
    void setShape(string _shape);
    bool hasShape();

    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    PlacementMixIn    m_Placement;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Fermata);
};

/** \brief  fingered tremolo ― A rapid alternation between a pair of notes (or chords or
 *          perhaps between a note and a chord) that are (usually) farther             apart
 *          than a major second.
 *
 * For rapid alternation between notes on the same pitch (bowed tremolo, double          
 *          &amp; triple tonguing, and flutter tonguing) use the <bTrem> element. The slash          
 *          attribute records the number of slashes required — 4ths or 8ths=1, 16ths=2,          
 *          32nds=3, 64ths=4, 128ths=5, 256ths=6..
 */
struct FTrem : public BaseMeiElement{
    FTrem();
    virtual ~FTrem() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    CommonMixIn    m_Common;
    SlashcountMixIn    m_Slashcount;
    EventMixIn    m_Event;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(FTrem);
};

/** \brief  hairpin ― Indicates continuous dynamics expressed on the score as wedge-shaped
 *          graphics, e.
 *
 * g. < and >. The starting point of the hairpin may be indicated by either a          
 *          tstamp, tstamp.ges, tstamp.real or startid attribute, while the ending point may          
 *          be recorded by either a dur, dur.ges or endid attribute. It is a semantic error          
 *          not to specify one starting and one ending type of attribute. Please note that          
 *          the value of the dur attribute is not a true duration, but rather a time stamp          
 *          for the end point of the hairpin..
 */
struct Hairpin : public BaseMeiElement{
    Hairpin();
    virtual ~Hairpin() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    string getOpeningValue() throw (AttributeNotFoundException);

    MeiAttribute* getOpening() throw (AttributeNotFoundException);
    void setOpening(string _opening);
    bool hasOpening();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationTimestampMixIn    m_DurationTimestamp;
    PlacementMixIn    m_Placement;
    XyMixIn    m_Xy;
    Xy2MixIn    m_Xy2;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Hairpin);
};

/** \brief  harp pedal ― Harp pedal diagram.
 *
 * The starting point of the harp pedal diagram may be indicated by either a          
 *          tstamp, tstamp.ges, tstamp.real or startid attribute. It is a semantic error not          
 *          to specify a starting point attribute..
 */
struct HarpPedal : public BaseMeiElement{
    HarpPedal();
    virtual ~HarpPedal() {};

    string getCValue() throw (AttributeNotFoundException);

    MeiAttribute* getC() throw (AttributeNotFoundException);
    void setC(string _c);
    bool hasC();

    string getDValue() throw (AttributeNotFoundException);

    MeiAttribute* getD() throw (AttributeNotFoundException);
    void setD(string _d);
    bool hasD();

    string getEValue() throw (AttributeNotFoundException);

    MeiAttribute* getE() throw (AttributeNotFoundException);
    void setE(string _e);
    bool hasE();

    string getFValue() throw (AttributeNotFoundException);

    MeiAttribute* getF() throw (AttributeNotFoundException);
    void setF(string _f);
    bool hasF();

    string getGValue() throw (AttributeNotFoundException);

    MeiAttribute* getG() throw (AttributeNotFoundException);
    void setG(string _g);
    bool hasG();

    string getAValue() throw (AttributeNotFoundException);

    MeiAttribute* getA() throw (AttributeNotFoundException);
    void setA(string _a);
    bool hasA();

    string getBValue() throw (AttributeNotFoundException);

    MeiAttribute* getB() throw (AttributeNotFoundException);
    void setB(string _b);
    bool hasB();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    PlacementMixIn    m_Placement;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(HarpPedal);
};

/** \brief  glissando ― A continuous or sliding movement from one pitch to another,
 *          usually indicated by a straight or wavy line.
 *
 * Commonly also called a 'slide'. The term 'glissando' is frequently used to          
 *          indicate both the case where distinct intermediate pitches are produced (as on          
 *          the piano) and the case where they are not (as on the trombone), though the          
 *          latter is sometimes referred to as 'portamento'. The visual appearance of the          
 *          indicating line may be recorded in the rend attribute. Precise performance data,          
 *          that is, exact pitches, may be recorded within the <gliss> element. The starting          
 *          point of the glissando may be indicated by either a tstamp, tstamp.ges,          
 *          tstamp.real or startid attribute. It is a semantic error not to specify a          
 *          starting point attribute..
 */
struct Gliss : public BaseMeiElement{
    Gliss();
    virtual ~Gliss() {};

    string getTextValue() throw (AttributeNotFoundException);

    MeiAttribute* getText() throw (AttributeNotFoundException);
    void setText(string _text);
    bool hasText();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    LinerendMixIn    m_Linerend;
    XyMixIn    m_Xy;
    Xy2MixIn    m_Xy2;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Gliss);
};

/** \brief  half-measure repeat ― A half-measure repeat in any meter.
 */
struct HalfmRpt : public BaseMeiElement{
    HalfmRpt();
    virtual ~HalfmRpt() {};

    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    DurationMusicalMixIn    m_DurationMusical;
    VisualoffsetMixIn    m_Visualoffset;
    EventMixIn    m_Event;
    ExpandableMixIn    m_Expandable;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(HalfmRpt);
};

/** \brief  measure ― "Unit of musical time consisting of a fixed number of note-values of
 *          a given type, as determined by the prevailing meter, and             delimited
 *          in musical notation by two bar lines.
 *
 * " (New Harvard Dictionary of Music) In MEI, the measure element is a grouping          
 *          mechanism for events and control events. It is also a linking element that uses          
 *          attributes to connect the MEI document to an external electronic object or to          
 *          another location within the MEI instance..
 */
struct Measure : public BaseMeiElement{
    Measure();
    virtual ~Measure() {};

    string getLeftValue() throw (AttributeNotFoundException);

    MeiAttribute* getLeft() throw (AttributeNotFoundException);
    void setLeft(string _left);
    bool hasLeft();

    string getRightValue() throw (AttributeNotFoundException);

    MeiAttribute* getRight() throw (AttributeNotFoundException);
    void setRight(string _right);
    bool hasRight();

    BarplacementMixIn    m_Barplacement;
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    JoinedMixIn    m_Joined;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    MeasurementMixIn    m_Measurement;
    WidthMixIn    m_Width;
    MeterconformanceBarMixIn    m_MeterconformanceBar;
    TimestampPerformedMixIn    m_TimestampPerformed;
    TypedMixIn    m_Typed;
    LinkInternalMixIn    m_LinkInternal;
    EventMixIn    m_Event;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Measure);
};

/** \brief  measure rest ― Complete measure rest in any meter (Read, p.
 *
 * 97-98). Automatically-generated numbering of consecutive measures of rest may be          
 *          controlled via the multi.number attribute on the scoreDef or staffDef elements..
 */
struct MRest : public BaseMeiElement{
    MRest();
    virtual ~MRest() {};

    AltsymMixIn    m_Altsym;
    CommonMixIn    m_Common;
    DurationMusicalMixIn    m_DurationMusical;
    DurationPerformedMixIn    m_DurationPerformed;
    FermatapresentMixIn    m_Fermatapresent;
    InstrumentidentMixIn    m_Instrumentident;
    RelativesizeMixIn    m_Relativesize;
    VisibilityMixIn    m_Visibility;
    XyMixIn    m_Xy;
    VisualoffsetMixIn    m_Visualoffset;
    EventMixIn    m_Event;
    CutoutMixIn    m_Cutout;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(MRest);
};

/** \brief  measure repeat ― An indication that the previous measure should be repeated.
 *
 * The automated numbering of consecutive measures of rest may be controlled via          
 *          the multi.number attribute on the scoreDef or staffDef elements..
 */
struct MRpt : public BaseMeiElement{
    MRpt();
    virtual ~MRpt() {};

    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    EventMixIn    m_Event;
    ExpandableMixIn    m_Expandable;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(MRpt);
};

/** \brief  2-measure repeat ― An indication that the previous two measures should be
 *          repeated.
 */
struct MRpt2 : public BaseMeiElement{
    MRpt2();
    virtual ~MRpt2() {};

    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    EventMixIn    m_Event;
    ExpandableMixIn    m_Expandable;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(MRpt2);
};

/** \brief  measure space ― Complete measure consisting of empty space in any meter.
 *
 * The automated numbering of consecutive measures of space may be controlled via          
 *          the multi.number attribute on the scoreDef or staffDef elements..
 */
struct MSpace : public BaseMeiElement{
    MSpace();
    virtual ~MSpace() {};

    AltsymMixIn    m_Altsym;
    CommonMixIn    m_Common;
    DurationMusicalMixIn    m_DurationMusical;
    DurationPerformedMixIn    m_DurationPerformed;
    FermatapresentMixIn    m_Fermatapresent;
    InstrumentidentMixIn    m_Instrumentident;
    VisibilityMixIn    m_Visibility;
    XyMixIn    m_Xy;
    EventMixIn    m_Event;
    CutoutMixIn    m_Cutout;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(MSpace);
};

/** \brief  multi-rest ― Multiple measures of rest compressed into a single symbol,
 *          frequently found in performer parts.
 *
 * The num attribute can used to store a number to be rendered along with the note.          
 *          See Read, p. 102-105..
 */
struct MultiRest : public BaseMeiElement{
    MultiRest();
    virtual ~MultiRest() {};

    string getBlockValue() throw (AttributeNotFoundException);

    MeiAttribute* getBlock() throw (AttributeNotFoundException);
    void setBlock(string _block);
    bool hasBlock();

    AltsymMixIn    m_Altsym;
    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    InstrumentidentMixIn    m_Instrumentident;
    EventMixIn    m_Event;
    NumberedMixIn    m_Numbered;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(MultiRest);
};

/** \brief  multi-repeat ― Multiple repeated measures.
 *
 * In modern publishing practice, repeats of more than two measures should be          
 *          written out using repeat signs. This element, however, is provided for handling          
 *          non-standard practices often found in manuscript. The num attribute records the          
 *          number of measures to be repeated..
 */
struct MultiRpt : public BaseMeiElement{
    MultiRpt();
    virtual ~MultiRpt() {};

    AltsymMixIn    m_Altsym;
    CommonMixIn    m_Common;
    EventMixIn    m_Event;
    ExpandableMixIn    m_Expandable;
    NumberedMixIn    m_Numbered;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(MultiRpt);
};

/** \brief  octave ― An indication that a passage should be performed one or more octaves
 *          above or below its written pitch.
 *
 * The dis and dis.place attributes record the amount and direction of          
 *          displacement, respectively. The rend attribute captures the appearance of the          
 *          continuation line associated with the octave displacement. The starting point of          
 *          the octave displacement may be indicated by either a tstamp, tstamp.ges,          
 *          tstamp.real or startid attribute, while the ending point may be recorded by          
 *          either a dur, dur.ges or endid attribute. It is a semantic error not to specify          
 *          one starting and one ending type of attribute. Please note that the dur          
 *          attribute here is not a true duration, but rather a time stamp for the end point          
 *          of the octave displacement. Also, note that the dur attribute is not required          
 *          because the octave displacement can be visually instantaneous..
 */
struct Octave : public BaseMeiElement{
    Octave();
    virtual ~Octave() {};

    string getCollValue() throw (AttributeNotFoundException);

    MeiAttribute* getColl() throw (AttributeNotFoundException);
    void setColl(string _coll);
    bool hasColl();

    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationTimestampMixIn    m_DurationTimestamp;
    LinerendMixIn    m_Linerend;
    OctavedisplacementMixIn    m_Octavedisplacement;
    Visualoffset2HoMixIn    m_Visualoffset2Ho;
    Visualoffset2ToMixIn    m_Visualoffset2To;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Octave);
};

/** \brief  ossia ― An alternate notational version *present in the source being
 *          transcribed*.
 *
 * The alternative material often provides a simpler, easier to perform option,          
 *          while at other times the alternate material provides indications of performance          
 *          practice, such as ornamentation. Often an ossia is rendered above the main staff          
 *          on a reduced-size staff. Sometimes the alternate material occurs on the same          
 *          staff as the primary text, but in a separate layer. In this case, the          
 *          alternative material is often rendered in small-sized notation..
 */
struct Ossia : public BaseMeiElement{
    Ossia();
    virtual ~Ossia() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Ossia);
};

/** \brief  pedal ― Piano pedal mark (Read, p.
 *
 * 317-318). The starting point of the pedal mark may be indicated by either a          
 *          tstamp, tstamp.ges, tstamp.real or startid attribute. It is a semantic error not          
 *          to specify a starting point attribute..
 */
struct Pedal : public BaseMeiElement{
    Pedal();
    virtual ~Pedal() {};

    string getDirValue() throw (AttributeNotFoundException);

    MeiAttribute* getDir() throw (AttributeNotFoundException);
    void setDir(string _dir);
    bool hasDir();

    string getStyleValue() throw (AttributeNotFoundException);

    MeiAttribute* getStyle() throw (AttributeNotFoundException);
    void setStyle(string _style);
    bool hasStyle();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    PlacementMixIn    m_Placement;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Pedal);
};

/** \brief  rehearsal mark ― In an orchestral score and its corresponding parts, a mark
 *          indicating a convenient point from which to resume rehearsal after a
 *          break.
 *
 * It may also be called a rehearsal figure, or when numbers are used instead of          
 *          letters, a rehearsal number. See Read, p. 443. <reh> uses a subset of          
 *          model.textphraseLike.limited..
 */
struct Reh : public BaseMeiElement{
    Reh();
    virtual ~Reh() {};

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    PlacementMixIn    m_Placement;
    StaffidentMixIn    m_Staffident;
    StartidMixIn    m_Startid;
    TimestampMusicalMixIn    m_TimestampMusical;
    TimestampPerformedMixIn    m_TimestampPerformed;
    TypographyMixIn    m_Typography;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    EventMixIn    m_Event;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Reh);
};

/** \brief  slur ― Historically, the term "slur" indicated two notes performed legato,
 *          while the term "phrase" was used for a "unified melodic idea".
 *
 * Nowadays, however, "slur" often has the same meaning as "phrase" (See Read, p.          
 *          265-266), since the visual rendition of the two concepts is the same. MEI          
 *          provides two distinct elements so that those users wishing to maintain a          
 *          distinction for historical reasons may do so. If the user does not want to          
 *          maintain the distinction, then the more generic <slur> element should be          
 *          employed. The starting point of the slur may be indicated by either a tstamp,          
 *          tstamp.ges, tstamp.real or startid attribute, while the ending point may be          
 *          recorded by either a dur, dur.ges or endid attribute. It is a semantic error not          
 *          to specify one starting and one ending type of attribute. Either place, bulge,          
 *          or bezier attributes may be used to record the curvature of the slur. The slur          
 *          and tie elements may be used instead of the slur.* and tie.* attributes provided          
 *          on chord and note elements when 1) they are required by software, or 2)          
 *          multiple, alternative slurs are needed. Please note that the dur attribute is          
 *          not a true duration, but rather a time stamp for the end point of the slur..
 */
struct Slur : public BaseMeiElement{
    Slur();
    virtual ~Slur() {};

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    CurvatureMixIn    m_Curvature;
    CurverendMixIn    m_Curverend;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationTimestampMixIn    m_DurationTimestamp;
    JoinedMixIn    m_Joined;
    TypedMixIn    m_Typed;
    XyMixIn    m_Xy;
    Xy2MixIn    m_Xy2;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Slur);
};

/** \brief  tie ― An indication that two notes of the same pitch form a single note with
 *          their combined rhythmic values.
 *
 * Most often it is rendered as a curved line connecting the two notes. See Read,          
 *          p. 110-111, 122..
 */
struct Tie : public BaseMeiElement{
    Tie();
    virtual ~Tie() {};

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    CurvatureMixIn    m_Curvature;
    CurverendMixIn    m_Curverend;
    DurationTimestampMixIn    m_DurationTimestamp;
    TypedMixIn    m_Typed;
    XyMixIn    m_Xy;
    Xy2MixIn    m_Xy2;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Tie);
};

/** \brief  tuplet ― A group of notes with "irregular" (sometimes called "irrational")
 *          rhythmic values, for example, three notes in the time normally
 *          occupied by two or nine in the time of five.
 *
 * The beam sub-element is allowed so that custom beaming may be indicated, e.g., a          
 *          septuplet may be divided into a group of three plus a group of four notes. See          
 *          Read, p. 187-215. The tuplet element may also used for bowed tremolo (Read, p.          
 *          394) and double, triple, or flutter tonguing (Read, p. 348-349); that is, for          
 *          repetition of the same pitch. In the case of irrational durations, such as such          
 *          as two quarter notes in the time of five 8th notes in a measure of 5/8 time,          
 *          decimal values may be used in the dur.ges attribute. For example, the dur.ges          
 *          attribute would take the value "2.5" if the midi.div attribute's value was "1".          
 *          The num and numbase attributes may be used for explicit labelling of a tuplet,          
 *          such as, '3' with an 8th-note triplet, '3:2' over a quarter-note triplet, etc.          
 *          The rendering of the ratio, however, is dependent on the num.format attribute          
 *          found in the att.vis.tuplet attribute class..
 */
struct Tuplet : public BaseMeiElement{
    Tuplet();
    virtual ~Tuplet() {};

    string getDurValue() throw (AttributeNotFoundException);

    MeiAttribute* getDur() throw (AttributeNotFoundException);
    void setDur(string _dur);
    bool hasDur();

    AugmentdotsMixIn    m_Augmentdots;
    CommonMixIn    m_Common;
    DurationRatioMixIn    m_DurationRatio;
    StartendidMixIn    m_Startendid;
    EventMixIn    m_Event;
    BeamedwithMixIn    m_Beamedwith;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    TupletVisMixIn    m_TupletVis;
    MensurLogMixIn    m_MensurLog;
    MensurationLogMixIn    m_MensurationLog;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Tuplet);
};

/** \brief  tuplet span ― Alternative element for encoding tuplets, especially useful for
 *          tuplets that extend across bar lines.
 *
 * The starting point of the tuplet may be indicated by either a tstamp,          
 *          tstamp.ges, tstamp.real or startid attribute, while the ending point may be          
 *          recorded using a dur, dur.ges or endid attribute. It is a semantic error not to          
 *          specify one starting and one ending type of attribute..
 */
struct TupletSpan : public BaseMeiElement{
    TupletSpan();
    virtual ~TupletSpan() {};

    string getDurValue() throw (AttributeNotFoundException);

    MeiAttribute* getDur() throw (AttributeNotFoundException);
    void setDur(string _dur);
    bool hasDur();

    AugmentdotsMixIn    m_Augmentdots;
    CommonMixIn    m_Common;
    DurationRatioMixIn    m_DurationRatio;
    StartendidMixIn    m_Startendid;
    ControleventMixIn    m_Controlevent;
    BeamedwithMixIn    m_Beamedwith;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    TupletVisMixIn    m_TupletVis;
    MensurLogMixIn    m_MensurLog;
    MensurationLogMixIn    m_MensurationLog;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(TupletSpan);
};

#endif // CMN_H_