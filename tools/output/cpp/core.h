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

#ifndef CORE_H_
#define CORE_H_

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
#include "versemixins.h"
#include "coremixins.h"
#include "msdescriptionmixins.h"
#include <string>


namespace mei {
/** \brief contains an abbreviation of any sort.
 */
class MEI_EXPORT Abbr : public MeiElement {
    public:
        Abbr();
        Abbr(const Abbr& other);
        virtual ~Abbr();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <abbr> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Abbr);
};

/** \brief contains letters, words, or phrases inserted in the source text by an author,
 *  scribe, annotator, or corrector.
 */
class MEI_EXPORT Add : public MeiElement {
    public:
        Add();
        Add(const Add& other);
        virtual ~Add();

/* include <add> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        PlacementMixIn    m_Placement;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Add);
};

/** \brief contains one line of a postal address.
 */
class MEI_EXPORT AddrLine : public MeiElement {
    public:
        AddrLine();
        AddrLine(const AddrLine& other);
        virtual ~AddrLine();

/* include <addrLine> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(AddrLine);
};

/** \brief contains a postal address, for example of a publisher, an organization, or an
 *  individual.
 */
class MEI_EXPORT Address : public MeiElement {
    public:
        Address();
        Address(const Address& other);
        virtual ~Address();

/* include <address> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Address);
};

/** \brief contains bibliographic elements describing an item (e.g.
 * 
 *  an article or poem) published within a monograph or journal and not as an
 *  independent publication.
 */
class MEI_EXPORT Analytic : public MeiElement {
    public:
        Analytic();
        Analytic(const Analytic& other);
        virtual ~Analytic();

/* include <analytic> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Analytic);
};

/** \brief in a bibliographic reference, contains the name(s) of an author, personal or
 *  corporate, of a work; for example in the same form as that provided by a
 *  recognized bibliographic name authority.
 */
class MEI_EXPORT Author : public MeiElement {
    public:
        Author();
        Author(const Author& other);
        virtual ~Author();

/* include <author> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Author);
};

/** \brief contains a loosely-structured bibliographic citation of which the sub-components
 *  may or may not be explicitly tagged.
 */
class MEI_EXPORT Bibl : public MeiElement {
    public:
        Bibl();
        Bibl(const Bibl& other);
        virtual ~Bibl();

/* include <bibl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;
        TypedMixIn    m_Typed;
        SortableMixIn    m_Sortable;
        DocStatusMixIn    m_DocStatus;

    private:
        REGISTER_DECLARATION(Bibl);
};

/** \brief defines the scope of a bibliographic reference, for example as a list of page
 *  numbers, or a named subdivision of a larger work.
 */
class MEI_EXPORT BiblScope : public MeiElement {
    public:
        BiblScope();
        BiblScope(const BiblScope& other);
        virtual ~BiblScope();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();
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

/* include <biblScope> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(BiblScope);
};

/** \brief contains a structured bibliographic citation, in which only bibliographic sub-
 *  elements appear and in a specified order.
 */
class MEI_EXPORT BiblStruct : public MeiElement {
    public:
        BiblStruct();
        BiblStruct(const BiblStruct& other);
        virtual ~BiblStruct();

/* include <biblStruct> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;
        TypedMixIn    m_Typed;
        SortableMixIn    m_Sortable;
        DocStatusMixIn    m_DocStatus;

    private:
        REGISTER_DECLARATION(BiblStruct);
};

/** \brief provides encoded binary data representing an inline graphic, audio, video or
 *  other object.
 */
class MEI_EXPORT BinaryObject : public MeiElement {
    public:
        BinaryObject();
        BinaryObject(const BinaryObject& other);
        virtual ~BinaryObject();
        /** \brief specifies the URL from which the media concerned may be obtained.
         */
        MeiAttribute* getUrl();
        void setUrl(std::string _url);
        bool hasUrl();
        void removeUrl();
        /** \brief The encoding used to encode the binary data.
         * 
         *  If not specified, this is assumed to be
         */
        MeiAttribute* getEncoding();
        void setEncoding(std::string _encoding);
        bool hasEncoding();
        void removeEncoding();

/* include <binaryObject> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MediaMixIn    m_Media;
        InternetMediaMixIn    m_InternetMedia;
        TimedMixIn    m_Timed;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(BinaryObject);
};

/** \brief marks the beginning of a new column of a text on a multi-column page.
 */
class MEI_EXPORT Cb : public MeiElement {
    public:
        Cb();
        Cb(const Cb& other);
        virtual ~Cb();

/* include <cb> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        EditionMixIn    m_Edition;
        SpanningMixIn    m_Spanning;
        BreakingMixIn    m_Breaking;

    private:
        REGISTER_DECLARATION(Cb);
};

/** \brief groups a number of alternative encodings for the same point in a text.
 */
class MEI_EXPORT Choice : public MeiElement {
    public:
        Choice();
        Choice(const Choice& other);
        virtual ~Choice();

/* include <choice> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Choice);
};

/** \brief contains a quotation from some other document, together with a bibliographic
 *  reference to its source.
 * 
 *  In a dictionary it may contain an example text with at least one occurrence of
 *  the word form, used in the sense being described, or a translation of the
 *  headword, or an example.
 */
class MEI_EXPORT Cit : public MeiElement {
    public:
        Cit();
        Cit(const Cit& other);
        virtual ~Cit();

/* include <cit> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Cit);
};

/** \brief defines the range of cited content, often represented by pages or other units
 */
class MEI_EXPORT CitedRange : public MeiElement {
    public:
        CitedRange();
        CitedRange(const CitedRange& other);
        virtual ~CitedRange();
        /** \brief names the unit used for the measurement
         */
        MeiAttribute* getUnit();
        void setUnit(std::string _unit);
        bool hasUnit();
        void removeUnit();
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

/* include <citedRange> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(CitedRange);
};

/** \brief contains the correct form of a passage apparently erroneous in the copy text.
 */
class MEI_EXPORT Corr : public MeiElement {
    public:
        Corr();
        Corr(const Corr& other);
        virtual ~Corr();

/* include <corr> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Corr);
};

/** \brief contains a date in any format.
 */
class MEI_EXPORT Date : public MeiElement {
    public:
        Date();
        Date(const Date& other);
        virtual ~Date();

/* include <date> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Date);
};

/** \brief contains a letter, word, or passage deleted, marked as deleted, or otherwise
 *  indicated as superfluous or spurious in the copy text by an author, scribe,
 *  annotator, or corrector.
 */
class MEI_EXPORT Del : public MeiElement {
    public:
        Del();
        Del(const Del& other);
        virtual ~Del();

/* include <del> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranscriptionalMixIn    m_Transcriptional;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Del);
};

/** \brief contains a brief description of the object documented by its parent element,
 *  including its intended usage, purpose, or application where this is appropriate.
 */
class MEI_EXPORT Desc : public MeiElement {
    public:
        Desc();
        Desc(const Desc& other);
        virtual ~Desc();

/* include <desc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranslatableMixIn    m_Translatable;

    private:
        REGISTER_DECLARATION(Desc);
};

/** \brief identifies any word or phrase which is regarded as linguistically distinct, for
 *  example as archaic, technical, dialectal, non-preferred, etc., or as forming
 *  part of a sublanguage.
 */
class MEI_EXPORT Distinct : public MeiElement {
    public:
        Distinct();
        Distinct(const Distinct& other);
        virtual ~Distinct();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief specifies how the phrase is distinct diachronically
         */
        MeiAttribute* getTime();
        void setTime(std::string _time);
        bool hasTime();
        void removeTime();
        /** \brief specifies how the phrase is distinct diatopically
         */
        MeiAttribute* getSpace();
        void setSpace(std::string _space);
        bool hasSpace();
        void removeSpace();
        /** \brief specifies how the phrase is distinct diastatically
         */
        MeiAttribute* getSocial();
        void setSocial(std::string _social);
        bool hasSocial();
        void removeSocial();

/* include <distinct> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Distinct);
};

/** \brief indicates the location at which a textual division generated automatically by a
 *  text-processing application is to appear.
 */
class MEI_EXPORT DivGen : public MeiElement {
    public:
        DivGen();
        DivGen(const DivGen& other);
        virtual ~DivGen();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <divGen> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(DivGen);
};

/** \brief contains a secondary statement of responsibility for a bibliographic item, for
 *  example the name of an individual, institution or organization, (or of several
 *  such) acting as editor, compiler, translator, etc.
 */
class MEI_EXPORT Editor : public MeiElement {
    public:
        Editor();
        Editor(const Editor& other);
        virtual ~Editor();

/* include <editor> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Editor);
};

/** \brief contains an e-mail address identifying a location to which e-mail messages can
 *  be delivered.
 */
class MEI_EXPORT Email : public MeiElement {
    public:
        Email();
        Email(const Email& other);
        virtual ~Email();

/* include <email> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Email);
};

/** \brief marks words or phrases which are stressed or emphasized for linguistic or
 *  rhetorical effect.
 */
class MEI_EXPORT Emph : public MeiElement {
    public:
        Emph();
        Emph(const Emph& other);
        virtual ~Emph();

/* include <emph> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Emph);
};

/** \brief contains the expansion of an abbreviation.
 */
class MEI_EXPORT Expan : public MeiElement {
    public:
        Expan();
        Expan(const Expan& other);
        virtual ~Expan();

/* include <expan> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Expan);
};

/** \brief identifies a word or phrase as belonging to some language other than that of the
 *  surrounding text.
 */
class MEI_EXPORT Foreign : public MeiElement {
    public:
        Foreign();
        Foreign(const Foreign& other);
        virtual ~Foreign();

/* include <foreign> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Foreign);
};

/** \brief indicates a point where material has been omitted in a transcription, whether
 *  for editorial reasons described in the TEI header, as part of sampling practice,
 *  or because the material is illegible, invisible, or inaudible.
 */
class MEI_EXPORT Gap : public MeiElement {
    public:
        Gap();
        Gap(const Gap& other);
        virtual ~Gap();
        /** \brief gives the reason for omission.
         * 
         *  Sample values include
         */
        MeiAttribute* getReason();
        void setReason(std::string _reason);
        bool hasReason();
        void removeReason();
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

/* include <gap> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Gap);
};

/** \brief marks the point in a transcribed codex at which a new gathering or quire begins.
 */
class MEI_EXPORT Gb : public MeiElement {
    public:
        Gb();
        Gb(const Gb& other);
        virtual ~Gb();

/* include <gb> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        SpanningMixIn    m_Spanning;
        BreakingMixIn    m_Breaking;

    private:
        REGISTER_DECLARATION(Gb);
};

/** \brief identifies a phrase or word used to provide a gloss or definition for some other
 *  word or phrase.
 */
class MEI_EXPORT Gloss : public MeiElement {
    public:
        Gloss();
        Gloss(const Gloss& other);
        virtual ~Gloss();

/* include <gloss> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;
        TranslatableMixIn    m_Translatable;
        TypedMixIn    m_Typed;
        PointingMixIn    m_Pointing;
        CReferencingMixIn    m_CReferencing;

    private:
        REGISTER_DECLARATION(Gloss);
};

/** \brief indicates the location of an inline graphic, illustration, or figure.
 */
class MEI_EXPORT Graphic : public MeiElement {
    public:
        Graphic();
        Graphic(const Graphic& other);
        virtual ~Graphic();

/* include <graphic> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MediaMixIn    m_Media;
        InternetMediaMixIn    m_InternetMedia;
        ResourcedMixIn    m_Resourced;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Graphic);
};

/** \brief contains any type of heading, for example the title of a section, or the heading
 *  of a list, glossary, manuscript description, etc.
 */
class MEI_EXPORT Head : public MeiElement {
    public:
        Head();
        Head(const Head& other);
        virtual ~Head();

/* include <head> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Head);
};

/** \brief contains the heading for the item or gloss column in a glossary list or similar
 *  structured list.
 */
class MEI_EXPORT HeadItem : public MeiElement {
    public:
        HeadItem();
        HeadItem(const HeadItem& other);
        virtual ~HeadItem();

/* include <headItem> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(HeadItem);
};

/** \brief contains the heading for the label or term column in a glossary list or similar
 *  structured list.
 */
class MEI_EXPORT HeadLabel : public MeiElement {
    public:
        HeadLabel();
        HeadLabel(const HeadLabel& other);
        virtual ~HeadLabel();

/* include <headLabel> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(HeadLabel);
};

/** \brief marks a word or phrase as graphically distinct from the surrounding text, for
 *  reasons concerning which no claim is made.
 */
class MEI_EXPORT Hi : public MeiElement {
    public:
        Hi();
        Hi(const Hi& other);
        virtual ~Hi();

/* include <hi> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Hi);
};

/** \brief groups information relating to the publication or distribution of a
 *  bibliographic item.
 */
class MEI_EXPORT Imprint : public MeiElement {
    public:
        Imprint();
        Imprint(const Imprint& other);
        virtual ~Imprint();

/* include <imprint> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Imprint);
};

/** \brief marks a location to be indexed for whatever purpose.
 */
class MEI_EXPORT Index : public MeiElement {
    public:
        Index();
        Index(const Index& other);
        virtual ~Index();
        /** \brief a single word which follows the rules defining a legal XML name (see
         */
        MeiAttribute* getIndexName();
        void setIndexName(std::string _indexName);
        bool hasIndexName();
        void removeIndexName();

/* include <index> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SpanningMixIn    m_Spanning;

    private:
        REGISTER_DECLARATION(Index);
};

/** \brief contains one component of a list.
 */
class MEI_EXPORT Item : public MeiElement {
    public:
        Item();
        Item(const Item& other);
        virtual ~Item();

/* include <item> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Item);
};

/** \brief contains a single, possibly incomplete, line of verse.
 */
class MEI_EXPORT L : public MeiElement {
    public:
        L();
        L(const L& other);
        virtual ~L();

/* include <l> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MetricalMixIn    m_Metrical;
        EnjambMixIn    m_Enjamb;
        FragmentableMixIn    m_Fragmentable;

    private:
        REGISTER_DECLARATION(L);
};

/** \brief contains any label or heading used to identify part of a text, typically but not
 *  exclusively in a list or glossary.
 */
class MEI_EXPORT Label : public MeiElement {
    public:
        Label();
        Label(const Label& other);
        virtual ~Label();

/* include <label> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        PlacementMixIn    m_Placement;

    private:
        REGISTER_DECLARATION(Label);
};

/** \brief marks the start of a new (typographic) line in some edition or version of a
 *  text.
 */
class MEI_EXPORT Lb : public MeiElement {
    public:
        Lb();
        Lb(const Lb& other);
        virtual ~Lb();

/* include <lb> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        EditionMixIn    m_Edition;
        SpanningMixIn    m_Spanning;
        BreakingMixIn    m_Breaking;

    private:
        REGISTER_DECLARATION(Lb);
};

/** \brief contains one or more verse lines functioning as a formal unit, e.g.
 * 
 *  a stanza, refrain, verse paragraph, etc.
 */
class MEI_EXPORT Lg : public MeiElement {
    public:
        Lg();
        Lg(const Lg& other);
        virtual ~Lg();

/* include <lg> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DivLikeMixIn    m_DivLike;
        MetricalMixIn    m_Metrical;
        FragmentableMixIn    m_Fragmentable;
        TypedMixIn    m_Typed;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Lg);
};

/** \brief contains any sequence of items organized as a list.
 */
class MEI_EXPORT List : public MeiElement {
    public:
        List();
        List(const List& other);
        virtual ~List();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <list> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(List);
};

/** \brief contains a list of bibliographic citations of any kind.
 */
class MEI_EXPORT ListBibl : public MeiElement {
    public:
        ListBibl();
        ListBibl(const ListBibl& other);
        virtual ~ListBibl();

/* include <listBibl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;
        DeclarableMixIn    m_Declarable;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(ListBibl);
};

/** \brief contains a word or phrase referring to some quantity of an object or commodity,
 *  usually comprising a number, a unit, and a commodity name.
 */
class MEI_EXPORT Measure : public MeiElement {
    public:
        Measure();
        Measure(const Measure& other);
        virtual ~Measure();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <measure> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MeasurementMixIn    m_Measurement;

