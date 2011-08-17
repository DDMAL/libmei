
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

#ifndef CMNMIXIN_H_
#define CMNMIXIN_H_

#include "meielement.h"
#include "exceptions.h"



struct ArpegLogMixIn {
    ArpegLogMixIn(BaseMeiElement *b);
    virtual ~ArpegLogMixIn() {};
    
    /** \brief   describes the direction in which an arpeggio is to be performed.
    */

    string getOrderValue() throw (AttributeNotFoundException);
    MeiAttribute* getOrder() throw (AttributeNotFoundException);
    void setOrder(std::string _order);
    bool hasOrder();
    void removeOrder();

    private:
        BaseMeiElement *b;
};


struct ArpegVisMixIn {
    ArpegVisMixIn(BaseMeiElement *b);
    virtual ~ArpegVisMixIn() {};
    
    /** \brief   indicates if an arrowhead is to be drawn as part of the arpeggiation symbol.
    */

    string getArrowValue() throw (AttributeNotFoundException);
    MeiAttribute* getArrow() throw (AttributeNotFoundException);
    void setArrow(std::string _arrow);
    bool hasArrow();
    void removeArrow();

    private:
        BaseMeiElement *b;
};


struct BtremLogMixIn {
    BtremLogMixIn(BaseMeiElement *b);
    virtual ~BtremLogMixIn() {};
    
    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    private:
        BaseMeiElement *b;
};


struct BeamedMixIn {
    BeamedMixIn(BaseMeiElement *b);
    virtual ~BeamedMixIn() {};
    
    /** \brief   indicates that this event is "under a beam".
    */

    string getBeamValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeam() throw (AttributeNotFoundException);
    void setBeam(std::string _beam);
    bool hasBeam();
    void removeBeam();

    private:
        BaseMeiElement *b;
};


struct BeamedwithMixIn {
    BeamedwithMixIn(BaseMeiElement *b);
    virtual ~BeamedwithMixIn() {};
    
    /** \brief   In the case of cross-staff beams, the beam.with attribute is used to indicate
    * which staff the beam is connected to; that is, the staff above or the staff
    * below.
    */

    string getBeamWithValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamWith() throw (AttributeNotFoundException);
    void setBeamWith(std::string _beamwith);
    bool hasBeamWith();
    void removeBeamWith();

    private:
        BaseMeiElement *b;
};


struct BeamingLogMixIn {
    BeamingLogMixIn(BaseMeiElement *b);
    virtual ~BeamingLogMixIn() {};
    
    /** \brief   provides an example of how automated beaming (including secondary beams) is to
    * be performed. It can be used to set a default beaming pattern to be used when no
    * beaming is indicated at the event level. beam.group must contain a comma-
    * separated list of time values that add up to a measure, e.g., in 4/4 time
    * '4,4,4,4' indicates each quarter note worth of shorter notes would be beamed
    * together. Parentheses can be used to indicate sub-groupings of secondary beams.
    * For example, '(4.,4.,4.)' in 9/8 meter indicates one outer beam per measure with
    * secondary beams broken at each dotted quarter duration, while a measure of 16th
    * notes in 4/4 with beam.group equal to '(4,4),(4,4)' will result in a primary
    * beam covering all the notes and secondary beams each group of 4 notes. This
    * beaming "directive" can be overridden by using <beam> elements. If neither
    * <beam> elements or the beam.group attribute is used, then no beaming is
    * rendered. Beaming can be 'turned off' by setting beam.group to an empty string.
    */

    string getBeamGroupValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamGroup() throw (AttributeNotFoundException);
    void setBeamGroup(std::string _beamgroup);
    bool hasBeamGroup();
    void removeBeamGroup();

    /** \brief   indicates whether automatically-drawn beams should include rests shorter than a
    * quarter note duration.
    */

    string getBeamRestsValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamRests() throw (AttributeNotFoundException);
    void setBeamRests(std::string _beamrests);
    bool hasBeamRests();
    void removeBeamRests();

    private:
        BaseMeiElement *b;
};


struct BeamrendMixIn {
    BeamrendMixIn(BaseMeiElement *b);
    virtual ~BeamrendMixIn() {};
    
    /** \brief   describes the line style of the curve.
    */

    string getRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(std::string _rend);
    bool hasRend();
    void removeRend();

    /** \brief   records the slope of the beam.
    */

