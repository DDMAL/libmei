
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

#ifndef SHAREDMIXIN_H_
#define SHAREDMIXIN_H_

#include "meielement.h"
#include "exceptions.h"



struct AccidLogMixIn {
    AccidLogMixIn(BaseMeiElement *b);
    virtual ~AccidLogMixIn() {};
    
    /** \brief   records the function of an accidental.
    */

    string getFuncValue() throw (AttributeNotFoundException);
    MeiAttribute* getFunc() throw (AttributeNotFoundException);
    void setFunc(std::string _func);
    bool hasFunc();
    void removeFunc();

    private:
        BaseMeiElement *b;
};


struct AccidVisMixIn {
    AccidVisMixIn(BaseMeiElement *b);
    virtual ~AccidVisMixIn() {};
    
    /** \brief   captures the placement of the item with respect to the staff with which it is
    * associated.
    */

    string getPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getPlace() throw (AttributeNotFoundException);
    void setPlace(std::string _place);
    bool hasPlace();
    void removePlace();

    private:
        BaseMeiElement *b;
};


struct AccidentalMixIn {
    AccidentalMixIn(BaseMeiElement *b);
    virtual ~AccidentalMixIn() {};
    
    /** \brief   captures a written accidental.
    */

    string getAccidValue() throw (AttributeNotFoundException);
    MeiAttribute* getAccid() throw (AttributeNotFoundException);
    void setAccid(std::string _accid);
    bool hasAccid();
    void removeAccid();

    private:
        BaseMeiElement *b;
};


struct AccidentalPerformedMixIn {
    AccidentalPerformedMixIn(BaseMeiElement *b);
    virtual ~AccidentalPerformedMixIn() {};
    
    /** \brief   records the performed pitch inflection when it differs from the written
    * accidental.
    */

    string getAccidGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getAccidGes() throw (AttributeNotFoundException);
    void setAccidGes(std::string _accidges);
    bool hasAccidGes();
    void removeAccidGes();

    private:
        BaseMeiElement *b;
};


struct AltsymMixIn {
    AltsymMixIn(BaseMeiElement *b);
    virtual ~AltsymMixIn() {};
    
    /** \brief   provides a way of pointing to a user-defined symbol. It must contain an ID of a
    * <symbolDef> element elsewhere in the document.
    */

    string getAltsymValue() throw (AttributeNotFoundException);
    MeiAttribute* getAltsym() throw (AttributeNotFoundException);
    void setAltsym(std::string _altsym);
    bool hasAltsym();
    void removeAltsym();

    private:
        BaseMeiElement *b;
};


struct ArticulationMixIn {
    ArticulationMixIn(BaseMeiElement *b);
    virtual ~ArticulationMixIn() {};
    
    /** \brief   encodes the written articulation(s). Articulations are normally encoded in order
    * from the note head outward; that is, away from the stem. See additional notes at
    * att.vis.note. Only articulations should be encoded in the artic attribute;
    * fingerings should be encoded using the <dir> element.
    */

    string getArticValue() throw (AttributeNotFoundException);
    MeiAttribute* getArtic() throw (AttributeNotFoundException);
    void setArtic(std::string _artic);
    bool hasArtic();
    void removeArtic();

    private:
        BaseMeiElement *b;
};


struct ArticulationPerformedMixIn {
    ArticulationPerformedMixIn(BaseMeiElement *b);
    virtual ~ArticulationPerformedMixIn() {};
    
    /** \brief   records performed articulation that differs from the written value.
    */

    string getArticGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getArticGes() throw (AttributeNotFoundException);
    void setArticGes(std::string _articges);
    bool hasArticGes();
    void removeArticGes();

    private:
        BaseMeiElement *b;
};


struct AugmentdotsMixIn {
    AugmentdotsMixIn(BaseMeiElement *b);
    virtual ~AugmentdotsMixIn() {};
    
    /** \brief   records the number of augmentation dots required by a dotted duration.
    */

    string getDotsValue() throw (AttributeNotFoundException);
    MeiAttribute* getDots() throw (AttributeNotFoundException);
    void setDots(std::string _dots);
    bool hasDots();
    void removeDots();

    private:
        BaseMeiElement *b;
};


struct AuthorizedMixIn {
    AuthorizedMixIn(BaseMeiElement *b);
    virtual ~AuthorizedMixIn() {};
    
    /** \brief   a name or label associated with the controlled vocabulary from which the value
    * is taken.
    */

    string getAuthorityValue() throw (AttributeNotFoundException);
    MeiAttribute* getAuthority() throw (AttributeNotFoundException);
    void setAuthority(std::string _authority);
    bool hasAuthority();
    void removeAuthority();

    /** \brief   the web-accessible location of the controlled vocabulary from which the value is
    * taken.
    */

    string getAuthuriValue() throw (AttributeNotFoundException);
    MeiAttribute* getAuthuri() throw (AttributeNotFoundException);
    void setAuthuri(std::string _authURI);
    bool hasAuthuri();
    void removeAuthuri();

    private:
        BaseMeiElement *b;
};


struct BarlineLogMixIn {
    BarlineLogMixIn(BaseMeiElement *b);
    virtual ~BarlineLogMixIn() {};
    
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


struct BarplacementMixIn {
    BarplacementMixIn(BaseMeiElement *b);
    virtual ~BarplacementMixIn() {};
    
    /** \brief   records the location of a bar line.
    */

    string getBarplaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getBarplace() throw (AttributeNotFoundException);
    void setBarplace(std::string _barplace);
    bool hasBarplace();
    void removeBarplace();

    /** \brief   If takt bar lines are to be used, then the taktplace attribute may be used to
    * denote the staff location of the shortened bar line. The location may include
    * staff lines, spaces, and the spaces directly above and below the staff. The
    * value ranges between 0 (just below the staff) to 2 * number of staff lines
    * (directly above the staff). For example, on a 5-line staff the lines would be
    * numbered 1,3,5,7, and 9 while the spaces would be numbered 0,2,4,6,8,10. For
    * example, a value of '9' puts the bar line through the top line of a 5-line
    * staff.
    */

    string getTaktplaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getTaktplace() throw (AttributeNotFoundException);
    void setTaktplace(std::string _taktplace);
    bool hasTaktplace();
    void removeTaktplace();

    private:
        BaseMeiElement *b;
};


struct BeamingVisMixIn {
    BeamingVisMixIn(BaseMeiElement *b);
    virtual ~BeamingVisMixIn() {};
    
    /** \brief   encodes whether a beam is "feathered" and in which direction.
    */

    string getBeamRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamRend() throw (AttributeNotFoundException);
    void setBeamRend(std::string _beamrend);
    bool hasBeamRend();
    void removeBeamRend();

    /** \brief   captures beam slope.
    */

    string getBeamSlopeValue() throw (AttributeNotFoundException);
    MeiAttribute* getBeamSlope() throw (AttributeNotFoundException);
    void setBeamSlope(std::string _beamslope);
    bool hasBeamSlope();
    void removeBeamSlope();

    private:
        BaseMeiElement *b;
};


struct BiblMixIn {
    BiblMixIn(BaseMeiElement *b);
    virtual ~BiblMixIn() {};
    
    /** \brief   contains a reference to a field or element in another descriptive encoding
    * system to which this MEI element is comparable. Mapping elements from one system
    * to another may help a repository harvest selected data from the MEI file to
    * build a basic catalog record. The encoding system from which fields are taken
    * must be specified. When possible, subfields as well as fields should be
    * specified, e.g., subfields within MARC fields.
    */

    string getAnalogValue() throw (AttributeNotFoundException);
    MeiAttribute* getAnalog() throw (AttributeNotFoundException);
    void setAnalog(std::string _analog);
    bool hasAnalog();
    void removeAnalog();

    private:
        BaseMeiElement *b;
};


struct CalendaredMixIn {
    CalendaredMixIn(BaseMeiElement *b);
    virtual ~CalendaredMixIn() {};
    
    /** \brief   indicates the calendar system to which a date belongs, for example, Gregorian,
    * Julian, Roman, Mosaic, Revolutionary, Islamic, etc.
    */

    string getCalendarValue() throw (AttributeNotFoundException);
    MeiAttribute* getCalendar() throw (AttributeNotFoundException);
    void setCalendar(std::string _calendar);
    bool hasCalendar();
    void removeCalendar();

    private:
        BaseMeiElement *b;
};


struct CanonicalMixIn {
    CanonicalMixIn(BaseMeiElement *b);
    virtual ~CanonicalMixIn() {};
    
    /** \brief   used to record a value which serves as a primary key in an external database.
    */

    string getDbkeyValue() throw (AttributeNotFoundException);
    MeiAttribute* getDbkey() throw (AttributeNotFoundException);
    void setDbkey(std::string _dbkey);
    bool hasDbkey();
    void removeDbkey();

    private:
        BaseMeiElement *b;
};


struct ChordVisMixIn {
    ChordVisMixIn(BaseMeiElement *b);
    virtual ~ChordVisMixIn() {};
    
    /** \brief   indicates a single alternative note head should be displayed instead of
    * individual note heads. See Read, p. 320-321, re: tone clusters.
    */

    string getClusterValue() throw (AttributeNotFoundException);
    MeiAttribute* getCluster() throw (AttributeNotFoundException);
    void setCluster(std::string _cluster);
    bool hasCluster();
    void removeCluster();

    private:
        BaseMeiElement *b;
};


struct CleffingLogMixIn {
    CleffingLogMixIn(BaseMeiElement *b);
    virtual ~CleffingLogMixIn() {};
    
    /** \brief   encodes a value for the clef symbol.
    */

    string getClefShapeValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefShape() throw (AttributeNotFoundException);
    void setClefShape(std::string _clefshape);
    bool hasClefShape();
    void removeClefShape();

    /** \brief   contains a default value for the position of the clef. The value must be in the
    * range between 1 and the number of lines on the staff. The numbering of lines
    * starts with the lowest line of the staff.
    */

    string getClefLineValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefLine() throw (AttributeNotFoundException);
    void setClefLine(std::string _clefline);
    bool hasClefLine();
    void removeClefLine();

    /** \brief   records the amount of octave displacement to be applied to the clef.
    */

    string getClefDisValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefDis() throw (AttributeNotFoundException);
    void setClefDis(std::string _clefdis);
    bool hasClefDis();
    void removeClefDis();

    /** \brief   records the direction of octave displacement to be applied to the clef.
    */

    string getClefDisPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefDisPlace() throw (AttributeNotFoundException);
    void setClefDisPlace(std::string _clefdisplace);
    bool hasClefDisPlace();
    void removeClefDisPlace();

