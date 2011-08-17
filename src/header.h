
/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani
    
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
#include "sharedmixins.h"
#include "headermixins.h"
#include "edittransmixins.h"
#include "critappmixins.h"
#include "facsimilemixins.h"



/** \brief   access restriction ― Describes the conditions that affect the accessibility of
    * material. May indicate the nature of restrictions or the lack of restrictions.
    * Do not confuse this element with <useRestrict> (usage restrictions), which
    * captures information about limitations on the use of material, such as those
    * afforded by copyright. This element is modelled on an element in Encoded
    * Archival Description (EAD).
    */

struct Accessrestrict : public BaseMeiElement {
    Accessrestrict();
    virtual ~Accessrestrict() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Accessrestrict);
};


/** \brief   acquisition source ― Post-publication source, such as a vendor or distributor,
    * from which access to a bibliographic item may be obtained, including electronic
    * access. This element is modelled on an element in Encoded Archival Description
    * (EAD).
    */

struct Acqsource : public BaseMeiElement {
    Acqsource();
    virtual ~Acqsource() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Acqsource);
};


/** \brief   alternative identifier ― May contain a bibliographic identifier that does not
    * fit within the meiHead element's id attribute, for example because the id does
    * not fit the definition of an XML id or because multiple identifiers are needed.
    * One or the other of <altId> or the id attribute on <mei> is required when
    * applicable.
    */

struct Altid : public BaseMeiElement {
    Altid();
    virtual ~Altid() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    private:
        //REGISTER_DECLARATION(Altid);
};


/** \brief   application information ― Groups information about applications which have
    * acted upon the MEI file. This is not to be confused with applications which were
    * used to create the MEI file. The latter may be recorded in the projectDesc
    * element. This element is modelled on an element in the Text Encoding Initiative
    * (TEI).
    */

struct Appinfo : public BaseMeiElement {
    Appinfo();
    virtual ~Appinfo() {};
    
    
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Appinfo);
};


/** \brief   application ― Provides information about an application which has acted upon
    * the current document. This element is modelled on an element in the Text
    * Encoding Initiative (TEI).
    */

struct Application : public BaseMeiElement {
    Application();
    virtual ~Application() {};
    
    /** \brief   supplies a version number for an application, independent of its identifier or
    * display name.
    */
    string getVersionValue() throw (AttributeNotFoundException);
    MeiAttribute* getVersion() throw (AttributeNotFoundException);
    void setVersion(std::string _version);
    bool hasVersion();
    void removeVersion();

    
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    TypedMixIn    m_Typed;
    private:
        //REGISTER_DECLARATION(Application);
};


/** \brief   availability ― Groups elements that describe the availability of and access to
    * a bibliographic item. When used within the fileDesc element, availability
    * indicates access to the MEI-encoded document itself. This element is modelled on
    * an element in Encoded Archival Description (EAD).
    */

struct Availability : public BaseMeiElement {
    Availability();
    virtual ~Availability() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(Availability);
};


/** \brief   change ― Individual change within the revision description. Additions,
    * deletions, and significant recoding should be noted, but not correction of minor
    * typographical errors. It is recommended that revisions should be entered in
    * reverse chronological order, with the most recent <change> first. The resp
    * attribute contains a pointer to an element containing info about the
    * person/entity responsible for change. The edition element can be used to
    * designate an MEI encoding that has been so substantively changed that it
    * constitutes a new version that supersedes earlier versions. This element is
    * modelled on an element in Encoded Archival Description (EAD).
    */

struct Change : public BaseMeiElement {
    Change();
    virtual ~Change() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Change);
};


/** \brief   change description ― Description of a revision of the MEI file.
    */

struct Changedesc : public BaseMeiElement {
    Changedesc();
    virtual ~Changedesc() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Changedesc);
};


/** \brief   classification code ― Holds a citation to the source of controlled-vocabulary
    * terms used in the <termList> element; for example, Library of Congress Subject
    * Headings (LCSH), Library of Congress Classification (LCC), Library of Congress
    * Name Authority File (LCNAF), or other thesaurus or ontology. The citation may be
    * provided in the authority attribute or as textual content of the element when
    * additional markup is needed.
    */

struct Classcode : public BaseMeiElement {
    Classcode();
    virtual ~Classcode() {};
    
    
    CommonMixIn    m_Common;
    AuthorizedMixIn    m_Authorized;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Classcode);
};


