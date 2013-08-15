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

#ifndef SHAREDMIXIN_H_
#define SHAREDMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class Mei_accidLogMixIn {
    public:
        explicit Mei_accidLogMixIn(MeiElement *b);
        virtual ~Mei_accidLogMixIn();
        /** \brief records the function of an accidental.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class Mei_accidentalMixIn {
    public:
        explicit Mei_accidentalMixIn(MeiElement *b);
        virtual ~Mei_accidentalMixIn();
        /** \brief captures a written accidental.
         */
        MeiAttribute* getAccid();
        void setAccid(std::string _accid);
        bool hasAccid();
        void removeAccid();

/* include <accidmixin> */

    private:
        MeiElement *b;
};

class Mei_accidentalPerformedMixIn {
    public:
        explicit Mei_accidentalPerformedMixIn(MeiElement *b);
        virtual ~Mei_accidentalPerformedMixIn();
        /** \brief records the performed pitch inflection when it differs from the written
         *  accidental.
         */
        MeiAttribute* getAccidGes();
        void setAccidGes(std::string _accidges);
        bool hasAccidGes();
        void removeAccidGes();

/* include <accid.gesmixin> */

    private:
        MeiElement *b;
};

class Mei_altsymMixIn {
    public:
        explicit Mei_altsymMixIn(MeiElement *b);
        virtual ~Mei_altsymMixIn();
        /** \brief provides a way of pointing to a user-defined symbol.
         * 
         *  It must contain an ID of a <symbolDef> element elsewhere in the document.
         */
        MeiAttribute* getAltsym();
        void setAltsym(std::string _altsym);
        bool hasAltsym();
        void removeAltsym();

/* include <altsymmixin> */

    private:
        MeiElement *b;
};

class Mei_articulationMixIn {
    public:
        explicit Mei_articulationMixIn(MeiElement *b);
        virtual ~Mei_articulationMixIn();
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

/* include <articmixin> */

    private:
        MeiElement *b;
};

class Mei_articulationPerformedMixIn {
    public:
        explicit Mei_articulationPerformedMixIn(MeiElement *b);
        virtual ~Mei_articulationPerformedMixIn();
        /** \brief records performed articulation that differs from the written value.
         */
        MeiAttribute* getArticGes();
        void setArticGes(std::string _articges);
        bool hasArticGes();
        void removeArticGes();

/* include <artic.gesmixin> */

    private:
        MeiElement *b;
};

class Mei_augmentdotsMixIn {
    public:
        explicit Mei_augmentdotsMixIn(MeiElement *b);
        virtual ~Mei_augmentdotsMixIn();
        /** \brief records the number of augmentation dots required by a dotted duration.
         */
        MeiAttribute* getDots();
        void setDots(std::string _dots);
        bool hasDots();
        void removeDots();

/* include <dotsmixin> */

    private:
        MeiElement *b;
};

class Mei_authorizedMixIn {
    public:
        explicit Mei_authorizedMixIn(MeiElement *b);
        virtual ~Mei_authorizedMixIn();
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
        MeiAttribute* getAuthURI();
        void setAuthURI(std::string _authURI);
        bool hasAuthURI();
        void removeAuthURI();

/* include <authURImixin> */

    private:
        MeiElement *b;
};

class Mei_barLineLogMixIn {
    public:
        explicit Mei_barLineLogMixIn(MeiElement *b);
        virtual ~Mei_barLineLogMixIn();
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

class Mei_barplacementMixIn {
    public:
        explicit Mei_barplacementMixIn(MeiElement *b);
        virtual ~Mei_barplacementMixIn();
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

/* include <taktplacemixin> */

    private:
        MeiElement *b;
};

class Mei_beamingVisMixIn {
    public:
        explicit Mei_beamingVisMixIn(MeiElement *b);
        virtual ~Mei_beamingVisMixIn();
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

/* include <beam.slopemixin> */

    private:
        MeiElement *b;
};

class Mei_biblMixIn {
    public:
        explicit Mei_biblMixIn(MeiElement *b);
        virtual ~Mei_biblMixIn();
        /** \brief contains a reference to a field or element in another descriptive encoding
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

class Mei_calendaredMixIn {
    public:
        explicit Mei_calendaredMixIn(MeiElement *b);
        virtual ~Mei_calendaredMixIn();
        /** \brief indicates the system or calendar to which the date represented by the content of
         *  this element belongs.
         */
        MeiAttribute* getCalendar();
        void setCalendar(std::string _calendar);
        bool hasCalendar();
        void removeCalendar();

/* include <calendarmixin> */

    private:
        MeiElement *b;
};

class Mei_canonicalMixIn {
    public:
        explicit Mei_canonicalMixIn(MeiElement *b);
        virtual ~Mei_canonicalMixIn();
        /** \brief used to record a value which serves as a primary key in an external database.
         */
        MeiAttribute* getDbkey();
        void setDbkey(std::string _dbkey);
        bool hasDbkey();
        void removeDbkey();

/* include <dbkeymixin> */

