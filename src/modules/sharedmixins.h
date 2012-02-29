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

#ifndef SHAREDMIXIN_H_
#define SHAREDMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AccidLogMixIn {
    public:
        explicit AccidLogMixIn(MeiElement *b);
        virtual ~AccidLogMixIn();
        /** \brief 
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class AccidVisMixIn {
    public:
        explicit AccidVisMixIn(MeiElement *b);
        virtual ~AccidVisMixIn();
        /** \brief 
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

/* include <placemixin> */

    private:
        MeiElement *b;
};

class AccidentalMixIn {
    public:
        explicit AccidentalMixIn(MeiElement *b);
        virtual ~AccidentalMixIn();
        /** \brief 
         */
        MeiAttribute* getAccid();
        void setAccid(std::string _accid);
        bool hasAccid();
        void removeAccid();

/* include <accidmixin> */

    private:
        MeiElement *b;
};

class AccidentalPerformedMixIn {
    public:
        explicit AccidentalPerformedMixIn(MeiElement *b);
        virtual ~AccidentalPerformedMixIn();
        /** \brief 
         */
        MeiAttribute* getAccidGes();
        void setAccidGes(std::string _accidges);
        bool hasAccidGes();
        void removeAccidGes();

/* include <accid.gesmixin> */

    private:
        MeiElement *b;
};

class AltsymMixIn {
    public:
        explicit AltsymMixIn(MeiElement *b);
        virtual ~AltsymMixIn();
        /** \brief 
         */
        MeiAttribute* getAltsym();
        void setAltsym(std::string _altsym);
        bool hasAltsym();
        void removeAltsym();

/* include <altsymmixin> */

    private:
        MeiElement *b;
};

class ArticulationMixIn {
    public:
        explicit ArticulationMixIn(MeiElement *b);
        virtual ~ArticulationMixIn();
        /** \brief 
         */
        MeiAttribute* getArtic();
        void setArtic(std::string _artic);
        bool hasArtic();
        void removeArtic();

/* include <articmixin> */

    private:
        MeiElement *b;
};

class ArticulationPerformedMixIn {
    public:
        explicit ArticulationPerformedMixIn(MeiElement *b);
        virtual ~ArticulationPerformedMixIn();
        /** \brief 
         */
        MeiAttribute* getArticGes();
        void setArticGes(std::string _articges);
        bool hasArticGes();
        void removeArticGes();

/* include <artic.gesmixin> */

    private:
        MeiElement *b;
};

class AugmentdotsMixIn {
    public:
        explicit AugmentdotsMixIn(MeiElement *b);
        virtual ~AugmentdotsMixIn();
        /** \brief 
         */
        MeiAttribute* getDots();
        void setDots(std::string _dots);
        bool hasDots();
        void removeDots();

/* include <dotsmixin> */

    private:
        MeiElement *b;
};

class AuthorizedMixIn {
    public:
        explicit AuthorizedMixIn(MeiElement *b);
        virtual ~AuthorizedMixIn();
        /** \brief 
         */
        MeiAttribute* getAuthority();
        void setAuthority(std::string _authority);
        bool hasAuthority();
        void removeAuthority();
        /** \brief 
         */
        MeiAttribute* getAuthURI();
        void setAuthURI(std::string _authURI);
        bool hasAuthURI();
        void removeAuthURI();

/* include <authURImixin> */

    private:
        MeiElement *b;
};

class BarLineLogMixIn {
    public:
        explicit BarLineLogMixIn(MeiElement *b);
        virtual ~BarLineLogMixIn();
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

class BarplacementMixIn {
    public:
        explicit BarplacementMixIn(MeiElement *b);
        virtual ~BarplacementMixIn();
        /** \brief 
         */
        MeiAttribute* getBarplace();
        void setBarplace(std::string _barplace);
        bool hasBarplace();
        void removeBarplace();
        /** \brief 
         */
        MeiAttribute* getTaktplace();
        void setTaktplace(std::string _taktplace);
        bool hasTaktplace();
        void removeTaktplace();

/* include <taktplacemixin> */

    private:
        MeiElement *b;
};

class BeamingVisMixIn {
    public:
        explicit BeamingVisMixIn(MeiElement *b);
        virtual ~BeamingVisMixIn();
        /** \brief 
         */
        MeiAttribute* getBeamRend();
        void setBeamRend(std::string _beamrend);
        bool hasBeamRend();
        void removeBeamRend();
        /** \brief 
         */
        MeiAttribute* getBeamSlope();
        void setBeamSlope(std::string _beamslope);
        bool hasBeamSlope();
        void removeBeamSlope();

/* include <beam.slopemixin> */

    private:
        MeiElement *b;
};

class BiblMixIn {
    public:
        explicit BiblMixIn(MeiElement *b);
        virtual ~BiblMixIn();
        /** \brief 
         */
        MeiAttribute* getAnalog();
        void setAnalog(std::string _analog);
        bool hasAnalog();
        void removeAnalog();

/* include <analogmixin> */

    private:
        MeiElement *b;
};

class CalendaredMixIn {
    public:
        explicit CalendaredMixIn(MeiElement *b);
        virtual ~CalendaredMixIn();
        /** \brief 
         */
        MeiAttribute* getCalendar();
        void setCalendar(std::string _calendar);
        bool hasCalendar();
        void removeCalendar();

/* include <calendarmixin> */

    private:
        MeiElement *b;
};

class CanonicalMixIn {
    public:
        explicit CanonicalMixIn(MeiElement *b);
        virtual ~CanonicalMixIn();
        /** \brief 
         */
        MeiAttribute* getDbkey();
        void setDbkey(std::string _dbkey);
        bool hasDbkey();
        void removeDbkey();

/* include <dbkeymixin> */

    private:
        MeiElement *b;
};

class ChordVisMixIn {
    public:
        explicit ChordVisMixIn(MeiElement *b);
        virtual ~ChordVisMixIn();
        /** \brief 
         */
        MeiAttribute* getCluster();
        void setCluster(std::string _cluster);
        bool hasCluster();
        void removeCluster();

/* include <clustermixin> */

    private:
        MeiElement *b;
};

class ClefLogMixIn {
    public:
        explicit ClefLogMixIn(MeiElement *b);
        virtual ~ClefLogMixIn();
        /** \brief 
         */
        MeiAttribute* getCautionary();
        void setCautionary(std::string _cautionary);
        bool hasCautionary();
        void removeCautionary();

/* include <cautionarymixin> */

    private:
        MeiElement *b;
};

class CleffingLogMixIn {
    public:
        explicit CleffingLogMixIn(MeiElement *b);
        virtual ~CleffingLogMixIn();
        /** \brief 
         */
        MeiAttribute* getClefShape();
        void setClefShape(std::string _clefshape);
        bool hasClefShape();
        void removeClefShape();
        /** \brief 
         */
        MeiAttribute* getClefLine();
        void setClefLine(std::string _clefline);
        bool hasClefLine();
        void removeClefLine();
        /** \brief 
         */
        MeiAttribute* getClefDis();
        void setClefDis(std::string _clefdis);
        bool hasClefDis();
        void removeClefDis();
        /** \brief 
         */
        MeiAttribute* getClefDisPlace();
        void setClefDisPlace(std::string _clefdisplace);
        bool hasClefDisPlace();
        void removeClefDisPlace();

/* include <clef.dis.placemixin> */

