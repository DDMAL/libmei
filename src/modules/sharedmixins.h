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
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AccidLogMixIn {
    public:
        explicit AccidLogMixIn(MeiElement *b);
        virtual ~AccidLogMixIn();
        /** \brief records the function of an accidental.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

    private:
        MeiElement *b;
};

class AccidVisMixIn {
    public:
        explicit AccidVisMixIn(MeiElement *b);
        virtual ~AccidVisMixIn();
        /** \brief captures the placement of the item with respect to the staff with which it is
         *  associated.
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

    private:
        MeiElement *b;
};

class AccidentalMixIn {
    public:
        explicit AccidentalMixIn(MeiElement *b);
        virtual ~AccidentalMixIn();
        /** \brief captures a written accidental.
         */
        MeiAttribute* getAccid();
        void setAccid(std::string _accid);
        bool hasAccid();
        void removeAccid();

    private:
        MeiElement *b;
};

class AccidentalPerformedMixIn {
    public:
        explicit AccidentalPerformedMixIn(MeiElement *b);
        virtual ~AccidentalPerformedMixIn();
        /** \brief records the performed pitch inflection when it differs from the written
         *  accidental.
         */
        MeiAttribute* getAccidGes();
        void setAccidGes(std::string _accidges);
        bool hasAccidGes();
        void removeAccidGes();

    private:
        MeiElement *b;
};

class AltsymMixIn {
    public:
        explicit AltsymMixIn(MeiElement *b);
        virtual ~AltsymMixIn();
        /** \brief provides a way of pointing to a user-defined symbol.
         * 
         *  It must contain an ID of a <symbolDef> element elsewhere in the document.
         */
        MeiAttribute* getAltsym();
        void setAltsym(std::string _altsym);
        bool hasAltsym();
        void removeAltsym();

    private:
        MeiElement *b;
};

class ArticulationMixIn {
    public:
        explicit ArticulationMixIn(MeiElement *b);
        virtual ~ArticulationMixIn();
        /** \brief encodes the written articulation(s).
         * 
         *  Articulations are normally encoded in order from the note head outward; that is,
         *  away from the stem. See additional notes at att.vis.note. Only articulations
         *  should be encoded in the artic attribute; fingerings should be encoded using the
         *  <dir> element.
         */
        MeiAttribute* getArtic();
        void setArtic(std::string _artic);
        bool hasArtic();
        void removeArtic();

    private:
        MeiElement *b;
};

class ArticulationPerformedMixIn {
    public:
        explicit ArticulationPerformedMixIn(MeiElement *b);
        virtual ~ArticulationPerformedMixIn();
        /** \brief records performed articulation that differs from the written value.
         */
        MeiAttribute* getArticGes();
        void setArticGes(std::string _articges);
        bool hasArticGes();
        void removeArticGes();

    private:
        MeiElement *b;
};

class AugmentdotsMixIn {
    public:
        explicit AugmentdotsMixIn(MeiElement *b);
        virtual ~AugmentdotsMixIn();
        /** \brief records the number of augmentation dots required by a dotted duration.
         */
        MeiAttribute* getDots();
        void setDots(std::string _dots);
        bool hasDots();
        void removeDots();

    private:
        MeiElement *b;
};

class AuthorizedMixIn {
    public:
        explicit AuthorizedMixIn(MeiElement *b);
        virtual ~AuthorizedMixIn();
        /** \brief a name or label associated with the controlled vocabulary from which the value
         *  is taken.
         */
        MeiAttribute* getAuthority();
        void setAuthority(std::string _authority);
        bool hasAuthority();
        void removeAuthority();
        /** \brief the web-accessible location of the controlled vocabulary from which the value is
         *  taken.
         */
        MeiAttribute* getAuthuri();
        void setAuthuri(std::string _authURI);
        bool hasAuthuri();
        void removeAuthuri();

    private:
        MeiElement *b;
};

class BarlineLogMixIn {
    public:
        explicit BarlineLogMixIn(MeiElement *b);
        virtual ~BarlineLogMixIn();
        /** \brief describes the line style of the curve.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

    private:
        MeiElement *b;
};

class BarplacementMixIn {
    public:
        explicit BarplacementMixIn(MeiElement *b);
        virtual ~BarplacementMixIn();
        /** \brief records the location of a bar line.
         */
        MeiAttribute* getBarplace();
        void setBarplace(std::string _barplace);
        bool hasBarplace();
        void removeBarplace();
        /** \brief If takt bar lines are to be used, then the taktplace attribute may be used to
         *  denote the staff location of the shortened bar line.
         * 
         *  The location may include staff lines, spaces, and the spaces directly above and
         *  below the staff. The value ranges between 0 (just below the staff) to 2 * number
         *  of staff lines (directly above the staff). For example, on a 5-line staff the
         *  lines would be numbered 1,3,5,7, and 9 while the spaces would be numbered
         *  0,2,4,6,8,10. For example, a value of '9' puts the bar line through the top line
         *  of a 5-line staff.
         */
        MeiAttribute* getTaktplace();
        void setTaktplace(std::string _taktplace);
        bool hasTaktplace();
        void removeTaktplace();

    private:
        MeiElement *b;
};

class BeamingVisMixIn {
    public:
        explicit BeamingVisMixIn(MeiElement *b);
        virtual ~BeamingVisMixIn();
        /** \brief encodes whether a beam is "feathered" and in which direction.
         */
        MeiAttribute* getBeamRend();
        void setBeamRend(std::string _beamrend);
        bool hasBeamRend();
        void removeBeamRend();
        /** \brief captures beam slope.
         */
        MeiAttribute* getBeamSlope();
        void setBeamSlope(std::string _beamslope);
        bool hasBeamSlope();
        void removeBeamSlope();

    private:
        MeiElement *b;
};

class BiblMixIn {
    public:
        explicit BiblMixIn(MeiElement *b);
        virtual ~BiblMixIn();
        /** \brief contains a reference to a field or element in another descriptive encoding
         *  system to which this MEI element is comparable.
         * 
         *  Mapping elements from one system to another may help a repository harvest
         *  selected data from the MEI file to build a basic catalog record. The encoding
         *  system from which fields are taken must be specified. When possible, subfields
         *  as well as fields should be specified, e.g., subfields within MARC fields.
         */
        MeiAttribute* getAnalog();
        void setAnalog(std::string _analog);
        bool hasAnalog();
        void removeAnalog();

    private:
        MeiElement *b;
};

class CalendaredMixIn {
    public:
        explicit CalendaredMixIn(MeiElement *b);
        virtual ~CalendaredMixIn();
        /** \brief indicates the calendar system to which a date belongs, for example, Gregorian,
         *  Julian, Roman, Mosaic, Revolutionary, Islamic, etc.
         */
        MeiAttribute* getCalendar();
        void setCalendar(std::string _calendar);
        bool hasCalendar();
        void removeCalendar();

    private:
        MeiElement *b;
};

class CanonicalMixIn {
    public:
        explicit CanonicalMixIn(MeiElement *b);
        virtual ~CanonicalMixIn();
        /** \brief used to record a value which serves as a primary key in an external database.
         */
        MeiAttribute* getDbkey();
        void setDbkey(std::string _dbkey);
        bool hasDbkey();
        void removeDbkey();

    private:
        MeiElement *b;
};

class ChordVisMixIn {
    public:
        explicit ChordVisMixIn(MeiElement *b);
        virtual ~ChordVisMixIn();
        /** \brief indicates a single alternative note head should be displayed instead of
         *  individual note heads.
         * 
         *  See Read, p. 320-321, re: tone clusters.
         */
        MeiAttribute* getCluster();
        void setCluster(std::string _cluster);
        bool hasCluster();
        void removeCluster();

    private:
        MeiElement *b;
};

class CleffingLogMixIn {
    public:
        explicit CleffingLogMixIn(MeiElement *b);
        virtual ~CleffingLogMixIn();
        /** \brief encodes a value for the clef symbol.
         */
        MeiAttribute* getClefShape();
        void setClefShape(std::string _clefshape);
        bool hasClefShape();
        void removeClefShape();
        /** \brief contains a default value for the position of the clef.
         * 
         *  The value must be in the range between 1 and the number of lines on the staff.
         *  The numbering of lines starts with the lowest line of the staff.
         */
        MeiAttribute* getClefLine();
        void setClefLine(std::string _clefline);
        bool hasClefLine();
        void removeClefLine();
        /** \brief records the amount of octave displacement to be applied to the clef.
         */
        MeiAttribute* getClefDis();
        void setClefDis(std::string _clefdis);
        bool hasClefDis();
        void removeClefDis();
        /** \brief records the direction of octave displacement to be applied to the clef.
         */
        MeiAttribute* getClefDisPlace();
        void setClefDisPlace(std::string _clefdisplace);
        bool hasClefDisPlace();
        void removeClefDisPlace();

