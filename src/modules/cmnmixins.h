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
#include "meinamespace.h"
#include "exceptions.h"
#include <string>

namespace mei {
class ArpegLogMixIn {
    public:
        explicit ArpegLogMixIn(MeiElement *b);
        virtual ~ArpegLogMixIn();
        /** \brief describes the direction in which an arpeggio is to be performed.
         */
        MeiAttribute* getOrder();
        void setOrder(std::string _order);
        bool hasOrder();
        void removeOrder();

    private:
        MeiElement *b;
};

class ArpegVisMixIn {
    public:
        explicit ArpegVisMixIn(MeiElement *b);
        virtual ~ArpegVisMixIn();
        /** \brief indicates if an arrowhead is to be drawn as part of the arpeggiation symbol.
         */
        MeiAttribute* getArrow();
        void setArrow(std::string _arrow);
        bool hasArrow();
        void removeArrow();

    private:
        MeiElement *b;
};

class BtremLogMixIn {
    public:
        explicit BtremLogMixIn(MeiElement *b);
        virtual ~BtremLogMixIn();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

    private:
        MeiElement *b;
};

class BeamedMixIn {
    public:
        explicit BeamedMixIn(MeiElement *b);
        virtual ~BeamedMixIn();
        /** \brief indicates that this event is "under a beam".
         */
        MeiAttribute* getBeam();
        void setBeam(std::string _beam);
        bool hasBeam();
        void removeBeam();

    private:
        MeiElement *b;
};

class BeamedwithMixIn {
    public:
        explicit BeamedwithMixIn(MeiElement *b);
        virtual ~BeamedwithMixIn();
        /** \brief In the case of cross-staff beams, the beam.with attribute is used to indicate
         *  which staff the beam is connected to; that is, the staff above or the staff
         *  below.
         */
        MeiAttribute* getBeamWith();
        void setBeamWith(std::string _beamwith);
        bool hasBeamWith();
        void removeBeamWith();

    private:
        MeiElement *b;
};

class BeamingLogMixIn {
    public:
        explicit BeamingLogMixIn(MeiElement *b);
        virtual ~BeamingLogMixIn();
        /** \brief provides an example of how automated beaming (including secondary beams) is to
         *  be performed.
         * 
         *  It can be used to set a default beaming pattern to be used when no beaming is
         *  indicated at the event level. beam.group must contain a comma-separated list of
         *  time values that add up to a measure, e.g., in 4/4 time '4,4,4,4' indicates each
         *  quarter note worth of shorter notes would be beamed together. Parentheses can be
         *  used to indicate sub-groupings of secondary beams. For example, '(4.,4.,4.)' in
         *  9/8 meter indicates one outer beam per measure with secondary beams broken at
         *  each dotted quarter duration, while a measure of 16th notes in 4/4 with
         *  beam.group equal to '(4,4),(4,4)' will result in a primary beam covering all the
         *  notes and secondary beams each group of 4 notes. This beaming "directive" can be
         *  overridden by using <beam> elements. If neither <beam> elements or the
         *  beam.group attribute is used, then no beaming is rendered. Beaming can be
         *  'turned off' by setting beam.group to an empty string.
         */
        MeiAttribute* getBeamGroup();
        void setBeamGroup(std::string _beamgroup);
        bool hasBeamGroup();
        void removeBeamGroup();
        /** \brief indicates whether automatically-drawn beams should include rests shorter than a
         *  quarter note duration.
         */
        MeiAttribute* getBeamRests();
        void setBeamRests(std::string _beamrests);
        bool hasBeamRests();
        void removeBeamRests();

    private:
        MeiElement *b;
};

class BeamrendMixIn {
    public:
        explicit BeamrendMixIn(MeiElement *b);
        virtual ~BeamrendMixIn();
        /** \brief describes the line style of the curve.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();
        /** \brief records the slope of the beam.
         */
        MeiAttribute* getSlope();
        void setSlope(std::string _slope);
        bool hasSlope();
        void removeSlope();

    private:
        MeiElement *b;
};

class BeamsecondaryMixIn {
    public:
        explicit BeamsecondaryMixIn(MeiElement *b);
        virtual ~BeamsecondaryMixIn();
        /** \brief presence of this attribute indicates that the secondary beam should be broken
         *  following this note/chord.
         * 
         *  The value of the attribute records the number of beams which should remain
         *  unbroken.
         */
        MeiAttribute* getBreaksec();
        void setBreaksec(std::string _breaksec);
        bool hasBreaksec();
        void removeBreaksec();