    private:
        MeiElement *b;
};

class CleffingVisMixIn {
    public:
        explicit CleffingVisMixIn(MeiElement *b);
        virtual ~CleffingVisMixIn();
        /** \brief 
         */
        MeiAttribute* getClefColor();
        void setClefColor(std::string _clefcolor);
        bool hasClefColor();
        void removeClefColor();
        /** \brief 
         */
        MeiAttribute* getClefVisible();
        void setClefVisible(std::string _clefvisible);
        bool hasClefVisible();
        void removeClefVisible();

/* include <clef.visiblemixin> */

    private:
        MeiElement *b;
};

class ClefshapeMixIn {
    public:
        explicit ClefshapeMixIn(MeiElement *b);
        virtual ~ClefshapeMixIn();
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

class ColorMixIn {
    public:
        explicit ColorMixIn(MeiElement *b);
        virtual ~ColorMixIn();
        /** \brief 
         */
        MeiAttribute* getColor();
        void setColor(std::string _color);
        bool hasColor();
        void removeColor();

/* include <colormixin> */

    private:
        MeiElement *b;
};

class ColorationMixIn {
    public:
        explicit ColorationMixIn(MeiElement *b);
        virtual ~ColorationMixIn();
        /** \brief 
         */
        MeiAttribute* getColored();
        void setColored(std::string _colored);
        bool hasColored();
        void removeColored();

/* include <coloredmixin> */

    private:
        MeiElement *b;
};

class CommonMixIn {
    public:
        explicit CommonMixIn(MeiElement *b);
        virtual ~CommonMixIn();
        /** \brief 
         */
        MeiAttribute* getLabel();
        void setLabel(std::string _label);
        bool hasLabel();
        void removeLabel();
        /** \brief 
         */
        MeiAttribute* getN();
        void setN(std::string _n);
        bool hasN();
        void removeN();
        /** \brief 
         */
        MeiAttribute* getBase();
        void setBase(std::string _base);
        bool hasBase();
        void removeBase();

/* include <basemixin> */

    private:
        MeiElement *b;
};

class CoordinatedMixIn {
    public:
        explicit CoordinatedMixIn(MeiElement *b);
        virtual ~CoordinatedMixIn();
        /** \brief 
         */
        MeiAttribute* getUlx();
        void setUlx(std::string _ulx);
        bool hasUlx();
        void removeUlx();
        /** \brief 
         */
        MeiAttribute* getUly();
        void setUly(std::string _uly);
        bool hasUly();
        void removeUly();
        /** \brief 
         */
        MeiAttribute* getLrx();
        void setLrx(std::string _lrx);
        bool hasLrx();
        void removeLrx();
        /** \brief 
         */
        MeiAttribute* getLry();
        void setLry(std::string _lry);
        bool hasLry();
        void removeLry();

/* include <lrymixin> */

    private:
        MeiElement *b;
};

class CurvatureMixIn {
    public:
        explicit CurvatureMixIn(MeiElement *b);
        virtual ~CurvatureMixIn();
        /** \brief 
         */
        MeiAttribute* getBezier();
        void setBezier(std::string _bezier);
        bool hasBezier();
        void removeBezier();
        /** \brief 
         */
        MeiAttribute* getBulge();
        void setBulge(std::string _bulge);
        bool hasBulge();
        void removeBulge();
        /** \brief 
         */
        MeiAttribute* getCurvedir();
        void setCurvedir(std::string _curvedir);
        bool hasCurvedir();
        void removeCurvedir();

/* include <curvedirmixin> */

    private:
        MeiElement *b;
};

class CurverendMixIn {
    public:
        explicit CurverendMixIn(MeiElement *b);
        virtual ~CurverendMixIn();
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

class CustosLogMixIn {
    public:
        explicit CustosLogMixIn(MeiElement *b);
        virtual ~CustosLogMixIn();
        /** \brief 
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <targetmixin> */

    private:
        MeiElement *b;
};

class DatableMixIn {
    public:
        explicit DatableMixIn(MeiElement *b);
        virtual ~DatableMixIn();
        /** \brief 
         */
        MeiAttribute* getEnddate();
        void setEnddate(std::string _enddate);
        bool hasEnddate();
        void removeEnddate();
        /** \brief 
         */
        MeiAttribute* getNotafter();
        void setNotafter(std::string _notafter);
        bool hasNotafter();
        void removeNotafter();
        /** \brief 
         */
        MeiAttribute* getNotbefore();
        void setNotbefore(std::string _notbefore);
        bool hasNotbefore();
        void removeNotbefore();
        /** \brief 
         */
        MeiAttribute* getStartdate();
        void setStartdate(std::string _startdate);
        bool hasStartdate();
        void removeStartdate();

/* include <startdatemixin> */

    private:
        MeiElement *b;
};

class DatapointingMixIn {
    public:
        explicit DatapointingMixIn(MeiElement *b);
        virtual ~DatapointingMixIn();
        /** \brief 
         */
        MeiAttribute* getData();
        void setData(std::string _data);
        bool hasData();
        void removeData();

/* include <datamixin> */

    private:
        MeiElement *b;
};

class DeclaringMixIn {
    public:
        explicit DeclaringMixIn(MeiElement *b);
        virtual ~DeclaringMixIn();
        /** \brief 
         */
        MeiAttribute* getDecls();
        void setDecls(std::string _decls);
        bool hasDecls();
        void removeDecls();

/* include <declsmixin> */

    private:
        MeiElement *b;
};

class DistancesMixIn {
    public:
        explicit DistancesMixIn(MeiElement *b);
        virtual ~DistancesMixIn();
        /** \brief 
         */
        MeiAttribute* getDynamDist();
        void setDynamDist(std::string _dynamdist);
        bool hasDynamDist();
        void removeDynamDist();
        /** \brief 
         */
        MeiAttribute* getHarmDist();
        void setHarmDist(std::string _harmdist);
        bool hasHarmDist();
        void removeHarmDist();
        /** \brief 
         */
        MeiAttribute* getTextDist();
        void setTextDist(std::string _textdist);
        bool hasTextDist();
        void removeTextDist();

/* include <text.distmixin> */

    private:
        MeiElement *b;
};

class DotLogMixIn {
    public:
        explicit DotLogMixIn(MeiElement *b);
        virtual ~DotLogMixIn();
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

class DurationDefaultMixIn {
    public:
        explicit DurationDefaultMixIn(MeiElement *b);
        virtual ~DurationDefaultMixIn();
        /** \brief 
         */
        MeiAttribute* getDurDefault();
        void setDurDefault(std::string _durdefault);
        bool hasDurDefault();
        void removeDurDefault();

/* include <dur.defaultmixin> */