/** \brief   classification ― Groups information which describes the nature or topic of an
    * entity. Although use of names and terms from locally controlled vocabularies is
    * possible, terms used here should come from standard national or international
    * vocabularies whenever they are available in order to enable searches in systems
    * that include multiple MEI documents, or MEI documents and bibliographic records
    * from many institutions.
    */

struct Classification : public BaseMeiElement {
    Classification();
    virtual ~Classification() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(Classification);
};


/** \brief   condition ― The physical condition of an item, particularly any variances
    * between the physical makeup of the item and that of other copies of the same
    * item (e.g., missing pages, plates, etc.). Condition may reflect other aspects of
    * the physical condition of the item as well (e.g., brittleness, faded images,
    * etc.). This element is modelled on an element in Encoded Archival Description
    * (EAD).
    */

struct Condition : public BaseMeiElement {
    Condition();
    virtual ~Condition() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Condition);
};


/** \brief   content item ― Contains a single entry within a content description element.
    */

struct Contentitem : public BaseMeiElement {
    Contentitem();
    virtual ~Contentitem() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Contentitem);
};


/** \brief   contents ― description of the material contained within a resource. Use of
    * this element should be determined by the complexity of the resource and whether
    * or not the information is readily available. The description may consist of
    * unstructured text or <contentItem> elements may be used to provide structured
    * information. A link to an external table of contents may be supplied in lieu of
    * or in addition to this element's child elements. If it is necessary to describe
    * each of the components in detail, consider using <relatedItem> with the
    * type="constituent" attribute instead of <contents>.
    */

struct Contents : public BaseMeiElement {
    Contents();
    virtual ~Contents() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LinkExternalMixIn    m_LinkExternal;
    private:
        //REGISTER_DECLARATION(Contents);
};


/** \brief   correction ― States how and under what circumstances corrections have been
    * made in the text. This element is modelled on an element in the Text Encoding
    * Initiative (TEI).
    */

struct Correction : public BaseMeiElement {
    Correction();
    virtual ~Correction() {};
    
    /** \brief   indicates the degree of correction applied to the text.
    */
    string getCorrlevelValue() throw (AttributeNotFoundException);
    MeiAttribute* getCorrlevel() throw (AttributeNotFoundException);
    void setCorrlevel(std::string _corrlevel);
    bool hasCorrlevel();
    void removeCorrlevel();

    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    RegularmethodMixIn    m_Regularmethod;
    private:
        //REGISTER_DECLARATION(Correction);
};


/** \brief   creation ― Non-bibliographic creation details for the work being encoded, in
    * narrative form. Contains phrases describing the origin of the text, e.g. the
    * date, place, and circumstances of its composition. This element is modelled on
    * an element in the Text Encoding Initiative (TEI).
    */

struct Creation : public BaseMeiElement {
    Creation();
    virtual ~Creation() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Creation);
};


/** \brief   dimensions ― Information about the physical size of a bibliographic source;
    * usually includes numerical data. There are no height and width sub-elements;
    * however, num sub-elements may be used with appropriate n attribute values.
    * Measurements may be expressed in any convenient unit. Do not confuse this
    * element with the <extent> element, which is used to indicate the quantity of
    * described materials. This element is modelled on an element in the Text Encoding
    * Initiative (TEI).
    */

struct Dimensions : public BaseMeiElement {
    Dimensions();
    virtual ~Dimensions() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    MeasurementMixIn    m_Measurement;
    private:
        //REGISTER_DECLARATION(Dimensions);
};


/** \brief   edition statement ― Container for meta-data pertaining to a particular edition
    * of the material being described. This element is modelled on an element in the
    * Text Encoding Initiative (TEI).
    */

struct Editionstmt : public BaseMeiElement {
    Editionstmt();
    virtual ~Editionstmt() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Editionstmt);
};


/** \brief   editorial declaration ― Used to provide details of editorial principles and
    * practices applied during the encoding of musical text. This element is modelled
    * on an element in the Text Encoding Initiative (TEI).
    */

struct Editorialdecl : public BaseMeiElement {
    Editorialdecl();
    virtual ~Editorialdecl() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Editorialdecl);
};


