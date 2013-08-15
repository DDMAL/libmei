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

#ifndef TEIMIXIN_H_
#define TEIMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AscribedMixIn {
    public:
        explicit AscribedMixIn(MeiElement *b);
        virtual ~AscribedMixIn();
        /** \brief indicates the person, or group of people, to whom the element content is
         *  ascribed.
         */
        MeiAttribute* getWho();
        void setWho(std::string _who);
        bool hasWho();
        void removeWho();

/* include <whomixin> */

    private:
        MeiElement *b;
};

class BreakingMixIn {
    public:
        explicit BreakingMixIn(MeiElement *b);
        virtual ~BreakingMixIn();
        /** \brief indicates whether or not the element bearing this attribute should be considered
         *  to mark the end of an orthographic token in the same way as whitespace.
         */
        MeiAttribute* getBreak();
        void setBreak(std::string _break);
        bool hasBreak();
        void removeBreak();

/* include <breakmixin> */

    private:
        MeiElement *b;
};

class CReferencingMixIn {
    public:
        explicit CReferencingMixIn(MeiElement *b);
        virtual ~CReferencingMixIn();
        /** \brief specifies the destination of the pointer by supplying a canonical reference from
         *  a scheme defined in a
         */
        MeiAttribute* getCRef();
        void setCRef(std::string _cRef);
        bool hasCRef();
        void removeCRef();

/* include <cRefmixin> */

    private:
        MeiElement *b;
};

class CanonicalMixIn {
    public:
        explicit CanonicalMixIn(MeiElement *b);
        virtual ~CanonicalMixIn();
        /** \brief provides an externally-defined means of identifying the entity (or entities)
         *  being named, using a coded value of some kind.
         */
        MeiAttribute* getKey();
        void setKey(std::string _key);
        bool hasKey();
        void removeKey();
        /** \brief provides an explicit means of locating a full definition for the entity being
         *  named by means of one or more URIs.
         */
        MeiAttribute* getRef();
        void setRef(std::string _ref);
        bool hasRef();
        void removeRef();

/* include <refmixin> */

    private:
        MeiElement *b;
};

class DamagedMixIn {
    public:
        explicit DamagedMixIn(MeiElement *b);
        virtual ~DamagedMixIn();
        /** \brief in the case of damage (deliberate defacement, inking out, etc.) assignable to a
         *  distinct hand, signifies the hand responsible for the damage.
         */
        MeiAttribute* getHand();
        void setHand(std::string _hand);
        bool hasHand();
        void removeHand();
        /** \brief categorizes the cause of the damage, if it can be identified.
         */
        MeiAttribute* getAgent();
        void setAgent(std::string _agent);
        bool hasAgent();
        void removeAgent();
        /** \brief signifies the degree of damage according to a convenient scale.
         * 
         *  The
         */
        MeiAttribute* getDegree();
        void setDegree(std::string _degree);
        bool hasDegree();
        void removeDegree();
        /** \brief assigns an arbitrary number to each stretch of damage regarded as forming part
         *  of the same physical phenomenon.
         */
        MeiAttribute* getGroup();
        void setGroup(std::string _group);
        bool hasGroup();
        void removeGroup();

/* include <groupmixin> */

    private:
        MeiElement *b;
};

class DatableMixIn {
    public:
        explicit DatableMixIn(MeiElement *b);
        virtual ~DatableMixIn();
        /** \brief indicates the system or calendar to which the date represented by the content of
         *  this element belongs.
         */
        MeiAttribute* getCalendar();
        void setCalendar(std::string _calendar);
        bool hasCalendar();
        void removeCalendar();
        /** \brief supplies a pointer to some location defining a named period of time within which
         *  the datable item is understood to have occurred.
         */
        MeiAttribute* getPeriod();
        void setPeriod(std::string _period);
        bool hasPeriod();
        void removePeriod();

/* include <periodmixin> */

    private:
        MeiElement *b;
};

