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

#ifndef HEADER_H_
#define HEADER_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "headermixins.h"
#include "mensuralmixins.h"
#include "critappmixins.h"
#include "edittransmixins.h"
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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(AccessRestrict);
};

/** \brief (alternative identifier) – May contain a bibliographic identifier that does
 *  not fit within the meiHead element's id attribute, for example because the
 *  identifier does not fit the definition of an XML id or because multiple
 *  identifiers are needed.
 */
class MEI_EXPORT AltId : public MeiElement {
    public:
        AltId();
        AltId(const AltId& other);
        virtual ~AltId();

/* include <altId> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AltId);
};

/** \brief (application information) – Groups information about applications which have
 *  acted upon the MEI file.
 */
class MEI_EXPORT AppInfo : public MeiElement {
    public:
        AppInfo();
        AppInfo(const AppInfo& other);
        virtual ~AppInfo();

/* include <appInfo> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(AppInfo);
};

/** \brief Provides information about an application which has acted upon the current
 *  document.
 */
class MEI_EXPORT Application : public MeiElement {
    public:
        Application();
        Application(const Application& other);
        virtual ~Application();
        /** \brief Supplies a version number for an application, independent of its identifier or
         *  display name.
         */
        MeiAttribute* getVersion();
        void setVersion(std::string _version);
        bool hasVersion();
        void removeVersion();

/* include <application> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DatableMixIn    m_Datable;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Application);
};

/** \brief Defines the class of user for which the work is intended, as defined by age
 *  group (e.g., children, young adults, adults, etc.), educational level (e.g.,
 *  primary, secondary, etc.), or other categorization.
 */
class MEI_EXPORT Audience : public MeiElement {
    public:
        Audience();
        Audience(const Audience& other);
        virtual ~Audience();

/* include <audience> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Audience);
};

/** \brief Groups elements that describe the availability of and access to a bibliographic
 *  item, including an MEI-encoded document.
 */
class MEI_EXPORT Availability : public MeiElement {
    public:
        Availability();
        Availability(const Availability& other);
        virtual ~Availability();

/* include <availability> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DatapointingMixIn    m_Datapointing;

    private:
        REGISTER_DECLARATION(Availability);
};

/** \brief Contains the primary statement of responsibility given for a work on its title
 *  page.
 */
class MEI_EXPORT Byline : public MeiElement {
    public:
        Byline();
        Byline(const Byline& other);
        virtual ~Byline();

/* include <byline> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Byline);
};

/** \brief (capture mode) – The means used to record notation, sound, or images in the
 *  production of a source/manifestation (e.g., analogue, acoustic, electric,
 *  digital, optical etc.).
 */
class MEI_EXPORT CaptureMode : public MeiElement {
    public:
        CaptureMode();
        CaptureMode(const CaptureMode& other);
        virtual ~CaptureMode();

/* include <captureMode> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CaptureMode);
};

/** \brief (carrier form) – The specific class of material to which the physical carrier
 *  of the source/manifestation belongs (e.g., sound cassette, videodisc, microfilm
 *  cartridge, transparency, etc.).
 * 
 *  The carrier for a manifestation comprising multiple physical components may
 *  include more than one form (e.g., a filmstrip with an accompanying booklet, a
 *  separate sound disc carrying the sound track for a film, etc.).
 */
class MEI_EXPORT CarrierForm : public MeiElement {
    public:
        CarrierForm();
        CarrierForm(const CarrierForm& other);
        virtual ~CarrierForm();

/* include <carrierForm> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(CarrierForm);
};

/** \brief Individual change within the revision description.
 */
class MEI_EXPORT Change : public MeiElement {
    public:
        Change();
        Change(const Change& other);
        virtual ~Change();

/* include <change> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatableMixIn    m_Datable;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ChangeDesc);
};

/** \brief (classification code) – Holds a citation to the source of controlled-
 *  vocabulary terms used in the <termList> element; for example, Library of
 *  Congress Subject Headings (LCSH), Library of Congress Classification (LCC),
 *  Library of Congress Name Authority File (LCNAF), or other thesaurus or ontology.
 */
class MEI_EXPORT ClassCode : public MeiElement {
    public:
        ClassCode();
        ClassCode(const ClassCode& other);
        virtual ~ClassCode();

/* include <classCode> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ClassCode);
};

/** \brief Groups information which describes the nature or topic of an entity.
 */
class MEI_EXPORT Classification : public MeiElement {
    public:
        Classification();
        Classification(const Classification& other);
        virtual ~Classification();

/* include <classification> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;

    private:
        REGISTER_DECLARATION(Classification);
};

/** \brief The physical condition of an item, particularly any variances between the
 *  physical make-up of the item and that of other copies of the same item (e.g.,
 *  missing pages or plates, brittleness, faded images, etc.).
 */
class MEI_EXPORT Condition : public MeiElement {
    public:
        Condition();
        Condition(const Condition& other);
        virtual ~Condition();

/* include <condition> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Condition);
};

/** \brief Contains a single entry within a content description element.
 */
class MEI_EXPORT ContentItem : public MeiElement {
    public:
        ContentItem();
        ContentItem(const ContentItem& other);
        virtual ~ContentItem();

/* include <contentItem> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ContentItem);
};

/** \brief Description of the material contained within a resource.
 */
class MEI_EXPORT Contents : public MeiElement {
    public:
        Contents();
        Contents(const Contents& other);
        virtual ~Contents();

/* include <contents> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Contents);
};

/** \brief The historical, social, intellectual, artistic, or other context within which
 *  the work was originally conceived (e.g., the 17th century restoration of the
 *  monarchy in England, the aesthetic movement of the late 19th century, etc.) or
 *  the historical, social, intellectual, artistic, or other context within which
 *  the expression was realized.
 */
class MEI_EXPORT Context : public MeiElement {
    public:
        Context();
        Context(const Context& other);
        virtual ~Context();

/* include <context> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Context);
};

/** \brief States how and under what circumstances corrections have been made in the text.
 */
class MEI_EXPORT Correction : public MeiElement {
    public:
        Correction();
        Correction(const Correction& other);
        virtual ~Correction();
        /** \brief Indicates the degree of correction applied to the text.
         */
        MeiAttribute* getCorrlevel();
        void setCorrlevel(std::string _corrlevel);
        bool hasCorrlevel();
        void removeCorrlevel();

/* include <correction> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;
        RegularmethodMixIn    m_Regularmethod;

    private:
        REGISTER_DECLARATION(Correction);
};

/** \brief Information about the physical size of a bibliographic source; usually includes
 *  numerical data.
 */
class MEI_EXPORT Dimensions : public MeiElement {
    public:
        Dimensions();
        Dimensions(const Dimensions& other);
        virtual ~Dimensions();

/* include <dimensions> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        MeasurementMixIn    m_Measurement;

    private:
        REGISTER_DECLARATION(Dimensions);
};

/** \brief (edition statement) – Container for meta-data pertaining to a particular
 *  edition of the material being described.
 */
class MEI_EXPORT EditionStmt : public MeiElement {
    public:
        EditionStmt();
        EditionStmt(const EditionStmt& other);
        virtual ~EditionStmt();

/* include <editionStmt> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(EditionStmt);
};

/** \brief (editorial declaration) – Used to provide details of editorial principles and
 *  practices applied during the encoding of musical text.
 */
class MEI_EXPORT EditorialDecl : public MeiElement {
    public:
        EditorialDecl();
        EditorialDecl(const EditorialDecl& other);
        virtual ~EditorialDecl();

/* include <editorialDecl> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(EditorialDecl);
};

/** \brief (encoding description) – Documents the relationship between an electronic file
 *  and the source or sources from which it was derived as well as applications used
 *  in the encoding/editing process.
 */
class MEI_EXPORT EncodingDesc : public MeiElement {
    public:
        EncodingDesc();
        EncodingDesc(const EncodingDesc& other);
        virtual ~EncodingDesc();

/* include <encodingDesc> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(EncodingDesc);
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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ExhibHist);
};

/** \brief (extended metadata) – Provides a container element for non-MEI metadata
 *  formats.
 */
class MEI_EXPORT ExtMeta : public MeiElement {
    public:
        ExtMeta();
        ExtMeta(const ExtMeta& other);
        virtual ~ExtMeta();

/* include <extMeta> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        WhitespaceMixIn    m_Whitespace;

    private:
        REGISTER_DECLARATION(ExtMeta);
};

/** \brief (file characteristics) – Standards or schemes used to encode the file (e.g.,
 *  ASCII, SGML, etc.), physical characteristics of the file (e.g., recording
 *  density, parity, blocking, etc.), and other characteristics that have a bearing
 *  on how the file can be processed.
 */
class MEI_EXPORT FileChar : public MeiElement {
    public:
        FileChar();
        FileChar(const FileChar& other);
        virtual ~FileChar();

/* include <fileChar> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(FileChar);
};

/** \brief (file description) – Contains a full bibliographic description of the MEI
 *  file.
 */
class MEI_EXPORT FileDesc : public MeiElement {
    public:
        FileDesc();
        FileDesc(const FileDesc& other);
        virtual ~FileDesc();

/* include <fileDesc> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(FileDesc);
};

/** \brief Contains a string that uniquely identifies an item, such as those constructed by
 *  combining groups of characters transcribed from specified pages of a printed
 *  item or a file's checksum.
 */
class MEI_EXPORT Fingerprint : public MeiElement {
    public:
        Fingerprint();
        Fingerprint(const Fingerprint& other);
        virtual ~Fingerprint();

/* include <fingerprint> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Fingerprint);
};

/** \brief Defines a distinct scribe or handwriting style.
 */
class MEI_EXPORT Hand : public MeiElement {
    public:
        Hand();
        Hand(const Hand& other);
        virtual ~Hand();
        /** \brief Marks this hand as the first one of the document.
         */
        MeiAttribute* getInitial();
        void setInitial(std::string _initial);
        bool hasInitial();
        void removeInitial();

/* include <hand> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        MediumMixIn    m_Medium;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Hand);
};

/** \brief Container for one or more hand elements.
 */
class MEI_EXPORT HandList : public MeiElement {
    public:
        HandList();
        HandList(const HandList& other);
        virtual ~HandList();

/* include <handList> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(HandList);
};

/** \brief Provides a container for information about the history of a resource.
 * 
 *  To facilitate efficient data interchange, basic information about the
 *  circumstances surrounding the creation of bibliographic resources should be
 *  recorded within the creation element.
 */
class MEI_EXPORT History : public MeiElement {
    public:
        History();
        History(const History& other);
        virtual ~History();

/* include <history> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(History);
};

/** \brief Incipit coded in a non-XML, plain text format, such as Plaine & Easie Code.
 */
class MEI_EXPORT IncipCode : public MeiElement {
    public:
        IncipCode();
        IncipCode(const IncipCode& other);
        virtual ~IncipCode();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <incipCode> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        InternetmediaMixIn    m_Internetmedia;
        PointingMixIn    m_Pointing;
        WhitespaceMixIn    m_Whitespace;