    string getSlopeValue() throw (AttributeNotFoundException);
    MeiAttribute* getSlope() throw (AttributeNotFoundException);
    void setSlope(std::string _slope);
    bool hasSlope();
    void removeSlope();

    private:
        BaseMeiElement *b;
};


struct BeamsecondaryMixIn {
    BeamsecondaryMixIn(BaseMeiElement *b);
    virtual ~BeamsecondaryMixIn() {};
    
    /** \brief   presence of this attribute indicates that the secondary beam should be broken
    * following this note/chord. The value of the attribute records the number of
    * beams which should remain unbroken.
    */

    string getBreaksecValue() throw (AttributeNotFoundException);
    MeiAttribute* getBreaksec() throw (AttributeNotFoundException);
    void setBreaksec(std::string _breaksec);
    bool hasBreaksec();
    void removeBreaksec();

    private:
        BaseMeiElement *b;
};


struct BeatrptVisMixIn {
    BeatrptVisMixIn(BaseMeiElement *b);
    virtual ~BeatrptVisMixIn() {};
    
    /** \brief   describes the line style of the curve.
    */

    string getRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(std::string _rend);
    bool hasRend();
    void removeRend();

    private:
        BaseMeiElement *b;
};


struct BendGesMixIn {
    BendGesMixIn(BaseMeiElement *b);
    virtual ~BendGesMixIn() {};
    
    /** \brief   records the amount of detuning. The decimal values should be rendered as a
    * fraction (or an integer plus a fraction) along with the bend symbol.
    */

    string getAmountValue() throw (AttributeNotFoundException);
    MeiAttribute* getAmount() throw (AttributeNotFoundException);
    void setAmount(std::string _amount);
    bool hasAmount();
    void removeAmount();

    private:
        BaseMeiElement *b;
};


struct CutoutMixIn {
    CutoutMixIn(BaseMeiElement *b);
    virtual ~CutoutMixIn() {};
    
    /** \brief   "Cut-out" style indicated for this measure.
    */

    string getCutoutValue() throw (AttributeNotFoundException);
    MeiAttribute* getCutout() throw (AttributeNotFoundException);
    void setCutout(std::string _cutout);
    bool hasCutout();
    void removeCutout();

    private:
        BaseMeiElement *b;
};


struct ExpandableMixIn {
    ExpandableMixIn(BaseMeiElement *b);
    virtual ~ExpandableMixIn() {};
    
    /** \brief   indicates whether to render a repeat symbol or the source material to which it
    * refers. A value of 'true' renders the source material, while 'false' displays
    * the repeat symbol.
    */

    string getExpandValue() throw (AttributeNotFoundException);
    MeiAttribute* getExpand() throw (AttributeNotFoundException);
    void setExpand(std::string _expand);
    bool hasExpand();
    void removeExpand();

    private:
        BaseMeiElement *b;
};


struct FtremGesMixIn {
    FtremGesMixIn(BaseMeiElement *b);
    virtual ~FtremGesMixIn() {};
    
    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    private:
        BaseMeiElement *b;
};


struct FermataVisMixIn {
    FermataVisMixIn(BaseMeiElement *b);
    virtual ~FermataVisMixIn() {};
    
    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    /** \brief   describes a clef's shape.
    */

    string getShapeValue() throw (AttributeNotFoundException);
    MeiAttribute* getShape() throw (AttributeNotFoundException);
    void setShape(std::string _shape);
    bool hasShape();
    void removeShape();

    private:
        BaseMeiElement *b;
};


struct GlissVisMixIn {
    GlissVisMixIn(BaseMeiElement *b);
    virtual ~GlissVisMixIn() {};
    
    /** \brief   records a text string, such as 'gliss', that accompanies the glissando mark.
    */

    string getTextValue() throw (AttributeNotFoundException);
    MeiAttribute* getText() throw (AttributeNotFoundException);
    void setText(std::string _text);
    bool hasText();
    void removeText();

    private:
        BaseMeiElement *b;
};


struct GracedMixIn {
    GracedMixIn(BaseMeiElement *b);
    virtual ~GracedMixIn() {};
    
    /** \brief   marks a note or chord as a "grace" (without a definitive written duration) and
    * records from which other note/chord it should "steal" time.
    */

    string getGraceValue() throw (AttributeNotFoundException);
    MeiAttribute* getGrace() throw (AttributeNotFoundException);
    void setGrace(std::string _grace);
    bool hasGrace();
    void removeGrace();