class DatableW3cMixIn {
    public:
        explicit DatableW3cMixIn(MeiElement *b);
        virtual ~DatableW3cMixIn();
        /** \brief supplies the value of the date or time in a standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getWhen();
        void setWhen(std::string _when);
        bool hasWhen();
        void removeWhen();
        /** \brief specifies the earliest possible date for the event in standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getNotBefore();
        void setNotBefore(std::string _notBefore);
        bool hasNotBefore();
        void removeNotBefore();
        /** \brief specifies the latest possible date for the event in standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getNotAfter();
        void setNotAfter(std::string _notAfter);
        bool hasNotAfter();
        void removeNotAfter();
        /** \brief indicates the starting point of the period in standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getFrom();
        void setFrom(std::string _from);
        bool hasFrom();
        void removeFrom();
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

class DatcatMixIn {
    public:
        explicit DatcatMixIn(MeiElement *b);
        virtual ~DatcatMixIn();
        /** \brief contains a PID (persistent identifier) that aligns the given element with the
         *  appropriate Data Category (or categories) in ISOcat.
         */
        MeiAttribute* getDatcat();
        void setDatcat(std::string _datcat);
        bool hasDatcat();
        void removeDatcat();
        /** \brief contains a PID (persistent identifier) that aligns the content of the given
         *  element or the value of the given attribute with the appropriate simple Data
         *  Category (or categories) in ISOcat.
         */
        MeiAttribute* getValueDatcat();
        void setValueDatcat(std::string _valueDatcat);
        bool hasValueDatcat();
        void removeValueDatcat();

/* include <valueDatcatmixin> */

    private:
        MeiElement *b;
};

class DeclarableMixIn {
    public:
        explicit DeclarableMixIn(MeiElement *b);
        virtual ~DeclarableMixIn();
        /** \brief indicates whether or not this element is selected by default when its parent is
         *  selected.
         */
        MeiAttribute* getDefault();
        void setDefault(std::string _default);
        bool hasDefault();
        void removeDefault();

/* include <defaultmixin> */

    private:
        MeiElement *b;
};

class DeclaringMixIn {
    public:
        explicit DeclaringMixIn(MeiElement *b);
        virtual ~DeclaringMixIn();
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

class DimensionsMixIn {
    public:
        explicit DimensionsMixIn(MeiElement *b);
        virtual ~DimensionsMixIn();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();
        /** \brief specifies the length in the units specified
         */
        MeiAttribute* getQuantity();
        void setQuantity(std::string _quantity);
        bool hasQuantity();
        void removeQuantity();
        /** \brief indicates the size of the object concerned using a project-specific vocabulary
         *  combining quantity and units in a single string of words.
         */
        MeiAttribute* getExtent();
        void setExtent(std::string _extent);
        bool hasExtent();
        void removeExtent();
        /** \brief characterizes the precision of the values specified by the other attributes.
         */
        MeiAttribute* getPrecision();
        void setPrecision(std::string _precision);
        bool hasPrecision();
        void removePrecision();
        /** \brief where the measurement summarizes more than one observation, specifies the
         *  applicability of this measurement.
         */
        MeiAttribute* getScope();
        void setScope(std::string _scope);
        bool hasScope();
        void removeScope();

/* include <scopemixin> */

    private:
        MeiElement *b;
};

class DivLikeMixIn {
    public:
        explicit DivLikeMixIn(MeiElement *b);
        virtual ~DivLikeMixIn();
        /** \brief specifies how the content of the division is organized.
         */
        MeiAttribute* getOrg();
        void setOrg(std::string _org);
        bool hasOrg();
        void removeOrg();
        /** \brief indicates whether this division is a sample of the original source and if so,
         *  from which part.
         */
        MeiAttribute* getSample();
        void setSample(std::string _sample);
        bool hasSample();
        void removeSample();

/* include <samplemixin> */

    private:
        MeiElement *b;
};

class DocStatusMixIn {
    public:
        explicit DocStatusMixIn(MeiElement *b);
        virtual ~DocStatusMixIn();
        /** \brief describes the status of a document either currently or, when associated with a
         *  dated element, at the time indicated.
         */
        MeiAttribute* getStatus();
        void setStatus(std::string _status);
        bool hasStatus();
        void removeStatus();

/* include <statusmixin> */

    private:
        MeiElement *b;
};

class DurationIsoMixIn {
    public:
        explicit DurationIsoMixIn(MeiElement *b);
        virtual ~DurationIsoMixIn();
        /** \brief indicates the length of this element in time.
         */
        MeiAttribute* getDur-iso();
        void setDur-iso(std::string _dur-iso);
        bool hasDur-iso();
        void removeDur-iso();

/* include <dur-isomixin> */