    private:
        BaseMeiElement *b;
};


struct CleffingVisMixIn {
    CleffingVisMixIn(BaseMeiElement *b);
    virtual ~CleffingVisMixIn() {};
    
    /** \brief   describes the color of the clef.
    */

    string getClefColorValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefColor() throw (AttributeNotFoundException);
    void setClefColor(std::string _clefcolor);
    bool hasClefColor();
    void removeClefColor();

    /** \brief   determines whether the clef is to be displayed.
    */

    string getClefVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getClefVisible() throw (AttributeNotFoundException);
    void setClefVisible(std::string _clefvisible);
    bool hasClefVisible();
    void removeClefVisible();

    private:
        BaseMeiElement *b;
};


struct ClefshapeMixIn {
    ClefshapeMixIn(BaseMeiElement *b);
    virtual ~ClefshapeMixIn() {};
    
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


struct ColorMixIn {
    ColorMixIn(BaseMeiElement *b);
    virtual ~ColorMixIn() {};
    
    /** \brief   used to indicate visual appearance. Do not confuse this with the musical term
    * 'color' as used in pre-CMN notation.
    */

    string getColorValue() throw (AttributeNotFoundException);
    MeiAttribute* getColor() throw (AttributeNotFoundException);
    void setColor(std::string _color);
    bool hasColor();
    void removeColor();

    private:
        BaseMeiElement *b;
};


struct ColorationMixIn {
    ColorationMixIn(BaseMeiElement *b);
    virtual ~ColorationMixIn() {};
    
    /** \brief   indicates this feature is 'colored'; that is, it is a participant in a change in
    * rhythmic values. In mensural notation, coloration is indicated by colored notes
    * (red, black, etc.) where void notes would otherwise occur. In CMN, coloration is
    * indicated by an inverse color; that is, the note head is void when it would
    * otherwise be filled and vice versa.
    */

    string getColoredValue() throw (AttributeNotFoundException);
    MeiAttribute* getColored() throw (AttributeNotFoundException);
    void setColored(std::string _colored);
    bool hasColored();
    void removeColored();

    private:
        BaseMeiElement *b;
};


struct CommonMixIn {
    CommonMixIn(BaseMeiElement *b);
    virtual ~CommonMixIn() {};
    
    /** \brief   regularizes the naming of an element and thus facilitates building links between
    * it and other resources. Each id attribute within a document must have a unique
    * value.
    */

    string getIdValue() throw (AttributeNotFoundException);
    MeiAttribute* getId() throw (AttributeNotFoundException);
    void setId(std::string _id);
    bool hasId();
    void removeId();

    /** \brief   provides a label for an element. The value may be any string.
    */

    string getLabelValue() throw (AttributeNotFoundException);
    MeiAttribute* getLabel() throw (AttributeNotFoundException);
    void setLabel(std::string _label);
    bool hasLabel();
    void removeLabel();

    /** \brief   provides a name or number designation for an element. While the value need not
    * be unique, it is required to be a single token.
    */

    string getNValue() throw (AttributeNotFoundException);
    MeiAttribute* getN() throw (AttributeNotFoundException);
    void setN(std::string _n);
    bool hasN();
    void removeN();

    /** \brief   provides a base URI reference with which applications can resolve relative URI
    * references into absolute URI references.
    */

    string getBaseValue() throw (AttributeNotFoundException);
    MeiAttribute* getBase() throw (AttributeNotFoundException);
    void setBase(std::string _base);
    bool hasBase();
    void removeBase();

    private:
        BaseMeiElement *b;
};


struct CoordinatedMixIn {
    CoordinatedMixIn(BaseMeiElement *b);
    virtual ~CoordinatedMixIn() {};
    
    /** \brief   indicates the upper-left corner x coordinate.
    */

    string getUlxValue() throw (AttributeNotFoundException);
    MeiAttribute* getUlx() throw (AttributeNotFoundException);
    void setUlx(std::string _ulx);
    bool hasUlx();
    void removeUlx();

    /** \brief   indicates the upper-left corner y coordinate.
    */

    string getUlyValue() throw (AttributeNotFoundException);
    MeiAttribute* getUly() throw (AttributeNotFoundException);
    void setUly(std::string _uly);
    bool hasUly();
    void removeUly();

    /** \brief   indicates the lower-right corner x coordinate.
    */

    string getLrxValue() throw (AttributeNotFoundException);
    MeiAttribute* getLrx() throw (AttributeNotFoundException);
    void setLrx(std::string _lrx);
    bool hasLrx();
    void removeLrx();

    /** \brief   indicates the lower-left corner x coordinate.
    */

    string getLryValue() throw (AttributeNotFoundException);
    MeiAttribute* getLry() throw (AttributeNotFoundException);
    void setLry(std::string _lry);
    bool hasLry();
    void removeLry();

    private:
        BaseMeiElement *b;
};


struct CurvatureMixIn {
    CurvatureMixIn(BaseMeiElement *b);
    virtual ~CurvatureMixIn() {};
    
    /** \brief   records the placement of Bezier control points as a series of space-separated xy
    * coordinates, e.g., 19 45 -32 118.
    */

    string getBezierValue() throw (AttributeNotFoundException);
    MeiAttribute* getBezier() throw (AttributeNotFoundException);
    void setBezier(std::string _bezier);
    bool hasBezier();
    void removeBezier();

    /** \brief   describes a curve as a set of distance values above or below an imaginary line
    * connecting the endpoints of the curve. The bulge attribute must contain one or
    * more decimal values expressed in inter-line units.
    */

    string getBulgeValue() throw (AttributeNotFoundException);
    MeiAttribute* getBulge() throw (AttributeNotFoundException);
    void setBulge(std::string _bulge);
    bool hasBulge();
    void removeBulge();

    /** \brief   describes a curve with a generic term indicating the direction of curvature.
    */

    string getCurvedirValue() throw (AttributeNotFoundException);
    MeiAttribute* getCurvedir() throw (AttributeNotFoundException);
    void setCurvedir(std::string _curvedir);
    bool hasCurvedir();
    void removeCurvedir();

    private:
        BaseMeiElement *b;
};


struct CurverendMixIn {
    CurverendMixIn(BaseMeiElement *b);
    virtual ~CurverendMixIn() {};
    
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


struct CustosLogMixIn {
    CustosLogMixIn(BaseMeiElement *b);
    virtual ~CustosLogMixIn() {};
    
    /** \brief   encodes the target note when its pitch differs from the pitch at which the
    * custos appears.
    */

    string getTargetValue() throw (AttributeNotFoundException);
    MeiAttribute* getTarget() throw (AttributeNotFoundException);
    void setTarget(std::string _target);
    bool hasTarget();
    void removeTarget();

    private:
        BaseMeiElement *b;
};


struct DatableMixIn {
    DatableMixIn(BaseMeiElement *b);
    virtual ~DatableMixIn() {};
    
    /** \brief   contains the end point of a date range.
    */

    string getEnddateValue() throw (AttributeNotFoundException);
    MeiAttribute* getEnddate() throw (AttributeNotFoundException);
    void setEnddate(std::string _enddate);
    bool hasEnddate();
    void removeEnddate();

    /** \brief   contains an upper boundary for an uncertain date.
    */

    string getNotafterValue() throw (AttributeNotFoundException);
    MeiAttribute* getNotafter() throw (AttributeNotFoundException);
    void setNotafter(std::string _notafter);
    bool hasNotafter();
    void removeNotafter();

    /** \brief   contains a lower boundary for an uncertain date.
    */

    string getNotbeforeValue() throw (AttributeNotFoundException);
    MeiAttribute* getNotbefore() throw (AttributeNotFoundException);
    void setNotbefore(std::string _notbefore);
    bool hasNotbefore();
    void removeNotbefore();

    /** \brief   contains the starting point of a date range.
    */

    string getStartdateValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartdate() throw (AttributeNotFoundException);
    void setStartdate(std::string _startdate);
    bool hasStartdate();
    void removeStartdate();

    private:
        BaseMeiElement *b;
};


struct DatapointingMixIn {
    DatapointingMixIn(BaseMeiElement *b);
    virtual ~DatapointingMixIn() {};
    
    /** \brief   used to link metadata elements to one or more data-containing elements.
    */

    string getDataValue() throw (AttributeNotFoundException);
    MeiAttribute* getData() throw (AttributeNotFoundException);
    void setData(std::string _data);
    bool hasData();
    void removeData();

    private:
        BaseMeiElement *b;
};


struct DeclaringMixIn {
    DeclaringMixIn(BaseMeiElement *b);
    virtual ~DeclaringMixIn() {};
    
    /** \brief   identifies one or more metadata elements within the header, which are understood
    * to apply to the element bearing this attribute and its content.
    */

    string getDeclsValue() throw (AttributeNotFoundException);
    MeiAttribute* getDecls() throw (AttributeNotFoundException);
    void setDecls(std::string _decls);
    bool hasDecls();
    void removeDecls();

    private:
        BaseMeiElement *b;
};


struct DistancesMixIn {
    DistancesMixIn(BaseMeiElement *b);
    virtual ~DistancesMixIn() {};
    
    /** \brief   records the distance from the staff for dynamic marks in 1/2 inter-line units.
    */

    string getDynamDistValue() throw (AttributeNotFoundException);
    MeiAttribute* getDynamDist() throw (AttributeNotFoundException);
    void setDynamDist(std::string _dynamdist);
    bool hasDynamDist();
    void removeDynamDist();

    /** \brief   records the default distance from the staff of harmonic indications, such as
    * guitar chord grids or functional labels.
    */

    string getHarmDistValue() throw (AttributeNotFoundException);
    MeiAttribute* getHarmDist() throw (AttributeNotFoundException);
    void setHarmDist(std::string _harmdist);
    bool hasHarmDist();
    void removeHarmDist();

    /** \brief   determines how far from the staff to render text elements.
    */

    string getTextDistValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextDist() throw (AttributeNotFoundException);
    void setTextDist(std::string _textdist);
    bool hasTextDist();
    void removeTextDist();

    private:
        BaseMeiElement *b;
};


struct DotLogMixIn {
    DotLogMixIn(BaseMeiElement *b);
    virtual ~DotLogMixIn() {};
    
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


struct DurationDefaultMixIn {
    DurationDefaultMixIn(BaseMeiElement *b);
    virtual ~DurationDefaultMixIn() {};
    
    /** \brief   contains a default duration in those situations when the first note, rest,
    * chord, etc. in a measure does not have a duration specified.
    */

    string getDurDefaultValue() throw (AttributeNotFoundException);
    MeiAttribute* getDurDefault() throw (AttributeNotFoundException);
    void setDurDefault(std::string _durdefault);
    bool hasDurDefault();
    void removeDurDefault();