    /** \brief   records the amount of time to be "stolen" from a non-grace note/chord.
    */

    string getGraceTimeValue() throw (AttributeNotFoundException);
    MeiAttribute* getGraceTime() throw (AttributeNotFoundException);
    void setGraceTime(std::string _gracetime);
    bool hasGraceTime();
    void removeGraceTime();

    private:
        BaseMeiElement *b;
};


struct HairpinLogMixIn {
    HairpinLogMixIn(BaseMeiElement *b);
    virtual ~HairpinLogMixIn() {};
    
    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    private:
        BaseMeiElement *b;
};


struct HairpinVisMixIn {
    HairpinVisMixIn(BaseMeiElement *b);
    virtual ~HairpinVisMixIn() {};
    
    /** \brief   specifies the distance between the points of the open end of a hairpin dynamic
    * mark.
    */

    string getOpeningValue() throw (AttributeNotFoundException);
    MeiAttribute* getOpening() throw (AttributeNotFoundException);
    void setOpening(std::string _opening);
    bool hasOpening();
    void removeOpening();

    private:
        BaseMeiElement *b;
};


struct HarppedalLogMixIn {
    HarppedalLogMixIn(BaseMeiElement *b);
    virtual ~HarppedalLogMixIn() {};
    
    /** \brief   indicates the pedal setting for the harp's C strings.
    */

    string getCValue() throw (AttributeNotFoundException);
    MeiAttribute* getC() throw (AttributeNotFoundException);
    void setC(std::string _c);
    bool hasC();
    void removeC();

    /** \brief   indicates the pedal setting for the harp's D strings.
    */

    string getDValue() throw (AttributeNotFoundException);
    MeiAttribute* getD() throw (AttributeNotFoundException);
    void setD(std::string _d);
    bool hasD();
    void removeD();

    /** \brief   indicates the pedal setting for the harp's E strings.
    */

    string getEValue() throw (AttributeNotFoundException);
    MeiAttribute* getE() throw (AttributeNotFoundException);
    void setE(std::string _e);
    bool hasE();
    void removeE();

    /** \brief   indicates the pedal setting for the harp's F strings.
    */

    string getFValue() throw (AttributeNotFoundException);
    MeiAttribute* getF() throw (AttributeNotFoundException);
    void setF(std::string _f);
    bool hasF();
    void removeF();

    /** \brief   indicates the pedal setting for the harp's G strings.
    */

    string getGValue() throw (AttributeNotFoundException);
    MeiAttribute* getG() throw (AttributeNotFoundException);
    void setG(std::string _g);
    bool hasG();
    void removeG();

    /** \brief   indicates the pedal setting for the harp's A strings.
    */

    string getAValue() throw (AttributeNotFoundException);
    MeiAttribute* getA() throw (AttributeNotFoundException);
    void setA(std::string _a);
    bool hasA();
    void removeA();

    /** \brief   indicates the pedal setting for the harp's B strings.
    */

    string getBValue() throw (AttributeNotFoundException);
    MeiAttribute* getB() throw (AttributeNotFoundException);
    void setB(std::string _b);
    bool hasB();
    void removeB();

    private:
        BaseMeiElement *b;
};


struct LvpresentMixIn {
    LvpresentMixIn(BaseMeiElement *b);
    virtual ~LvpresentMixIn() {};
    
    /** \brief   indicates the attachment of an l.v. (laissez vibrer) sign to this element.
    */

    string getLvValue() throw (AttributeNotFoundException);
    MeiAttribute* getLv() throw (AttributeNotFoundException);
    void setLv(std::string _lv);
    bool hasLv();
    void removeLv();

    private:
        BaseMeiElement *b;
};


struct MultirestVisMixIn {
    MultirestVisMixIn(BaseMeiElement *b);
    virtual ~MultirestVisMixIn() {};
    
    /** \brief   When the block attribute is used, combinations of the 1, 2, and 4 measure rest
    * forms (Read, p. 104) should be rendered instead of the modern form or an
    * alternative symbol.
    */

    string getBlockValue() throw (AttributeNotFoundException);
    MeiAttribute* getBlock() throw (AttributeNotFoundException);
    void setBlock(std::string _block);
    bool hasBlock();
    void removeBlock();

    private:
        BaseMeiElement *b;
};


