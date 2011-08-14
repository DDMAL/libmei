/*
    Copyright (c) 2011 Jamie Klassen, Alastair Porter, Mahtab Ghamsari-Esfahani, Andrew Hankinson

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

#include "facsimilemixins.h"
#include "sharedmixins.h"
#include "edittransmixins.h"
#include "critappmixins.h"
#include "headermixins.h"
using namespace std;
/** \brief  mei header ― A wrapper for general bibliographic and descriptive information
 *          about the encoded file.
 *
 * This information is often essential in a machine-readable environment. Five sub-          
 *          elements must be encoded in the following order: <altId>(optional),          
 *          <fileDesc>(required), <encodingDesc>(optional), <workDesc;>(optional), and          
 *          <revisionDesc>(optional). These elements and their sub-elements provide: a          
 *          unique identifier for the MEI file, bibliographic information about the MEI file          
 *          and its sources, information about the encoding process, information about the          
 *          creation of the work being encoded, and statements regarding significant          
 *          revisions of the file. The xml:lang attribute may be used to indicate the          
 *          language in which the metadata content of the header is provided. In order to          
 *          encourage uniformity in the provision of metadata across document types, this          
 *          element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct MeiHead : public BaseMeiElement{
    MeiHead();
    virtual ~MeiHead() {};

    string getTypeValue() throw (AttributeNotFoundException);

    MeiAttribute* getType() throw (AttributeNotFoundException);
    void setType(string _type);
    bool hasType();

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    MeiversionMixIn    m_Meiversion;
    private:
        //REGISTER_DECLARATION(MeiHead);
};

/** \brief  access restriction ― Describes the conditions that affect the accessibility of
 *          material.
 *
 * May indicate the nature of restrictions or the lack of restrictions. Do not          
 *          confuse this element with <useRestrict> (usage restrictions), which captures          
 *          information about limitations on the use of material, such as those afforded by          
 *          copyright. This element is modelled on an element in Encoded Archival          
 *          Description (EAD)..
 */
struct AccessRestrict : public BaseMeiElement{
    AccessRestrict();
    virtual ~AccessRestrict() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(AccessRestrict);
};

/** \brief  acquisition source ― Post-publication source, such as a vendor or distributor,
 *          from which access to a bibliographic item may be obtained,             including
 *          electronic access.
 *
 * This element is modelled on an element in Encoded Archival Description (EAD)..
 */
struct AcqSource : public BaseMeiElement{
    AcqSource();
    virtual ~AcqSource() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(AcqSource);
};

/** \brief  alternative identifier ― May contain a bibliographic identifier that does not
 *          fit within the meiHead element's id attribute, for example because
 *          the id does not fit the definition of an XML id or because multiple identifiers
 *          are needed.
 *
 * One or the other of <altId> or the id attribute on <mei> is required when          
 *          applicable..
 */
struct AltId : public BaseMeiElement{
    AltId();
    virtual ~AltId() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    private:
        //REGISTER_DECLARATION(AltId);
};

/** \brief  application information ― Groups information about applications which have
 *          acted upon the MEI file.
 *
 * This is not to be confused with applications which were used to create the MEI          
 *          file. The latter may be recorded in the projectDesc element. This element is          
 *          modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct AppInfo : public BaseMeiElement{
    AppInfo();
    virtual ~AppInfo() {};

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(AppInfo);
};

/** \brief  application ― Provides information about an application which has acted upon
 *          the current document.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Application : public BaseMeiElement{
    Application();
    virtual ~Application() {};

    string getVersionValue() throw (AttributeNotFoundException);

    MeiAttribute* getVersion() throw (AttributeNotFoundException);
    void setVersion(string _version);
    bool hasVersion();

    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    TypedMixIn    m_Typed;
    private:
        //REGISTER_DECLARATION(Application);
};

/** \brief  availability ― Groups elements that describe the availability of and access to
 *          a bibliographic item.
 *
 * When used within the fileDesc element, availability indicates access to the MEI-          
 *          encoded document itself. This element is modelled on an element in Encoded          
 *          Archival Description (EAD)..
 */