    private:
        MeiElement *b;
};

class Mei_chordVisMixIn {
    public:
        explicit Mei_chordVisMixIn(MeiElement *b);
        virtual ~Mei_chordVisMixIn();
        /** \brief indicates a single alternative note head should be displayed instead of
         *  individual note heads.
         * 
         *  See Read, p. 320-321, re: tone clusters.
         */
        MeiAttribute* getCluster();
        void setCluster(std::string _cluster);
        bool hasCluster();
        void removeCluster();

/* include <clustermixin> */

    private:
        MeiElement *b;
};

class Mei_clefLogMixIn {
    public:
        explicit Mei_clefLogMixIn(MeiElement *b);
        virtual ~Mei_clefLogMixIn();
        /** \brief records the function of the clef.
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

class Mei_cleffingLogMixIn {
    public:
        explicit Mei_cleffingLogMixIn(MeiElement *b);
        virtual ~Mei_cleffingLogMixIn();
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

/* include <clef.dis.placemixin> */

    private:
        MeiElement *b;
};

class Mei_cleffingVisMixIn {
    public:
        explicit Mei_cleffingVisMixIn(MeiElement *b);
        virtual ~Mei_cleffingVisMixIn();
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

/* include <clef.visiblemixin> */

    private:
        MeiElement *b;
};

class Mei_clefshapeMixIn {
    public:
        explicit Mei_clefshapeMixIn(MeiElement *b);
        virtual ~Mei_clefshapeMixIn();
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

class Mei_colorMixIn {
    public:
        explicit Mei_colorMixIn(MeiElement *b);
        virtual ~Mei_colorMixIn();
        /** \brief used to indicate visual appearance.
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

class Mei_colorationMixIn {
    public:
        explicit Mei_colorationMixIn(MeiElement *b);
        virtual ~Mei_colorationMixIn();
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

/* include <coloredmixin> */

    private:
        MeiElement *b;
};

class Mei_commonMixIn {
    public:
        explicit Mei_commonMixIn(MeiElement *b);
        virtual ~Mei_commonMixIn();
        /** \brief provides a label to identify which part of a rhyme scheme this rhyming string
         *  instantiates.
         */
        MeiAttribute* getLabel();
        void setLabel(std::string _label);
        bool hasLabel();
        void removeLabel();
        /** \brief gives a number (or other label) for an element, which is not necessarily unique
         *  within the document.
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

class Mei_coordinatedMixIn {
    public:
        explicit Mei_coordinatedMixIn(MeiElement *b);
        virtual ~Mei_coordinatedMixIn();
        /** \brief gives the x coordinate value for the upper left corner of a rectangular space.
         */
        MeiAttribute* getUlx();
        void setUlx(std::string _ulx);
        bool hasUlx();
        void removeUlx();
        /** \brief gives the y coordinate value for the upper left corner of a rectangular space.
         */
        MeiAttribute* getUly();
        void setUly(std::string _uly);
        bool hasUly();
        void removeUly();
        /** \brief gives the x coordinate value for the lower right corner of a rectangular space.
         */
        MeiAttribute* getLrx();
        void setLrx(std::string _lrx);
        bool hasLrx();
        void removeLrx();
        /** \brief gives the y coordinate value for the lower right corner of a rectangular space.
         */
        MeiAttribute* getLry();
        void setLry(std::string _lry);
        bool hasLry();
        void removeLry();

/* include <lrymixin> */

    private:
        MeiElement *b;
};

class Mei_curvatureMixIn {
    public:
        explicit Mei_curvatureMixIn(MeiElement *b);
        virtual ~Mei_curvatureMixIn();
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

/* include <curvedirmixin> */

    private:
        MeiElement *b;
};

class Mei_curverendMixIn {
    public:
        explicit Mei_curverendMixIn(MeiElement *b);
        virtual ~Mei_curverendMixIn();
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

class Mei_custosLogMixIn {
    public:
        explicit Mei_custosLogMixIn(MeiElement *b);
        virtual ~Mei_custosLogMixIn();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <targetmixin> */

    private:
        MeiElement *b;
};

class Mei_datableMixIn {
    public:
        explicit Mei_datableMixIn(MeiElement *b);
        virtual ~Mei_datableMixIn();
        /** \brief contains the end point of a date range in standard ISO form.
         */
        MeiAttribute* getEnddate();
        void setEnddate(std::string _enddate);
        bool hasEnddate();
        void removeEnddate();
        /** \brief provides the value of a textual date in standard ISO form.
         */
        MeiAttribute* getIsodate();
        void setIsodate(std::string _isodate);
        bool hasIsodate();
        void removeIsodate();
        /** \brief contains an upper boundary for an uncertain date in standard ISO form.
         */
        MeiAttribute* getNotafter();
        void setNotafter(std::string _notafter);
        bool hasNotafter();
        void removeNotafter();
        /** \brief contains a lower boundary, in standard ISO form, for an uncertain date.
         */
        MeiAttribute* getNotbefore();
        void setNotbefore(std::string _notbefore);
        bool hasNotbefore();
        void removeNotbefore();
        /** \brief contains the starting point of a date range in standard ISO form.
         */
        MeiAttribute* getStartdate();
        void setStartdate(std::string _startdate);
        bool hasStartdate();
        void removeStartdate();

/* include <startdatemixin> */

