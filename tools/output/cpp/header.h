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

#ifndef HEADER_H_
#define HEADER_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include "headermixins.h"
#include "namesdatesmixins.h"
#include "coremixins.h"
#include <string>


namespace mei {
/** \brief (access restriction) – Describes the conditions that affect the accessibility
 *  of material.
 */
class MEI_EXPORT AccessRestrict : public MeiElement {
    public:
        AccessRestrict();
        AccessRestrict(const AccessRestrict& other);
        virtual ~AccessRestrict();

/* include <accessRestrict> */


    private:
        REGISTER_DECLARATION(AccessRestrict);
};

/** \brief (acquisition source) – Post-publication source, such as a vendor or
 *  distributor, from which access to a bibliographic item may be obtained,
 *  including electronic access.
 */
class MEI_EXPORT AcqSource : public MeiElement {
    public:
        AcqSource();
        AcqSource(const AcqSource& other);
        virtual ~AcqSource();

/* include <acqSource> */


    private:
        REGISTER_DECLARATION(AcqSource);
};

/** \brief (alternative identifier) – May contain a bibliographic identifier that does
 *  not fit within the meiHead element's id attribute, for example because the id
 *  does not fit the definition of an XML id or because multiple identifiers are
 *  needed.
 */
class MEI_EXPORT AltId : public MeiElement {
    public:
        AltId();
        AltId(const AltId& other);
        virtual ~AltId();

/* include <altId> */


    private:
        REGISTER_DECLARATION(AltId);
};

/** \brief records information about an application which has edited the TEI file.
 */
class MEI_EXPORT AppInfo : public MeiElement {
    public:
        AppInfo();
        AppInfo(const AppInfo& other);
        virtual ~AppInfo();

/* include <appInfo> */


    private:
        REGISTER_DECLARATION(AppInfo);
};

/** \brief provides information about an application which has acted upon the document.
 */
class MEI_EXPORT Application : public MeiElement {
    public:
        Application();
        Application(const Application& other);
        virtual ~Application();
        /** \brief The version of the TEI scheme
         */
        MeiAttribute* getVersion();
        void setVersion(std::string _version);
        bool hasVersion();
        void removeVersion();

/* include <application> */


    private:
        REGISTER_DECLARATION(Application);
};

/** \brief supplies the name of a person or other agency responsible for making a work
 *  available, other than a publisher or distributor.
 */
class MEI_EXPORT Authority : public MeiElement {
    public:
        Authority();
        Authority(const Authority& other);
        virtual ~Authority();

/* include <authority> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Authority);
};

/** \brief supplies information about the availability of a text, for example any
 *  restrictions on its use or distribution, its copyright status, any licence
 *  applying to it, etc.
 */
class MEI_EXPORT Availability : public MeiElement {
    public:
        Availability();
        Availability(const Availability& other);
        virtual ~Availability();

/* include <availability> */


    private:
        REGISTER_DECLARATION(Availability);
};

/** \brief contains a fully-structured bibliographic citation, in which all components of
 *  the TEI file description are present.
 */
class MEI_EXPORT BiblFull : public MeiElement {
    public:
        BiblFull();
        BiblFull(const BiblFull& other);
        virtual ~BiblFull();

/* include <biblFull> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;
        SortableMixIn    m_Sortable;
        DocStatusMixIn    m_DocStatus;

    private:
        REGISTER_DECLARATION(BiblFull);
};

/** \brief specifies an expression and replacement pattern for transforming a canonical
 *  reference into a URI.
 */
class MEI_EXPORT CRefPattern : public MeiElement {
    public:
        CRefPattern();
        CRefPattern(const CRefPattern& other);
        virtual ~CRefPattern();

/* include <cRefPattern> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PatternReplacementMixIn    m_PatternReplacement;

    private:
        REGISTER_DECLARATION(CRefPattern);
};

/** \brief describes a calendar or dating system used in a dating formula in the text.
 */
class MEI_EXPORT Calendar : public MeiElement {
    public:
        Calendar();
        Calendar(const Calendar& other);
        virtual ~Calendar();

/* include <calendar> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Calendar);
};

/** \brief contains a description of the calendar system used in any dating expression
 *  found in the text.
 */
class MEI_EXPORT CalendarDesc : public MeiElement {
    public:
        CalendarDesc();
        CalendarDesc(const CalendarDesc& other);
        virtual ~CalendarDesc();

/* include <calendarDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(CalendarDesc);
};

/** \brief describes some category within a taxonomy or text typology, either in the form
 *  of a brief prose description or in terms of the situational parameters used by
 *  the TEI formal textDesc.
 */
class MEI_EXPORT CatDesc : public MeiElement {
    public:
        CatDesc();
        CatDesc(const CatDesc& other);
        virtual ~CatDesc();

/* include <catDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(CatDesc);
};

/** \brief specifies one or more defined categories within some taxonomy or text typology.
 */
class MEI_EXPORT CatRef : public MeiElement {
    public:
        CatRef();
        CatRef(const CatRef& other);
        virtual ~CatRef();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();

/* include <catRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(CatRef);
};

/** \brief contains an individual descriptive category, possibly nested within a
 *  superordinate category, within a user-defined taxonomy.
 */
class MEI_EXPORT Category : public MeiElement {
    public:
        Category();
        Category(const Category& other);
        virtual ~Category();

/* include <category> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Category);
};

/** \brief documents a change or set of changes made during the production of a source
 *  document, or during the revision of an electronic file.
 */
class MEI_EXPORT Change : public MeiElement {
    public:
        Change();
        Change(const Change& other);
        virtual ~Change();

/* include <change> */