struct Availability : public BaseMeiElement{
    Availability();
    virtual ~Availability() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(Availability);
};

/** \brief  change ― Individual change within the revision description.
 *
 * Additions, deletions, and significant recoding should be noted, but not          
 *          correction of minor typographical errors. It is recommended that revisions          
 *          should be entered in reverse chronological order, with the most recent <change>          
 *          first. The resp attribute contains a pointer to an element containing info about          
 *          the person/entity responsible for change. The edition element can be used to          
 *          designate an MEI encoding that has been so substantively changed that it          
 *          constitutes a new version that supersedes earlier versions. This element is          
 *          modelled on an element in Encoded Archival Description (EAD)..
 */
struct Change : public BaseMeiElement{
    Change();
    virtual ~Change() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Change);
};

/** \brief  change description ― Description of a revision of the MEI file.
 */
struct ChangeDesc : public BaseMeiElement{
    ChangeDesc();
    virtual ~ChangeDesc() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(ChangeDesc);
};

/** \brief  classification code ― Holds a citation to the source of controlled-vocabulary
 *          terms used in the <termList> element; for example, Library             of
 *          Congress Subject Headings (LCSH), Library of Congress Classification (LCC),
 *          Library of Congress Name Authority File (LCNAF), or other thesaurus
 *          or ontology.
 *
 * The citation may be provided in the authority attribute or as textual content of          
 *          the element when additional markup is needed..
 */
struct ClassCode : public BaseMeiElement{
    ClassCode();
    virtual ~ClassCode() {};

    AuthorizedMixIn    m_Authorized;
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    NameMixIn    m_Name;
    private:
        //REGISTER_DECLARATION(ClassCode);
};

/** \brief  classification ― Groups information which describes the nature or topic of an
 *          entity.
 *
 * Although use of names and terms from locally controlled vocabularies is          
 *          possible, terms used here should come from standard national or international          
 *          vocabularies whenever they are available in order to enable searches in systems          
 *          that include multiple MEI documents, or MEI documents and bibliographic records          
 *          from many institutions..
 */
struct Classification : public BaseMeiElement{
    Classification();
    virtual ~Classification() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(Classification);
};

/** \brief  condition ― The physical condition of an item, particularly any variances
 *          between the physical makeup of the item and that of other copies of
 *          the same item (e.
 *
 * g., missing pages, plates, etc.). Condition may reflect other aspects of the          
 *          physical condition of the item as well (e.g., brittleness, faded images, etc.).          
 *          This element is modelled on an element in Encoded Archival Description (EAD)..
 */
struct Condition : public BaseMeiElement{
    Condition();
    virtual ~Condition() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Condition);
};

/** \brief  correction ― States how and under what circumstances corrections have been
 *          made in the text.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Correction : public BaseMeiElement{
    Correction();
    virtual ~Correction() {};

    string getCorrlevelValue() throw (AttributeNotFoundException);

    MeiAttribute* getCorrlevel() throw (AttributeNotFoundException);
    void setCorrlevel(string _corrlevel);
    bool hasCorrlevel();

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    RegularmethodMixIn    m_Regularmethod;
    private:
        //REGISTER_DECLARATION(Correction);
};

/** \brief  contents ― description of the material contained within a resource.
 *
 * Use of this element should be determined by the complexity of the resource and          
 *          whether or not the information is readily available. The description may consist          
 *          of unstructured text or <contentItem> elements may be used to provide structured          
 *          information. A link to an external table of contents may be supplied in lieu of          
 *          or in addition to this element's child elements. If it is necessary to describe          
 *          each of the components in detail, consider using <relatedItem> with the          
 *          type="constituent" attribute instead of <contents>..
 */
struct Contents : public BaseMeiElement{
    Contents();
    virtual ~Contents() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LinkExternalMixIn    m_LinkExternal;
    private:
        //REGISTER_DECLARATION(Contents);
};

/** \brief  content item ― Contains a single entry within a content description element.
 */