    private:
        MeiElement *b;
};

class Mei_datapointingMixIn {
    public:
        explicit Mei_datapointingMixIn(MeiElement *b);
        virtual ~Mei_datapointingMixIn();
        /** \brief used to link metadata elements to one or more data-containing elements.
         */
        MeiAttribute* getData();
        void setData(std::string _data);
        bool hasData();
        void removeData();

/* include <datamixin> */

    private:
        MeiElement *b;
};

class Mei_declaringMixIn {
    public:
        explicit Mei_declaringMixIn(MeiElement *b);
        virtual ~Mei_declaringMixIn();
        /** \brief identifies one or more
         */
        MeiAttribute* getDecls();
        void setDecls(std::string _decls);
        bool hasDecls();
        void removeDecls();

/* include <declsmixin> */

    private:
        MeiElement *b;
};

class Mei_distancesMixIn {
    public:
        explicit Mei_distancesMixIn(MeiElement *b);
        virtual ~Mei_distancesMixIn();
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

/* include <text.distmixin> */

    private:
        MeiElement *b;
};

class Mei_dotLogMixIn {
    public:
        explicit Mei_dotLogMixIn(MeiElement *b);
        virtual ~Mei_dotLogMixIn();
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

class Mei_durationDefaultMixIn {
    public:
        explicit Mei_durationDefaultMixIn(MeiElement *b);
        virtual ~Mei_durationDefaultMixIn();
        /** \brief contains a default duration in those situations when the first note, rest,
         *  chord, etc.
         * 
         *  in a measure does not have a duration specified.
         */
        MeiAttribute* getDurDefault();
        void setDurDefault(std::string _durdefault);
        bool hasDurDefault();
        void removeDurDefault();

/* include <dur.defaultmixin> */

    private:
        MeiElement *b;
};

class Mei_durationMusicalMixIn {
    public:
        explicit Mei_durationMusicalMixIn(MeiElement *b);
        virtual ~Mei_durationMusicalMixIn();
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

class Mei_durationPerformedMixIn {
    public:
        explicit Mei_durationPerformedMixIn(MeiElement *b);
        virtual ~Mei_durationPerformedMixIn();
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

/* include <dur.gesmixin> */

    private:
        MeiElement *b;
};

class Mei_durationRatioMixIn {
    public:
        explicit Mei_durationRatioMixIn(MeiElement *b);
        virtual ~Mei_durationRatioMixIn();
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

/* include <numbasemixin> */

    private:
        MeiElement *b;
};

class Mei_durationTimestampMixIn {
    public:
        explicit Mei_durationTimestampMixIn(MeiElement *b);
        virtual ~Mei_durationTimestampMixIn();
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

class Mei_enclosingcharsMixIn {
    public:
        explicit Mei_enclosingcharsMixIn(MeiElement *b);
        virtual ~Mei_enclosingcharsMixIn();
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

/* include <enclosemixin> */

    private:
        MeiElement *b;
};

class Mei_fermatapresentMixIn {
    public:
        explicit Mei_fermatapresentMixIn(MeiElement *b);
        virtual ~Mei_fermatapresentMixIn();
        /** \brief indicates the attachment of a fermata to this element.
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

class Mei_handidentMixIn {
    public:
        explicit Mei_handidentMixIn(MeiElement *b);
        virtual ~Mei_handidentMixIn();
        /** \brief in the case of damage (deliberate defacement, inking out, etc.) assignable to a
         *  distinct hand, signifies the hand responsible for the damage.
         */
        MeiAttribute* getHand();
        void setHand(std::string _hand);
        bool hasHand();
        void removeHand();

/* include <handmixin> */

    private:
        MeiElement *b;
};

class Mei_horizontalalignMixIn {
    public:
        explicit Mei_horizontalalignMixIn(MeiElement *b);
        virtual ~Mei_horizontalalignMixIn();
        /** \brief records horizontal alignment.
         */
        MeiAttribute* getHalign();
        void setHalign(std::string _halign);
        bool hasHalign();
        void removeHalign();

/* include <halignmixin> */

    private:
        MeiElement *b;
};

class Mei_idMixIn {
    public:
        explicit Mei_idMixIn(MeiElement *b);
        virtual ~Mei_idMixIn();
        /** \brief 
         */
        MeiAttribute* getId();
        void setId(std::string _id);
        bool hasId();
        void removeId();

/* include <idmixin> */

    private:
        MeiElement *b;
};

class Mei_instrumentidentMixIn {
    public:
        explicit Mei_instrumentidentMixIn(MeiElement *b);
        virtual ~Mei_instrumentidentMixIn();
        /** \brief provides a way of pointing to a MIDI instrument definition.
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

class Mei_internetmediaMixIn {
    public:
        explicit Mei_internetmediaMixIn(MeiElement *b);
        virtual ~Mei_internetmediaMixIn();
        /** \brief specifies the applicable MIME (multimedia internet mail extension) type.
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

class Mei_joinedMixIn {
    public:
        explicit Mei_joinedMixIn(MeiElement *b);
        virtual ~Mei_joinedMixIn();
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

/* include <joinmixin> */