    private:
        BaseMeiElement *b;
};


struct DurationMusicalMixIn {
    DurationMusicalMixIn(BaseMeiElement *b);
    virtual ~DurationMusicalMixIn() {};
    
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


struct DurationPerformedMixIn {
    DurationPerformedMixIn(BaseMeiElement *b);
    virtual ~DurationPerformedMixIn() {};
    
    /** \brief   records performed duration information that differs from written duration. Its
    * value may be expressed in any convenient form, such as measures[s]+
    * beat[s].beatpart, ppq (MIDI clicks), Humdrum **recip values, or MusicXML
    * 'divisions', etc.
    */

    string getDurGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getDurGes() throw (AttributeNotFoundException);
    void setDurGes(std::string _durges);
    bool hasDurGes();
    void removeDurGes();

    private:
        BaseMeiElement *b;
};


struct DurationRatioMixIn {
    DurationRatioMixIn(BaseMeiElement *b);
    virtual ~DurationRatioMixIn() {};
    
    /** \brief   along with numbase, describes duration as a ratio. num is the first value in the
    * ratio, while numbase is the second.
    */

    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(std::string _num);
    bool hasNum();
    void removeNum();

    /** \brief   along with num, describes duration as a ratio. num is the first value in the
    * ratio, while numbase is the second.
    */

    string getNumbaseValue() throw (AttributeNotFoundException);
    MeiAttribute* getNumbase() throw (AttributeNotFoundException);
    void setNumbase(std::string _numbase);
    bool hasNumbase();
    void removeNumbase();

    private:
        BaseMeiElement *b;
};


struct DurationTimestampMixIn {
    DurationTimestampMixIn(BaseMeiElement *b);
    virtual ~DurationTimestampMixIn() {};
    
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


struct EnclosingcharsMixIn {
    EnclosingcharsMixIn(BaseMeiElement *b);
    virtual ~EnclosingcharsMixIn() {};
    
    /** \brief   records the characters often used to mark accidentals, articulations, and
    * sometimes notes as having a cautionary or editorial function. For an example of
    * cautionary accidentals enclosed in parentheses, see Read, p. 131, ex. 9-14.
    */

    string getEncloseValue() throw (AttributeNotFoundException);
    MeiAttribute* getEnclose() throw (AttributeNotFoundException);
    void setEnclose(std::string _enclose);
    bool hasEnclose();
    void removeEnclose();

    private:
        BaseMeiElement *b;
};


struct FermatapresentMixIn {
    FermatapresentMixIn(BaseMeiElement *b);
    virtual ~FermatapresentMixIn() {};
    
    /** \brief   indicates the attachment of a fermata to this element. If visual information
    * about the fermata needs to be recorded, then a <fermata> element should be
    * employed instead.
    */

    string getFermataValue() throw (AttributeNotFoundException);
    MeiAttribute* getFermata() throw (AttributeNotFoundException);
    void setFermata(std::string _fermata);
    bool hasFermata();
    void removeFermata();

    private:
        BaseMeiElement *b;
};


struct HandidentMixIn {
    HandidentMixIn(BaseMeiElement *b);
    virtual ~HandidentMixIn() {};
    
    /** \brief   signifies the hand responsible for an action. The value must be the ID of a
    * <hand> element declared in the header.
    */

    string getHandValue() throw (AttributeNotFoundException);
    MeiAttribute* getHand() throw (AttributeNotFoundException);
    void setHand(std::string _hand);
    bool hasHand();
    void removeHand();

    private:
        BaseMeiElement *b;
};


struct HorizontalalignMixIn {
    HorizontalalignMixIn(BaseMeiElement *b);
    virtual ~HorizontalalignMixIn() {};
    
    /** \brief   records horizontal alignment.
    */

    string getHalignValue() throw (AttributeNotFoundException);
    MeiAttribute* getHalign() throw (AttributeNotFoundException);
    void setHalign(std::string _halign);
    bool hasHalign();
    void removeHalign();

    private:
        BaseMeiElement *b;
};


struct InstrumentidentMixIn {
    InstrumentidentMixIn(BaseMeiElement *b);
    virtual ~InstrumentidentMixIn() {};
    
    /** \brief   provides a way of pointing to a MIDI instrument definition. It must contain the
    * ID of an <instrDef> element elsewhere in the document.
    */

    string getInstrValue() throw (AttributeNotFoundException);
    MeiAttribute* getInstr() throw (AttributeNotFoundException);
    void setInstr(std::string _instr);
    bool hasInstr();
    void removeInstr();

    private:
        BaseMeiElement *b;
};


struct InternetmediaMixIn {
    InternetmediaMixIn(BaseMeiElement *b);
    virtual ~InternetmediaMixIn() {};
    
    /** \brief   specifies the applicable MIME (multimedia internet mail extension) type. The
    * value should be a valid MIME media type defined by the Internet Engineering Task
    * Force in RFC 2046.
    */

    string getMimetypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getMimetype() throw (AttributeNotFoundException);
    void setMimetype(std::string _mimetype);
    bool hasMimetype();
    void removeMimetype();

    private:
        BaseMeiElement *b;
};


struct JoinedMixIn {
    JoinedMixIn(BaseMeiElement *b);
    virtual ~JoinedMixIn() {};
    
    /** \brief   used for linking visually separate slurs, sometimes necessary due to system
    * breaks, that form a single musical phrase. Also used to indicate a measure which
    * metrically completes the current one. Record the IDs of the separately encoded
    * components, excluding this one.
    */

    string getJoinValue() throw (AttributeNotFoundException);
    MeiAttribute* getJoin() throw (AttributeNotFoundException);
    void setJoin(std::string _join);
    bool hasJoin();
    void removeJoin();

    private:
        BaseMeiElement *b;
};


struct KeysigsLogMixIn {
    KeysigsLogMixIn(BaseMeiElement *b);
    virtual ~KeysigsLogMixIn() {};
    
    /** \brief   contains an accidental for the tonic key, if one is required, e.g., if key.pname
    * equals 'c' and key.accid equals 's', then a tonic of C# is indicated.
    */

    string getKeyAccidValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeyAccid() throw (AttributeNotFoundException);
    void setKeyAccid(std::string _keyaccid);
    bool hasKeyAccid();
    void removeKeyAccid();

    /** \brief   indicates major, minor, or other tonality.
    */

    string getKeyModeValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeyMode() throw (AttributeNotFoundException);
    void setKeyMode(std::string _keymode);
    bool hasKeyMode();
    void removeKeyMode();

    /** \brief   holds the pitch name of the tonic key, e.g. 'c' for the key of C.
    */

    string getKeyPnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeyPname() throw (AttributeNotFoundException);
    void setKeyPname(std::string _keypname);
    bool hasKeyPname();
    void removeKeyPname();

    /** \brief   indicates where the key lies in the circle of fifths.
    */

    string getKeySigValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeySig() throw (AttributeNotFoundException);
    void setKeySig(std::string _keysig);
    bool hasKeySig();
    void removeKeySig();

    /** \brief   Mixed key signatures, e.g. those consisting of a mixture of flats and sharps
    * (Read, p. 143, ex. 9-39), and key signatures with unorthodox placement of the
    * accidentals (Read, p. 141) must be indicated by setting the key.sig attribute to
    * 'mixed' and providing explicit key signature information in the key.sig.mixed
    * attribute or in the <keySig> element. It is intended that key.sig.mixed contain
    * a series of tokens with each token containing pitch name, accidental, and
    * octave, such as 'A4 Cs5 Ef5' that indicate what key accidentals should be
    * rendered and where they should be placed.
    */

    string getKeySigMixedValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeySigMixed() throw (AttributeNotFoundException);
    void setKeySigMixed(std::string _keysigmixed);
    bool hasKeySigMixed();
    void removeKeySigMixed();

    private:
        BaseMeiElement *b;
};


struct KeysigsVisMixIn {
    KeysigsVisMixIn(BaseMeiElement *b);
    virtual ~KeysigsVisMixIn() {};
    
    /** \brief   indicates whether the key signature should be displayed.
    */

    string getKeySigShowValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeySigShow() throw (AttributeNotFoundException);
    void setKeySigShow(std::string _keysigshow);
    bool hasKeySigShow();
    void removeKeySigShow();

    /** \brief   determines whether cautionary accidentals should be displayed at a key change.
    */

    string getKeySigShowchangeValue() throw (AttributeNotFoundException);
    MeiAttribute* getKeySigShowchange() throw (AttributeNotFoundException);
    void setKeySigShowchange(std::string _keysigshowchange);
    bool hasKeySigShowchange();
    void removeKeySigShowchange();

    private:
        BaseMeiElement *b;
};


struct LabelsAddlMixIn {
    LabelsAddlMixIn(BaseMeiElement *b);
    virtual ~LabelsAddlMixIn() {};
    
    /** \brief   provides a label for a group of staves on pages after the first page. Usually,
    * this label takes an abbreviated form.
    */

    string getLabelAbbrValue() throw (AttributeNotFoundException);
    MeiAttribute* getLabelAbbr() throw (AttributeNotFoundException);
    void setLabelAbbr(std::string _labelabbr);
    bool hasLabelAbbr();
    void removeLabelAbbr();

    private:
        BaseMeiElement *b;
};


struct LangMixIn {
    LangMixIn(BaseMeiElement *b);
    virtual ~LangMixIn() {};
    
    /** \brief   identifies the language of the element's content. The values for this attribute
    * are language 'tags' as defined in BCP 47. All language tags that make use of
    * private use sub-tags must be documented in a corresponding language element in
    * the MEI header whose id attribute is the same as the language tag's value.
    */

    string getLangValue() throw (AttributeNotFoundException);
    MeiAttribute* getLang() throw (AttributeNotFoundException);
    void setLang(std::string _lang);
    bool hasLang();
    void removeLang();

    private:
        BaseMeiElement *b;
};


struct LayeridentMixIn {
    LayeridentMixIn(BaseMeiElement *b);
    virtual ~LayeridentMixIn() {};
    
    /** \brief   identifies the layer to which a feature applies.
    */

    string getLayerValue() throw (AttributeNotFoundException);
    MeiAttribute* getLayer() throw (AttributeNotFoundException);
    void setLayer(std::string _layer);
    bool hasLayer();
    void removeLayer();

    private:
        BaseMeiElement *b;
};


struct LinelocMixIn {
    LinelocMixIn(BaseMeiElement *b);
    virtual ~LinelocMixIn() {};
    
    /** \brief   indicates the line upon which a feature stands. The value must be in the range
    * between 1 and the number of lines on the staff. The numbering of lines starts
    * with the lowest line of the staff.
    */