struct ContentItem : public BaseMeiElement{
    ContentItem();
    virtual ~ContentItem() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(ContentItem);
};

/** \brief  creation ― Non-bibliographic creation details for the work being encoded, in
 *          narrative form.
 *
 * Contains phrases describing the origin of the text, e.g. the date, place, and          
 *          circumstances of its composition. This element is modelled on an element in the          
 *          Text Encoding Initiative (TEI)..
 */
struct Creation : public BaseMeiElement{
    Creation();
    virtual ~Creation() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Creation);
};

/** \brief  dimensions ― Information about the physical size of a bibliographic source;
 *          usually includes numerical data.
 *
 * There are no height and width sub-elements; however, num sub-elements may be          
 *          used with appropriate n attribute values. Measurements may be expressed in any          
 *          convenient unit. Do not confuse this element with the <extent> element, which is          
 *          used to indicate the quantity of described materials. This element is modelled          
 *          on an element in the Text Encoding Initiative (TEI)..
 */
struct Dimensions : public BaseMeiElement{
    Dimensions();
    virtual ~Dimensions() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    MeasurementMixIn    m_Measurement;
    private:
        //REGISTER_DECLARATION(Dimensions);
};

/** \brief  edition statement ― Container for meta-data pertaining to a particular edition
 *          of the material being described.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct EditionStmt : public BaseMeiElement{
    EditionStmt();
    virtual ~EditionStmt() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(EditionStmt);
};

/** \brief  editorial declaration ― Used to provide details of editorial principles and
 *          practices applied during the encoding of musical text.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct EditorialDecl : public BaseMeiElement{
    EditorialDecl();
    virtual ~EditorialDecl() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(EditorialDecl);
};

/** \brief  encoding description ― Documents the relationship between an electronic file
 *          and the source or sources from which it was derived as well as
 *          applications used in the encoding/editing process.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct EncodingDesc : public BaseMeiElement{
    EncodingDesc();
    virtual ~EncodingDesc() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(EncodingDesc);
};

/** \brief  ensemble ― Used when an ensemble, such as an orchestra, is included in the
 *          performing forces of a composition.
 *
 * It is recommended that name values (recorded in the reg attribute or in the          
 *          element's content) be taken from a standardized list, such as the International          
 *          Association of Music Libraries' Medium of performance Codes List or the MARC          
 *          Instruments and Voices Code List..
 */
struct Ensemble : public BaseMeiElement{
    Ensemble();
    virtual ~Ensemble() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Ensemble);
};

/** \brief  exhibition history ― A record of public exhibitions, including dates, venues,
 *          etc.
 *
 * This element is modelled on an element in Encoded Archival Description (EAD)..
 */
struct ExhibHist : public BaseMeiElement{
    ExhibHist();
    virtual ~ExhibHist() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(ExhibHist);
};

/** \brief  extent ― Used to express size in terms other than physical dimensions, such as
 *          number of pages, number of records in file, number of bytes,
 *          performance duration for music, audio recordings and visual projections, etc.
 *
 * Use the <dimensions> element when it is necessary to specify the physical size          
 *          of materials being described, for example, height and width. This element is          
 *          modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Extent : public BaseMeiElement{
    Extent();
    virtual ~Extent() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    MeasurementMixIn    m_Measurement;
    private:
        //REGISTER_DECLARATION(Extent);
};

/** \brief  file description ― Contains a full bibliographic description of the MEI file.
 *
 * Extent in this context is file size. This element is modelled on an element in          
 *          the Text Encoding Initiative (TEI)..
 */
struct FileDesc : public BaseMeiElement{
    FileDesc();
    virtual ~FileDesc() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(FileDesc);
};

/** \brief  fingerprint ― Traditionally, an identifier, constructed by combining groups of
 *          characters transcribed from specified pages of a printed item,             which
 *          makes it possible to signal differences between copies of the item.
 *
 * For an electronic item, such as an MEI file, however, the fingerprint should be          
 *          a checksum..
 */
