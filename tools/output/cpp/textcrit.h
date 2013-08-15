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

#ifndef TEXTCRIT_H_
#define TEXTCRIT_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include "textcritmixins.h"
#include <string>


namespace mei {
/** \brief contains one entry in a critical apparatus, with an optional lemma and usually
 *  one or more reading or a note on the relevant passage.
 */
class MEI_EXPORT App : public MeiElement {
    public:
        App();
        App(const App& other);
        virtual ~App();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
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
        /** \brief indicates the location of the variation, when the location-referenced method of
         *  apparatus markup is used.
         */
        MeiAttribute* getLoc();
        void setLoc(std::string _loc);
        bool hasLoc();
        void removeLoc();

/* include <app> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(App);
};

/** \brief indicates the end of a lacuna in a mostly complete textual witness.
 */
class MEI_EXPORT LacunaEnd : public MeiElement {
    public:
        LacunaEnd();
        LacunaEnd(const LacunaEnd& other);
        virtual ~LacunaEnd();

/* include <lacunaEnd> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        RdgPartMixIn    m_RdgPart;

    private:
        REGISTER_DECLARATION(LacunaEnd);
};

/** \brief indicates the beginning of a lacuna in the text of a mostly complete textual
 *  witness.
 */
class MEI_EXPORT LacunaStart : public MeiElement {
    public:
        LacunaStart();
        LacunaStart(const LacunaStart& other);
        virtual ~LacunaStart();

/* include <lacunaStart> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        RdgPartMixIn    m_RdgPart;

    private:
        REGISTER_DECLARATION(LacunaStart);
};

/** \brief contains the lemma, or base text, of a textual variation.
 */
class MEI_EXPORT Lem : public MeiElement {
    public:
        Lem();
        Lem(const Lem& other);
        virtual ~Lem();

/* include <lem> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TextCriticalMixIn    m_TextCritical;
        ResponsibilityMixIn    m_Responsibility;
        WitnessedMixIn    m_Witnessed;

    private:
        REGISTER_DECLARATION(Lem);
};

/** \brief contains a list of apparatus entries.
 */
class MEI_EXPORT ListApp : public MeiElement {
    public:
        ListApp();
        ListApp(const ListApp& other);
        virtual ~ListApp();

/* include <listApp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;
        DeclarableMixIn    m_Declarable;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(ListApp);
};

/** \brief lists definitions for all the witnesses referred to by a critical apparatus,
 *  optionally grouped hierarchically.
 */
class MEI_EXPORT ListWit : public MeiElement {
    public:
        ListWit();
        ListWit(const ListWit& other);
        virtual ~ListWit();

/* include <listWit> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(ListWit);
};

/** \brief contains a single reading within a textual variation.
 */
class MEI_EXPORT Rdg : public MeiElement {
    public:
        Rdg();
        Rdg(const Rdg& other);
        virtual ~Rdg();

/* include <rdg> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TextCriticalMixIn    m_TextCritical;
        ResponsibilityMixIn    m_Responsibility;
        WitnessedMixIn    m_Witnessed;

    private:
        REGISTER_DECLARATION(Rdg);
};

/** \brief within a textual variation, groups two or more readings perceived to have a
 *  genetic relationship or other affinity.
 */
class MEI_EXPORT RdgGrp : public MeiElement {
    public:
        RdgGrp();
        RdgGrp(const RdgGrp& other);
        virtual ~RdgGrp();

/* include <rdgGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TextCriticalMixIn    m_TextCritical;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(RdgGrp);
};

/** \brief declares the method used to encode text-critical variants.
 */
class MEI_EXPORT VariantEncoding : public MeiElement {
    public:
        VariantEncoding();
        VariantEncoding(const VariantEncoding& other);
        virtual ~VariantEncoding();
        /** \brief indicates the method adopted to indicate corrections within the text.
         */
        MeiAttribute* getMethod();
        void setMethod(std::string _method);
        bool hasMethod();
        void removeMethod();
        /** \brief provides a reference to an
         */
        MeiAttribute* getLocation();
        void setLocation(std::string _location);
        bool hasLocation();
        void removeLocation();

/* include <variantEncoding> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(VariantEncoding);
};

/** \brief contains a list of one or more sigla of witnesses attesting a given reading, in
 *  a textual variation.
 */
class MEI_EXPORT Wit : public MeiElement {
    public:
        Wit();
        Wit(const Wit& other);
        virtual ~Wit();

/* include <wit> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        RdgPartMixIn    m_RdgPart;

    private:
        REGISTER_DECLARATION(Wit);
};

/** \brief gives further information about a particular witness, or witnesses, to a
 *  particular reading.
 */
class MEI_EXPORT WitDetail : public MeiElement {
    public:
        WitDetail();
        WitDetail(const WitDetail& other);
        virtual ~WitDetail();
        /** \brief indicates the sigil or sigla for the witnesses to which the detail refers.
         */
        MeiAttribute* getWit();
        void setWit(std::string _wit);
        bool hasWit();
        void removeWit();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <witDetail> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PlacementMixIn    m_Placement;
        ResponsibilityMixIn    m_Responsibility;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(WitDetail);
};

/** \brief indicates the end, or suspension, of the text of a fragmentary witness.
 */
class MEI_EXPORT WitEnd : public MeiElement {
    public:
        WitEnd();
        WitEnd(const WitEnd& other);
        virtual ~WitEnd();

/* include <witEnd> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        RdgPartMixIn    m_RdgPart;

    private:
        REGISTER_DECLARATION(WitEnd);
};

/** \brief indicates the beginning, or resumption, of the text of a fragmentary witness.
 */
class MEI_EXPORT WitStart : public MeiElement {
    public:
        WitStart();
        WitStart(const WitStart& other);
        virtual ~WitStart();

/* include <witStart> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        RdgPartMixIn    m_RdgPart;

    private:
        REGISTER_DECLARATION(WitStart);
};

/** \brief contains either a description of a single witness referred to within the
 *  critical apparatus, or a list of witnesses which is to be referred to by a
 *  single sigil.
 */
class MEI_EXPORT Witness : public MeiElement {
    public:
        Witness();
        Witness(const Witness& other);
        virtual ~Witness();

/* include <witness> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Witness);
};
}
#endif  // TEXTCRIT_H_
