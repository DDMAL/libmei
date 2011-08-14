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
    
#ifndef SHAREDMIXINS_H_
#define SHAREDMIXINS_H_

#include "meielement.h"
#include "exceptions.h"
using namespace std;

/** \brief   Attributes for capturing momentary pitch inflection in the gestural domain
 */
struct AccidentalPerformedMixIn {

    AccidentalPerformedMixIn(BaseMeiElement *b);

    string getAccidGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getAccidGes() throw (AttributeNotFoundException);
    void setAccidGes(string _accidges);
    bool hasAccidGes();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes supplying pointers to user-defined symbols
 */
struct AltsymMixIn {

    AltsymMixIn(BaseMeiElement *b);

    string getAltsymValue() throw (AttributeNotFoundException);
    MeiAttribute* getAltsym() throw (AttributeNotFoundException);
    void setAltsym(string _altsym);
    bool hasAltsym();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes describing the method of performance
 */
struct ArticulationPerformedMixIn {

    ArticulationPerformedMixIn(BaseMeiElement *b);

    string getArticGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getArticGes() throw (AttributeNotFoundException);
    void setArticGes(string _articges);
    bool hasArticGes();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record the number of dots of augmentation
 */
struct AugmentdotsMixIn {

    AugmentdotsMixIn(BaseMeiElement *b);

    string getDotsValue() throw (AttributeNotFoundException);
    MeiAttribute* getDots() throw (AttributeNotFoundException);
    void setDots(string _dots);
    bool hasDots();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe the source of an controlled value
 */
struct AuthorizedMixIn {

    AuthorizedMixIn(BaseMeiElement *b);

    string getAuthorityValue() throw (AttributeNotFoundException);
    MeiAttribute* getAuthority() throw (AttributeNotFoundException);
    void setAuthority(string _authority);
    bool hasAuthority();

    string getAuthuriValue() throw (AttributeNotFoundException);
    MeiAttribute* getAuthuri() throw (AttributeNotFoundException);
    void setAuthuri(string _authuri);
    bool hasAuthuri();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that capture the placement of bar lines
 */
struct BarplacementMixIn {

    BarplacementMixIn(BaseMeiElement *b);

    string getBarplaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getBarplace() throw (AttributeNotFoundException);
    void setBarplace(string _barplace);
    bool hasBarplace();

    string getTaktplaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getTaktplace() throw (AttributeNotFoundException);
    void setTaktplace(string _taktplace);
    bool hasTaktplace();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by layerDef, staffDef, and scoreDef to provide default values for
 *           attributes in the visual domain related to beaming
 */
struct BeamingVisMixIn {

    BeamingVisMixIn(BaseMeiElement *b);

    string getBeamRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamRend() throw (AttributeNotFoundException);
    void setBeamRend(string _beamrend);
    bool hasBeamRend();

    string getBeamSlopeValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamSlope() throw (AttributeNotFoundException);
    void setBeamSlope(string _beamslope);
    bool hasBeamSlope();


    private:
         BaseMeiElement *b;
};

/** \brief   Bibliographic attributes
 */
struct BiblMixIn {

    BiblMixIn(BaseMeiElement *b);

    string getAnalogValue() throw (AttributeNotFoundException);
    MeiAttribute* getAnalog() throw (AttributeNotFoundException);
    void setAnalog(string _analog);
    bool hasAnalog();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that indicate the calendar system of a date or other datable element.
 */
struct CalendaredMixIn {

    CalendaredMixIn(BaseMeiElement *b);

    string getCalendarValue() throw (AttributeNotFoundException);
    MeiAttribute* getCalendar() throw (AttributeNotFoundException);
    void setCalendar(string _calendar);
    bool hasCalendar();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by staffDef and scoreDef to provide default values for attributes in the
 *           logical domain related to clefs
 */
struct CleffingLogMixIn {

    CleffingLogMixIn(BaseMeiElement *b);

    string getClefShapeValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefShape() throw (AttributeNotFoundException);
    void setClefShape(string _clefshape);
    bool hasClefShape();

    string getClefLineValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefLine() throw (AttributeNotFoundException);
    void setClefLine(string _clefline);
    bool hasClefLine();

    string getClefDisValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefDis() throw (AttributeNotFoundException);
    void setClefDis(string _clefdis);
    bool hasClefDis();

    string getClefDisPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefDisPlace() throw (AttributeNotFoundException);
    void setClefDisPlace(string _clefdisplace);
    bool hasClefDisPlace();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by staffDef and scoreDef to provide default values for attributes in the
 *           visual domain related to clefs
 */
struct CleffingVisMixIn {

    CleffingVisMixIn(BaseMeiElement *b);

    string getClefColorValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefColor() throw (AttributeNotFoundException);
    void setClefColor(string _clefcolor);
    bool hasClefColor();

    string getClefVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefVisible() throw (AttributeNotFoundException);
    void setClefVisible(string _clefvisible);
    bool hasClefVisible();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record the shape of a clef
 */
struct ClefshapeMixIn {

    ClefshapeMixIn(BaseMeiElement *b);

    string getShapeValue() throw (AttributeNotFoundException);
    MeiAttribute* getShape() throw (AttributeNotFoundException);
    void setShape(string _shape);
    bool hasShape();


    private:
         BaseMeiElement *b;
};

/** \brief   Visual color attributes
 */
struct ColorMixIn {

    ColorMixIn(BaseMeiElement *b);

    string getColorValue() throw (AttributeNotFoundException);
    MeiAttribute* getColor() throw (AttributeNotFoundException);
    void setColor(string _color);
    bool hasColor();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes common to many elements
 */
struct CommonMixIn {

    CommonMixIn(BaseMeiElement *b);