    private:
        MeiElement *b;
};

class Mei_keySigLogMixIn {
    public:
        explicit Mei_keySigLogMixIn(MeiElement *b);
        virtual ~Mei_keySigLogMixIn();
        /** \brief specifies the mode of this channel with respect to speech and writing.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <modemixin> */

    private:
        MeiElement *b;
};

class Mei_keySigDefaultLogMixIn {
    public:
        explicit Mei_keySigDefaultLogMixIn(MeiElement *b);
        virtual ~Mei_keySigDefaultLogMixIn();
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

/* include <key.sig.mixedmixin> */

    private:
        MeiElement *b;
};

class Mei_keySigDefaultVisMixIn {
    public:
        explicit Mei_keySigDefaultVisMixIn(MeiElement *b);
        virtual ~Mei_keySigDefaultVisMixIn();
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

/* include <key.sig.showchangemixin> */

    private:
        MeiElement *b;
};

class Mei_labelsAddlMixIn {
    public:
        explicit Mei_labelsAddlMixIn(MeiElement *b);
        virtual ~Mei_labelsAddlMixIn();
        /** \brief provides a label for a group of staves on pages after the first page.
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

class Mei_langMixIn {
    public:
        explicit Mei_langMixIn(MeiElement *b);
        virtual ~Mei_langMixIn();
        /** \brief a name identifying the formal language in which the code is expressed
         */
        MeiAttribute* getLang();
        void setLang(std::string _lang);
        bool hasLang();
        void removeLang();

/* include <langmixin> */

    private:
        MeiElement *b;
};

class Mei_layerLogMixIn {
    public:
        explicit Mei_layerLogMixIn(MeiElement *b);
        virtual ~Mei_layerLogMixIn();
        /** \brief provides a mechanism for linking the layer to a layerDef element.
         */
        MeiAttribute* getDef();
        void setDef(std::string _def);
        bool hasDef();
        void removeDef();

/* include <defmixin> */

    private:
        MeiElement *b;
};

class Mei_layeridentMixIn {
    public:
        explicit Mei_layeridentMixIn(MeiElement *b);
        virtual ~Mei_layeridentMixIn();
        /** \brief identifies the layer to which a feature applies.
         */
        MeiAttribute* getLayer();
        void setLayer(std::string _layer);
        bool hasLayer();
        void removeLayer();

/* include <layermixin> */

    private:
        MeiElement *b;
};

class Mei_linelocMixIn {
    public:
        explicit Mei_linelocMixIn(MeiElement *b);
        virtual ~Mei_linelocMixIn();
        /** \brief indicates the line upon which a feature stands.
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

class Mei_linerendMixIn {
    public:
        explicit Mei_linerendMixIn(MeiElement *b);
        virtual ~Mei_linerendMixIn();
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

class Mei_lyricstyleMixIn {
    public:
        explicit Mei_lyricstyleMixIn(MeiElement *b);
        virtual ~Mei_lyricstyleMixIn();
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

/* include <lyric.weightmixin> */

    private:
        MeiElement *b;
};

class Mei_measureLogMixIn {
    public:
        explicit Mei_measureLogMixIn(MeiElement *b);
        virtual ~Mei_measureLogMixIn();
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

/* include <rightmixin> */

    private:
        MeiElement *b;
};

class Mei_measurementMixIn {
    public:
        explicit Mei_measurementMixIn(MeiElement *b);
        virtual ~Mei_measurementMixIn();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();

/* include <unitmixin> */

    private:
        MeiElement *b;
};

class Mei_mediaboundsMixIn {
    public:
        explicit Mei_mediaboundsMixIn(MeiElement *b);
        virtual ~Mei_mediaboundsMixIn();
        /** \brief specifies a point where the relevant content begins.
         * 
         *  A numerical value must be less and a time value must be earlier than that in the
         *  end attribute.
         */
        MeiAttribute* getBegin();
        void setBegin(std::string _begin);
        bool hasBegin();
        void removeBegin();
        /** \brief indicates the location within a temporal alignment at which this element ends.
         */
        MeiAttribute* getEnd();
        void setEnd(std::string _end);
        bool hasEnd();
        void removeEnd();
        /** \brief type of values used in the begin/end attributes.
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

class Mei_mediumMixIn {
    public:
        explicit Mei_mediumMixIn(MeiElement *b);
        virtual ~Mei_mediumMixIn();
        /** \brief describes the tint or type of ink, e.g.
         */
        MeiAttribute* getMedium();
        void setMedium(std::string _medium);
        bool hasMedium();
        void removeMedium();

/* include <mediummixin> */

    private:
        MeiElement *b;
};

class Mei_meiversionMixIn {
    public:
        explicit Mei_meiversionMixIn(MeiElement *b);
        virtual ~Mei_meiversionMixIn();
        /** \brief specifies the version number of the MEI Guidelines in use.
         */
        MeiAttribute* getMeiversion();
        void setMeiversion(std::string _meiversion);
        bool hasMeiversion();
        void removeMeiversion();

/* include <meiversionmixin> */