    private:
        REGISTER_DECLARATION(Change);
};

/** \brief (change description) – Description of a revision of the MEI file.
 */
class MEI_EXPORT ChangeDesc : public MeiElement {
    public:
        ChangeDesc();
        ChangeDesc(const ChangeDesc& other);
        virtual ~ChangeDesc();

/* include <changeDesc> */


    private:
        REGISTER_DECLARATION(ChangeDesc);
};

/** \brief contains the classification code used for this text in some standard
 *  classification system.
 */
class MEI_EXPORT ClassCode : public MeiElement {
    public:
        ClassCode();
        ClassCode(const ClassCode& other);
        virtual ~ClassCode();

/* include <classCode> */


    private:
        REGISTER_DECLARATION(ClassCode);
};

/** \brief contains one or more taxonomies defining any classificatory codes used elsewhere
 *  in the text.
 */
class MEI_EXPORT ClassDecl : public MeiElement {
    public:
        ClassDecl();
        ClassDecl(const ClassDecl& other);
        virtual ~ClassDecl();

/* include <classDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(ClassDecl);
};

/** \brief – Groups information which describes the nature or topic of an entity.
 */
class MEI_EXPORT Classification : public MeiElement {
    public:
        Classification();
        Classification(const Classification& other);
        virtual ~Classification();

/* include <classification> */


    private:
        REGISTER_DECLARATION(Classification);
};

/** \brief contains a description of the physical condition of the manuscript.
 */
class MEI_EXPORT Condition : public MeiElement {
    public:
        Condition();
        Condition(const Condition& other);
        virtual ~Condition();

/* include <condition> */


    private:
        REGISTER_DECLARATION(Condition);
};

/** \brief – Contains a single entry within a content description element.
 */
class MEI_EXPORT ContentItem : public MeiElement {
    public:
        ContentItem();
        ContentItem(const ContentItem& other);
        virtual ~ContentItem();

/* include <contentItem> */


    private:
        REGISTER_DECLARATION(ContentItem);
};

/** \brief – Description of the material contained within a resource.
 */
class MEI_EXPORT Contents : public MeiElement {
    public:
        Contents();
        Contents(const Contents& other);
        virtual ~Contents();

/* include <contents> */


    private:
        REGISTER_DECLARATION(Contents);
};

/** \brief states how and under what circumstances corrections have been made in the text.
 */
class MEI_EXPORT Correction : public MeiElement {
    public:
        Correction();
        Correction(const Correction& other);
        virtual ~Correction();
        /** \brief indicates the degree of correction applied to the text.
         */
        MeiAttribute* getCorrlevel();
        void setCorrlevel(std::string _corrlevel);
        bool hasCorrlevel();
        void removeCorrlevel();

/* include <correction> */


    private:
        REGISTER_DECLARATION(Correction);
};

/** \brief contains information about the creation of a text.
 */
class MEI_EXPORT Creation : public MeiElement {
    public:
        Creation();
        Creation(const Creation& other);
        virtual ~Creation();

/* include <creation> */


    private:
        REGISTER_DECLARATION(Creation);
};

/** \brief contains a dimensional specification.
 */
class MEI_EXPORT Dimensions : public MeiElement {
    public:
        Dimensions();
        Dimensions(const Dimensions& other);
        virtual ~Dimensions();

/* include <dimensions> */


    private:
        REGISTER_DECLARATION(Dimensions);
};

/** \brief supplies the name of a person or other agency responsible for the distribution
 *  of a text.
 */
class MEI_EXPORT Distributor : public MeiElement {
    public:
        Distributor();
        Distributor(const Distributor& other);
        virtual ~Distributor();

/* include <distributor> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Distributor);
};

/** \brief describes the particularities of one edition of a text.
 */
class MEI_EXPORT Edition : public MeiElement {
    public:
        Edition();
        Edition(const Edition& other);
        virtual ~Edition();

/* include <edition> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Edition);
};

/** \brief groups information relating to one edition of a text.
 */
class MEI_EXPORT EditionStmt : public MeiElement {
    public:
        EditionStmt();
        EditionStmt(const EditionStmt& other);
        virtual ~EditionStmt();

/* include <editionStmt> */


    private:
        REGISTER_DECLARATION(EditionStmt);
};

/** \brief provides details of editorial principles and practices applied during the
 *  encoding of a text.
 */
class MEI_EXPORT EditorialDecl : public MeiElement {
    public:
        EditorialDecl();
        EditorialDecl(const EditorialDecl& other);
        virtual ~EditorialDecl();

/* include <editorialDecl> */


    private:
        REGISTER_DECLARATION(EditorialDecl);
};

/** \brief documents the relationship between an electronic text and the source or sources
 *  from which it was derived.
 */
class MEI_EXPORT EncodingDesc : public MeiElement {
    public:
        EncodingDesc();
        EncodingDesc(const EncodingDesc& other);
        virtual ~EncodingDesc();

/* include <encodingDesc> */