    private:
        MeiElement *b;
};

class BeatrptVisMixIn {
    public:
        explicit BeatrptVisMixIn(MeiElement *b);
        virtual ~BeatrptVisMixIn();
        /** \brief describes the line style of the curve.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

    private:
        MeiElement *b;
};

class BendGesMixIn {
    public:
        explicit BendGesMixIn(MeiElement *b);
        virtual ~BendGesMixIn();
        /** \brief records the amount of detuning.
         * 
         *  The decimal values should be rendered as a fraction (or an integer plus a
         *  fraction) along with the bend symbol.
         */
        MeiAttribute* getAmount();
        void setAmount(std::string _amount);
        bool hasAmount();
        void removeAmount();

    private:
        MeiElement *b;
};

class CutoutMixIn {
    public:
        explicit CutoutMixIn(MeiElement *b);
        virtual ~CutoutMixIn();
        /** \brief "Cut-out" style indicated for this measure.
         */
        MeiAttribute* getCutout();
        void setCutout(std::string _cutout);
        bool hasCutout();
        void removeCutout();

    private:
        MeiElement *b;
};

class ExpandableMixIn {
    public:
        explicit ExpandableMixIn(MeiElement *b);
        virtual ~ExpandableMixIn();
        /** \brief indicates whether to render a repeat symbol or the source material to which it
         *  refers.
         * 
         *  A value of 'true' renders the source material, while 'false' displays the repeat
         *  symbol.
         */
        MeiAttribute* getExpand();
        void setExpand(std::string _expand);
        bool hasExpand();
        void removeExpand();

    private:
        MeiElement *b;
};

class FtremGesMixIn {
    public:
        explicit FtremGesMixIn(MeiElement *b);
        virtual ~FtremGesMixIn();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

    private:
        MeiElement *b;
};

class FermataVisMixIn {
    public:
        explicit FermataVisMixIn(MeiElement *b);
        virtual ~FermataVisMixIn();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief describes a clef's shape.
         */
        MeiAttribute* getShape();
        void setShape(std::string _shape);
        bool hasShape();
        void removeShape();

    private:
        MeiElement *b;
};

class GlissVisMixIn {
    public:
        explicit GlissVisMixIn(MeiElement *b);
        virtual ~GlissVisMixIn();
        /** \brief records a text string, such as 'gliss', that accompanies the glissando mark.
         */
        MeiAttribute* getText();
        void setText(std::string _text);
        bool hasText();
        void removeText();

    private:
        MeiElement *b;
};

class GracedMixIn {
    public:
        explicit GracedMixIn(MeiElement *b);
        virtual ~GracedMixIn();
        /** \brief marks a note or chord as a "grace" (without a definitive written duration) and
         *  records from which other note/chord it should "steal" time.
         */
        MeiAttribute* getGrace();
        void setGrace(std::string _grace);
        bool hasGrace();
        void removeGrace();
        /** \brief records the amount of time to be "stolen" from a non-grace note/chord.
         */
        MeiAttribute* getGraceTime();
        void setGraceTime(std::string _gracetime);
        bool hasGraceTime();
        void removeGraceTime();

    private:
        MeiElement *b;
};

class HairpinLogMixIn {
    public:
        explicit HairpinLogMixIn(MeiElement *b);
        virtual ~HairpinLogMixIn();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

    private:
        MeiElement *b;
};

class HairpinVisMixIn {
    public:
        explicit HairpinVisMixIn(MeiElement *b);
        virtual ~HairpinVisMixIn();
        /** \brief specifies the distance between the points of the open end of a hairpin dynamic
         *  mark.
         */
        MeiAttribute* getOpening();
        void setOpening(std::string _opening);
        bool hasOpening();
        void removeOpening();