struct Fingerprint : public BaseMeiElement{
    Fingerprint();
    virtual ~Fingerprint() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Fingerprint);
};

/** \brief  hand ― Defines a distinct scribe or handwriting style.
 *
 * The initial attribute indicates whether this is the first or main scribe of the          
 *          document. The medium attribute describes the writing medium, e.g., 'pencil', or          
 *          the tint or type of ink, e.g. 'brown'. The resp attribute contains an ID          
 *          reference to an element containing the name of the editor or transcriber          
 *          responsible for identifying the hand. The characteristics of the hand,          
 *          particularly those related to the quality of the writing, such as 'shaky',          
 *          'thick', etc. may be described within the content of the hand element. This          
 *          element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Hand : public BaseMeiElement{
    Hand();
    virtual ~Hand() {};

    string getInitialValue() throw (AttributeNotFoundException);

    MeiAttribute* getInitial() throw (AttributeNotFoundException);
    void setInitial(string _initial);
    bool hasInitial();

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    MediumMixIn    m_Medium;
    ResponsibilityMixIn    m_Responsibility;
    CritMixIn    m_Crit;
    EditMixIn    m_Edit;
    private:
        //REGISTER_DECLARATION(Hand);
};

/** \brief  hand list ― Container for one or more hand elements.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct HandList : public BaseMeiElement{
    HandList();
    virtual ~HandList() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(HandList);
};

/** \brief  history ― History provides a container for information about the creation and
 *          history of a resource.
 */
struct History : public BaseMeiElement{
    History();
    virtual ~History() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(History);
};

/** \brief  coded incipit ― Incipit coded in a non-XML, plain text format, such as Plaine
 *          & Easie.
 */
struct IncipCode : public BaseMeiElement{
    IncipCode();
    virtual ~IncipCode() {};

    string getSpaceValue() throw (AttributeNotFoundException);

    MeiAttribute* getSpace() throw (AttributeNotFoundException);
    void setSpace(string _space);
    bool hasSpace();

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    InternetmediaMixIn    m_Internetmedia;
    private:
        //REGISTER_DECLARATION(IncipCode);
};

/** \brief  inscription ― An inscription added to an item, such as a bookplate, a note
 *          designating the item as a gift, and/or the author's signature.
 */
struct Inscription : public BaseMeiElement{
    Inscription();
    virtual ~Inscription() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Inscription);
};

/** \brief  indicates the number of parts or performers, e.
 *
 * g., in a composition for 2 flutes..
 */
struct InstrVoice : public BaseMeiElement{
    InstrVoice();
    virtual ~InstrVoice() {};

    string getCountValue() throw (AttributeNotFoundException);

    MeiAttribute* getCount() throw (AttributeNotFoundException);
    void setCount(string _count);
    bool hasCount();

    string getSoloValue() throw (AttributeNotFoundException);

    MeiAttribute* getSolo() throw (AttributeNotFoundException);
    void setSolo(string _solo);
    bool hasSolo();

    string getRegValue() throw (AttributeNotFoundException);

    MeiAttribute* getReg() throw (AttributeNotFoundException);
    void setReg(string _reg);
    bool hasReg();

    AuthorizedMixIn    m_Authorized;
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    NameMixIn    m_Name;
    private:
        //REGISTER_DECLARATION(InstrVoice);
};

/** \brief  interpretation ― Describes the scope of any analytic or interpretive
 *          information added to the transcription of the music.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Interpretation : public BaseMeiElement{
    Interpretation();
    virtual ~Interpretation() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Interpretation);
};

/** \brief  key ― Key captures information about tonal center and mode.
 *
 * It is used exclusively within bibliographic descriptions. Do not confuse this          
 *          element with <keySig>, which is used within the body of an MEI file to record          
 *          this data..
 */
struct Key : public BaseMeiElement{
    Key();
    virtual ~Key() {};

    string getModeValue() throw (AttributeNotFoundException);

    MeiAttribute* getMode() throw (AttributeNotFoundException);
    void setMode(string _mode);
    bool hasMode();