    string getLineValue() throw (AttributeNotFoundException);
    MeiAttribute* getLine() throw (AttributeNotFoundException);
    void setLine(std::string _line);
    bool hasLine();
    void removeLine();

    private:
        BaseMeiElement *b;
};


struct LinerendMixIn {
    LinerendMixIn(BaseMeiElement *b);
    virtual ~LinerendMixIn() {};
    
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


struct LinkCommonMixIn {
    LinkCommonMixIn(BaseMeiElement *b);
    virtual ~LinkCommonMixIn() {};
    
    /** \brief   defines whether a link occurs automatically or must be requested by the user. It
    * is used in conjunction with the show attribute to determine link behavior.
    */

    string getActuateValue() throw (AttributeNotFoundException);
    MeiAttribute* getActuate() throw (AttributeNotFoundException);
    void setActuate(std::string _actuate);
    bool hasActuate();
    void removeActuate();

    /** \brief   indicates a property of the entire link. The value of the role attribute must be
    * a URI reference as defined in [IETF RFC 2396], except that if the URI scheme
    * used is allowed to have absolute and relative forms, the URI portion must be
    * absolute. The URI reference identifies some resource that describes the intended
    * property. When no value is supplied, no particular role value is to be inferred.
    */

    string getRoleValue() throw (AttributeNotFoundException);
    MeiAttribute* getRole() throw (AttributeNotFoundException);
    void setRole(std::string _role);
    bool hasRole();
    void removeRole();

    /** \brief   defines how a remote resource is rendered.
    */

    string getShowValue() throw (AttributeNotFoundException);
    MeiAttribute* getShow() throw (AttributeNotFoundException);
    void setShow(std::string _show);
    bool hasShow();
    void removeShow();

    /** \brief   in contrast with the role attribute, allows the target resource to be
    * characterized using any convenient classification scheme or typology.
    */

    string getTargettypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getTargettype() throw (AttributeNotFoundException);
    void setTargettype(std::string _targettype);
    bool hasTargettype();
    void removeTargettype();

    /** \brief   contains a human-readable description of the entire link. A value is optional;
    * if a value is supplied, it should contain a string that describes the resource.
    * The use of this information is highly dependent on the type of processing being
    * done. It may be used, for example, to make titles available to applications used
    * by visually impaired users, or to create a table of links, or to present help
    * text that appears when a user lets a mouse pointer hover over a starting
    * resource.
    */

    string getTitleValue() throw (AttributeNotFoundException);
    MeiAttribute* getTitle() throw (AttributeNotFoundException);
    void setTitle(std::string _title);
    bool hasTitle();
    void removeTitle();

    private:
        BaseMeiElement *b;
};


struct LinkExternalMixIn {
    LinkExternalMixIn(BaseMeiElement *b);
    virtual ~LinkExternalMixIn() {};
    
    /** \brief   allows the use of an previously-undeclared URI to identify an external
    * electronic object.
    */

    string getHrefValue() throw (AttributeNotFoundException);
    MeiAttribute* getHref() throw (AttributeNotFoundException);
    void setHref(std::string _href);
    bool hasHref();
    void removeHref();

    private:
        BaseMeiElement *b;
};


struct LyricstyleMixIn {
    LyricstyleMixIn(BaseMeiElement *b);
    virtual ~LyricstyleMixIn() {};
    
    /** \brief   describes the alignment of lyric syllables associated with a note or chord.
    */

    string getLyricAlignValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricAlign() throw (AttributeNotFoundException);
    void setLyricAlign(std::string _lyricalign);
    bool hasLyricAlign();
    void removeLyricAlign();

    /** \brief   sets the font family default value for lyrics.
    */

    string getLyricFamValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricFam() throw (AttributeNotFoundException);
    void setLyricFam(std::string _lyricfam);
    bool hasLyricFam();
    void removeLyricFam();

    /** \brief   sets the font name default value for lyrics.
    */

    string getLyricNameValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricName() throw (AttributeNotFoundException);
    void setLyricName(std::string _lyricname);
    bool hasLyricName();
    void removeLyricName();

    /** \brief   sets the default font size value for lyrics.
    */

    string getLyricSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricSize() throw (AttributeNotFoundException);
    void setLyricSize(std::string _lyricsize);
    bool hasLyricSize();
    void removeLyricSize();

    /** \brief   sets the default font style value for lyrics.
    */

    string getLyricStyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricStyle() throw (AttributeNotFoundException);
    void setLyricStyle(std::string _lyricstyle);
    bool hasLyricStyle();
    void removeLyricStyle();

    /** \brief   sets the default font weight value for lyrics.
    */

    string getLyricWeightValue() throw (AttributeNotFoundException);
    MeiAttribute* getLyricWeight() throw (AttributeNotFoundException);
    void setLyricWeight(std::string _lyricweight);
    bool hasLyricWeight();
    void removeLyricWeight();

    private:
        BaseMeiElement *b;
};


struct MeasureLogMixIn {
    MeasureLogMixIn(BaseMeiElement *b);
    virtual ~MeasureLogMixIn() {};
    
    /** \brief   indicates the visual rendition of the left bar line. It is present here only for
    * facilitation of translation from legacy encodings which use it. Usually, it can
    * be safely ignored.
    */

    string getLeftValue() throw (AttributeNotFoundException);
    MeiAttribute* getLeft() throw (AttributeNotFoundException);
    void setLeft(std::string _left);
    bool hasLeft();
    void removeLeft();

    /** \brief   indicates the function of the right bar line and is structurally important.
    */

    string getRightValue() throw (AttributeNotFoundException);
    MeiAttribute* getRight() throw (AttributeNotFoundException);
    void setRight(std::string _right);
    bool hasRight();
    void removeRight();

    private:
        BaseMeiElement *b;
};


struct MeasurementMixIn {
    MeasurementMixIn(BaseMeiElement *b);
    virtual ~MeasurementMixIn() {};
    
    /** \brief   indicates the units used for a measurement, usually using the standard symbol
    * for the desired unit.
    */

    string getUnitValue() throw (AttributeNotFoundException);
    MeiAttribute* getUnit() throw (AttributeNotFoundException);
    void setUnit(std::string _unit);
    bool hasUnit();
    void removeUnit();

    private:
        BaseMeiElement *b;
};


struct MediumMixIn {
    MediumMixIn(BaseMeiElement *b);
    virtual ~MediumMixIn() {};
    
    /** \brief   describes the writing medium.
    */

    string getMediumValue() throw (AttributeNotFoundException);
    MeiAttribute* getMedium() throw (AttributeNotFoundException);
    void setMedium(std::string _medium);
    bool hasMedium();
    void removeMedium();

    private:
        BaseMeiElement *b;
};


struct MeiversionMixIn {
    MeiversionMixIn(BaseMeiElement *b);
    virtual ~MeiversionMixIn() {};
    
    /** \brief   records the version of MEI used by the file.
    */

    string getMeiversionValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeiversion() throw (AttributeNotFoundException);
    void setMeiversion(std::string _meiversion);
    bool hasMeiversion();
    void removeMeiversion();

    private:
        BaseMeiElement *b;
};


struct MeterconformanceMixIn {
    MeterconformanceMixIn(BaseMeiElement *b);
    virtual ~MeterconformanceMixIn() {};
    
    /** \brief   indicates the relationship between the content of a staff or layer and the
    * prevailing meter
    */

    string getMetconValue() throw (AttributeNotFoundException);
    MeiAttribute* getMetcon() throw (AttributeNotFoundException);
    void setMetcon(std::string _metcon);
    bool hasMetcon();
    void removeMetcon();

    private:
        BaseMeiElement *b;
};


struct MeterconformanceBarMixIn {
    MeterconformanceBarMixIn(BaseMeiElement *b);
    virtual ~MeterconformanceBarMixIn() {};
    
    /** \brief   indicates the relationship between the content of a staff or layer and the
    * prevailing meter
    */

    string getMetconValue() throw (AttributeNotFoundException);
    MeiAttribute* getMetcon() throw (AttributeNotFoundException);
    void setMetcon(std::string _metcon);
    bool hasMetcon();
    void removeMetcon();

    /** \brief   indicates whether or not a bar line is "controlling"; that is, if it indicates a
    * point of alignment across all the parts. Bar lines within a score are usually
    * controlling; that is, they "line up". Bar lines within parts may or may not be
    * controlling. When applied to <measure>, this attribute indicates the nature of
    * the right barline but not the left.
    */

    string getControlValue() throw (AttributeNotFoundException);
    MeiAttribute* getControl() throw (AttributeNotFoundException);
    void setControl(std::string _control);
    bool hasControl();
    void removeControl();

    private:
        BaseMeiElement *b;
};


struct MetersLogMixIn {
    MetersLogMixIn(BaseMeiElement *b);
    virtual ~MetersLogMixIn() {};
    
    /** \brief   captures the number of beats in a measure, that is, the top number of the meter
    * signature.
    */

    string getMeterCountValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterCount() throw (AttributeNotFoundException);
    void setMeterCount(std::string _metercount);
    bool hasMeterCount();
    void removeMeterCount();

    /** \brief   contains the number indicating the beat unit, that is, the bottom number of the
    * meter signature.
    */

    string getMeterUnitValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterUnit() throw (AttributeNotFoundException);
    void setMeterUnit(std::string _meterunit);
    bool hasMeterUnit();
    void removeMeterUnit();

    private:
        BaseMeiElement *b;
};


struct MetersVisMixIn {
    MetersVisMixIn(BaseMeiElement *b);
    virtual ~MetersVisMixIn() {};
    
    /** \brief   contains an indication of how the meter signature should be rendered.
    */

    string getMeterRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterRend() throw (AttributeNotFoundException);
    void setMeterRend(std::string _meterrend);
    bool hasMeterRend();
    void removeMeterRend();

    /** \brief   determines whether a new meter signature should be displayed when the meter
    * signature changes.
    */

    string getMeterShowchangeValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterShowchange() throw (AttributeNotFoundException);
    void setMeterShowchange(std::string _metershowchange);
    bool hasMeterShowchange();
    void removeMeterShowchange();

    /** \brief   indicates the use of a meter symbol instead of a numeric meter signature, that
    * is, 'C' for common time or 'C' with a slash for cut time.
    */

    string getMeterSymValue() throw (AttributeNotFoundException);
    MeiAttribute* getMeterSym() throw (AttributeNotFoundException);
    void setMeterSym(std::string _metersym);
    bool hasMeterSym();
    void removeMeterSym();

    private:
        BaseMeiElement *b;
};


struct MmtempoMixIn {
    MmtempoMixIn(BaseMeiElement *b);
    virtual ~MmtempoMixIn() {};
    