    private:
        MeiElement *b;
};

class HarppedalLogMixIn {
    public:
        explicit HarppedalLogMixIn(MeiElement *b);
        virtual ~HarppedalLogMixIn();
        /** \brief indicates the pedal setting for the harp's C strings.
         */
        MeiAttribute* getC();
        void setC(std::string _c);
        bool hasC();
        void removeC();
        /** \brief indicates the pedal setting for the harp's D strings.
         */
        MeiAttribute* getD();
        void setD(std::string _d);
        bool hasD();
        void removeD();
        /** \brief indicates the pedal setting for the harp's E strings.
         */
        MeiAttribute* getE();
        void setE(std::string _e);
        bool hasE();
        void removeE();
        /** \brief indicates the pedal setting for the harp's F strings.
         */
        MeiAttribute* getF();
        void setF(std::string _f);
        bool hasF();
        void removeF();
        /** \brief indicates the pedal setting for the harp's G strings.
         */
        MeiAttribute* getG();
        void setG(std::string _g);
        bool hasG();
        void removeG();
        /** \brief indicates the pedal setting for the harp's A strings.
         */
        MeiAttribute* getA();
        void setA(std::string _a);
        bool hasA();
        void removeA();
        /** \brief indicates the pedal setting for the harp's B strings.
         */
        MeiAttribute* getB();
        void setB(std::string _b);
        bool hasB();
        void removeB();

    private:
        MeiElement *b;
};

class LvpresentMixIn {
    public:
        explicit LvpresentMixIn(MeiElement *b);
        virtual ~LvpresentMixIn();
        /** \brief indicates the attachment of an l.v.
         * 
         *  (laissez vibrer) sign to this element.
         */
        MeiAttribute* getLv();
        void setLv(std::string _lv);
        bool hasLv();
        void removeLv();

    private:
        MeiElement *b;
};

class MultirestVisMixIn {
    public:
        explicit MultirestVisMixIn(MeiElement *b);
        virtual ~MultirestVisMixIn();
        /** \brief When the block attribute is used, combinations of the 1, 2, and 4 measure rest
         *  forms (Read, p.
         * 
         *  104) should be rendered instead of the modern form or an alternative symbol.
         */
        MeiAttribute* getBlock();
        void setBlock(std::string _block);
        bool hasBlock();
        void removeBlock();

    private:
        MeiElement *b;
};

class NoteGesCmnMixIn {
    public:
        explicit NoteGesCmnMixIn(MeiElement *b);
        virtual ~NoteGesCmnMixIn();
        /** \brief indicates that this element participates in a glissando.
         */
        MeiAttribute* getGliss();
        void setGliss(std::string _gliss);
        bool hasGliss();
        void removeGliss();

    private:
        MeiElement *b;
};

class NumberedMixIn {
    public:
        explicit NumberedMixIn(MeiElement *b);
        virtual ~NumberedMixIn();
        /** \brief along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

    private:
        MeiElement *b;
};

class NumberplacementMixIn {
    public:
        explicit NumberplacementMixIn(MeiElement *b);
        virtual ~NumberplacementMixIn();
        /** \brief states where the tuplet number will be placed in relation to the note heads.
         */
        MeiAttribute* getNumPlace();
        void setNumPlace(std::string _numplace);
        bool hasNumPlace();
        void removeNumPlace();
        /** \brief determines if the tuplet number is visible.
         */
        MeiAttribute* getNumVisible();
        void setNumVisible(std::string _numvisible);
        bool hasNumVisible();
        void removeNumVisible();

    private:
        MeiElement *b;
};

class OctaveLogMixIn {
    public:
        explicit OctaveLogMixIn(MeiElement *b);
        virtual ~OctaveLogMixIn();
        /** \brief indicates whether the octave displacement should be performed simultaneously
         *  with the written notes, i.e., "coll' ottava".
         * 
         *  Unlike other octave signs which are indicated by broken lines, coll' ottava
         *  typically uses an unbroken line or a series of longer broken lines, ending with
         *  a short vertical stroke. See Read, p. 47-48.
         */
        MeiAttribute* getColl();
        void setColl(std::string _coll);
        bool hasColl();
        void removeColl();

    private:
        MeiElement *b;
};

class PedalLogMixIn {
    public:
        explicit PedalLogMixIn(MeiElement *b);
        virtual ~PedalLogMixIn();
        /** \brief records the position of the piano damper pedal.
         */
        MeiAttribute* getDir();
        void setDir(std::string _dir);
        bool hasDir();
        void removeDir();

    private:
        MeiElement *b;
};

class PedalVisMixIn {
    public:
        explicit PedalVisMixIn(MeiElement *b);
        virtual ~PedalVisMixIn();
        /** \brief determines whether piano pedal marks should be rendered as lines or as terms.
         */
        MeiAttribute* getStyle();
        void setStyle(std::string _style);
        bool hasStyle();
        void removeStyle();

