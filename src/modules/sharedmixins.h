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

#ifndef SHAREDMIXIN_H_
#define SHAREDMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AccidLogMixIn {
    public:
        explicit AccidLogMixIn(MeiElement *b);
        virtual ~AccidLogMixIn();
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

class AccidentalMixIn {
    public:
        explicit AccidentalMixIn(MeiElement *b);
        virtual ~AccidentalMixIn();
        /** \brief Captures a written accidental.
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
        /** \brief Records the performed pitch inflection.
         */
        MeiAttribute* getAccidGes();
        void setAccidGes(std::string _accidges);
        bool hasAccidGes();
        void removeAccidGes();

/* include <accid.gesmixin> */

    private:
        MeiElement *b;
};

class ArticulationMixIn {
    public:
        explicit ArticulationMixIn(MeiElement *b);
        virtual ~ArticulationMixIn();
        /** \brief Encodes the written articulation(s).
         * 
         *  Articulations are normally encoded in order from the note head outward; that is,
         *  away from the stem. See additional notes at att.vis.note. Only articulations
         *  should be encoded in the artic attribute; for example, fingerings should be
         *  encoded using the <fingering> element.
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
        /** \brief Records performed articulation that differs from the written value.
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
        /** \brief Records the number of augmentation dots required by a dotted duration.
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
        /** \brief A name or label associated with the controlled vocabulary from which the value
         *  is taken.
         */
        MeiAttribute* getAuthority();
        void setAuthority(std::string _authority);
        bool hasAuthority();
        void removeAuthority();
        /** \brief The web-accessible location of the controlled vocabulary from which the value is
         *  taken.
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

class BarplacementMixIn {
    public:
        explicit BarplacementMixIn(MeiElement *b);
        virtual ~BarplacementMixIn();
        /** \brief Records the location of a bar line.
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

/* include <taktplacemixin> */

    private:
        MeiElement *b;
};

class BeamingVisMixIn {
    public:
        explicit BeamingVisMixIn(MeiElement *b);
        virtual ~BeamingVisMixIn();
        /** \brief Color of beams, including those associated with tuplets.
         */
        MeiAttribute* getBeamColor();
        void setBeamColor(std::string _beamcolor);
        bool hasBeamColor();
        void removeBeamColor();
        /** \brief Encodes whether a beam is "feathered" and in which direction.
         */
        MeiAttribute* getBeamRend();
        void setBeamRend(std::string _beamrend);
        bool hasBeamRend();
        void removeBeamRend();
        /** \brief Captures beam slope.
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
        /** \brief Contains a reference to a field or element in another descriptive encoding
         *  system to which this MEI element is comparable.
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
        /** \brief Indicates the calendar system to which a date belongs, for example, Gregorian,
         *  Julian, Roman, Mosaic, Revolutionary, Islamic, etc.
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
        /** \brief a value that represents or identifies the element content.
         * 
         *  May serve as a primary key in a web-accessible database identified by the
         *  authURI attribute.
         */
        MeiAttribute* getCodedval();
        void setCodedval(std::string _codedval);
        bool hasCodedval();
        void removeCodedval();

/* include <codedvalmixin> */

    private:
        MeiElement *b;
};

class ChordVisMixIn {
    public:
        explicit ChordVisMixIn(MeiElement *b);
        virtual ~ChordVisMixIn();
        /** \brief Indicates a single, alternative note head should be displayed instead of
         *  individual note heads.
         * 
         *  The highest and lowest notes of the chord usually indicate the upper and lower
         *  boundaries of the cluster note head.
         */
        MeiAttribute* getCluster();
        void setCluster(std::string _cluster);
        bool hasCluster();
        void removeCluster();

/* include <clustermixin> */

    private:
        MeiElement *b;
};

class ClasscodeidentMixIn {
    public:
        explicit ClasscodeidentMixIn(MeiElement *b);
        virtual ~ClasscodeidentMixIn();
        /** \brief Contains a reference to the controlled vocabulary from which the term is drawn.
         * 
         *  The value must match the value of an ID attribute on a classCode element given
         *  elsewhere in the document.
         */
        MeiAttribute* getClasscode();
        void setClasscode(std::string _classcode);
        bool hasClasscode();
        void removeClasscode();

/* include <classcodemixin> */

    private:
        MeiElement *b;
};

class ClefLogMixIn {
    public:
        explicit ClefLogMixIn(MeiElement *b);
        virtual ~ClefLogMixIn();
        /** \brief Records the function of the clef.
         * 
         *  A "cautionary" clef does not change the following pitches.
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
        /** \brief Encodes a value for the clef symbol.
         */
        MeiAttribute* getClefShape();
        void setClefShape(std::string _clefshape);
        bool hasClefShape();
        void removeClefShape();
        /** \brief Contains a default value for the position of the clef.
         * 
         *  The value must be in the range between 1 and the number of lines on the staff.
         *  The numbering of lines starts with the lowest line of the staff.
         */
        MeiAttribute* getClefLine();
        void setClefLine(std::string _clefline);
        bool hasClefLine();
        void removeClefLine();
        /** \brief Records the amount of octave displacement to be applied to the clef.
         */
        MeiAttribute* getClefDis();
        void setClefDis(std::string _clefdis);
        bool hasClefDis();
        void removeClefDis();
        /** \brief Records the direction of octave displacement to be applied to the clef.
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
        /** \brief Describes the color of the clef.
         */
        MeiAttribute* getClefColor();
        void setClefColor(std::string _clefcolor);
        bool hasClefColor();
        void removeClefColor();
        /** \brief Determines whether the clef is to be displayed.
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

class ColorMixIn {
    public:
        explicit ColorMixIn(MeiElement *b);
        virtual ~ColorMixIn();
        /** \brief Used to indicate visual appearance.
         * 
         *  Do not confuse this with the musical term 'color' as used in pre-CMN notation.
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
        /** \brief Indicates this feature is 'colored'; that is, it is a participant in a change in
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

/* include <coloredmixin> */

    private:
        MeiElement *b;
};

class CommonMixIn {
    public:
        explicit CommonMixIn(MeiElement *b);
        virtual ~CommonMixIn();
        /** \brief Provides a number-like designation for an element.
         */
        MeiAttribute* getN();
        void setN(std::string _n);
        bool hasN();
        void removeN();

/* include <nmixin> */

    private:
        MeiElement *b;
};

class CommonPartMixIn {
    public:
        explicit CommonPartMixIn(MeiElement *b);
        virtual ~CommonPartMixIn();
        /** \brief Provides a name or label for an element.
         * 
         *  The value may be any string.
         */
        MeiAttribute* getLabel();
        void setLabel(std::string _label);
        bool hasLabel();
        void removeLabel();
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
        /** \brief Indicates the upper-left corner x coordinate.
         */
        MeiAttribute* getUlx();
        void setUlx(std::string _ulx);
        bool hasUlx();
        void removeUlx();
        /** \brief Indicates the upper-left corner y coordinate.
         */
        MeiAttribute* getUly();
        void setUly(std::string _uly);
        bool hasUly();
        void removeUly();
        /** \brief Indicates the lower-right corner x coordinate.
         */
        MeiAttribute* getLrx();
        void setLrx(std::string _lrx);
        bool hasLrx();
        void removeLrx();
        /** \brief Indicates the lower-left corner x coordinate.
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
        /** \brief Records the placement of Bezier control points as a series of pairs of space-
         *  separated values; e.g., 19 45 -32 118.
         */
        MeiAttribute* getBezier();
        void setBezier(std::string _bezier);
        bool hasBezier();
        void removeBezier();
        /** \brief Describes a curve as one or more pairs of values with respect to an imaginary
         *  line connecting the starting and ending points of the curve.
         * 
         *  The first value captures a distance to the left (positive value) or right
         *  (negative value) of the line, expressed in virtual units. The second value of
         *  each pair represents a point along the line, expressed as a percentage of the
         *  line's length. N.B. An MEI virtual unit (VU) is half the distance between
         *  adjacent staff lines.
         */
        MeiAttribute* getBulge();
        void setBulge(std::string _bulge);
        bool hasBulge();
        void removeBulge();
        /** \brief Describes a curve with a generic term indicating the direction of curvature.
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
        /** \brief Describes the line style of a curve.
         */
        MeiAttribute* getLform();
        void setLform(std::string _lform);
        bool hasLform();
        void removeLform();
        /** \brief Width of a curved line.
         */
        MeiAttribute* getLwidth();
        void setLwidth(std::string _lwidth);
        bool hasLwidth();
        void removeLwidth();

/* include <lwidthmixin> */