    private:
        MeiElement *b;
};

class CleffingVisMixIn {
    public:
        explicit CleffingVisMixIn(MeiElement *b);
        virtual ~CleffingVisMixIn();
        /** \brief describes the color of the clef.
         */
        MeiAttribute* getClefColor();
        void setClefColor(std::string _clefcolor);
        bool hasClefColor();
        void removeClefColor();
        /** \brief determines whether the clef is to be displayed.
         */
        MeiAttribute* getClefVisible();
        void setClefVisible(std::string _clefvisible);
        bool hasClefVisible();
        void removeClefVisible();

    private:
        MeiElement *b;
};

class ClefshapeMixIn {
    public:
        explicit ClefshapeMixIn(MeiElement *b);
        virtual ~ClefshapeMixIn();
        /** \brief describes a clef's shape.
         */
        MeiAttribute* getShape();
        void setShape(std::string _shape);
        bool hasShape();
        void removeShape();

    private:
        MeiElement *b;
};

class ColorMixIn {
    public:
        explicit ColorMixIn(MeiElement *b);
        virtual ~ColorMixIn();
        /** \brief used to indicate visual appearance.
         * 
         *  Do not confuse this with the musical term 'color' as used in pre-CMN notation.
         */
        MeiAttribute* getColor();
        void setColor(std::string _color);
        bool hasColor();
        void removeColor();

    private:
        MeiElement *b;
};

class ColorationMixIn {
    public:
        explicit ColorationMixIn(MeiElement *b);
        virtual ~ColorationMixIn();
        /** \brief indicates this feature is 'colored'; that is, it is a participant in a change in
         *  rhythmic values.
         * 
         *  In mensural notation, coloration is indicated by colored notes (red, black,
         *  etc.) where void notes would otherwise occur. In CMN, coloration is indicated by
         *  an inverse color; that is, the note head is void when it would otherwise be
         *  filled and vice versa.
         */
        MeiAttribute* getColored();
        void setColored(std::string _colored);
        bool hasColored();
        void removeColored();

    private:
        MeiElement *b;
};

class CommonMixIn {
    public:
        explicit CommonMixIn(MeiElement *b);
        virtual ~CommonMixIn();
        /** \brief provides a label for an element.
         * 
         *  The value may be any string.
         */
        MeiAttribute* getLabel();
        void setLabel(std::string _label);
        bool hasLabel();
        void removeLabel();
        /** \brief provides a name or number designation for an element.
         * 
         *  While the value need not be unique, it is required to be a single token.
         */
        MeiAttribute* getN();
        void setN(std::string _n);
        bool hasN();
        void removeN();
        /** \brief provides a base URI reference with which applications can resolve relative URI
         *  references into absolute URI references.
         */
        MeiAttribute* getBase();
        void setBase(std::string _base);
        bool hasBase();
        void removeBase();

    private:
        MeiElement *b;
};

class CoordinatedMixIn {
    public:
        explicit CoordinatedMixIn(MeiElement *b);
        virtual ~CoordinatedMixIn();
        /** \brief indicates the upper-left corner x coordinate.
         */
        MeiAttribute* getUlx();
        void setUlx(std::string _ulx);
        bool hasUlx();
        void removeUlx();
        /** \brief indicates the upper-left corner y coordinate.
         */
        MeiAttribute* getUly();
        void setUly(std::string _uly);
        bool hasUly();
        void removeUly();
        /** \brief indicates the lower-right corner x coordinate.
         */
        MeiAttribute* getLrx();
        void setLrx(std::string _lrx);
        bool hasLrx();
        void removeLrx();
        /** \brief indicates the lower-left corner x coordinate.
         */
        MeiAttribute* getLry();
        void setLry(std::string _lry);
        bool hasLry();
        void removeLry();

    private:
        MeiElement *b;
};

class CurvatureMixIn {
    public:
        explicit CurvatureMixIn(MeiElement *b);
        virtual ~CurvatureMixIn();
        /** \brief records the placement of Bezier control points as a series of space-separated xy
         *  coordinates, e.g., 19 45 -32 118.
         */
        MeiAttribute* getBezier();
        void setBezier(std::string _bezier);
        bool hasBezier();
        void removeBezier();
        /** \brief describes a curve as a set of distance values above or below an imaginary line
         *  connecting the endpoints of the curve.
         * 
         *  The bulge attribute must contain one or more decimal values expressed in inter-
         *  line units.
         */
        MeiAttribute* getBulge();
        void setBulge(std::string _bulge);
        bool hasBulge();
        void removeBulge();
        /** \brief describes a curve with a generic term indicating the direction of curvature.
         */
        MeiAttribute* getCurvedir();
        void setCurvedir(std::string _curvedir);
        bool hasCurvedir();
        void removeCurvedir();

    private:
        MeiElement *b;
};

class CurverendMixIn {
    public:
        explicit CurverendMixIn(MeiElement *b);
        virtual ~CurverendMixIn();
        /** \brief describes the line style of the curve.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

    private:
        MeiElement *b;
};

class CustosLogMixIn {
    public:
        explicit CustosLogMixIn(MeiElement *b);
        virtual ~CustosLogMixIn();
        /** \brief allows the use of one or more previously-undeclared URIs to identify an external
         *  electronic object.
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

    private:
        MeiElement *b;
};

class DatableMixIn {
    public:
        explicit DatableMixIn(MeiElement *b);
        virtual ~DatableMixIn();
        /** \brief contains the end point of a date range.
         */
        MeiAttribute* getEnddate();
        void setEnddate(std::string _enddate);
        bool hasEnddate();
        void removeEnddate();
        /** \brief contains an upper boundary for an uncertain date.
         */
        MeiAttribute* getNotafter();
        void setNotafter(std::string _notafter);
        bool hasNotafter();
        void removeNotafter();
        /** \brief contains a lower boundary for an uncertain date.
         */
        MeiAttribute* getNotbefore();
        void setNotbefore(std::string _notbefore);
        bool hasNotbefore();
        void removeNotbefore();
        /** \brief contains the starting point of a date range.
         */
        MeiAttribute* getStartdate();
        void setStartdate(std::string _startdate);
        bool hasStartdate();
        void removeStartdate();

    private:
        MeiElement *b;
};

class DatapointingMixIn {
    public:
        explicit DatapointingMixIn(MeiElement *b);
        virtual ~DatapointingMixIn();
        /** \brief used to link metadata elements to one or more data-containing elements.
         */
        MeiAttribute* getData();
        void setData(std::string _data);
        bool hasData();
        void removeData();

    private:
        MeiElement *b;
};

class DeclaringMixIn {
    public:
        explicit DeclaringMixIn(MeiElement *b);
        virtual ~DeclaringMixIn();
        /** \brief identifies one or more metadata elements within the header, which are understood
         *  to apply to the element bearing this attribute and its content.
         */
        MeiAttribute* getDecls();
        void setDecls(std::string _decls);
        bool hasDecls();
        void removeDecls();

    private:
        MeiElement *b;
};

class DistancesMixIn {
    public:
        explicit DistancesMixIn(MeiElement *b);
        virtual ~DistancesMixIn();
        /** \brief records the distance from the staff for dynamic marks in 1/2 inter-line units.
         */
        MeiAttribute* getDynamDist();
        void setDynamDist(std::string _dynamdist);
        bool hasDynamDist();
        void removeDynamDist();
        /** \brief records the default distance from the staff of harmonic indications, such as
         *  guitar chord grids or functional labels.
         */
        MeiAttribute* getHarmDist();
        void setHarmDist(std::string _harmdist);
        bool hasHarmDist();
        void removeHarmDist();
        /** \brief determines how far from the staff to render text elements.
         */
        MeiAttribute* getTextDist();
        void setTextDist(std::string _textdist);
        bool hasTextDist();
        void removeTextDist();

    private:
        MeiElement *b;
};

class DotLogMixIn {
    public:
        explicit DotLogMixIn(MeiElement *b);
        virtual ~DotLogMixIn();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

    private:
        MeiElement *b;
};

class DurationDefaultMixIn {
    public:
        explicit DurationDefaultMixIn(MeiElement *b);
        virtual ~DurationDefaultMixIn();
        /** \brief contains a default duration in those situations when the first note, rest,
         *  chord, etc.
         * 
         *  in a measure does not have a duration specified.
         */
        MeiAttribute* getDurDefault();
        void setDurDefault(std::string _durdefault);
        bool hasDurDefault();
        void removeDurDefault();

    private:
        MeiElement *b;
};