/** \brief   encoding description ― Documents the relationship between an electronic file
    * and the source or sources from which it was derived as well as applications used
    * in the encoding/editing process. This element is modelled on an element in the
    * Text Encoding Initiative (TEI).
    */

struct Encodingdesc : public BaseMeiElement {
    Encodingdesc();
    virtual ~Encodingdesc() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Encodingdesc);
};


/** \brief   ensemble ― Used when an ensemble, such as an orchestra, is included in the
    * performing forces of a composition. It is recommended that name values (recorded
    * in the reg attribute or in the element's content) be taken from a standardized
    * list, such as the International Association of Music Libraries' Medium of
    * performance Codes List or the MARC Instruments and Voices Code List.
    */

struct Ensemble : public BaseMeiElement {
    Ensemble();
    virtual ~Ensemble() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Ensemble);
};


/** \brief   event ― contains a description of an event, including the dates and locations
    * of its occurrence and prominent participants. When a single date can be
    * associated with the event, the attributes in the att.datable class may provide a
    * more machine-processable alternative than date elements within the content of
    * <event>. <table> and <list> elements are allowed within <event> in order to
    * accommodate structured content.
    */

struct Event : public BaseMeiElement {
    Event();
    virtual ~Event() {};
    
    
    BiblMixIn    m_Bibl;
    CalendaredMixIn    m_Calendared;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    EditMixIn    m_Edit;
    ResponsibilityMixIn    m_Responsibility;
    SourceMixIn    m_Source;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Event);
};


/** \brief   event list ― Contains historical information given as a sequence of
    * significant past events. <eventList> contains <event> elements that contain a
    * brief description of the associated event, including dates and locations where
    * the event took place. An <eventList> describes events associated with a work
    * when it appears in the <workDesc> element or events associated with the
    * custodial history of a given copy of a source for the encoding when it appears
    * within the <source> or <relatedItem> elements. The type attribute may be used to
    * distinguish between event lists with different functions, such as a list of
    * events in the compositional process and a list of performance dates.
    */

struct Eventlist : public BaseMeiElement {
    Eventlist();
    virtual ~Eventlist() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    private:
        //REGISTER_DECLARATION(Eventlist);
};


/** \brief   exhibition history ― A record of public exhibitions, including dates, venues,
    * etc. This element is modelled on an element in Encoded Archival Description
    * (EAD).
    */

struct Exhibhist : public BaseMeiElement {
    Exhibhist();
    virtual ~Exhibhist() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Exhibhist);
};


/** \brief   extent ― Used to express size in terms other than physical dimensions, such as
    * number of pages, number of records in file, number of bytes, performance
    * duration for music, audio recordings and visual projections, etc. Use the
    * <dimensions> element when it is necessary to specify the physical size of
    * materials being described, for example, height and width. This element is
    * modelled on an element in the Text Encoding Initiative (TEI).
    */

struct Extent : public BaseMeiElement {
    Extent();
    virtual ~Extent() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    MeasurementMixIn    m_Measurement;
    private:
        //REGISTER_DECLARATION(Extent);
};


/** \brief   file description ― Contains a full bibliographic description of the MEI file.
    * Extent in this context is file size. This element is modelled on an element in
    * the Text Encoding Initiative (TEI).
    */

struct Filedesc : public BaseMeiElement {
    Filedesc();
    virtual ~Filedesc() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Filedesc);
};


/** \brief   fingerprint ― Traditionally, an identifier, constructed by combining groups of
    * characters transcribed from specified pages of a printed item, which makes it
    * possible to signal differences between copies of the item. For an electronic
    * item, such as an MEI file, however, the fingerprint should be a checksum.
    */

struct Fingerprint : public BaseMeiElement {
    Fingerprint();
    virtual ~Fingerprint() {};
    
    
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Fingerprint);
};


/** \brief   hand ― Defines a distinct scribe or handwriting style. The initial attribute
    * indicates whether this is the first or main scribe of the document. The medium
    * attribute describes the writing medium, e.g., 'pencil', or the tint or type of
    * ink, e.g. 'brown'. The resp attribute contains an ID reference to an element
    * containing the name of the editor or transcriber responsible for identifying the
    * hand. The characteristics of the hand, particularly those related to the quality
    * of the writing, such as 'shaky', 'thick', etc. may be described within the
    * content of the hand element. This element is modelled on an element in the Text
    * Encoding Initiative (TEI).
    */