    private:
        MeiElement *b;
};

class CustosLogMixIn {
    public:
        explicit CustosLogMixIn(MeiElement *b);
        virtual ~CustosLogMixIn();
        /** \brief Encodes the target note when its pitch differs from the pitch at which the
         *  custos appears.
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
        /** \brief Contains the end point of a date range in standard ISO form.
         */
        MeiAttribute* getEnddate();
        void setEnddate(std::string _enddate);
        bool hasEnddate();
        void removeEnddate();
        /** \brief Provides the value of a textual date in standard ISO form.
         */
        MeiAttribute* getIsodate();
        void setIsodate(std::string _isodate);
        bool hasIsodate();
        void removeIsodate();
        /** \brief Contains an upper boundary for an uncertain date in standard ISO form.
         */
        MeiAttribute* getNotafter();
        void setNotafter(std::string _notafter);
        bool hasNotafter();
        void removeNotafter();
        /** \brief Contains a lower boundary, in standard ISO form, for an uncertain date.
         */
        MeiAttribute* getNotbefore();
        void setNotbefore(std::string _notbefore);
        bool hasNotbefore();
        void removeNotbefore();
        /** \brief Contains the starting point of a date range in standard ISO form.
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
        /** \brief Used to link metadata elements to one or more data-containing elements.
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
        /** \brief Identifies one or more metadata elements within the header, which are understood
         *  to apply to the element bearing this attribute and its content.
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
        /** \brief Records the default distance from the staff for dynamic marks.
         */
        MeiAttribute* getDynamDist();
        void setDynamDist(std::string _dynamdist);
        bool hasDynamDist();
        void removeDynamDist();
        /** \brief Records the default distance from the staff of harmonic indications, such as
         *  guitar chord grids or functional labels.
         */
        MeiAttribute* getHarmDist();
        void setHarmDist(std::string _harmdist);
        bool hasHarmDist();
        void removeHarmDist();
        /** \brief Determines how far from the staff to render text elements.
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

class DurationAdditiveMixIn {
    public:
        explicit DurationAdditiveMixIn(MeiElement *b);
        virtual ~DurationAdditiveMixIn();
        /** \brief Records duration using optionally dotted, relative durational values provided by
         *  the data.DURATION datatype.
         * 
         *  When the duration is "irrational", as is sometimes the case with tuplets,
         *  multiple space-separated values that add up to the total duration may be used.
         *  When dotted values are present, the dots attribute must be ignored.
         */
        MeiAttribute* getDur();
        void setDur(std::string _dur);
        bool hasDur();
        void removeDur();

/* include <durmixin> */

    private:
        MeiElement *b;
};

class DurationDefaultMixIn {
    public:
        explicit DurationDefaultMixIn(MeiElement *b);
        virtual ~DurationDefaultMixIn();
        /** \brief Contains a default duration in those situations when the first note, rest,
         *  chord, etc.
         * 
         *  in a measure does not have a duration specified.
         */
        MeiAttribute* getDurDefault();
        void setDurDefault(std::string _durdefault);
        bool hasDurDefault();
        void removeDurDefault();
        /** \brief Along with numbase.default, describes the default duration as a ratio.
         * 
         *  num.default is the first value in the ratio.
         */
        MeiAttribute* getNumDefault();
        void setNumDefault(std::string _numdefault);
        bool hasNumDefault();
        void removeNumDefault();
        /** \brief Along with num.default, describes the default duration as a ratio.
         * 
         *  numbase.default is the second value in the ratio.
         */
        MeiAttribute* getNumbaseDefault();
        void setNumbaseDefault(std::string _numbasedefault);
        bool hasNumbaseDefault();
        void removeNumbaseDefault();

/* include <numbase.defaultmixin> */

    private:
        MeiElement *b;
};

class DurationMusicalMixIn {
    public:
        explicit DurationMusicalMixIn(MeiElement *b);
        virtual ~DurationMusicalMixIn();
        /** \brief Records duration using optionally dotted, relative durational values provided by
         *  the data.DURATION datatype.
         * 
         *  When the duration is "irrational", as is sometimes the case with tuplets,
         *  multiple space-separated values that add up to the total duration may be used.
         *  When dotted values are present, the dots attribute must be ignored.
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
        /** \brief Records performed duration information that differs from the written duration.
         * 
         *  Its value may be expressed in several forms; that is, ppq (MIDI clicks and
         *  MusicXML 'divisions'), Humdrum **recip values, beats, seconds, or mensural
         *  duration values.
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
        /** \brief Along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();
        /** \brief Along with num, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNumbase();
        void setNumbase(std::string _numbase);
        bool hasNumbase();
        void removeNumbase();

/* include <numbasemixin> */

    private:
        MeiElement *b;
};

class EnclosingcharsMixIn {
    public:
        explicit EnclosingcharsMixIn(MeiElement *b);
        virtual ~EnclosingcharsMixIn();
        /** \brief Records the characters often used to mark accidentals, articulations, and
         *  sometimes notes as having a cautionary or editorial function.
         * 
         *  For an example of cautionary accidentals enclosed in parentheses, see Read, p.
         *  131, ex. 9-14.
         */
        MeiAttribute* getEnclose();
        void setEnclose(std::string _enclose);
        bool hasEnclose();
        void removeEnclose();

/* include <enclosemixin> */

    private:
        MeiElement *b;
};

class EndingsMixIn {
    public:
        explicit EndingsMixIn(MeiElement *b);
        virtual ~EndingsMixIn();
        /** \brief Describes where ending marks should be displayed.
         */
        MeiAttribute* getEndingRend();
        void setEndingRend(std::string _endingrend);
        bool hasEndingRend();
        void removeEndingRend();

/* include <ending.rendmixin> */

    private:
        MeiElement *b;
};

class ExtenderMixIn {
    public:
        explicit ExtenderMixIn(MeiElement *b);
        virtual ~ExtenderMixIn();
        /** \brief Indicates the presence of an extension symbol, typically a line.
         */
        MeiAttribute* getExtender();
        void setExtender(std::string _extender);
        bool hasExtender();
        void removeExtender();

/* include <extendermixin> */

    private:
        MeiElement *b;
};

class FermatapresentMixIn {
    public:
        explicit FermatapresentMixIn(MeiElement *b);
        virtual ~FermatapresentMixIn();
        /** \brief Indicates the attachment of a fermata to this element.
         * 
         *  If visual information about the fermata needs to be recorded, then a <fermata>
         *  element should be employed instead.
         */
        MeiAttribute* getFermata();
        void setFermata(std::string _fermata);
        bool hasFermata();
        void removeFermata();

/* include <fermatamixin> */

    private:
        MeiElement *b;
};

class FilingMixIn {
    public:
        explicit FilingMixIn(MeiElement *b);
        virtual ~FilingMixIn();
        /** \brief Holds the number of initial characters (such as those constituing an article or
         *  preposition) that should not be used for sorting a title or name.
         */
        MeiAttribute* getNonfiling();
        void setNonfiling(std::string _nonfiling);
        bool hasNonfiling();
        void removeNonfiling();

/* include <nonfilingmixin> */

    private:
        MeiElement *b;
};

class GrpSymLogMixIn {
    public:
        explicit GrpSymLogMixIn(MeiElement *b);
        virtual ~GrpSymLogMixIn();
        /** \brief Indicates the nesting level of staff grouping symbols.
         */
        MeiAttribute* getLevel();
        void setLevel(std::string _level);
        bool hasLevel();
        void removeLevel();

/* include <levelmixin> */

    private:
        MeiElement *b;
};