    string getIdValue() throw (AttributeNotFoundException);
    MeiAttribute* getId() throw (AttributeNotFoundException);
    void setId(string _id);
    bool hasId();

    string getLabelValue() throw (AttributeNotFoundException);
    MeiAttribute* getLabel() throw (AttributeNotFoundException);
    void setLabel(string _label);
    bool hasLabel();

    string getNValue() throw (AttributeNotFoundException);
    MeiAttribute* getN() throw (AttributeNotFoundException);
    void setN(string _n);
    bool hasN();

    string getBaseValue() throw (AttributeNotFoundException);
    MeiAttribute* getBase() throw (AttributeNotFoundException);
    void setBase(string _base);
    bool hasBase();


    private:
         BaseMeiElement *b;
};

/** \brief   This attribute class records the position of a feature within a two-dimensional
 *           coordinate system.
 */
struct CoordinatedMixIn {

    CoordinatedMixIn(BaseMeiElement *b);

    string getUlxValue() throw (AttributeNotFoundException);
    MeiAttribute* getUlx() throw (AttributeNotFoundException);
    void setUlx(string _ulx);
    bool hasUlx();

    string getUlyValue() throw (AttributeNotFoundException);
    MeiAttribute* getUly() throw (AttributeNotFoundException);
    void setUly(string _uly);
    bool hasUly();

    string getLrxValue() throw (AttributeNotFoundException);
    MeiAttribute* getLrx() throw (AttributeNotFoundException);
    void setLrx(string _lrx);
    bool hasLrx();

    string getLryValue() throw (AttributeNotFoundException);
    MeiAttribute* getLry() throw (AttributeNotFoundException);
    void setLry(string _lry);
    bool hasLry();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe curvature
 */
struct CurvatureMixIn {

    CurvatureMixIn(BaseMeiElement *b);

    string getBezierValue() throw (AttributeNotFoundException);
    MeiAttribute* getBezier() throw (AttributeNotFoundException);
    void setBezier(string _bezier);
    bool hasBezier();

    string getBulgeValue() throw (AttributeNotFoundException);
    MeiAttribute* getBulge() throw (AttributeNotFoundException);
    void setBulge(string _bulge);
    bool hasBulge();

    string getCurvedirValue() throw (AttributeNotFoundException);
    MeiAttribute* getCurvedir() throw (AttributeNotFoundException);
    void setCurvedir(string _curvedir);
    bool hasCurvedir();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record the visual rendition of curves
 */
struct CurverendMixIn {

    CurverendMixIn(BaseMeiElement *b);

    string getRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(string _rend);
    bool hasRend();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes common to dates
 */
struct DatableMixIn {

    DatableMixIn(BaseMeiElement *b);

    string getEnddateValue() throw (AttributeNotFoundException);
    MeiAttribute* getEnddate() throw (AttributeNotFoundException);
    void setEnddate(string _enddate);
    bool hasEnddate();

    string getNotafterValue() throw (AttributeNotFoundException);
    MeiAttribute* getNotafter() throw (AttributeNotFoundException);
    void setNotafter(string _notafter);
    bool hasNotafter();

    string getNotbeforeValue() throw (AttributeNotFoundException);
    MeiAttribute* getNotbefore() throw (AttributeNotFoundException);
    void setNotbefore(string _notbefore);
    bool hasNotbefore();

    string getStartdateValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartdate() throw (AttributeNotFoundException);
    void setStartdate(string _startdate);
    bool hasStartdate();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes for linking metadata to data
 */
struct DatapointingMixIn {

    DatapointingMixIn(BaseMeiElement *b);

    string getDataValue() throw (AttributeNotFoundException);
    MeiAttribute* getData() throw (AttributeNotFoundException);
    void setData(string _data);
    bool hasData();


    private:
         BaseMeiElement *b;
};

/** \brief   provides attributes for elements which may be associated with particular
 *           contextual elements within the header
 */
struct DeclaringMixIn {

    DeclaringMixIn(BaseMeiElement *b);

    string getDeclsValue() throw (AttributeNotFoundException);
    MeiAttribute* getDecls() throw (AttributeNotFoundException);
    void setDecls(string _decls);
    bool hasDecls();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe distance from the staff
 */
struct DistancesMixIn {

    DistancesMixIn(BaseMeiElement *b);

    string getDynamDistValue() throw (AttributeNotFoundException);
    MeiAttribute* getDynamDist() throw (AttributeNotFoundException);
    void setDynamDist(string _dynamdist);
    bool hasDynamDist();

    string getHarmDistValue() throw (AttributeNotFoundException);
    MeiAttribute* getHarmDist() throw (AttributeNotFoundException);
    void setHarmDist(string _harmdist);
    bool hasHarmDist();

    string getTextDistValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextDist() throw (AttributeNotFoundException);
    void setTextDist(string _textdist);
    bool hasTextDist();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that provide a durational default value
 */
struct DurationDefaultMixIn {

    DurationDefaultMixIn(BaseMeiElement *b);

    string getDurDefaultValue() throw (AttributeNotFoundException);
    MeiAttribute* getDurDefault() throw (AttributeNotFoundException);
    void setDurDefault(string _durdefault);
    bool hasDurDefault();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that express duration in musical terms
 */
struct DurationMusicalMixIn {

    DurationMusicalMixIn(BaseMeiElement *b);

    string getDurValue() throw (AttributeNotFoundException);
    MeiAttribute* getDur() throw (AttributeNotFoundException);
    void setDur(string _dur);
    bool hasDur();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record performed duration that differs from a feature's written
 *           duration.
 */
struct DurationPerformedMixIn {

    DurationPerformedMixIn(BaseMeiElement *b);

    string getDurGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getDurGes() throw (AttributeNotFoundException);
    void setDurGes(string _durges);
    bool hasDurGes();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe duration as a ratio
 */
struct DurationRatioMixIn {