struct Hand : public BaseMeiElement {
    Hand();
    virtual ~Hand() {};
    
    /** \brief   marks this hand as the first one of the document.
    */
    string getInitialValue() throw (AttributeNotFoundException);
    MeiAttribute* getInitial() throw (AttributeNotFoundException);
    void setInitial(std::string _initial);
    bool hasInitial();
    void removeInitial();

    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    MediumMixIn    m_Medium;
    ResponsibilityMixIn    m_Responsibility;
    private:
        //REGISTER_DECLARATION(Hand);
};


/** \brief   hand list ― Container for one or more hand elements. This element is modelled
    * on an element in the Text Encoding Initiative (TEI).
    */

struct Handlist : public BaseMeiElement {
    Handlist();
    virtual ~Handlist() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Handlist);
};


/** \brief   history ― History provides a container for information about the creation and
    * history of a resource.
    */

struct History : public BaseMeiElement {
    History();
    virtual ~History() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(History);
};


/** \brief   coded incipit ― Incipit coded in a non-XML, plain text format, such as Plaine
    * & Easie.
    */

struct Incipcode : public BaseMeiElement {
    Incipcode();
    virtual ~Incipcode() {};
    
    /** \brief   identifies the language of the element's content. The values for this attribute
    * are language 'tags' as defined in BCP 47. All language tags that make use of
    * private use sub-tags must be documented in a corresponding language element in
    * the MEI header whose id attribute is the same as the language tag's value.
    */
    string getSpaceValue() throw (AttributeNotFoundException);
    MeiAttribute* getSpace() throw (AttributeNotFoundException);
    void setSpace(std::string _space);
    bool hasSpace();
    void removeSpace();

    /** \brief   records the function of the dot.
    */
    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    InternetmediaMixIn    m_Internetmedia;
    private:
        //REGISTER_DECLARATION(Incipcode);
};


/** \brief   inscription ― An inscription added to an item, such as a bookplate, a note
    * designating the item as a gift, and/or the author's signature.
    */

struct Inscription : public BaseMeiElement {
    Inscription();
    virtual ~Inscription() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Inscription);
};


/** \brief   
    */

struct Instrvoice : public BaseMeiElement {
    Instrvoice();
    virtual ~Instrvoice() {};
    
    /** \brief   indicates the number of parts or performers, e.g., in a composition for 2
    * flutes.
    */
    string getCountValue() throw (AttributeNotFoundException);
    MeiAttribute* getCount() throw (AttributeNotFoundException);
    void setCount(std::string _count);
    bool hasCount();
    void removeCount();

    /** \brief   marks this instrument or vocal part as a soloist. Do not use this attribute for
    * a solo instrument which is not accompanied.
    */
    string getSoloValue() throw (AttributeNotFoundException);
    MeiAttribute* getSolo() throw (AttributeNotFoundException);
    void setSolo(std::string _solo);
    bool hasSolo();
    void removeSolo();

    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    AuthorizedMixIn    m_Authorized;
    RegularizedMixIn    m_Regularized;
    private:
        //REGISTER_DECLARATION(Instrvoice);
};


/** \brief   interpretation ― Describes the scope of any analytic or interpretive
    * information added to the transcription of the music. This element is modelled on
    * an element in the Text Encoding Initiative (TEI).
    */

struct Interpretation : public BaseMeiElement {
    Interpretation();
    virtual ~Interpretation() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Interpretation);
};


/** \brief   key ― Key captures information about tonal center and mode. It is used
    * exclusively within bibliographic descriptions. Do not confuse this element with
    * <keySig>, which is used within the body of an MEI file to record this data.
    */

struct Key : public BaseMeiElement {
    Key();
    virtual ~Key() {};
    
    /** \brief   indicates major, minor, or other tonality.
    */
    string getModeValue() throw (AttributeNotFoundException);
    MeiAttribute* getMode() throw (AttributeNotFoundException);
    void setMode(std::string _mode);
    bool hasMode();
    void removeMode();

    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    AccidentalPerformedMixIn    m_AccidentalPerformed;
    PitchMixIn    m_Pitch;
    private:
        //REGISTER_DECLARATION(Key);
};