    private:
        MeiElement *b;
};

class DurationMusicalMixIn {
    public:
        explicit DurationMusicalMixIn(MeiElement *b);
        virtual ~DurationMusicalMixIn();
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

class DurationPerformedMixIn {
    public:
        explicit DurationPerformedMixIn(MeiElement *b);
        virtual ~DurationPerformedMixIn();
        /** \brief 
         */
        MeiAttribute* getDurGes();
        void setDurGes(std::string _durges);
        bool hasDurGes();
        void removeDurGes();

/* include <dur.gesmixin> */

    private:
        MeiElement *b;
};

class DurationRatioMixIn {
    public:
        explicit DurationRatioMixIn(MeiElement *b);
        virtual ~DurationRatioMixIn();
        /** \brief 
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();
        /** \brief 
         */
        MeiAttribute* getNumbase();
        void setNumbase(std::string _numbase);
        bool hasNumbase();
        void removeNumbase();

/* include <numbasemixin> */

    private:
        MeiElement *b;
};

class DurationTimestampMixIn {
    public:
        explicit DurationTimestampMixIn(MeiElement *b);
        virtual ~DurationTimestampMixIn();
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

class EnclosingcharsMixIn {
    public:
        explicit EnclosingcharsMixIn(MeiElement *b);
        virtual ~EnclosingcharsMixIn();
        /** \brief 
         */
        MeiAttribute* getEnclose();
        void setEnclose(std::string _enclose);
        bool hasEnclose();
        void removeEnclose();

/* include <enclosemixin> */

    private:
        MeiElement *b;
};

class FermatapresentMixIn {
    public:
        explicit FermatapresentMixIn(MeiElement *b);
        virtual ~FermatapresentMixIn();
        /** \brief 
         */
        MeiAttribute* getFermata();
        void setFermata(std::string _fermata);
        bool hasFermata();
        void removeFermata();

/* include <fermatamixin> */

    private:
        MeiElement *b;
};

class HandidentMixIn {
    public:
        explicit HandidentMixIn(MeiElement *b);
        virtual ~HandidentMixIn();
        /** \brief 
         */
        MeiAttribute* getHand();
        void setHand(std::string _hand);
        bool hasHand();
        void removeHand();

/* include <handmixin> */

    private:
        MeiElement *b;
};

class HorizontalalignMixIn {
    public:
        explicit HorizontalalignMixIn(MeiElement *b);
        virtual ~HorizontalalignMixIn();
        /** \brief 
         */
        MeiAttribute* getHalign();
        void setHalign(std::string _halign);
        bool hasHalign();
        void removeHalign();

/* include <halignmixin> */

    private:
        MeiElement *b;
};

class InstrumentidentMixIn {
    public:
        explicit InstrumentidentMixIn(MeiElement *b);
        virtual ~InstrumentidentMixIn();
        /** \brief 
         */
        MeiAttribute* getInstr();
        void setInstr(std::string _instr);
        bool hasInstr();
        void removeInstr();

/* include <instrmixin> */

    private:
        MeiElement *b;
};

class InternetmediaMixIn {
    public:
        explicit InternetmediaMixIn(MeiElement *b);
        virtual ~InternetmediaMixIn();
        /** \brief 
         */
        MeiAttribute* getMimetype();
        void setMimetype(std::string _mimetype);
        bool hasMimetype();
        void removeMimetype();

/* include <mimetypemixin> */

    private:
        MeiElement *b;
};

class JoinedMixIn {
    public:
        explicit JoinedMixIn(MeiElement *b);
        virtual ~JoinedMixIn();
        /** \brief 
         */
        MeiAttribute* getJoin();
        void setJoin(std::string _join);
        bool hasJoin();
        void removeJoin();

/* include <joinmixin> */

    private:
        MeiElement *b;
};

class KeySigsLogMixIn {
    public:
        explicit KeySigsLogMixIn(MeiElement *b);
        virtual ~KeySigsLogMixIn();
        /** \brief 
         */
        MeiAttribute* getKeyAccid();
        void setKeyAccid(std::string _keyaccid);
        bool hasKeyAccid();
        void removeKeyAccid();
        /** \brief 
         */
        MeiAttribute* getKeyMode();
        void setKeyMode(std::string _keymode);
        bool hasKeyMode();
        void removeKeyMode();
        /** \brief 
         */
        MeiAttribute* getKeyPname();
        void setKeyPname(std::string _keypname);
        bool hasKeyPname();
        void removeKeyPname();
        /** \brief 
         */
        MeiAttribute* getKeySig();
        void setKeySig(std::string _keysig);
        bool hasKeySig();
        void removeKeySig();
        /** \brief 
         */
        MeiAttribute* getKeySigMixed();
        void setKeySigMixed(std::string _keysigmixed);
        bool hasKeySigMixed();
        void removeKeySigMixed();

/* include <key.sig.mixedmixin> */

    private:
        MeiElement *b;
};

class KeySigsVisMixIn {
    public:
        explicit KeySigsVisMixIn(MeiElement *b);
        virtual ~KeySigsVisMixIn();
        /** \brief 
         */
        MeiAttribute* getKeySigShow();
        void setKeySigShow(std::string _keysigshow);
        bool hasKeySigShow();
        void removeKeySigShow();
        /** \brief 
         */
        MeiAttribute* getKeySigShowchange();
        void setKeySigShowchange(std::string _keysigshowchange);
        bool hasKeySigShowchange();
        void removeKeySigShowchange();

/* include <key.sig.showchangemixin> */

    private:
        MeiElement *b;
};

class LabelsAddlMixIn {
    public:
        explicit LabelsAddlMixIn(MeiElement *b);
        virtual ~LabelsAddlMixIn();
        /** \brief 
         */
        MeiAttribute* getLabelAbbr();
        void setLabelAbbr(std::string _labelabbr);
        bool hasLabelAbbr();
        void removeLabelAbbr();

/* include <label.abbrmixin> */

    private:
        MeiElement *b;
};

class LangMixIn {
    public:
        explicit LangMixIn(MeiElement *b);
        virtual ~LangMixIn();
        /** \brief 
         */
        MeiAttribute* getLang();
        void setLang(std::string _lang);
        bool hasLang();
        void removeLang();

/* include <langmixin> */

    private:
        MeiElement *b;
};

class LayerLogMixIn {
    public:
        explicit LayerLogMixIn(MeiElement *b);
        virtual ~LayerLogMixIn();
        /** \brief 
         */
        MeiAttribute* getDef();
        void setDef(std::string _def);
        bool hasDef();
        void removeDef();

/* include <defmixin> */

    private:
        MeiElement *b;
};

class LayeridentMixIn {
    public:
        explicit LayeridentMixIn(MeiElement *b);
        virtual ~LayeridentMixIn();
        /** \brief 
         */
        MeiAttribute* getLayer();
        void setLayer(std::string _layer);
        bool hasLayer();
        void removeLayer();

/* include <layermixin> */