class DurationMusicalMixIn {
    public:
        explicit DurationMusicalMixIn(MeiElement *b);
        virtual ~DurationMusicalMixIn();
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

class DurationPerformedMixIn {
    public:
        explicit DurationPerformedMixIn(MeiElement *b);
        virtual ~DurationPerformedMixIn();
        /** \brief records performed duration information that differs from written duration.
         * 
         *  Its value may be expressed in any convenient form, such as measures[s]+
         *  beat[s].beatpart, ppq (MIDI clicks), Humdrum **recip values, or MusicXML
         *  'divisions', etc.
         */
        MeiAttribute* getDurGes();
        void setDurGes(std::string _durges);
        bool hasDurGes();
        void removeDurGes();

    private:
        MeiElement *b;
};

class DurationRatioMixIn {
    public:
        explicit DurationRatioMixIn(MeiElement *b);
        virtual ~DurationRatioMixIn();
        /** \brief along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();
        /** \brief along with num, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNumbase();
        void setNumbase(std::string _numbase);
        bool hasNumbase();
        void removeNumbase();

    private:
        MeiElement *b;
};

class DurationTimestampMixIn {
    public:
        explicit DurationTimestampMixIn(MeiElement *b);
        virtual ~DurationTimestampMixIn();
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

class EnclosingcharsMixIn {
    public:
        explicit EnclosingcharsMixIn(MeiElement *b);
        virtual ~EnclosingcharsMixIn();
        /** \brief records the characters often used to mark accidentals, articulations, and
         *  sometimes notes as having a cautionary or editorial function.
         * 
         *  For an example of cautionary accidentals enclosed in parentheses, see Read, p.
         *  131, ex. 9-14.
         */
        MeiAttribute* getEnclose();
        void setEnclose(std::string _enclose);
        bool hasEnclose();
        void removeEnclose();

    private:
        MeiElement *b;
};

class FermatapresentMixIn {
    public:
        explicit FermatapresentMixIn(MeiElement *b);
        virtual ~FermatapresentMixIn();
        /** \brief indicates the attachment of a fermata to this element.
         * 
         *  If visual information about the fermata needs to be recorded, then a <fermata>
         *  element should be employed instead.
         */
        MeiAttribute* getFermata();
        void setFermata(std::string _fermata);
        bool hasFermata();
        void removeFermata();

    private:
        MeiElement *b;
};

class HandidentMixIn {
    public:
        explicit HandidentMixIn(MeiElement *b);
        virtual ~HandidentMixIn();
        /** \brief signifies the hand responsible for an action.
         * 
         *  The value must be the ID of a <hand> element declared in the header.
         */
        MeiAttribute* getHand();
        void setHand(std::string _hand);
        bool hasHand();
        void removeHand();

    private:
        MeiElement *b;
};

class HorizontalalignMixIn {
    public:
        explicit HorizontalalignMixIn(MeiElement *b);
        virtual ~HorizontalalignMixIn();
        /** \brief records horizontal alignment.
         */
        MeiAttribute* getHalign();
        void setHalign(std::string _halign);
        bool hasHalign();
        void removeHalign();

    private:
        MeiElement *b;
};

class InstrumentidentMixIn {
    public:
        explicit InstrumentidentMixIn(MeiElement *b);
        virtual ~InstrumentidentMixIn();
        /** \brief provides a way of pointing to a MIDI instrument definition.
         * 
         *  It must contain the ID of an <instrDef> element elsewhere in the document.
         */
        MeiAttribute* getInstr();
        void setInstr(std::string _instr);
        bool hasInstr();
        void removeInstr();

    private:
        MeiElement *b;
};

class InternetmediaMixIn {
    public:
        explicit InternetmediaMixIn(MeiElement *b);
        virtual ~InternetmediaMixIn();
        /** \brief specifies the applicable MIME (multimedia internet mail extension) type.
         * 
         *  The value should be a valid MIME media type defined by the Internet Engineering
         *  Task Force in RFC 2046.
         */
        MeiAttribute* getMimetype();
        void setMimetype(std::string _mimetype);
        bool hasMimetype();
        void removeMimetype();

    private:
        MeiElement *b;
};

class JoinedMixIn {
    public:
        explicit JoinedMixIn(MeiElement *b);
        virtual ~JoinedMixIn();
        /** \brief used for linking visually separate entities that form a single logical entity,
         *  for example, multiple slurs broken across a system break that form a single
         *  musical phrase.
         * 
         *  Also used to indicate a measure which metrically completes the current one.
         *  Record the identifiers of the separately encoded components, excluding the one
         *  carrying the attribute.
         */
        MeiAttribute* getJoin();
        void setJoin(std::string _join);
        bool hasJoin();
        void removeJoin();

    private:
        MeiElement *b;
};

class KeysigsLogMixIn {
    public:
        explicit KeysigsLogMixIn(MeiElement *b);
        virtual ~KeysigsLogMixIn();
        /** \brief contains an accidental for the tonic key, if one is required, e.g., if key.pname
         *  equals 'c' and key.accid equals 's', then a tonic of C# is indicated.
         */
        MeiAttribute* getKeyAccid();
        void setKeyAccid(std::string _keyaccid);
        bool hasKeyAccid();
        void removeKeyAccid();
        /** \brief indicates major, minor, or other tonality.
         */
        MeiAttribute* getKeyMode();
        void setKeyMode(std::string _keymode);
        bool hasKeyMode();
        void removeKeyMode();
        /** \brief holds the pitch name of the tonic key, e.g.
         * 
         *  'c' for the key of C.
         */
        MeiAttribute* getKeyPname();
        void setKeyPname(std::string _keypname);
        bool hasKeyPname();
        void removeKeyPname();
        /** \brief indicates where the key lies in the circle of fifths.
         */
        MeiAttribute* getKeySig();
        void setKeySig(std::string _keysig);
        bool hasKeySig();
        void removeKeySig();
        /** \brief Mixed key signatures, e.g.
         * 
         *  those consisting of a mixture of flats and sharps (Read, p. 143, ex. 9-39), and
         *  key signatures with unorthodox placement of the accidentals (Read, p. 141) must
         *  be indicated by setting the key.sig attribute to 'mixed' and providing explicit
         *  key signature information in the key.sig.mixed attribute or in the <keySig>
         *  element. It is intended that key.sig.mixed contain a series of tokens with each
         *  token containing pitch name, accidental, and octave, such as 'A4 Cs5 Ef5' that
         *  indicate what key accidentals should be rendered and where they should be
         *  placed.
         */
        MeiAttribute* getKeySigMixed();
        void setKeySigMixed(std::string _keysigmixed);
        bool hasKeySigMixed();
        void removeKeySigMixed();

    private:
        MeiElement *b;
};

class KeysigsVisMixIn {
    public:
        explicit KeysigsVisMixIn(MeiElement *b);
        virtual ~KeysigsVisMixIn();
        /** \brief indicates whether the key signature should be displayed.
         */
        MeiAttribute* getKeySigShow();
        void setKeySigShow(std::string _keysigshow);
        bool hasKeySigShow();
        void removeKeySigShow();
        /** \brief determines whether cautionary accidentals should be displayed at a key change.
         */
        MeiAttribute* getKeySigShowchange();
        void setKeySigShowchange(std::string _keysigshowchange);
        bool hasKeySigShowchange();
        void removeKeySigShowchange();

    private:
        MeiElement *b;
};

class LabelsAddlMixIn {
    public:
        explicit LabelsAddlMixIn(MeiElement *b);
        virtual ~LabelsAddlMixIn();
        /** \brief provides a label for a group of staves on pages after the first page.
         * 
         *  Usually, this label takes an abbreviated form.
         */
        MeiAttribute* getLabelAbbr();
        void setLabelAbbr(std::string _labelabbr);
        bool hasLabelAbbr();
        void removeLabelAbbr();

    private:
        MeiElement *b;
};

class LangMixIn {
    public:
        explicit LangMixIn(MeiElement *b);
        virtual ~LangMixIn();
        /** \brief identifies the language of the element's content.
         * 
         *  The values for this attribute are language 'tags' as defined in BCP 47. All
         *  language tags that make use of private use sub-tags must be documented in a
         *  corresponding language element in the MEI header whose id attribute is the same
         *  as the language tag's value.
         */
        MeiAttribute* getLang();
        void setLang(std::string _lang);
        bool hasLang();
        void removeLang();

    private:
        MeiElement *b;
};

class LayeridentMixIn {
    public:
        explicit LayeridentMixIn(MeiElement *b);
        virtual ~LayeridentMixIn();
        /** \brief identifies the layer to which a feature applies.
         */
        MeiAttribute* getLayer();
        void setLayer(std::string _layer);
        bool hasLayer();
        void removeLayer();