/** \brief   language usage ― langUsage groups elements describing the languages, sub-
    * languages, dialects, etc., represented within the encoded work. This element is
    * modelled on an element in the Text Encoding Initiative (TEI).
    */

struct Langusage : public BaseMeiElement {
    Langusage();
    virtual ~Langusage() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(Langusage);
};


/** \brief   language ― Description of a language used in the document. A text element may
    * be related to this element via its xml:lang attribute, which normally takes the
    * form of a code, drawn from a coded list, such as ISO639-2b. The name and web
    * location of the authorizing list may be encoded in the authority attribute and
    * the authURI attribute, respectively. This element is modelled on an element in
    * the Text Encoding Initiative (TEI).
    */

struct Language : public BaseMeiElement {
    Language();
    virtual ~Language() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    AuthorizedMixIn    m_Authorized;
    private:
        //REGISTER_DECLARATION(Language);
};


/** \brief   mei header ― A wrapper for general bibliographic and descriptive information
    * about the encoded file. This information is often essential in a machine-
    * readable environment. Five sub-elements must be encoded in the following order:
    * <altId>(optional), <fileDesc>(required), <encodingDesc>(optional),
    * <workDesc;>(optional), and <revisionDesc>(optional). These elements and their
    * sub-elements provide: a unique identifier for the MEI file, bibliographic
    * information about the MEI file and its sources, information about the encoding
    * process, information about the creation of the work being encoded, and
    * statements regarding significant revisions of the file. The xml:lang attribute
    * may be used to indicate the language in which the metadata content of the header
    * is provided. In order to encourage uniformity in the provision of metadata
    * across document types, this element is modelled on an element in the Text
    * Encoding Initiative (TEI).
    */

struct Meihead : public BaseMeiElement {
    Meihead();
    virtual ~Meihead() {};
    
    /** \brief   characterizes the element in some sense, using any convenient classification
    * scheme or typology.
    */
    string getTypeValue() throw (AttributeNotFoundException);
    MeiAttribute* getType() throw (AttributeNotFoundException);
    void setType(std::string _type);
    bool hasType();
    void removeType();

    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    MeiversionMixIn    m_Meiversion;
    private:
        //REGISTER_DECLARATION(Meihead);
};


/** \brief   normalization ― Indicates the extent of normalization or regularization of the
    * original source carried out in converting it to electronic form. This element is
    * modelled on an element in the Text Encoding Initiative (TEI).
    */

struct Normalization : public BaseMeiElement {
    Normalization();
    virtual ~Normalization() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    RegularmethodMixIn    m_Regularmethod;
    private:
        //REGISTER_DECLARATION(Normalization);
};


/** \brief   notes statement ― Groups bibliographic annotations, each of which provides
    * descriptive information in addition to that recorded in other parts of the
    * bibliographic description. These annotations are similar to "general notes" in
    * traditional bibliographic descriptions. This element is modelled on an element
    * in the Text Encoding Initiative (TEI).
    */

struct Notesstmt : public BaseMeiElement {
    Notesstmt();
    virtual ~Notesstmt() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Notesstmt);
};


/** \brief   performance medium ― Indicates the number and character of the performing
    * forces used in a musical composition. The function of instrumentalists or
    * vocalists is represented by the choice of ensemble and performer child elements.
    * Arrangements are coded for the medium of the work being described, not for the
    * original medium.
    */

struct Perfmedium : public BaseMeiElement {
    Perfmedium();
    virtual ~Perfmedium() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    AuthorizedMixIn    m_Authorized;
    private:
        //REGISTER_DECLARATION(Perfmedium);
};


/** \brief   performer ― Used when performing forces includes specific instrumental or
    * vocal performers. If the performer plays more than one instrument in a
    * composition, the first named instrument is given. If a principal instrument can
    * be determined, the name or code for that instrument is given. For percussion
    * music, whether for a single performer or more than one, the number of performers
    * is given, rather than the number of instruments. For monologues, or works with
    * narration, an indication of unspecified voice is given for the speaker or
    * narrator.
    */

struct Performer : public BaseMeiElement {
    Performer();
    virtual ~Performer() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Performer);
};