    private:
        MeiElement *b;
};

class LinelocMixIn {
    public:
        explicit LinelocMixIn(MeiElement *b);
        virtual ~LinelocMixIn();
        /** \brief 
         */
        MeiAttribute* getLine();
        void setLine(std::string _line);
        bool hasLine();
        void removeLine();

/* include <linemixin> */

    private:
        MeiElement *b;
};

class LinerendMixIn {
    public:
        explicit LinerendMixIn(MeiElement *b);
        virtual ~LinerendMixIn();
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

class LyricstyleMixIn {
    public:
        explicit LyricstyleMixIn(MeiElement *b);
        virtual ~LyricstyleMixIn();
        /** \brief 
         */
        MeiAttribute* getLyricAlign();
        void setLyricAlign(std::string _lyricalign);
        bool hasLyricAlign();
        void removeLyricAlign();
        /** \brief 
         */
        MeiAttribute* getLyricFam();
        void setLyricFam(std::string _lyricfam);
        bool hasLyricFam();
        void removeLyricFam();
        /** \brief 
         */
        MeiAttribute* getLyricName();
        void setLyricName(std::string _lyricname);
        bool hasLyricName();
        void removeLyricName();
        /** \brief 
         */
        MeiAttribute* getLyricSize();
        void setLyricSize(std::string _lyricsize);
        bool hasLyricSize();
        void removeLyricSize();
        /** \brief 
         */
        MeiAttribute* getLyricStyle();
        void setLyricStyle(std::string _lyricstyle);
        bool hasLyricStyle();
        void removeLyricStyle();
        /** \brief 
         */
        MeiAttribute* getLyricWeight();
        void setLyricWeight(std::string _lyricweight);
        bool hasLyricWeight();
        void removeLyricWeight();

/* include <lyric.weightmixin> */

    private:
        MeiElement *b;
};

class MeasureLogMixIn {
    public:
        explicit MeasureLogMixIn(MeiElement *b);
        virtual ~MeasureLogMixIn();
        /** \brief 
         */
        MeiAttribute* getLeft();
        void setLeft(std::string _left);
        bool hasLeft();
        void removeLeft();
        /** \brief 
         */
        MeiAttribute* getRight();
        void setRight(std::string _right);
        bool hasRight();
        void removeRight();

/* include <rightmixin> */

    private:
        MeiElement *b;
};

class MeasurementMixIn {
    public:
        explicit MeasurementMixIn(MeiElement *b);
        virtual ~MeasurementMixIn();
        /** \brief 
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();

/* include <unitmixin> */

    private:
        MeiElement *b;
};

class MediumMixIn {
    public:
        explicit MediumMixIn(MeiElement *b);
        virtual ~MediumMixIn();
        /** \brief 
         */
        MeiAttribute* getMedium();
        void setMedium(std::string _medium);
        bool hasMedium();
        void removeMedium();

/* include <mediummixin> */

    private:
        MeiElement *b;
};

class MeiversionMixIn {
    public:
        explicit MeiversionMixIn(MeiElement *b);
        virtual ~MeiversionMixIn();
        /** \brief 
         */
        MeiAttribute* getMeiversion();
        void setMeiversion(std::string _meiversion);
        bool hasMeiversion();
        void removeMeiversion();

/* include <meiversionmixin> */

    private:
        MeiElement *b;
};

class MeterconformanceMixIn {
    public:
        explicit MeterconformanceMixIn(MeiElement *b);
        virtual ~MeterconformanceMixIn();
        /** \brief 
         */
        MeiAttribute* getMetcon();
        void setMetcon(std::string _metcon);
        bool hasMetcon();
        void removeMetcon();

/* include <metconmixin> */

    private:
        MeiElement *b;
};

class MeterconformanceBarMixIn {
    public:
        explicit MeterconformanceBarMixIn(MeiElement *b);
        virtual ~MeterconformanceBarMixIn();
        /** \brief 
         */
        MeiAttribute* getMetcon();
        void setMetcon(std::string _metcon);
        bool hasMetcon();
        void removeMetcon();
        /** \brief 
         */
        MeiAttribute* getControl();
        void setControl(std::string _control);
        bool hasControl();
        void removeControl();

/* include <controlmixin> */

    private:
        MeiElement *b;
};

class MetersLogMixIn {
    public:
        explicit MetersLogMixIn(MeiElement *b);
        virtual ~MetersLogMixIn();
        /** \brief 
         */
        MeiAttribute* getMeterCount();
        void setMeterCount(std::string _metercount);
        bool hasMeterCount();
        void removeMeterCount();
        /** \brief 
         */
        MeiAttribute* getMeterUnit();
        void setMeterUnit(std::string _meterunit);
        bool hasMeterUnit();
        void removeMeterUnit();

/* include <meter.unitmixin> */

    private:
        MeiElement *b;
};

class MetersVisMixIn {
    public:
        explicit MetersVisMixIn(MeiElement *b);
        virtual ~MetersVisMixIn();
        /** \brief 
         */
        MeiAttribute* getMeterRend();
        void setMeterRend(std::string _meterrend);
        bool hasMeterRend();
        void removeMeterRend();
        /** \brief 
         */
        MeiAttribute* getMeterShowchange();
        void setMeterShowchange(std::string _metershowchange);
        bool hasMeterShowchange();
        void removeMeterShowchange();
        /** \brief 
         */
        MeiAttribute* getMeterSym();
        void setMeterSym(std::string _metersym);
        bool hasMeterSym();
        void removeMeterSym();

/* include <meter.symmixin> */

    private:
        MeiElement *b;
};

class MmtempoMixIn {
    public:
        explicit MmtempoMixIn(MeiElement *b);
        virtual ~MmtempoMixIn();
        /** \brief 
         */
        MeiAttribute* getMm();
        void setMm(std::string _mm);
        bool hasMm();
        void removeMm();

/* include <mmmixin> */

    private:
        MeiElement *b;
};

class MultinummeasuresMixIn {
    public:
        explicit MultinummeasuresMixIn(MeiElement *b);
        virtual ~MultinummeasuresMixIn();
        /** \brief 
         */
        MeiAttribute* getMultiNumber();
        void setMultiNumber(std::string _multinumber);
        bool hasMultiNumber();
        void removeMultiNumber();

/* include <multi.numbermixin> */

    private:
        MeiElement *b;
};

class NameMixIn {
    public:
        explicit NameMixIn(MeiElement *b);
        virtual ~NameMixIn();
        /** \brief 
         */
        MeiAttribute* getNymref();
        void setNymref(std::string _nymref);
        bool hasNymref();
        void removeNymref();
        /** \brief 
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();

/* include <rolemixin> */