    private:
        REGISTER_DECLARATION(EncodingDesc);
};

/** \brief – The name of a standard instrumental or vocal grouping, such as 'orchestra'
 *  or 'marching band'.
 */
class MEI_EXPORT Ensemble : public MeiElement {
    public:
        Ensemble();
        Ensemble(const Ensemble& other);
        virtual ~Ensemble();
        /** \brief identifies an occupation code defined within the classification system or
         *  taxonomy defined by the
         */
        MeiAttribute* getCode();
        void setCode(std::string _code);
        bool hasCode();
        void removeCode();

/* include <ensemble> */


    private:
        REGISTER_DECLARATION(Ensemble);
};

/** \brief contains data relating to any kind of significant event associated with a
 *  person, place, or organization.
 */
class MEI_EXPORT Event : public MeiElement {
    public:
        Event();
        Event(const Event& other);
        virtual ~Event();

/* include <event> */


    private:
        REGISTER_DECLARATION(Event);
};

/** \brief – Contains historical information given as a sequence of significant past
 *  events.
 */
class MEI_EXPORT EventList : public MeiElement {
    public:
        EventList();
        EventList(const EventList& other);
        virtual ~EventList();

/* include <eventList> */


    private:
        REGISTER_DECLARATION(EventList);
};

/** \brief (exhibition history) – A record of public exhibitions, including dates,
 *  venues, etc.
 */
class MEI_EXPORT ExhibHist : public MeiElement {
    public:
        ExhibHist();
        ExhibHist(const ExhibHist& other);
        virtual ~ExhibHist();

/* include <exhibHist> */


    private:
        REGISTER_DECLARATION(ExhibHist);
};

/** \brief describes the approximate size of a text stored on some carrier medium or of
 *  some other object, digital or non-digital, specified in any convenient units.
 */
class MEI_EXPORT Extent : public MeiElement {
    public:
        Extent();
        Extent(const Extent& other);
        virtual ~Extent();

/* include <extent> */


    private:
        REGISTER_DECLARATION(Extent);
};

/** \brief contains a full bibliographic description of an electronic file.
 */
class MEI_EXPORT FileDesc : public MeiElement {
    public:
        FileDesc();
        FileDesc(const FileDesc& other);
        virtual ~FileDesc();

/* include <fileDesc> */


    private:
        REGISTER_DECLARATION(FileDesc);
};

/** \brief specifies the name of an individual, institution, or organization responsible
 *  for the funding of a project or text.
 */
class MEI_EXPORT Funder : public MeiElement {
    public:
        Funder();
        Funder(const Funder& other);
        virtual ~Funder();

/* include <funder> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Funder);
};

/** \brief documents the notation and the datum used for geographic coordinates expressed
 *  as content of the
 */
class MEI_EXPORT GeoDecl : public MeiElement {
    public:
        GeoDecl();
        GeoDecl(const GeoDecl& other);
        virtual ~GeoDecl();
        /** \brief supplies a commonly used code name for the datum employed.
         */
        MeiAttribute* getDatum();
        void setDatum(std::string _datum);
        bool hasDatum();
        void removeDatum();

/* include <geoDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(GeoDecl);
};

/** \brief – Defines a distinct scribe or handwriting style.
 */
class MEI_EXPORT Hand : public MeiElement {
    public:
        Hand();
        Hand(const Hand& other);
        virtual ~Hand();
        /** \brief marks this hand as the first one of the document.
         */
        MeiAttribute* getInitial();
        void setInitial(std::string _initial);
        bool hasInitial();
        void removeInitial();

/* include <hand> */


    private:
        REGISTER_DECLARATION(Hand);
};

/** \brief – Container for one or more hand elements.
 */
class MEI_EXPORT HandList : public MeiElement {
    public:
        HandList();
        HandList(const HandList& other);
        virtual ~HandList();

/* include <handList> */


    private:
        REGISTER_DECLARATION(HandList);
};

/** \brief describes a particular style or hand distinguished within a manuscript.
 */
class MEI_EXPORT HandNote : public MeiElement {
    public:
        HandNote();
        HandNote(const HandNote& other);
        virtual ~HandNote();

/* include <handNote> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        HandFeaturesMixIn    m_HandFeatures;

    private:
        REGISTER_DECLARATION(HandNote);
};

/** \brief groups elements describing the full history of a manuscript or manuscript part.
 */
class MEI_EXPORT History : public MeiElement {
    public:
        History();
        History(const History& other);
        virtual ~History();

/* include <history> */


    private:
        REGISTER_DECLARATION(History);
};

/** \brief summarizes the way in which hyphenation in a source text has been treated in an
 *  encoded version of it.
 */
class MEI_EXPORT Hyphenation : public MeiElement {
    public:
        Hyphenation();
        Hyphenation(const Hyphenation& other);
        virtual ~Hyphenation();
        /** \brief indicates whether or not end-of-line hyphenation has been retained in a text.
         */
        MeiAttribute* getEol();
        void setEol(std::string _eol);
        bool hasEol();
        void removeEol();

/* include <hyphenation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(Hyphenation);
};

/** \brief supplies any form of identifier used to identify some object, such as a
 *  bibliographic item, a person, a title, an organization, etc.
 * 
 *  in a standardized way.
 */
class MEI_EXPORT Idno : public MeiElement {
    public:
        Idno();
        Idno(const Idno& other);
        virtual ~Idno();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <idno> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Idno);
};

/** \brief – Incipit coded in a non-XML, plain text format, such as Plaine & Easie Code.
 */
class MEI_EXPORT IncipCode : public MeiElement {
    public:
        IncipCode();
        IncipCode(const IncipCode& other);
        virtual ~IncipCode();
        /** \brief specifies how the phrase is distinct diatopically
         */
        MeiAttribute* getSpace();
        void setSpace(std::string _space);
        bool hasSpace();
        void removeSpace();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <incipCode> */