/** \brief   physical description ― Container for information about the location,
    * appearance, construction, or handling of physical materials, such as their
    * dimension, quantity, color, style, and technique of creation. Dedicatory text
    * and title page features may also be encoded here when they are not transcribed
    * as part of the front or back matter; i.e., when they are considered to be meta-
    * data rather than a transcription. This element is modelled on an element in
    * Encoded Archival Description (EAD).
    */

struct Physdesc : public BaseMeiElement {
    Physdesc();
    virtual ~Physdesc() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Physdesc);
};


/** \brief   physical location ― Location of the source within a repository, e.g., shelf
    * mark or other locational information. This element is modelled on an element in
    * Encoded Archival Description (EAD).
    */

struct Physloc : public BaseMeiElement {
    Physloc();
    virtual ~Physloc() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Physloc);
};


/** \brief   physical medium ― Records the physical materials used in the source, such as
    * ink and paper. All materials may be described in a single <physMedium> element
    * or multiple elements may be used, one for each medium. This element is modelled
    * on an element in Encoded Archival Description (EAD).
    */

struct Physmedium : public BaseMeiElement {
    Physmedium();
    virtual ~Physmedium() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    AuthorizedMixIn    m_Authorized;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Physmedium);
};


/** \brief   plate number ― Designation assigned to a resource by a music publisher,
    * usually printed at the bottom of each page, and sometimes appearing also on the
    * title page. While it is often called a "plate number", it does not always
    * contain numbers. The facs attribute may be used to record the location of the
    * plate number in a facsimile image.
    */

struct Platenum : public BaseMeiElement {
    Platenum();
    virtual ~Platenum() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Platenum);
};


/** \brief   price ― The cost of access to a bibliographic item.
    */

struct Price : public BaseMeiElement {
    Price();
    virtual ~Price() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    MeasurementMixIn    m_Measurement;
    private:
        //REGISTER_DECLARATION(Price);
};


/** \brief   project description ― Project-level meta-data describing the aim or purpose
    * for which the electronic file was encoded, funding agencies, etc. together with
    * any other relevant information concerning the process by which it was assembled
    * or collected. This element is modelled on an element in the Text Encoding
    * Initiative (TEI).
    */

struct Projectdesc : public BaseMeiElement {
    Projectdesc();
    virtual ~Projectdesc() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Projectdesc);
};


/** \brief   provenance ― The record of ownership or custodianship of an item. This element
    * is modelled on an element in the Encoded Archival Description (EAD) and Text
    * Encoding Initiative (TEI).
    */

struct Provenance : public BaseMeiElement {
    Provenance();
    virtual ~Provenance() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Provenance);
};


/** \brief   publication statement ― Container for information regarding the publication or
    * distribution of a bibliographic item, including the publisher's name and
    * address, the date of publication, and other relevant details. When an item is
    * unpublished, use only the <unpub> sub-element. This element is modelled on an
    * element in the Text Encoding Initiative (TEI).
    */

struct Pubstmt : public BaseMeiElement {
    Pubstmt();
    virtual ~Pubstmt() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Pubstmt);
};


/** \brief   related item ― contains or references another bibliographic item which is
    * related to the present one in some specified manner, for example as a
    * constituent or alternative version of it. A URI for the related item should be
    * placed in the <identifier> sub-element. This element is modelled on the
    * relatedItem element in the Text Encoding Initiative (TEI) and MODS schemas.
    */

struct Relateditem : public BaseMeiElement {
    Relateditem();
    virtual ~Relateditem() {};
    
    /** \brief   describes the relationship between the <relatedItem> and the resource described
    * in the parent element, i.e. <source> or <relatedItem>. "preceding" indicates a
    * predecessor to the resource; "succeeding" applies to a successor to the
    * resource; "original" indicates the original form of the resource; "host"
    * provides info concerning an intellectual or physical constituent unit of the
    * resource; "otherVersion" indicates a change in the intellectual content of the
    * resource not significant enough to be a different work; "otherFormat" indicates
    * a change in physical format of the resource; "isReferencedBy" applies to a
    * citation or reference to published bibliographic descriptions, reviews,
    * abstracts, or indexes of the content of the resource; "references" applies to a
    * resource cited or referred to in the resource. These values are based on MODS
    * version 3.4.
    */
    string getRelValue() throw (AttributeNotFoundException);
    MeiAttribute* getRel() throw (AttributeNotFoundException);
    void setRel(std::string _rel);
    bool hasRel();
    void removeRel();

    
    DatapointingMixIn    m_Datapointing;
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Relateditem);
};