    /** \brief   used to describe tempo in terms of beats (meter signature denominator) per
    * minute, ala M.M. (Maezel's Metronome).
    */

    string getMmValue() throw (AttributeNotFoundException);
    MeiAttribute* getMm() throw (AttributeNotFoundException);
    void setMm(std::string _mm);
    bool hasMm();
    void removeMm();

    private:
        BaseMeiElement *b;
};


struct MultinummeasuresMixIn {
    MultinummeasuresMixIn(BaseMeiElement *b);
    virtual ~MultinummeasuresMixIn() {};
    
    /** \brief   indicates whether programmatically calculated counts of multiple measures of
    * rest (mRest) and whole measure repeats (mRpt) in parts should be rendered.
    */

    string getMultiNumberValue() throw (AttributeNotFoundException);
    MeiAttribute* getMultiNumber() throw (AttributeNotFoundException);
    void setMultiNumber(std::string _multinumber);
    bool hasMultiNumber();
    void removeMultiNumber();

    private:
        BaseMeiElement *b;
};


struct NameMixIn {
    NameMixIn(BaseMeiElement *b);
    virtual ~NameMixIn() {};
    
    /** \brief   used to record a pointer to the regularized form of the name elsewhere in the
    * document.
    */

    string getNymrefValue() throw (AttributeNotFoundException);
    MeiAttribute* getNymref() throw (AttributeNotFoundException);
    void setNymref(std::string _nymref);
    bool hasNymref();
    void removeNymref();

    /** \brief   indicates a property of the entire link. The value of the role attribute must be
    * a URI reference as defined in [IETF RFC 2396], except that if the URI scheme
    * used is allowed to have absolute and relative forms, the URI portion must be
    * absolute. The URI reference identifies some resource that describes the intended
    * property. When no value is supplied, no particular role value is to be inferred.
    */

    string getRoleValue() throw (AttributeNotFoundException);
    MeiAttribute* getRole() throw (AttributeNotFoundException);
    void setRole(std::string _role);
    bool hasRole();
    void removeRole();

    private:
        BaseMeiElement *b;
};


struct NoteGesMixIn {
    NoteGesMixIn(BaseMeiElement *b);
    virtual ~NoteGesMixIn() {};
    
    /** \brief   records performed octave information that differs from the written value.
    */

    string getOctGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getOctGes() throw (AttributeNotFoundException);
    void setOctGes(std::string _octges);
    bool hasOctGes();
    void removeOctGes();

    /** \brief   contains a performed pitch name that differs from the written value.
    */

    string getPnameGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getPnameGes() throw (AttributeNotFoundException);
    void setPnameGes(std::string _pnameges);
    bool hasPnameGes();
    void removePnameGes();

    /** \brief   holds a pitch-to-number mapping, a base-40 or MIDI note number, for example.
    */

    string getPnumValue() throw (AttributeNotFoundException);
    MeiAttribute* getPnum() throw (AttributeNotFoundException);
    void setPnum(std::string _pnum);
    bool hasPnum();
    void removePnum();

    private:
        BaseMeiElement *b;
};


struct NoteVisMixIn {
    NoteVisMixIn(BaseMeiElement *b);
    virtual ~NoteVisMixIn() {};
    
    /** \brief   used to override the head shape normally used for the given duration.
    */

    string getHeadshapeValue() throw (AttributeNotFoundException);
    MeiAttribute* getHeadshape() throw (AttributeNotFoundException);
    void setHeadshape(std::string _headshape);
    bool hasHeadshape();
    void removeHeadshape();

    private:
        BaseMeiElement *b;
};


struct OctaveMixIn {
    OctaveMixIn(BaseMeiElement *b);
    virtual ~OctaveMixIn() {};
    
    /** \brief   captures written octave information.
    */

    string getOctValue() throw (AttributeNotFoundException);
    MeiAttribute* getOct() throw (AttributeNotFoundException);
    void setOct(std::string _oct);
    bool hasOct();
    void removeOct();

    private:
        BaseMeiElement *b;
};


struct OctavedefaultMixIn {
    OctavedefaultMixIn(BaseMeiElement *b);
    virtual ~OctavedefaultMixIn() {};
    
    /** \brief   contains a default octave specification for use when the first note, rest,
    * chord, etc. in a measure does not have an octave value specified.
    */

    string getOctaveDefaultValue() throw (AttributeNotFoundException);
    MeiAttribute* getOctaveDefault() throw (AttributeNotFoundException);
    void setOctaveDefault(std::string _octavedefault);
    bool hasOctaveDefault();
    void removeOctaveDefault();

    private:
        BaseMeiElement *b;
};


struct OctavedisplacementMixIn {
    OctavedisplacementMixIn(BaseMeiElement *b);
    virtual ~OctavedisplacementMixIn() {};
    
    /** \brief   records the amount of octave displacement.
    */

    string getDisValue() throw (AttributeNotFoundException);
    MeiAttribute* getDis() throw (AttributeNotFoundException);
    void setDis(std::string _dis);
    bool hasDis();
    void removeDis();

    /** \brief   records the direction of octave displacement.
    */

    string getDisPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getDisPlace() throw (AttributeNotFoundException);
    void setDisPlace(std::string _displace);
    bool hasDisPlace();
    void removeDisPlace();

    private:
        BaseMeiElement *b;
};


struct OnelinestaffMixIn {
    OnelinestaffMixIn(BaseMeiElement *b);
    virtual ~OnelinestaffMixIn() {};
    
    /** \brief   determines the placement of notes on a 1-line staff. A value of 'true' places
    * all notes on the line, while a value of 'false' places stems-up notes above the
    * line and stems-down notes below the line.
    */

    string getOnthelineValue() throw (AttributeNotFoundException);
    MeiAttribute* getOntheline() throw (AttributeNotFoundException);
    void setOntheline(std::string _ontheline);
    bool hasOntheline();
    void removeOntheline();

    private:
        BaseMeiElement *b;
};


struct PadLogMixIn {
    PadLogMixIn(BaseMeiElement *b);
    virtual ~PadLogMixIn() {};
    
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


struct ParticipantidentMixIn {
    ParticipantidentMixIn(BaseMeiElement *b);
    virtual ~ParticipantidentMixIn() {};
    
    /** \brief   contains a space separated list of ID references that identify logical events
    * that participate in a collection, such as notes under a phrase mark.
    */

    string getPlistValue() throw (AttributeNotFoundException);
    MeiAttribute* getPlist() throw (AttributeNotFoundException);
    void setPlist(std::string _plist);
    bool hasPlist();
    void removePlist();

    private:
        BaseMeiElement *b;
};


struct PbVisMixIn {
    PbVisMixIn(BaseMeiElement *b);
    virtual ~PbVisMixIn() {};
    
    /** \brief   records the function of an accidental.
    */

    string getFuncValue() throw (AttributeNotFoundException);
    MeiAttribute* getFunc() throw (AttributeNotFoundException);
    void setFunc(std::string _func);
    bool hasFunc();
    void removeFunc();

    private:
        BaseMeiElement *b;
};


struct PitchMixIn {
    PitchMixIn(BaseMeiElement *b);
    virtual ~PitchMixIn() {};
    
    /** \brief   contains a written pitch name.
    */

    string getPnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getPname() throw (AttributeNotFoundException);
    void setPname(std::string _pname);
    bool hasPname();
    void removePname();

    private:
        BaseMeiElement *b;
};


struct PlacementMixIn {
    PlacementMixIn(BaseMeiElement *b);
    virtual ~PlacementMixIn() {};
    
    /** \brief   captures the placement of the item with respect to the staff with which it is
    * associated.
    */

    string getPlaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getPlace() throw (AttributeNotFoundException);
    void setPlace(std::string _place);
    bool hasPlace();
    void removePlace();

    private:
        BaseMeiElement *b;
};


struct RegularizedMixIn {
    RegularizedMixIn(BaseMeiElement *b);
    virtual ~RegularizedMixIn() {};
    
    /** \brief   provides a regularized, authorized value.
    */

    string getRegValue() throw (AttributeNotFoundException);
    MeiAttribute* getReg() throw (AttributeNotFoundException);
    void setReg(std::string _reg);
    bool hasReg();
    void removeReg();

    private:
        BaseMeiElement *b;
};


struct RelativesizeMixIn {
    RelativesizeMixIn(BaseMeiElement *b);
    virtual ~RelativesizeMixIn() {};
    
    /** \brief   describes the relative size of a feature.
    */

    string getSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getSize() throw (AttributeNotFoundException);
    void setSize(std::string _size);
    bool hasSize();
    void removeSize();

    private:
        BaseMeiElement *b;
};


struct ResponsibilityMixIn {
    ResponsibilityMixIn(BaseMeiElement *b);
    virtual ~ResponsibilityMixIn() {};
    
    /** \brief   captures information regarding responsibility for some aspect of the text's
    * creation, transcription, editing, or encoding. Its value must point to one or
    * more identifiers declared in the document header.
    */

    string getRespValue() throw (AttributeNotFoundException);
    MeiAttribute* getResp() throw (AttributeNotFoundException);
    void setResp(std::string _resp);
    bool hasResp();
    void removeResp();

    private:
        BaseMeiElement *b;
};


struct SbVisMixIn {
    SbVisMixIn(BaseMeiElement *b);
    virtual ~SbVisMixIn() {};
    
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


struct ScalableMixIn {
    ScalableMixIn(BaseMeiElement *b);
    virtual ~ScalableMixIn() {};
    
    /** \brief   scale factor to be applied to the feature to make it the desired display size.
    */

    string getScaleValue() throw (AttributeNotFoundException);
    MeiAttribute* getScale() throw (AttributeNotFoundException);
    void setScale(std::string _scale);
    bool hasScale();
    void removeScale();

    private:
        BaseMeiElement *b;
};


struct ScoredefGesMixIn {
    ScoredefGesMixIn(BaseMeiElement *b);
    virtual ~ScoredefGesMixIn() {};
    
    /** \brief   holds the pitch name of a tuning reference pitch.
    */

    string getTunePnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getTunePname() throw (AttributeNotFoundException);
    void setTunePname(std::string _tunepname);
    bool hasTunePname();
    void removeTunePname();

    /** \brief   holds a value for cycles per second, i.e., Hertz, for a tuning reference pitch.
    */

    string getTuneHzValue() throw (AttributeNotFoundException);
    MeiAttribute* getTuneHz() throw (AttributeNotFoundException);
    void setTuneHz(std::string _tuneHz);
    bool hasTuneHz();
    void removeTuneHz();

    /** \brief   provides an indication of the tuning system, 'just', for example.
    */