    private:
        REGISTER_DECLARATION(IncipCode);
};

/** \brief – Opening words of a musical composition.
 */
class MEI_EXPORT IncipText : public MeiElement {
    public:
        IncipText();
        IncipText(const IncipText& other);
        virtual ~IncipText();

/* include <incipText> */


    private:
        REGISTER_DECLARATION(IncipText);
};

/** \brief – An inscription added to an item, such as a bookplate, a note designating the
 *  item as a gift, and/or the author's signature.
 */
class MEI_EXPORT Inscription : public MeiElement {
    public:
        Inscription();
        Inscription(const Inscription& other);
        virtual ~Inscription();

/* include <inscription> */


    private:
        REGISTER_DECLARATION(Inscription);
};

/** \brief (instrument or voice) – Name of an instrument on which a performer plays or a
 *  performer's voice range.
 */
class MEI_EXPORT InstrVoice : public MeiElement {
    public:
        InstrVoice();
        InstrVoice(const InstrVoice& other);
        virtual ~InstrVoice();
        /** \brief identifies an occupation code defined within the classification system or
         *  taxonomy defined by the
         */
        MeiAttribute* getCode();
        void setCode(std::string _code);
        bool hasCode();
        void removeCode();
        /** \brief captures the number of beats in a measure, that is, the top number of the meter
         *  signature.
         */
        MeiAttribute* getCount();
        void setCount(std::string _count);
        bool hasCount();
        void removeCount();
        /** \brief marks this instrument or vocal part as a soloist.
         * 
         *  Do not use this attribute for a solo instrument which is not accompanied.
         */
        MeiAttribute* getSolo();
        void setSolo(std::string _solo);
        bool hasSolo();
        void removeSolo();

/* include <instrVoice> */


    private:
        REGISTER_DECLARATION(InstrVoice);
};

/** \brief – Several instrumental or vocal resources treated as a group.
 */
class MEI_EXPORT InstrVoiceGrp : public MeiElement {
    public:
        InstrVoiceGrp();
        InstrVoiceGrp(const InstrVoiceGrp& other);
        virtual ~InstrVoiceGrp();

/* include <instrVoiceGrp> */


    private:
        REGISTER_DECLARATION(InstrVoiceGrp);
};

/** \brief – Instrumental and non-dramatic vocal resources.
 */
class MEI_EXPORT Instrumentation : public MeiElement {
    public:
        Instrumentation();
        Instrumentation(const Instrumentation& other);
        virtual ~Instrumentation();

/* include <instrumentation> */


    private:
        REGISTER_DECLARATION(Instrumentation);
};

/** \brief describes the scope of any analytic or interpretive information added to the
 *  text in addition to the transcription.
 */
class MEI_EXPORT Interpretation : public MeiElement {
    public:
        Interpretation();
        Interpretation(const Interpretation& other);
        virtual ~Interpretation();

/* include <interpretation> */


    private:
        REGISTER_DECLARATION(Interpretation);
};

/** \brief – Key captures information about tonal center and mode.
 */
class MEI_EXPORT Key : public MeiElement {
    public:
        Key();
        Key(const Key& other);
        virtual ~Key();

/* include <key> */


    private:
        REGISTER_DECLARATION(Key);
};

/** \brief contains a list of keywords or phrases identifying the topic or nature of a
 *  text.
 */
class MEI_EXPORT Keywords : public MeiElement {
    public:
        Keywords();
        Keywords(const Keywords& other);
        virtual ~Keywords();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();

/* include <keywords> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Keywords);
};

/** \brief describes the languages, sublanguages, registers, dialects, etc.
 * 
 *  represented within a text.
 */
class MEI_EXPORT LangUsage : public MeiElement {
    public:
        LangUsage();
        LangUsage(const LangUsage& other);
        virtual ~LangUsage();

/* include <langUsage> */


    private:
        REGISTER_DECLARATION(LangUsage);
};

/** \brief characterizes a single language or sublanguage used within a text.
 */
class MEI_EXPORT Language : public MeiElement {
    public:
        Language();
        Language(const Language& other);
        virtual ~Language();

/* include <language> */


    private:
        REGISTER_DECLARATION(Language);
};

/** \brief contains information about a licence or other legal agreement applicable to the
 *  text.
 */
class MEI_EXPORT Licence : public MeiElement {
    public:
        Licence();
        Licence(const Licence& other);
        virtual ~Licence();

/* include <licence> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Licence);
};

/** \brief groups a number of change descriptions associated with either the creation of a
 *  source text or the revision of an encoded text.
 */
class MEI_EXPORT ListChange : public MeiElement {
    public:
        ListChange();
        ListChange(const ListChange& other);
        virtual ~ListChange();
        /** \brief indicates whether the ordering of its child
         */
        MeiAttribute* getOrdered();
        void setOrdered(std::string _ordered);
        bool hasOrdered();
        void removeOrdered();

/* include <listChange> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(ListChange);
};

/** \brief contains a list of definitions of prefixing schemes used in
 */
class MEI_EXPORT ListPrefixDef : public MeiElement {
    public:
        ListPrefixDef();
        ListPrefixDef(const ListPrefixDef& other);
        virtual ~ListPrefixDef();

/* include <listPrefixDef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(ListPrefixDef);
};

/** \brief (MEI header) – Supplies the descriptive and declarative metadata prefixed to
 *  every MEI-conformant text.
 */
class MEI_EXPORT MeiHead : public MeiElement {
    public:
        MeiHead();
        MeiHead(const MeiHead& other);
        virtual ~MeiHead();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <meiHead> */


