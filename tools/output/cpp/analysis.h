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

#ifndef ANALYSIS_H_
#define ANALYSIS_H_

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
/** \brief represents a character.
 */
class MEI_EXPORT C : public MeiElement {
    public:
        C();
        C(const C& other);
        virtual ~C();

/* include <c> */

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

    private:
        REGISTER_DECLARATION(C);
};

/** \brief represents a grammatical clause.
 */
class MEI_EXPORT Cl : public MeiElement {
    public:
        Cl();
        Cl(const Cl& other);
        virtual ~Cl();

/* include <cl> */

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

    private:
        REGISTER_DECLARATION(Cl);
};

/** \brief summarizes a specific interpretative annotation which can be linked to a span of
 *  text.
 */
class MEI_EXPORT Interp : public MeiElement {
    public:
        Interp();
        Interp(const Interp& other);
        virtual ~Interp();

/* include <interp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        InterpLikeMixIn    m_InterpLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Interp);
};

/** \brief collects together a set of related interpretations which share responsibility or
 *  type.
 */
class MEI_EXPORT InterpGrp : public MeiElement {
    public:
        InterpGrp();
        InterpGrp(const InterpGrp& other);
        virtual ~InterpGrp();

/* include <interpGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        InterpLikeMixIn    m_InterpLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(InterpGrp);
};

/** \brief represents a grammatical morpheme.
 */
class MEI_EXPORT M : public MeiElement {
    public:
        M();
        M(const M& other);
        virtual ~M();
        /** \brief identifies the morpheme's base form.
         */
        MeiAttribute* getBaseForm();
        void setBaseForm(std::string _baseForm);
        bool hasBaseForm();
        void removeBaseForm();

/* include <m> */

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

    private:
        REGISTER_DECLARATION(M);
};

/** \brief contains a character or string of characters regarded as constituting a single
 *  punctuation mark.
 */
class MEI_EXPORT Pc : public MeiElement {
    public:
        Pc();
        Pc(const Pc& other);
        virtual ~Pc();
        /** \brief indicates the extent to which this punctuation mark conventionally separates
         *  words or phrases
         */
        MeiAttribute* getForce();
        void setForce(std::string _force);
        bool hasForce();
        void removeForce();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();
        /** \brief indicates whether this punctuation mark precedes or follows the unit it
         *  delimits.
         */
        MeiAttribute* getPre();
        void setPre(std::string _pre);
        bool hasPre();
        void removePre();

/* include <pc> */

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

    private:
        REGISTER_DECLARATION(Pc);
};

/** \brief represents a grammatical phrase.
 */
class MEI_EXPORT Phr : public MeiElement {
    public:
        Phr();
        Phr(const Phr& other);
        virtual ~Phr();

/* include <phr> */

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

    private:
        REGISTER_DECLARATION(Phr);
};

/** \brief contains a sentence-like division of a text.
 */
class MEI_EXPORT S : public MeiElement {
    public:
        S();
        S(const S& other);
        virtual ~S();

/* include <s> */

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

    private:
        REGISTER_DECLARATION(S);
};

/** \brief associates an interpretative annotation directly with a span of text.
 */
class MEI_EXPORT Span : public MeiElement {
    public:
        Span();
        Span(const Span& other);
        virtual ~Span();
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

/* include <span> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        InterpLikeMixIn    m_InterpLike;
        ResponsibilityMixIn    m_Responsibility;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Span);
};

/** \brief collects together span tags.
 */
class MEI_EXPORT SpanGrp : public MeiElement {
    public:
        SpanGrp();
        SpanGrp(const SpanGrp& other);
        virtual ~SpanGrp();

/* include <spanGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        InterpLikeMixIn    m_InterpLike;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(SpanGrp);
};

/** \brief represents a grammatical (not necessarily orthographic) word.
 */
class MEI_EXPORT W : public MeiElement {
    public:
        W();
        W(const W& other);
        virtual ~W();
        /** \brief provides a lemma for the word, such as an uninflected dictionary entry form.
         */
        MeiAttribute* getLemma();
        void setLemma(std::string _lemma);
        bool hasLemma();
        void removeLemma();
        /** \brief provides a pointer to a definition of the lemma for the word, for example in an
         *  online lexicon.
         */
        MeiAttribute* getLemmaRef();
        void setLemmaRef(std::string _lemmaRef);
        bool hasLemmaRef();
        void removeLemmaRef();

/* include <w> */

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

    private:
        REGISTER_DECLARATION(W);
};
}
#endif  // ANALYSIS_H_
