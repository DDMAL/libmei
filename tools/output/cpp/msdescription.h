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

#ifndef MSDESCRIPTION_H_
#define MSDESCRIPTION_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include "namesdatesmixins.h"
#include "msdescriptionmixins.h"
#include <string>


namespace mei {
/** \brief contains details of any significant additional material which may be closely
 *  associated with the manuscript being described, such as non-contemporaneous
 *  documents or fragments bound in with the manuscript at some earlier historical
 *  period.
 */
class MEI_EXPORT AccMat : public MeiElement {
    public:
        AccMat();
        AccMat(const AccMat& other);
        virtual ~AccMat();

/* include <accMat> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AccMat);
};

/** \brief contains any descriptive or other information concerning the process by which a
 *  manuscript or manuscript part entered the holding institution.
 */
class MEI_EXPORT Acquisition : public MeiElement {
    public:
        Acquisition();
        Acquisition(const Acquisition& other);
        virtual ~Acquisition();

/* include <acquisition> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Acquisition);
};

/** \brief groups additional information, combining bibliographic information about a
 *  manuscript, or surrogate copies of it with curatorial or administrative
 *  information.
 */
class MEI_EXPORT Additional : public MeiElement {
    public:
        Additional();
        Additional(const Additional& other);
        virtual ~Additional();

/* include <additional> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Additional);
};

/** \brief contains a description of any significant additions found within a manuscript,
 *  such as marginalia or other annotations.
 */
class MEI_EXPORT Additions : public MeiElement {
    public:
        Additions();
        Additions(const Additions& other);
        virtual ~Additions();

/* include <additions> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Additions);
};

/** \brief contains information about the present custody and availability of the
 *  manuscript, and also about the record description itself.
 */
class MEI_EXPORT AdminInfo : public MeiElement {
    public:
        AdminInfo();
        AdminInfo(const AdminInfo& other);
        virtual ~AdminInfo();

/* include <adminInfo> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(AdminInfo);
};

/** \brief contains an alternative or former structured identifier used for a manuscript,
 *  such as a former catalogue number.
 */
class MEI_EXPORT AltIdentifier : public MeiElement {
    public:
        AltIdentifier();
        AltIdentifier(const AltIdentifier& other);
        virtual ~AltIdentifier();

/* include <altIdentifier> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AltIdentifier);
};

/** \brief contains a description of one binding, i.e.
 * 
 *  type of covering, boards, etc. applied to a manuscript.
 */
class MEI_EXPORT Binding : public MeiElement {
    public:
        Binding();
        Binding(const Binding& other);
        virtual ~Binding();
        /** \brief specifies whether or not the binding is contemporary with the majority of its
         *  contents
         */
        MeiAttribute* getContemporary();
        void setContemporary(std::string _contemporary);
        bool hasContemporary();
        void removeContemporary();

/* include <binding> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Binding);
};

/** \brief describes the present and former bindings of a manuscript, either as a series of
 *  paragraphs or as a series of distinct
 */
class MEI_EXPORT BindingDesc : public MeiElement {
    public:
        BindingDesc();
        BindingDesc(const BindingDesc& other);
        virtual ~BindingDesc();

/* include <bindingDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(BindingDesc);
};

/** \brief describes the system used to ensure correct ordering of the quires making up a
 *  codex or incunable, typically by means of annotations at the foot of the page.
 */
class MEI_EXPORT Catchwords : public MeiElement {
    public:
        Catchwords();
        Catchwords(const Catchwords& other);
        virtual ~Catchwords();

/* include <catchwords> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Catchwords);
};

/** \brief contains a description of how the leaves or bifolia are physically arranged.
 */
class MEI_EXPORT Collation : public MeiElement {
    public:
        Collation();
        Collation(const Collation& other);
        virtual ~Collation();

/* include <collation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Collation);
};

/** \brief contains the name of a collection of manuscripts, not necessarily located within
 *  a single repository.
 */
class MEI_EXPORT Collection : public MeiElement {
    public:
        Collection();
        Collection(const Collection& other);
        virtual ~Collection();

/* include <collection> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Collection);
};

/** \brief contains the
 */
class MEI_EXPORT Colophon : public MeiElement {
    public:
        Colophon();
        Colophon(const Colophon& other);
        virtual ~Colophon();

/* include <colophon> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Colophon);
};

/** \brief contains a description of the physical condition of the manuscript.
 */
class MEI_EXPORT Condition : public MeiElement {
    public:
        Condition();
        Condition(const Condition& other);
        virtual ~Condition();

/* include <condition> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Condition);
};

/** \brief describes a single event during the custodial history of a manuscript.
 */
class MEI_EXPORT CustEvent : public MeiElement {
    public:
        CustEvent();
        CustEvent(const CustEvent& other);
        virtual ~CustEvent();

/* include <custEvent> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(CustEvent);
};

/** \brief contains a description of a manuscript's custodial history, either as running
 *  prose or as a series of dated custodial events.
 */
class MEI_EXPORT CustodialHist : public MeiElement {
    public:
        CustodialHist();
        CustodialHist(const CustodialHist& other);
        virtual ~CustodialHist();

/* include <custodialHist> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(CustodialHist);
};

/** \brief contains a description of the decoration of a manuscript, either as a sequence
 *  of paragraphs, or as a sequence of topically organized
 */
class MEI_EXPORT DecoDesc : public MeiElement {
    public:
        DecoDesc();
        DecoDesc(const DecoDesc& other);
        virtual ~DecoDesc();

/* include <decoDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(DecoDesc);
};

/** \brief contains a note describing either a decorative component of a manuscript, or a
 *  fairly homogenous class of such components.
 */
class MEI_EXPORT DecoNote : public MeiElement {
    public:
        DecoNote();
        DecoNote(const DecoNote& other);
        virtual ~DecoNote();

/* include <decoNote> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(DecoNote);
};

/** \brief contains a measurement measured across the spine of a book or codex, or (for
 *  other text-bearing objects) perpendicular to the measurement given by the
 */
class MEI_EXPORT Depth : public MeiElement {
    public:
        Depth();
        Depth(const Depth& other);
        virtual ~Depth();

/* include <depth> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Depth);
};

/** \brief contains any single measurement forming part of a dimensional specification of
 *  some sort.
 */
class MEI_EXPORT Dim : public MeiElement {
    public:
        Dim();
        Dim(const Dim& other);
        virtual ~Dim();

/* include <dim> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Dim);
};

/** \brief contains a dimensional specification.
 */
class MEI_EXPORT Dimensions : public MeiElement {
    public:
        Dimensions();
        Dimensions(const Dimensions& other);
        virtual ~Dimensions();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <dimensions> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Dimensions);
};

/** \brief contains the
 */
class MEI_EXPORT Explicit : public MeiElement {
    public:
        Explicit();
        Explicit(const Explicit& other);
        virtual ~Explicit();

/* include <explicit> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        MsExcerptMixIn    m_MsExcerpt;

    private:
        REGISTER_DECLARATION(Explicit);
};

/** \brief contains information concerning the manuscript's
 */
class MEI_EXPORT Filiation : public MeiElement {
    public:
        Filiation();
        Filiation(const Filiation& other);
        virtual ~Filiation();

/* include <filiation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Filiation);
};

/** \brief contains the string of words that denotes the end of a text division, often with
 *  an assertion as to its author and title, usually set off from the text itself by
 *  red ink, by a different size or type of script, or by some other such visual
 *  device.
 */
class MEI_EXPORT FinalRubric : public MeiElement {
    public:
        FinalRubric();
        FinalRubric(const FinalRubric& other);
        virtual ~FinalRubric();

/* include <finalRubric> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(FinalRubric);
};

/** \brief describes the numbering system or systems used to count the leaves or pages in a
 *  codex.
 */
class MEI_EXPORT Foliation : public MeiElement {
    public:
        Foliation();
        Foliation(const Foliation& other);
        virtual ~Foliation();

/* include <foliation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Foliation);
};

/** \brief contains a description of all the different kinds of writing used in a
 *  manuscript.
 */
class MEI_EXPORT HandDesc : public MeiElement {
    public:
        HandDesc();
        HandDesc(const HandDesc& other);
        virtual ~HandDesc();
        /** \brief specifies the number of distinct hands identified within the manuscript
         */
        MeiAttribute* getHands();
        void setHands(std::string _hands);
        bool hasHands();
        void removeHands();

/* include <handDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(HandDesc);
};

/** \brief contains a measurement measured along the axis at right angles to the bottom of
 *  the written surface, i.e.
 * 
 *  parallel to the spine for a codex or book.
 */
class MEI_EXPORT Height : public MeiElement {
    public:
        Height();
        Height(const Height& other);
        virtual ~Height();

/* include <height> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Height);
};

/** \brief contains a heraldic formula or phrase, typically found as part of a blazon, coat
 *  of arms, etc.
 */
class MEI_EXPORT Heraldry : public MeiElement {
    public:
        Heraldry();
        Heraldry(const Heraldry& other);
        virtual ~Heraldry();

/* include <heraldry> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Heraldry);
};

/** \brief groups elements describing the full history of a manuscript or manuscript part.
 */
class MEI_EXPORT History : public MeiElement {
    public:
        History();
        History(const History& other);
        virtual ~History();

/* include <history> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(History);
};

/** \brief contains the
 */
class MEI_EXPORT Incipit : public MeiElement {
    public:
        Incipit();
        Incipit(const Incipit& other);
        virtual ~Incipit();

/* include <incipit> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        MsExcerptMixIn    m_MsExcerpt;

    private:
        REGISTER_DECLARATION(Incipit);
};

/** \brief contains the name of an organization such as a university or library, with which
 *  a manuscript is identified, generally its holding institution.
 */
class MEI_EXPORT Institution : public MeiElement {
    public:
        Institution();
        Institution(const Institution& other);
        virtual ~Institution();

/* include <institution> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Institution);
};

/** \brief describes how text is laid out on the page, including information about any
 *  ruling, pricking, or other evidence of page-preparation techniques.
 */
class MEI_EXPORT Layout : public MeiElement {
    public:
        Layout();
        Layout(const Layout& other);
        virtual ~Layout();
        /** \brief specifies the number of columns per page
         */
        MeiAttribute* getColumns();
        void setColumns(std::string _columns);
        bool hasColumns();
        void removeColumns();
        /** \brief specifies the number of ruled lines per column
         */
        MeiAttribute* getRuledLines();
        void setRuledLines(std::string _ruledLines);
        bool hasRuledLines();
        void removeRuledLines();
        /** \brief specifies the number of written lines per column
         */
        MeiAttribute* getWrittenLines();
        void setWrittenLines(std::string _writtenLines);
        bool hasWrittenLines();
        void removeWrittenLines();

/* include <layout> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Layout);
};

/** \brief collects the set of layout descriptions applicable to a manuscript.
 */
class MEI_EXPORT LayoutDesc : public MeiElement {
    public:
        LayoutDesc();
        LayoutDesc(const LayoutDesc& other);
        virtual ~LayoutDesc();

/* include <layoutDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(LayoutDesc);
};

/** \brief defines a location within a manuscript or manuscript part, usually as a
 *  (possibly discontinuous) sequence of folio references.
 */
class MEI_EXPORT Locus : public MeiElement {
    public:
        Locus();
        Locus(const Locus& other);
        virtual ~Locus();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();
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

/* include <locus> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Locus);
};

/** \brief groups a number of locations which together form a distinct but discontinuous
 *  item within a manuscript or manuscript part, according to a specific foliation.
 */
class MEI_EXPORT LocusGrp : public MeiElement {
    public:
        LocusGrp();
        LocusGrp(const LocusGrp& other);
        virtual ~LocusGrp();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();

/* include <locusGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(LocusGrp);
};

/** \brief contains a word or phrase describing the material of which the object being
 *  described is composed.
 */
class MEI_EXPORT Material : public MeiElement {
    public:
        Material();
        Material(const Material& other);
        virtual ~Material();

/* include <material> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Material);
};

/** \brief describes the intellectual content of a manuscript or manuscript part, either as
 *  a series of paragraphs or as a series of structured manuscript items.
 */
class MEI_EXPORT MsContents : public MeiElement {
    public:
        MsContents();
        MsContents(const MsContents& other);
        virtual ~MsContents();
        /** \brief identifies the text types or classifications applicable to this object.
         */
        MeiAttribute* getClass();
        void setClass(std::string _class);
        bool hasClass();
        void removeClass();

/* include <msContents> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MsExcerptMixIn    m_MsExcerpt;

    private:
        REGISTER_DECLARATION(MsContents);
};

/** \brief contains a description of a single identifiable manuscript or other text-bearing
 *  object.
 */
class MEI_EXPORT MsDesc : public MeiElement {
    public:
        MsDesc();
        MsDesc(const MsDesc& other);
        virtual ~MsDesc();

/* include <msDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(MsDesc);
};

/** \brief contains the information required to identify the manuscript being described.
 */
class MEI_EXPORT MsIdentifier : public MeiElement {
    public:
        MsIdentifier();
        MsIdentifier(const MsIdentifier& other);
        virtual ~MsIdentifier();

/* include <msIdentifier> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(MsIdentifier);
};

/** \brief describes an individual work or item within the intellectual content of a
 *  manuscript or manuscript part.
 */
class MEI_EXPORT MsItem : public MeiElement {
    public:
        MsItem();
        MsItem(const MsItem& other);
        virtual ~MsItem();
        /** \brief identifies the text types or classifications applicable to this object.
         */
        MeiAttribute* getClass();
        void setClass(std::string _class);
        bool hasClass();
        void removeClass();

/* include <msItem> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MsExcerptMixIn    m_MsExcerpt;

    private:
        REGISTER_DECLARATION(MsItem);
};

/** \brief contains a structured description for an individual work or item within the
 *  intellectual content of a manuscript or manuscript part.
 */
class MEI_EXPORT MsItemStruct : public MeiElement {
    public:
        MsItemStruct();
        MsItemStruct(const MsItemStruct& other);
        virtual ~MsItemStruct();
        /** \brief identifies the text types or classifications applicable to this object.
         */
        MeiAttribute* getClass();
        void setClass(std::string _class);
        bool hasClass();
        void removeClass();

/* include <msItemStruct> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MsExcerptMixIn    m_MsExcerpt;

    private:
        REGISTER_DECLARATION(MsItemStruct);
};

/** \brief contains any form of unstructured alternative name used for a manuscript, such
 *  as an
 */
class MEI_EXPORT MsName : public MeiElement {
    public:
        MsName();
        MsName(const MsName& other);
        virtual ~MsName();

/* include <msName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(MsName);
};

/** \brief contains information about an originally distinct manuscript or part of a
 *  manuscript, now forming part of a composite manuscript.
 */
class MEI_EXPORT MsPart : public MeiElement {
    public:
        MsPart();
        MsPart(const MsPart& other);
        virtual ~MsPart();

/* include <msPart> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(MsPart);
};

/** \brief contains description of type of musical notation.
 */
class MEI_EXPORT MusicNotation : public MeiElement {
    public:
        MusicNotation();
        MusicNotation(const MusicNotation& other);
        virtual ~MusicNotation();

/* include <musicNotation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(MusicNotation);
};

/** \brief contains a description of the physical components making up the object which is
 *  being described.
 */
class MEI_EXPORT ObjectDesc : public MeiElement {
    public:
        ObjectDesc();
        ObjectDesc(const ObjectDesc& other);
        virtual ~ObjectDesc();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <objectDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(ObjectDesc);
};

/** \brief contains a word or phrase describing the type of object being referred to.
 */
class MEI_EXPORT ObjectType : public MeiElement {
    public:
        ObjectType();
        ObjectType(const ObjectType& other);
        virtual ~ObjectType();

/* include <objectType> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(ObjectType);
};

/** \brief contains any form of date, used to identify the date of origin for a manuscript
 *  or manuscript part.
 */
class MEI_EXPORT OrigDate : public MeiElement {
    public:
        OrigDate();
        OrigDate(const OrigDate& other);
        virtual ~OrigDate();

/* include <origDate> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(OrigDate);
};

/** \brief contains any form of place name, used to identify the place of origin for a
 *  manuscript or manuscript part.
 */
class MEI_EXPORT OrigPlace : public MeiElement {
    public:
        OrigPlace();
        OrigPlace(const OrigPlace& other);
        virtual ~OrigPlace();

/* include <origPlace> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(OrigPlace);
};

/** \brief contains any descriptive or other information concerning the origin of a
 *  manuscript or manuscript part.
 */
class MEI_EXPORT Origin : public MeiElement {
    public:
        Origin();
        Origin(const Origin& other);
        virtual ~Origin();

/* include <origin> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Origin);
};

/** \brief contains a full physical description of a manuscript or manuscript part,
 *  optionally subdivided using more specialized elements from the
 *  model.physDescPart class.
 */
class MEI_EXPORT PhysDesc : public MeiElement {
    public:
        PhysDesc();
        PhysDesc(const PhysDesc& other);
        virtual ~PhysDesc();

/* include <physDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(PhysDesc);
};

/** \brief contains any descriptive or other information concerning a single identifiable
 *  episode during the history of a manuscript or manuscript part, after its
 *  creation but before its acquisition.
 */
class MEI_EXPORT Provenance : public MeiElement {
    public:
        Provenance();
        Provenance(const Provenance& other);
        virtual ~Provenance();

/* include <provenance> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        TypedMixIn    m_Typed;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Provenance);
};

/** \brief provides information about the source and revision status of the parent
 *  manuscript description itself.
 */
class MEI_EXPORT RecordHist : public MeiElement {
    public:
        RecordHist();
        RecordHist(const RecordHist& other);
        virtual ~RecordHist();

/* include <recordHist> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(RecordHist);
};

/** \brief contains the name of a repository within which manuscripts are stored, possibly
 *  forming part of an institution.
 */
class MEI_EXPORT Repository : public MeiElement {
    public:
        Repository();
        Repository(const Repository& other);
        virtual ~Repository();

/* include <repository> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Repository);
};

/** \brief contains the text of any
 */
class MEI_EXPORT Rubric : public MeiElement {
    public:
        Rubric();
        Rubric(const Rubric& other);
        virtual ~Rubric();

/* include <rubric> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Rubric);
};

/** \brief contains a description of the scripts used in a manuscript or similar source.
 */
class MEI_EXPORT ScriptDesc : public MeiElement {
    public:
        ScriptDesc();
        ScriptDesc(const ScriptDesc& other);
        virtual ~ScriptDesc();

/* include <scriptDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(ScriptDesc);
};

/** \brief contains a description of one seal or similar attachment applied to a
 *  manuscript.
 */
class MEI_EXPORT Seal : public MeiElement {
    public:
        Seal();
        Seal(const Seal& other);
        virtual ~Seal();
        /** \brief specifies whether or not the binding is contemporary with the majority of its
         *  contents
         */
        MeiAttribute* getContemporary();
        void setContemporary(std::string _contemporary);
        bool hasContemporary();
        void removeContemporary();

/* include <seal> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Seal);
};

/** \brief describes the seals or other external items attached to a manuscript, either as
 *  a series of paragraphs or as a series of distinct
 */
class MEI_EXPORT SealDesc : public MeiElement {
    public:
        SealDesc();
        SealDesc(const SealDesc& other);
        virtual ~SealDesc();

/* include <sealDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(SealDesc);
};

/** \brief marks the word or words taken from a fixed point in a codex (typically the
 *  beginning of the second leaf) in order to provide a unique identifier for it.
 */
class MEI_EXPORT SecFol : public MeiElement {
    public:
        SecFol();
        SecFol(const SecFol& other);
        virtual ~SecFol();

/* include <secFol> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(SecFol);
};

/** \brief contains discussion of the leaf or quire signatures found within a codex.
 */
class MEI_EXPORT Signatures : public MeiElement {
    public:
        Signatures();
        Signatures(const Signatures& other);
        virtual ~Signatures();

/* include <signatures> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Signatures);
};

/** \brief describes the original source for the information contained with a manuscript
 *  description.
 */
class MEI_EXPORT Source : public MeiElement {
    public:
        Source();
        Source(const Source& other);
        virtual ~Source();

/* include <source> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Source);
};

/** \brief contains a word or phrase describing a stamp or similar device.
 */
class MEI_EXPORT Stamp : public MeiElement {
    public:
        Stamp();
        Stamp(const Stamp& other);
        virtual ~Stamp();

/* include <stamp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Stamp);
};

/** \brief contains an overview of the available information concerning some aspect of an
 *  item (for example, its intellectual content, history, layout, typography etc.)
 *  as a complement or alternative to the more detailed information carried by more
 *  specific elements.
 */
class MEI_EXPORT Summary : public MeiElement {
    public:
        Summary();
        Summary(const Summary& other);
        virtual ~Summary();

/* include <summary> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Summary);
};

/** \brief contains a description of the materials etc.
 * 
 *  which make up the physical support for the written part of a manuscript.
 */
class MEI_EXPORT Support : public MeiElement {
    public:
        Support();
        Support(const Support& other);
        virtual ~Support();

/* include <support> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Support);
};

/** \brief groups elements describing the physical support for the written part of a
 *  manuscript.
 */
class MEI_EXPORT SupportDesc : public MeiElement {
    public:
        SupportDesc();
        SupportDesc(const SupportDesc& other);
        virtual ~SupportDesc();
        /** \brief a short project-defined name for the material composing the majority of the
         *  support
         */
        MeiAttribute* getMaterial();
        void setMaterial(std::string _material);
        bool hasMaterial();
        void removeMaterial();

/* include <supportDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(SupportDesc);
};

/** \brief contains information about any representations of the manuscript being described
 *  which may exist in the holding institution or elsewhere.
 */
class MEI_EXPORT Surrogates : public MeiElement {
    public:
        Surrogates();
        Surrogates(const Surrogates& other);
        virtual ~Surrogates();

/* include <surrogates> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Surrogates);
};

/** \brief contains a description of the typefaces or other aspects of the printing of an
 *  incunable or other printed source.
 */
class MEI_EXPORT TypeDesc : public MeiElement {
    public:
        TypeDesc();
        TypeDesc(const TypeDesc& other);
        virtual ~TypeDesc();

/* include <typeDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TypeDesc);
};

/** \brief contains a word or phrase describing a watermark or similar device.
 */
class MEI_EXPORT Watermark : public MeiElement {
    public:
        Watermark();
        Watermark(const Watermark& other);
        virtual ~Watermark();

/* include <watermark> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Watermark);
};

/** \brief contains a measurement measured along the axis parallel to the bottom of the
 *  written surface, i.e.
 * 
 *  perpendicular to the spine of a book or codex.
 */
class MEI_EXPORT Width : public MeiElement {
    public:
        Width();
        Width(const Width& other);
        virtual ~Width();

/* include <width> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Width);
};
}
#endif  // MSDESCRIPTION_H_