    AccidentalPerformedMixIn    m_AccidentalPerformed;
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    PitchMixIn    m_Pitch;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    private:
        //REGISTER_DECLARATION(Key);
};

/** \brief  termList ― Collection of text phrases which describe a work or source document.
 */
struct TermList : public BaseMeiElement{
    TermList();
    virtual ~TermList() {};

    string getClasscodeValue() throw (AttributeNotFoundException);

    MeiAttribute* getClasscode() throw (AttributeNotFoundException);
    void setClasscode(string _classcode);
    bool hasClasscode();

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(TermList);
};

/** \brief  language ― Description of a language used in the document.
 *
 * A text element may be related to this element via its xml:lang attribute, which          
 *          normally takes the form of a code, drawn from a coded list, such as ISO639-2b.          
 *          The name and web location of the authorizing list may be encoded in the          
 *          authority attribute and the authURI attribute, respectively. This element is          
 *          modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Language : public BaseMeiElement{
    Language();
    virtual ~Language() {};

    AuthorizedMixIn    m_Authorized;
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    NameMixIn    m_Name;
    private:
        //REGISTER_DECLARATION(Language);
};

/** \brief  language usage ― langUsage groups elements describing the languages, sub-
 *          languages, dialects, etc.
 *
 * , represented within the encoded work. This element is modelled on an element in          
 *          the Text Encoding Initiative (TEI)..
 */
struct LangUsage : public BaseMeiElement{
    LangUsage();
    virtual ~LangUsage() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(LangUsage);
};

/** \brief  normalization ― Indicates the extent of normalization or regularization of the
 *          original source carried out in converting it to electronic form.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Normalization : public BaseMeiElement{
    Normalization();
    virtual ~Normalization() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    RegularmethodMixIn    m_Regularmethod;
    private:
        //REGISTER_DECLARATION(Normalization);
};

/** \brief  notes statement ― Groups bibliographic annotations, each of which provides
 *          descriptive information in addition to that recorded in other parts
 *          of the bibliographic description.
 *
 * These annotations are similar to "general notes" in traditional bibliographic          
 *          descriptions. This element is modelled on an element in the Text Encoding          
 *          Initiative (TEI)..
 */
struct NotesStmt : public BaseMeiElement{
    NotesStmt();
    virtual ~NotesStmt() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(NotesStmt);
};

/** \brief  performance medium ― Indicates the number and character of the performing
 *          forces used in a musical composition.
 *
 * The function of instrumentalists or vocalists is represented by the choice of          
 *          ensemble and performer child elements. Arrangements are coded for the medium of          
 *          the work being described, not for the original medium..
 */
struct PerfMedium : public BaseMeiElement{
    PerfMedium();
    virtual ~PerfMedium() {};

    AuthorizedMixIn    m_Authorized;
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    NameMixIn    m_Name;
    private:
        //REGISTER_DECLARATION(PerfMedium);
};

/** \brief  performer ― Used when performing forces includes specific instrumental or
 *          vocal performers.
 *
 * If the performer plays more than one instrument in a composition, the first          
 *          named instrument is given. If a principal instrument can be determined, the name          
 *          or code for that instrument is given. For percussion music, whether for a single          
 *          performer or more than one, the number of performers is given, rather than the          
 *          number of instruments. For monologues, or works with narration, an indication of          
 *          unspecified voice is given for the speaker or narrator..
 */
struct Performer : public BaseMeiElement{
    Performer();
    virtual ~Performer() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Performer);
};

/** \brief  physical description ― Container for information about the location,
 *          appearance, construction, or handling of physical materials, such as their
 *          dimension, quantity, color, style, and technique of creation.
 *
 * Dedicatory text and title page features may also be encoded here when they are          
 *          not transcribed as part of the front or back matter; i.e., when they are          
 *          considered to be meta-data rather than a transcription. This element is modelled          
 *          on an element in Encoded Archival Description (EAD)..
 */
struct PhysDesc : public BaseMeiElement{
    PhysDesc();
    virtual ~PhysDesc() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(PhysDesc);
};

