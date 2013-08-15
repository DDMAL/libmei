/*
    Copyright (c) 2011-2013 Andrew Hankinson, Alastair Porter, and Others
    
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
/* #include_block */

#include <string>

namespace mei {
class Mei_arpegLogMixIn {
    public:
        explicit Mei_arpegLogMixIn(MeiElement *b);
        virtual ~Mei_arpegLogMixIn();
        /** \brief states the order of the graph, i.e., the number of its nodes.
         */
        MeiAttribute* getOrder();
        void setOrder(std::string _order);
        bool hasOrder();
        void removeOrder();

/* include <ordermixin> */

    private:
        MeiElement *b;
};

class Mei_arpegVisMixIn {
    public:
        explicit Mei_arpegVisMixIn(MeiElement *b);
        virtual ~Mei_arpegVisMixIn();
        /** \brief indicates if an arrowhead is to be drawn as part of the arpeggiation symbol.
         */
        MeiAttribute* getArrow();
        void setArrow(std::string _arrow);
        bool hasArrow();
        void removeArrow();

/* include <arrowmixin> */

    private:
        MeiElement *b;
};

class Mei_bTremLogMixIn {
    public:
        explicit Mei_bTremLogMixIn(MeiElement *b);
        virtual ~Mei_bTremLogMixIn();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class Mei_beamedMixIn {
    public:
        explicit Mei_beamedMixIn(MeiElement *b);
        virtual ~Mei_beamedMixIn();
        /** \brief indicates that this event is "under a beam".
         */
        MeiAttribute* getBeam();
        void setBeam(std::string _beam);
        bool hasBeam();
        void removeBeam();

/* include <beammixin> */

    private:
        MeiElement *b;
};

class Mei_beamedwithMixIn {
    public:
        explicit Mei_beamedwithMixIn(MeiElement *b);
        virtual ~Mei_beamedwithMixIn();
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

class Mei_beamingLogMixIn {
    public:
        explicit Mei_beamingLogMixIn(MeiElement *b);
        virtual ~Mei_beamingLogMixIn();
        /** \brief provides an example of how automated beaming (including secondary beams) is to
         *  be performed.
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

/* include <beam.restsmixin> */

    private:
        MeiElement *b;
};

class Mei_beamrendMixIn {
    public:
        explicit Mei_beamrendMixIn(MeiElement *b);
        virtual ~Mei_beamrendMixIn();
        /** \brief indicates how the element in question was rendered or presented in the source
         *  text.
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

/* include <slopemixin> */

    private:
        MeiElement *b;
};

class Mei_beamsecondaryMixIn {
    public:
        explicit Mei_beamsecondaryMixIn(MeiElement *b);
        virtual ~Mei_beamsecondaryMixIn();
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

/* include <breaksecmixin> */

    private:
        MeiElement *b;
};

class Mei_beatRptVisMixIn {
    public:
        explicit Mei_beatRptVisMixIn(MeiElement *b);
        virtual ~Mei_beatRptVisMixIn();
        /** \brief indicates how the element in question was rendered or presented in the source
         *  text.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

/* include <rendmixin> */

    private:
        MeiElement *b;
};

class Mei_bendGesMixIn {
    public:
        explicit Mei_bendGesMixIn(MeiElement *b);
        virtual ~Mei_bendGesMixIn();
        /** \brief records the amount of detuning.
         * 
         *  The decimal values should be rendered as a fraction (or an integer plus a
         *  fraction) along with the bend symbol.
         */
        MeiAttribute* getAmount();
        void setAmount(std::string _amount);
        bool hasAmount();
        void removeAmount();

/* include <amountmixin> */

    private:
        MeiElement *b;
};

class Mei_cutoutMixIn {
    public:
        explicit Mei_cutoutMixIn(MeiElement *b);
        virtual ~Mei_cutoutMixIn();
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

class Mei_expandableMixIn {
    public:
        explicit Mei_expandableMixIn(MeiElement *b);
        virtual ~Mei_expandableMixIn();
        /** \brief gives an expanded form of information presented more concisely in the dictionary
         */
        MeiAttribute* getExpand();
        void setExpand(std::string _expand);
        bool hasExpand();
        void removeExpand();

/* include <expandmixin> */