    private:
        MeiElement *b;
};

class PianopedalsMixIn {
    public:
        explicit PianopedalsMixIn(MeiElement *b);
        virtual ~PianopedalsMixIn();
        /** \brief determines whether piano pedal marks should be rendered as lines or as terms.
         */
        MeiAttribute* getPedalStyle();
        void setPedalStyle(std::string _pedalstyle);
        bool hasPedalStyle();
        void removePedalStyle();

    private:
        MeiElement *b;
};

class RehearsalMixIn {
    public:
        explicit RehearsalMixIn(MeiElement *b);
        virtual ~RehearsalMixIn();
        /** \brief describes the enclosing shape for rehearsal marks.
         */
        MeiAttribute* getRehEnclose();
        void setRehEnclose(std::string _rehenclose);
        bool hasRehEnclose();
        void removeRehEnclose();

    private:
        MeiElement *b;
};

class ScoredefVisCmnMixIn {
    public:
        explicit ScoredefVisCmnMixIn(MeiElement *b);
        virtual ~ScoredefVisCmnMixIn();
        /** \brief determines whether to display guitar chord grids.
         */
        MeiAttribute* getGridShow();
        void setGridShow(std::string _gridshow);
        bool hasGridShow();
        void removeGridShow();

    private:
        MeiElement *b;
};

class SlurrendMixIn {
    public:
        explicit SlurrendMixIn(MeiElement *b);
        virtual ~SlurrendMixIn();
        /** \brief describes the line style of the slur.
         */
        MeiAttribute* getSlurRend();
        void setSlurRend(std::string _slurrend);
        bool hasSlurRend();
        void removeSlurRend();

    private:
        MeiElement *b;
};

class StemmedCmnMixIn {
    public:
        explicit StemmedCmnMixIn(MeiElement *b);
        virtual ~StemmedCmnMixIn();
        /** \brief encodes any stem "modifiers"; that is, symbols rendered on the stem, such as
         *  tremolo or Sprechstimme indicators.
         */
        MeiAttribute* getStemMod();
        void setStemMod(std::string _stemmod);
        bool hasStemMod();
        void removeStemMod();
        /** \brief contains an indication of which staff a note or chord that logically belongs to
         *  the current staff should be visually placed on; that is, the one above or the
         *  one below.
         */
        MeiAttribute* getStemWith();
        void setStemWith(std::string _stemwith);
        bool hasStemWith();
        void removeStemWith();

    private:
        MeiElement *b;
};

class TierendMixIn {
    public:
        explicit TierendMixIn(MeiElement *b);
        virtual ~TierendMixIn();
        /** \brief describes the line style of the tie
         */
        MeiAttribute* getTieRend();
        void setTieRend(std::string _tierend);
        bool hasTieRend();
        void removeTieRend();

    private:
        MeiElement *b;
};

class TupletLogMixIn {
    public:
        explicit TupletLogMixIn(MeiElement *b);
        virtual ~TupletLogMixIn();
        /** \brief records the duration of a feature using the relative durational values provided
         *  by the data.DURATION datatype.
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

    private:
        MeiElement *b;
};

class TupletVisMixIn {
    public:
        explicit TupletVisMixIn(MeiElement *b);
        virtual ~TupletVisMixIn();
        /** \brief used to state where a tuplet bracket will be placed in relation to the note
         *  heads.
         */
        MeiAttribute* getBracketPlace();
        void setBracketPlace(std::string _bracketplace);
        bool hasBracketPlace();
        void removeBracketPlace();
        /** \brief states whether a bracket should be rendered with a tuplet.
         */
        MeiAttribute* getBracketVisible();
        void setBracketVisible(std::string _bracketvisible);
        bool hasBracketVisible();
        void removeBracketVisible();
        /** \brief determines if the tuplet duration is visible.
         */
        MeiAttribute* getDurVisible();
        void setDurVisible(std::string _durvisible);
        bool hasDurVisible();
        void removeDurVisible();
        /** \brief controls how the num:numbase ratio is to be displayed.
         */
        MeiAttribute* getNumFormat();
        void setNumFormat(std::string _numformat);
        bool hasNumFormat();
        void removeNumFormat();

    private:
        MeiElement *b;
};

class TupletspanLogMixIn {
    public:
        explicit TupletspanLogMixIn(MeiElement *b);
        virtual ~TupletspanLogMixIn();
        /** \brief records the duration of a feature using the relative durational values provided
         *  by the data.DURATION datatype.
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

    private:
        MeiElement *b;
};
}
#endif  // CMNMIXIN_H_