/** \brief   responsibility ― A phrase describing the nature of a person's intellectual
    * responsibility. The name of the list from which a controlled value is taken may
    * be recorded using the authority attribute. This element is modelled on an
    * element in the Text Encoding Initiative (TEI).
    */

struct Resp : public BaseMeiElement {
    Resp();
    virtual ~Resp() {};
    
    
    AuthorizedMixIn    m_Authorized;
    private:
        //REGISTER_DECLARATION(Resp);
};


/** \brief   responsibility statement ― Names one or more individuals, groups, or in rare
    * cases, mechanical processes, responsible for creation or realization of the
    * intellectual or artistic content. This element is modelled on an element in the
    * Text Encoding Initiative (TEI).
    */

struct Respstmt : public BaseMeiElement {
    Respstmt();
    virtual ~Respstmt() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Respstmt);
};


/** \brief   revision description ― Container for information about alterations that have
    * been made to an MEI file. It is recommended that changes be recorded in reverse
    * chronological order, with the most recent alteration first. This element is
    * modelled on an element in the Text Encoding Initiative (TEI).
    */

struct Revisiondesc : public BaseMeiElement {
    Revisiondesc();
    virtual ~Revisiondesc() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Revisiondesc);
};


/** \brief   sampling declaration ― Contains a prose description of the rationale and
    * methods used in sampling texts in the creation of a corpus or collection. This
    * element is modelled on an element in the Text Encoding Initiative (TEI).
    */

struct Samplingdecl : public BaseMeiElement {
    Samplingdecl();
    virtual ~Samplingdecl() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Samplingdecl);
};


/** \brief   segmentation ― Describes the principles according to which the musical text
    * has been segmented, for example into movements, sections, etc. This element is
    * modelled on an element in the Text Encoding Initiative (TEI).
    */

struct Segmentation : public BaseMeiElement {
    Segmentation();
    virtual ~Segmentation() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Segmentation);
};


/** \brief   series statement ― Groups information about the series, if any, to which a
    * publication belongs. In this context, the title element records the series
    * title, the respStmt element records the person or group responsible for the
    * series, and the identifier element contains a series identifier. The content
    * element should be used when it is necessary to enumerate the content of the
    * series. The seriesStmt element is provided within seriesStmt for the description
    * of a sub-series. This element is modelled on an element in the Text Encoding
    * Initiative (TEI).
    */

struct Seriesstmt : public BaseMeiElement {
    Seriesstmt();
    virtual ~Seriesstmt() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Seriesstmt);
};


/** \brief   source ― A bibliographic description of a source used in the creation of the
    * electronic file. Multiple physDesc sub-elements may be used to describe the
    * physically separate parts of a single source. The data attribute may be used to
    * reference one or more features that occur in this particular source. A URI for
    * the related item should be placed in the <identifier> sub-element. This element
    * is modelled on the sourceDesc element in the Text Encoding Initiative (TEI).
    */

struct Source : public BaseMeiElement {
    Source();
    virtual ~Source() {};
    
    
    DatapointingMixIn    m_Datapointing;
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Source);
};


/** \brief   source description ― A container for the descriptions of the source(s) used in
    * the creation of the electronic file. This element is recommended where the MEI
    * file is a transcription of existing music, but is not required when the data is
    * originally created in MEI form.
    */

struct Sourcedesc : public BaseMeiElement {
    Sourcedesc();
    virtual ~Sourcedesc() {};
    
    
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Sourcedesc);
};


/** \brief   standard values ― Specifies the format used when standardized date or number
    * values are supplied. This element is modelled on an element in the Text Encoding
    * Initiative (TEI).
    */

struct Stdvals : public BaseMeiElement {
    Stdvals();
    virtual ~Stdvals() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    DatapointingMixIn    m_Datapointing;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Stdvals);
};


/** \brief   system requirements ― System requirements for using the electronic item.
    */

struct Sysreq : public BaseMeiElement {
    Sysreq();
    virtual ~Sysreq() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(Sysreq);
};


/** \brief   term ― Single keyword or phrase which describes the work. The classcode
    * attribute may be used to link the term to a terminological source given in a
    * classCode element. The term element may include other term elements in order to
    * allow the creation of coordinated terms; i.e., terms created from a combination
    * of other, independent terms. This element is modelled on an element in the Text
    * Encoding Initiative (TEI).
    */