struct NoteGesCmnMixIn {
    NoteGesCmnMixIn(BaseMeiElement *b);
    virtual ~NoteGesCmnMixIn() {};
    
    /** \brief   indicates that this element participates in a glissando.
    */

    string getGlissValue() throw (AttributeNotFoundException);
    MeiAttribute* getGliss() throw (AttributeNotFoundException);
    void setGliss(std::string _gliss);
    bool hasGliss();
    void removeGliss();

    private:
        BaseMeiElement *b;
};


struct NumberedMixIn {
    NumberedMixIn(BaseMeiElement *b);
    virtual ~NumberedMixIn() {};
    
    /** \brief   along with numbase, describes duration as a ratio. num is the first value in the
    * ratio, while numbase is the second.
    */

    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(std::string _num);
    bool hasNum();
    void removeNum();

    private:
        BaseMeiElement *b;
};


struct NumberplacementMixIn {
    NumberplacementMixIn(BaseMeiElement *b);
    virtual ~NumberplacementMixIn() {};
    
    /** \brief   states where the tuplet number will be placed in relation to the note heads.
    */

    string getNumPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumPlace() throw (AttributeNotFoundException);
    void setNumPlace(std::string _numplace);
    bool hasNumPlace();
    void removeNumPlace();

    /** \brief   determines if the tuplet number is visible.
    */

    string getNumVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumVisible() throw (AttributeNotFoundException);
    void setNumVisible(std::string _numvisible);
    bool hasNumVisible();
    void removeNumVisible();

    private:
        BaseMeiElement *b;
};


struct OctaveLogMixIn {
    OctaveLogMixIn(BaseMeiElement *b);
    virtual ~OctaveLogMixIn() {};
    
    /** \brief   indicates whether the octave displacement should be performed simultaneously
    * with the written notes, i.e., "coll' ottava". Unlike other octave signs which
    * are indicated by broken lines, coll' ottava typically uses an unbroken line or a
    * series of longer broken lines, ending with a short vertical stroke. See Read, p.
    * 47-48.
    */

    string getCollValue() throw (AttributeNotFoundException);
    MeiAttribute* getColl() throw (AttributeNotFoundException);
    void setColl(std::string _coll);
    bool hasColl();
    void removeColl();

    private:
        BaseMeiElement *b;
};


struct PedalLogMixIn {
    PedalLogMixIn(BaseMeiElement *b);
    virtual ~PedalLogMixIn() {};
    
    /** \brief   records the position of the piano damper pedal.
    */

    string getDirValue() throw (AttributeNotFoundException);
    MeiAttribute* getDir() throw (AttributeNotFoundException);
    void setDir(std::string _dir);
    bool hasDir();
    void removeDir();

    private:
        BaseMeiElement *b;
};


struct PedalVisMixIn {
    PedalVisMixIn(BaseMeiElement *b);
    virtual ~PedalVisMixIn() {};
    
    /** \brief   determines whether piano pedal marks should be rendered as lines or as terms.
    */

    string getStyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getStyle() throw (AttributeNotFoundException);
    void setStyle(std::string _style);
    bool hasStyle();
    void removeStyle();

    private:
        BaseMeiElement *b;
};


struct PianopedalsMixIn {
    PianopedalsMixIn(BaseMeiElement *b);
    virtual ~PianopedalsMixIn() {};
    
    /** \brief   determines whether piano pedal marks should be rendered as lines or as terms.
    */

    string getPedalStyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getPedalStyle() throw (AttributeNotFoundException);
    void setPedalStyle(std::string _pedalstyle);
    bool hasPedalStyle();
    void removePedalStyle();

    private:
        BaseMeiElement *b;
};


struct RehearsalMixIn {
    RehearsalMixIn(BaseMeiElement *b);
    virtual ~RehearsalMixIn() {};
    
    /** \brief   describes the enclosing shape for rehearsal marks.
    */

    string getRehEncloseValue() throw (AttributeNotFoundException);
    MeiAttribute* getRehEnclose() throw (AttributeNotFoundException);
    void setRehEnclose(std::string _rehenclose);
    bool hasRehEnclose();
    void removeRehEnclose();

    private:
        BaseMeiElement *b;
};


struct ScoredefVisCmnMixIn {
    ScoredefVisCmnMixIn(BaseMeiElement *b);
    virtual ~ScoredefVisCmnMixIn() {};
    