    DurationRatioMixIn(BaseMeiElement *b);

    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(string _num);
    bool hasNum();

    string getNumbaseValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumbase() throw (AttributeNotFoundException);
    void setNumbase(string _numbase);
    bool hasNumbase();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that express duration as a timestamp for the ending point
 */
struct DurationTimestampMixIn {

    DurationTimestampMixIn(BaseMeiElement *b);

    string getDurValue() throw (AttributeNotFoundException);
    MeiAttribute* getDur() throw (AttributeNotFoundException);
    void setDur(string _dur);
    bool hasDur();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that capture characters used to enclose symbols having a cautionary
 *           or editorial function
 */
struct EnclosingcharsMixIn {

    EnclosingcharsMixIn(BaseMeiElement *b);

    string getEncloseValue() throw (AttributeNotFoundException);
    MeiAttribute* getEnclose() throw (AttributeNotFoundException);
    void setEnclose(string _enclose);
    bool hasEnclose();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes indicating the attachment of a fermata to the feature
 */
struct FermatapresentMixIn {

    FermatapresentMixIn(BaseMeiElement *b);

    string getFermataValue() throw (AttributeNotFoundException);
    MeiAttribute* getFermata() throw (AttributeNotFoundException);
    void setFermata(string _fermata);
    bool hasFermata();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe the symbol used to group a set of staves
 */
struct StaffgroupingsymMixIn {

    StaffgroupingsymMixIn(BaseMeiElement *b);

    string getSymbolValue() throw (AttributeNotFoundException);
    MeiAttribute* getSymbol() throw (AttributeNotFoundException);
    void setSymbol(string _symbol);
    bool hasSymbol();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes which identify a document hand
 */
struct HandidentMixIn {

    HandidentMixIn(BaseMeiElement *b);

    string getHandValue() throw (AttributeNotFoundException);
    MeiAttribute* getHand() throw (AttributeNotFoundException);
    void setHand(string _hand);
    bool hasHand();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record horizontal alignment
 */
struct HorizontalalignMixIn {

    HorizontalalignMixIn(BaseMeiElement *b);

    string getHalignValue() throw (AttributeNotFoundException);
    MeiAttribute* getHalign() throw (AttributeNotFoundException);
    void setHalign(string _halign);
    bool hasHalign();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes which identify a MIDI instrument
 */
struct InstrumentidentMixIn {

    InstrumentidentMixIn(BaseMeiElement *b);

    string getInstrValue() throw (AttributeNotFoundException);
    MeiAttribute* getInstr() throw (AttributeNotFoundException);
    void setInstr(string _instr);
    bool hasInstr();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes which record the type of an electronic resource
 */
struct InternetmediaMixIn {

    InternetmediaMixIn(BaseMeiElement *b);

    string getMimetypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getMimetype() throw (AttributeNotFoundException);
    void setMimetype(string _mimetype);
    bool hasMimetype();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes indicating that elements are semantically linked; that is, while the
 *           parts are encoded separately, together they may be thought of as             a
 *           single intellectual object
 */
struct JoinedMixIn {

    JoinedMixIn(BaseMeiElement *b);

    string getJoinValue() throw (AttributeNotFoundException);
    MeiAttribute* getJoin() throw (AttributeNotFoundException);
    void setJoin(string _join);
    bool hasJoin();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by staffDef and scoreDef to provide default values for attributes in the
 *           logical domain related to key signatures
 */
struct KeysigsLogMixIn {

    KeysigsLogMixIn(BaseMeiElement *b);

    string getKeyAccidValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeyAccid() throw (AttributeNotFoundException);
    void setKeyAccid(string _keyaccid);
    bool hasKeyAccid();

    string getKeyModeValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeyMode() throw (AttributeNotFoundException);
    void setKeyMode(string _keymode);
    bool hasKeyMode();

    string getKeyPnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeyPname() throw (AttributeNotFoundException);
    void setKeyPname(string _keypname);
    bool hasKeyPname();

    string getKeySigValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeySig() throw (AttributeNotFoundException);
    void setKeySig(string _keysig);
    bool hasKeySig();

    string getKeySigMixedValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeySigMixed() throw (AttributeNotFoundException);
    void setKeySigMixed(string _keysigmixed);
    bool hasKeySigMixed();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by staffDef and scoreDef to provide default values for attributes in the
 *           visual domain related to key signatures
 */
struct KeysigsVisMixIn {

    KeysigsVisMixIn(BaseMeiElement *b);

    string getKeySigShowValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeySigShow() throw (AttributeNotFoundException);
    void setKeySigShow(string _keysigshow);
    bool hasKeySigShow();

    string getKeySigShowchangeValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeySigShowchange() throw (AttributeNotFoundException);
    void setKeySigShowchange(string _keysigshowchange);
    bool hasKeySigShowchange();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record labels for a feature in addition to those found in
 *           att.common
 */
struct LabelsAddlMixIn {

    LabelsAddlMixIn(BaseMeiElement *b);

    string getLabelAbbrValue() throw (AttributeNotFoundException);
    MeiAttribute* getLabelAbbr() throw (AttributeNotFoundException);
    void setLabelAbbr(string _labelabbr);
    bool hasLabelAbbr();


    private:
         BaseMeiElement *b;
};

/** \brief   Language attributes common to text elements
 */
struct LangMixIn {

    LangMixIn(BaseMeiElement *b);

    string getLangValue() throw (AttributeNotFoundException);
    MeiAttribute* getLang() throw (AttributeNotFoundException);
    void setLang(string _lang);
    bool hasLang();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that identify the layer to which a feature applies
 */
struct LayeridentMixIn {

    LayeridentMixIn(BaseMeiElement *b);