    private:
        REGISTER_DECLARATION(MeiHead);
};

/** \brief – Captures information about mensuration within bibliographic descriptions.
 */
class MEI_EXPORT Mensuration : public MeiElement {
    public:
        Mensuration();
        Mensuration(const Mensuration& other);
        virtual ~Mensuration();

/* include <mensuration> */


    private:
        REGISTER_DECLARATION(Mensuration);
};

/** \brief – Captures information about the time signature within bibliographic
 *  descriptions.
 */
class MEI_EXPORT Meter : public MeiElement {
    public:
        Meter();
        Meter(const Meter& other);
        virtual ~Meter();

/* include <meter> */


    private:
        REGISTER_DECLARATION(Meter);
};

/** \brief supplies the formal name of the namespace to which the elements documented by
 *  its children belong.
 */
class MEI_EXPORT Namespace : public MeiElement {
    public:
        Namespace();
        Namespace(const Namespace& other);
        virtual ~Namespace();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();

/* include <namespace> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Namespace);
};

/** \brief indicates the extent of normalization or regularization of the original source
 *  carried out in converting it to electronic form.
 */
class MEI_EXPORT Normalization : public MeiElement {
    public:
        Normalization();
        Normalization(const Normalization& other);
        virtual ~Normalization();

/* include <normalization> */


    private:
        REGISTER_DECLARATION(Normalization);
};

/** \brief collects together any notes providing information about a text additional to
 *  that recorded in other parts of the bibliographic description.
 */
class MEI_EXPORT NotesStmt : public MeiElement {
    public:
        NotesStmt();
        NotesStmt(const NotesStmt& other);
        virtual ~NotesStmt();

/* include <notesStmt> */


    private:
        REGISTER_DECLARATION(NotesStmt);
};

/** \brief (performance medium) – Indicates the number and character of the performing
 *  forces used in a musical composition.
 */
class MEI_EXPORT PerfMedium : public MeiElement {
    public:
        PerfMedium();
        PerfMedium(const PerfMedium& other);
        virtual ~PerfMedium();

/* include <perfMedium> */


    private:
        REGISTER_DECLARATION(PerfMedium);
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


    private:
        REGISTER_DECLARATION(PhysDesc);
};

/** \brief (physical location) – Location of the source within a repository, e.g., shelf
 *  mark or other locational information.
 */
class MEI_EXPORT PhysLoc : public MeiElement {
    public:
        PhysLoc();
        PhysLoc(const PhysLoc& other);
        virtual ~PhysLoc();

/* include <physLoc> */


    private:
        REGISTER_DECLARATION(PhysLoc);
};

/** \brief (physical medium) – Records the physical materials used in the source, such as
 *  ink and paper.
 */
class MEI_EXPORT PhysMedium : public MeiElement {
    public:
        PhysMedium();
        PhysMedium(const PhysMedium& other);
        virtual ~PhysMedium();

/* include <physMedium> */


    private:
        REGISTER_DECLARATION(PhysMedium);
};

/** \brief (plate number) – Designation assigned to a resource by a music publisher,
 *  usually printed at the bottom of each page, and sometimes appearing also on the
 *  title page.
 */
class MEI_EXPORT PlateNum : public MeiElement {
    public:
        PlateNum();
        PlateNum(const PlateNum& other);
        virtual ~PlateNum();

/* include <plateNum> */


    private:
        REGISTER_DECLARATION(PlateNum);
};

/** \brief defines a prefixing scheme used in
 */
class MEI_EXPORT PrefixDef : public MeiElement {
    public:
        PrefixDef();
        PrefixDef(const PrefixDef& other);
        virtual ~PrefixDef();
        /** \brief supplies the identifier which functions as the prefix for an abbreviated
         *  pointing scheme such as a private URI scheme.
         * 
         *  The prefix constitutes the text preceding the first colon.
         */
        MeiAttribute* getIdent();
        void setIdent(std::string _ident);
        bool hasIdent();
        void removeIdent();

/* include <prefixDef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PatternReplacementMixIn    m_PatternReplacement;

    private:
        REGISTER_DECLARATION(PrefixDef);
};

/** \brief – The cost of access to a bibliographic item.
 */
class MEI_EXPORT Price : public MeiElement {
    public:
        Price();
        Price(const Price& other);
        virtual ~Price();

/* include <price> */