/** \brief  physical location ― Location of the source within a repository, e.
 *
 * g., shelf mark or other locational information. This element is modelled on an          
 *          element in Encoded Archival Description (EAD)..
 */
struct PhysLoc : public BaseMeiElement{
    PhysLoc();
    virtual ~PhysLoc() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(PhysLoc);
};

/** \brief  physical medium ― Records the physical materials used in the source, such as
 *          ink and paper.
 *
 * All materials may be described in a single <physMedium> element or multiple          
 *          elements may be used, one for each medium. This element is modelled on an          
 *          element in Encoded Archival Description (EAD)..
 */
struct PhysMedium : public BaseMeiElement{
    PhysMedium();
    virtual ~PhysMedium() {};

    AuthorizedMixIn    m_Authorized;
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    NameMixIn    m_Name;
    private:
        //REGISTER_DECLARATION(PhysMedium);
};

/** \brief  plate number ― Designation assigned to a resource by a music publisher,
 *          usually printed at the bottom of each page, and sometimes appearing also
 *          on the title page.
 *
 * While it is often called a "plate number", it does not always contain numbers.          
 *          The facs attribute may be used to record the location of the plate number in a          
 *          facsimile image..
 */
struct PlateNum : public BaseMeiElement{
    PlateNum();
    virtual ~PlateNum() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(PlateNum);
};

/** \brief  price ― The cost of access to a bibliographic item.
 */
struct Price : public BaseMeiElement{
    Price();
    virtual ~Price() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    MeasurementMixIn    m_Measurement;
    private:
        //REGISTER_DECLARATION(Price);
};

/** \brief  project description ― Project-level meta-data describing the aim or purpose
 *          for which the electronic file was encoded, funding agencies, etc.
 *
 * together with any other relevant information concerning the process by which it          
 *          was assembled or collected. This element is modelled on an element in the Text          
 *          Encoding Initiative (TEI)..
 */
struct ProjectDesc : public BaseMeiElement{
    ProjectDesc();
    virtual ~ProjectDesc() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(ProjectDesc);
};

/** \brief  provenance ― The record of ownership or custodianship of an item.
 *
 * This element is modelled on an element in the Encoded Archival Description (EAD)          
 *          and Text Encoding Initiative (TEI)..
 */
struct Provenance : public BaseMeiElement{
    Provenance();
    virtual ~Provenance() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Provenance);
};

/** \brief  publication statement ― Container for information regarding the publication or
 *          distribution of a bibliographic item, including the publisher's             name
 *          and address, the date of publication, and other relevant details.
 *
 * When an item is unpublished, use only the <unpub> sub-element. This element is          
 *          modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct PubStmt : public BaseMeiElement{
    PubStmt();
    virtual ~PubStmt() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(PubStmt);
};

/** \brief  related item ― contains or references another bibliographic item which is
 *          related to the present one in some specified manner, for example as a
 *          constituent or alternative version of it.
 *
 * A URI for the related item should be placed in the <identifier> sub-element.          
 *          This element is modelled on the relatedItem element in the Text Encoding          
 *          Initiative (TEI) and MODS schemas..
 */
struct RelatedItem : public BaseMeiElement{
    RelatedItem();
    virtual ~RelatedItem() {};

    string getRelValue() throw (AttributeNotFoundException);

    MeiAttribute* getRel() throw (AttributeNotFoundException);
    void setRel(string _rel);
    bool hasRel();

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(RelatedItem);
};

/** \brief  responsibility ― A phrase describing the nature of a person's intellectual
 *          responsibility.
 *
 * The name of the list from which a controlled value is taken may be recorded          
 *          using the authority attribute. This element is modelled on an element in the          
 *          Text Encoding Initiative (TEI)..
 */
struct Resp : public BaseMeiElement{
    Resp();
    virtual ~Resp() {};

    AuthorizedMixIn    m_Authorized;
    NameMixIn    m_Name;
    private:
        //REGISTER_DECLARATION(Resp);
};