    private:
        MeiElement *b;
};

class DurationW3cMixIn {
    public:
        explicit DurationW3cMixIn(MeiElement *b);
        virtual ~DurationW3cMixIn();
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

class EditLikeMixIn {
    public:
        explicit EditLikeMixIn(MeiElement *b);
        virtual ~EditLikeMixIn();
        /** \brief indicates the nature of the evidence supporting the reliability or accuracy of
         *  the intervention or interpretation.
         */
        MeiAttribute* getEvidence();
        void setEvidence(std::string _evidence);
        bool hasEvidence();
        void removeEvidence();
        /** \brief contains a list of one or more pointers indicating sources supporting the given
         *  intervention or interpretation.
         */
        MeiAttribute* getSource();
        void setSource(std::string _source);
        bool hasSource();
        void removeSource();
        /** \brief indicates whether this is an instant revision or not.
         */
        MeiAttribute* getInstant();
        void setInstant(std::string _instant);
        bool hasInstant();
        void removeInstant();

/* include <instantmixin> */

    private:
        MeiElement *b;
};

class EditionMixIn {
    public:
        explicit EditionMixIn(MeiElement *b);
        virtual ~EditionMixIn();
        /** \brief supplies an arbitrary identifier for the source edition in which the associated
         *  feature (for example, a page, column, or line break) occurs at this point in the
         *  text.
         */
        MeiAttribute* getEd();
        void setEd(std::string _ed);
        bool hasEd();
        void removeEd();
        /** \brief provides a pointer to the source edition in which the associated feature (for
         *  example, a page, column, or line break) occurs at this point in the text.
         */
        MeiAttribute* getEdRef();
        void setEdRef(std::string _edRef);
        bool hasEdRef();
        void removeEdRef();

/* include <edRefmixin> */

    private:
        MeiElement *b;
};

class FragmentableMixIn {
    public:
        explicit FragmentableMixIn(MeiElement *b);
        virtual ~FragmentableMixIn();
        /** \brief specifies whether or not its parent element is fragmented in some way, typically
         *  by some other overlapping structure: for example a speech which is divided
         *  between two or more verse stanzas, a paragraph which is split across a page
         *  division, a verse line which is divided between two speakers.
         */
        MeiAttribute* getPart();
        void setPart(std::string _part);
        bool hasPart();
        void removePart();

/* include <partmixin> */

    private:
        MeiElement *b;
};

class GlobalMixIn {
    public:
        explicit GlobalMixIn(MeiElement *b);
        virtual ~GlobalMixIn();
        /** \brief 
         */
        MeiAttribute* getId();
        void setId(std::string _id);
        bool hasId();
        void removeId();
        /** \brief gives a number (or other label) for an element, which is not necessarily unique
         *  within the document.
         */
        MeiAttribute* getN();
        void setN(std::string _n);
        bool hasN();
        void removeN();
        /** \brief a name identifying the formal language in which the code is expressed
         */
        MeiAttribute* getLang();
        void setLang(std::string _lang);
        bool hasLang();
        void removeLang();
        /** \brief indicates how the element in question was rendered or presented in the source
         *  text.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();
        /** \brief contains an expression in some formal style definition language which defines
         *  the rendering or presentation used for this element in the source text
         */
        MeiAttribute* getStyle();
        void setStyle(std::string _style);
        bool hasStyle();
        void removeStyle();
        /** \brief points to a description of the rendering or presentation used for this element
         *  in the source text.
         */
        MeiAttribute* getRendition();
        void setRendition(std::string _rendition);
        bool hasRendition();
        void removeRendition();
        /** \brief 
         */
        MeiAttribute* getBase();
        void setBase(std::string _base);
        bool hasBase();
        void removeBase();
        /** \brief specifies how the phrase is distinct diatopically
         */
        MeiAttribute* getSpace();
        void setSpace(std::string _space);
        bool hasSpace();
        void removeSpace();

/* include <spacemixin> */

