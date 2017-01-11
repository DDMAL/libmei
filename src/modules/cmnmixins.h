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

#ifndef CMNMIXIN_H_
#define CMNMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class ArpegLogMixIn {
    public:
        explicit ArpegLogMixIn(MeiElement *b);
        virtual ~ArpegLogMixIn();
        /** \brief Describes the direction in which an arpeggio is to be performed.
         */
        MeiAttribute* getOrder();
        void setOrder(std::string _order);
        bool hasOrder();
        void removeOrder();

/* include <ordermixin> */

    private:
        MeiElement *b;
};

class ArpegVisMixIn {
    public:
        explicit ArpegVisMixIn(MeiElement *b);
        virtual ~ArpegVisMixIn();
        /** \brief Indicates if an arrowhead is to be drawn as part of the arpeggiation symbol.
         */
        MeiAttribute* getArrow();
        void setArrow(std::string _arrow);
        bool hasArrow();
        void removeArrow();

/* include <arrowmixin> */

    private:
        MeiElement *b;
};

class BTremLogMixIn {
    public:
        explicit BTremLogMixIn(MeiElement *b);
        virtual ~BTremLogMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class BeamedMixIn {
    public:
        explicit BeamedMixIn(MeiElement *b);
        virtual ~BeamedMixIn();
        /** \brief Indicates that this event is "under a beam".
         */
        MeiAttribute* getBeam();
        void setBeam(std::string _beam);
        bool hasBeam();
        void removeBeam();

/* include <beammixin> */

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

/* include <beam.withmixin> */

    private:
        MeiElement *b;
};

class BeamingLogMixIn {
    public:
        explicit BeamingLogMixIn(MeiElement *b);
        virtual ~BeamingLogMixIn();
        /** \brief Provides an example of how automated beaming (including secondary beams) is to
         *  be performed.
         */
        MeiAttribute* getBeamGroup();
        void setBeamGroup(std::string _beamgroup);
        bool hasBeamGroup();
        void removeBeamGroup();
        /** \brief Indicates whether automatically-drawn beams should include rests shorter than a
         *  quarter note duration.
         */
        MeiAttribute* getBeamRests();
        void setBeamRests(std::string _beamrests);
        bool hasBeamRests();
        void removeBeamRests();

/* include <beam.restsmixin> */

    private:
        MeiElement *b;
};

class BeamrendMixIn {
    public:
        explicit BeamrendMixIn(MeiElement *b);
        virtual ~BeamrendMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Records the slope of the beam.
         */
        MeiAttribute* getSlope();
        void setSlope(std::string _slope);
        bool hasSlope();
        void removeSlope();

/* include <slopemixin> */

    private:
        MeiElement *b;
};

class BeamsecondaryMixIn {
    public:
        explicit BeamsecondaryMixIn(MeiElement *b);
        virtual ~BeamsecondaryMixIn();
        /** \brief Presence of this attribute indicates that the secondary beam should be broken
         *  following this note/chord.
         * 
         *  The value of the attribute records the number of beams which should remain
         *  unbroken.
         */
        MeiAttribute* getBreaksec();
        void setBreaksec(std::string _breaksec);
        bool hasBreaksec();
        void removeBreaksec();

/* include <breaksecmixin> */

    private:
        MeiElement *b;
};

class BeatRptLogMixIn {
    public:
        explicit BeatRptLogMixIn(MeiElement *b);
        virtual ~BeatRptLogMixIn();
        /** \brief Indicates the performed duration represented by the beatRpt symbol.
         */
        MeiAttribute* getBeatDef();
        void setBeatDef(std::string _beatDef);
        bool hasBeatDef();
        void removeBeatDef();

/* include <beatDefmixin> */