class HandidentMixIn {
    public:
        explicit HandidentMixIn(MeiElement *b);
        virtual ~HandidentMixIn();
        /** \brief Signifies the hand responsible for an action.
         * 
         *  The value must be the ID of a <hand> element declared in the header.
         */
        MeiAttribute* getHand();
        void setHand(std::string _hand);
        bool hasHand();
        void removeHand();

/* include <handmixin> */

    private:
        MeiElement *b;
};

class HeightMixIn {
    public:
        explicit HeightMixIn(MeiElement *b);
        virtual ~HeightMixIn();
        /** \brief Measurement of the vertical dimension of an entity.
         */
        MeiAttribute* getHeight();
        void setHeight(std::string _height);
        bool hasHeight();
        void removeHeight();

/* include <heightmixin> */

    private:
        MeiElement *b;
};

class HorizontalalignMixIn {
    public:
        explicit HorizontalalignMixIn(MeiElement *b);
        virtual ~HorizontalalignMixIn();
        /** \brief Records horizontal alignment.
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
        /** \brief Provides a way of pointing to a MIDI instrument definition.
         * 
         *  It must contain the ID of an <instrDef> element elsewhere in the document.
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
        /** \brief Specifies the applicable MIME (multimedia internet mail extension) type.
         * 
         *  The value should be a valid MIME media type defined by the Internet Engineering
         *  Task Force in RFC 2046.
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
        /** \brief Used for linking visually separate entities that form a single logical entity,
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

/* include <joinmixin> */

    private:
        MeiElement *b;
};

class KeySigLogMixIn {
    public:
        explicit KeySigLogMixIn(MeiElement *b);
        virtual ~KeySigLogMixIn();
        /** \brief Indicates where the key lies in the circle of fifths.
         */
        MeiAttribute* getSig();
        void setSig(std::string _sig);
        bool hasSig();
        void removeSig();
        /** \brief Mixed key signatures, e.g.
         * 
         *  those consisting of a mixture of flats and sharps (Read, p. 143, ex. 9-39), and
         *  key signatures with unorthodox placement of the accidentals (Read, p. 141) must
         *  be indicated by setting the key.sig attribute to 'mixed' and providing explicit
         *  key signature information in the key.sig.mixed attribute or in the <keySig>
         *  element. It is intended that key.sig.mixed contain a series of tokens with each
         *  token containing pitch name, accidental, and octave, such as 'a4 c5s e5f' that
         *  indicate what key accidentals should be rendered and where they should be
         *  placed.
         */
        MeiAttribute* getSigMixed();
        void setSigMixed(std::string _sigmixed);
        bool hasSigMixed();
        void removeSigMixed();
        /** \brief Indicates major, minor, or other tonality.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <modemixin> */

    private:
        MeiElement *b;
};

class KeySigVisMixIn {
    public:
        explicit KeySigVisMixIn(MeiElement *b);
        virtual ~KeySigVisMixIn();
        /** \brief Determines whether cautionary accidentals should be displayed at a key change.
         */
        MeiAttribute* getSigShowchange();
        void setSigShowchange(std::string _sigshowchange);
        bool hasSigShowchange();
        void removeSigShowchange();

/* include <sig.showchangemixin> */

    private:
        MeiElement *b;
};

class KeySigDefaultLogMixIn {
    public:
        explicit KeySigDefaultLogMixIn(MeiElement *b);
        virtual ~KeySigDefaultLogMixIn();
        /** \brief Contains an accidental for the tonic key, if one is required, e.g., if key.pname
         *  equals 'c' and key.accid equals 's', then a tonic of C# is indicated.
         */
        MeiAttribute* getKeyAccid();
        void setKeyAccid(std::string _keyaccid);
        bool hasKeyAccid();
        void removeKeyAccid();
        /** \brief Indicates major, minor, or other tonality.
         */
        MeiAttribute* getKeyMode();
        void setKeyMode(std::string _keymode);
        bool hasKeyMode();
        void removeKeyMode();
        /** \brief Holds the pitch name of the tonic key, e.g.
         * 
         *  'c' for the key of C.
         */
        MeiAttribute* getKeyPname();
        void setKeyPname(std::string _keypname);
        bool hasKeyPname();
        void removeKeyPname();
        /** \brief Indicates where the key lies in the circle of fifths.
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
         *  token containing pitch name, accidental, and octave, such as 'a4 c5s e5f' that
         *  indicate what key accidentals should be rendered and where they should be
         *  placed.
         */
        MeiAttribute* getKeySigMixed();
        void setKeySigMixed(std::string _keysigmixed);
        bool hasKeySigMixed();
        void removeKeySigMixed();

/* include <key.sig.mixedmixin> */

    private:
        MeiElement *b;
};

class KeySigDefaultVisMixIn {
    public:
        explicit KeySigDefaultVisMixIn(MeiElement *b);
        virtual ~KeySigDefaultVisMixIn();
        /** \brief Indicates whether the key signature should be displayed.
         */
        MeiAttribute* getKeySigShow();
        void setKeySigShow(std::string _keysigshow);
        bool hasKeySigShow();
        void removeKeySigShow();
        /** \brief Determines whether cautionary accidentals should be displayed at a key change.
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
        /** \brief Provides a label for a group of staves on pages after the first page.
         * 
         *  Usually, this label takes an abbreviated form.
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
        /** \brief Specifies the transliteration technique used.
         */
        MeiAttribute* getTranslit();
        void setTranslit(std::string _translit);
        bool hasTranslit();
        void removeTranslit();

/* include <translitmixin> */

    private:
        MeiElement *b;
};

class LayerLogMixIn {
    public:
        explicit LayerLogMixIn(MeiElement *b);
        virtual ~LayerLogMixIn();
        /** \brief Provides a mechanism for linking the layer to a layerDef element.
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
        /** \brief Identifies the layer to which a feature applies.
         */
        MeiAttribute* getLayer();
        void setLayer(std::string _layer);
        bool hasLayer();
        void removeLayer();

/* include <layermixin> */

    private:
        MeiElement *b;
};

class LineVisMixIn {
    public:
        explicit LineVisMixIn(MeiElement *b);
        virtual ~LineVisMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Width of the line.
         */
        MeiAttribute* getWidth();
        void setWidth(std::string _width);
        bool hasWidth();
        void removeWidth();
        /** \brief Symbol rendered at end of line.
         */
        MeiAttribute* getEndsym();
        void setEndsym(std::string _endsym);
        bool hasEndsym();
        void removeEndsym();
        /** \brief Holds the relative size of the line-end symbol.
         */
        MeiAttribute* getEndsymsize();
        void setEndsymsize(std::string _endsymsize);
        bool hasEndsymsize();
        void removeEndsymsize();
        /** \brief Symbol rendered at start of line.
         */
        MeiAttribute* getStartsym();
        void setStartsym(std::string _startsym);
        bool hasStartsym();
        void removeStartsym();
        /** \brief Holds the relative size of the line-start symbol.
         */
        MeiAttribute* getStartsymsize();
        void setStartsymsize(std::string _startsymsize);
        bool hasStartsymsize();
        void removeStartsymsize();

/* include <startsymsizemixin> */

    private:
        MeiElement *b;
};

class LinelocMixIn {
    public:
        explicit LinelocMixIn(MeiElement *b);
        virtual ~LinelocMixIn();
        /** \brief Indicates the line upon which a feature stands.
         * 
         *  The value must be in the range between 1 and the number of lines on the staff.
         *  The numbering of lines starts with the lowest line of the staff.
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
        /** \brief Symbol rendered at end of line.
         */
        MeiAttribute* getLendsym();
        void setLendsym(std::string _lendsym);
        bool hasLendsym();
        void removeLendsym();
        /** \brief Holds the relative size of the line-end symbol.
         */
        MeiAttribute* getLendsymsize();
        void setLendsymsize(std::string _lendsymsize);
        bool hasLendsymsize();
        void removeLendsymsize();
        /** \brief Symbol rendered at start of line.
         */
        MeiAttribute* getLstartsym();
        void setLstartsym(std::string _lstartsym);
        bool hasLstartsym();
        void removeLstartsym();
        /** \brief Holds the relative size of the line-start symbol.
         */
        MeiAttribute* getLstartsymsize();
        void setLstartsymsize(std::string _lstartsymsize);
        bool hasLstartsymsize();
        void removeLstartsymsize();

/* include <lstartsymsizemixin> */