    private:
        REGISTER_DECLARATION(Price);
};

/** \brief supplies the name of the principal researcher responsible for the creation of an
 *  electronic text.
 */
class MEI_EXPORT Principal : public MeiElement {
    public:
        Principal();
        Principal(const Principal& other);
        virtual ~Principal();

/* include <principal> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Principal);
};

/** \brief provides a detailed description of non-bibliographic aspects of a text,
 *  specifically the languages and sublanguages used, the situation in which it was
 *  produced, the participants and their setting.
 */
class MEI_EXPORT ProfileDesc : public MeiElement {
    public:
        ProfileDesc();
        ProfileDesc(const ProfileDesc& other);
        virtual ~ProfileDesc();

/* include <profileDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(ProfileDesc);
};

/** \brief describes in detail the aim or purpose for which an electronic file was encoded,
 *  together with any other relevant information concerning the process by which it
 *  was assembled or collected.
 */
class MEI_EXPORT ProjectDesc : public MeiElement {
    public:
        ProjectDesc();
        ProjectDesc(const ProjectDesc& other);
        virtual ~ProjectDesc();

/* include <projectDesc> */


    private:
        REGISTER_DECLARATION(ProjectDesc);
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


    private:
        REGISTER_DECLARATION(Provenance);
};

/** \brief (publication statement) – Container for information regarding the publication
 *  or distribution of a bibliographic item, including the publisher's name and
 *  address, the date of publication, and other relevant details.
 */
class MEI_EXPORT PubStmt : public MeiElement {
    public:
        PubStmt();
        PubStmt(const PubStmt& other);
        virtual ~PubStmt();

/* include <pubStmt> */


    private:
        REGISTER_DECLARATION(PubStmt);
};

/** \brief groups information concerning the publication or distribution of an electronic
 *  or other text.
 */
class MEI_EXPORT PublicationStmt : public MeiElement {
    public:
        PublicationStmt();
        PublicationStmt(const PublicationStmt& other);
        virtual ~PublicationStmt();

/* include <publicationStmt> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(PublicationStmt);
};

/** \brief specifies editorial practice adopted with respect to quotation marks in the
 *  original.
 */
class MEI_EXPORT Quotation : public MeiElement {
    public:
        Quotation();
        Quotation(const Quotation& other);
        virtual ~Quotation();
        /** \brief indicates whether or not quotation marks have been retained as content within
         *  the text.
         */
        MeiAttribute* getMarks();
        void setMarks(std::string _marks);
        bool hasMarks();
        void removeMarks();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <quotation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(Quotation);
};

/** \brief specifies one component of a canonical reference defined by the milestone
 *  method.
 */
class MEI_EXPORT RefState : public MeiElement {
    public:
        RefState();
        RefState(const RefState& other);
        virtual ~RefState();
        /** \brief specifies the fixed length of the reference component.
         */
        MeiAttribute* getLength();
        void setLength(std::string _length);
        bool hasLength();
        void removeLength();
        /** \brief supplies a delimiting string following the reference component.
         */
        MeiAttribute* getDelim();
        void setDelim(std::string _delim);
        bool hasDelim();
        void removeDelim();

/* include <refState> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        MilestoneUnitMixIn    m_MilestoneUnit;
        EditionMixIn    m_Edition;

    private:
        REGISTER_DECLARATION(RefState);
};

/** \brief specifies how canonical references are constructed for this text.
 */
class MEI_EXPORT RefsDecl : public MeiElement {
    public:
        RefsDecl();
        RefsDecl(const RefsDecl& other);
        virtual ~RefsDecl();

/* include <refsDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(RefsDecl);
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
        /** \brief describes the relationship between the <relatedItem> and the resource described
         *  in the parent element, i.e.
         * 
         *  <source> or <relatedItem>. "preceding" indicates a predecessor to the resource;
         *  "succeeding" applies to a successor to the resource; "original" indicates the
         *  original form of the resource; "host" provides info concerning an intellectual
         *  or physical constituent unit of the resource; "otherVersion" indicates a change
         *  in the intellectual content of the resource not significant enough to be a
         *  different work; "otherFormat" indicates a change in physical format of the
         *  resource; "isReferencedBy" applies to a citation or reference to published
         *  bibliographic descriptions, reviews, abstracts, or indexes of the content of the
         *  resource; "references" applies to a resource cited or referred to in the
         *  resource. These values are based on MODS version 3.4.
         */
        MeiAttribute* getRel();
        void setRel(std::string _rel);
        bool hasRel();
        void removeRel();

/* include <relatedItem> */


    private:
        REGISTER_DECLARATION(RelatedItem);
};

/** \brief supplies information about the rendition or appearance of one or more elements
 *  in the source text.
 */
class MEI_EXPORT Rendition : public MeiElement {
    public:
        Rendition();
        Rendition(const Rendition& other);
        virtual ~Rendition();
        /** \brief where the measurement summarizes more than one observation, specifies the
         *  applicability of this measurement.
         */
        MeiAttribute* getScope();
        void setScope(std::string _scope);
        bool hasScope();
        void removeScope();

/* include <rendition> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        StyleDefMixIn    m_StyleDef;

    private:
        REGISTER_DECLARATION(Rendition);
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


    private:
        REGISTER_DECLARATION(RespStmt);
};

/** \brief summarizes the revision history for a file.
 */
class MEI_EXPORT RevisionDesc : public MeiElement {
    public:
        RevisionDesc();
        RevisionDesc(const RevisionDesc& other);
        virtual ~RevisionDesc();

/* include <revisionDesc> */