    private:
        MeiElement *b;
};

class BeatRptVisMixIn {
    public:
        explicit BeatRptVisMixIn(MeiElement *b);
        virtual ~BeatRptVisMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class BendGesMixIn {
    public:
        explicit BendGesMixIn(MeiElement *b);
        virtual ~BendGesMixIn();
        /** \brief Numeric value capturing a cost.
         * 
         *  Can only be interpreted in combination with the currency attribute.
         */
        MeiAttribute* getAmount();
        void setAmount(std::string _amount);
        bool hasAmount();
        void removeAmount();

/* include <amountmixin> */

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

/* include <cutoutmixin> */

    private:
        MeiElement *b;
};

class ExpandableMixIn {
    public:
        explicit ExpandableMixIn(MeiElement *b);
        virtual ~ExpandableMixIn();
        /** \brief Indicates whether to render a repeat symbol or the source material to which it
         *  refers.
         * 
         *  A value of 'true' renders the source material, while 'false' displays the repeat
         *  symbol.
         */
        MeiAttribute* getExpand();
        void setExpand(std::string _expand);
        bool hasExpand();
        void removeExpand();

/* include <expandmixin> */

    private:
        MeiElement *b;
};

class FTremLogMixIn {
    public:
        explicit FTremLogMixIn(MeiElement *b);
        virtual ~FTremLogMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class FermataVisMixIn {
    public:
        explicit FermataVisMixIn(MeiElement *b);
        virtual ~FermataVisMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Describes a clef's shape.
         */
        MeiAttribute* getShape();
        void setShape(std::string _shape);
        bool hasShape();
        void removeShape();

/* include <shapemixin> */

    private:
        MeiElement *b;
};

class GracedMixIn {
    public:
        explicit GracedMixIn(MeiElement *b);
        virtual ~GracedMixIn();
        /** \brief Marks a note or chord as a "grace" (without a definitive written duration) and
         *  records from which other note/chord it should "steal" time.
         */
        MeiAttribute* getGrace();
        void setGrace(std::string _grace);
        bool hasGrace();
        void removeGrace();
        /** \brief Records the amount of time to be "stolen" from a non-grace note/chord.
         */
        MeiAttribute* getGraceTime();
        void setGraceTime(std::string _gracetime);
        bool hasGraceTime();
        void removeGraceTime();

/* include <grace.timemixin> */

    private:
        MeiElement *b;
};

class HairpinLogMixIn {
    public:
        explicit HairpinLogMixIn(MeiElement *b);
        virtual ~HairpinLogMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Indicates that the hairpin starts from or ends in silence.
         * 
         *  Often rendered as a small circle attached to the closed end of the hairpin. See
         *  Gould, p. 108.
         */
        MeiAttribute* getNiente();
        void setNiente(std::string _niente);
        bool hasNiente();
        void removeNiente();

/* include <nientemixin> */

    private:
        MeiElement *b;
};

class HairpinVisMixIn {
    public:
        explicit HairpinVisMixIn(MeiElement *b);
        virtual ~HairpinVisMixIn();
        /** \brief Specifies the distance between the lines at the open end of a hairpin dynamic
         *  mark.
         */
        MeiAttribute* getOpening();
        void setOpening(std::string _opening);
        bool hasOpening();
        void removeOpening();

/* include <openingmixin> */

    private:
        MeiElement *b;
};

class HarpPedalLogMixIn {
    public:
        explicit HarpPedalLogMixIn(MeiElement *b);
        virtual ~HarpPedalLogMixIn();
        /** \brief Indicates the pedal setting for the harp's C strings.
         */
        MeiAttribute* getC();
        void setC(std::string _c);
        bool hasC();
        void removeC();
        /** \brief Indicates the pedal setting for the harp's D strings.
         */
        MeiAttribute* getD();
        void setD(std::string _d);
        bool hasD();
        void removeD();
        /** \brief Indicates the pedal setting for the harp's E strings.
         */
        MeiAttribute* getE();
        void setE(std::string _e);
        bool hasE();
        void removeE();
        /** \brief Indicates the pedal setting for the harp's F strings.
         */
        MeiAttribute* getF();
        void setF(std::string _f);
        bool hasF();
        void removeF();
        /** \brief Indicates the pedal setting for the harp's G strings.
         */
        MeiAttribute* getG();
        void setG(std::string _g);
        bool hasG();
        void removeG();
        /** \brief Indicates the pedal setting for the harp's A strings.
         */
        MeiAttribute* getA();
        void setA(std::string _a);
        bool hasA();
        void removeA();
        /** \brief Indicates the pedal setting for the harp's B strings.
         */
        MeiAttribute* getB();
        void setB(std::string _b);
        bool hasB();
        void removeB();

/* include <bmixin> */