    private:
        MeiElement *b;
};

class LinerendBaseMixIn {
    public:
        explicit LinerendBaseMixIn(MeiElement *b);
        virtual ~LinerendBaseMixIn();
        /** \brief Describes the line style of a curve.
         */
        MeiAttribute* getLform();
        void setLform(std::string _lform);
        bool hasLform();
        void removeLform();
        /** \brief Width of a curved line.
         */
        MeiAttribute* getLwidth();
        void setLwidth(std::string _lwidth);
        bool hasLwidth();
        void removeLwidth();

/* include <lwidthmixin> */

    private:
        MeiElement *b;
};

class LyricstyleMixIn {
    public:
        explicit LyricstyleMixIn(MeiElement *b);
        virtual ~LyricstyleMixIn();
        /** \brief Describes the alignment of lyric syllables associated with a note or chord.
         */
        MeiAttribute* getLyricAlign();
        void setLyricAlign(std::string _lyricalign);
        bool hasLyricAlign();
        void removeLyricAlign();
        /** \brief Sets the font family default value for lyrics.
         */
        MeiAttribute* getLyricFam();
        void setLyricFam(std::string _lyricfam);
        bool hasLyricFam();
        void removeLyricFam();
        /** \brief Sets the font name default value for lyrics.
         */
        MeiAttribute* getLyricName();
        void setLyricName(std::string _lyricname);
        bool hasLyricName();
        void removeLyricName();
        /** \brief Sets the default font size value for lyrics.
         */
        MeiAttribute* getLyricSize();
        void setLyricSize(std::string _lyricsize);
        bool hasLyricSize();
        void removeLyricSize();
        /** \brief Sets the default font style value for lyrics.
         */
        MeiAttribute* getLyricStyle();
        void setLyricStyle(std::string _lyricstyle);
        bool hasLyricStyle();
        void removeLyricStyle();
        /** \brief Sets the default font weight value for lyrics.
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
        /** \brief Indicates the visual rendition of the left bar line.
         * 
         *  It is present here only for facilitation of translation from legacy encodings
         *  which use it. Usually, it can be safely ignored.
         */
        MeiAttribute* getLeft();
        void setLeft(std::string _left);
        bool hasLeft();
        void removeLeft();
        /** \brief Indicates the function of the right bar line and is structurally important.
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
        /** \brief Indicates the unit of measurement.
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();

/* include <unitmixin> */

    private:
        MeiElement *b;
};

class MeasurenumbersMixIn {
    public:
        explicit MeasurenumbersMixIn(MeiElement *b);
        virtual ~MeasurenumbersMixIn();
        /** \brief Indicates whether measure numbers should be displayed.
         */
        MeiAttribute* getMnumVisible();
        void setMnumVisible(std::string _mnumvisible);
        bool hasMnumVisible();
        void removeMnumVisible();

/* include <mnum.visiblemixin> */

    private:
        MeiElement *b;
};

class MediaboundsMixIn {
    public:
        explicit MediaboundsMixIn(MeiElement *b);
        virtual ~MediaboundsMixIn();
        /** \brief Specifies a point where the relevant content begins.
         * 
         *  A numerical value must be less and a time value must be earlier than that given
         *  by the end attribute.
         */
        MeiAttribute* getBegin();
        void setBegin(std::string _begin);
        bool hasBegin();
        void removeBegin();
        /** \brief Specifies a point where the relevant content ends.
         * 
         *  If not specified, the end of the content is assumed to be the end point. A
         *  numerical value must be greater and a time value must be later than that given
         *  by the begin attribute.
         */
        MeiAttribute* getEnd();
        void setEnd(std::string _end);
        bool hasEnd();
        void removeEnd();
        /** \brief Type of values used in the begin/end attributes.
         * 
         *  The begin and end attributes can only be interpreted meaningfully in conjunction
         *  with this attribute.
         */
        MeiAttribute* getBetype();
        void setBetype(std::string _betype);
        bool hasBetype();
        void removeBetype();

/* include <betypemixin> */

    private:
        MeiElement *b;
};

class MediumMixIn {
    public:
        explicit MediumMixIn(MeiElement *b);
        virtual ~MediumMixIn();
        /** \brief Describes the writing medium.
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
        /** \brief Specifies a generic MEI version label.
         */
        MeiAttribute* getMeiversion();
        void setMeiversion(std::string _meiversion);
        bool hasMeiversion();
        void removeMeiversion();

/* include <meiversionmixin> */

    private:
        MeiElement *b;
};

class MensurLogMixIn {
    public:
        explicit MensurLogMixIn(MeiElement *b);
        virtual ~MensurLogMixIn();
        /** \brief Specifies whether a dot is to be added to the base symbol.
         */
        MeiAttribute* getDot();
        void setDot(std::string _dot);
        bool hasDot();
        void removeDot();
        /** \brief The base symbol in the mensuration sign/time signature of mensural notation.
         */
        MeiAttribute* getSign();
        void setSign(std::string _sign);
        bool hasSign();
        void removeSign();

/* include <signmixin> */

    private:
        MeiElement *b;
};

class MeterSigLogMixIn {
    public:
        explicit MeterSigLogMixIn(MeiElement *b);
        virtual ~MeterSigLogMixIn();
        /** \brief Captures the number of beats in a measure, that is, the top number of the meter
         *  signature.
         * 
         *  It must contain a decimal number or an additive expression that evaluates to a
         *  decimal number, such as 2+3.
         */
        MeiAttribute* getCount();
        void setCount(std::string _count);
        bool hasCount();
        void removeCount();
        /** \brief Indicates the use of a meter symbol instead of a numeric meter signature, that
         *  is, 'C' for common time or 'C' with a slash for cut time.
         */
        MeiAttribute* getSym();
        void setSym(std::string _sym);
        bool hasSym();
        void removeSym();
        /** \brief Indicates the unit of measurement.
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();

/* include <unitmixin> */

    private:
        MeiElement *b;
};

class MeterSigVisMixIn {
    public:
        explicit MeterSigVisMixIn(MeiElement *b);
        virtual ~MeterSigVisMixIn();
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

class MeterSigDefaultLogMixIn {
    public:
        explicit MeterSigDefaultLogMixIn(MeiElement *b);
        virtual ~MeterSigDefaultLogMixIn();
        /** \brief Captures the number of beats in a measure, that is, the top number of the meter
         *  signature.
         * 
         *  It must contain a decimal number or an additive expression that evaluates to a
         *  decimal number, such as 2+3.
         */
        MeiAttribute* getMeterCount();
        void setMeterCount(std::string _metercount);
        bool hasMeterCount();
        void removeMeterCount();
        /** \brief Contains the number indicating the beat unit, that is, the bottom number of the
         *  meter signature.
         */
        MeiAttribute* getMeterUnit();
        void setMeterUnit(std::string _meterunit);
        bool hasMeterUnit();
        void removeMeterUnit();

/* include <meter.unitmixin> */

    private:
        MeiElement *b;
};

class MeterSigDefaultVisMixIn {
    public:
        explicit MeterSigDefaultVisMixIn(MeiElement *b);
        virtual ~MeterSigDefaultVisMixIn();
        /** \brief Contains an indication of how the meter signature should be rendered.
         */
        MeiAttribute* getMeterRend();
        void setMeterRend(std::string _meterrend);
        bool hasMeterRend();
        void removeMeterRend();
        /** \brief Determines whether a new meter signature should be displayed when the meter
         *  signature changes.
         */
        MeiAttribute* getMeterShowchange();
        void setMeterShowchange(std::string _metershowchange);
        bool hasMeterShowchange();
        void removeMeterShowchange();
        /** \brief Indicates the use of a meter symbol instead of a numeric meter signature, that
         *  is, 'C' for common time or 'C' with a slash for cut time.
         */
        MeiAttribute* getMeterSym();
        void setMeterSym(std::string _metersym);
        bool hasMeterSym();
        void removeMeterSym();

/* include <meter.symmixin> */