    string getLayerValue() throw (AttributeNotFoundException);
    MeiAttribute* getLayer() throw (AttributeNotFoundException);
    void setLayer(string _layer);
    bool hasLayer();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes for identifying the staff line with which a feature is associated
 */
struct LinelocMixIn {

    LinelocMixIn(BaseMeiElement *b);

    string getLineValue() throw (AttributeNotFoundException);
    MeiAttribute* getLine() throw (AttributeNotFoundException);
    void setLine(string _line);
    bool hasLine();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record the visual rendition of lines
 */
struct LinerendMixIn {

    LinerendMixIn(BaseMeiElement *b);

    string getRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(string _rend);
    bool hasRend();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes common to all linking elements
 */
struct LinkCommonMixIn {

    LinkCommonMixIn(BaseMeiElement *b);

    string getActuateValue() throw (AttributeNotFoundException);
    MeiAttribute* getActuate() throw (AttributeNotFoundException);
    void setActuate(string _actuate);
    bool hasActuate();

    string getRoleValue() throw (AttributeNotFoundException);
    MeiAttribute* getRole() throw (AttributeNotFoundException);
    void setRole(string _role);
    bool hasRole();

    string getShowValue() throw (AttributeNotFoundException);
    MeiAttribute* getShow() throw (AttributeNotFoundException);
    void setShow(string _show);
    bool hasShow();

    string getTargettypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getTargettype() throw (AttributeNotFoundException);
    void setTargettype(string _targettype);
    bool hasTargettype();

    string getTitleValue() throw (AttributeNotFoundException);
    MeiAttribute* getTitle() throw (AttributeNotFoundException);
    void setTitle(string _title);
    bool hasTitle();


    private:
         BaseMeiElement *b;
};

/** \brief   Linking attributes for external referencing elements
 */
struct LinkExternalMixIn {

    LinkExternalMixIn(BaseMeiElement *b);

    string getHrefValue() throw (AttributeNotFoundException);
    MeiAttribute* getHref() throw (AttributeNotFoundException);
    void setHref(string _href);
    bool hasHref();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe default typography of lyrics
 */
struct LyricstyleMixIn {

    LyricstyleMixIn(BaseMeiElement *b);

    string getLyricAlignValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricAlign() throw (AttributeNotFoundException);
    void setLyricAlign(string _lyricalign);
    bool hasLyricAlign();

    string getLyricFamValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricFam() throw (AttributeNotFoundException);
    void setLyricFam(string _lyricfam);
    bool hasLyricFam();

    string getLyricNameValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricName() throw (AttributeNotFoundException);
    void setLyricName(string _lyricname);
    bool hasLyricName();

    string getLyricSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricSize() throw (AttributeNotFoundException);
    void setLyricSize(string _lyricsize);
    bool hasLyricSize();

    string getLyricStyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricStyle() throw (AttributeNotFoundException);
    void setLyricStyle(string _lyricstyle);
    bool hasLyricStyle();

    string getLyricWeightValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricWeight() throw (AttributeNotFoundException);
    void setLyricWeight(string _lyricweight);
    bool hasLyricWeight();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record the unit of measurement in which a value is expressed
 */
struct MeasurementMixIn {

    MeasurementMixIn(BaseMeiElement *b);

    string getUnitValue() throw (AttributeNotFoundException);
    MeiAttribute* getUnit() throw (AttributeNotFoundException);
    void setUnit(string _unit);
    bool hasUnit();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe horizontal dimensions
 */
struct WidthMixIn {

    WidthMixIn(BaseMeiElement *b);

    string getWidthValue() throw (AttributeNotFoundException);
    MeiAttribute* getWidth() throw (AttributeNotFoundException);
    void setWidth(string _width);
    bool hasWidth();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes describing a writing medium, such as pencil or ink
 */
struct MediumMixIn {

    MediumMixIn(BaseMeiElement *b);

    string getMediumValue() throw (AttributeNotFoundException);
    MeiAttribute* getMedium() throw (AttributeNotFoundException);
    void setMedium(string _medium);
    bool hasMedium();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record the version of MEI in use
 */
struct MeiversionMixIn {

    MeiversionMixIn(BaseMeiElement *b);

    string getMeiversionValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeiversion() throw (AttributeNotFoundException);
    void setMeiversion(string _meiversion);
    bool hasMeiversion();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that provide information about a structure's conformance to the
 *           prevailing meter.
 */
struct MeterconformanceMixIn {

    MeterconformanceMixIn(BaseMeiElement *b);

    string getMetconValue() throw (AttributeNotFoundException);
    MeiAttribute* getMetcon() throw (AttributeNotFoundException);
    void setMetcon(string _metcon);
    bool hasMetcon();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that provide information about a measure's conformance to the
 *           prevailing meter.
 */
struct MeterconformanceBarMixIn {

    MeterconformanceBarMixIn(BaseMeiElement *b);

    string getMetconValue() throw (AttributeNotFoundException);
    MeiAttribute* getMetcon() throw (AttributeNotFoundException);
    void setMetcon(string _metcon);
    bool hasMetcon();

    string getControlValue() throw (AttributeNotFoundException);
    MeiAttribute* getControl() throw (AttributeNotFoundException);
    void setControl(string _control);
    bool hasControl();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by staffDef and scoreDef to provide default values for attributes in the
 *           logical domain related to meter signature
 */
struct MetersLogMixIn {

    MetersLogMixIn(BaseMeiElement *b);

    string getMeterCountValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterCount() throw (AttributeNotFoundException);
    void setMeterCount(string _metercount);
    bool hasMeterCount();

    string getMeterUnitValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterUnit() throw (AttributeNotFoundException);
    void setMeterUnit(string _meterunit);
    bool hasMeterUnit();