    private:
        MeiElement *b;
};

class NoteGesMixIn {
    public:
        explicit NoteGesMixIn(MeiElement *b);
        virtual ~NoteGesMixIn();
        /** \brief 
         */
        MeiAttribute* getOctGes();
        void setOctGes(std::string _octges);
        bool hasOctGes();
        void removeOctGes();
        /** \brief 
         */
        MeiAttribute* getPnameGes();
        void setPnameGes(std::string _pnameges);
        bool hasPnameGes();
        void removePnameGes();
        /** \brief 
         */
        MeiAttribute* getPnum();
        void setPnum(std::string _pnum);
        bool hasPnum();
        void removePnum();

/* include <pnummixin> */

    private:
        MeiElement *b;
};

class NoteVisMixIn {
    public:
        explicit NoteVisMixIn(MeiElement *b);
        virtual ~NoteVisMixIn();
        /** \brief 
         */
        MeiAttribute* getHeadshape();
        void setHeadshape(std::string _headshape);
        bool hasHeadshape();
        void removeHeadshape();

/* include <headshapemixin> */

    private:
        MeiElement *b;
};

class OctaveMixIn {
    public:
        explicit OctaveMixIn(MeiElement *b);
        virtual ~OctaveMixIn();
        /** \brief 
         */
        MeiAttribute* getOct();
        void setOct(std::string _oct);
        bool hasOct();
        void removeOct();

/* include <octmixin> */

    private:
        MeiElement *b;
};

class OctavedefaultMixIn {
    public:
        explicit OctavedefaultMixIn(MeiElement *b);
        virtual ~OctavedefaultMixIn();
        /** \brief 
         */
        MeiAttribute* getOctaveDefault();
        void setOctaveDefault(std::string _octavedefault);
        bool hasOctaveDefault();
        void removeOctaveDefault();

/* include <octave.defaultmixin> */

    private:
        MeiElement *b;
};

class OctavedisplacementMixIn {
    public:
        explicit OctavedisplacementMixIn(MeiElement *b);
        virtual ~OctavedisplacementMixIn();
        /** \brief 
         */
        MeiAttribute* getDis();
        void setDis(std::string _dis);
        bool hasDis();
        void removeDis();
        /** \brief 
         */
        MeiAttribute* getDisPlace();
        void setDisPlace(std::string _displace);
        bool hasDisPlace();
        void removeDisPlace();

/* include <dis.placemixin> */

    private:
        MeiElement *b;
};

class OnelinestaffMixIn {
    public:
        explicit OnelinestaffMixIn(MeiElement *b);
        virtual ~OnelinestaffMixIn();
        /** \brief 
         */
        MeiAttribute* getOntheline();
        void setOntheline(std::string _ontheline);
        bool hasOntheline();
        void removeOntheline();

/* include <onthelinemixin> */

    private:
        MeiElement *b;
};

class PadLogMixIn {
    public:
        explicit PadLogMixIn(MeiElement *b);
        virtual ~PadLogMixIn();
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

class PbVisMixIn {
    public:
        explicit PbVisMixIn(MeiElement *b);
        virtual ~PbVisMixIn();
        /** \brief 
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class PitchMixIn {
    public:
        explicit PitchMixIn(MeiElement *b);
        virtual ~PitchMixIn();
        /** \brief 
         */
        MeiAttribute* getPname();
        void setPname(std::string _pname);
        bool hasPname();
        void removePname();

/* include <pnamemixin> */

    private:
        MeiElement *b;
};

class PlacementMixIn {
    public:
        explicit PlacementMixIn(MeiElement *b);
        virtual ~PlacementMixIn();
        /** \brief 
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

/* include <placemixin> */

    private:
        MeiElement *b;
};

class PlistMixIn {
    public:
        explicit PlistMixIn(MeiElement *b);
        virtual ~PlistMixIn();
        /** \brief 
         */
        MeiAttribute* getPlist();
        void setPlist(std::string _plist);
        bool hasPlist();
        void removePlist();
        /** \brief 
         */
        MeiAttribute* getEvaluate();
        void setEvaluate(std::string _evaluate);
        bool hasEvaluate();
        void removeEvaluate();

/* include <evaluatemixin> */

    private:
        MeiElement *b;
};

class PointingMixIn {
    public:
        explicit PointingMixIn(MeiElement *b);
        virtual ~PointingMixIn();
        /** \brief 
         */
        MeiAttribute* getActuate();
        void setActuate(std::string _actuate);
        bool hasActuate();
        void removeActuate();
        /** \brief 
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();
        /** \brief 
         */
        MeiAttribute* getShow();
        void setShow(std::string _show);
        bool hasShow();
        void removeShow();
        /** \brief 
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();
        /** \brief 
         */
        MeiAttribute* getTargettype();
        void setTargettype(std::string _targettype);
        bool hasTargettype();
        void removeTargettype();
        /** \brief 
         */
        MeiAttribute* getTitle();
        void setTitle(std::string _title);
        bool hasTitle();
        void removeTitle();

/* include <titlemixin> */

    private:
        MeiElement *b;
};

class RegularizedMixIn {
    public:
        explicit RegularizedMixIn(MeiElement *b);
        virtual ~RegularizedMixIn();
        /** \brief 
         */
        MeiAttribute* getReg();
        void setReg(std::string _reg);
        bool hasReg();
        void removeReg();

/* include <regmixin> */

    private:
        MeiElement *b;
};

class RelativesizeMixIn {
    public:
        explicit RelativesizeMixIn(MeiElement *b);
        virtual ~RelativesizeMixIn();
        /** \brief 
         */
        MeiAttribute* getSize();
        void setSize(std::string _size);
        bool hasSize();
        void removeSize();

/* include <sizemixin> */

    private:
        MeiElement *b;
};

class ResponsibilityMixIn {
    public:
        explicit ResponsibilityMixIn(MeiElement *b);
        virtual ~ResponsibilityMixIn();
        /** \brief 
         */
        MeiAttribute* getResp();
        void setResp(std::string _resp);
        bool hasResp();
        void removeResp();

/* include <respmixin> */

    private:
        MeiElement *b;
};

class SbVisMixIn {
    public:
        explicit SbVisMixIn(MeiElement *b);
        virtual ~SbVisMixIn();
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

class ScalableMixIn {
    public:
        explicit ScalableMixIn(MeiElement *b);
        virtual ~ScalableMixIn();
        /** \brief 
         */
        MeiAttribute* getScale();
        void setScale(std::string _scale);
        bool hasScale();
        void removeScale();

/* include <scalemixin> */

    private:
        MeiElement *b;
};

class ScoreDefGesMixIn {
    public:
        explicit ScoreDefGesMixIn(MeiElement *b);
        virtual ~ScoreDefGesMixIn();
        /** \brief 
         */
        MeiAttribute* getTunePname();
        void setTunePname(std::string _tunepname);
        bool hasTunePname();
        void removeTunePname();
        /** \brief 
         */
        MeiAttribute* getTuneHz();
        void setTuneHz(std::string _tuneHz);
        bool hasTuneHz();
        void removeTuneHz();
        /** \brief 
         */
        MeiAttribute* getTuneTemper();
        void setTuneTemper(std::string _tunetemper);
        bool hasTuneTemper();
        void removeTuneTemper();

/* include <tune.tempermixin> */