/** \brief  responsibility statement ― Names one or more individuals, groups, or in rare
 *          cases, mechanical processes, responsible for creation or             realization
 *          of the intellectual or artistic content.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct RespStmt : public BaseMeiElement{
    RespStmt();
    virtual ~RespStmt() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(RespStmt);
};

/** \brief  revision description ― Container for information about alterations that have
 *          been made to an MEI file.
 *
 * It is recommended that changes be recorded in reverse chronological order, with          
 *          the most recent alteration first. This element is modelled on an element in the          
 *          Text Encoding Initiative (TEI)..
 */
struct RevisionDesc : public BaseMeiElement{
    RevisionDesc();
    virtual ~RevisionDesc() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(RevisionDesc);
};

/** \brief  sampling declaration ― Contains a prose description of the rationale and
 *          methods used in sampling texts in the creation of a corpus or
 *          collection.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct SamplingDecl : public BaseMeiElement{
    SamplingDecl();
    virtual ~SamplingDecl() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(SamplingDecl);
};

/** \brief  segmentation ― Describes the principles according to which the musical text
 *          has been segmented, for example into movements, sections, etc.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Segmentation : public BaseMeiElement{
    Segmentation();
    virtual ~Segmentation() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Segmentation);
};

/** \brief  series statement ― Groups information about the series, if any, to which a
 *          publication belongs.
 *
 * In this context, the title element records the series title, the respStmt          
 *          element records the person or group responsible for the series, and the          
 *          identifier element contains a series identifier. The content element should be          
 *          used when it is necessary to enumerate the content of the series. The seriesStmt          
 *          element is provided within seriesStmt for the description of a sub-series. This          
 *          element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct SeriesStmt : public BaseMeiElement{
    SeriesStmt();
    virtual ~SeriesStmt() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(SeriesStmt);
};

/** \brief  source ― A bibliographic description of a source used in the creation of the
 *          electronic file.
 *
 * Multiple physDesc sub-elements may be used to describe the physically separate          
 *          parts of a single source. The data attribute may be used to reference one or          
 *          more features that occur in this particular source. A URI for the related item          
 *          should be placed in the <identifier> sub-element. This element is modelled on          
 *          the sourceDesc element in the Text Encoding Initiative (TEI)..
 */
struct Source : public BaseMeiElement{
    Source();
    virtual ~Source() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(Source);
};

/** \brief  source description ― A container for the descriptions of the source(s) used in
 *          the creation of the electronic file.
 *
 * This element is recommended where the MEI file is a transcription of existing          
 *          music, but is not required when the data is originally created in MEI form..
 */
struct SourceDesc : public BaseMeiElement{
    SourceDesc();
    virtual ~SourceDesc() {};

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(SourceDesc);
};

/** \brief  standard values ― Specifies the format used when standardized date or number
 *          values are supplied.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct StdVals : public BaseMeiElement{
    StdVals();
    virtual ~StdVals() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(StdVals);
};

/** \brief  system requirements ― System requirements for using the electronic item.
 */
struct SysReq : public BaseMeiElement{
    SysReq();
    virtual ~SysReq() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(SysReq);
};

/** \brief  term ― Single keyword or phrase which describes the work.
 *
 * The classcode attribute may be used to link the term to a terminological source          
 *          given in a classCode element. The term element may include other term elements          
 *          in order to allow the creation of coordinated terms; i.e., terms created from a          
 *          combination of other, independent terms. This element is modelled on an element          
 *          in the Text Encoding Initiative (TEI)..
 */
struct Term : public BaseMeiElement{
    Term();
    virtual ~Term() {};

    string getClasscodeValue() throw (AttributeNotFoundException);

    MeiAttribute* getClasscode() throw (AttributeNotFoundException);
    void setClasscode(string _classcode);
    bool hasClasscode();

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Term);
};