    private:
         BaseMeiElement *b;
};

/** \brief   Used by staffDef and scoreDef to provide default values for attributes in the
 *           visual domain related to meter signature
 */
struct MetersVisMixIn {

    MetersVisMixIn(BaseMeiElement *b);

    string getMeterRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterRend() throw (AttributeNotFoundException);
    void setMeterRend(string _meterrend);
    bool hasMeterRend();

    string getMeterShowchangeValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterShowchange() throw (AttributeNotFoundException);
    void setMeterShowchange(string _metershowchange);
    bool hasMeterShowchange();

    string getMeterSymValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterSym() throw (AttributeNotFoundException);
    void setMeterSym(string _metersym);
    bool hasMeterSym();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record tempo in terms of beats per minute
 */
struct MmtempoMixIn {

    MmtempoMixIn(BaseMeiElement *b);

    string getMmValue() throw (AttributeNotFoundException);
    MeiAttribute* getMm() throw (AttributeNotFoundException);
    void setMm(string _mm);
    bool hasMm();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that indicate programmatic numbering
 */
struct MultinummeasuresMixIn {

    MultinummeasuresMixIn(BaseMeiElement *b);

    string getMultiNumberValue() throw (AttributeNotFoundException);
    MeiAttribute* getMultiNumber() throw (AttributeNotFoundException);
    void setMultiNumber(string _multinumber);
    bool hasMultiNumber();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record written octave
 */
struct OctaveMixIn {

    OctaveMixIn(BaseMeiElement *b);

    string getOctValue() throw (AttributeNotFoundException);
    MeiAttribute* getOct() throw (AttributeNotFoundException);
    void setOct(string _oct);
    bool hasOct();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record a default value for octave
 */
struct OctavedefaultMixIn {

    OctavedefaultMixIn(BaseMeiElement *b);

    string getOctaveDefaultValue() throw (AttributeNotFoundException);
    MeiAttribute* getOctaveDefault() throw (AttributeNotFoundException);
    void setOctaveDefault(string _octavedefault);
    bool hasOctaveDefault();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record placement of notes on a single-line staff
 */
struct OnelinestaffMixIn {

    OnelinestaffMixIn(BaseMeiElement *b);

    string getOnthelineValue() throw (AttributeNotFoundException);
    MeiAttribute* getOntheline() throw (AttributeNotFoundException);
    void setOntheline(string _ontheline);
    bool hasOntheline();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes describing the amount and direction of octave displacement
 */
struct OctavedisplacementMixIn {

    OctavedisplacementMixIn(BaseMeiElement *b);

    string getDisValue() throw (AttributeNotFoundException);
    MeiAttribute* getDis() throw (AttributeNotFoundException);
    void setDis(string _dis);
    bool hasDis();

    string getDisPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getDisPlace() throw (AttributeNotFoundException);
    void setDisPlace(string _displace);
    bool hasDisPlace();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes listing the participants in a collection
 */
struct ParticipantidentMixIn {

    ParticipantidentMixIn(BaseMeiElement *b);

    string getPlistValue() throw (AttributeNotFoundException);
    MeiAttribute* getPlist() throw (AttributeNotFoundException);
    void setPlist(string _plist);
    bool hasPlist();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record written pitch name
 */
struct PitchMixIn {

    PitchMixIn(BaseMeiElement *b);

    string getPnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getPname() throw (AttributeNotFoundException);
    void setPname(string _pname);
    bool hasPname();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes capturing placement information
 */
struct PlacementMixIn {

    PlacementMixIn(BaseMeiElement *b);

    string getPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getPlace() throw (AttributeNotFoundException);
    void setPlace(string _place);
    bool hasPlace();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record relative size
 */
struct RelativesizeMixIn {

    RelativesizeMixIn(BaseMeiElement *b);

    string getSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getSize() throw (AttributeNotFoundException);
    void setSize(string _size);
    bool hasSize();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes capturing information regarding responsibility for some aspect of the
 *           text's creation, transcription, editing, or encoding.
 */
struct ResponsibilityMixIn {

    ResponsibilityMixIn(BaseMeiElement *b);

    string getRespValue() throw (AttributeNotFoundException);
    MeiAttribute* getResp() throw (AttributeNotFoundException);
    void setResp(string _resp);
    bool hasResp();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe relative size
 */
struct ScalableMixIn {

    ScalableMixIn(BaseMeiElement *b);

    string getScaleValue() throw (AttributeNotFoundException);
    MeiAttribute* getScale() throw (AttributeNotFoundException);
    void setScale(string _scale);
    bool hasScale();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe order within a collection of features
 */
struct SequenceMixIn {

    SequenceMixIn(BaseMeiElement *b);

    string getSeqValue() throw (AttributeNotFoundException);
    MeiAttribute* getSeq() throw (AttributeNotFoundException);
    void setSeq(string _seq);
    bool hasSeq();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes for recording the number of slashes that accompany a feature
 */
struct SlashcountMixIn {

    SlashcountMixIn(BaseMeiElement *b);

    string getSlashValue() throw (AttributeNotFoundException);
    MeiAttribute* getSlash() throw (AttributeNotFoundException);
    void setSlash(string _slash);
    bool hasSlash();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes for identifying the staff associated with the current feature
 */
struct StaffidentMixIn {

    StaffidentMixIn(BaseMeiElement *b);

    string getStaffValue() throw (AttributeNotFoundException);
    MeiAttribute* getStaff() throw (AttributeNotFoundException);
    void setStaff(string _staff);
    bool hasStaff();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that identify location on a staff in terms of lines and spaces
 */
struct StafflocMixIn {

    StafflocMixIn(BaseMeiElement *b);