    private:
        MeiElement *b;
};

class HandFeaturesMixIn {
    public:
        explicit HandFeaturesMixIn(MeiElement *b);
        virtual ~HandFeaturesMixIn();
        /** \brief gives a name or other identifier for the scribe believed to be responsible for
         *  this hand.
         */
        MeiAttribute* getScribe();
        void setScribe(std::string _scribe);
        bool hasScribe();
        void removeScribe();
        /** \brief points to a full description of the scribe concerned, typically supplied by a
         */
        MeiAttribute* getScribeRef();
        void setScribeRef(std::string _scribeRef);
        bool hasScribeRef();
        void removeScribeRef();
        /** \brief characterizes the particular script or writing style used by this hand, for
         *  example
         */
        MeiAttribute* getScript();
        void setScript(std::string _script);
        bool hasScript();
        void removeScript();
        /** \brief points to a full description of the script or writing style used by this hand,
         *  typically supplied by a
         */
        MeiAttribute* getScriptRef();
        void setScriptRef(std::string _scriptRef);
        bool hasScriptRef();
        void removeScriptRef();
        /** \brief describes the tint or type of ink, e.g.
         */
        MeiAttribute* getMedium();
        void setMedium(std::string _medium);
        bool hasMedium();
        void removeMedium();
        /** \brief where the measurement summarizes more than one observation, specifies the
         *  applicability of this measurement.
         */
        MeiAttribute* getScope();
        void setScope(std::string _scope);
        bool hasScope();
        void removeScope();

/* include <scopemixin> */

    private:
        MeiElement *b;
};

class InternetMediaMixIn {
    public:
        explicit InternetMediaMixIn(MeiElement *b);
        virtual ~InternetMediaMixIn();
        /** \brief specifies the applicable multimedia internet mail extension (MIME) media type
         */
        MeiAttribute* getMimeType();
        void setMimeType(std::string _mimeType);
        bool hasMimeType();
        void removeMimeType();

/* include <mimeTypemixin> */

    private:
        MeiElement *b;
};

class InterpLikeMixIn {
    public:
        explicit InterpLikeMixIn(MeiElement *b);
        virtual ~InterpLikeMixIn();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief points to instances of the analysis or interpretation represented by the current
         *  element.
         */
        MeiAttribute* getInst();
        void setInst(std::string _inst);
        bool hasInst();
        void removeInst();

/* include <instmixin> */

    private:
        MeiElement *b;
};

class MeasurementMixIn {
    public:
        explicit MeasurementMixIn(MeiElement *b);
        virtual ~MeasurementMixIn();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();
        /** \brief specifies the length in the units specified
         */
        MeiAttribute* getQuantity();
        void setQuantity(std::string _quantity);
        bool hasQuantity();
        void removeQuantity();
        /** \brief indicates the substance that is being measured
         */
        MeiAttribute* getCommodity();
        void setCommodity(std::string _commodity);
        bool hasCommodity();
        void removeCommodity();

/* include <commoditymixin> */

    private:
        MeiElement *b;
};

class MediaMixIn {
    public:
        explicit MediaMixIn(MeiElement *b);
        virtual ~MediaMixIn();
        /** \brief Where the media are displayed, indicates the display width
         */
        MeiAttribute* getWidth();
        void setWidth(std::string _width);
        bool hasWidth();
        void removeWidth();
        /** \brief Where the media are displayed, indicates the display height
         */
        MeiAttribute* getHeight();
        void setHeight(std::string _height);
        bool hasHeight();
        void removeHeight();
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

class NamingMixIn {
    public:
        explicit NamingMixIn(MeiElement *b);
        virtual ~NamingMixIn();
        /** \brief may be used to specify further information about the entity referenced by this
         *  name, for example the occupation of a person, or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();
        /** \brief provides a means of locating the canonical form (
         */
        MeiAttribute* getNymRef();
        void setNymRef(std::string _nymRef);
        bool hasNymRef();
        void removeNymRef();

/* include <nymRefmixin> */

    private:
        MeiElement *b;
};

class PersonalMixIn {
    public:
        explicit PersonalMixIn(MeiElement *b);
        virtual ~PersonalMixIn();
        /** \brief indicates whether the name component is given in full, as an abbreviation or
         *  simply as an initial.
         */
        MeiAttribute* getFull();
        void setFull(std::string _full);
        bool hasFull();
        void removeFull();
        /** \brief specifies the sort order of the name component in relation to others within the
         *  name.
         */
        MeiAttribute* getSort();
        void setSort(std::string _sort);
        bool hasSort();
        void removeSort();

/* include <sortmixin> */