    private:
        REGISTER_DECLARATION(IncipCode);
};

/** \brief Opening words of a musical composition.
 */
class MEI_EXPORT IncipText : public MeiElement {
    public:
        IncipText();
        IncipText(const IncipText& other);
        virtual ~IncipText();

/* include <incipText> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        PointingMixIn    m_Pointing;
        InternetmediaMixIn    m_Internetmedia;

    private:
        REGISTER_DECLARATION(IncipText);
};

/** \brief An inscription added to an item, such as a bookplate, a note designating the
 *  item as a gift, and/or the author's signature.
 */
class MEI_EXPORT Inscription : public MeiElement {
    public:
        Inscription();
        Inscription(const Inscription& other);
        virtual ~Inscription();

/* include <inscription> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Inscription);
};

/** \brief Describes the scope of any analytic or interpretive information added to the
 *  transcription of the music.
 */
class MEI_EXPORT Interpretation : public MeiElement {
    public:
        Interpretation();
        Interpretation(const Interpretation& other);
        virtual ~Interpretation();

/* include <interpretation> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Interpretation);
};

/** \brief Key captures information about tonal center and mode.
 */
class MEI_EXPORT Key : public MeiElement {
    public:
        Key();
        Key(const Key& other);
        virtual ~Key();

/* include <key> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        KeySigLogMixIn    m_KeySigLog;
        AccidentalMixIn    m_Accidental;
        PitchMixIn    m_Pitch;

    private:
        REGISTER_DECLARATION(Key);
};

/** \brief (language usage) – Groups elements describing the languages, sub-languages,
 *  dialects, etc., represented within the encoded resource.
 */
class MEI_EXPORT LangUsage : public MeiElement {
    public:
        LangUsage();
        LangUsage(const LangUsage& other);
        virtual ~LangUsage();

/* include <langUsage> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;

    private:
        REGISTER_DECLARATION(LangUsage);
};

/** \brief Description of a language used in the document.
 */
class MEI_EXPORT Language : public MeiElement {
    public:
        Language();
        Language(const Language& other);
        virtual ~Language();

/* include <language> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Language);
};

/** \brief (MEI header) – Supplies the descriptive and declarative metadata prefixed to
 *  every MEI-conformant text.
 */
class MEI_EXPORT MeiHead : public MeiElement {
    public:
        MeiHead();
        MeiHead(const MeiHead& other);
        virtual ~MeiHead();
        /** \brief Characterizes the element in some sense, using any convenient classification
         *  scheme or typology.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <meiHead> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        LangMixIn    m_Lang;
        MeiversionMixIn    m_Meiversion;

    private:
        REGISTER_DECLARATION(MeiHead);
};

/** \brief Captures information about mensuration within bibliographic descriptions.
 */
class MEI_EXPORT Mensuration : public MeiElement {
    public:
        Mensuration();
        Mensuration(const Mensuration& other);
        virtual ~Mensuration();

/* include <mensuration> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        MensurLogMixIn    m_MensurLog;
        DurationRatioMixIn    m_DurationRatio;
        SlashcountMixIn    m_Slashcount;
        MensuralSharedMixIn    m_MensuralShared;

    private:
        REGISTER_DECLARATION(Mensuration);
};

/** \brief Captures information about the time signature within bibliographic descriptions.
 */
class MEI_EXPORT Meter : public MeiElement {
    public:
        Meter();
        Meter(const Meter& other);
        virtual ~Meter();

/* include <meter> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;
        MeterSigLogMixIn    m_MeterSigLog;

    private:
        REGISTER_DECLARATION(Meter);
};

/** \brief Indicates the extent of normalization or regularization of the original source
 *  carried out in converting it to electronic form.
 */
class MEI_EXPORT Normalization : public MeiElement {
    public:
        Normalization();
        Normalization(const Normalization& other);
        virtual ~Normalization();

/* include <normalization> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;
        RegularmethodMixIn    m_Regularmethod;

    private:
        REGISTER_DECLARATION(Normalization);
};

/** \brief (notes statement)– Collects any notes providing information about a text
 *  additional to that recorded in other parts of the bibliographic description.
 */
class MEI_EXPORT NotesStmt : public MeiElement {
    public:
        NotesStmt();
        NotesStmt(const NotesStmt& other);
        virtual ~NotesStmt();

/* include <notesStmt> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(NotesStmt);
};

/** \brief (other distinguishing characteristic) – Any characteristic that serves to
 *  differentiate a work or expression from another.
 */
class MEI_EXPORT OtherChar : public MeiElement {
    public:
        OtherChar();
        OtherChar(const OtherChar& other);
        virtual ~OtherChar();

/* include <otherChar> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(OtherChar);
};

/** \brief (performance duration) – Used to express the duration of performance of
 *  printed or manuscript music or the playing time for a sound recording,
 *  videorecording, etc.
 */
class MEI_EXPORT PerfDuration : public MeiElement {
    public:
        PerfDuration();
        PerfDuration(const PerfDuration& other);
        virtual ~PerfDuration();
        /** \brief Holds a W3C duration value, e.g., "PT2H34M45.67S".
         */
        MeiAttribute* getIsodur();
        void setIsodur(std::string _isodur);
        bool hasIsodur();
        void removeIsodur();

/* include <perfDuration> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PerfDuration);
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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        AuthorizedMixIn    m_Authorized;

    private:
        REGISTER_DECLARATION(PerfMedium);
};

/** \brief (performance resource) – Name of an instrument on which a performer plays, a
 *  performer's voice range, or a standard performing ensemble designation.
 */
class MEI_EXPORT PerfRes : public MeiElement {
    public:
        PerfRes();
        PerfRes(const PerfRes& other);
        virtual ~PerfRes();
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
        /** \brief Marks this instrument or vocal part as a soloist.
         * 
         *  Do not use this attribute for a solo instrument which is not accompanied.
         */
        MeiAttribute* getSolo();
        void setSolo(std::string _solo);
        bool hasSolo();
        void removeSolo();

/* include <perfRes> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        CanonicalMixIn    m_Canonical;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PerfRes);
};

/** \brief Several instrumental or vocal resources treated as a group.
 */
class MEI_EXPORT PerfResList : public MeiElement {
    public:
        PerfResList();
        PerfResList(const PerfResList& other);
        virtual ~PerfResList();
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

/* include <perfResList> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        CanonicalMixIn    m_Canonical;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PerfResList);
};

/** \brief (physical description) – Container for information about the appearance,
 *  construction, or handling of physical materials, such as their dimension,
 *  quantity, color, style, and technique of creation.
 */
class MEI_EXPORT PhysDesc : public MeiElement {
    public:
        PhysDesc();
        PhysDesc(const PhysDesc& other);
        virtual ~PhysDesc();

/* include <physDesc> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(PhysDesc);
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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        AuthorizedMixIn    m_Authorized;
        LangMixIn    m_Lang;

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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PlateNum);
};

/** \brief Playing speed for a sound recording is the speed at which the carrier must be
 *  operated to produce the sound intended (e.g., 33 1/3 rpm, 19 cm/s, etc.).
 */
class MEI_EXPORT PlayingSpeed : public MeiElement {
    public:
        PlayingSpeed();
        PlayingSpeed(const PlayingSpeed& other);
        virtual ~PlayingSpeed();

/* include <playingSpeed> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(PlayingSpeed);
};

/** \brief The cost of access to a bibliographic item.
 */
class MEI_EXPORT Price : public MeiElement {
    public:
        Price();
        Price(const Price& other);
        virtual ~Price();
        /** \brief Numeric value capturing a cost.
         * 
         *  Can only be interpreted in combination with the currency attribute.
         */
        MeiAttribute* getAmount();
        void setAmount(std::string _amount);
        bool hasAmount();
        void removeAmount();
        /** \brief Monetary unit.
         */
        MeiAttribute* getCurrency();
        void setCurrency(std::string _currency);
        bool hasCurrency();
        void removeCurrency();

/* include <price> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Price);
};

/** \brief (project description) – Project-level meta-data describing the aim or purpose
 *  for which the electronic file was encoded, funding agencies, etc.
 * 
 *  together with any other relevant information concerning the process by which it
 *  was assembled or collected.
 */
class MEI_EXPORT ProjectDesc : public MeiElement {
    public:
        ProjectDesc();
        ProjectDesc(const ProjectDesc& other);
        virtual ~ProjectDesc();

/* include <projectDesc> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ProjectDesc);
};

/** \brief The record of ownership or custodianship of an item.
 */
class MEI_EXPORT Provenance : public MeiElement {
    public:
        Provenance();
        Provenance(const Provenance& other);
        virtual ~Provenance();

/* include <provenance> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(PubStmt);
};

/** \brief (revision description) – Container for information about alterations that have
 *  been made to an MEI file.
 */
class MEI_EXPORT RevisionDesc : public MeiElement {
    public:
        RevisionDesc();
        RevisionDesc(const RevisionDesc& other);
        virtual ~RevisionDesc();

/* include <revisionDesc> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(RevisionDesc);
};

/** \brief (sampling declaration) – Contains a prose description of the rationale and
 *  methods used in sampling texts in the creation of a corpus or collection.
 */
class MEI_EXPORT SamplingDecl : public MeiElement {
    public:
        SamplingDecl();
        SamplingDecl(const SamplingDecl& other);
        virtual ~SamplingDecl();

/* include <samplingDecl> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(SamplingDecl);
};

/** \brief Describes the type of score used to represent a musical composition (e.g., short
 *  score, full score, condensed score, close score, etc.).
 */
class MEI_EXPORT ScoreFormat : public MeiElement {
    public:
        ScoreFormat();
        ScoreFormat(const ScoreFormat& other);
        virtual ~ScoreFormat();

/* include <scoreFormat> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(ScoreFormat);
};

/** \brief Describes the principles according to which the musical text has been segmented,
 *  for example into movements, sections, etc.
 */
class MEI_EXPORT Segmentation : public MeiElement {
    public:
        Segmentation();
        Segmentation(const Segmentation& other);
        virtual ~Segmentation();

/* include <segmentation> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Segmentation);
};

/** \brief (series statement) – Groups information about the series, if any, to which a
 *  publication belongs.
 */
class MEI_EXPORT SeriesStmt : public MeiElement {
    public:
        SeriesStmt();
        SeriesStmt(const SeriesStmt& other);
        virtual ~SeriesStmt();

/* include <seriesStmt> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(SeriesStmt);
};

/** \brief (sound channels) – Reflects the number of apparent sound channels in the
 *  playback of a recording (monaural, stereophonic, quadraphonic, etc.).
 */
class MEI_EXPORT SoundChan : public MeiElement {
    public:
        SoundChan();
        SoundChan(const SoundChan& other);
        virtual ~SoundChan();
        /** \brief Along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <soundChan> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(SoundChan);
};

/** \brief A bibliographic description of a source used in the creation of the electronic
 *  file.
 */
class MEI_EXPORT Source : public MeiElement {
    public:
        Source();
        Source(const Source& other);
        virtual ~Source();

/* include <source> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        PointingMixIn    m_Pointing;
        TargetevalMixIn    m_Targeteval;

    private:
        REGISTER_DECLARATION(Source);
};

/** \brief (source description) – A container for the descriptions of the source(s) used
 *  in the creation of the electronic file.
 */
class MEI_EXPORT SourceDesc : public MeiElement {
    public:
        SourceDesc();
        SourceDesc(const SourceDesc& other);
        virtual ~SourceDesc();

/* include <sourceDesc> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(SourceDesc);
};

/** \brief (special reproduction characteristic) – The equalization system, noise
 *  reduction system, etc.
 * 
 *  used in making the recording (e.g., NAB, DBX, Dolby, etc.).
 */
class MEI_EXPORT SpecRepro : public MeiElement {
    public:
        SpecRepro();
        SpecRepro(const SpecRepro& other);
        virtual ~SpecRepro();

/* include <specRepro> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(SpecRepro);
};

/** \brief (standard values) – Specifies the format used when standardized date or number
 *  values are supplied.
 */
class MEI_EXPORT StdVals : public MeiElement {
    public:
        StdVals();
        StdVals(const StdVals& other);
        virtual ~StdVals();

/* include <stdVals> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        DatapointingMixIn    m_Datapointing;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(StdVals);
};

/** \brief (system requirements) – System requirements for using the electronic item.
 */
class MEI_EXPORT SysReq : public MeiElement {
    public:
        SysReq();
        SysReq(const SysReq& other);
        virtual ~SysReq();

/* include <sysReq> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(SysReq);
};

/** \brief Keyword or phrase which describes a resource.
 */
class MEI_EXPORT Term : public MeiElement {
    public:
        Term();
        Term(const Term& other);
        virtual ~Term();

/* include <term> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        ClasscodeidentMixIn    m_Classcodeident;
        LangMixIn    m_Lang;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Term);
};

/** \brief Collection of text phrases which describe a resource.
 */
class MEI_EXPORT TermList : public MeiElement {
    public:
        TermList();
        TermList(const TermList& other);
        virtual ~TermList();

/* include <termList> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        ClasscodeidentMixIn    m_Classcodeident;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(TermList);
};

/** \brief (title statement) – Container for title and responsibility meta-data.
 */
class MEI_EXPORT TitleStmt : public MeiElement {
    public:
        TitleStmt();
        TitleStmt(const TitleStmt& other);
        virtual ~TitleStmt();

/* include <titleStmt> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(TitleStmt);
};

/** \brief (track configuration) – Number of physical/input tracks on a sound medium
 *  (e.g., eight track, twelve track).
 */
class MEI_EXPORT TrackConfig : public MeiElement {
    public:
        TrackConfig();
        TrackConfig(const TrackConfig& other);
        virtual ~TrackConfig();
        /** \brief Along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <trackConfig> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        AuthorizedMixIn    m_Authorized;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(TrackConfig);
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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(TreatSched);
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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(UseRestrict);
};

/** \brief Contains a description of a watermark or similar device.
 */
class MEI_EXPORT Watermark : public MeiElement {
    public:
        Watermark();
        Watermark(const Watermark& other);
        virtual ~Watermark();

/* include <watermark> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Watermark);
};

/** \brief Provides a detailed description of a work, specifically its history, language
 *  use, and high-level musical attributes: key, tempo, meter, medium of
 *  performance, and intended duration.
 */
class MEI_EXPORT Work : public MeiElement {
    public:
        Work();
        Work(const Work& other);
        virtual ~Work();

/* include <work> */

        DatapointingMixIn    m_Datapointing;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;

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

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(WorkDesc);
};
}
#endif  // HEADER_H_