    private:
        MeiElement *b;
};

class ScoreDefVisMixIn {
    public:
        explicit ScoreDefVisMixIn(MeiElement *b);
        virtual ~ScoreDefVisMixIn();
        /** \brief 
         */
        MeiAttribute* getEndingRend();
        void setEndingRend(std::string _endingrend);
        bool hasEndingRend();
        void removeEndingRend();
        /** \brief 
         */
        MeiAttribute* getMnumVisible();
        void setMnumVisible(std::string _mnumvisible);
        bool hasMnumVisible();
        void removeMnumVisible();
        /** \brief 
         */
        MeiAttribute* getMusicName();
        void setMusicName(std::string _musicname);
        bool hasMusicName();
        void removeMusicName();
        /** \brief 
         */
        MeiAttribute* getMusicSize();
        void setMusicSize(std::string _musicsize);
        bool hasMusicSize();
        void removeMusicSize();
        /** \brief 
         */
        MeiAttribute* getOptimize();
        void setOptimize(std::string _optimize);
        bool hasOptimize();
        void removeOptimize();
        /** \brief 
         */
        MeiAttribute* getPageHeight();
        void setPageHeight(std::string _pageheight);
        bool hasPageHeight();
        void removePageHeight();
        /** \brief 
         */
        MeiAttribute* getPageWidth();
        void setPageWidth(std::string _pagewidth);
        bool hasPageWidth();
        void removePageWidth();
        /** \brief 
         */
        MeiAttribute* getPageUnits();
        void setPageUnits(std::string _pageunits);
        bool hasPageUnits();
        void removePageUnits();
        /** \brief 
         */
        MeiAttribute* getPageTopmar();
        void setPageTopmar(std::string _pagetopmar);
        bool hasPageTopmar();
        void removePageTopmar();
        /** \brief 
         */
        MeiAttribute* getPageBotmar();
        void setPageBotmar(std::string _pagebotmar);
        bool hasPageBotmar();
        void removePageBotmar();
        /** \brief 
         */
        MeiAttribute* getPageLeftmar();
        void setPageLeftmar(std::string _pageleftmar);
        bool hasPageLeftmar();
        void removePageLeftmar();
        /** \brief 
         */
        MeiAttribute* getPageRightmar();
        void setPageRightmar(std::string _pagerightmar);
        bool hasPageRightmar();
        void removePageRightmar();
        /** \brief 
         */
        MeiAttribute* getPagePanels();
        void setPagePanels(std::string _pagepanels);
        bool hasPagePanels();
        void removePagePanels();
        /** \brief 
         */
        MeiAttribute* getPageScale();
        void setPageScale(std::string _pagescale);
        bool hasPageScale();
        void removePageScale();
        /** \brief 
         */
        MeiAttribute* getSpacingPackexp();
        void setSpacingPackexp(std::string _spacingpackexp);
        bool hasSpacingPackexp();
        void removeSpacingPackexp();
        /** \brief 
         */
        MeiAttribute* getSpacingPackfact();
        void setSpacingPackfact(std::string _spacingpackfact);
        bool hasSpacingPackfact();
        void removeSpacingPackfact();
        /** \brief 
         */
        MeiAttribute* getSpacingStaff();
        void setSpacingStaff(std::string _spacingstaff);
        bool hasSpacingStaff();
        void removeSpacingStaff();
        /** \brief 
         */
        MeiAttribute* getSpacingSystem();
        void setSpacingSystem(std::string _spacingsystem);
        bool hasSpacingSystem();
        void removeSpacingSystem();
        /** \brief 
         */
        MeiAttribute* getSystemLeftmar();
        void setSystemLeftmar(std::string _systemleftmar);
        bool hasSystemLeftmar();
        void removeSystemLeftmar();
        /** \brief 
         */
        MeiAttribute* getSystemRightmar();
        void setSystemRightmar(std::string _systemrightmar);
        bool hasSystemRightmar();
        void removeSystemRightmar();
        /** \brief 
         */
        MeiAttribute* getSystemTopmar();
        void setSystemTopmar(std::string _systemtopmar);
        bool hasSystemTopmar();
        void removeSystemTopmar();

/* include <system.topmarmixin> */

    private:
        MeiElement *b;
};

class SectionVisMixIn {
    public:
        explicit SectionVisMixIn(MeiElement *b);
        virtual ~SectionVisMixIn();
        /** \brief 
         */
        MeiAttribute* getRestart();
        void setRestart(std::string _restart);
        bool hasRestart();
        void removeRestart();

/* include <restartmixin> */

    private:
        MeiElement *b;
};

class SequenceMixIn {
    public:
        explicit SequenceMixIn(MeiElement *b);
        virtual ~SequenceMixIn();
        /** \brief 
         */
        MeiAttribute* getSeq();
        void setSeq(std::string _seq);
        bool hasSeq();
        void removeSeq();

/* include <seqmixin> */

    private:
        MeiElement *b;
};

class SlashcountMixIn {
    public:
        explicit SlashcountMixIn(MeiElement *b);
        virtual ~SlashcountMixIn();
        /** \brief 
         */
        MeiAttribute* getSlash();
        void setSlash(std::string _slash);
        bool hasSlash();
        void removeSlash();

/* include <slashmixin> */

    private:
        MeiElement *b;
};

class SlurpresentMixIn {
    public:
        explicit SlurpresentMixIn(MeiElement *b);
        virtual ~SlurpresentMixIn();
        /** \brief 
         */
        MeiAttribute* getSlur();
        void setSlur(std::string _slur);
        bool hasSlur();
        void removeSlur();

/* include <slurmixin> */

    private:
        MeiElement *b;
};

class SpaceVisMixIn {
    public:
        explicit SpaceVisMixIn(MeiElement *b);
        virtual ~SpaceVisMixIn();
        /** \brief 
         */
        MeiAttribute* getCompressable();
        void setCompressable(std::string _compressable);
        bool hasCompressable();
        void removeCompressable();

/* include <compressablemixin> */

    private:
        MeiElement *b;
};

class StaffLogMixIn {
    public:
        explicit StaffLogMixIn(MeiElement *b);
        virtual ~StaffLogMixIn();
        /** \brief 
         */
        MeiAttribute* getDef();
        void setDef(std::string _def);
        bool hasDef();
        void removeDef();

/* include <defmixin> */