    private:
        MeiElement *b;
};

class LinelocMixIn {
    public:
        explicit LinelocMixIn(MeiElement *b);
        virtual ~LinelocMixIn();
        /** \brief indicates the line upon which a feature stands.
         * 
         *  The value must be in the range between 1 and the number of lines on the staff.
         *  The numbering of lines starts with the lowest line of the staff.
         */
        MeiAttribute* getLine();
        void setLine(std::string _line);
        bool hasLine();
        void removeLine();

    private:
        MeiElement *b;
};

class LinerendMixIn {
    public:
        explicit LinerendMixIn(MeiElement *b);
        virtual ~LinerendMixIn();
        /** \brief describes the line style of the curve.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

    private:
        MeiElement *b;
};

class LyricstyleMixIn {
    public:
        explicit LyricstyleMixIn(MeiElement *b);
        virtual ~LyricstyleMixIn();
        /** \brief describes the alignment of lyric syllables associated with a note or chord.
         */
        MeiAttribute* getLyricAlign();
        void setLyricAlign(std::string _lyricalign);
        bool hasLyricAlign();
        void removeLyricAlign();
        /** \brief sets the font family default value for lyrics.
         */
        MeiAttribute* getLyricFam();
        void setLyricFam(std::string _lyricfam);
        bool hasLyricFam();
        void removeLyricFam();
        /** \brief sets the font name default value for lyrics.
         */
        MeiAttribute* getLyricName();
        void setLyricName(std::string _lyricname);
        bool hasLyricName();
        void removeLyricName();
        /** \brief sets the default font size value for lyrics.
         */
        MeiAttribute* getLyricSize();
        void setLyricSize(std::string _lyricsize);
        bool hasLyricSize();
        void removeLyricSize();
        /** \brief sets the default font style value for lyrics.
         */
        MeiAttribute* getLyricStyle();
        void setLyricStyle(std::string _lyricstyle);
        bool hasLyricStyle();
        void removeLyricStyle();
        /** \brief sets the default font weight value for lyrics.
         */
        MeiAttribute* getLyricWeight();
        void setLyricWeight(std::string _lyricweight);
        bool hasLyricWeight();
        void removeLyricWeight();

    private:
        MeiElement *b;
};

class MeasureLogMixIn {
    public:
        explicit MeasureLogMixIn(MeiElement *b);
        virtual ~MeasureLogMixIn();
        /** \brief indicates the visual rendition of the left bar line.
         * 
         *  It is present here only for facilitation of translation from legacy encodings
         *  which use it. Usually, it can be safely ignored.
         */
        MeiAttribute* getLeft();
        void setLeft(std::string _left);
        bool hasLeft();
        void removeLeft();
        /** \brief indicates the function of the right bar line and is structurally important.
         */
        MeiAttribute* getRight();
        void setRight(std::string _right);
        bool hasRight();
        void removeRight();

    private:
        MeiElement *b;
};

class MeasurementMixIn {
    public:
        explicit MeasurementMixIn(MeiElement *b);
        virtual ~MeasurementMixIn();
        /** \brief indicates the units used for a measurement, usually using the standard symbol
         *  for the desired unit.
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();

    private:
        MeiElement *b;
};

class MediumMixIn {
    public:
        explicit MediumMixIn(MeiElement *b);
        virtual ~MediumMixIn();
        /** \brief describes the writing medium.
         */
        MeiAttribute* getMedium();
        void setMedium(std::string _medium);
        bool hasMedium();
        void removeMedium();

    private:
        MeiElement *b;
};

class MeiversionMixIn {
    public:
        explicit MeiversionMixIn(MeiElement *b);
        virtual ~MeiversionMixIn();
        /** \brief records the version of MEI used by the file.
         */
        MeiAttribute* getMeiversion();
        void setMeiversion(std::string _meiversion);
        bool hasMeiversion();
        void removeMeiversion();

    private:
        MeiElement *b;
};

class MeterconformanceMixIn {
    public:
        explicit MeterconformanceMixIn(MeiElement *b);
        virtual ~MeterconformanceMixIn();
        /** \brief indicates the relationship between the content of a staff or layer and the
         *  prevailing meter
         */
        MeiAttribute* getMetcon();
        void setMetcon(std::string _metcon);
        bool hasMetcon();
        void removeMetcon();

    private:
        MeiElement *b;
};

class MeterconformanceBarMixIn {
    public:
        explicit MeterconformanceBarMixIn(MeiElement *b);
        virtual ~MeterconformanceBarMixIn();
        /** \brief indicates the relationship between the content of a staff or layer and the
         *  prevailing meter
         */
        MeiAttribute* getMetcon();
        void setMetcon(std::string _metcon);
        bool hasMetcon();
        void removeMetcon();
        /** \brief indicates whether or not a bar line is "controlling"; that is, if it indicates a
         *  point of alignment across all the parts.
         * 
         *  Bar lines within a score are usually controlling; that is, they "line up". Bar
         *  lines within parts may or may not be controlling. When applied to <measure>,
         *  this attribute indicates the nature of the right barline but not the left.
         */
        MeiAttribute* getControl();
        void setControl(std::string _control);
        bool hasControl();
        void removeControl();

    private:
        MeiElement *b;
};

class MetersLogMixIn {
    public:
        explicit MetersLogMixIn(MeiElement *b);
        virtual ~MetersLogMixIn();
        /** \brief captures the number of beats in a measure, that is, the top number of the meter
         *  signature.
         */
        MeiAttribute* getMeterCount();
        void setMeterCount(std::string _metercount);
        bool hasMeterCount();
        void removeMeterCount();
        /** \brief contains the number indicating the beat unit, that is, the bottom number of the
         *  meter signature.
         */
        MeiAttribute* getMeterUnit();
        void setMeterUnit(std::string _meterunit);
        bool hasMeterUnit();
        void removeMeterUnit();

    private:
        MeiElement *b;
};

class MetersVisMixIn {
    public:
        explicit MetersVisMixIn(MeiElement *b);
        virtual ~MetersVisMixIn();
        /** \brief contains an indication of how the meter signature should be rendered.
         */
        MeiAttribute* getMeterRend();
        void setMeterRend(std::string _meterrend);
        bool hasMeterRend();
        void removeMeterRend();
        /** \brief determines whether a new meter signature should be displayed when the meter
         *  signature changes.
         */
        MeiAttribute* getMeterShowchange();
        void setMeterShowchange(std::string _metershowchange);
        bool hasMeterShowchange();
        void removeMeterShowchange();
        /** \brief indicates the use of a meter symbol instead of a numeric meter signature, that
         *  is, 'C' for common time or 'C' with a slash for cut time.
         */
        MeiAttribute* getMeterSym();
        void setMeterSym(std::string _metersym);
        bool hasMeterSym();
        void removeMeterSym();

    private:
        MeiElement *b;
};

class MmtempoMixIn {
    public:
        explicit MmtempoMixIn(MeiElement *b);
        virtual ~MmtempoMixIn();
        /** \brief used to describe tempo in terms of beats (meter signature denominator) per
         *  minute, ala M.M.
         * 
         *  (Maezel's Metronome).
         */
        MeiAttribute* getMm();
        void setMm(std::string _mm);
        bool hasMm();
        void removeMm();

    private:
        MeiElement *b;
};

class MultinummeasuresMixIn {
    public:
        explicit MultinummeasuresMixIn(MeiElement *b);
        virtual ~MultinummeasuresMixIn();
        /** \brief indicates whether programmatically calculated counts of multiple measures of
         *  rest (mRest) and whole measure repeats (mRpt) in parts should be rendered.
         */
        MeiAttribute* getMultiNumber();
        void setMultiNumber(std::string _multinumber);
        bool hasMultiNumber();
        void removeMultiNumber();

    private:
        MeiElement *b;
};

class NameMixIn {
    public:
        explicit NameMixIn(MeiElement *b);
        virtual ~NameMixIn();
        /** \brief used to record a pointer to the regularized form of the name elsewhere in the
         *  document.
         */
        MeiAttribute* getNymref();
        void setNymref(std::string _nymref);
        bool hasNymref();
        void removeNymref();
        /** \brief indicates a property of the entire link.
         * 
         *  The value of the role attribute must be a URI reference as defined in [IETF RFC
         *  2396], except that if the URI scheme used is allowed to have absolute and
         *  relative forms, the URI portion must be absolute. The URI reference identifies
         *  some resource that describes the intended property. When no value is supplied,
         *  no particular role value is to be inferred.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();

    private:
        MeiElement *b;
};

class NoteGesMixIn {
    public:
        explicit NoteGesMixIn(MeiElement *b);
        virtual ~NoteGesMixIn();
        /** \brief records performed octave information that differs from the written value.
         */
        MeiAttribute* getOctGes();
        void setOctGes(std::string _octges);
        bool hasOctGes();
        void removeOctGes();
        /** \brief contains a performed pitch name that differs from the written value.
         */
        MeiAttribute* getPnameGes();
        void setPnameGes(std::string _pnameges);
        bool hasPnameGes();
        void removePnameGes();
        /** \brief holds a pitch-to-number mapping, a base-40 or MIDI note number, for example.
         */
        MeiAttribute* getPnum();
        void setPnum(std::string _pnum);
        bool hasPnum();
        void removePnum();