    private:
        MeiElement *b;
};

class LvpresentMixIn {
    public:
        explicit LvpresentMixIn(MeiElement *b);
        virtual ~LvpresentMixIn();
        /** \brief Indicates the attachment of an l.v.
         * 
         *  (laissez vibrer) sign to this element.
         */
        MeiAttribute* getLv();
        void setLv(std::string _lv);
        bool hasLv();
        void removeLv();

/* include <lvmixin> */

    private:
        MeiElement *b;
};

class MeterSigGrpLogMixIn {
    public:
        explicit MeterSigGrpLogMixIn(MeiElement *b);
        virtual ~MeterSigGrpLogMixIn();
        /** \brief Records the function of an accidental.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class MultiRestVisMixIn {
    public:
        explicit MultiRestVisMixIn(MeiElement *b);
        virtual ~MultiRestVisMixIn();
        /** \brief When the block attribute is used, combinations of the 1, 2, and 4 measure rest
         *  forms (Read, p.
         * 
         *  104) should be rendered instead of the modern form or an alternative symbol.
         */
        MeiAttribute* getBlock();
        void setBlock(std::string _block);
        bool hasBlock();
        void removeBlock();

/* include <blockmixin> */

    private:
        MeiElement *b;
};

class NoteGesCmnMixIn {
    public:
        explicit NoteGesCmnMixIn(MeiElement *b);
        virtual ~NoteGesCmnMixIn();
        /** \brief Indicates that this element participates in a glissando.
         */
        MeiAttribute* getGliss();
        void setGliss(std::string _gliss);
        bool hasGliss();
        void removeGliss();

/* include <glissmixin> */

    private:
        MeiElement *b;
};

class NumberedMixIn {
    public:
        explicit NumberedMixIn(MeiElement *b);
        virtual ~NumberedMixIn();
        /** \brief Along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <nummixin> */

    private:
        MeiElement *b;
};

class NumberplacementMixIn {
    public:
        explicit NumberplacementMixIn(MeiElement *b);
        virtual ~NumberplacementMixIn();
        /** \brief States where the tuplet number will be placed in relation to the note heads.
         */
        MeiAttribute* getNumPlace();
        void setNumPlace(std::string _numplace);
        bool hasNumPlace();
        void removeNumPlace();
        /** \brief Determines if the tuplet number is visible.
         */
        MeiAttribute* getNumVisible();
        void setNumVisible(std::string _numvisible);
        bool hasNumVisible();
        void removeNumVisible();

/* include <num.visiblemixin> */

    private:
        MeiElement *b;
};

class OctaveLogMixIn {
    public:
        explicit OctaveLogMixIn(MeiElement *b);
        virtual ~OctaveLogMixIn();
        /** \brief Indicates whether the octave displacement should be performed simultaneously
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

/* include <collmixin> */

    private:
        MeiElement *b;
};

class PedalLogMixIn {
    public:
        explicit PedalLogMixIn(MeiElement *b);
        virtual ~PedalLogMixIn();
        /** \brief Records the position of the piano damper pedal.
         */
        MeiAttribute* getDir();
        void setDir(std::string _dir);
        bool hasDir();
        void removeDir();

/* include <dirmixin> */

    private:
        MeiElement *b;
};

class PedalVisMixIn {
    public:
        explicit PedalVisMixIn(MeiElement *b);
        virtual ~PedalVisMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class PianopedalsMixIn {
    public:
        explicit PianopedalsMixIn(MeiElement *b);
        virtual ~PianopedalsMixIn();
        /** \brief Determines whether piano pedal marks should be rendered as lines or as terms.
         */
        MeiAttribute* getPedalStyle();
        void setPedalStyle(std::string _pedalstyle);
        bool hasPedalStyle();
        void removePedalStyle();

/* include <pedal.stylemixin> */

    private:
        MeiElement *b;
};

class RehearsalMixIn {
    public:
        explicit RehearsalMixIn(MeiElement *b);
        virtual ~RehearsalMixIn();
        /** \brief Describes the enclosing shape for rehearsal marks.
         */
        MeiAttribute* getRehEnclose();
        void setRehEnclose(std::string _rehenclose);
        bool hasRehEnclose();
        void removeRehEnclose();

/* include <reh.enclosemixin> */