    private:
        MeiElement *b;
};

class Mei_fTremLogMixIn {
    public:
        explicit Mei_fTremLogMixIn(MeiElement *b);
        virtual ~Mei_fTremLogMixIn();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class Mei_fermataVisMixIn {
    public:
        explicit Mei_fermataVisMixIn(MeiElement *b);
        virtual ~Mei_fermataVisMixIn();
        /** \brief specifies how quotation marks are indicated within the text.
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

/* include <shapemixin> */

    private:
        MeiElement *b;
};

class Mei_glissVisMixIn {
    public:
        explicit Mei_glissVisMixIn(MeiElement *b);
        virtual ~Mei_glissVisMixIn();
        /** \brief records a text string, such as 'gliss', that accompanies the glissando mark.
         */
        MeiAttribute* getText();
        void setText(std::string _text);
        bool hasText();
        void removeText();

/* include <textmixin> */

    private:
        MeiElement *b;
};

class Mei_gracedMixIn {
    public:
        explicit Mei_gracedMixIn(MeiElement *b);
        virtual ~Mei_gracedMixIn();
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

/* include <grace.timemixin> */

    private:
        MeiElement *b;
};

class Mei_hairpinLogMixIn {
    public:
        explicit Mei_hairpinLogMixIn(MeiElement *b);
        virtual ~Mei_hairpinLogMixIn();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class Mei_hairpinVisMixIn {
    public:
        explicit Mei_hairpinVisMixIn(MeiElement *b);
        virtual ~Mei_hairpinVisMixIn();
        /** \brief specifies the distance between the points of the open end of a hairpin dynamic
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

class Mei_harpPedalLogMixIn {
    public:
        explicit Mei_harpPedalLogMixIn(MeiElement *b);
        virtual ~Mei_harpPedalLogMixIn();
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

/* include <bmixin> */

    private:
        MeiElement *b;
};

class Mei_lvpresentMixIn {
    public:
        explicit Mei_lvpresentMixIn(MeiElement *b);
        virtual ~Mei_lvpresentMixIn();
        /** \brief indicates the attachment of an l.v.
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

class Mei_multiRestVisMixIn {
    public:
        explicit Mei_multiRestVisMixIn(MeiElement *b);
        virtual ~Mei_multiRestVisMixIn();
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

class Mei_noteGesCmnMixIn {
    public:
        explicit Mei_noteGesCmnMixIn(MeiElement *b);
        virtual ~Mei_noteGesCmnMixIn();
        /** \brief indicates that this element participates in a glissando.
         */
        MeiAttribute* getGliss();
        void setGliss(std::string _gliss);
        bool hasGliss();
        void removeGliss();

/* include <glissmixin> */

    private:
        MeiElement *b;
};

class Mei_numberedMixIn {
    public:
        explicit Mei_numberedMixIn(MeiElement *b);
        virtual ~Mei_numberedMixIn();
        /** \brief along with numbase, describes duration as a ratio.
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

class Mei_numberplacementMixIn {
    public:
        explicit Mei_numberplacementMixIn(MeiElement *b);
        virtual ~Mei_numberplacementMixIn();
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

/* include <num.visiblemixin> */

    private:
        MeiElement *b;
};

class Mei_octaveLogMixIn {
    public:
        explicit Mei_octaveLogMixIn(MeiElement *b);
        virtual ~Mei_octaveLogMixIn();
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

/* include <collmixin> */

    private:
        MeiElement *b;
};

class Mei_pedalLogMixIn {
    public:
        explicit Mei_pedalLogMixIn(MeiElement *b);
        virtual ~Mei_pedalLogMixIn();
        /** \brief records the position of the piano damper pedal.
         */
        MeiAttribute* getDir();
        void setDir(std::string _dir);
        bool hasDir();
        void removeDir();

/* include <dirmixin> */

    private:
        MeiElement *b;
};

class Mei_pedalVisMixIn {
    public:
        explicit Mei_pedalVisMixIn(MeiElement *b);
        virtual ~Mei_pedalVisMixIn();
        /** \brief contains an expression in some formal style definition language which defines
         *  the rendering or presentation used for this element in the source text
         */
        MeiAttribute* getStyle();
        void setStyle(std::string _style);
        bool hasStyle();
        void removeStyle();

/* include <stylemixin> */