    private:
        MeiElement *b;
};

class MeterconformanceMixIn {
    public:
        explicit MeterconformanceMixIn(MeiElement *b);
        virtual ~MeterconformanceMixIn();
        /** \brief Indicates the relationship between the content of a staff or layer and the
         *  prevailing meter.
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
        /** \brief Indicates the relationship between the content of a staff or layer and the
         *  prevailing meter.
         */
        MeiAttribute* getMetcon();
        void setMetcon(std::string _metcon);
        bool hasMetcon();
        void removeMetcon();
        /** \brief Indicates whether or not a bar line is "controlling"; that is, if it indicates a
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

/* include <controlmixin> */

    private:
        MeiElement *b;
};

class MmtempoMixIn {
    public:
        explicit MmtempoMixIn(MeiElement *b);
        virtual ~MmtempoMixIn();
        /** \brief Used to describe tempo in terms of beats (often the meter signature denominator)
         *  per minute, ala M.M.
         * 
         *  (Maezel's Metronome). Do not confuse this attribute with midi.bpm or midi.mspb.
         *  In MIDI, a beat is always defined as a quarter note, *not the numerator of the
         *  time signature or the metronomic indication*.
         */
        MeiAttribute* getMm();
        void setMm(std::string _mm);
        bool hasMm();
        void removeMm();
        /** \brief Captures the metronomic unit.
         */
        MeiAttribute* getMmUnit();
        void setMmUnit(std::string _mmunit);
        bool hasMmUnit();
        void removeMmUnit();
        /** \brief Records the number of augmentation dots required by a dotted metronome unit.
         */
        MeiAttribute* getMmDots();
        void setMmDots(std::string _mmdots);
        bool hasMmDots();
        void removeMmDots();

/* include <mm.dotsmixin> */

    private:
        MeiElement *b;
};

class MultinummeasuresMixIn {
    public:
        explicit MultinummeasuresMixIn(MeiElement *b);
        virtual ~MultinummeasuresMixIn();
        /** \brief Indicates whether programmatically calculated counts of multiple measures of
         *  rest (mRest) and whole measure repeats (mRpt) in parts should be rendered.
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
        /** \brief Used to record a pointer to the regularized form of the name elsewhere in the
         *  document.
         */
        MeiAttribute* getNymref();
        void setNymref(std::string _nymref);
        bool hasNymref();
        void removeNymref();
        /** \brief Used to specify further information about the entity referenced by this name,
         *  for example, the occupation of a person or the status of a place.
         * 
         *  Use a standard value whenever possible.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();

/* include <rolemixin> */

    private:
        MeiElement *b;
};

class NotationstyleMixIn {
    public:
        explicit NotationstyleMixIn(MeiElement *b);
        virtual ~NotationstyleMixIn();
        /** \brief Sets the default music font name.
         */
        MeiAttribute* getMusicName();
        void setMusicName(std::string _musicname);
        bool hasMusicName();
        void removeMusicName();
        /** \brief Sets the default music font size.
         */
        MeiAttribute* getMusicSize();
        void setMusicSize(std::string _musicsize);
        bool hasMusicSize();
        void removeMusicSize();

/* include <music.sizemixin> */

    private:
        MeiElement *b;
};

class NoteGesMixIn {
    public:
        explicit NoteGesMixIn(MeiElement *b);
        virtual ~NoteGesMixIn();
        /** \brief Records performed octave information that differs from the written value.
         */
        MeiAttribute* getOctGes();
        void setOctGes(std::string _octges);
        bool hasOctGes();
        void removeOctGes();
        /** \brief Contains a performed pitch name that differs from the written value.
         */
        MeiAttribute* getPnameGes();
        void setPnameGes(std::string _pnameges);
        bool hasPnameGes();
        void removePnameGes();
        /** \brief Holds a pitch-to-number mapping, a base-40 or MIDI note number, for example.
         */
        MeiAttribute* getPnum();
        void setPnum(std::string _pnum);
        bool hasPnum();
        void removePnum();

/* include <pnummixin> */

    private:
        MeiElement *b;
};

class NoteheadsMixIn {
    public:
        explicit NoteheadsMixIn(MeiElement *b);
        virtual ~NoteheadsMixIn();
        /** \brief Captures the overall color of a notehead.
         */
        MeiAttribute* getHeadColor();
        void setHeadColor(std::string _headcolor);
        bool hasHeadColor();
        void removeHeadColor();
        /** \brief Describes how/if the notehead is filled.
         */
        MeiAttribute* getHeadFill();
        void setHeadFill(std::string _headfill);
        bool hasHeadFill();
        void removeHeadFill();
        /** \brief Captures the fill color of a notehead if different from the overall note color.
         */
        MeiAttribute* getHeadFillcolor();
        void setHeadFillcolor(std::string _headfillcolor);
        bool hasHeadFillcolor();
        void removeHeadFillcolor();
        /** \brief Records any additional symbols applied to the notehead.
         */
        MeiAttribute* getHeadMod();
        void setHeadMod(std::string _headmod);
        bool hasHeadMod();
        void removeHeadMod();
        /** \brief Describes rotation applied to the basic notehead shape.
         * 
         *  A positive value rotates the notehead in a counter-clockwise fashion, while
         *  negative values produce clockwise rotation.
         */
        MeiAttribute* getHeadRotation();
        void setHeadRotation(std::string _headrotation);
        bool hasHeadRotation();
        void removeHeadRotation();
        /** \brief Used to override the head shape normally used for the given duration.
         */
        MeiAttribute* getHeadShape();
        void setHeadShape(std::string _headshape);
        bool hasHeadShape();
        void removeHeadShape();
        /** \brief Indicates if a feature should be rendered when the notation is presented
         *  graphically or sounded when it is presented in an aural form.
         */
        MeiAttribute* getHeadVisible();
        void setHeadVisible(std::string _headvisible);
        bool hasHeadVisible();
        void removeHeadVisible();

/* include <head.visiblemixin> */

    private:
        MeiElement *b;
};

class OctaveMixIn {
    public:
        explicit OctaveMixIn(MeiElement *b);
        virtual ~OctaveMixIn();
        /** \brief Captures written octave information.
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
        /** \brief Contains a default octave specification for use when the first note, rest,
         *  chord, etc.
         * 
         *  in a measure does not have an octave value specified.
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
        /** \brief Records the amount of octave displacement.
         */
        MeiAttribute* getDis();
        void setDis(std::string _dis);
        bool hasDis();
        void removeDis();
        /** \brief Records the direction of octave displacement.
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
        /** \brief Determines the placement of notes on a 1-line staff.
         * 
         *  A value of 'true' places all notes on the line, while a value of 'false' places
         *  stems-up notes above the line and stems-down notes below the line.
         */
        MeiAttribute* getOntheline();
        void setOntheline(std::string _ontheline);
        bool hasOntheline();
        void removeOntheline();

/* include <onthelinemixin> */

    private:
        MeiElement *b;
};

class OptimizationMixIn {
    public:
        explicit OptimizationMixIn(MeiElement *b);
        virtual ~OptimizationMixIn();
        /** \brief Indicates whether staves without notes, rests, etc.
         * 
         *  should be displayed. When the value is 'true', empty staves are displayed.
         */
        MeiAttribute* getOptimize();
        void setOptimize(std::string _optimize);
        bool hasOptimize();
        void removeOptimize();

/* include <optimizemixin> */

    private:
        MeiElement *b;
};

class OriginLayeridentMixIn {
    public:
        explicit OriginLayeridentMixIn(MeiElement *b);
        virtual ~OriginLayeridentMixIn();
        /** \brief identifies the layer on which referenced notation occurs.
         */
        MeiAttribute* getOriginLayer();
        void setOriginLayer(std::string _originlayer);
        bool hasOriginLayer();
        void removeOriginLayer();

/* include <origin.layermixin> */

    private:
        MeiElement *b;
};

class OriginStaffidentMixIn {
    public:
        explicit OriginStaffidentMixIn(MeiElement *b);
        virtual ~OriginStaffidentMixIn();
        /** \brief signifies the staff on which referenced notation occurs.
         * 
         *  Defaults to the same value as the local staff. Mandatory when applicable.
         */
        MeiAttribute* getOriginStaff();
        void setOriginStaff(std::string _originstaff);
        bool hasOriginStaff();
        void removeOriginStaff();

/* include <origin.staffmixin> */