    private:
        REGISTER_DECLARATION(RevisionDesc);
};

/** \brief contains a prose description of the rationale and methods used in sampling texts
 *  in the creation of a corpus or collection.
 */
class MEI_EXPORT SamplingDecl : public MeiElement {
    public:
        SamplingDecl();
        SamplingDecl(const SamplingDecl& other);
        virtual ~SamplingDecl();

/* include <samplingDecl> */


    private:
        REGISTER_DECLARATION(SamplingDecl);
};

/** \brief describes a particular script distinguished within the description of a
 *  manuscript or similar resource.
 */
class MEI_EXPORT ScriptNote : public MeiElement {
    public:
        ScriptNote();
        ScriptNote(const ScriptNote& other);
        virtual ~ScriptNote();

/* include <scriptNote> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        HandFeaturesMixIn    m_HandFeatures;

    private:
        REGISTER_DECLARATION(ScriptNote);
};

/** \brief describes the principles according to which the text has been segmented, for
 *  example into sentences, tone-units, graphemic strata, etc.
 */
class MEI_EXPORT Segmentation : public MeiElement {
    public:
        Segmentation();
        Segmentation(const Segmentation& other);
        virtual ~Segmentation();

/* include <segmentation> */


    private:
        REGISTER_DECLARATION(Segmentation);
};

/** \brief groups information about the series, if any, to which a publication belongs.
 */
class MEI_EXPORT SeriesStmt : public MeiElement {
    public:
        SeriesStmt();
        SeriesStmt(const SeriesStmt& other);
        virtual ~SeriesStmt();

/* include <seriesStmt> */


    private:
        REGISTER_DECLARATION(SeriesStmt);
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


    private:
        REGISTER_DECLARATION(Source);
};

/** \brief describes the source from which an electronic text was derived or generated,
 *  typically a bibliographic description in the case of a digitized text, or a
 *  phrase such as "born digital" for a text which has no previous existence.
 */
class MEI_EXPORT SourceDesc : public MeiElement {
    public:
        SourceDesc();
        SourceDesc(const SourceDesc& other);
        virtual ~SourceDesc();

/* include <sourceDesc> */


    private:
        REGISTER_DECLARATION(SourceDesc);
};

/** \brief specifies the name of a sponsoring organization or institution.
 */
class MEI_EXPORT Sponsor : public MeiElement {
    public:
        Sponsor();
        Sponsor(const Sponsor& other);
        virtual ~Sponsor();

/* include <sponsor> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Sponsor);
};

/** \brief specifies the format used when standardized date or number values are supplied.
 */
class MEI_EXPORT StdVals : public MeiElement {
    public:
        StdVals();
        StdVals(const StdVals& other);
        virtual ~StdVals();

/* include <stdVals> */


    private:
        REGISTER_DECLARATION(StdVals);
};

/** \brief specifies the name of the formal language in which style or renditional
 *  information is supplied elsewhere in the document.
 * 
 *  The specific version of the scheme may also be supplied.
 */
class MEI_EXPORT StyleDefDecl : public MeiElement {
    public:
        StyleDefDecl();
        StyleDefDecl(const StyleDefDecl& other);
        virtual ~StyleDefDecl();

/* include <styleDefDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;
        StyleDefMixIn    m_StyleDef;

    private:
        REGISTER_DECLARATION(StyleDefDecl);
};

/** \brief (system requirements) – System requirements for using the electronic item.
 */
class MEI_EXPORT SysReq : public MeiElement {
    public:
        SysReq();
        SysReq(const SysReq& other);
        virtual ~SysReq();

/* include <sysReq> */


    private:
        REGISTER_DECLARATION(SysReq);
};

/** \brief supplies information about the usage of a specific element within a text.
 */
class MEI_EXPORT TagUsage : public MeiElement {
    public:
        TagUsage();
        TagUsage(const TagUsage& other);
        virtual ~TagUsage();
        /** \brief specifies the name (generic identifier) of the element indicated by the tag.
         */
        MeiAttribute* getGi();
        void setGi(std::string _gi);
        bool hasGi();
        void removeGi();
        /** \brief specifies the number of occurrences of this element within the text.
         */
        MeiAttribute* getOccurs();
        void setOccurs(std::string _occurs);
        bool hasOccurs();
        void removeOccurs();
        /** \brief specifies the number of occurrences of this element within the text which bear a
         *  distinct value for the global
         */
        MeiAttribute* getWithId();
        void setWithId(std::string _withId);
        bool hasWithId();
        void removeWithId();
        /** \brief specifies the identifier of a
         */
        MeiAttribute* getRender();
        void setRender(std::string _render);
        bool hasRender();
        void removeRender();

/* include <tagUsage> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TagUsage);
};

/** \brief provides detailed information about the tagging applied to a document.
 */
class MEI_EXPORT TagsDecl : public MeiElement {
    public:
        TagsDecl();
        TagsDecl(const TagsDecl& other);
        virtual ~TagsDecl();

/* include <tagsDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TagsDecl);
};

/** \brief defines a typology either implicitly, by means of a bibliographic citation, or
 *  explicitly by a structured taxonomy.
 */
class MEI_EXPORT Taxonomy : public MeiElement {
    public:
        Taxonomy();
        Taxonomy(const Taxonomy& other);
        virtual ~Taxonomy();

/* include <taxonomy> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Taxonomy);
};

/** \brief supplies the descriptive and declarative information making up an electronic
 *  title page prefixed to every TEI-conformant text.
 */
class MEI_EXPORT TeiHeader : public MeiElement {
    public:
        TeiHeader();
        TeiHeader(const TeiHeader& other);
        virtual ~TeiHeader();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <teiHeader> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TeiHeader);
};

/** \brief contains a single-word, multi-word, or symbolic designation which is regarded as
 *  a technical term.
 */
class MEI_EXPORT Term : public MeiElement {
    public:
        Term();
        Term(const Term& other);
        virtual ~Term();
        /** \brief contains a reference to the controlled vocabulary from which the terms are
         *  drawn.
         * 
         *  The value must match the value of an ID attribute on a classCode element given
         *  elsewhere in the document.
         */
        MeiAttribute* getClasscode();
        void setClasscode(std::string _classcode);
        bool hasClasscode();
        void removeClasscode();

/* include <term> */


