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
    
#ifndef CMNMIXINS_H_
#define CMNMIXINS_H_

#include "meielement.h"
#include "exceptions.h"
#include "sharedmixins.h"
#include "analysismixins.h"
using namespace std;

/** \brief   Attributes that indicate whether an event lies under a beam
 */
struct BeamedMixIn {

    BeamedMixIn(BaseMeiElement *b);

    string getBeamValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeam() throw (AttributeNotFoundException);
    void setBeam(string _beam);
    bool hasBeam();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes indicating cross-staff beaming
 */
struct BeamedwithMixIn {

    BeamedwithMixIn(BaseMeiElement *b);

    string getBeamWithValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamWith() throw (AttributeNotFoundException);
    void setBeamWith(string _beamwith);
    bool hasBeamWith();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by layerDef, staffDef, and scoreDef to provide default values for
 *           attributes in the logical domain related to beaming
 */
struct BeamingLogMixIn {

    BeamingLogMixIn(BaseMeiElement *b);

    string getBeamGroupValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamGroup() throw (AttributeNotFoundException);
    void setBeamGroup(string _beamgroup);
    bool hasBeamGroup();

    string getBeamRestsValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamRests() throw (AttributeNotFoundException);
    void setBeamRests(string _beamrests);
    bool hasBeamRests();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record the visual rendition of beams
 */
struct BeamrendMixIn {

    BeamrendMixIn(BaseMeiElement *b);

    string getRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(string _rend);
    bool hasRend();

    string getSlopeValue() throw (AttributeNotFoundException);
    MeiAttribute* getSlope() throw (AttributeNotFoundException);
    void setSlope(string _slope);
    bool hasSlope();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that capture information about secondary beaming
 */
struct BeamsecondaryMixIn {

    BeamsecondaryMixIn(BaseMeiElement *b);

    string getBreaksecValue() throw (AttributeNotFoundException);
    MeiAttribute* getBreaksec() throw (AttributeNotFoundException);
    void setBreaksec(string _breaksec);
    bool hasBreaksec();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that indicate how to render staff lines of the measure containing an
 *           element belonging to this attribute class
 */
struct CutoutMixIn {

    CutoutMixIn(BaseMeiElement *b);

    string getCutoutValue() throw (AttributeNotFoundException);
    MeiAttribute* getCutout() throw (AttributeNotFoundException);
    void setCutout(string _cutout);
    bool hasCutout();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that indicate whether to render a repeat symbol or the source
 *           material to which it refers
 */
struct ExpandableMixIn {

    ExpandableMixIn(BaseMeiElement *b);

    string getExpandValue() throw (AttributeNotFoundException);
    MeiAttribute* getExpand() throw (AttributeNotFoundException);
    void setExpand(string _expand);
    bool hasExpand();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that mark a note or chord as a "grace", how it should "steal" time,
 *           and how much time should be allotted to the grace             note/chord.
 */
struct GracedMixIn {

    GracedMixIn(BaseMeiElement *b);

    string getGraceValue() throw (AttributeNotFoundException);
    MeiAttribute* getGrace() throw (AttributeNotFoundException);
    void setGrace(string _grace);
    bool hasGrace();

    string getGraceTimeValue() throw (AttributeNotFoundException);
    MeiAttribute* getGraceTime() throw (AttributeNotFoundException);
    void setGraceTime(string _gracetime);
    bool hasGraceTime();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that indicate the presence of an l.v. (laissez vibrer) marking
 *           attached to a feature
 */
struct LvpresentMixIn {

    LvpresentMixIn(BaseMeiElement *b);

    string getLvValue() throw (AttributeNotFoundException);
    MeiAttribute* getLv() throw (AttributeNotFoundException);
    void setLv(string _lv);
    bool hasLv();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record numbers to be displayed with a feature
 */
struct NumberedMixIn {

    NumberedMixIn(BaseMeiElement *b);

    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(string _num);
    bool hasNum();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record the placement and visibility of numbers that accompany a
 *           bowed tremolo or tuplet
 */
struct NumberplacementMixIn {

    NumberplacementMixIn(BaseMeiElement *b);

    string getNumPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumPlace() throw (AttributeNotFoundException);
    void setNumPlace(string _numplace);
    bool hasNumPlace();