    /** \brief   determines whether to display guitar chord grids.
    */

    string getGridShowValue() throw (AttributeNotFoundException);
    MeiAttribute* getGridShow() throw (AttributeNotFoundException);
    void setGridShow(std::string _gridshow);
    bool hasGridShow();
    void removeGridShow();

    private:
        BaseMeiElement *b;
};


struct SlurrendMixIn {
    SlurrendMixIn(BaseMeiElement *b);
    virtual ~SlurrendMixIn() {};
    
    /** \brief   describes the line style of the slur.
    */

    string getSlurRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getSlurRend() throw (AttributeNotFoundException);
    void setSlurRend(std::string _slurrend);
    bool hasSlurRend();
    void removeSlurRend();

    private:
        BaseMeiElement *b;
};


struct StemmedCmnMixIn {
    StemmedCmnMixIn(BaseMeiElement *b);
    virtual ~StemmedCmnMixIn() {};
    
    /** \brief   encodes any stem "modifiers"; that is, symbols rendered on the stem, such as
    * tremolo or Sprechstimme indicators.
    */

    string getStemModValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemMod() throw (AttributeNotFoundException);
    void setStemMod(std::string _stemmod);
    bool hasStemMod();
    void removeStemMod();

    /** \brief   contains an indication of which staff a note or chord that logically belongs to
    * the current staff should be visually placed on; that is, the one above or the
    * one below.
    */

    string getStemWithValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemWith() throw (AttributeNotFoundException);
    void setStemWith(std::string _stemwith);
    bool hasStemWith();
    void removeStemWith();

    private:
        BaseMeiElement *b;
};


struct TierendMixIn {
    TierendMixIn(BaseMeiElement *b);
    virtual ~TierendMixIn() {};
    
    /** \brief   describes the line style of the tie
    */

    string getTieRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getTieRend() throw (AttributeNotFoundException);
    void setTieRend(std::string _tierend);
    bool hasTieRend();
    void removeTieRend();

    private:
        BaseMeiElement *b;
};


struct TupletLogMixIn {
    TupletLogMixIn(BaseMeiElement *b);
    virtual ~TupletLogMixIn() {};
    
    /** \brief   records the duration of a feature using the relative durational values provided
    * by the data.DURATION datatype.
    */

    string getDurValue() throw (AttributeNotFoundException);
    MeiAttribute* getDur() throw (AttributeNotFoundException);
    void setDur(std::string _dur);
    bool hasDur();
    void removeDur();

    private:
        BaseMeiElement *b;
};


struct TupletVisMixIn {
    TupletVisMixIn(BaseMeiElement *b);
    virtual ~TupletVisMixIn() {};
    
    /** \brief   used to state where a tuplet bracket will be placed in relation to the note
    * heads.
    */

    string getBracketPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getBracketPlace() throw (AttributeNotFoundException);
    void setBracketPlace(std::string _bracketplace);
    bool hasBracketPlace();
    void removeBracketPlace();

    /** \brief   states whether a bracket should be rendered with a tuplet.
    */

    string getBracketVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getBracketVisible() throw (AttributeNotFoundException);
    void setBracketVisible(std::string _bracketvisible);
    bool hasBracketVisible();
    void removeBracketVisible();

    /** \brief   determines if the tuplet duration is visible.
    */

    string getDurVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getDurVisible() throw (AttributeNotFoundException);
    void setDurVisible(std::string _durvisible);
    bool hasDurVisible();
    void removeDurVisible();

    /** \brief   controls how the num:numbase ratio is to be displayed.
    */

    string getNumFormatValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumFormat() throw (AttributeNotFoundException);
    void setNumFormat(std::string _numformat);
    bool hasNumFormat();
    void removeNumFormat();

    private:
        BaseMeiElement *b;
};


struct TupletspanLogMixIn {
    TupletspanLogMixIn(BaseMeiElement *b);
    virtual ~TupletspanLogMixIn() {};
    
    /** \brief   records the duration of a feature using the relative durational values provided
    * by the data.DURATION datatype.
    */

    string getDurValue() throw (AttributeNotFoundException);
    MeiAttribute* getDur() throw (AttributeNotFoundException);
    void setDur(std::string _dur);
    bool hasDur();
    void removeDur();

    private:
        BaseMeiElement *b;
};


#endif // CMNMIXIN_H_