    private:
        MeiElement *b;
};

class Mei_mensurLogMixIn {
    public:
        explicit Mei_mensurLogMixIn(MeiElement *b);
        virtual ~Mei_mensurLogMixIn();
        /** \brief specifies whether a dot is to be added to the base symbol.
         */
        MeiAttribute* getDot();
        void setDot(std::string _dot);
        bool hasDot();
        void removeDot();
        /** \brief describes the maxima-long relationship.
         */
        MeiAttribute* getModusmaior();
        void setModusmaior(std::string _modusmaior);
        bool hasModusmaior();
        void removeModusmaior();
        /** \brief describes the long-breve relationship.
         */
        MeiAttribute* getModusminor();
        void setModusminor(std::string _modusminor);
        bool hasModusminor();
        void removeModusminor();
        /** \brief describes the semibreve-minim relationship.
         */
        MeiAttribute* getProlatio();
        void setProlatio(std::string _prolatio);
        bool hasProlatio();
        void removeProlatio();
        /** \brief the base symbol in the mensuration sign/time signature of mensural notation.
         */
        MeiAttribute* getSign();
        void setSign(std::string _sign);
        bool hasSign();
        void removeSign();
        /** \brief describes the breve-semibreve relationship.
         */
        MeiAttribute* getTempus();
        void setTempus(std::string _tempus);
        bool hasTempus();
        void removeTempus();

/* include <tempusmixin> */

    private:
        MeiElement *b;
};

class Mei_meterSigLogMixIn {
    public:
        explicit Mei_meterSigLogMixIn(MeiElement *b);
        virtual ~Mei_meterSigLogMixIn();
        /** \brief captures the number of beats in a measure, that is, the top number of the meter
         *  signature.
         */
        MeiAttribute* getCount();
        void setCount(std::string _count);
        bool hasCount();
        void removeCount();
        /** \brief indicates the use of a meter symbol instead of a numeric meter signature, that
         *  is, 'C' for common time or 'C' with a slash for cut time.
         */
        MeiAttribute* getSym();
        void setSym(std::string _sym);
        bool hasSym();
        void removeSym();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();

/* include <unitmixin> */

    private:
        MeiElement *b;
};

class Mei_meterSigVisMixIn {
    public:
        explicit Mei_meterSigVisMixIn(MeiElement *b);
        virtual ~Mei_meterSigVisMixIn();
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

class Mei_meterSigDefaultLogMixIn {
    public:
        explicit Mei_meterSigDefaultLogMixIn(MeiElement *b);
        virtual ~Mei_meterSigDefaultLogMixIn();
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

/* include <meter.unitmixin> */

    private:
        MeiElement *b;
};

class Mei_meterSigDefaultVisMixIn {
    public:
        explicit Mei_meterSigDefaultVisMixIn(MeiElement *b);
        virtual ~Mei_meterSigDefaultVisMixIn();
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

/* include <meter.symmixin> */

    private:
        MeiElement *b;
};

class Mei_meterconformanceMixIn {
    public:
        explicit Mei_meterconformanceMixIn(MeiElement *b);
        virtual ~Mei_meterconformanceMixIn();
        /** \brief indicates the relationship between the content of a staff or layer and the
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

class Mei_meterconformanceBarMixIn {
    public:
        explicit Mei_meterconformanceBarMixIn(MeiElement *b);
        virtual ~Mei_meterconformanceBarMixIn();
        /** \brief indicates the relationship between the content of a staff or layer and the
         *  prevailing meter.
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

/* include <controlmixin> */

    private:
        MeiElement *b;
};

class Mei_mmtempoMixIn {
    public:
        explicit Mei_mmtempoMixIn(MeiElement *b);
        virtual ~Mei_mmtempoMixIn();
        /** \brief used to describe tempo in terms of beats (meter signature denominator) per
         *  minute, ala M.M.
         * 
         *  (Maezel's Metronome).
         */
        MeiAttribute* getMm();
        void setMm(std::string _mm);
        bool hasMm();
        void removeMm();

/* include <mmmixin> */

    private:
        MeiElement *b;
};

class Mei_multinummeasuresMixIn {
    public:
        explicit Mei_multinummeasuresMixIn(MeiElement *b);
        virtual ~Mei_multinummeasuresMixIn();
        /** \brief indicates whether programmatically calculated counts of multiple measures of
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

class Mei_nameMixIn {
    public:
        explicit Mei_nameMixIn(MeiElement *b);
        virtual ~Mei_nameMixIn();
        /** \brief used to record a pointer to the regularized form of the name elsewhere in the
         *  document.
         */
        MeiAttribute* getNymref();
        void setNymref(std::string _nymref);
        bool hasNymref();
        void removeNymref();
        /** \brief may be used to specify further information about the entity referenced by this
         *  name, for example the occupation of a person, or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();

/* include <rolemixin> */

    private:
        MeiElement *b;
};

class Mei_noteGesMixIn {
    public:
        explicit Mei_noteGesMixIn(MeiElement *b);
        virtual ~Mei_noteGesMixIn();
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

/* include <pnummixin> */

    private:
        MeiElement *b;
};

class Mei_noteVisMixIn {
    public:
        explicit Mei_noteVisMixIn(MeiElement *b);
        virtual ~Mei_noteVisMixIn();
        /** \brief used to override the head shape normally used for the given duration.
         */
        MeiAttribute* getHeadshape();
        void setHeadshape(std::string _headshape);
        bool hasHeadshape();
        void removeHeadshape();

/* include <headshapemixin> */