    private:
        MeiElement *b;
};

class PlacementMixIn {
    public:
        explicit PlacementMixIn(MeiElement *b);
        virtual ~PlacementMixIn();
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

class PointingMixIn {
    public:
        explicit PointingMixIn(MeiElement *b);
        virtual ~PointingMixIn();
        /** \brief specifies the language of the content to be found at the destination referenced
         *  by
         */
        MeiAttribute* getTargetLang();
        void setTargetLang(std::string _targetLang);
        bool hasTargetLang();
        void removeTargetLang();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();
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

class PointingGroupMixIn {
    public:
        explicit PointingGroupMixIn(MeiElement *b);
        virtual ~PointingGroupMixIn();
        /** \brief optionally specifies the identifiers of the elements within which all elements
         *  indicated by the contents of this element lie.
         */
        MeiAttribute* getDomains();
        void setDomains(std::string _domains);
        bool hasDomains();
        void removeDomains();
        /** \brief describes the function of each of the values of the
         */
        MeiAttribute* getTargFunc();
        void setTargFunc(std::string _targFunc);
        bool hasTargFunc();
        void removeTargFunc();

/* include <targFuncmixin> */

    private:
        MeiElement *b;
};

class RangingMixIn {
    public:
        explicit RangingMixIn(MeiElement *b);
        virtual ~RangingMixIn();
        /** \brief gives a minimum estimated value for the approximate measurement.
         */
        MeiAttribute* getAtLeast();
        void setAtLeast(std::string _atLeast);
        bool hasAtLeast();
        void removeAtLeast();
        /** \brief gives a maximum estimated value for the approximate measurement.
         */
        MeiAttribute* getAtMost();
        void setAtMost(std::string _atMost);
        bool hasAtMost();
        void removeAtMost();
        /** \brief where the measurement summarizes more than one observation or a range, supplies
         *  the minimum value observed.
         */
        MeiAttribute* getMin();
        void setMin(std::string _min);
        bool hasMin();
        void removeMin();
        /** \brief where the measurement summarizes more than one observation or a range, supplies
         *  the maximum value observed.
         */
        MeiAttribute* getMax();
        void setMax(std::string _max);
        bool hasMax();
        void removeMax();
        /** \brief specifies the degree of statistical confidence (between zero and one) that a
         *  value falls within the range specified by
         */
        MeiAttribute* getConfidence();
        void setConfidence(std::string _confidence);
        bool hasConfidence();
        void removeConfidence();

/* include <confidencemixin> */

    private:
        MeiElement *b;
};

class ReadFromMixIn {
    public:
        explicit ReadFromMixIn(MeiElement *b);
        virtual ~ReadFromMixIn();
        /** \brief contains a list of one or more pointers indicating sources supporting the given
         *  intervention or interpretation.
         */
        MeiAttribute* getSource();
        void setSource(std::string _source);
        bool hasSource();
        void removeSource();

/* include <sourcemixin> */

    private:
        MeiElement *b;
};

class ResourcedMixIn {
    public:
        explicit ResourcedMixIn(MeiElement *b);
        virtual ~ResourcedMixIn();
        /** \brief specifies the URL from which the media concerned may be obtained.
         */
        MeiAttribute* getUrl();
        void setUrl(std::string _url);
        bool hasUrl();
        void removeUrl();

/* include <urlmixin> */

    private:
        MeiElement *b;
};

class ResponsibilityMixIn {
    public:
        explicit ResponsibilityMixIn(MeiElement *b);
        virtual ~ResponsibilityMixIn();
        /** \brief signifies the degree of certainty associated with the intervention or
         *  interpretation.
         */
        MeiAttribute* getCert();
        void setCert(std::string _cert);
        bool hasCert();
        void removeCert();
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

class ScopingMixIn {
    public:
        explicit ScopingMixIn(MeiElement *b);
        virtual ~ScopingMixIn();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();
        /** \brief supplies an arbitrary XPath expression identifying a set of nodes, selected
         *  within the context identified by the
         */
        MeiAttribute* getMatch();
        void setMatch(std::string _match);
        bool hasMatch();
        void removeMatch();

/* include <matchmixin> */

    private:
        MeiElement *b;
};

class SegLikeMixIn {
    public:
        explicit SegLikeMixIn(MeiElement *b);
        virtual ~SegLikeMixIn();
        /** \brief characterizes the function of the segment.
         */
        MeiAttribute* getFunction();
        void setFunction(std::string _function);
        bool hasFunction();
        void removeFunction();

/* include <functionmixin> */