    string getTuneTemperValue() throw (AttributeNotFoundException);
    MeiAttribute* getTuneTemper() throw (AttributeNotFoundException);
    void setTuneTemper(std::string _tunetemper);
    bool hasTuneTemper();
    void removeTuneTemper();

    private:
        BaseMeiElement *b;
};


struct ScoredefVisMixIn {
    ScoredefVisMixIn(BaseMeiElement *b);
    virtual ~ScoredefVisMixIn() {};
    
    /** \brief   describes where ending marks should be displayed.
    */

    string getEndingRendValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndingRend() throw (AttributeNotFoundException);
    void setEndingRend(std::string _endingrend);
    bool hasEndingRend();
    void removeEndingRend();

    /** \brief   indicates whether measure numbers should be displayed.
    */

    string getMnumVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getMnumVisible() throw (AttributeNotFoundException);
    void setMnumVisible(std::string _mnumvisible);
    bool hasMnumVisible();
    void removeMnumVisible();

    /** \brief   sets the default music font name.
    */

    string getMusicNameValue() throw (AttributeNotFoundException);
    MeiAttribute* getMusicName() throw (AttributeNotFoundException);
    void setMusicName(std::string _musicname);
    bool hasMusicName();
    void removeMusicName();

    /** \brief   sets the default music font size.
    */

    string getMusicSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getMusicSize() throw (AttributeNotFoundException);
    void setMusicSize(std::string _musicsize);
    bool hasMusicSize();
    void removeMusicSize();

    /** \brief   indicates whether staves without notes, rests, etc. should be displayed. When
    * the value is 'true', empty staves are displayed.
    */

    string getOptimizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getOptimize() throw (AttributeNotFoundException);
    void setOptimize(std::string _optimize);
    bool hasOptimize();
    void removeOptimize();

    /** \brief   describes the physical height of the rendered output page.
    */

    string getPageHeightValue() throw (AttributeNotFoundException);
    MeiAttribute* getPageHeight() throw (AttributeNotFoundException);
    void setPageHeight(std::string _pageheight);
    bool hasPageHeight();
    void removePageHeight();

    /** \brief   describes the physical width of the rendered output page.
    */

    string getPageWidthValue() throw (AttributeNotFoundException);
    MeiAttribute* getPageWidth() throw (AttributeNotFoundException);
    void setPageWidth(std::string _pagewidth);
    bool hasPageWidth();
    void removePageWidth();

    /** \brief   contains the real-world measurement units (inches, centimeters, millimeters)
    * used to describe the rendered page height, width, and margins.
    */

    string getPageUnitsValue() throw (AttributeNotFoundException);
    MeiAttribute* getPageUnits() throw (AttributeNotFoundException);
    void setPageUnits(std::string _pageunits);
    bool hasPageUnits();
    void removePageUnits();

    /** \brief   indicates the amount of whitespace at the top of a rendered score page.
    */

    string getPageTopmarValue() throw (AttributeNotFoundException);
    MeiAttribute* getPageTopmar() throw (AttributeNotFoundException);
    void setPageTopmar(std::string _pagetopmar);
    bool hasPageTopmar();
    void removePageTopmar();

    /** \brief   indicates the amount of whitespace at the bottom of a rendered score page.
    */

    string getPageBotmarValue() throw (AttributeNotFoundException);
    MeiAttribute* getPageBotmar() throw (AttributeNotFoundException);
    void setPageBotmar(std::string _pagebotmar);
    bool hasPageBotmar();
    void removePageBotmar();

    /** \brief   indicates the amount of whitespace at the left side of a rendered score page.
    */

    string getPageLeftmarValue() throw (AttributeNotFoundException);
    MeiAttribute* getPageLeftmar() throw (AttributeNotFoundException);
    void setPageLeftmar(std::string _pageleftmar);
    bool hasPageLeftmar();
    void removePageLeftmar();

    /** \brief   indicates the amount of whitespace at the right side of a rendered score page.
    */

    string getPageRightmarValue() throw (AttributeNotFoundException);
    MeiAttribute* getPageRightmar() throw (AttributeNotFoundException);
    void setPageRightmar(std::string _pagerightmar);
    bool hasPageRightmar();
    void removePageRightmar();

    /** \brief   indicates the number of logical pages to be rendered on a single physical page.
    */

    string getPagePanelsValue() throw (AttributeNotFoundException);
    MeiAttribute* getPagePanels() throw (AttributeNotFoundException);
    void setPagePanels(std::string _pagepanels);
    bool hasPagePanels();
    void removePagePanels();

    /** \brief   indicates how the page should be scaled when rendered.
    */

    string getPageScaleValue() throw (AttributeNotFoundException);
    MeiAttribute* getPageScale() throw (AttributeNotFoundException);
    void setPageScale(std::string _pagescale);
    bool hasPageScale();
    void removePageScale();

    /** \brief   describes a note's spacing relative to its time value.
    */

    string getSpacingPackexpValue() throw (AttributeNotFoundException);
    MeiAttribute* getSpacingPackexp() throw (AttributeNotFoundException);
    void setSpacingPackexp(std::string _spacingpackexp);
    bool hasSpacingPackexp();
    void removeSpacingPackexp();

    /** \brief   describes the note spacing of output.
    */

    string getSpacingPackfactValue() throw (AttributeNotFoundException);
    MeiAttribute* getSpacingPackfact() throw (AttributeNotFoundException);
    void setSpacingPackfact(std::string _spacingpackfact);
    bool hasSpacingPackfact();
    void removeSpacingPackfact();

    /** \brief   sets the minimum amount of space between staves in the same system.
    */

    string getSpacingStaffValue() throw (AttributeNotFoundException);
    MeiAttribute* getSpacingStaff() throw (AttributeNotFoundException);
    void setSpacingStaff(std::string _spacingstaff);
    bool hasSpacingStaff();
    void removeSpacingStaff();

    /** \brief   contains a space-separated pair of numbers describing the minimum and maximum
    * amount of space between systems.
    */

    string getSpacingSystemValue() throw (AttributeNotFoundException);
    MeiAttribute* getSpacingSystem() throw (AttributeNotFoundException);
    void setSpacingSystem(std::string _spacingsystem);
    bool hasSpacingSystem();
    void removeSpacingSystem();

    /** \brief   describes the amount of whitespace at the left system margin relative to
    * page.leftmar.
    */

    string getSystemLeftmarValue() throw (AttributeNotFoundException);
    MeiAttribute* getSystemLeftmar() throw (AttributeNotFoundException);
    void setSystemLeftmar(std::string _systemleftmar);
    bool hasSystemLeftmar();
    void removeSystemLeftmar();

    /** \brief   describes the amount of whitespace at the right system margin relative to
    * page.rightmar.
    */

    string getSystemRightmarValue() throw (AttributeNotFoundException);
    MeiAttribute* getSystemRightmar() throw (AttributeNotFoundException);
    void setSystemRightmar(std::string _systemrightmar);
    bool hasSystemRightmar();
    void removeSystemRightmar();

    /** \brief   describes the distance from page's top edge to the first system; used for first
    * page only.
    */

    string getSystemTopmarValue() throw (AttributeNotFoundException);
    MeiAttribute* getSystemTopmar() throw (AttributeNotFoundException);
    void setSystemTopmar(std::string _systemtopmar);
    bool hasSystemTopmar();
    void removeSystemTopmar();

    private:
        BaseMeiElement *b;
};


struct SectionVisMixIn {
    SectionVisMixIn(BaseMeiElement *b);
    virtual ~SectionVisMixIn() {};
    
    /** \brief   indicates that staves begin again with this section.
    */

    string getRestartValue() throw (AttributeNotFoundException);
    MeiAttribute* getRestart() throw (AttributeNotFoundException);
    void setRestart(std::string _restart);
    bool hasRestart();
    void removeRestart();

    private:
        BaseMeiElement *b;
};


struct SequenceMixIn {
    SequenceMixIn(BaseMeiElement *b);
    virtual ~SequenceMixIn() {};
    
    /** \brief   used to assign a sequence number related to the order in which the encoded
    * features carrying this attribute are believed to have occurred.
    */

    string getSeqValue() throw (AttributeNotFoundException);
    MeiAttribute* getSeq() throw (AttributeNotFoundException);
    void setSeq(std::string _seq);
    bool hasSeq();
    void removeSeq();

    private:
        BaseMeiElement *b;
};


struct SlashcountMixIn {
    SlashcountMixIn(BaseMeiElement *b);
    virtual ~SlashcountMixIn() {};
    
    /** \brief   indicates the number of slashes to be rendered along with the feature.
    */

    string getSlashValue() throw (AttributeNotFoundException);
    MeiAttribute* getSlash() throw (AttributeNotFoundException);
    void setSlash(std::string _slash);
    bool hasSlash();
    void removeSlash();

    private:
        BaseMeiElement *b;
};


struct SlurpresentMixIn {
    SlurpresentMixIn(BaseMeiElement *b);
    virtual ~SlurpresentMixIn() {};
    
    /** \brief   indicates that this element participates in a slur. If visual information about
    * the slur needs to be recorded, then a <slur> element should be employed.
    */

    string getSlurValue() throw (AttributeNotFoundException);
    MeiAttribute* getSlur() throw (AttributeNotFoundException);
    void setSlur(std::string _slur);
    bool hasSlur();
    void removeSlur();

    private:
        BaseMeiElement *b;
};


struct SpaceVisMixIn {
    SpaceVisMixIn(BaseMeiElement *b);
    virtual ~SpaceVisMixIn() {};
    
    /** \brief   indicates whether a space is 'compressible', i.e., if it may be removed at the
    * discretion of processing software.
    */

    string getCompressableValue() throw (AttributeNotFoundException);
    MeiAttribute* getCompressable() throw (AttributeNotFoundException);
    void setCompressable(std::string _compressable);
    bool hasCompressable();
    void removeCompressable();

    private:
        BaseMeiElement *b;
};


struct StaffdefVisMixIn {
    StaffdefVisMixIn(BaseMeiElement *b);
    virtual ~StaffdefVisMixIn() {};
    
    /** \brief   determines whether to display guitar chord grids.
    */

    string getGridShowValue() throw (AttributeNotFoundException);
    MeiAttribute* getGridShow() throw (AttributeNotFoundException);
    void setGridShow(std::string _gridshow);
    bool hasGridShow();
    void removeGridShow();

    /** \brief   indicates the number of layers and their stem directions.
    */

    string getLayerschemeValue() throw (AttributeNotFoundException);
    MeiAttribute* getLayerscheme() throw (AttributeNotFoundException);
    void setLayerscheme(std::string _layerscheme);
    bool hasLayerscheme();
    void removeLayerscheme();