    private:
        MeiElement *b;
};

class Mei_octaveMixIn {
    public:
        explicit Mei_octaveMixIn(MeiElement *b);
        virtual ~Mei_octaveMixIn();
        /** \brief captures written octave information.
         */
        MeiAttribute* getOct();
        void setOct(std::string _oct);
        bool hasOct();
        void removeOct();

/* include <octmixin> */

    private:
        MeiElement *b;
};

class Mei_octavedefaultMixIn {
    public:
        explicit Mei_octavedefaultMixIn(MeiElement *b);
        virtual ~Mei_octavedefaultMixIn();
        /** \brief contains a default octave specification for use when the first note, rest,
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

class Mei_octavedisplacementMixIn {
    public:
        explicit Mei_octavedisplacementMixIn(MeiElement *b);
        virtual ~Mei_octavedisplacementMixIn();
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

/* include <dis.placemixin> */

    private:
        MeiElement *b;
};

class Mei_onelinestaffMixIn {
    public:
        explicit Mei_onelinestaffMixIn(MeiElement *b);
        virtual ~Mei_onelinestaffMixIn();
        /** \brief determines the placement of notes on a 1-line staff.
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

class Mei_padLogMixIn {
    public:
        explicit Mei_padLogMixIn(MeiElement *b);
        virtual ~Mei_padLogMixIn();
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

class Mei_pbVisMixIn {
    public:
        explicit Mei_pbVisMixIn(MeiElement *b);
        virtual ~Mei_pbVisMixIn();
        /** \brief records the function of an accidental.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class Mei_pitchMixIn {
    public:
        explicit Mei_pitchMixIn(MeiElement *b);
        virtual ~Mei_pitchMixIn();
        /** \brief contains a written pitch name.
         */
        MeiAttribute* getPname();
        void setPname(std::string _pname);
        bool hasPname();
        void removePname();

/* include <pnamemixin> */

    private:
        MeiElement *b;
};

class Mei_placementMixIn {
    public:
        explicit Mei_placementMixIn(MeiElement *b);
        virtual ~Mei_placementMixIn();
        /** \brief specifies where this item is placed
         */
        MeiAttribute* getPlace();
        void setPlace(std::string _place);
        bool hasPlace();
        void removePlace();

/* include <placemixin> */

    private:
        MeiElement *b;
};

class Mei_plistMixIn {
    public:
        explicit Mei_plistMixIn(MeiElement *b);
        virtual ~Mei_plistMixIn();
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

/* include <evaluatemixin> */

    private:
        MeiElement *b;
};

class Mei_pointingMixIn {
    public:
        explicit Mei_pointingMixIn(MeiElement *b);
        virtual ~Mei_pointingMixIn();
        /** \brief 
         */
        MeiAttribute* getActuate();
        void setActuate(std::string _actuate);
        bool hasActuate();
        void removeActuate();
        /** \brief may be used to specify further information about the entity referenced by this
         *  name, for example the occupation of a person, or the status of a place.
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
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
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

class Mei_relativesizeMixIn {
    public:
        explicit Mei_relativesizeMixIn(MeiElement *b);
        virtual ~Mei_relativesizeMixIn();
        /** \brief specifies the size or approximate size of the group.
         */
        MeiAttribute* getSize();
        void setSize(std::string _size);
        bool hasSize();
        void removeSize();

/* include <sizemixin> */

    private:
        MeiElement *b;
};

class Mei_responsibilityMixIn {
    public:
        explicit Mei_responsibilityMixIn(MeiElement *b);
        virtual ~Mei_responsibilityMixIn();
        /** \brief indicates the agency responsible for the intervention or interpretation, for
         *  example an editor or transcriber.
         */
        MeiAttribute* getResp();
        void setResp(std::string _resp);
        bool hasResp();
        void removeResp();

/* include <respmixin> */

    private:
        MeiElement *b;
};

class Mei_sbVisMixIn {
    public:
        explicit Mei_sbVisMixIn(MeiElement *b);
        virtual ~Mei_sbVisMixIn();
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

class Mei_scalableMixIn {
    public:
        explicit Mei_scalableMixIn(MeiElement *b);
        virtual ~Mei_scalableMixIn();
        /** \brief Where the media are displayed, indicates a scale factor to be applied when
         *  generating the desired display size
         */
        MeiAttribute* getScale();
        void setScale(std::string _scale);
        bool hasScale();
        void removeScale();

/* include <scalemixin> */

    private:
        MeiElement *b;
};

class Mei_scoreDefGesMixIn {
    public:
        explicit Mei_scoreDefGesMixIn(MeiElement *b);
        virtual ~Mei_scoreDefGesMixIn();
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

/* include <tune.tempermixin> */

    private:
        MeiElement *b;
};

class Mei_scoreDefVisMixIn {
    public:
        explicit Mei_scoreDefVisMixIn(MeiElement *b);
        virtual ~Mei_scoreDefVisMixIn();
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

/* include <system.topmarmixin> */