    string getLocValue() throw (AttributeNotFoundException);
    MeiAttribute* getLoc() throw (AttributeNotFoundException);
    void setLoc(string _loc);
    bool hasLoc();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that identify a relative starting point
 */
struct StartidMixIn {

    StartidMixIn(BaseMeiElement *b);

    string getStartidValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartid() throw (AttributeNotFoundException);
    void setStartid(string _startid);
    bool hasStartid();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe the properties of stemmed features; that is, chords and
 *           notes
 */
struct StemmedMixIn {

    StemmedMixIn(BaseMeiElement *b);

    string getStemDirValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemDir() throw (AttributeNotFoundException);
    void setStemDir(string _stemdir);
    bool hasStemDir();

    string getStemLenValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemLen() throw (AttributeNotFoundException);
    void setStemLen(string _stemlen);
    bool hasStemLen();

    string getStemPosValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemPos() throw (AttributeNotFoundException);
    void setStemPos(string _stempos);
    bool hasStemPos();

    string getStemXValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemX() throw (AttributeNotFoundException);
    void setStemX(string _stemx);
    bool hasStemX();

    string getStemYValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemY() throw (AttributeNotFoundException);
    void setStemY(string _stemy);
    bool hasStemY();

    string getStemModValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemMod() throw (AttributeNotFoundException);
    void setStemMod(string _stemmod);
    bool hasStemMod();

    string getStemWithValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemWith() throw (AttributeNotFoundException);
    void setStemWith(string _stemwith);
    bool hasStemWith();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that hold associated sung text syllables
 */
struct SyltextMixIn {

    SyltextMixIn(BaseMeiElement *b);

    string getSylValue() throw (AttributeNotFoundException);
    MeiAttribute* getSyl() throw (AttributeNotFoundException);
    void setSyl(string _syl);
    bool hasSyl();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe default text typography
 */
struct TextstyleMixIn {

    TextstyleMixIn(BaseMeiElement *b);

    string getTextFamValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextFam() throw (AttributeNotFoundException);
    void setTextFam(string _textfam);
    bool hasTextFam();

    string getTextNameValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextName() throw (AttributeNotFoundException);
    void setTextName(string _textname);
    bool hasTextName();

    string getTextSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextSize() throw (AttributeNotFoundException);
    void setTextSize(string _textsize);
    bool hasTextSize();

    string getTextStyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextStyle() throw (AttributeNotFoundException);
    void setTextStyle(string _textstyle);
    bool hasTextStyle();

    string getTextWeightValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextWeight() throw (AttributeNotFoundException);
    void setTextWeight(string _textweight);
    bool hasTextWeight();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record a time stamp in terms of musical time, i.e.,
 *           beats[.fractional beat part]
 */
struct TimestampMusicalMixIn {

    TimestampMusicalMixIn(BaseMeiElement *b);

    string getTstampValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstamp() throw (AttributeNotFoundException);
    void setTstamp(string _tstamp);
    bool hasTstamp();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record a time stamp in terms of relative or real time.
 */
struct TimestampPerformedMixIn {

    TimestampPerformedMixIn(BaseMeiElement *b);

    string getTstampGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstampGes() throw (AttributeNotFoundException);
    void setTstampGes(string _tstampges);
    bool hasTstampGes();

    string getTstampRealValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstampReal() throw (AttributeNotFoundException);
    void setTstampReal(string _tstampreal);
    bool hasTstampReal();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe transposition
 */
struct TranspositionMixIn {

    TranspositionMixIn(BaseMeiElement *b);

    string getTransDiatValue() throw (AttributeNotFoundException);
    MeiAttribute* getTransDiat() throw (AttributeNotFoundException);
    void setTransDiat(string _transdiat);
    bool hasTransDiat();

    string getTransSemiValue() throw (AttributeNotFoundException);
    MeiAttribute* getTransSemi() throw (AttributeNotFoundException);
    void setTransSemi(string _transsemi);
    bool hasTransSemi();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes for indicating the presence of a tuplet
 */
struct TupletpresentMixIn {

    TupletpresentMixIn(BaseMeiElement *b);

    string getTupletValue() throw (AttributeNotFoundException);
    MeiAttribute* getTuplet() throw (AttributeNotFoundException);
    void setTuplet(string _tuplet);
    bool hasTuplet();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes which can be used to classify or sub-classify features
 */
struct TypedMixIn {

    TypedMixIn(BaseMeiElement *b);

    string getTypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getType() throw (AttributeNotFoundException);
    void setType(string _type);
    bool hasType();

    string getSubtypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getSubtype() throw (AttributeNotFoundException);
    void setSubtype(string _subtype);
    bool hasSubtype();


    private:
         BaseMeiElement *b;
};

/** \brief   Typographical attributes
 */
struct TypographyMixIn {

    TypographyMixIn(BaseMeiElement *b);

    string getFontfamValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontfam() throw (AttributeNotFoundException);
    void setFontfam(string _fontfam);
    bool hasFontfam();

    string getFontnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontname() throw (AttributeNotFoundException);
    void setFontname(string _fontname);
    bool hasFontname();

    string getFontsizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontsize() throw (AttributeNotFoundException);
    void setFontsize(string _fontsize);
    bool hasFontsize();

    string getFontstyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontstyle() throw (AttributeNotFoundException);
    void setFontstyle(string _fontstyle);
    bool hasFontstyle();

    string getFontweightValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontweight() throw (AttributeNotFoundException);
    void setFontweight(string _fontweight);
    bool hasFontweight();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes describing whether a feature should be displayed
 */
struct VisibilityMixIn {

    VisibilityMixIn(BaseMeiElement *b);

    string getVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getVisible() throw (AttributeNotFoundException);
    void setVisible(string _visible);
    bool hasVisible();


