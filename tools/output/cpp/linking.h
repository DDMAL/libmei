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

#ifndef LINKING_H_
#define LINKING_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include "versemixins.h"
#include <string>


namespace mei {
/** \brief contains any arbitrary component-level unit of text, acting as an anonymous
 *  container for phrase or inter level elements analogous to, but without the
 *  semantic baggage of, a paragraph.
 */
class MEI_EXPORT Ab : public MeiElement {
    public:
        Ab();
        Ab(const Ab& other);
        virtual ~Ab();

/* include <ab> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DeclaringMixIn    m_Declaring;
        FragmentableMixIn    m_Fragmentable;

    private:
        REGISTER_DECLARATION(Ab);
};

/** \brief identifies an alternation or a set of choices among elements or passages.
 */
class MEI_EXPORT Alt : public MeiElement {
    public:
        Alt();
        Alt(const Alt& other);
        virtual ~Alt();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();
        /** \brief specifies the identifiers of the elements or passages to be linked or
         *  associated.
         */
        MeiAttribute* getTargets();
        void setTargets(std::string _targets);
        bool hasTargets();
        void removeTargets();
        /** \brief specifies the mode of this channel with respect to speech and writing.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();
        /** \brief If
         */
        MeiAttribute* getWeights();
        void setWeights(std::string _weights);
        bool hasWeights();
        void removeWeights();

/* include <alt> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Alt);
};

/** \brief groups a collection of
 */
class MEI_EXPORT AltGrp : public MeiElement {
    public:
        AltGrp();
        AltGrp(const AltGrp& other);
        virtual ~AltGrp();
        /** \brief specifies the mode of this channel with respect to speech and writing.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <altGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingGroupMixIn    m_PointingGroup;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AltGrp);
};

/** \brief attaches an identifier to a point within a text, whether or not it corresponds
 *  with a textual element.
 */
class MEI_EXPORT Anchor : public MeiElement {
    public:
        Anchor();
        Anchor(const Anchor& other);
        virtual ~Anchor();

/* include <anchor> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Anchor);
};

/** \brief identifies a possibly fragmented segment of text, by pointing at the possibly
 *  discontiguous elements which compose it.
 */
class MEI_EXPORT Join : public MeiElement {
    public:
        Join();
        Join(const Join& other);
        virtual ~Join();
        /** \brief specifies the identifiers of the elements or passages to be linked or
         *  associated.
         */
        MeiAttribute* getTargets();
        void setTargets(std::string _targets);
        bool hasTargets();
        void removeTargets();
        /** \brief specifies the name of an element which this aggregation may be understood to
         *  represent.
         */
        MeiAttribute* getResult();
        void setResult(std::string _result);
        bool hasResult();
        void removeResult();
        /** \brief where the measurement summarizes more than one observation, specifies the
         *  applicability of this measurement.
         */
        MeiAttribute* getScope();
        void setScope(std::string _scope);
        bool hasScope();
        void removeScope();

/* include <join> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Join);
};

/** \brief groups a collection of join elements and possibly pointers.
 */
class MEI_EXPORT JoinGrp : public MeiElement {
    public:
        JoinGrp();
        JoinGrp(const JoinGrp& other);
        virtual ~JoinGrp();
        /** \brief specifies the name of an element which this aggregation may be understood to
         *  represent.
         */
        MeiAttribute* getResult();
        void setResult(std::string _result);
        bool hasResult();
        void removeResult();

/* include <joinGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingGroupMixIn    m_PointingGroup;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(JoinGrp);
};

/** \brief defines an association or hypertextual link among elements or passages, of some
 *  type not more precisely specifiable by other elements.
 */
class MEI_EXPORT Link : public MeiElement {
    public:
        Link();
        Link(const Link& other);
        virtual ~Link();
        /** \brief specifies the identifiers of the elements or passages to be linked or
         *  associated.
         */
        MeiAttribute* getTargets();
        void setTargets(std::string _targets);
        bool hasTargets();
        void removeTargets();

/* include <link> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Link);
};

/** \brief defines a collection of associations or hypertextual links.
 */
class MEI_EXPORT LinkGrp : public MeiElement {
    public:
        LinkGrp();
        LinkGrp(const LinkGrp& other);
        virtual ~LinkGrp();

/* include <linkGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingGroupMixIn    m_PointingGroup;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(LinkGrp);
};

/** \brief represents any segmentation of text below the
 */
class MEI_EXPORT Seg : public MeiElement {
    public:
        Seg();
        Seg(const Seg& other);
        virtual ~Seg();

/* include <seg> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SegLikeMixIn    m_SegLike;
        MetricalMixIn    m_Metrical;
        DatcatMixIn    m_Datcat;
        FragmentableMixIn    m_Fragmentable;
        TypedMixIn    m_Typed;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Seg);
};

/** \brief provides a set of ordered points in time which can be linked to elements of a
 *  spoken text to create a temporal alignment of that text.
 */
class MEI_EXPORT Timeline : public MeiElement {
    public:
        Timeline();
        Timeline(const Timeline& other);
        virtual ~Timeline();
        /** \brief designates the origin of the timeline, i.e.
         * 
         *  the time at which it begins.
         */
        MeiAttribute* getOrigin();
        void setOrigin(std::string _origin);
        bool hasOrigin();
        void removeOrigin();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();
        /** \brief specifies the numeric portion of a time interval
         */
        MeiAttribute* getInterval();
        void setInterval(std::string _interval);
        bool hasInterval();
        void removeInterval();

/* include <timeline> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Timeline);
};

/** \brief indicates a point in time either relative to other elements in the same timeline
 *  tag, or absolutely.
 */
class MEI_EXPORT When : public MeiElement {
    public:
        When();
        When(const When& other);
        virtual ~When();
        /** \brief supplies an absolute value for the time.
         */
        MeiAttribute* getAbsolute();
        void setAbsolute(std::string _absolute);
        bool hasAbsolute();
        void removeAbsolute();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();
        /** \brief specifies the numeric portion of a time interval
         */
        MeiAttribute* getInterval();
        void setInterval(std::string _interval);
        bool hasInterval();
        void removeInterval();
        /** \brief identifies the reference point for determining the time of the current
         */
        MeiAttribute* getSince();
        void setSince(std::string _since);
        bool hasSince();
        void removeSince();

/* include <when> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(When);
};
}
#endif  // LINKING_H_