    string getNumVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumVisible() throw (AttributeNotFoundException);
    void setNumVisible(string _numvisible);
    bool hasNumVisible();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe the rendition of slurs
 */
struct SlurrendMixIn {

    SlurrendMixIn(BaseMeiElement *b);

    string getSlurRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getSlurRend() throw (AttributeNotFoundException);
    void setSlurRend(string _slurrend);
    bool hasSlurRend();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe the rendition of ties
 */
struct TierendMixIn {

    TierendMixIn(BaseMeiElement *b);

    string getTieRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getTieRend() throw (AttributeNotFoundException);
    void setTieRend(string _tierend);
    bool hasTieRend();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by scoreDef and staffDef to provide default description of piano pedal
 *           rendition
 */
struct PianopedalsMixIn {

    PianopedalsMixIn(BaseMeiElement *b);

    string getPedalStyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getPedalStyle() throw (AttributeNotFoundException);
    void setPedalStyle(string _pedalstyle);
    bool hasPedalStyle();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes used by scoreDef and staffDef to provide default information about
 *           rehearsal numbers/letters
 */
struct RehearsalMixIn {

    RehearsalMixIn(BaseMeiElement *b);

    string getRehEncloseValue() throw (AttributeNotFoundException);
    MeiAttribute* getRehEnclose() throw (AttributeNotFoundException);
    void setRehEnclose(string _rehenclose);
    bool hasRehEnclose();


    private:
         BaseMeiElement *b;
};

/** \brief   Analytical domain attributes
 */
struct TupletAnlMixIn {

    TupletAnlMixIn(BaseMeiElement *b);

    string getCopyofValue() throw (AttributeNotFoundException);
    MeiAttribute* getCopyof() throw (AttributeNotFoundException);
    void setCopyof(string _copyof);
    bool hasCopyof();

    string getCorrespValue() throw (AttributeNotFoundException);
    MeiAttribute* getCorresp() throw (AttributeNotFoundException);
    void setCorresp(string _corresp);
    bool hasCorresp();

    string getNextValue() throw (AttributeNotFoundException);
    MeiAttribute* getNext() throw (AttributeNotFoundException);
    void setNext(string _next);
    bool hasNext();

    string getPrevValue() throw (AttributeNotFoundException);
    MeiAttribute* getPrev() throw (AttributeNotFoundException);
    void setPrev(string _prev);
    bool hasPrev();

    string getSameasValue() throw (AttributeNotFoundException);
    MeiAttribute* getSameas() throw (AttributeNotFoundException);
    void setSameas(string _sameas);
    bool hasSameas();

    string getSynchValue() throw (AttributeNotFoundException);
    MeiAttribute* getSynch() throw (AttributeNotFoundException);
    void setSynch(string _synch);
    bool hasSynch();

    string getWhenValue() throw (AttributeNotFoundException);
    MeiAttribute* getWhen() throw (AttributeNotFoundException);
    void setWhen(string _when);
    bool hasWhen();


    private:
         BaseMeiElement *b;
};

/** \brief   Gestural domain attributes
 */
struct TupletGesMixIn {

    TupletGesMixIn(BaseMeiElement *b);

    string getDurGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getDurGes() throw (AttributeNotFoundException);
    void setDurGes(string _durges);
    bool hasDurGes();


    private:
         BaseMeiElement *b;
};

/** \brief   Visual domain attributes
 */
struct TupletVisMixIn {

    TupletVisMixIn(BaseMeiElement *b);

    string getBracketPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getBracketPlace() throw (AttributeNotFoundException);
    void setBracketPlace(string _bracketplace);
    bool hasBracketPlace();

    string getBracketVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getBracketVisible() throw (AttributeNotFoundException);
    void setBracketVisible(string _bracketvisible);
    bool hasBracketVisible();

    string getDurVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getDurVisible() throw (AttributeNotFoundException);
    void setDurVisible(string _durvisible);
    bool hasDurVisible();

    string getNumFormatValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumFormat() throw (AttributeNotFoundException);
    void setNumFormat(string _numformat);
    bool hasNumFormat();

    string getNumPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumPlace() throw (AttributeNotFoundException);
    void setNumPlace(string _numplace);
    bool hasNumPlace();

    string getNumVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumVisible() throw (AttributeNotFoundException);
    void setNumVisible(string _numvisible);
    bool hasNumVisible();


    private:
         BaseMeiElement *b;
};

#endif // CMNMIXINS_H_