    private:
         BaseMeiElement *b;
};

/** \brief   Horizontal offset attributes
 */
struct VisualoffsetHoMixIn {

    VisualoffsetHoMixIn(BaseMeiElement *b);

    string getHoValue() throw (AttributeNotFoundException);
    MeiAttribute* getHo() throw (AttributeNotFoundException);
    void setHo(string _ho);
    bool hasHo();


    private:
         BaseMeiElement *b;
};

/** \brief   Horizontal offset attributes specified in terms of time
 */
struct VisualoffsetToMixIn {

    VisualoffsetToMixIn(BaseMeiElement *b);

    string getToValue() throw (AttributeNotFoundException);
    MeiAttribute* getTo() throw (AttributeNotFoundException);
    void setTo(string _to);
    bool hasTo();


    private:
         BaseMeiElement *b;
};

/** \brief   Vertical offset attributes
 */
struct VisualoffsetVoMixIn {

    VisualoffsetVoMixIn(BaseMeiElement *b);

    string getVoValue() throw (AttributeNotFoundException);
    MeiAttribute* getVo() throw (AttributeNotFoundException);
    void setVo(string _vo);
    bool hasVo();


    private:
         BaseMeiElement *b;
};

/** \brief   Horizontal offset requiring a pair of attributes
 */
struct Visualoffset2HoMixIn {

    Visualoffset2HoMixIn(BaseMeiElement *b);

    string getStarthoValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartho() throw (AttributeNotFoundException);
    void setStartho(string _startho);
    bool hasStartho();

    string getEndhoValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndho() throw (AttributeNotFoundException);
    void setEndho(string _endho);
    bool hasEndho();


    private:
         BaseMeiElement *b;
};

/** \brief   Horizontal offset attributes requiring a pair of attributes specified in terms
 *           of time
 */
struct Visualoffset2ToMixIn {

    Visualoffset2ToMixIn(BaseMeiElement *b);

    string getStarttoValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartto() throw (AttributeNotFoundException);
    void setStartto(string _startto);
    bool hasStartto();

    string getEndtoValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndto() throw (AttributeNotFoundException);
    void setEndto(string _endto);
    bool hasEndto();


    private:
         BaseMeiElement *b;
};

/** \brief   Output coordinate attributes. Some elements may have their exact rendered
 *           *output* coordinates recorded. x and y attributes indicate where to
 *           place the rendered output. Recording the coordinates of a feature in a facsimile
 *           requires the use of the facs attribute.
 */
struct XyMixIn {

    XyMixIn(BaseMeiElement *b);

    string getXValue() throw (AttributeNotFoundException);
    MeiAttribute* getX() throw (AttributeNotFoundException);
    void setX(string _x);
    bool hasX();

    string getYValue() throw (AttributeNotFoundException);
    MeiAttribute* getY() throw (AttributeNotFoundException);
    void setY(string _y);
    bool hasY();


    private:
         BaseMeiElement *b;
};

/** \brief   Output coordinate attributes. Some elements may need 2 coordinate pairs to
 *           record their rendered *output* coordinates. The attributes indicate
 *           where to place the rendered output. Recording the coordinates of a feature in a
 *           facsimile requires the use of the facs attribute.
 */
struct Xy2MixIn {

    Xy2MixIn(BaseMeiElement *b);

    string getX2Value() throw (AttributeNotFoundException);
    MeiAttribute* getX2() throw (AttributeNotFoundException);
    void setX2(string _x2);
    bool hasX2();

    string getY2Value() throw (AttributeNotFoundException);
    MeiAttribute* getY2() throw (AttributeNotFoundException);
    void setY2(string _y2);
    bool hasY2();


    private:
         BaseMeiElement *b;
};

/** \brief   Linking attributes for internal referencing elements
 */
struct LinkInternalMixIn {

    LinkInternalMixIn(BaseMeiElement *b);

    string getPlistValue() throw (AttributeNotFoundException);
    MeiAttribute* getPlist() throw (AttributeNotFoundException);
    void setPlist(string _plist);
    bool hasPlist();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes shared by names
 */
struct NameMixIn {

    NameMixIn(BaseMeiElement *b);

    string getNymrefValue() throw (AttributeNotFoundException);
    MeiAttribute* getNymref() throw (AttributeNotFoundException);
    void setNymref(string _nymref);
    bool hasNymref();

    string getRoleValue() throw (AttributeNotFoundException);
    MeiAttribute* getRole() throw (AttributeNotFoundException);
    void setRole(string _role);
    bool hasRole();

    string getDbkeyValue() throw (AttributeNotFoundException);
    MeiAttribute* getDbkey() throw (AttributeNotFoundException);
    void setDbkey(string _dbkey);
    bool hasDbkey();

    string getAuthorityValue() throw (AttributeNotFoundException);
    MeiAttribute* getAuthority() throw (AttributeNotFoundException);
    void setAuthority(string _authority);
    bool hasAuthority();

    string getAuthuriValue() throw (AttributeNotFoundException);
    MeiAttribute* getAuthuri() throw (AttributeNotFoundException);
    void setAuthuri(string _authuri);
    bool hasAuthuri();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes recording the IDs of the first and last elements of a sequence of
 *           elements to which the current element is associated.
 */
struct StartendidMixIn {

    StartendidMixIn(BaseMeiElement *b);

    string getEndidValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndid() throw (AttributeNotFoundException);
    void setEndid(string _endid);
    bool hasEndid();

    string getStartidValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartid() throw (AttributeNotFoundException);
    void setStartid(string _startid);
    bool hasStartid();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes for capturing momentary pitch inflection
 */
struct AccidentalArticulationSlurpresentTiepresentPitchedMixIn {

    AccidentalArticulationSlurpresentTiepresentPitchedMixIn(BaseMeiElement *b);