    /** \brief   indicates the number of staff lines.
    */

    string getLinesValue() throw (AttributeNotFoundException);
    MeiAttribute* getLines() throw (AttributeNotFoundException);
    void setLines(std::string _lines);
    bool hasLines();
    void removeLines();

    /** \brief   captures the colors of the staff lines. The value is structured; that is, it
    * should have the same number of space-separated RGB values as the number of lines
    * indicated by the lines attribute. A line can be made invisible by assigning it
    * the same RGB value as the background, usually white.
    */

    string getLinesColorValue() throw (AttributeNotFoundException);
    MeiAttribute* getLinesColor() throw (AttributeNotFoundException);
    void setLinesColor(std::string _linescolor);
    bool hasLinesColor();
    void removeLinesColor();

    /** \brief   records whether all staff lines are visible.
    */

    string getLinesVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getLinesVisible() throw (AttributeNotFoundException);
    void setLinesVisible(std::string _linesvisible);
    bool hasLinesVisible();
    void removeLinesVisible();

    /** \brief   records the absolute distance (as opposed to the relative distances recorded in
    * <scoreDef> elements) between this staff and the preceding one in the same
    * system. This value is meaningless for the first staff in a system since the
    * spacing.system attribute indicates the spacing between systems.
    */

    string getSpacingValue() throw (AttributeNotFoundException);
    MeiAttribute* getSpacing() throw (AttributeNotFoundException);
    void setSpacing(std::string _spacing);
    bool hasSpacing();
    void removeSpacing();

    private:
        BaseMeiElement *b;
};


struct StaffgrpVisMixIn {
    StaffgrpVisMixIn(BaseMeiElement *b);
    virtual ~StaffgrpVisMixIn() {};
    
    /** \brief   indicates whether bar lines go across the space between staves (true) or are
    * only drawn across the lines of each staff (false).
    */

    string getBarthruValue() throw (AttributeNotFoundException);
    MeiAttribute* getBarthru() throw (AttributeNotFoundException);
    void setBarthru(std::string _barthru);
    bool hasBarthru();
    void removeBarthru();

    private:
        BaseMeiElement *b;
};


struct StaffgroupingsymMixIn {
    StaffgroupingsymMixIn(BaseMeiElement *b);
    virtual ~StaffgroupingsymMixIn() {};
    
    /** \brief   specifies the symbol used to group a set of staves.
    */

    string getSymbolValue() throw (AttributeNotFoundException);
    MeiAttribute* getSymbol() throw (AttributeNotFoundException);
    void setSymbol(std::string _symbol);
    bool hasSymbol();
    void removeSymbol();

    private:
        BaseMeiElement *b;
};


struct StaffidentMixIn {
    StaffidentMixIn(BaseMeiElement *b);
    virtual ~StaffidentMixIn() {};
    
    /** \brief   signifies the staff on which a notated event occurs or to which a control event
    * applies. Mandatory when applicable.
    */

    string getStaffValue() throw (AttributeNotFoundException);
    MeiAttribute* getStaff() throw (AttributeNotFoundException);
    void setStaff(std::string _staff);
    bool hasStaff();
    void removeStaff();

    private:
        BaseMeiElement *b;
};


struct StafflocMixIn {
    StafflocMixIn(BaseMeiElement *b);
    virtual ~StafflocMixIn() {};
    
    /** \brief   holds the staff location of the feature.
    */

    string getLocValue() throw (AttributeNotFoundException);
    MeiAttribute* getLoc() throw (AttributeNotFoundException);
    void setLoc(std::string _loc);
    bool hasLoc();
    void removeLoc();

    private:
        BaseMeiElement *b;
};


struct StartendidMixIn {
    StartendidMixIn(BaseMeiElement *b);
    virtual ~StartendidMixIn() {};
    
    /** \brief   indicates the final element in a sequence of events to which the feature
    * applies.
    */

    string getEndidValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndid() throw (AttributeNotFoundException);
    void setEndid(std::string _endid);
    bool hasEndid();
    void removeEndid();

    private:
        BaseMeiElement *b;
};


struct StartidMixIn {
    StartidMixIn(BaseMeiElement *b);
    virtual ~StartidMixIn() {};
    
    /** \brief   holds a reference to the first element in a sequence of events to which the
    * feature applies.
    */

    string getStartidValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartid() throw (AttributeNotFoundException);
    void setStartid(std::string _startid);
    bool hasStartid();
    void removeStartid();

    private:
        BaseMeiElement *b;
};


struct StemmedMixIn {
    StemmedMixIn(BaseMeiElement *b);
    virtual ~StemmedMixIn() {};
    
    /** \brief   describes the direction of a stem.
    */

    string getStemDirValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemDir() throw (AttributeNotFoundException);
    void setStemDir(std::string _stemdir);
    bool hasStemDir();
    void removeStemDir();

    /** \brief   encodes the stem length.
    */

    string getStemLenValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemLen() throw (AttributeNotFoundException);
    void setStemLen(std::string _stemlen);
    bool hasStemLen();
    void removeStemLen();

    /** \brief   records the position of the stem in relation to the note head(s).
    */

    string getStemPosValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemPos() throw (AttributeNotFoundException);
    void setStemPos(std::string _stempos);
    bool hasStemPos();
    void removeStemPos();

    /** \brief   records the output x coordinate of the stem's attachment point.
    */

    string getStemXValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemX() throw (AttributeNotFoundException);
    void setStemX(std::string _stemx);
    bool hasStemX();
    void removeStemX();

    /** \brief   records the output y coordinate of the stem's attachment point.
    */

    string getStemYValue() throw (AttributeNotFoundException);
    MeiAttribute* getStemY() throw (AttributeNotFoundException);
    void setStemY(std::string _stemy);
    bool hasStemY();
    void removeStemY();

    private:
        BaseMeiElement *b;
};


struct SylLogMixIn {
    SylLogMixIn(BaseMeiElement *b);
    virtual ~SylLogMixIn() {};
    
    /** \brief   describes the symbols typically used to indicate breaks between syllables and
    * their functions.
    */

    string getConValue() throw (AttributeNotFoundException);
    MeiAttribute* getCon() throw (AttributeNotFoundException);
    void setCon(std::string _con);
    bool hasCon();
    void removeCon();

    /** \brief   records the position of a syllable within a word.
    */

    string getWordposValue() throw (AttributeNotFoundException);
    MeiAttribute* getWordpos() throw (AttributeNotFoundException);
    void setWordpos(std::string _wordpos);
    bool hasWordpos();
    void removeWordpos();

    private:
        BaseMeiElement *b;
};


struct SyltextMixIn {
    SyltextMixIn(BaseMeiElement *b);
    virtual ~SyltextMixIn() {};
    
    /** \brief   holds an associated sung text syllable.
    */

    string getSylValue() throw (AttributeNotFoundException);
    MeiAttribute* getSyl() throw (AttributeNotFoundException);
    void setSyl(std::string _syl);
    bool hasSyl();
    void removeSyl();

    private:
        BaseMeiElement *b;
};


struct TextstyleMixIn {
    TextstyleMixIn(BaseMeiElement *b);
    virtual ~TextstyleMixIn() {};
    
    /** \brief   provides a default value for the font family name of text (other than lyrics)
    * when this information is not provided on the individual elements.
    */

    string getTextFamValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextFam() throw (AttributeNotFoundException);
    void setTextFam(std::string _textfam);
    bool hasTextFam();
    void removeTextFam();

    /** \brief   provides a default value for the font name of text (other than lyrics) when this
    * information is not provided on the individual elements.
    */

    string getTextNameValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextName() throw (AttributeNotFoundException);
    void setTextName(std::string _textname);
    bool hasTextName();
    void removeTextName();

    /** \brief   provides a default value for the font size of text (other than lyrics) when this
    * information is not provided on the individual elements.
    */

    string getTextSizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextSize() throw (AttributeNotFoundException);
    void setTextSize(std::string _textsize);
    bool hasTextSize();
    void removeTextSize();

    /** \brief   provides a default value for the font style of text (other than lyrics) when
    * this information is not provided on the individual elements.
    */

    string getTextStyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextStyle() throw (AttributeNotFoundException);
    void setTextStyle(std::string _textstyle);
    bool hasTextStyle();
    void removeTextStyle();

    /** \brief   provides a default value for the font weight for text (other than lyrics) when
    * this information is not provided on the individual elements.
    */

    string getTextWeightValue() throw (AttributeNotFoundException);
    MeiAttribute* getTextWeight() throw (AttributeNotFoundException);
    void setTextWeight(std::string _textweight);
    bool hasTextWeight();
    void removeTextWeight();

    private:
        BaseMeiElement *b;
};


struct TiepresentMixIn {
    TiepresentMixIn(BaseMeiElement *b);
    virtual ~TiepresentMixIn() {};
    
    /** \brief   indicates that this element participates in a tie. If visual information about
    * the tie needs to be recorded, then a <tie> element should be employed.
    */

    string getTieValue() throw (AttributeNotFoundException);
    MeiAttribute* getTie() throw (AttributeNotFoundException);
    void setTie(std::string _tie);
    bool hasTie();
    void removeTie();

    private:
        BaseMeiElement *b;
};


struct TimestampMusicalMixIn {
    TimestampMusicalMixIn(BaseMeiElement *b);
    virtual ~TimestampMusicalMixIn() {};
    
    /** \brief   encodes the onset time in terms of musical time, i.e.,
    * beats[.fractional_beat_part]
    */

    string getTstampValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstamp() throw (AttributeNotFoundException);
    void setTstamp(std::string _tstamp);
    bool hasTstamp();
    void removeTstamp();

    private:
        BaseMeiElement *b;
};


struct TimestampPerformedMixIn {
    TimestampPerformedMixIn(BaseMeiElement *b);
    virtual ~TimestampPerformedMixIn() {};
    
    /** \brief   used to record the onset time in pulses per quarter note (ppq, MusicXML
    * divisions, or MIDI clicks) since the start of the file.
    */

    string getTstampGesValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstampGes() throw (AttributeNotFoundException);
    void setTstampGes(std::string _tstampges);
    bool hasTstampGes();
    void removeTstampGes();

    /** \brief   used to record the onset time in terms of ISO time since the start of the file.
    */

    string getTstampRealValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstampReal() throw (AttributeNotFoundException);
    void setTstampReal(std::string _tstampreal);
    bool hasTstampReal();
    void removeTstampReal();

    private:
        BaseMeiElement *b;
};


struct TranspositionMixIn {
    TranspositionMixIn(BaseMeiElement *b);
    virtual ~TranspositionMixIn() {};
    