    private:
        REGISTER_DECLARATION(Measure);
};

/** \brief contains a group of dimensional specifications which relate to the same object,
 *  for example the height and width of a manuscript page.
 */
class MEI_EXPORT MeasureGrp : public MeiElement {
    public:
        MeasureGrp();
        MeasureGrp(const MeasureGrp& other);
        virtual ~MeasureGrp();

/* include <measureGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MeasurementMixIn    m_Measurement;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(MeasureGrp);
};

/** \brief indicates the location of any form of external media such as an audio or video
 *  clip etc.
 */
class MEI_EXPORT Media : public MeiElement {
    public:
        Media();
        Media(const Media& other);
        virtual ~Media();
        /** \brief specifies the applicable multimedia internet mail extension (MIME) media type
         */
        MeiAttribute* getMimeType();
        void setMimeType(std::string _mimeType);
        bool hasMimeType();
        void removeMimeType();

/* include <media> */

        TypedMixIn    m_Typed;
        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MediaMixIn    m_Media;
        InternetMediaMixIn    m_InternetMedia;
        ResourcedMixIn    m_Resourced;
        DeclaringMixIn    m_Declaring;
        TimedMixIn    m_Timed;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;

    private:
        REGISTER_DECLARATION(Media);
};

/** \brief contains the formalized descriptive title for a meeting or conference, for use
 *  in a bibliographic description for an item derived from such a meeting, or as a
 *  heading or preamble to publications emanating from it.
 */
class MEI_EXPORT Meeting : public MeiElement {
    public:
        Meeting();
        Meeting(const Meeting& other);
        virtual ~Meeting();

/* include <meeting> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Meeting);
};

/** \brief marks words or phrases mentioned, not used.
 */
class MEI_EXPORT Mentioned : public MeiElement {
    public:
        Mentioned();
        Mentioned(const Mentioned& other);
        virtual ~Mentioned();

/* include <mentioned> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Mentioned);
};

/** \brief marks a boundary point separating any kind of section of a text, typically but
 *  not necessarily indicating a point at which some part of a standard reference
 *  system changes, where the change is not represented by a structural element.
 */
class MEI_EXPORT Milestone : public MeiElement {
    public:
        Milestone();
        Milestone(const Milestone& other);
        virtual ~Milestone();

/* include <milestone> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MilestoneUnitMixIn    m_MilestoneUnit;
        TypedMixIn    m_Typed;
        EditionMixIn    m_Edition;
        SpanningMixIn    m_Spanning;
        BreakingMixIn    m_Breaking;

    private:
        REGISTER_DECLARATION(Milestone);
};

/** \brief contains bibliographic elements describing an item (e.g.
 * 
 *  a book or journal) published as an independent item (i.e. as a separate physical
 *  object).
 */
class MEI_EXPORT Monogr : public MeiElement {
    public:
        Monogr();
        Monogr(const Monogr& other);
        virtual ~Monogr();

/* include <monogr> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Monogr);
};

/** \brief contains a proper noun or noun phrase.
 */
class MEI_EXPORT Name : public MeiElement {
    public:
        Name();
        Name(const Name& other);
        virtual ~Name();

/* include <name> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PersonalMixIn    m_Personal;
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
        REGISTER_DECLARATION(Name);
};

/** \brief contains a note or annotation.
 */
class MEI_EXPORT Note : public MeiElement {
    public:
        Note();
        Note(const Note& other);
        virtual ~Note();
        /** \brief indicates whether the copy text shows the exact place of reference for the note.
         */
        MeiAttribute* getAnchored();
        void setAnchored(std::string _anchored);
        bool hasAnchored();
        void removeAnchored();
        /** \brief points to the end of the span to which the note is attached, if the note is not
         *  embedded in the text at that point.
         */
        MeiAttribute* getTargetEnd();
        void setTargetEnd(std::string _targetEnd);
        bool hasTargetEnd();
        void removeTargetEnd();

/* include <note> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PlacementMixIn    m_Placement;
        PointingMixIn    m_Pointing;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Note);
};

/** \brief contains a number, written in any form.
 */
class MEI_EXPORT Num : public MeiElement {
    public:
        Num();
        Num(const Num& other);
        virtual ~Num();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <num> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Num);
};

/** \brief contains a reading which is marked as following the original, rather than being
 *  normalized or corrected.
 */
class MEI_EXPORT Orig : public MeiElement {
    public:
        Orig();
        Orig(const Orig& other);
        virtual ~Orig();

/* include <orig> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Orig);
};

/** \brief marks paragraphs in prose.
 */
class MEI_EXPORT P : public MeiElement {
    public:
        P();
        P(const P& other);
        virtual ~P();

/* include <p> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;
        FragmentableMixIn    m_Fragmentable;

    private:
        REGISTER_DECLARATION(P);
};

/** \brief marks the start of a new page in a paginated document.
 */
class MEI_EXPORT Pb : public MeiElement {
    public:
        Pb();
        Pb(const Pb& other);
        virtual ~Pb();

/* include <pb> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        EditionMixIn    m_Edition;
        SpanningMixIn    m_Spanning;
        BreakingMixIn    m_Breaking;

    private:
        REGISTER_DECLARATION(Pb);
};

/** \brief contains a number or other identifier for some postal delivery point other than
 *  a street address.
 */
class MEI_EXPORT PostBox : public MeiElement {
    public:
        PostBox();
        PostBox(const PostBox& other);
        virtual ~PostBox();

/* include <postBox> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(PostBox);
};

/** \brief contains a numerical or alphanumeric code used as part of a postal address to
 *  simplify sorting or delivery of mail.
 */
class MEI_EXPORT PostCode : public MeiElement {
    public:
        PostCode();
        PostCode(const PostCode& other);
        virtual ~PostCode();

/* include <postCode> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(PostCode);
};

/** \brief defines a pointer to another location.
 */
class MEI_EXPORT Ptr : public MeiElement {
    public:
        Ptr();
        Ptr(const Ptr& other);
        virtual ~Ptr();

/* include <ptr> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        InternetMediaMixIn    m_InternetMedia;
        TypedMixIn    m_Typed;
        DeclaringMixIn    m_Declaring;
        CReferencingMixIn    m_CReferencing;

    private:
        REGISTER_DECLARATION(Ptr);
};

/** \brief contains the name of the place where a bibliographic item was published.
 */
class MEI_EXPORT PubPlace : public MeiElement {
    public:
        PubPlace();
        PubPlace(const PubPlace& other);
        virtual ~PubPlace();

/* include <pubPlace> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(PubPlace);
};

/** \brief provides the name of the organization responsible for the publication or
 *  distribution of a bibliographic item.
 */
class MEI_EXPORT Publisher : public MeiElement {
    public:
        Publisher();
        Publisher(const Publisher& other);
        virtual ~Publisher();

/* include <publisher> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Publisher);
};

/** \brief contains material which is distinguished from the surrounding text using
 *  quotation marks or a similar method, for any one of a variety of reasons
 *  including, but not limited to: direct speech or thought, technical terms or
 *  jargon, authorial distance, quotations from elsewhere, and passages that are
 *  mentioned but not used.
 */
class MEI_EXPORT Q : public MeiElement {
    public:
        Q();
        Q(const Q& other);
        virtual ~Q();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <q> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        AscribedMixIn    m_Ascribed;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(Q);
};

/** \brief contains a phrase or passage attributed by the narrator or author to some agency
 *  external to the text.
 */
class MEI_EXPORT Quote : public MeiElement {
    public:
        Quote();
        Quote(const Quote& other);
        virtual ~Quote();

/* include <quote> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        MsExcerptMixIn    m_MsExcerpt;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(Quote);
};

/** \brief defines a reference to another location, possibly modified by additional text or
 *  comment.
 */
class MEI_EXPORT Ref : public MeiElement {
    public:
        Ref();
        Ref(const Ref& other);
        virtual ~Ref();

/* include <ref> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        InternetMediaMixIn    m_InternetMedia;
        TypedMixIn    m_Typed;
        DeclaringMixIn    m_Declaring;
        CReferencingMixIn    m_CReferencing;

    private:
        REGISTER_DECLARATION(Ref);
};

/** \brief contains a reading which has been regularized or normalized in some sense.
 */
class MEI_EXPORT Reg : public MeiElement {
    public:
        Reg();
        Reg(const Reg& other);
        virtual ~Reg();

/* include <reg> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Reg);
};

/** \brief contains or references some other bibliographic item which is related to the
 *  present one in some specified manner, for example as a constituent or
 *  alternative version of it.
 */
class MEI_EXPORT RelatedItem : public MeiElement {
    public:
        RelatedItem();
        RelatedItem(const RelatedItem& other);
        virtual ~RelatedItem();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <relatedItem> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(RelatedItem);
};

/** \brief contains a phrase describing the nature of a person's intellectual
 *  responsibility, or an organization's role in the production or distribution of a
 *  work.
 */
class MEI_EXPORT Resp : public MeiElement {
    public:
        Resp();
        Resp(const Resp& other);
        virtual ~Resp();

/* include <resp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Resp);
};

/** \brief supplies a statement of responsibility for the intellectual content of a text,
 *  edition, recording, or series, where the specialized elements for authors,
 *  editors, etc.
 * 
 *  do not suffice or do not apply. May also be used to encode information about
 *  individuals or organizations which have played a role in the production or
 *  distribution of a bibliographic work.
 */
class MEI_EXPORT RespStmt : public MeiElement {
    public:
        RespStmt();
        RespStmt(const RespStmt& other);
        virtual ~RespStmt();

/* include <respStmt> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(RespStmt);
};

/** \brief contains a general purpose name or referring string.
 */
class MEI_EXPORT Rs : public MeiElement {
    public:
        Rs();
        Rs(const Rs& other);
        virtual ~Rs();

/* include <rs> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Rs);
};

/** \brief indicates passages thought or spoken aloud, whether explicitly indicated in the
 *  source or not, whether directly or indirectly reported, whether by real people
 *  or fictional characters.
 */
class MEI_EXPORT Said : public MeiElement {
    public:
        Said();
        Said(const Said& other);
        virtual ~Said();
        /** \brief may be used to indicate whether the quoted matter is regarded as having been
         *  vocalized or signed.
         */
        MeiAttribute* getAloud();
        void setAloud(std::string _aloud);
        bool hasAloud();
        void removeAloud();
        /** \brief may be used to indicate whether the quoted matter is regarded as direct or
         *  indirect speech.
         */
        MeiAttribute* getDirect();
        void setDirect(std::string _direct);
        bool hasDirect();
        void removeDirect();

/* include <said> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(Said);
};

/** \brief contains information about the series in which a book or other bibliographic
 *  item has appeared.
 */
class MEI_EXPORT Series : public MeiElement {
    public:
        Series();
        Series(const Series& other);
        virtual ~Series();

/* include <series> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Series);
};

/** \brief contains text reproduced although apparently incorrect or inaccurate.
 */
class MEI_EXPORT Sic : public MeiElement {
    public:
        Sic();
        Sic(const Sic& other);
        virtual ~Sic();

/* include <sic> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Sic);
};

/** \brief contains a word or phrase for which the author or narrator indicates a
 *  disclaiming of responsibility, for example by the use of scare quotes or
 *  italics.
 */
class MEI_EXPORT SoCalled : public MeiElement {
    public:
        SoCalled();
        SoCalled(const SoCalled& other);
        virtual ~SoCalled();

/* include <soCalled> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(SoCalled);
};

/** \brief contains an individual speech in a performance text, or a passage presented as
 *  such in a prose or verse text.
 */
class MEI_EXPORT Sp : public MeiElement {
    public:
        Sp();
        Sp(const Sp& other);
        virtual ~Sp();

/* include <sp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        AscribedMixIn    m_Ascribed;

    private:
        REGISTER_DECLARATION(Sp);
};

/** \brief contains a specialized form of heading or label, giving the name of one or more
 *  speakers in a dramatic text or fragment.
 */
class MEI_EXPORT Speaker : public MeiElement {
    public:
        Speaker();
        Speaker(const Speaker& other);
        virtual ~Speaker();

/* include <speaker> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Speaker);
};

/** \brief contains any kind of stage direction within a dramatic text or fragment.
 */
class MEI_EXPORT Stage : public MeiElement {
    public:
        Stage();
        Stage(const Stage& other);
        virtual ~Stage();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <stage> */