    string getAccidValue() throw (AttributeNotFoundException);
    MeiAttribute* getAccid() throw (AttributeNotFoundException);
    void setAccid(string _accid);
    bool hasAccid();

    string getArticValue() throw (AttributeNotFoundException);
    MeiAttribute* getArtic() throw (AttributeNotFoundException);
    void setArtic(string _artic);
    bool hasArtic();

    string getSlurValue() throw (AttributeNotFoundException);
    MeiAttribute* getSlur() throw (AttributeNotFoundException);
    void setSlur(string _slur);
    bool hasSlur();

    string getTieValue() throw (AttributeNotFoundException);
    MeiAttribute* getTie() throw (AttributeNotFoundException);
    void setTie(string _tie);
    bool hasTie();

    string getOctValue() throw (AttributeNotFoundException);
    MeiAttribute* getOct() throw (AttributeNotFoundException);
    void setOct(string _oct);
    bool hasOct();

    string getPnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getPname() throw (AttributeNotFoundException);
    void setPname(string _pname);
    bool hasPname();


    private:
         BaseMeiElement *b;
};

/** \brief   Visual offset attributes. Some items may have their location recorded in terms
 *           of pairs of offsets from their programmatically-determined             location.
 *           The startho and endho attributes record the horizontal offsets of the start and
 *           end points of the item, respectively. Similarly, the             startvo and
 *           endvo attributes record the vertical offsets of the start and end points of the
 *           item. The startto and endto attributes hold timestamp             offsets, the
 *           most common use of which is as alternatives to the ho attributes.
 */
struct Visualoffset2MixIn {

    Visualoffset2MixIn(BaseMeiElement *b);

    string getStartvoValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartvo() throw (AttributeNotFoundException);
    void setStartvo(string _startvo);
    bool hasStartvo();

    string getEndvoValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndvo() throw (AttributeNotFoundException);
    void setEndvo(string _endvo);
    bool hasEndvo();

    string getStarthoValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartho() throw (AttributeNotFoundException);
    void setStartho(string _startho);
    bool hasStartho();

    string getEndhoValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndho() throw (AttributeNotFoundException);
    void setEndho(string _endho);
    bool hasEndho();

    string getStarttoValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartto() throw (AttributeNotFoundException);
    void setStartto(string _startto);
    bool hasStartto();

    string getEndtoValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndto() throw (AttributeNotFoundException);
    void setEndto(string _endto);
    bool hasEndto();


    private:
         BaseMeiElement *b;
};

/** \brief   Visual offset attributes. Some items may have their location recorded in terms
 *           of offsets from their programmatically-determined location. The             ho
 *           attribute records the horizontal offset while vo records the vertical. The to
 *           attribute holds a timestamp offset, the most common use of which is
 *           as an alternative to the ho attribute.
 */
struct VisualoffsetMixIn {

    VisualoffsetMixIn(BaseMeiElement *b);

    string getHoValue() throw (AttributeNotFoundException);
    MeiAttribute* getHo() throw (AttributeNotFoundException);
    void setHo(string _ho);
    bool hasHo();

    string getToValue() throw (AttributeNotFoundException);
    MeiAttribute* getTo() throw (AttributeNotFoundException);
    void setTo(string _to);
    bool hasTo();

    string getVoValue() throw (AttributeNotFoundException);
    MeiAttribute* getVo() throw (AttributeNotFoundException);
    void setVo(string _vo);
    bool hasVo();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that apply to all written events, e.g., note, chord, rest, etc.
 */
struct EventMixIn {

    EventMixIn(BaseMeiElement *b);

    string getLayerValue() throw (AttributeNotFoundException);
    MeiAttribute* getLayer() throw (AttributeNotFoundException);
    void setLayer(string _layer);
    bool hasLayer();

    string getStaffValue() throw (AttributeNotFoundException);
    MeiAttribute* getStaff() throw (AttributeNotFoundException);
    void setStaff(string _staff);
    bool hasStaff();

    string getTstampValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstamp() throw (AttributeNotFoundException);
    void setTstamp(string _tstamp);
    bool hasTstamp();

    string getTstampGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstampGes() throw (AttributeNotFoundException);
    void setTstampGes(string _tstampges);
    bool hasTstampGes();

    string getTstampRealValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstampReal() throw (AttributeNotFoundException);
    void setTstampReal(string _tstampreal);
    bool hasTstampReal();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes shared by events which rely on other events for their existence. For
 *           example, a slur/phrase marking must be drawn between or over a             group
 *           of notes. The slur is therefore a control event.
 */
struct ControleventMixIn {

    ControleventMixIn(BaseMeiElement *b);

    string getLayerValue() throw (AttributeNotFoundException);
    MeiAttribute* getLayer() throw (AttributeNotFoundException);
    void setLayer(string _layer);
    bool hasLayer();

    string getPlistValue() throw (AttributeNotFoundException);
    MeiAttribute* getPlist() throw (AttributeNotFoundException);
    void setPlist(string _plist);
    bool hasPlist();

    string getStaffValue() throw (AttributeNotFoundException);
    MeiAttribute* getStaff() throw (AttributeNotFoundException);
    void setStaff(string _staff);
    bool hasStaff();

    string getTstampValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstamp() throw (AttributeNotFoundException);
    void setTstamp(string _tstamp);
    bool hasTstamp();

    string getTstampGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstampGes() throw (AttributeNotFoundException);
    void setTstampGes(string _tstampges);
    bool hasTstampGes();

    string getTstampRealValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstampReal() throw (AttributeNotFoundException);
    void setTstampReal(string _tstampreal);
    bool hasTstampReal();


    private:
         BaseMeiElement *b;
};

#endif // SHAREDMIXINS_H_