    private:
        MeiElement *b;
};

class SortableMixIn {
    public:
        explicit SortableMixIn(MeiElement *b);
        virtual ~SortableMixIn();
        /** \brief supplies the sort key for this element in an index, list or group which contains
         *  it.
         */
        MeiAttribute* getSortKey();
        void setSortKey(std::string _sortKey);
        bool hasSortKey();
        void removeSortKey();

/* include <sortKeymixin> */

    private:
        MeiElement *b;
};

class SourceMixIn {
    public:
        explicit SourceMixIn(MeiElement *b);
        virtual ~SourceMixIn();
        /** \brief contains a list of one or more pointers indicating sources supporting the given
         *  intervention or interpretation.
         */
        MeiAttribute* getSource();
        void setSource(std::string _source);
        bool hasSource();
        void removeSource();

/* include <sourcemixin> */

    private:
        MeiElement *b;
};

class SpanningMixIn {
    public:
        explicit SpanningMixIn(MeiElement *b);
        virtual ~SpanningMixIn();
        /** \brief indicates the end of a span initiated by the element bearing this attribute.
         */
        MeiAttribute* getSpanTo();
        void setSpanTo(std::string _spanTo);
        bool hasSpanTo();
        void removeSpanTo();

/* include <spanTomixin> */

    private:
        MeiElement *b;
};

class StyleDefMixIn {
    public:
        explicit StyleDefMixIn(MeiElement *b);
        virtual ~StyleDefMixIn();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();
        /** \brief supplies a version number for the style language provided in
         */
        MeiAttribute* getSchemeVersion();
        void setSchemeVersion(std::string _schemeVersion);
        bool hasSchemeVersion();
        void removeSchemeVersion();

/* include <schemeVersionmixin> */

    private:
        MeiElement *b;
};

class TableDecorationMixIn {
    public:
        explicit TableDecorationMixIn(MeiElement *b);
        virtual ~TableDecorationMixIn();
        /** \brief may be used to specify further information about the entity referenced by this
         *  name, for example the occupation of a person, or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();
        /** \brief indicates the number of rows occupied by this cell or row.
         */
        MeiAttribute* getRows();
        void setRows(std::string _rows);
        bool hasRows();
        void removeRows();
        /** \brief indicates the number of columns occupied by this cell or row.
         */
        MeiAttribute* getCols();
        void setCols(std::string _cols);
        bool hasCols();
        void removeCols();

/* include <colsmixin> */

    private:
        MeiElement *b;
};

class TimedMixIn {
    public:
        explicit TimedMixIn(MeiElement *b);
        virtual ~TimedMixIn();
        /** \brief indicates the location within a temporal alignment at which this element begins.
         */
        MeiAttribute* getStart();
        void setStart(std::string _start);
        bool hasStart();
        void removeStart();
        /** \brief indicates the location within a temporal alignment at which this element ends.
         */
        MeiAttribute* getEnd();
        void setEnd(std::string _end);
        bool hasEnd();
        void removeEnd();

/* include <endmixin> */

    private:
        MeiElement *b;
};

class TranscriptionalMixIn {
    public:
        explicit TranscriptionalMixIn(MeiElement *b);
        virtual ~TranscriptionalMixIn();
        /** \brief in the case of damage (deliberate defacement, inking out, etc.) assignable to a
         *  distinct hand, signifies the hand responsible for the damage.
         */
        MeiAttribute* getHand();
        void setHand(std::string _hand);
        bool hasHand();
        void removeHand();
        /** \brief describes the status of a document either currently or, when associated with a
         *  dated element, at the time indicated.
         */
        MeiAttribute* getStatus();
        void setStatus(std::string _status);
        bool hasStatus();
        void removeStatus();
        /** \brief documents the presumed cause for the intervention.
         */
        MeiAttribute* getCause();
        void setCause(std::string _cause);
        bool hasCause();
        void removeCause();
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

class TranslatableMixIn {
    public:
        explicit TranslatableMixIn(MeiElement *b);
        virtual ~TranslatableMixIn();
        /** \brief specifies the date on which the source text was extracted and sent to the
         *  translator
         */
        MeiAttribute* getVersionDate();
        void setVersionDate(std::string _versionDate);
        bool hasVersionDate();
        void removeVersionDate();

/* include <versionDatemixin> */

    private:
        MeiElement *b;
};

class TypedMixIn {
    public:
        explicit TypedMixIn(MeiElement *b);
        virtual ~TypedMixIn();
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
}
#endif  // TEIMIXIN_H_