    private:
        MeiElement *b;
};

class NoteVisMixIn {
    public:
        explicit NoteVisMixIn(MeiElement *b);
        virtual ~NoteVisMixIn();
        /** \brief used to override the head shape normally used for the given duration.
         */
        MeiAttribute* getHeadshape();
        void setHeadshape(std::string _headshape);
        bool hasHeadshape();
        void removeHeadshape();

    private:
        MeiElement *b;
};

class OctaveMixIn {
    public:
        explicit OctaveMixIn(MeiElement *b);
        virtual ~OctaveMixIn();
        /** \brief captures written octave information.
         */
        MeiAttribute* getOct();
        void setOct(std::string _oct);
        bool hasOct();
        void removeOct();

    private:
        MeiElement *b;
};

class OctavedefaultMixIn {
    public:
        explicit OctavedefaultMixIn(MeiElement *b);
        virtual ~OctavedefaultMixIn();
        /** \brief contains a default octave specification for use when the first note, rest,
         *  chord, etc.
         * 
         *  in a measure does not have an octave value specified.
         */
        MeiAttribute* getOctaveDefault();
        void setOctaveDefault(std::string _octavedefault);
        bool hasOctaveDefault();
        void removeOctaveDefault();

    private:
        MeiElement *b;
};

class OctavedisplacementMixIn {
    public:
        explicit OctavedisplacementMixIn(MeiElement *b);
        virtual ~OctavedisplacementMixIn();
        /** \brief records the amount of octave displacement.
         */
        MeiAttribute* getDis();
        void setDis(std::string _dis);
        bool hasDis();
        void removeDis();
        /** \brief records the direction of octave displacement.
         */
        MeiAttribute* getDisPlace();
        void setDisPlace(std::string _displace);
        bool hasDisPlace();
        void removeDisPlace();

    private:
        MeiElement *b;
};

class OnelinestaffMixIn {
    public:
        explicit OnelinestaffMixIn(MeiElement *b);
        virtual ~OnelinestaffMixIn();
        /** \brief determines the placement of notes on a 1-line staff.
         * 
         *  A value of 'true' places all notes on the line, while a value of 'false' places
         *  stems-up notes above the line and stems-down notes below the line.
         */
        MeiAttribute* getOntheline();
        void setOntheline(std::string _ontheline);
        bool hasOntheline();
        void removeOntheline();

    private:
        MeiElement *b;
};

class PadLogMixIn {
    public:
        explicit PadLogMixIn(MeiElement *b);
        virtual ~PadLogMixIn();
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

class PbVisMixIn {
    public:
        explicit PbVisMixIn(MeiElement *b);
        virtual ~PbVisMixIn();
        /** \brief records the function of an accidental.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

    private:
        MeiElement *b;
};

class PitchMixIn {
    public:
        explicit PitchMixIn(MeiElement *b);
        virtual ~PitchMixIn();
        /** \brief contains a written pitch name.
         */
        MeiAttribute* getPname();
        void setPname(std::string _pname);
        bool hasPname();
        void removePname();

    private:
        MeiElement *b;
};

class PlacementMixIn {
    public:
        explicit PlacementMixIn(MeiElement *b);
        virtual ~PlacementMixIn();
        /** \brief captures the placement of the item with respect to the staff with which it is
         *  associated.
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

    private:
        MeiElement *b;
};

class PlistMixIn {
    public:
        explicit PlistMixIn(MeiElement *b);
        virtual ~PlistMixIn();
        /** \brief contains a space separated list of references that identify logical events that
         *  participate in a collection, such as notes under a phrase mark.
         */
        MeiAttribute* getPlist();
        void setPlist(std::string _plist);
        bool hasPlist();
        void removePlist();
        /** \brief specifies the intended meaning when the target of a pointer is itself a pointer.
         */
        MeiAttribute* getEvaluate();
        void setEvaluate(std::string _evaluate);
        bool hasEvaluate();
        void removeEvaluate();

    private:
        MeiElement *b;
};

class PointingMixIn {
    public:
        explicit PointingMixIn(MeiElement *b);
        virtual ~PointingMixIn();
        /** \brief defines whether a link occurs automatically or must be requested by the user.
         * 
         *  It is used in conjunction with the show attribute to determine link behavior.
         */
        MeiAttribute* getActuate();
        void setActuate(std::string _actuate);
        bool hasActuate();
        void removeActuate();
        /** \brief indicates a property of the entire link.
         * 
         *  The value of the role attribute must be a URI reference as defined in [IETF RFC
         *  2396], except that if the URI scheme used is allowed to have absolute and
         *  relative forms, the URI portion must be absolute. The URI reference identifies
         *  some resource that describes the intended property. When no value is supplied,
         *  no particular role value is to be inferred.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();
        /** \brief defines how a remote resource is rendered.
         */
        MeiAttribute* getShow();
        void setShow(std::string _show);
        bool hasShow();
        void removeShow();
        /** \brief allows the use of one or more previously-undeclared URIs to identify an external
         *  electronic object.
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();
        /** \brief in contrast with the role attribute, allows the target resource to be
         *  characterized using any convenient classification scheme or typology.
         */
        MeiAttribute* getTargettype();
        void setTargettype(std::string _targettype);
        bool hasTargettype();
        void removeTargettype();
        /** \brief contains a human-readable description of the entire link.
         * 
         *  A value is optional; if a value is supplied, it should contain a string that
         *  describes the resource. The use of this information is highly dependent on the
         *  type of processing being done. It may be used, for example, to make titles
         *  available to applications used by visually impaired users, or to create a table
         *  of links, or to present help text that appears when a user lets a mouse pointer
         *  hover over a starting resource.
         */
        MeiAttribute* getTitle();
        void setTitle(std::string _title);
        bool hasTitle();
        void removeTitle();

    private:
        MeiElement *b;
};

class RegularizedMixIn {
    public:
        explicit RegularizedMixIn(MeiElement *b);
        virtual ~RegularizedMixIn();
        /** \brief provides a regularized, authorized value.
         */
        MeiAttribute* getReg();
        void setReg(std::string _reg);
        bool hasReg();
        void removeReg();

    private:
        MeiElement *b;
};

class RelativesizeMixIn {
    public:
        explicit RelativesizeMixIn(MeiElement *b);
        virtual ~RelativesizeMixIn();
        /** \brief describes the relative size of a feature.
         */
        MeiAttribute* getSize();
        void setSize(std::string _size);
        bool hasSize();
        void removeSize();

    private:
        MeiElement *b;
};

class ResponsibilityMixIn {
    public:
        explicit ResponsibilityMixIn(MeiElement *b);
        virtual ~ResponsibilityMixIn();
        /** \brief captures information regarding responsibility for some aspect of the text's
         *  creation, transcription, editing, or encoding.
         * 
         *  Its value must point to one or more identifiers declared in the document header.
         */
        MeiAttribute* getResp();
        void setResp(std::string _resp);
        bool hasResp();
        void removeResp();

    private:
        MeiElement *b;
};

class SbVisMixIn {
    public:
        explicit SbVisMixIn(MeiElement *b);
        virtual ~SbVisMixIn();
        /** \brief describes the line style of the curve.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();

    private:
        MeiElement *b;
};

class ScalableMixIn {
    public:
        explicit ScalableMixIn(MeiElement *b);
        virtual ~ScalableMixIn();
        /** \brief scale factor to be applied to the feature to make it the desired display size.
         */
        MeiAttribute* getScale();
        void setScale(std::string _scale);
        bool hasScale();
        void removeScale();

    private:
        MeiElement *b;
};

class ScoredefGesMixIn {
    public:
        explicit ScoredefGesMixIn(MeiElement *b);
        virtual ~ScoredefGesMixIn();
        /** \brief holds the pitch name of a tuning reference pitch.
         */
        MeiAttribute* getTunePname();
        void setTunePname(std::string _tunepname);
        bool hasTunePname();
        void removeTunePname();
        /** \brief holds a value for cycles per second, i.e., Hertz, for a tuning reference pitch.
         */
        MeiAttribute* getTuneHz();
        void setTuneHz(std::string _tuneHz);
        bool hasTuneHz();
        void removeTuneHz();
        /** \brief provides an indication of the tuning system, 'just', for example.
         */
        MeiAttribute* getTuneTemper();
        void setTuneTemper(std::string _tunetemper);
        bool hasTuneTemper();
        void removeTuneTemper();