    /** \brief   records the amount of diatonic pitch shift, e.g. C to C♯ = 0, C to D♭ = 1.
    * Transposition requires both trans.diat and trans.semi attributes in order to
    * distinguish the difference, for example, between a transposition from C to C♯
    * and one from C to D♭.
    */

    string getTransDiatValue() throw (AttributeNotFoundException);
    MeiAttribute* getTransDiat() throw (AttributeNotFoundException);
    void setTransDiat(std::string _transdiat);
    bool hasTransDiat();
    void removeTransDiat();

    /** \brief   contains the amount of pitch shift in semitones, C to C♯ = 1, C to D♭ = 1.
    * Transposition requires both trans.diat and trans.semi attributes in order to
    * distinguish the difference, for example, between a transposition from C to C♯
    * and one from C to D♭.
    */

    string getTransSemiValue() throw (AttributeNotFoundException);
    MeiAttribute* getTransSemi() throw (AttributeNotFoundException);
    void setTransSemi(std::string _transsemi);
    bool hasTransSemi();
    void removeTransSemi();

    private:
        BaseMeiElement *b;
};


struct TupletpresentMixIn {
    TupletpresentMixIn(BaseMeiElement *b);
    virtual ~TupletpresentMixIn() {};
    
    /** \brief   indicates that this feature participates in a tuplet. If visual information
    * about the tuplet needs to be recorded, then a <tuplet> element should be
    * employed.
    */

    string getTupletValue() throw (AttributeNotFoundException);
    MeiAttribute* getTuplet() throw (AttributeNotFoundException);
    void setTuplet(std::string _tuplet);
    bool hasTuplet();
    void removeTuplet();

    private:
        BaseMeiElement *b;
};


struct TypedMixIn {
    TypedMixIn(BaseMeiElement *b);
    virtual ~TypedMixIn() {};
    
    /** \brief   characterizes the element in some sense, using any convenient classification
    * scheme or typology.
    */

    string getTypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getType() throw (AttributeNotFoundException);
    void setType(std::string _type);
    bool hasType();
    void removeType();

    /** \brief   provide any sub-classification for the element, additional to that given by its
    * type attribute.
    */

    string getSubtypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getSubtype() throw (AttributeNotFoundException);
    void setSubtype(std::string _subtype);
    bool hasSubtype();
    void removeSubtype();

    private:
        BaseMeiElement *b;
};


struct TypographyMixIn {
    TypographyMixIn(BaseMeiElement *b);
    virtual ~TypographyMixIn() {};
    
    /** \brief   contains the name of a font-family.
    */

    string getFontfamValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontfam() throw (AttributeNotFoundException);
    void setFontfam(std::string _fontfam);
    bool hasFontfam();
    void removeFontfam();

    /** \brief   holds the name of a font.
    */

    string getFontnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontname() throw (AttributeNotFoundException);
    void setFontname(std::string _fontname);
    bool hasFontname();
    void removeFontname();

    /** \brief   indicates the size of a font in printers' points, i.e., 1/72nd of an inch.
    */

    string getFontsizeValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontsize() throw (AttributeNotFoundException);
    void setFontsize(std::string _fontsize);
    bool hasFontsize();
    void removeFontsize();

    /** \brief   records the style of a font, i.e, italic, oblique, or normal.
    */

    string getFontstyleValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontstyle() throw (AttributeNotFoundException);
    void setFontstyle(std::string _fontstyle);
    bool hasFontstyle();
    void removeFontstyle();

    /** \brief   used to indicate bold type.
    */

    string getFontweightValue() throw (AttributeNotFoundException);
    MeiAttribute* getFontweight() throw (AttributeNotFoundException);
    void setFontweight(std::string _fontweight);
    bool hasFontweight();
    void removeFontweight();

    private:
        BaseMeiElement *b;
};


struct VisibilityMixIn {
    VisibilityMixIn(BaseMeiElement *b);
    virtual ~VisibilityMixIn() {};
    
    /** \brief   indicates if a feature should be rendered when the notation is presented
    * graphically or sounded when it is presented in an aural form.
    */

    string getVisibleValue() throw (AttributeNotFoundException);
    MeiAttribute* getVisible() throw (AttributeNotFoundException);
    void setVisible(std::string _visible);
    bool hasVisible();
    void removeVisible();

    private:
        BaseMeiElement *b;
};


struct VisualoffsetHoMixIn {
    VisualoffsetHoMixIn(BaseMeiElement *b);
    virtual ~VisualoffsetHoMixIn() {};
    
    /** \brief   records a horizontal adjustment to a feature's programmatically-determined
    * location in terms of staff interline distance; that is, in units of 1/2 the
    * distance between adjacent staff lines.
    */

    string getHoValue() throw (AttributeNotFoundException);
    MeiAttribute* getHo() throw (AttributeNotFoundException);
    void setHo(std::string _ho);
    bool hasHo();
    void removeHo();

    private:
        BaseMeiElement *b;
};


struct VisualoffsetToMixIn {
    VisualoffsetToMixIn(BaseMeiElement *b);
    virtual ~VisualoffsetToMixIn() {};
    
    /** \brief   records a timestamp adjustment of a feature's programmatically-determined
    * location in terms of musical time; that is, beats.
    */

    string getToValue() throw (AttributeNotFoundException);
    MeiAttribute* getTo() throw (AttributeNotFoundException);
    void setTo(std::string _to);
    bool hasTo();
    void removeTo();

    private:
        BaseMeiElement *b;
};


struct VisualoffsetVoMixIn {
    VisualoffsetVoMixIn(BaseMeiElement *b);
    virtual ~VisualoffsetVoMixIn() {};
    
    /** \brief   records the vertical adjustment of a feature's programmatically-determined
    * location in terms of staff interline distance; that is, in units of 1/2 the
    * distance between adjacent staff lines.
    */

    string getVoValue() throw (AttributeNotFoundException);
    MeiAttribute* getVo() throw (AttributeNotFoundException);
    void setVo(std::string _vo);
    bool hasVo();
    void removeVo();

    private:
        BaseMeiElement *b;
};


struct Visualoffset2HoMixIn {
    Visualoffset2HoMixIn(BaseMeiElement *b);
    virtual ~Visualoffset2HoMixIn() {};
    
    /** \brief   records the horizontal adjustment of a feature's programmatically-determined
    * start point.
    */

    string getStarthoValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartho() throw (AttributeNotFoundException);
    void setStartho(std::string _startho);
    bool hasStartho();
    void removeStartho();

    /** \brief   records the horizontal adjustment of a feature's programmatically-determined end
    * point.
    */

    string getEndhoValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndho() throw (AttributeNotFoundException);
    void setEndho(std::string _endho);
    bool hasEndho();
    void removeEndho();

    private:
        BaseMeiElement *b;
};


struct Visualoffset2ToMixIn {
    Visualoffset2ToMixIn(BaseMeiElement *b);
    virtual ~Visualoffset2ToMixIn() {};
    
    /** \brief   records a timestamp adjustment of a feature's programmatically-determined start
    * point.
    */

    string getStarttoValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartto() throw (AttributeNotFoundException);
    void setStartto(std::string _startto);
    bool hasStartto();
    void removeStartto();

    /** \brief   records a timestamp adjustment of a feature's programmatically-determined end
    * point.
    */

    string getEndtoValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndto() throw (AttributeNotFoundException);
    void setEndto(std::string _endto);
    bool hasEndto();
    void removeEndto();

    private:
        BaseMeiElement *b;
};


struct Visualoffset2VoMixIn {
    Visualoffset2VoMixIn(BaseMeiElement *b);
    virtual ~Visualoffset2VoMixIn() {};
    
    /** \brief   records a vertical adjustment of a feature's programmatically-determined start
    * point.
    */

    string getStartvoValue() throw (AttributeNotFoundException);
    MeiAttribute* getStartvo() throw (AttributeNotFoundException);
    void setStartvo(std::string _startvo);
    bool hasStartvo();
    void removeStartvo();

    /** \brief   records a vertical adjustment of a feature's programmatically-determined end
    * point.
    */

    string getEndvoValue() throw (AttributeNotFoundException);
    MeiAttribute* getEndvo() throw (AttributeNotFoundException);
    void setEndvo(std::string _endvo);
    bool hasEndvo();
    void removeEndvo();

    private:
        BaseMeiElement *b;
};


struct WidthMixIn {
    WidthMixIn(BaseMeiElement *b);
    virtual ~WidthMixIn() {};
    
    /** \brief   measurement of the horizontal dimension of an entity. This value can only be
    * interpreted meaningfully in combination with the units attribute. The width
    * attribute may be used to capture measure width data for interchange with music
    * printing systems that utilize this information for printing. On <barLine> the
    * width attribute captures the width of the preceding measure.
    */

    string getWidthValue() throw (AttributeNotFoundException);
    MeiAttribute* getWidth() throw (AttributeNotFoundException);
    void setWidth(std::string _width);
    bool hasWidth();
    void removeWidth();

    private:
        BaseMeiElement *b;
};


struct XyMixIn {
    XyMixIn(BaseMeiElement *b);
    virtual ~XyMixIn() {};
    
    /** \brief   encodes an x coordinate for a feature in an output coordinate system. When it is
    * necessary to record the placement of a feature in a facsimile image, use the
    * facs attribute.
    */

    string getXValue() throw (AttributeNotFoundException);
    MeiAttribute* getX() throw (AttributeNotFoundException);
    void setX(std::string _x);
    bool hasX();
    void removeX();

    /** \brief   encodes an y coordinate for a feature in an output coordinate system. When it is
    * necessary to record the placement of a feature in a facsimile image, use the
    * facs attribute.
    */

    string getYValue() throw (AttributeNotFoundException);
    MeiAttribute* getY() throw (AttributeNotFoundException);
    void setY(std::string _y);
    bool hasY();
    void removeY();

    private:
        BaseMeiElement *b;
};


struct Xy2MixIn {
    Xy2MixIn(BaseMeiElement *b);
    virtual ~Xy2MixIn() {};
    
    /** \brief   encodes the optional 2nd x coordinate.
    */

    string getX2Value() throw (AttributeNotFoundException);
    MeiAttribute* getX2() throw (AttributeNotFoundException);
    void setX2(std::string _x2);
    bool hasX2();
    void removeX2();

    /** \brief   encodes the optional 2nd y coordinate.
    */

    string getY2Value() throw (AttributeNotFoundException);
    MeiAttribute* getY2() throw (AttributeNotFoundException);
    void setY2(std::string _y2);
    bool hasY2();
    void removeY2();

    private:
        BaseMeiElement *b;
};


#endif // SHAREDMIXIN_H_