    private:
        MeiElement *b;
};

class Mei_sectionVisMixIn {
    public:
        explicit Mei_sectionVisMixIn(MeiElement *b);
        virtual ~Mei_sectionVisMixIn();
        /** \brief indicates that staves begin again with this section.
         */
        MeiAttribute* getRestart();
        void setRestart(std::string _restart);
        bool hasRestart();
        void removeRestart();

/* include <restartmixin> */

    private:
        MeiElement *b;
};

class Mei_sequenceMixIn {
    public:
        explicit Mei_sequenceMixIn(MeiElement *b);
        virtual ~Mei_sequenceMixIn();
        /** \brief assigns a sequence number related to the order in which the encoded features
         *  carrying this attribute are believed to have occurred.
         */
        MeiAttribute* getSeq();
        void setSeq(std::string _seq);
        bool hasSeq();
        void removeSeq();

/* include <seqmixin> */

    private:
        MeiElement *b;
};

class Mei_slashcountMixIn {
    public:
        explicit Mei_slashcountMixIn(MeiElement *b);
        virtual ~Mei_slashcountMixIn();
        /** \brief indicates the number of slashes present.
         */
        MeiAttribute* getSlash();
        void setSlash(std::string _slash);
        bool hasSlash();
        void removeSlash();

/* include <slashmixin> */

    private:
        MeiElement *b;
};

class Mei_slurpresentMixIn {
    public:
        explicit Mei_slurpresentMixIn(MeiElement *b);
        virtual ~Mei_slurpresentMixIn();
        /** \brief indicates that this element participates in a slur.
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

class Mei_spaceVisMixIn {
    public:
        explicit Mei_spaceVisMixIn(MeiElement *b);
        virtual ~Mei_spaceVisMixIn();
        /** \brief indicates whether a space is 'compressible', i.e., if it may be removed at the
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

class Mei_staffLogMixIn {
    public:
        explicit Mei_staffLogMixIn(MeiElement *b);
        virtual ~Mei_staffLogMixIn();
        /** \brief provides a mechanism for linking the layer to a layerDef element.
         */
        MeiAttribute* getDef();
        void setDef(std::string _def);
        bool hasDef();
        void removeDef();

/* include <defmixin> */

    private:
        MeiElement *b;
};

class Mei_staffDefVisMixIn {
    public:
        explicit Mei_staffDefVisMixIn(MeiElement *b);
        virtual ~Mei_staffDefVisMixIn();
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

/* include <spacingmixin> */

    private:
        MeiElement *b;
};

class Mei_staffGrpVisMixIn {
    public:
        explicit Mei_staffGrpVisMixIn(MeiElement *b);
        virtual ~Mei_staffGrpVisMixIn();
        /** \brief indicates whether bar lines go across the space between staves (true) or are
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

class Mei_staffgroupingsymMixIn {
    public:
        explicit Mei_staffgroupingsymMixIn(MeiElement *b);
        virtual ~Mei_staffgroupingsymMixIn();
        /** \brief specifies the symbol used to group a set of staves.
         */
        MeiAttribute* getSymbol();
        void setSymbol(std::string _symbol);
        bool hasSymbol();
        void removeSymbol();

/* include <symbolmixin> */

    private:
        MeiElement *b;
};

class Mei_staffidentMixIn {
    public:
        explicit Mei_staffidentMixIn(MeiElement *b);
        virtual ~Mei_staffidentMixIn();
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

class Mei_stafflocMixIn {
    public:
        explicit Mei_stafflocMixIn(MeiElement *b);
        virtual ~Mei_stafflocMixIn();
        /** \brief indicates the location of the variation, when the location-referenced method of
         *  apparatus markup is used.
         */
        MeiAttribute* getLoc();
        void setLoc(std::string _loc);
        bool hasLoc();
        void removeLoc();

/* include <locmixin> */

    private:
        MeiElement *b;
};

class Mei_startendidMixIn {
    public:
        explicit Mei_startendidMixIn(MeiElement *b);
        virtual ~Mei_startendidMixIn();
        /** \brief indicates the final element in a sequence of events to which the feature
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

class Mei_startidMixIn {
    public:
        explicit Mei_startidMixIn(MeiElement *b);
        virtual ~Mei_startidMixIn();
        /** \brief holds a reference to the first element in a sequence of events to which the
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

class Mei_stemmedMixIn {
    public:
        explicit Mei_stemmedMixIn(MeiElement *b);
        virtual ~Mei_stemmedMixIn();
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

/* include <stem.ymixin> */

    private:
        MeiElement *b;
};

class Mei_sylLogMixIn {
    public:
        explicit Mei_sylLogMixIn(MeiElement *b);
        virtual ~Mei_sylLogMixIn();
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

/* include <wordposmixin> */

    private:
        MeiElement *b;
};

class Mei_syltextMixIn {
    public:
        explicit Mei_syltextMixIn(MeiElement *b);
        virtual ~Mei_syltextMixIn();
        /** \brief holds an associated sung text syllable.
         */
        MeiAttribute* getSyl();
        void setSyl(std::string _syl);
        bool hasSyl();
        void removeSyl();

/* include <sylmixin> */

    private:
        MeiElement *b;
};

class Mei_textstyleMixIn {
    public:
        explicit Mei_textstyleMixIn(MeiElement *b);
        virtual ~Mei_textstyleMixIn();
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

/* include <text.weightmixin> */