    private:
        MeiElement *b;
};

class ScoredefVisMixIn {
    public:
        explicit ScoredefVisMixIn(MeiElement *b);
        virtual ~ScoredefVisMixIn();
        /** \brief describes where ending marks should be displayed.
         */
        MeiAttribute* getEndingRend();
        void setEndingRend(std::string _endingrend);
        bool hasEndingRend();
        void removeEndingRend();
        /** \brief indicates whether measure numbers should be displayed.
         */
        MeiAttribute* getMnumVisible();
        void setMnumVisible(std::string _mnumvisible);
        bool hasMnumVisible();
        void removeMnumVisible();
        /** \brief sets the default music font name.
         */
        MeiAttribute* getMusicName();
        void setMusicName(std::string _musicname);
        bool hasMusicName();
        void removeMusicName();
        /** \brief sets the default music font size.
         */
        MeiAttribute* getMusicSize();
        void setMusicSize(std::string _musicsize);
        bool hasMusicSize();
        void removeMusicSize();
        /** \brief indicates whether staves without notes, rests, etc.
         * 
         *  should be displayed. When the value is 'true', empty staves are displayed.
         */
        MeiAttribute* getOptimize();
        void setOptimize(std::string _optimize);
        bool hasOptimize();
        void removeOptimize();
        /** \brief describes the physical height of the rendered output page.
         */
        MeiAttribute* getPageHeight();
        void setPageHeight(std::string _pageheight);
        bool hasPageHeight();
        void removePageHeight();
        /** \brief describes the physical width of the rendered output page.
         */
        MeiAttribute* getPageWidth();
        void setPageWidth(std::string _pagewidth);
        bool hasPageWidth();
        void removePageWidth();
        /** \brief contains the real-world measurement units (inches, centimeters, millimeters)
         *  used to describe the rendered page height, width, and margins.
         */
        MeiAttribute* getPageUnits();
        void setPageUnits(std::string _pageunits);
        bool hasPageUnits();
        void removePageUnits();
        /** \brief indicates the amount of whitespace at the top of a rendered score page.
         */
        MeiAttribute* getPageTopmar();
        void setPageTopmar(std::string _pagetopmar);
        bool hasPageTopmar();
        void removePageTopmar();
        /** \brief indicates the amount of whitespace at the bottom of a rendered score page.
         */
        MeiAttribute* getPageBotmar();
        void setPageBotmar(std::string _pagebotmar);
        bool hasPageBotmar();
        void removePageBotmar();
        /** \brief indicates the amount of whitespace at the left side of a rendered score page.
         */
        MeiAttribute* getPageLeftmar();
        void setPageLeftmar(std::string _pageleftmar);
        bool hasPageLeftmar();
        void removePageLeftmar();
        /** \brief indicates the amount of whitespace at the right side of a rendered score page.
         */
        MeiAttribute* getPageRightmar();
        void setPageRightmar(std::string _pagerightmar);
        bool hasPageRightmar();
        void removePageRightmar();
        /** \brief indicates the number of logical pages to be rendered on a single physical page.
         */
        MeiAttribute* getPagePanels();
        void setPagePanels(std::string _pagepanels);
        bool hasPagePanels();
        void removePagePanels();
        /** \brief indicates how the page should be scaled when rendered.
         */
        MeiAttribute* getPageScale();
        void setPageScale(std::string _pagescale);
        bool hasPageScale();
        void removePageScale();
        /** \brief describes a note's spacing relative to its time value.
         */
        MeiAttribute* getSpacingPackexp();
        void setSpacingPackexp(std::string _spacingpackexp);
        bool hasSpacingPackexp();
        void removeSpacingPackexp();
        /** \brief describes the note spacing of output.
         */
        MeiAttribute* getSpacingPackfact();
        void setSpacingPackfact(std::string _spacingpackfact);
        bool hasSpacingPackfact();
        void removeSpacingPackfact();
        /** \brief sets the minimum amount of space between staves in the same system.
         */
        MeiAttribute* getSpacingStaff();
        void setSpacingStaff(std::string _spacingstaff);
        bool hasSpacingStaff();
        void removeSpacingStaff();
        /** \brief contains a space-separated pair of numbers describing the minimum and maximum
         *  amount of space between systems.
         */
        MeiAttribute* getSpacingSystem();
        void setSpacingSystem(std::string _spacingsystem);
        bool hasSpacingSystem();
        void removeSpacingSystem();
        /** \brief describes the amount of whitespace at the left system margin relative to
         *  page.leftmar.
         */
        MeiAttribute* getSystemLeftmar();
        void setSystemLeftmar(std::string _systemleftmar);
        bool hasSystemLeftmar();
        void removeSystemLeftmar();
        /** \brief describes the amount of whitespace at the right system margin relative to
         *  page.rightmar.
         */
        MeiAttribute* getSystemRightmar();
        void setSystemRightmar(std::string _systemrightmar);
        bool hasSystemRightmar();
        void removeSystemRightmar();
        /** \brief describes the distance from page's top edge to the first system; used for first
         *  page only.
         */
        MeiAttribute* getSystemTopmar();
        void setSystemTopmar(std::string _systemtopmar);
        bool hasSystemTopmar();
        void removeSystemTopmar();

    private:
        MeiElement *b;
};

class SectionVisMixIn {
    public:
        explicit SectionVisMixIn(MeiElement *b);
        virtual ~SectionVisMixIn();
        /** \brief indicates that staves begin again with this section.
         */
        MeiAttribute* getRestart();
        void setRestart(std::string _restart);
        bool hasRestart();
        void removeRestart();

    private:
        MeiElement *b;
};

class SequenceMixIn {
    public:
        explicit SequenceMixIn(MeiElement *b);
        virtual ~SequenceMixIn();
        /** \brief used to assign a sequence number related to the order in which the encoded
         *  features carrying this attribute are believed to have occurred.
         */
        MeiAttribute* getSeq();
        void setSeq(std::string _seq);
        bool hasSeq();
        void removeSeq();

    private:
        MeiElement *b;
};

class SlashcountMixIn {
    public:
        explicit SlashcountMixIn(MeiElement *b);
        virtual ~SlashcountMixIn();
        /** \brief indicates the number of slashes to be rendered along with the feature.
         */
        MeiAttribute* getSlash();
        void setSlash(std::string _slash);
        bool hasSlash();
        void removeSlash();

    private:
        MeiElement *b;
};

class SlurpresentMixIn {
    public:
        explicit SlurpresentMixIn(MeiElement *b);
        virtual ~SlurpresentMixIn();
        /** \brief indicates that this element participates in a slur.
         * 
         *  If visual information about the slur needs to be recorded, then a <slur> element
         *  should be employed.
         */
        MeiAttribute* getSlur();
        void setSlur(std::string _slur);
        bool hasSlur();
        void removeSlur();

    private:
        MeiElement *b;
};

class SpaceVisMixIn {
    public:
        explicit SpaceVisMixIn(MeiElement *b);
        virtual ~SpaceVisMixIn();
        /** \brief indicates whether a space is 'compressible', i.e., if it may be removed at the
         *  discretion of processing software.
         */
        MeiAttribute* getCompressable();
        void setCompressable(std::string _compressable);
        bool hasCompressable();
        void removeCompressable();

    private:
        MeiElement *b;
};

class StaffdefVisMixIn {
    public:
        explicit StaffdefVisMixIn(MeiElement *b);
        virtual ~StaffdefVisMixIn();
        /** \brief determines whether to display guitar chord grids.
         */
        MeiAttribute* getGridShow();
        void setGridShow(std::string _gridshow);
        bool hasGridShow();
        void removeGridShow();
        /** \brief indicates the number of layers and their stem directions.
         */
        MeiAttribute* getLayerscheme();
        void setLayerscheme(std::string _layerscheme);
        bool hasLayerscheme();
        void removeLayerscheme();
        /** \brief indicates the number of staff lines.
         */
        MeiAttribute* getLines();
        void setLines(std::string _lines);
        bool hasLines();
        void removeLines();
        /** \brief captures the colors of the staff lines.
         * 
         *  The value is structured; that is, it should have the same number of space-
         *  separated RGB values as the number of lines indicated by the lines attribute. A
         *  line can be made invisible by assigning it the same RGB value as the background,
         *  usually white.
         */
        MeiAttribute* getLinesColor();
        void setLinesColor(std::string _linescolor);
        bool hasLinesColor();
        void removeLinesColor();
        /** \brief records whether all staff lines are visible.
         */
        MeiAttribute* getLinesVisible();
        void setLinesVisible(std::string _linesvisible);
        bool hasLinesVisible();
        void removeLinesVisible();
        /** \brief records the absolute distance (as opposed to the relative distances recorded in
         *  <scoreDef> elements) between this staff and the preceding one in the same
         *  system.
         * 
         *  This value is meaningless for the first staff in a system since the
         *  spacing.system attribute indicates the spacing between systems.
         */
        MeiAttribute* getSpacing();
        void setSpacing(std::string _spacing);
        bool hasSpacing();
        void removeSpacing();

