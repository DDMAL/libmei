/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
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
class ArpegLogMixIn {
    public:
        explicit ArpegLogMixIn(MeiElement *b);
        virtual ~ArpegLogMixIn();
        /** \brief 
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
        /** \brief 
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
        /** \brief 
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
        /** \brief 
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
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getBeamGroup();
        void setBeamGroup(std::string _beamgroup);
        bool hasBeamGroup();
        void removeBeamGroup();
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getBreaksec();
        void setBreaksec(std::string _breaksec);
        bool hasBreaksec();
        void removeBreaksec();

/* include <breaksecmixin> */

    private:
        MeiElement *b;
};

class BeatRptVisMixIn {
    public:
        explicit BeatRptVisMixIn(MeiElement *b);
        virtual ~BeatRptVisMixIn();
        /** \brief 
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

/* include <rendmixin> */

    private:
        MeiElement *b;
};

class BendGesMixIn {
    public:
        explicit BendGesMixIn(MeiElement *b);
        virtual ~BendGesMixIn();
        /** \brief 
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
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getExpand();
        void setExpand(std::string _expand);
        bool hasExpand();
        void removeExpand();

/* include <expandmixin> */

    private:
        MeiElement *b;
};

class FTremGesMixIn {
    public:
        explicit FTremGesMixIn(MeiElement *b);
        virtual ~FTremGesMixIn();
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief 
         */
        MeiAttribute* getShape();
        void setShape(std::string _shape);
        bool hasShape();
        void removeShape();

/* include <shapemixin> */

    private:
        MeiElement *b;
};

class GlissVisMixIn {
    public:
        explicit GlissVisMixIn(MeiElement *b);
        virtual ~GlissVisMixIn();
        /** \brief 
         */
        MeiAttribute* getText();
        void setText(std::string _text);
        bool hasText();
        void removeText();

/* include <textmixin> */

    private:
        MeiElement *b;
};

class GracedMixIn {
    public:
        explicit GracedMixIn(MeiElement *b);
        virtual ~GracedMixIn();
        /** \brief 
         */
        MeiAttribute* getGrace();
        void setGrace(std::string _grace);
        bool hasGrace();
        void removeGrace();
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class HairpinVisMixIn {
    public:
        explicit HairpinVisMixIn(MeiElement *b);
        virtual ~HairpinVisMixIn();
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getC();
        void setC(std::string _c);
        bool hasC();
        void removeC();
        /** \brief 
         */
        MeiAttribute* getD();
        void setD(std::string _d);
        bool hasD();
        void removeD();
        /** \brief 
         */
        MeiAttribute* getE();
        void setE(std::string _e);
        bool hasE();
        void removeE();
        /** \brief 
         */
        MeiAttribute* getF();
        void setF(std::string _f);
        bool hasF();
        void removeF();
        /** \brief 
         */
        MeiAttribute* getG();
        void setG(std::string _g);
        bool hasG();
        void removeG();
        /** \brief 
         */
        MeiAttribute* getA();
        void setA(std::string _a);
        bool hasA();
        void removeA();
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getLv();
        void setLv(std::string _lv);
        bool hasLv();
        void removeLv();

/* include <lvmixin> */

    private:
        MeiElement *b;
};

class MultiRestVisMixIn {
    public:
        explicit MultiRestVisMixIn(MeiElement *b);
        virtual ~MultiRestVisMixIn();
        /** \brief 
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
        /** \brief 
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
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getNumPlace();
        void setNumPlace(std::string _numplace);
        bool hasNumPlace();
        void removeNumPlace();
        /** \brief 
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
        /** \brief 
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
        /** \brief 
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
        /** \brief 
         */
        MeiAttribute* getStyle();
        void setStyle(std::string _style);
        bool hasStyle();
        void removeStyle();

/* include <stylemixin> */

    private:
        MeiElement *b;
};

class PianopedalsMixIn {
    public:
        explicit PianopedalsMixIn(MeiElement *b);
        virtual ~PianopedalsMixIn();
        /** \brief 
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
        /** \brief 
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
        /** \brief 
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
        MeiAttribute* getSlurRend();
        void setSlurRend(std::string _slurrend);
        bool hasSlurRend();
        void removeSlurRend();

/* include <slur.rendmixin> */

    private:
        MeiElement *b;
};

class StemmedCmnMixIn {
    public:
        explicit StemmedCmnMixIn(MeiElement *b);
        virtual ~StemmedCmnMixIn();
        /** \brief 
         */
        MeiAttribute* getStemMod();
        void setStemMod(std::string _stemmod);
        bool hasStemMod();
        void removeStemMod();
        /** \brief 
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
        MeiAttribute* getTieRend();
        void setTieRend(std::string _tierend);
        bool hasTieRend();
        void removeTieRend();

/* include <tie.rendmixin> */

    private:
        MeiElement *b;
};

class TupletLogMixIn {
    public:
        explicit TupletLogMixIn(MeiElement *b);
        virtual ~TupletLogMixIn();
        /** \brief 
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

/* include <durmixin> */

    private:
        MeiElement *b;
};

class TupletVisMixIn {
    public:
        explicit TupletVisMixIn(MeiElement *b);
        virtual ~TupletVisMixIn();
        /** \brief 
         */
        MeiAttribute* getBracketPlace();
        void setBracketPlace(std::string _bracketplace);
        bool hasBracketPlace();
        void removeBracketPlace();
        /** \brief 
         */
        MeiAttribute* getBracketVisible();
        void setBracketVisible(std::string _bracketvisible);
        bool hasBracketVisible();
        void removeBracketVisible();
        /** \brief 
         */
        MeiAttribute* getDurVisible();
        void setDurVisible(std::string _durvisible);
        bool hasDurVisible();
        void removeDurVisible();
        /** \brief 
         */
        MeiAttribute* getNumFormat();
        void setNumFormat(std::string _numformat);
        bool hasNumFormat();
        void removeNumFormat();

/* include <num.formatmixin> */

    private:
        MeiElement *b;
};

class TupletSpanLogMixIn {
    public:
        explicit TupletSpanLogMixIn(MeiElement *b);
        virtual ~TupletSpanLogMixIn();
        /** \brief 
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