    private:
        MeiElement *b;
};

class OriginStartendidMixIn {
    public:
        explicit OriginStartendidMixIn(MeiElement *b);
        virtual ~OriginStartendidMixIn();
        /** \brief indicates the first element in a sequence of events.
         */
        MeiAttribute* getOriginStartid();
        void setOriginStartid(std::string _originstartid);
        bool hasOriginStartid();
        void removeOriginStartid();
        /** \brief indicates the final element in a sequence of events.
         */
        MeiAttribute* getOriginEndid();
        void setOriginEndid(std::string _originendid);
        bool hasOriginEndid();
        void removeOriginEndid();

/* include <origin.endidmixin> */

    private:
        MeiElement *b;
};

class OriginTimestampMusicalMixIn {
    public:
        explicit OriginTimestampMusicalMixIn(MeiElement *b);
        virtual ~OriginTimestampMusicalMixIn();
        /** \brief encodes the starting point of musical material in terms of musical time, i.e., a
         *  (potentially negative) count of measures plus a beat location.
         */
        MeiAttribute* getOriginTstamp();
        void setOriginTstamp(std::string _origintstamp);
        bool hasOriginTstamp();
        void removeOriginTstamp();
        /** \brief encodes the ending point of musical material in terms of musical time, i.e., a
         *  count of measures plus a beat location.
         * 
         *  The values are relative to the measure identified by @origin.tstamp.
         */
        MeiAttribute* getOriginTstamp2();
        void setOriginTstamp2(std::string _origintstamp2);
        bool hasOriginTstamp2();
        void removeOriginTstamp2();

/* include <origin.tstamp2mixin> */

    private:
        MeiElement *b;
};

class PadLogMixIn {
    public:
        explicit PadLogMixIn(MeiElement *b);
        virtual ~PadLogMixIn();
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

class PagesMixIn {
    public:
        explicit PagesMixIn(MeiElement *b);
        virtual ~PagesMixIn();
        /** \brief Specifies the height of the page; may be expressed in real-world units or staff
         *  steps.
         */
        MeiAttribute* getPageHeight();
        void setPageHeight(std::string _pageheight);
        bool hasPageHeight();
        void removePageHeight();
        /** \brief Describes the width of the page; may be expressed in real-world units or staff
         *  steps.
         */
        MeiAttribute* getPageWidth();
        void setPageWidth(std::string _pagewidth);
        bool hasPageWidth();
        void removePageWidth();
        /** \brief Indicates the amount of whitespace at the top of a page.
         */
        MeiAttribute* getPageTopmar();
        void setPageTopmar(std::string _pagetopmar);
        bool hasPageTopmar();
        void removePageTopmar();
        /** \brief Indicates the amount of whitespace at the bottom of a page.
         */
        MeiAttribute* getPageBotmar();
        void setPageBotmar(std::string _pagebotmar);
        bool hasPageBotmar();
        void removePageBotmar();
        /** \brief Indicates the amount of whitespace at the left side of a page.
         */
        MeiAttribute* getPageLeftmar();
        void setPageLeftmar(std::string _pageleftmar);
        bool hasPageLeftmar();
        void removePageLeftmar();
        /** \brief Indicates the amount of whitespace at the right side of a page.
         */
        MeiAttribute* getPageRightmar();
        void setPageRightmar(std::string _pagerightmar);
        bool hasPageRightmar();
        void removePageRightmar();
        /** \brief Indicates the number of logical pages to be rendered on a single physical page.
         */
        MeiAttribute* getPagePanels();
        void setPagePanels(std::string _pagepanels);
        bool hasPagePanels();
        void removePagePanels();
        /** \brief Indicates how the page should be scaled when rendered.
         */
        MeiAttribute* getPageScale();
        void setPageScale(std::string _pagescale);
        bool hasPageScale();
        void removePageScale();

/* include <page.scalemixin> */

    private:
        MeiElement *b;
};

class PbVisMixIn {
    public:
        explicit PbVisMixIn(MeiElement *b);
        virtual ~PbVisMixIn();
        /** \brief States the side of a leaf (as in a manuscript) on which the content following
         *  the <pb> element occurs.
         */
        MeiAttribute* getFolium();
        void setFolium(std::string _folium);
        bool hasFolium();
        void removeFolium();

/* include <foliummixin> */

    private:
        MeiElement *b;
};

class PitchMixIn {
    public:
        explicit PitchMixIn(MeiElement *b);
        virtual ~PitchMixIn();
        /** \brief Contains a written pitch name.
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
        /** \brief Captures the placement of the item with respect to the staff with which it is
         *  associated.
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
        /** \brief Contains a space separated list of references that identify active participants
         *  in a collection/relationship, such as notes under a phrase mark; that is, the
         *  entities pointed "from".
         */
        MeiAttribute* getPlist();
        void setPlist(std::string _plist);
        bool hasPlist();
        void removePlist();

/* include <plistmixin> */

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
        /** \brief Used to specify further information about the entity referenced by this name,
         *  for example, the occupation of a person or the status of a place.
         * 
         *  Use a standard value whenever possible.
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
        /** \brief Encodes the target note when its pitch differs from the pitch at which the
         *  custos appears.
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();
        /** \brief Characterization of target resource(s) using any convenient classification
         *  scheme or typology.
         */
        MeiAttribute* getTargettype();
        void setTargettype(std::string _targettype);
        bool hasTargettype();
        void removeTargettype();

/* include <targettypemixin> */

    private:
        MeiElement *b;
};

class QuantityMixIn {
    public:
        explicit QuantityMixIn(MeiElement *b);
        virtual ~QuantityMixIn();
        /** \brief Numeric value capturing a measurement or count.
         * 
         *  Can only be interpreted in combination with the unit or currency attribute.
         */
        MeiAttribute* getQuantity();
        void setQuantity(std::string _quantity);
        bool hasQuantity();
        void removeQuantity();

/* include <quantitymixin> */

    private:
        MeiElement *b;
};

class RelativesizeMixIn {
    public:
        explicit RelativesizeMixIn(MeiElement *b);
        virtual ~RelativesizeMixIn();
        /** \brief Describes the relative size of a feature.
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
        /** \brief Indicates the agent(s) responsible for some aspect of the text's creation,
         *  transcription, editing, or encoding.
         * 
         *  Its value must point to one or more identifiers declared in the document header.
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

class ScalableMixIn {
    public:
        explicit ScalableMixIn(MeiElement *b);
        virtual ~ScalableMixIn();
        /** \brief Scale factor to be applied to the feature to make it the desired display size.
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
        /** \brief Holds the pitch name of a tuning reference pitch.
         */
        MeiAttribute* getTunePname();
        void setTunePname(std::string _tunepname);
        bool hasTunePname();
        void removeTunePname();
        /** \brief Holds a value for cycles per second, i.e., Hertz, for a tuning reference pitch.
         */
        MeiAttribute* getTuneHz();
        void setTuneHz(std::string _tuneHz);
        bool hasTuneHz();
        void removeTuneHz();
        /** \brief Provides an indication of the tuning system, 'just', for example.
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
        /** \brief Defines the height of a "virtual unit" (vu) in terms of real-world units.
         * 
         *  A single vu is half the distance between the vertical center point of a staff
         *  line and that of an adjacent staff line.
         */
        MeiAttribute* getVuHeight();
        void setVuHeight(std::string _vuheight);
        bool hasVuHeight();
        void removeVuHeight();

/* include <vu.heightmixin> */

    private:
        MeiElement *b;
};

class SectionVisMixIn {
    public:
        explicit SectionVisMixIn(MeiElement *b);
        virtual ~SectionVisMixIn();
        /** \brief Indicates that staves begin again with this section.
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
        /** \brief Used to assign a sequence number related to the order in which the encoded
         *  features carrying this attribute are believed to have occurred.
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
        /** \brief Indicates the number of slashes present.
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
        /** \brief Indicates that this element participates in a slur.
         * 
         *  If visual information about the slur needs to be recorded, then a <slur> element
         *  should be employed.
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
        /** \brief Indicates whether a space is 'compressible', i.e., if it may be removed at the
         *  discretion of processing software.
         */
        MeiAttribute* getCompressable();
        void setCompressable(std::string _compressable);
        bool hasCompressable();
        void removeCompressable();

/* include <compressablemixin> */