    private:
        MeiElement *b;
};

class Mei_tiepresentMixIn {
    public:
        explicit Mei_tiepresentMixIn(MeiElement *b);
        virtual ~Mei_tiepresentMixIn();
        /** \brief indicates that this element participates in a tie.
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

class Mei_timestampMusicalMixIn {
    public:
        explicit Mei_timestampMusicalMixIn(MeiElement *b);
        virtual ~Mei_timestampMusicalMixIn();
        /** \brief encodes the onset time in terms of musical time, i.e.,
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

class Mei_timestampPerformedMixIn {
    public:
        explicit Mei_timestampPerformedMixIn(MeiElement *b);
        virtual ~Mei_timestampPerformedMixIn();
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

/* include <tstamp.realmixin> */

    private:
        MeiElement *b;
};

class Mei_transpositionMixIn {
    public:
        explicit Mei_transpositionMixIn(MeiElement *b);
        virtual ~Mei_transpositionMixIn();
        /** \brief records the amount of diatonic pitch shift, e.g., C to C♯ = 0, C to D♭ = 1,
         *  necessary to calculate the sounded pitch from the written one.
         */
        MeiAttribute* getTransDiat();
        void setTransDiat(std::string _transdiat);
        bool hasTransDiat();
        void removeTransDiat();
        /** \brief records the amount of pitch shift in semitones, e.g., C to C♯ = 1, C to D♭ =
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

class Mei_tupletpresentMixIn {
    public:
        explicit Mei_tupletpresentMixIn(MeiElement *b);
        virtual ~Mei_tupletpresentMixIn();
        /** \brief indicates that this feature participates in a tuplet.
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

class Mei_typedMixIn {
    public:
        explicit Mei_typedMixIn(MeiElement *b);
        virtual ~Mei_typedMixIn();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief provides a sub-categorization of the element, if needed
         */
        MeiAttribute* getSubtype();
        void setSubtype(std::string _subtype);
        bool hasSubtype();
        void removeSubtype();

/* include <subtypemixin> */

    private:
        MeiElement *b;
};

class Mei_typographyMixIn {
    public:
        explicit Mei_typographyMixIn(MeiElement *b);
        virtual ~Mei_typographyMixIn();
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

/* include <fontweightmixin> */

    private:
        MeiElement *b;
};

class Mei_visibilityMixIn {
    public:
        explicit Mei_visibilityMixIn(MeiElement *b);
        virtual ~Mei_visibilityMixIn();
        /** \brief indicates if a feature should be rendered when the notation is presented
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

class Mei_visualoffsetHoMixIn {
    public:
        explicit Mei_visualoffsetHoMixIn(MeiElement *b);
        virtual ~Mei_visualoffsetHoMixIn();
        /** \brief records a horizontal adjustment to a feature's programmatically-determined
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

class Mei_visualoffsetToMixIn {
    public:
        explicit Mei_visualoffsetToMixIn(MeiElement *b);
        virtual ~Mei_visualoffsetToMixIn();
        /** \brief indicates the ending point of the period in standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getTo();
        void setTo(std::string _to);
        bool hasTo();
        void removeTo();

/* include <tomixin> */

    private:
        MeiElement *b;
};

class Mei_visualoffsetVoMixIn {
    public:
        explicit Mei_visualoffsetVoMixIn(MeiElement *b);
        virtual ~Mei_visualoffsetVoMixIn();
        /** \brief records the vertical adjustment of a feature's programmatically-determined
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

class Mei_visualoffset2HoMixIn {
    public:
        explicit Mei_visualoffset2HoMixIn(MeiElement *b);
        virtual ~Mei_visualoffset2HoMixIn();
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

/* include <endhomixin> */

    private:
        MeiElement *b;
};

class Mei_visualoffset2ToMixIn {
    public:
        explicit Mei_visualoffset2ToMixIn(MeiElement *b);
        virtual ~Mei_visualoffset2ToMixIn();
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

/* include <endtomixin> */

    private:
        MeiElement *b;
};

class Mei_visualoffset2VoMixIn {
    public:
        explicit Mei_visualoffset2VoMixIn(MeiElement *b);
        virtual ~Mei_visualoffset2VoMixIn();
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

/* include <endvomixin> */

    private:
        MeiElement *b;
};

class Mei_widthMixIn {
    public:
        explicit Mei_widthMixIn(MeiElement *b);
        virtual ~Mei_widthMixIn();
        /** \brief Where the media are displayed, indicates the display width
         */
        MeiAttribute* getWidth();
        void setWidth(std::string _width);
        bool hasWidth();
        void removeWidth();

/* include <widthmixin> */

    private:
        MeiElement *b;
};

class Mei_xyMixIn {
    public:
        explicit Mei_xyMixIn(MeiElement *b);
        virtual ~Mei_xyMixIn();
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

/* include <ymixin> */

    private:
        MeiElement *b;
};

class Mei_xy2MixIn {
    public:
        explicit Mei_xy2MixIn(MeiElement *b);
        virtual ~Mei_xy2MixIn();
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

/* include <y2mixin> */

    private:
        MeiElement *b;
};
}
#endif  // SHAREDMIXIN_H_