        AscribedMixIn    m_Ascribed;
        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Stage);
};

/** \brief contains a full street address including any name or number identifying a
 *  building as well as the name of the street or route on which it is located.
 */
class MEI_EXPORT Street : public MeiElement {
    public:
        Street();
        Street(const Street& other);
        virtual ~Street();

/* include <street> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Street);
};

/** \brief contains the whole of a TEI encoded corpus, comprising a single corpus header
 *  and one or more TEI elements, each containing a single text header and a text.
 */
class MEI_EXPORT TeiCorpus : public MeiElement {
    public:
        TeiCorpus();
        TeiCorpus(const TeiCorpus& other);
        virtual ~TeiCorpus();
        /** \brief The version of the TEI scheme
         */
        MeiAttribute* getVersion();
        void setVersion(std::string _version);
        bool hasVersion();
        void removeVersion();

/* include <teiCorpus> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TeiCorpus);
};

/** \brief contains a single-word, multi-word, or symbolic designation which is regarded as
 *  a technical term.
 */
class MEI_EXPORT Term : public MeiElement {
    public:
        Term();
        Term(const Term& other);
        virtual ~Term();

/* include <term> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;
        CanonicalMixIn    m_Canonical;
        SortableMixIn    m_Sortable;
        CReferencingMixIn    m_CReferencing;

    private:
        REGISTER_DECLARATION(Term);
};

/** \brief describes the languages and writing systems identified within the bibliographic
 *  work being described, rather than its description.
 */
class MEI_EXPORT TextLang : public MeiElement {
    public:
        TextLang();
        TextLang(const TextLang& other);
        virtual ~TextLang();
        /** \brief supplies a code which identifies the chief language used in the bibliographic
         *  work.
         */
        MeiAttribute* getMainLang();
        void setMainLang(std::string _mainLang);
        bool hasMainLang();
        void removeMainLang();
        /** \brief one or more codes identifying any other languages used in the bibliographic
         *  work.
         */
        MeiAttribute* getOtherLangs();
        void setOtherLangs(std::string _otherLangs);
        bool hasOtherLangs();
        void removeOtherLangs();

/* include <textLang> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TextLang);
};

/** \brief contains a phrase defining a time of day in any format.
 */
class MEI_EXPORT Time : public MeiElement {
    public:
        Time();
        Time(const Time& other);
        virtual ~Time();

/* include <time> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        DurationW3cMixIn    m_DurationW3c;
        DurationIsoMixIn    m_DurationIso;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Time);
};

/** \brief contains a title for any kind of work.
 */
class MEI_EXPORT Title : public MeiElement {
    public:
        Title();
        Title(const Title& other);
        virtual ~Title();
        /** \brief indicates the bibliographic level for a title, that is, whether it identifies an
         *  article, book, journal, series, or unpublished material.
         */
        MeiAttribute* getLevel();
        void setLevel(std::string _level);
        bool hasLevel();
        void removeLevel();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <title> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Title);
};

/** \brief contains a word, phrase, or passage which cannot be transcribed with certainty
 *  because it is illegible or inaudible in the source.
 */
class MEI_EXPORT Unclear : public MeiElement {
    public:
        Unclear();
        Unclear(const Unclear& other);
        virtual ~Unclear();
        /** \brief gives the reason for omission.
         * 
         *  Sample values include
         */
        MeiAttribute* getReason();
        void setReason(std::string _reason);
        bool hasReason();
        void removeReason();
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

/* include <unclear> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Unclear);
};
}
#endif  // CORE_H_