    private:
        MeiElement *b;
};

class StaffDefVisMixIn {
    public:
        explicit StaffDefVisMixIn(MeiElement *b);
        virtual ~StaffDefVisMixIn();
        /** \brief 
         */
        MeiAttribute* getGridShow();
        void setGridShow(std::string _gridshow);
        bool hasGridShow();
        void removeGridShow();
        /** \brief 
         */
        MeiAttribute* getLayerscheme();
        void setLayerscheme(std::string _layerscheme);
        bool hasLayerscheme();
        void removeLayerscheme();
        /** \brief 
         */
        MeiAttribute* getLines();
        void setLines(std::string _lines);
        bool hasLines();
        void removeLines();
        /** \brief 
         */
        MeiAttribute* getLinesColor();
        void setLinesColor(std::string _linescolor);
        bool hasLinesColor();
        void removeLinesColor();
        /** \brief 
         */
        MeiAttribute* getLinesVisible();
        void setLinesVisible(std::string _linesvisible);
        bool hasLinesVisible();
        void removeLinesVisible();
        /** \brief 
         */
        MeiAttribute* getSpacing();
        void setSpacing(std::string _spacing);
        bool hasSpacing();
        void removeSpacing();

/* include <spacingmixin> */

    private:
        MeiElement *b;
};

class StaffGrpVisMixIn {
    public:
        explicit StaffGrpVisMixIn(MeiElement *b);
        virtual ~StaffGrpVisMixIn();
        /** \brief 
         */
        MeiAttribute* getBarthru();
        void setBarthru(std::string _barthru);
        bool hasBarthru();
        void removeBarthru();

/* include <barthrumixin> */

    private:
        MeiElement *b;
};

class StaffgroupingsymMixIn {
    public:
        explicit StaffgroupingsymMixIn(MeiElement *b);
        virtual ~StaffgroupingsymMixIn();
        /** \brief 
         */
        MeiAttribute* getSymbol();
        void setSymbol(std::string _symbol);
        bool hasSymbol();
        void removeSymbol();

/* include <symbolmixin> */

    private:
        MeiElement *b;
};

class StaffidentMixIn {
    public:
        explicit StaffidentMixIn(MeiElement *b);
        virtual ~StaffidentMixIn();
        /** \brief 
         */
        MeiAttribute* getStaff();
        void setStaff(std::string _staff);
        bool hasStaff();
        void removeStaff();

/* include <staffmixin> */

    private:
        MeiElement *b;
};

class StafflocMixIn {
    public:
        explicit StafflocMixIn(MeiElement *b);
        virtual ~StafflocMixIn();
        /** \brief 
         */
        MeiAttribute* getLoc();
        void setLoc(std::string _loc);
        bool hasLoc();
        void removeLoc();

/* include <locmixin> */

    private:
        MeiElement *b;
};

class StartendidMixIn {
    public:
        explicit StartendidMixIn(MeiElement *b);
        virtual ~StartendidMixIn();
        /** \brief 
         */
        MeiAttribute* getEndid();
        void setEndid(std::string _endid);
        bool hasEndid();
        void removeEndid();

/* include <endidmixin> */

    private:
        MeiElement *b;
};

class StartidMixIn {
    public:
        explicit StartidMixIn(MeiElement *b);
        virtual ~StartidMixIn();
        /** \brief 
         */
        MeiAttribute* getStartid();
        void setStartid(std::string _startid);
        bool hasStartid();
        void removeStartid();

/* include <startidmixin> */

    private:
        MeiElement *b;
};

class StemmedMixIn {
    public:
        explicit StemmedMixIn(MeiElement *b);
        virtual ~StemmedMixIn();
        /** \brief 
         */
        MeiAttribute* getStemDir();
        void setStemDir(std::string _stemdir);
        bool hasStemDir();
        void removeStemDir();
        /** \brief 
         */
        MeiAttribute* getStemLen();
        void setStemLen(std::string _stemlen);
        bool hasStemLen();
        void removeStemLen();
        /** \brief 
         */
        MeiAttribute* getStemPos();
        void setStemPos(std::string _stempos);
        bool hasStemPos();
        void removeStemPos();
        /** \brief 
         */
        MeiAttribute* getStemX();
        void setStemX(std::string _stemx);
        bool hasStemX();
        void removeStemX();
        /** \brief 
         */
        MeiAttribute* getStemY();
        void setStemY(std::string _stemy);
        bool hasStemY();
        void removeStemY();

/* include <stem.ymixin> */

    private:
        MeiElement *b;
};

class SylLogMixIn {
    public:
        explicit SylLogMixIn(MeiElement *b);
        virtual ~SylLogMixIn();
        /** \brief 
         */
        MeiAttribute* getCon();
        void setCon(std::string _con);
        bool hasCon();
        void removeCon();
        /** \brief 
         */
        MeiAttribute* getWordpos();
        void setWordpos(std::string _wordpos);
        bool hasWordpos();
        void removeWordpos();

/* include <wordposmixin> */

    private:
        MeiElement *b;
};

class SyltextMixIn {
    public:
        explicit SyltextMixIn(MeiElement *b);
        virtual ~SyltextMixIn();
        /** \brief 
         */
        MeiAttribute* getSyl();
        void setSyl(std::string _syl);
        bool hasSyl();
        void removeSyl();

/* include <sylmixin> */

    private:
        MeiElement *b;
};

class TextstyleMixIn {
    public:
        explicit TextstyleMixIn(MeiElement *b);
        virtual ~TextstyleMixIn();
        /** \brief 
         */
        MeiAttribute* getTextFam();
        void setTextFam(std::string _textfam);
        bool hasTextFam();
        void removeTextFam();
        /** \brief 
         */
        MeiAttribute* getTextName();
        void setTextName(std::string _textname);
        bool hasTextName();
        void removeTextName();
        /** \brief 
         */
        MeiAttribute* getTextSize();
        void setTextSize(std::string _textsize);
        bool hasTextSize();
        void removeTextSize();
        /** \brief 
         */
        MeiAttribute* getTextStyle();
        void setTextStyle(std::string _textstyle);
        bool hasTextStyle();
        void removeTextStyle();
        /** \brief 
         */
        MeiAttribute* getTextWeight();
        void setTextWeight(std::string _textweight);
        bool hasTextWeight();
        void removeTextWeight();

/* include <text.weightmixin> */

    private:
        MeiElement *b;
};

class TiepresentMixIn {
    public:
        explicit TiepresentMixIn(MeiElement *b);
        virtual ~TiepresentMixIn();
        /** \brief 
         */
        MeiAttribute* getTie();
        void setTie(std::string _tie);
        bool hasTie();
        void removeTie();

/* include <tiemixin> */

    private:
        MeiElement *b;
};

class TimestampMusicalMixIn {
    public:
        explicit TimestampMusicalMixIn(MeiElement *b);
        virtual ~TimestampMusicalMixIn();
        /** \brief 
         */
        MeiAttribute* getTstamp();
        void setTstamp(std::string _tstamp);
        bool hasTstamp();
        void removeTstamp();

/* include <tstampmixin> */

    private:
        MeiElement *b;
};

class TimestampPerformedMixIn {
    public:
        explicit TimestampPerformedMixIn(MeiElement *b);
        virtual ~TimestampPerformedMixIn();
        /** \brief 
         */
        MeiAttribute* getTstampGes();
        void setTstampGes(std::string _tstampges);
        bool hasTstampGes();
        void removeTstampGes();
        /** \brief 
         */
        MeiAttribute* getTstampReal();
        void setTstampReal(std::string _tstampreal);
        bool hasTstampReal();
        void removeTstampReal();

/* include <tstamp.realmixin> */