/** \brief  title statement ― Container for title and responsibility meta-data.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct TitleStmt : public BaseMeiElement{
    TitleStmt();
    virtual ~TitleStmt() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(TitleStmt);
};

/** \brief  treatment history ― A record of the treatment the item has undergone (e.
 *
 * g., de-acidification, restoration, etc.) Treatment history may also comprise          
 *          details of the treatment process (e.g., chemical solutions used, techniques          
 *          applied, etc.), the date the treatment was applied, etc. This element is          
 *          modelled on an element in Encoded Archival Description (EAD)..
 */
struct TreatHist : public BaseMeiElement{
    TreatHist();
    virtual ~TreatHist() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(TreatHist);
};

/** \brief  treatment scheduled ― Scheduled treatment, e.
 *
 * g. de-acidification, restoration, etc., for an item. This element is modelled on          
 *          an element in Encoded Archival Description (EAD)..
 */
struct TreatSched : public BaseMeiElement{
    TreatSched();
    virtual ~TreatSched() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(TreatSched);
};

/** \brief  unpublished ― Used to explicitly indicate that a bibliographic source is
 *          unpublished.
 *
 * A short phrase indicating the nature of or the reason for the unpublished status          
 *          may be given as the element's content..
 */
struct Unpub : public BaseMeiElement{
    Unpub();
    virtual ~Unpub() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Unpub);
};

/** \brief  usage restrictions ― Container for information about the conditions that
 *          affect use of a bibliographic item after access has been granted.
 *
 * It may indicate limitations imposed by an owner, repository, or legal statute          
 *          (for example, copyright law) regarding the reproduction, publication, or          
 *          quotation of the item. It may also indicate the absence of restrictions, such as          
 *          when rights have been ceded to the public domain. Do not confuse this element          
 *          with the <accessRestrict> element, which holds information about conditions          
 *          affecting the availability of the material. This element is modelled on an          
 *          element in Encoded Archival Description (EAD)..
 */
struct UseRestrict : public BaseMeiElement{
    UseRestrict();
    virtual ~UseRestrict() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(UseRestrict);
};

/** \brief  watermark ― Contains a description of a watermark or similar device.
 *
 * The facs attribute may be used to record the location of the watermark in a          
 *          facsimile image. This element is modelled on an element in the Text Encoding          
 *          Initiative (TEI)..
 */
struct Watermark : public BaseMeiElement{
    Watermark();
    virtual ~Watermark() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Watermark);
};

/** \brief  work description ― A container for description of the work(s) used in the
 *          creation of the electronic file.
 */
struct WorkDesc : public BaseMeiElement{
    WorkDesc();
    virtual ~WorkDesc() {};

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(WorkDesc);
};

struct Work : public BaseMeiElement{
    Work();
    virtual ~Work() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(Work);
};

/** \brief  event list ― Contains historical information given as a sequence of
 *          significant past events.
 *
 * <eventList> contains <event> elements that contain a brief description of the          
 *          associated event, including dates and locations where the event took place. An          
 *          <eventList> describes events associated with a work when it appears in the          
 *          <workDesc> element or events associated with the custodial history of a given          
 *          copy of a source for the encoding when it appears within the <source> or          
 *          <relatedItem> elements. The type attribute may be used to distinguish between          
 *          event lists with different functions, such as a list of events in the          
 *          compositional process and a list of performance dates..
 */
struct EventList : public BaseMeiElement{
    EventList();
    virtual ~EventList() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    private:
        //REGISTER_DECLARATION(EventList);
};

/** \brief  event ― contains a description of an event, including the dates and locations
 *          of its occurrence and prominent participants.
 *
 * When a single date can be associated with the event, the attributes in the          
 *          att.datable class may provide a more machine-processable alternative than date          
 *          elements within the content of <event>. <table> and <list> elements are allowed          
 *          within <event> in order to accommodate structured content..
 */
struct Event : public BaseMeiElement{
    Event();
    virtual ~Event() {};

    BiblMixIn    m_Bibl;
    CalendaredMixIn    m_Calendared;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    LangMixIn    m_Lang;
    EditMixIn    m_Edit;
    private:
        //REGISTER_DECLARATION(Event);
};

#endif // HEADER_H_