    private:
        MeiElement *b;
};

class StaffgrpVisMixIn {
    public:
        explicit StaffgrpVisMixIn(MeiElement *b);
        virtual ~StaffgrpVisMixIn();
        /** \brief indicates whether bar lines go across the space between staves (true) or are
         *  only drawn across the lines of each staff (false).
         */
        MeiAttribute* getBarthru();
        void setBarthru(std::string _barthru);
        bool hasBarthru();
        void removeBarthru();

    private:
        MeiElement *b;
};

class StaffgroupingsymMixIn {
    public:
        explicit StaffgroupingsymMixIn(MeiElement *b);
        virtual ~StaffgroupingsymMixIn();
        /** \brief specifies the symbol used to group a set of staves.
         */
        MeiAttribute* getSymbol();
        void setSymbol(std::string _symbol);
        bool hasSymbol();
        void removeSymbol();

    private:
        MeiElement *b;
};

class StaffidentMixIn {
    public:
        explicit StaffidentMixIn(MeiElement *b);
        virtual ~StaffidentMixIn();
        /** \brief signifies the staff on which a notated event occurs or to which a control event
         *  applies.
         * 
         *  Mandatory when applicable.
         */
        MeiAttribute* getStaff();
        void setStaff(std::string _staff);
        bool hasStaff();
        void removeStaff();

    private:
        MeiElement *b;
};

class StafflocMixIn {
    public:
        explicit StafflocMixIn(MeiElement *b);
        virtual ~StafflocMixIn();
        /** \brief holds the staff location of the feature.
         */
        MeiAttribute* getLoc();
        void setLoc(std::string _loc);
        bool hasLoc();
        void removeLoc();

    private:
        MeiElement *b;
};

class StartendidMixIn {
    public:
        explicit StartendidMixIn(MeiElement *b);
        virtual ~StartendidMixIn();
        /** \brief indicates the final element in a sequence of events to which the feature
         *  applies.
         */
        MeiAttribute* getEndid();
        void setEndid(std::string _endid);
        bool hasEndid();
        void removeEndid();

    private:
        MeiElement *b;
};

class StartidMixIn {
    public:
        explicit StartidMixIn(MeiElement *b);
        virtual ~StartidMixIn();
        /** \brief holds a reference to the first element in a sequence of events to which the
         *  feature applies.
         */
        MeiAttribute* getStartid();
        void setStartid(std::string _startid);
        bool hasStartid();
        void removeStartid();

    private:
        MeiElement *b;
};

class StemmedMixIn {
    public:
        explicit StemmedMixIn(MeiElement *b);
        virtual ~StemmedMixIn();
        /** \brief describes the direction of a stem.
         */
        MeiAttribute* getStemDir();
        void setStemDir(std::string _stemdir);
        bool hasStemDir();
        void removeStemDir();
        /** \brief encodes the stem length.
         */
        MeiAttribute* getStemLen();
        void setStemLen(std::string _stemlen);
        bool hasStemLen();
        void removeStemLen();
        /** \brief records the position of the stem in relation to the note head(s).
         */
        MeiAttribute* getStemPos();
        void setStemPos(std::string _stempos);
        bool hasStemPos();
        void removeStemPos();
        /** \brief records the output x coordinate of the stem's attachment point.
         */
        MeiAttribute* getStemX();
        void setStemX(std::string _stemx);
        bool hasStemX();
        void removeStemX();
        /** \brief records the output y coordinate of the stem's attachment point.
         */
        MeiAttribute* getStemY();
        void setStemY(std::string _stemy);
        bool hasStemY();
        void removeStemY();

    private:
        MeiElement *b;
};

class SylLogMixIn {
    public:
        explicit SylLogMixIn(MeiElement *b);
        virtual ~SylLogMixIn();
        /** \brief describes the symbols typically used to indicate breaks between syllables and
         *  their functions.
         */
        MeiAttribute* getCon();
        void setCon(std::string _con);
        bool hasCon();
        void removeCon();
        /** \brief records the position of a syllable within a word.
         */
        MeiAttribute* getWordpos();
        void setWordpos(std::string _wordpos);
        bool hasWordpos();
        void removeWordpos();

    private:
        MeiElement *b;
};

class SyltextMixIn {
    public:
        explicit SyltextMixIn(MeiElement *b);
        virtual ~SyltextMixIn();
        /** \brief holds an associated sung text syllable.
         */
        MeiAttribute* getSyl();
        void setSyl(std::string _syl);
        bool hasSyl();
        void removeSyl();

    private:
        MeiElement *b;
};

class TextstyleMixIn {
    public:
        explicit TextstyleMixIn(MeiElement *b);
        virtual ~TextstyleMixIn();
        /** \brief provides a default value for the font family name of text (other than lyrics)
         *  when this information is not provided on the individual elements.
         */
        MeiAttribute* getTextFam();
        void setTextFam(std::string _textfam);
        bool hasTextFam();
        void removeTextFam();
        /** \brief provides a default value for the font name of text (other than lyrics) when this
         *  information is not provided on the individual elements.
         */
        MeiAttribute* getTextName();
        void setTextName(std::string _textname);
        bool hasTextName();
        void removeTextName();
        /** \brief provides a default value for the font size of text (other than lyrics) when this
         *  information is not provided on the individual elements.
         */
        MeiAttribute* getTextSize();
        void setTextSize(std::string _textsize);
        bool hasTextSize();
        void removeTextSize();
        /** \brief provides a default value for the font style of text (other than lyrics) when
         *  this information is not provided on the individual elements.
         */
        MeiAttribute* getTextStyle();
        void setTextStyle(std::string _textstyle);
        bool hasTextStyle();
        void removeTextStyle();
        /** \brief provides a default value for the font weight for text (other than lyrics) when
         *  this information is not provided on the individual elements.
         */
        MeiAttribute* getTextWeight();
        void setTextWeight(std::string _textweight);
        bool hasTextWeight();
        void removeTextWeight();

    private:
        MeiElement *b;
};

class TiepresentMixIn {
    public:
        explicit TiepresentMixIn(MeiElement *b);
        virtual ~TiepresentMixIn();
        /** \brief indicates that this element participates in a tie.
         * 
         *  If visual information about the tie needs to be recorded, then a <tie> element
         *  should be employed.
         */
        MeiAttribute* getTie();
        void setTie(std::string _tie);
        bool hasTie();
        void removeTie();

    private:
        MeiElement *b;
};

class TimestampMusicalMixIn {
    public:
        explicit TimestampMusicalMixIn(MeiElement *b);
        virtual ~TimestampMusicalMixIn();
        /** \brief encodes the onset time in terms of musical time, i.e.,
         *  beats[.fractional_beat_part]
         */
        MeiAttribute* getTstamp();
        void setTstamp(std::string _tstamp);
        bool hasTstamp();
        void removeTstamp();

    private:
        MeiElement *b;
};

class TimestampPerformedMixIn {
    public:
        explicit TimestampPerformedMixIn(MeiElement *b);
        virtual ~TimestampPerformedMixIn();
        /** \brief used to record the onset time in pulses per quarter note (ppq, MusicXML
         *  divisions, or MIDI clicks) since the start of the file.
         */
        MeiAttribute* getTstampGes();
        void setTstampGes(std::string _tstampges);
        bool hasTstampGes();
        void removeTstampGes();
        /** \brief used to record the onset time in terms of ISO time since the start of the file.
         */
        MeiAttribute* getTstampReal();
        void setTstampReal(std::string _tstampreal);
        bool hasTstampReal();
        void removeTstampReal();