    private:
        MeiElement *b;
};

class TranspositionMixIn {
    public:
        explicit TranspositionMixIn(MeiElement *b);
        virtual ~TranspositionMixIn();
        /** \brief 
         */
        MeiAttribute* getTransDiat();
        void setTransDiat(std::string _transdiat);
        bool hasTransDiat();
        void removeTransDiat();
        /** \brief 
         */
        MeiAttribute* getTransSemi();
        void setTransSemi(std::string _transsemi);
        bool hasTransSemi();
        void removeTransSemi();

/* include <trans.semimixin> */

    private:
        MeiElement *b;
};

class TupletpresentMixIn {
    public:
        explicit TupletpresentMixIn(MeiElement *b);
        virtual ~TupletpresentMixIn();
        /** \brief 
         */
        MeiAttribute* getTuplet();
        void setTuplet(std::string _tuplet);
        bool hasTuplet();
        void removeTuplet();

/* include <tupletmixin> */

    private:
        MeiElement *b;
};

class TypedMixIn {
    public:
        explicit TypedMixIn(MeiElement *b);
        virtual ~TypedMixIn();
        /** \brief 
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief 
         */
        MeiAttribute* getSubtype();
        void setSubtype(std::string _subtype);
        bool hasSubtype();
        void removeSubtype();

/* include <subtypemixin> */

    private:
        MeiElement *b;
};

class TypographyMixIn {
    public:
        explicit TypographyMixIn(MeiElement *b);
        virtual ~TypographyMixIn();
        /** \brief 
         */
        MeiAttribute* getFontfam();
        void setFontfam(std::string _fontfam);
        bool hasFontfam();
        void removeFontfam();
        /** \brief 
         */
        MeiAttribute* getFontname();
        void setFontname(std::string _fontname);
        bool hasFontname();
        void removeFontname();
        /** \brief 
         */
        MeiAttribute* getFontsize();
        void setFontsize(std::string _fontsize);
        bool hasFontsize();
        void removeFontsize();
        /** \brief 
         */
        MeiAttribute* getFontstyle();
        void setFontstyle(std::string _fontstyle);
        bool hasFontstyle();
        void removeFontstyle();
        /** \brief 
         */
        MeiAttribute* getFontweight();
        void setFontweight(std::string _fontweight);
        bool hasFontweight();
        void removeFontweight();

/* include <fontweightmixin> */

    private:
        MeiElement *b;
};

class VisibilityMixIn {
    public:
        explicit VisibilityMixIn(MeiElement *b);
        virtual ~VisibilityMixIn();
        /** \brief 
         */
        MeiAttribute* getVisible();
        void setVisible(std::string _visible);
        bool hasVisible();
        void removeVisible();

/* include <visiblemixin> */

    private:
        MeiElement *b;
};

class VisualoffsetHoMixIn {
    public:
        explicit VisualoffsetHoMixIn(MeiElement *b);
        virtual ~VisualoffsetHoMixIn();
        /** \brief 
         */
        MeiAttribute* getHo();
        void setHo(std::string _ho);
        bool hasHo();
        void removeHo();

/* include <homixin> */

    private:
        MeiElement *b;
};

class VisualoffsetToMixIn {
    public:
        explicit VisualoffsetToMixIn(MeiElement *b);
        virtual ~VisualoffsetToMixIn();
        /** \brief 
         */
        MeiAttribute* getTo();
        void setTo(std::string _to);
        bool hasTo();
        void removeTo();

/* include <tomixin> */

    private:
        MeiElement *b;
};

class VisualoffsetVoMixIn {
    public:
        explicit VisualoffsetVoMixIn(MeiElement *b);
        virtual ~VisualoffsetVoMixIn();
        /** \brief 
         */
        MeiAttribute* getVo();
        void setVo(std::string _vo);
        bool hasVo();
        void removeVo();

/* include <vomixin> */

    private:
        MeiElement *b;
};

class Visualoffset2HoMixIn {
    public:
        explicit Visualoffset2HoMixIn(MeiElement *b);
        virtual ~Visualoffset2HoMixIn();
        /** \brief 
         */
        MeiAttribute* getStartho();
        void setStartho(std::string _startho);
        bool hasStartho();
        void removeStartho();
        /** \brief 
         */
        MeiAttribute* getEndho();
        void setEndho(std::string _endho);
        bool hasEndho();
        void removeEndho();

/* include <endhomixin> */

    private:
        MeiElement *b;
};

class Visualoffset2ToMixIn {
    public:
        explicit Visualoffset2ToMixIn(MeiElement *b);
        virtual ~Visualoffset2ToMixIn();
        /** \brief 
         */
        MeiAttribute* getStartto();
        void setStartto(std::string _startto);
        bool hasStartto();
        void removeStartto();
        /** \brief 
         */
        MeiAttribute* getEndto();
        void setEndto(std::string _endto);
        bool hasEndto();
        void removeEndto();

/* include <endtomixin> */

    private:
        MeiElement *b;
};

class Visualoffset2VoMixIn {
    public:
        explicit Visualoffset2VoMixIn(MeiElement *b);
        virtual ~Visualoffset2VoMixIn();
        /** \brief 
         */
        MeiAttribute* getStartvo();
        void setStartvo(std::string _startvo);
        bool hasStartvo();
        void removeStartvo();
        /** \brief 
         */
        MeiAttribute* getEndvo();
        void setEndvo(std::string _endvo);
        bool hasEndvo();
        void removeEndvo();

/* include <endvomixin> */

    private:
        MeiElement *b;
};

class WidthMixIn {
    public:
        explicit WidthMixIn(MeiElement *b);
        virtual ~WidthMixIn();
        /** \brief 
         */
        MeiAttribute* getWidth();
        void setWidth(std::string _width);
        bool hasWidth();
        void removeWidth();

/* include <widthmixin> */

    private:
        MeiElement *b;
};

class XyMixIn {
    public:
        explicit XyMixIn(MeiElement *b);
        virtual ~XyMixIn();
        /** \brief 
         */
        MeiAttribute* getX();
        void setX(std::string _x);
        bool hasX();
        void removeX();
        /** \brief 
         */
        MeiAttribute* getY();
        void setY(std::string _y);
        bool hasY();
        void removeY();

/* include <ymixin> */

    private:
        MeiElement *b;
};

class Xy2MixIn {
    public:
        explicit Xy2MixIn(MeiElement *b);
        virtual ~Xy2MixIn();
        /** \brief 
         */
        MeiAttribute* getX2();
        void setX2(std::string _x2);
        bool hasX2();
        void removeX2();
        /** \brief 
         */
        MeiAttribute* getY2();
        void setY2(std::string _y2);
        bool hasY2();
        void removeY2();

/* include <y2mixin> */

    private:
        MeiElement *b;
};
}
#endif  // SHAREDMIXIN_H_