struct Term : public BaseMeiElement {
    Term();
    virtual ~Term() {};
    
    /** \brief   contains a reference to the controlled vocabulary from which the terms are
    * drawn. The value must match the value of an ID attribute on a classCode element
    * given elsewhere in the document.
    */
    string getClasscodeValue() throw (AttributeNotFoundException);
    MeiAttribute* getClasscode() throw (AttributeNotFoundException);
    void setClasscode(std::string _classcode);
    bool hasClasscode();
    void removeClasscode();

    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Term);
};


/** \brief   termList ― Collection of text phrases which describe a work or source
    * document.
    */

struct Termlist : public BaseMeiElement {
    Termlist();
    virtual ~Termlist() {};
    
    /** \brief   contains a reference to the controlled vocabulary from which the terms are
    * drawn. The value must match the value of an ID attribute on a classCode element
    * given elsewhere in the document.
    */
    string getClasscodeValue() throw (AttributeNotFoundException);
    MeiAttribute* getClasscode() throw (AttributeNotFoundException);
    void setClasscode(std::string _classcode);
    bool hasClasscode();
    void removeClasscode();

    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Termlist);
};


/** \brief   title statement ― Container for title and responsibility meta-data. This
    * element is modelled on an element in the Text Encoding Initiative (TEI).
    */

struct Titlestmt : public BaseMeiElement {
    Titlestmt();
    virtual ~Titlestmt() {};
    
    
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Titlestmt);
};


/** \brief   treatment history ― A record of the treatment the item has undergone (e.g.,
    * de-acidification, restoration, etc.) Treatment history may also comprise details
    * of the treatment process (e.g., chemical solutions used, techniques applied,
    * etc.), the date the treatment was applied, etc. This element is modelled on an
    * element in Encoded Archival Description (EAD).
    */

struct Treathist : public BaseMeiElement {
    Treathist();
    virtual ~Treathist() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Treathist);
};


/** \brief   treatment scheduled ― Scheduled treatment, e.g. de-acidification, restoration,
    * etc., for an item. This element is modelled on an element in Encoded Archival
    * Description (EAD).
    */

struct Treatsched : public BaseMeiElement {
    Treatsched();
    virtual ~Treatsched() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Treatsched);
};


/** \brief   unpublished ― Used to explicitly indicate that a bibliographic source is
    * unpublished. A short phrase indicating the nature of or the reason for the
    * unpublished status may be given as the element's content.
    */

struct Unpub : public BaseMeiElement {
    Unpub();
    virtual ~Unpub() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Unpub);
};


/** \brief   usage restrictions ― Container for information about the conditions that
    * affect use of a bibliographic item after access has been granted. It may
    * indicate limitations imposed by an owner, repository, or legal statute (for
    * example, copyright law) regarding the reproduction, publication, or quotation of
    * the item. It may also indicate the absence of restrictions, such as when rights
    * have been ceded to the public domain. Do not confuse this element with the
    * <accessRestrict> element, which holds information about conditions affecting the
    * availability of the material. This element is modelled on an element in Encoded
    * Archival Description (EAD).
    */

struct Userestrict : public BaseMeiElement {
    Userestrict();
    virtual ~Userestrict() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Userestrict);
};


/** \brief   watermark ― Contains a description of a watermark or similar device. The facs
    * attribute may be used to record the location of the watermark in a facsimile
    * image. This element is modelled on an element in the Text Encoding Initiative
    * (TEI).
    */

struct Watermark : public BaseMeiElement {
    Watermark();
    virtual ~Watermark() {};
    
    
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Watermark);
};


/** \brief   
    */

struct Work : public BaseMeiElement {
    Work();
    virtual ~Work() {};
    
    
    DatapointingMixIn    m_Datapointing;
    CommonMixIn    m_Common;
    BiblMixIn    m_Bibl;
    private:
        //REGISTER_DECLARATION(Work);
};


/** \brief   work description ― A container for description of the work(s) used in the
    * creation of the electronic file.
    */

struct Workdesc : public BaseMeiElement {
    Workdesc();
    virtual ~Workdesc() {};
    
    
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Workdesc);
};


#endif // HEADER_H_