    private:
        MeiElement *b;
};

class Mei_pianopedalsMixIn {
    public:
        explicit Mei_pianopedalsMixIn(MeiElement *b);
        virtual ~Mei_pianopedalsMixIn();
        /** \brief determines whether piano pedal marks should be rendered as lines or as terms.
         */
        MeiAttribute* getPedalStyle();
        void setPedalStyle(std::string _pedalstyle);
        bool hasPedalStyle();
        void removePedalStyle();

/* include <pedal.stylemixin> */

    private:
        MeiElement *b;
};

class Mei_rehearsalMixIn {
    public:
        explicit Mei_rehearsalMixIn(MeiElement *b);
        virtual ~Mei_rehearsalMixIn();
        /** \brief describes the enclosing shape for rehearsal marks.
         */
        MeiAttribute* getRehEnclose();
        void setRehEnclose(std::string _rehenclose);
        bool hasRehEnclose();
        void removeRehEnclose();

/* include <reh.enclosemixin> */

    private:
        MeiElement *b;
};

class Mei_scoreDefVisCmnMixIn {
    public:
        explicit Mei_scoreDefVisCmnMixIn(MeiElement *b);
        virtual ~Mei_scoreDefVisCmnMixIn();
        /** \brief determines whether to display guitar chord grids.
         */
        MeiAttribute* getGridShow();
        void setGridShow(std::string _gridshow);
        bool hasGridShow();
        void removeGridShow();

/* include <grid.showmixin> */

    private:
        MeiElement *b;
};

class Mei_slurrendMixIn {
    public:
        explicit Mei_slurrendMixIn(MeiElement *b);
        virtual ~Mei_slurrendMixIn();
        /** \brief describes the line style of the slur.
         */
        MeiAttribute* getSlurRend();
        void setSlurRend(std::string _slurrend);
        bool hasSlurRend();
        void removeSlurRend();

/* include <slur.rendmixin> */

    private:
        MeiElement *b;
};

class Mei_stemmedCmnMixIn {
    public:
        explicit Mei_stemmedCmnMixIn(MeiElement *b);
        virtual ~Mei_stemmedCmnMixIn();
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

/* include <stem.withmixin> */

    private:
        MeiElement *b;
};

class Mei_tierendMixIn {
    public:
        explicit Mei_tierendMixIn(MeiElement *b);
        virtual ~Mei_tierendMixIn();
        /** \brief describes the line style of the tie.
         */
        MeiAttribute* getTieRend();
        void setTieRend(std::string _tierend);
        bool hasTieRend();
        void removeTieRend();

/* include <tie.rendmixin> */

    private:
        MeiElement *b;
};

class Mei_tremmeasuredMixIn {
    public:
        explicit Mei_tremmeasuredMixIn(MeiElement *b);
        virtual ~Mei_tremmeasuredMixIn();
        /** \brief the performed duration of an individual note in a measured tremolo.
         */
        MeiAttribute* getMeasperf();
        void setMeasperf(std::string _measperf);
        bool hasMeasperf();
        void removeMeasperf();

/* include <measperfmixin> */

    private:
        MeiElement *b;
};

class Mei_tupletLogMixIn {
    public:
        explicit Mei_tupletLogMixIn(MeiElement *b);
        virtual ~Mei_tupletLogMixIn();
        /** \brief indicates the length of this element in time.
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

/* include <durmixin> */

    private:
        MeiElement *b;
};

class Mei_tupletVisMixIn {
    public:
        explicit Mei_tupletVisMixIn(MeiElement *b);
        virtual ~Mei_tupletVisMixIn();
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

/* include <num.formatmixin> */

    private:
        MeiElement *b;
};

class Mei_tupletSpanLogMixIn {
    public:
        explicit Mei_tupletSpanLogMixIn(MeiElement *b);
        virtual ~Mei_tupletSpanLogMixIn();
        /** \brief indicates the length of this element in time.
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

/* include <durmixin> */

    private:
        MeiElement *b;
};
}
#endif  // CMNMIXIN_H_