    private:
        MeiElement *b;
};

class ScoreDefVisCmnMixIn {
    public:
        explicit ScoreDefVisCmnMixIn(MeiElement *b);
        virtual ~ScoreDefVisCmnMixIn();
        /** \brief Determines whether to display guitar chord grids.
         */
        MeiAttribute* getGridShow();
        void setGridShow(std::string _gridshow);
        bool hasGridShow();
        void removeGridShow();

/* include <grid.showmixin> */

    private:
        MeiElement *b;
};

class SlurrendMixIn {
    public:
        explicit SlurrendMixIn(MeiElement *b);
        virtual ~SlurrendMixIn();
        /** \brief 
         */
        MeiAttribute* getSlurLform();
        void setSlurLform(std::string _slurlform);
        bool hasSlurLform();
        void removeSlurLform();
        /** \brief 
         */
        MeiAttribute* getSlurLwidth();
        void setSlurLwidth(std::string _slurlwidth);
        bool hasSlurLwidth();
        void removeSlurLwidth();

/* include <slur.lwidthmixin> */

    private:
        MeiElement *b;
};

class StemsCmnMixIn {
    public:
        explicit StemsCmnMixIn(MeiElement *b);
        virtual ~StemsCmnMixIn();
        /** \brief Contains an indication of which staff a note or chord that logically belongs to
         *  the current staff should be visually placed on; that is, the one above or the
         *  one below.
         */
        MeiAttribute* getStemWith();
        void setStemWith(std::string _stemwith);
        bool hasStemWith();
        void removeStemWith();

/* include <stem.withmixin> */

    private:
        MeiElement *b;
};

class TierendMixIn {
    public:
        explicit TierendMixIn(MeiElement *b);
        virtual ~TierendMixIn();
        /** \brief 
         */
        MeiAttribute* getTieLform();
        void setTieLform(std::string _tielform);
        bool hasTieLform();
        void removeTieLform();
        /** \brief 
         */
        MeiAttribute* getTieLwidth();
        void setTieLwidth(std::string _tielwidth);
        bool hasTieLwidth();
        void removeTieLwidth();

/* include <tie.lwidthmixin> */

    private:
        MeiElement *b;
};

class TremmeasuredMixIn {
    public:
        explicit TremmeasuredMixIn(MeiElement *b);
        virtual ~TremmeasuredMixIn();
        /** \brief The performed duration of an individual note in a measured tremolo.
         */
        MeiAttribute* getMeasperf();
        void setMeasperf(std::string _measperf);
        bool hasMeasperf();
        void removeMeasperf();

/* include <measperfmixin> */

    private:
        MeiElement *b;
};

class TupletVisMixIn {
    public:
        explicit TupletVisMixIn(MeiElement *b);
        virtual ~TupletVisMixIn();
        /** \brief Used to state where a tuplet bracket will be placed in relation to the note
         *  heads.
         */
        MeiAttribute* getBracketPlace();
        void setBracketPlace(std::string _bracketplace);
        bool hasBracketPlace();
        void removeBracketPlace();
        /** \brief States whether a bracket should be rendered with a tuplet.
         */
        MeiAttribute* getBracketVisible();
        void setBracketVisible(std::string _bracketvisible);
        bool hasBracketVisible();
        void removeBracketVisible();
        /** \brief Determines if the tuplet duration is visible.
         */
        MeiAttribute* getDurVisible();
        void setDurVisible(std::string _durvisible);
        bool hasDurVisible();
        void removeDurVisible();
        /** \brief Controls how the num:numbase ratio is to be displayed.
         */
        MeiAttribute* getNumFormat();
        void setNumFormat(std::string _numformat);
        bool hasNumFormat();
        void removeNumFormat();

/* include <num.formatmixin> */

    private:
        MeiElement *b;
};
}
#endif  // CMNMIXIN_H_