    private:
        MeiElement *b;
};

class TranspositionMixIn {
    public:
        explicit TranspositionMixIn(MeiElement *b);
        virtual ~TranspositionMixIn();
        /** \brief records the amount of diatonic pitch shift, e.g.
         * 
         *  C to C♯ = 0, C to D♭ = 1. Transposition requires both trans.diat and
         *  trans.semi attributes in order to distinguish the difference, for example,
         *  between a transposition from C to C♯ and one from C to D♭.
         */
        MeiAttribute* getTransDiat();
        void setTransDiat(std::string _transdiat);
        bool hasTransDiat();
        void removeTransDiat();
        /** \brief contains the amount of pitch shift in semitones, C to C♯ = 1, C to D♭ = 1.
         * 
         *  Transposition requires both trans.diat and trans.semi attributes in order to
         *  distinguish the difference, for example, between a transposition from C to C♯
         *  and one from C to D♭.
         */
        MeiAttribute* getTransSemi();
        void setTransSemi(std::string _transsemi);
        bool hasTransSemi();
        void removeTransSemi();

    private:
        MeiElement *b;
};

class TupletpresentMixIn {
    public:
        explicit TupletpresentMixIn(MeiElement *b);
        virtual ~TupletpresentMixIn();
        /** \brief indicates that this feature participates in a tuplet.
         * 
         *  If visual information about the tuplet needs to be recorded, then a <tuplet>
         *  element should be employed.
         */
        MeiAttribute* getTuplet();
        void setTuplet(std::string _tuplet);
        bool hasTuplet();
        void removeTuplet();

    private:
        MeiElement *b;
};

class TypedMixIn {
    public:
        explicit TypedMixIn(MeiElement *b);
        virtual ~TypedMixIn();
        /** \brief characterizes the element in some sense, using any convenient classification
         *  scheme or typology.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief provide any sub-classification for the element, additional to that given by its
         *  type attribute.
         */
        MeiAttribute* getSubtype();
        void setSubtype(std::string _subtype);
        bool hasSubtype();
        void removeSubtype();

    private:
        MeiElement *b;
};

class TypographyMixIn {
    public:
        explicit TypographyMixIn(MeiElement *b);
        virtual ~TypographyMixIn();
        /** \brief contains the name of a font-family.
         */
        MeiAttribute* getFontfam();
        void setFontfam(std::string _fontfam);
        bool hasFontfam();
        void removeFontfam();
        /** \brief holds the name of a font.
         */
        MeiAttribute* getFontname();
        void setFontname(std::string _fontname);
        bool hasFontname();
        void removeFontname();
        /** \brief indicates the size of a font in printers' points, i.e., 1/72nd of an inch.
         */
        MeiAttribute* getFontsize();
        void setFontsize(std::string _fontsize);
        bool hasFontsize();
        void removeFontsize();
        /** \brief records the style of a font, i.e, italic, oblique, or normal.
         */
        MeiAttribute* getFontstyle();
        void setFontstyle(std::string _fontstyle);
        bool hasFontstyle();
        void removeFontstyle();
        /** \brief used to indicate bold type.
         */
        MeiAttribute* getFontweight();
        void setFontweight(std::string _fontweight);
        bool hasFontweight();
        void removeFontweight();

    private:
        MeiElement *b;
};

class VisibilityMixIn {
    public:
        explicit VisibilityMixIn(MeiElement *b);
        virtual ~VisibilityMixIn();
        /** \brief indicates if a feature should be rendered when the notation is presented
         *  graphically or sounded when it is presented in an aural form.
         */
        MeiAttribute* getVisible();
        void setVisible(std::string _visible);
        bool hasVisible();
        void removeVisible();

    private:
        MeiElement *b;
};

class VisualoffsetHoMixIn {
    public:
        explicit VisualoffsetHoMixIn(MeiElement *b);
        virtual ~VisualoffsetHoMixIn();
        /** \brief records a horizontal adjustment to a feature's programmatically-determined
         *  location in terms of staff interline distance; that is, in units of 1/2 the
         *  distance between adjacent staff lines.
         */
        MeiAttribute* getHo();
        void setHo(std::string _ho);
        bool hasHo();
        void removeHo();

    private:
        MeiElement *b;
};

class VisualoffsetToMixIn {
    public:
        explicit VisualoffsetToMixIn(MeiElement *b);
        virtual ~VisualoffsetToMixIn();
        /** \brief records a timestamp adjustment of a feature's programmatically-determined
         *  location in terms of musical time; that is, beats.
         */
        MeiAttribute* getTo();
        void setTo(std::string _to);
        bool hasTo();
        void removeTo();

    private:
        MeiElement *b;
};

class VisualoffsetVoMixIn {
    public:
        explicit VisualoffsetVoMixIn(MeiElement *b);
        virtual ~VisualoffsetVoMixIn();
        /** \brief records the vertical adjustment of a feature's programmatically-determined
         *  location in terms of staff interline distance; that is, in units of 1/2 the
         *  distance between adjacent staff lines.
         */
        MeiAttribute* getVo();
        void setVo(std::string _vo);
        bool hasVo();
        void removeVo();

    private:
        MeiElement *b;
};

class Visualoffset2HoMixIn {
    public:
        explicit Visualoffset2HoMixIn(MeiElement *b);
        virtual ~Visualoffset2HoMixIn();
        /** \brief records the horizontal adjustment of a feature's programmatically-determined
         *  start point.
         */
        MeiAttribute* getStartho();
        void setStartho(std::string _startho);
        bool hasStartho();
        void removeStartho();
        /** \brief records the horizontal adjustment of a feature's programmatically-determined end
         *  point.
         */
        MeiAttribute* getEndho();
        void setEndho(std::string _endho);
        bool hasEndho();
        void removeEndho();

    private:
        MeiElement *b;
};

class Visualoffset2ToMixIn {
    public:
        explicit Visualoffset2ToMixIn(MeiElement *b);
        virtual ~Visualoffset2ToMixIn();
        /** \brief records a timestamp adjustment of a feature's programmatically-determined start
         *  point.
         */
        MeiAttribute* getStartto();
        void setStartto(std::string _startto);
        bool hasStartto();
        void removeStartto();
        /** \brief records a timestamp adjustment of a feature's programmatically-determined end
         *  point.
         */
        MeiAttribute* getEndto();
        void setEndto(std::string _endto);
        bool hasEndto();
        void removeEndto();

    private:
        MeiElement *b;
};

class Visualoffset2VoMixIn {
    public:
        explicit Visualoffset2VoMixIn(MeiElement *b);
        virtual ~Visualoffset2VoMixIn();
        /** \brief records a vertical adjustment of a feature's programmatically-determined start
         *  point.
         */
        MeiAttribute* getStartvo();
        void setStartvo(std::string _startvo);
        bool hasStartvo();
        void removeStartvo();
        /** \brief records a vertical adjustment of a feature's programmatically-determined end
         *  point.
         */
        MeiAttribute* getEndvo();
        void setEndvo(std::string _endvo);
        bool hasEndvo();
        void removeEndvo();

    private:
        MeiElement *b;
};

class WidthMixIn {
    public:
        explicit WidthMixIn(MeiElement *b);
        virtual ~WidthMixIn();
        /** \brief measurement of the horizontal dimension of an entity.
         * 
         *  This value can only be interpreted meaningfully in combination with the units
         *  attribute. The width attribute may be used to capture measure width data for
         *  interchange with music printing systems that utilize this information for
         *  printing. On <barLine> the width attribute captures the width of the preceding
         *  measure.
         */
        MeiAttribute* getWidth();
        void setWidth(std::string _width);
        bool hasWidth();
        void removeWidth();

    private:
        MeiElement *b;
};

class XyMixIn {
    public:
        explicit XyMixIn(MeiElement *b);
        virtual ~XyMixIn();
        /** \brief encodes an x coordinate for a feature in an output coordinate system.
         * 
         *  When it is necessary to record the placement of a feature in a facsimile image,
         *  use the facs attribute.
         */
        MeiAttribute* getX();
        void setX(std::string _x);
        bool hasX();
        void removeX();
        /** \brief encodes an y coordinate for a feature in an output coordinate system.
         * 
         *  When it is necessary to record the placement of a feature in a facsimile image,
         *  use the facs attribute.
         */
        MeiAttribute* getY();
        void setY(std::string _y);
        bool hasY();
        void removeY();

    private:
        MeiElement *b;
};

class Xy2MixIn {
    public:
        explicit Xy2MixIn(MeiElement *b);
        virtual ~Xy2MixIn();
        /** \brief encodes the optional 2nd x coordinate.
         */
        MeiAttribute* getX2();
        void setX2(std::string _x2);
        bool hasX2();
        void removeX2();
        /** \brief encodes the optional 2nd y coordinate.
         */
        MeiAttribute* getY2();
        void setY2(std::string _y2);
        bool hasY2();
        void removeY2();

    private:
        MeiElement *b;
};
}
#endif  // SHAREDMIXIN_H_