    private:
        MeiElement *b;
};

class SpacingMixIn {
    public:
        explicit SpacingMixIn(MeiElement *b);
        virtual ~SpacingMixIn();
        /** \brief Describes a note's spacing relative to its time value.
         */
        MeiAttribute* getSpacingPackexp();
        void setSpacingPackexp(std::string _spacingpackexp);
        bool hasSpacingPackexp();
        void removeSpacingPackexp();
        /** \brief Describes the note spacing of output.
         */
        MeiAttribute* getSpacingPackfact();
        void setSpacingPackfact(std::string _spacingpackfact);
        bool hasSpacingPackfact();
        void removeSpacingPackfact();
        /** \brief Specifies the minimum amount of space between adjacent staves in the same
         *  system; measured from the bottom line of the staff above to the top line of the
         *  staff below.
         */
        MeiAttribute* getSpacingStaff();
        void setSpacingStaff(std::string _spacingstaff);
        bool hasSpacingStaff();
        void removeSpacingStaff();
        /** \brief Describes the space between adjacent systems; a pair of space-separated values
         *  (minimum and maximum, respectively) provides a range between which a rendering
         *  system-supplied value may fall, while a single value indicates a fixed amount of
         *  space; that is, the minimum and maximum values are equal.
         */
        MeiAttribute* getSpacingSystem();
        void setSpacingSystem(std::string _spacingsystem);
        bool hasSpacingSystem();
        void removeSpacingSystem();

/* include <spacing.systemmixin> */

    private:
        MeiElement *b;
};

class StaffLogMixIn {
    public:
        explicit StaffLogMixIn(MeiElement *b);
        virtual ~StaffLogMixIn();
        /** \brief Provides a mechanism for linking the layer to a layerDef element.
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
        /** \brief Determines whether to display guitar chord grids.
         */
        MeiAttribute* getGridShow();
        void setGridShow(std::string _gridshow);
        bool hasGridShow();
        void removeGridShow();
        /** \brief Indicates the number of layers and their stem directions.
         */
        MeiAttribute* getLayerscheme();
        void setLayerscheme(std::string _layerscheme);
        bool hasLayerscheme();
        void removeLayerscheme();
        /** \brief Indicates the number of staff lines.
         */
        MeiAttribute* getLines();
        void setLines(std::string _lines);
        bool hasLines();
        void removeLines();
        /** \brief Captures the colors of the staff lines.
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
        /** \brief Records whether all staff lines are visible.
         */
        MeiAttribute* getLinesVisible();
        void setLinesVisible(std::string _linesvisible);
        bool hasLinesVisible();
        void removeLinesVisible();
        /** \brief Records the absolute distance (as opposed to the relative distances recorded in
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

/* include <spacingmixin> */

    private:
        MeiElement *b;
};

class StaffGrpVisMixIn {
    public:
        explicit StaffGrpVisMixIn(MeiElement *b);
        virtual ~StaffGrpVisMixIn();
        /** \brief Indicates whether bar lines go across the space between staves (true) or are
         *  only drawn across the lines of each staff (false).
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
        /** \brief Specifies the symbol used to group a set of staves.
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
        /** \brief Signifies the staff on which a notated event occurs or to which a control event
         *  applies.
         * 
         *  Mandatory when applicable.
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
        /** \brief Holds the staff location of the feature.
         */
        MeiAttribute* getLoc();
        void setLoc(std::string _loc);
        bool hasLoc();
        void removeLoc();

/* include <locmixin> */

    private:
        MeiElement *b;
};

class StafflocPitchedMixIn {
    public:
        explicit StafflocPitchedMixIn(MeiElement *b);
        virtual ~StafflocPitchedMixIn();
        /** \brief Captures staff location in terms of written pitch name.
         */
        MeiAttribute* getPloc();
        void setPloc(std::string _ploc);
        bool hasPloc();
        void removePloc();
        /** \brief Records staff location in terms of written octave.
         */
        MeiAttribute* getOloc();
        void setOloc(std::string _oloc);
        bool hasOloc();
        void removeOloc();

/* include <olocmixin> */

    private:
        MeiElement *b;
};

class StartendidMixIn {
    public:
        explicit StartendidMixIn(MeiElement *b);
        virtual ~StartendidMixIn();
        /** \brief Indicates the final element in a sequence of events to which the feature
         *  applies.
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
        /** \brief Holds a reference to the first element in a sequence of events to which the
         *  feature applies.
         */
        MeiAttribute* getStartid();
        void setStartid(std::string _startid);
        bool hasStartid();
        void removeStartid();

/* include <startidmixin> */

    private:
        MeiElement *b;
};

class StemsMixIn {
    public:
        explicit StemsMixIn(MeiElement *b);
        virtual ~StemsMixIn();
        /** \brief Describes the direction of a stem.
         */
        MeiAttribute* getStemDir();
        void setStemDir(std::string _stemdir);
        bool hasStemDir();
        void removeStemDir();
        /** \brief Encodes the stem length.
         */
        MeiAttribute* getStemLen();
        void setStemLen(std::string _stemlen);
        bool hasStemLen();
        void removeStemLen();
        /** \brief Encodes any stem "modifiers"; that is, symbols rendered on the stem, such as
         *  tremolo or Sprechstimme indicators.
         */
        MeiAttribute* getStemMod();
        void setStemMod(std::string _stemmod);
        bool hasStemMod();
        void removeStemMod();
        /** \brief Records the position of the stem in relation to the note head(s).
         */
        MeiAttribute* getStemPos();
        void setStemPos(std::string _stempos);
        bool hasStemPos();
        void removeStemPos();
        /** \brief Records the output x coordinate of the stem's attachment point.
         */
        MeiAttribute* getStemX();
        void setStemX(std::string _stemx);
        bool hasStemX();
        void removeStemX();
        /** \brief Records the output y coordinate of the stem's attachment point.
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
        /** \brief Describes the symbols typically used to indicate breaks between syllables and
         *  their functions.
         */
        MeiAttribute* getCon();
        void setCon(std::string _con);
        bool hasCon();
        void removeCon();
        /** \brief Records the position of a syllable within a word.
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
        /** \brief Holds an associated sung text syllable.
         */
        MeiAttribute* getSyl();
        void setSyl(std::string _syl);
        bool hasSyl();
        void removeSyl();

/* include <sylmixin> */

    private:
        MeiElement *b;
};

class SystemsMixIn {
    public:
        explicit SystemsMixIn(MeiElement *b);
        virtual ~SystemsMixIn();
        /** \brief Indicates whether the staves are joined at the left by a continuous line.
         * 
         *  The default value is "true". Do not confuse this with the heavy vertical line
         *  used as a grouping symbol.
         */
        MeiAttribute* getSystemLeftline();
        void setSystemLeftline(std::string _systemleftline);
        bool hasSystemLeftline();
        void removeSystemLeftline();
        /** \brief Describes the amount of whitespace at the left system margin relative to
         *  page.leftmar.
         */
        MeiAttribute* getSystemLeftmar();
        void setSystemLeftmar(std::string _systemleftmar);
        bool hasSystemLeftmar();
        void removeSystemLeftmar();
        /** \brief Describes the amount of whitespace at the right system margin relative to
         *  page.rightmar.
         */
        MeiAttribute* getSystemRightmar();
        void setSystemRightmar(std::string _systemrightmar);
        bool hasSystemRightmar();
        void removeSystemRightmar();
        /** \brief Describes the distance from page's top edge to the first system; used for first
         *  page only.
         */
        MeiAttribute* getSystemTopmar();
        void setSystemTopmar(std::string _systemtopmar);
        bool hasSystemTopmar();
        void removeSystemTopmar();

/* include <system.topmarmixin> */

    private:
        MeiElement *b;
};

class TargetevalMixIn {
    public:
        explicit TargetevalMixIn(MeiElement *b);
        virtual ~TargetevalMixIn();
        /** \brief Specifies the intended meaning when a participant in a relationship is itself a
         *  pointer.
         */
        MeiAttribute* getEvaluate();
        void setEvaluate(std::string _evaluate);
        bool hasEvaluate();
        void removeEvaluate();

/* include <evaluatemixin> */