    private:
        REGISTER_DECLARATION(Term);
};

/** \brief – Collection of text phrases which describe a resource.
 */
class MEI_EXPORT TermList : public MeiElement {
    public:
        TermList();
        TermList(const TermList& other);
        virtual ~TermList();
        /** \brief contains a reference to the controlled vocabulary from which the terms are
         *  drawn.
         * 
         *  The value must match the value of an ID attribute on a classCode element given
         *  elsewhere in the document.
         */
        MeiAttribute* getClasscode();
        void setClasscode(std::string _classcode);
        bool hasClasscode();
        void removeClasscode();

/* include <termList> */


    private:
        REGISTER_DECLARATION(TermList);
};

/** \brief groups information which describes the nature or topic of a text in terms of a
 *  standard classification scheme, thesaurus, etc.
 */
class MEI_EXPORT TextClass : public MeiElement {
    public:
        TextClass();
        TextClass(const TextClass& other);
        virtual ~TextClass();

/* include <textClass> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(TextClass);
};

/** \brief groups information about the title of a work and those responsible for its
 *  content.
 */
class MEI_EXPORT TitleStmt : public MeiElement {
    public:
        TitleStmt();
        TitleStmt(const TitleStmt& other);
        virtual ~TitleStmt();

/* include <titleStmt> */


    private:
        REGISTER_DECLARATION(TitleStmt);
};

/** \brief (treatment history) – A record of the treatment the item has undergone (e.g.,
 *  de-acidification, restoration, etc.).
 */
class MEI_EXPORT TreatHist : public MeiElement {
    public:
        TreatHist();
        TreatHist(const TreatHist& other);
        virtual ~TreatHist();

/* include <treatHist> */


    private:
        REGISTER_DECLARATION(TreatHist);
};

/** \brief (treatment scheduled) – Scheduled treatment, e.g.
 * 
 *  de-acidification, restoration, etc., for an item.
 */
class MEI_EXPORT TreatSched : public MeiElement {
    public:
        TreatSched();
        TreatSched(const TreatSched& other);
        virtual ~TreatSched();

/* include <treatSched> */


    private:
        REGISTER_DECLARATION(TreatSched);
};

/** \brief describes a particular font or other significant typographic feature
 *  distinguished within the description of a printed resource.
 */
class MEI_EXPORT TypeNote : public MeiElement {
    public:
        TypeNote();
        TypeNote(const TypeNote& other);
        virtual ~TypeNote();

/* include <typeNote> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        HandFeaturesMixIn    m_HandFeatures;

    private:
        REGISTER_DECLARATION(TypeNote);
};

/** \brief (unpublished) – Used to explicitly indicate that a bibliographic resource is
 *  unpublished.
 */
class MEI_EXPORT Unpub : public MeiElement {
    public:
        Unpub();
        Unpub(const Unpub& other);
        virtual ~Unpub();

/* include <unpub> */


    private:
        REGISTER_DECLARATION(Unpub);
};

/** \brief (usage restrictions) – Container for information about the conditions that
 *  affect use of a bibliographic item after access has been granted.
 */
class MEI_EXPORT UseRestrict : public MeiElement {
    public:
        UseRestrict();
        UseRestrict(const UseRestrict& other);
        virtual ~UseRestrict();

/* include <useRestrict> */


    private:
        REGISTER_DECLARATION(UseRestrict);
};

/** \brief contains a word or phrase describing a watermark or similar device.
 */
class MEI_EXPORT Watermark : public MeiElement {
    public:
        Watermark();
        Watermark(const Watermark& other);
        virtual ~Watermark();

/* include <watermark> */


    private:
        REGISTER_DECLARATION(Watermark);
};

/** \brief – Provides a detailed description of the non-bibliographic aspects of a text,
 *  specifically its history, language use, and high-level musical attributes: key,
 *  tempo, meter, and medium of performance.
 */
class MEI_EXPORT Work : public MeiElement {
    public:
        Work();
        Work(const Work& other);
        virtual ~Work();

/* include <work> */


    private:
        REGISTER_DECLARATION(Work);
};

/** \brief (work description) – Grouping mechanism for information describing non-
 *  bibliographic aspects of a text.
 */
class MEI_EXPORT WorkDesc : public MeiElement {
    public:
        WorkDesc();
        WorkDesc(const WorkDesc& other);
        virtual ~WorkDesc();

/* include <workDesc> */


    private:
        REGISTER_DECLARATION(WorkDesc);
};
}
#endif  // HEADER_H_