    private:
        MeiElement *b;
};

class TempoLogMixIn {
    public:
        explicit TempoLogMixIn(MeiElement *b);
        virtual ~TempoLogMixIn();
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

class TextstyleMixIn {
    public:
        explicit TextstyleMixIn(MeiElement *b);
        virtual ~TextstyleMixIn();
        /** \brief Provides a default value for the font family name of text (other than lyrics)
         *  when this information is not provided on the individual elements.
         */
        MeiAttribute* getTextFam();
        void setTextFam(std::string _textfam);
        bool hasTextFam();
        void removeTextFam();
        /** \brief Provides a default value for the font name of text (other than lyrics) when this
         *  information is not provided on the individual elements.
         */
        MeiAttribute* getTextName();
        void setTextName(std::string _textname);
        bool hasTextName();
        void removeTextName();
        /** \brief Provides a default value for the font size of text (other than lyrics) when this
         *  information is not provided on the individual elements.
         */
        MeiAttribute* getTextSize();
        void setTextSize(std::string _textsize);
        bool hasTextSize();
        void removeTextSize();
        /** \brief Provides a default value for the font style of text (other than lyrics) when
         *  this information is not provided on the individual elements.
         */
        MeiAttribute* getTextStyle();
        void setTextStyle(std::string _textstyle);
        bool hasTextStyle();
        void removeTextStyle();
        /** \brief Provides a default value for the font weight for text (other than lyrics) when
         *  this information is not provided on the individual elements.
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
        /** \brief Indicates that this element participates in a tie.
         * 
         *  If visual information about the tie needs to be recorded, then a <tie> element
         *  should be employed.
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
        /** \brief Encodes the onset time in terms of musical time, i.e.,
         *  beats[.fractional_beat_part].
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
        /** \brief Captures performed onset time in several forms; that is, ppq (MIDI clicks and
         *  MusicXML 'divisions'), Humdrum **recip values, beats, seconds, or mensural
         *  duration values.
         */
        MeiAttribute* getTstampGes();
        void setTstampGes(std::string _tstampges);
        bool hasTstampGes();
        void removeTstampGes();
        /** \brief Used to record the onset time in terms of ISO time.
         */
        MeiAttribute* getTstampReal();
        void setTstampReal(std::string _tstampreal);
        bool hasTstampReal();
        void removeTstampReal();

/* include <tstamp.realmixin> */

    private:
        MeiElement *b;
};

class Timestamp2MusicalMixIn {
    public:
        explicit Timestamp2MusicalMixIn(MeiElement *b);
        virtual ~Timestamp2MusicalMixIn();
        /** \brief Encodes the ending point of an event in terms of musical time, i.e., a count of
         *  measures plus a beat location.
         */
        MeiAttribute* getTstamp2();
        void setTstamp2(std::string _tstamp2);
        bool hasTstamp2();
        void removeTstamp2();

/* include <tstamp2mixin> */

    private:
        MeiElement *b;
};

class TranspositionMixIn {
    public:
        explicit TranspositionMixIn(MeiElement *b);
        virtual ~TranspositionMixIn();
        /** \brief Records the amount of diatonic pitch shift, e.g., C to C♯ = 0, C to D♭ = 1,
         *  necessary to calculate the sounded pitch from the written one.
         */
        MeiAttribute* getTransDiat();
        void setTransDiat(std::string _transdiat);
        bool hasTransDiat();
        void removeTransDiat();
        /** \brief Records the amount of pitch shift in semitones, e.g., C to C♯ = 1, C to D♭ =
         *  1, necessary to calculate the sounded pitch from the written one.
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
        /** \brief Indicates that this feature participates in a tuplet.
         * 
         *  If visual information about the tuplet needs to be recorded, then a <tuplet>
         *  element should be employed.
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
        /** \brief Characterizes the element in some sense, using any convenient classification
         *  scheme or typology.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief Provide any sub-classification for the element, additional to that given by its
         *  type attribute.
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
        /** \brief Contains the name of a font-family.
         */
        MeiAttribute* getFontfam();
        void setFontfam(std::string _fontfam);
        bool hasFontfam();
        void removeFontfam();
        /** \brief Holds the name of a font.
         */
        MeiAttribute* getFontname();
        void setFontname(std::string _fontname);
        bool hasFontname();
        void removeFontname();
        /** \brief Indicates the size of a font expressed in printers' points, i.e., 1/72nd of an
         *  inch, relative terms, e.g., "small", "larger", etc., or percentage values
         *  relative to "normal" size, e.g., "125%".
         */
        MeiAttribute* getFontsize();
        void setFontsize(std::string _fontsize);
        bool hasFontsize();
        void removeFontsize();
        /** \brief Records the style of a font, i.e, italic, oblique, or normal.
         */
        MeiAttribute* getFontstyle();
        void setFontstyle(std::string _fontstyle);
        bool hasFontstyle();
        void removeFontstyle();
        /** \brief Used to indicate bold type.
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
        /** \brief Indicates if a feature should be rendered when the notation is presented
         *  graphically or sounded when it is presented in an aural form.
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
        /** \brief Records a horizontal adjustment to a feature's programmatically-determined
         *  location in terms of staff interline distance; that is, in units of 1/2 the
         *  distance between adjacent staff lines.
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
        /** \brief Records a timestamp adjustment of a feature's programmatically-determined
         *  location in terms of musical time; that is, beats.
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
        /** \brief Records the vertical adjustment of a feature's programmatically-determined
         *  location in terms of staff interline distance; that is, in units of 1/2 the
         *  distance between adjacent staff lines.
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
        /** \brief Records the horizontal adjustment of a feature's programmatically-determined
         *  start point.
         */
        MeiAttribute* getStartho();
        void setStartho(std::string _startho);
        bool hasStartho();
        void removeStartho();
        /** \brief Records the horizontal adjustment of a feature's programmatically-determined end
         *  point.
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
        /** \brief Records a timestamp adjustment of a feature's programmatically-determined start
         *  point.
         */
        MeiAttribute* getStartto();
        void setStartto(std::string _startto);
        bool hasStartto();
        void removeStartto();
        /** \brief Records a timestamp adjustment of a feature's programmatically-determined end
         *  point.
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
        /** \brief Records a vertical adjustment of a feature's programmatically-determined start
         *  point.
         */
        MeiAttribute* getStartvo();
        void setStartvo(std::string _startvo);
        bool hasStartvo();
        void removeStartvo();
        /** \brief Records a vertical adjustment of a feature's programmatically-determined end
         *  point.
         */
        MeiAttribute* getEndvo();
        void setEndvo(std::string _endvo);
        bool hasEndvo();
        void removeEndvo();

/* include <endvomixin> */

    private:
        MeiElement *b;
};

class WhitespaceMixIn {
    public:
        explicit WhitespaceMixIn(MeiElement *b);
        virtual ~WhitespaceMixIn();
        /** \brief 
         */
        MeiAttribute* getSpace();
        void setSpace(std::string _space);
        bool hasSpace();
        void removeSpace();

/* include <spacemixin> */

    private:
        MeiElement *b;
};

class WidthMixIn {
    public:
        explicit WidthMixIn(MeiElement *b);
        virtual ~WidthMixIn();
        /** \brief Width of the line.
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
        /** \brief Encodes an x coordinate for a feature in an output coordinate system.
         * 
         *  When it is necessary to record the placement of a feature in a facsimile image,
         *  use the facs attribute.
         */
        MeiAttribute* getX();
        void setX(std::string _x);
        bool hasX();
        void removeX();
        /** \brief Encodes an y coordinate for a feature in an output coordinate system.
         * 
         *  When it is necessary to record the placement of a feature in a facsimile image,
         *  use the facs attribute.
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
        /** \brief Encodes the optional 2nd x coordinate.
         */
        MeiAttribute* getX2();
        void setX2(std::string _x2);
        bool hasX2();
        void removeX2();
        /** \brief Encodes the optional 2nd y coordinate.
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
