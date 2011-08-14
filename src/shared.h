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
    
#ifndef SHARED_H_
#define SHARED_H_

#include "facsimilemixins.h"
#include "analysismixins.h"
#include "edittransmixins.h"
#include "mensuralmixins.h"
#include "sharedmixins.h"
#include "cmnmixins.h"
#include "critappmixins.h"
#include "midimixins.h"
using namespace std;
/** \brief  abbreviation ― A generic element for 1) a shortened form of a word, including
 *          an acronym or 2) a shorthand notation.
 *
 * The type attribute may be used to classify the abbreviation according to some          
 *          convenient typology. Sample values include: suspension - the abbreviation          
 *          provides the first letter(s) of the word or phrase, omitting the remainder;          
 *          contraction - the abbreviation omits some letter(s) in the middle; brevigraph -          
 *          the abbreviation comprises a special symbol or mark; superscription - the          
 *          abbreviation includes writing above the line; acronym - the abbreviation          
 *          comprises the initial letters of the words of a phrase; title - the abbreviation          
 *          is for a title of address (Dr, Ms, Mr, ...); organization - the abbreviation is          
 *          for the name of an organization; geographic - the abbreviation is for a          
 *          geographic name. This tag is the mirror image of the <expan> tag; both allow the          
 *          encoder to transcribe both an abbreviation and its expansion. In <abbr>,          
 *          however, the original is transcribed as the content of the element and the          
 *          expansion as an attribute value; <expan> reverses this. The choice between the          
 *          two is up to the user. The <abbr> tag is not required; if appropriate, the          
 *          encoder may transcribe abbreviations in the source text silently, without          
 *          tagging them. If abbreviations are not transcribed directly but expanded          
 *          silently, then the MEI header should so indicate. The cert attribute signifies          
 *          the degree of certainty ascribed to the expansion of the abbreviation. The expan          
 *          attribute gives an expansion of the abbreviation. The resp attribute contains an          
 *          ID reference to an element containing the name of the editor or transcriber          
 *          responsible for supplying the expansion of the abbreviation. This element is          
 *          modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Abbr : public BaseMeiElement{
    Abbr();
    virtual ~Abbr() {};

    string getExpanValue() throw (AttributeNotFoundException);

    MeiAttribute* getExpan() throw (AttributeNotFoundException);
    void setExpan(string _expan);
    bool hasExpan();

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    EditMixIn    m_Edit;
    TransMixIn    m_Trans;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Abbr);
};

/** \brief  accidental ― Records a temporary alteration to the pitch of a note.
 *
 * An accidental may raise a pitch by one or two semitones or it may cancel a          
 *          previous accidental or part of a key signature. This element provides an          
 *          alternative to the accid and accid.ges attributes on the <note> element. The          
 *          element should be used when specific display info, such as size or color, needs          
 *          to be recorded for the accidental or when multiple accidentals occur on a single          
 *          note. The func attribute can be used to differentiate between the accidental's          
 *          functions, such as 'cautionary' or 'editorial'..
 */
struct Accid : public BaseMeiElement{
    Accid();
    virtual ~Accid() {};

    string getFuncValue() throw (AttributeNotFoundException);

    MeiAttribute* getFunc() throw (AttributeNotFoundException);
    void setFunc(string _func);
    bool hasFunc();

    string getPlaceValue() throw (AttributeNotFoundException);

    MeiAttribute* getPlace() throw (AttributeNotFoundException);
    void setPlace(string _place);
    bool hasPlace();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    EnclosingcharsMixIn    m_Enclosingchars;
    StafflocMixIn    m_Staffloc;
    TypographyMixIn    m_Typography;
    VisualoffsetHoMixIn    m_VisualoffsetHo;
    VisualoffsetVoMixIn    m_VisualoffsetVo;
    XyMixIn    m_Xy;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Accid);
};

/** \brief  actor ― Name of an actor appearing within a cast list.
 */
struct Actor : public BaseMeiElement{
    Actor();
    virtual ~Actor() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Actor);
};

/** \brief  address ― Contains a postal address, for example of a publisher, an
 *          organization, or an individual.
 *
 * This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Address : public BaseMeiElement{
    Address();
    virtual ~Address() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Address);
};

/** \brief  addrLine ― Single line of a postal address.
 *
 * This element may be repeated as many times as necessary to enter all lines of an          
 *          address. This element is modelled on elements in Encoded Archival Description          
 *          (EAD) and the Text Encoding Initiative (TEI)..
 */
struct AddrLine : public BaseMeiElement{
    AddrLine();
    virtual ~AddrLine() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(AddrLine);
};

/** \brief  annotation ― Provides a short statement explaining the text or indicating the
 *          basis for an assertion.
 *
 * It is used for both general comments and for an annotation of the musical text.          
 *          <annot> provides a way to group participating *events* and/or *control events*,          
 *          the notes that form a descending bass line or phrase marks, for example, and          
 *          provide a label for or comment regarding the group. A list of event IDs may be          
 *          given in the plist attribute. An editorial or analytical comment or observation,          
 *          encoded elsewhere, such as in the front or back matter, in score text elements,          
 *          or in an external document may be pointed to using the link.common,          
 *          link.internal, or link.external attributes. Alternatively, the observation may          
 *          be included directly within the <annot> element. The <annot> element, along with          
 *          other elements with attributes from the att.link.external class, may also be          
 *          used to link/synchronize elements within the MEI file to external media such as          
 *          images or sound recordings. The ID of the MEI element(s) to be linked from          
 *          should be encoded in the plist attribute while the link to the external media          
 *          may be encoded in the href or entityref attributes or in the body of the          
 *          annotation using <extref> or <extptr> elements. The starting point of the          
 *          annotation may be indicated by either a tstamp, tstamp.ges, tstamp.real or          
 *          startid attribute, while the ending point may be recorded by either a dur,          
 *          dur.ges or endid attribute. The resp attribute records the editor(s) responsible          
 *          for identifying or creating the annotation..
 */
struct Annot : public BaseMeiElement{
    Annot();
    virtual ~Annot() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationTimestampMixIn    m_DurationTimestamp;
    LangMixIn    m_Lang;
    LayeridentMixIn    m_Layerident;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    ResponsibilityMixIn    m_Responsibility;
    StaffidentMixIn    m_Staffident;
    TimestampMusicalMixIn    m_TimestampMusical;
    TimestampPerformedMixIn    m_TimestampPerformed;
    TypedMixIn    m_Typed;
    LinkInternalMixIn    m_LinkInternal;
    StartendidMixIn    m_Startendid;
    EventMixIn    m_Event;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    CritMixIn    m_Crit;
    SourceMixIn    m_Source;
    RdgAnlMixIn    m_RdgAnl;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Annot);
};

/** \brief  articulation ― An indication of how to play a note or chord.
 *
 * Articulations typically affect duration, such as staccato marks, or the force of          
 *          attack, such as accents. This element provides an alternative to the artic          
 *          attributes on the <note> and <chord> elements. It should be used when specific          
 *          display info, such as size or color, needs to be recorded for the articulation          
 *          or when multiple articulation marks occur on a single note or chord..
 */
struct Artic : public BaseMeiElement{
    Artic();
    virtual ~Artic() {};

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    EnclosingcharsMixIn    m_Enclosingchars;
    PlacementMixIn    m_Placement;
    StafflocMixIn    m_Staffloc;
    TypographyMixIn    m_Typography;
    XyMixIn    m_Xy;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Artic);
};

/** \brief  bar line ― Vertical line drawn through one or more staves that divides musical
 *          notation into metrical units.
 *
 * This element is provided for repertoires, such as mensural notation, that lack          
 *          measures. Because the barLine element's attributes, from which the logical and          
 *          visual characteristics of the bar line can be discerned, largely duplicate those          
 *          of measure, the use of barLine is not necessary within measure elements in CMN..
 */
struct BarLine : public BaseMeiElement{
    BarLine();
    virtual ~BarLine() {};

    string getRendValue() throw (AttributeNotFoundException);

    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(string _rend);
    bool hasRend();

    BarplacementMixIn    m_Barplacement;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    MeasurementMixIn    m_Measurement;
    WidthMixIn    m_Width;
    MeterconformanceBarMixIn    m_MeterconformanceBar;
    TimestampMusicalMixIn    m_TimestampMusical;
    LinkInternalMixIn    m_LinkInternal;
    EventMixIn    m_Event;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(BarLine);
};

/** \brief  bibliographic reference ― Provides a citation for a published work.
 *
 * <bibref> may contain a mix of text and more specific elements such as <title>,          
 *          <edition>, <persName>, and <corpName>. This element may also function as a          
 *          hypertext reference to an external electronic resource. Do not confuse this          
 *          element with <ref>, which is an internal link from one place in the MEI document          
 *          to another place in the same document..
 */
struct Bibl : public BaseMeiElement{
    Bibl();
    virtual ~Bibl() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Bibl);
};

/** \brief  body ― This element contains the actual music data of the MEI encoding, as
 *          opposed to the header, front, and back elements, which do not.
 *
 * When the music can be broken into high-level, discrete, linear segments, such as          
 *          movements of a symphony, there may be multiple <mdiv> elements within this          
 *          element. This is the highest level indication of the structure of the music.          
 *          This element is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Body : public BaseMeiElement{
    Body();
    virtual ~Body() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    private:
        //REGISTER_DECLARATION(Body);
};

/** \brief  caption ― A label which accompanies an illustration or a table.
 */
struct Caption : public BaseMeiElement{
    Caption();
    virtual ~Caption() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Caption);
};

/** \brief  cast list ― Contains a single cast list or dramatis personae.
 */
struct CastList : public BaseMeiElement{
    CastList();
    virtual ~CastList() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(CastList);
};

/** \brief  cast list item ― Contains a single entry within a cast list, describing either
 *          a single role or a list of non-speaking roles.
 */
struct CastItem : public BaseMeiElement{
    CastItem();
    virtual ~CastItem() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(CastItem);
};

/** \brief  cast list group ― Groups one or more individual castItem elements within a
 *          cast list.
 */
struct CastGrp : public BaseMeiElement{
    CastGrp();
    virtual ~CastGrp() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(CastGrp);
};

/** \brief  chord ― A simultaneous sounding of two or more notes in the same layer *with
 *          the same duration*.
 */
struct Chord : public BaseMeiElement{
    Chord();
    virtual ~Chord() {};

    string getClusterValue() throw (AttributeNotFoundException);

    MeiAttribute* getCluster() throw (AttributeNotFoundException);
    void setCluster(string _cluster);
    bool hasCluster();

    AltsymMixIn    m_Altsym;
    ArticulationPerformedMixIn    m_ArticulationPerformed;
    AugmentdotsMixIn    m_Augmentdots;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    DurationMusicalMixIn    m_DurationMusical;
    DurationPerformedMixIn    m_DurationPerformed;
    FermatapresentMixIn    m_Fermatapresent;
    InstrumentidentMixIn    m_Instrumentident;
    RelativesizeMixIn    m_Relativesize;
    StemmedMixIn    m_Stemmed;
    SyltextMixIn    m_Syltext;
    TupletpresentMixIn    m_Tupletpresent;
    VisibilityMixIn    m_Visibility;
    VisualoffsetHoMixIn    m_VisualoffsetHo;
    VisualoffsetToMixIn    m_VisualoffsetTo;
    XyMixIn    m_Xy;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    VisualoffsetMixIn    m_Visualoffset;
    EventMixIn    m_Event;
    BeamedMixIn    m_Beamed;
    BeamsecondaryMixIn    m_Beamsecondary;
    GracedMixIn    m_Graced;
    LvpresentMixIn    m_Lvpresent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    MelodicfunctionMixIn    m_Melodicfunction;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Chord);
};

/** \brief  clef ― Indication of the exact location of a particular note on the staff and,
 *          therefore, the other notes as well.
 *
 * This element provides an alternative to the staff element's clef.* attributes.          
 *          It should be used when specific display info, such as size or color, needs to be          
 *          recorded for the clef or when multiple, simultaneous clefs occur on a single          
 *          staff..
 */
struct Clef : public BaseMeiElement{
    Clef();
    virtual ~Clef() {};

    AltsymMixIn    m_Altsym;
    ClefshapeMixIn    m_Clefshape;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    LinelocMixIn    m_Lineloc;
    OctaveMixIn    m_Octave;
    OctavedisplacementMixIn    m_Octavedisplacement;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Clef);
};

/** \brief  clef change ― A temporary change of clef.
 */
struct ClefChange : public BaseMeiElement{
    ClefChange();
    virtual ~ClefChange() {};

    AltsymMixIn    m_Altsym;
    ClefshapeMixIn    m_Clefshape;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    LinelocMixIn    m_Lineloc;
    OctaveMixIn    m_Octave;
    OctavedisplacementMixIn    m_Octavedisplacement;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    EventMixIn    m_Event;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(ClefChange);
};

/** \brief  custos ― Symbol placed at the end of a line of music to indicate the first
 *          note of the next line.
 *
 * Sometimes called a "direct". The most common visual form is a sign resembling a          
 *          mordent. Other graphical forms may be indicated by the altsym attribute.          
 *          Together the pname and oct attributes identify the location where the custos          
 *          appears..
 */
struct Custos : public BaseMeiElement{
    Custos();
    virtual ~Custos() {};

    string getTargetValue() throw (AttributeNotFoundException);

    MeiAttribute* getTarget() throw (AttributeNotFoundException);
    void setTarget(string _target);
    bool hasTarget();

    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    CritMixIn    m_Crit;
    SourceMixIn    m_Source;
    RdgAnlMixIn    m_RdgAnl;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Custos);
};

/** \brief  date ― A date in any format, including a date range.
 *
 * A date range may be expressed either as textual content, e.g., <date>March 1-21,          
 *          1812</date>, or using date sub-elements, possibly combined with text, e.g.,          
 *          <date> <date>March 1, 1812</date> - <date>March 21, 1812</date> </date>. The          
 *          latter form is useful when the starting and ending points of the date range          
 *          require qualification. This element is modelled on an element in the Text          
 *          Encoding Initiative (TEI)..
 */
struct Date : public BaseMeiElement{
    Date();
    virtual ~Date() {};

    string getRegValue() throw (AttributeNotFoundException);

    MeiAttribute* getReg() throw (AttributeNotFoundException);
    void setReg(string _reg);
    bool hasReg();

    BiblMixIn    m_Bibl;
    CalendaredMixIn    m_Calendared;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    LangMixIn    m_Lang;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Date);
};

/** \brief  directive ― A text expression that is on the score (typically above, below, or
 *          between staves, but not on the staff) not encoded elsewhere in             more
 *          specific elements, such as <tempo> or <dynam>.
 *
 * Examples include text strings, such as 'affettuoso' or fingering numbers, and          
 *          music symbols, such as segno and coda symbols, fermatas over a bar line, etc.          
 *          Directives can be control elements. That is, they can linked via their          
 *          attributes to other events. The starting point of the directive may be indicated          
 *          by either a tstamp, tstamp.ges, tstamp.real or startid attribute, while the          
 *          ending point may be recorded by either a dur, dur.ges or endid attribute. It is          
 *          a semantic error not to specify a starting point attribute..
 */
struct Dir : public BaseMeiElement{
    Dir();
    virtual ~Dir() {};

    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationTimestampMixIn    m_DurationTimestamp;
    LangMixIn    m_Lang;
    PlacementMixIn    m_Placement;
    TypedMixIn    m_Typed;
    Visualoffset2HoMixIn    m_Visualoffset2Ho;
    Visualoffset2ToMixIn    m_Visualoffset2To;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Dir);
};

/** \brief  dot ― This element provides an alternative to the dots attribute on chord,
 *          note, rest, space, tuplet, and tupletSpan elements.
 *
 * It should be used when specific display info, such as size or color, needs to be          
 *          recorded for the dot. This element may also be used for dots of division in the          
 *          mensural repertoire..
 */
struct Dot : public BaseMeiElement{
    Dot();
    virtual ~Dot() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    StafflocMixIn    m_Staffloc;
    VisualoffsetHoMixIn    m_VisualoffsetHo;
    VisualoffsetVoMixIn    m_VisualoffsetVo;
    XyMixIn    m_Xy;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Dot);
};

/** \brief  dynamic ― Indication of the volume of a note, phrase, or section of music.
 *
 * This element may be used for instantaneous or continuous textual dynamics, e.g.          
 *          'p', 'mf', or 'cresc. poco a poco'. The <hairpin> element should be used for          
 *          graphical, i.e., crescendo and diminuendo, dynamic markings. The starting point          
 *          of the dynamic marking may be indicated by either a tstamp, tstamp.ges,          
 *          tstamp.real or startid attribute, while the ending point may be recorded by          
 *          either a dur, dur.ges or endid attribute. It is a semantic error not to specify          
 *          a starting point attribute. Please note that the dur attribute is not a true          
 *          duration, but rather a time stamp for the end point of the dynamic mark. A MIDI          
 *          value associated with the graphical dynamic sign may be recorded in the val          
 *          attribute..
 */
struct Dynam : public BaseMeiElement{
    Dynam();
    virtual ~Dynam() {};

    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationTimestampMixIn    m_DurationTimestamp;
    LangMixIn    m_Lang;
    PlacementMixIn    m_Placement;
    Visualoffset2HoMixIn    m_Visualoffset2Ho;
    Visualoffset2ToMixIn    m_Visualoffset2To;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    MidivalueMixIn    m_Midivalue;
    private:
        //REGISTER_DECLARATION(Dynam);
};

/** \brief  edition designation ― A word or text phrase that indicates a difference in
 *          either content or form between the item being described and a related
 *          item previously issued by the same publisher/distributor (e.
 *
 * g. 2nd edition, version 2.0, etc.), or simultaneously issued by either the same          
 *          publisher/distributor or another publisher/distributor (e.g. large print          
 *          edition, British edition, etc.). This element is modelled on an element in the          
 *          Text Encoding Initiative (TEI)..
 */
struct Edition : public BaseMeiElement{
    Edition();
    virtual ~Edition() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Edition);
};

/** \brief  ending ― Alternative ending for a repeated passage of music; i.
 *
 * e., prima volta, seconda volta, etc. The scoreDef element is allowed as a sub-          
 *          element so that an ending may have its own meta-data without the overhead of          
 *          child <section>s. Div sub-elements are not allowed within ending in order to          
 *          avoid collisions with the brackets that are usually displayed over endings.          
 *          Endings may *not* contain other ending elements..
 */
struct Ending : public BaseMeiElement{
    Ending();
    virtual ~Ending() {};

    CommonMixIn    m_Common;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    TypedMixIn    m_Typed;
    LinkInternalMixIn    m_LinkInternal;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Ending);
};

/** \brief  expansion ― Contains the expansion of an abbreviation.
 *
 * The type attribute may be used to classify the abbreviation according to some          
 *          convenient typology. This element is the mirror image of <abbr>. Both allow the          
 *          encoder to transcribe both an abbreviation and its expansion. In <abbr>,          
 *          however, the original is transcribed as the content of the element and the          
 *          expansion as an attribute value; <expan> reverses this. The choice between the          
 *          two elements is up to the user. If appropriate, the encoder may expand          
 *          abbreviations in the source text silently, without tagging them. If this is          
 *          done, the MEI header should indicate this has been done. The abbr attribute          
 *          gives the abbreviation in its unexpanded form. The cert attribute signifies the          
 *          degree of certainty ascribed to the expansion of the abbreviation. The resp          
 *          attribute contains an ID reference to an element containing the name of the          
 *          editor or transcriber responsible for supplying the expansion of the          
 *          abbreviation held as the content of the <expan> element. This element is          
 *          modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Expan : public BaseMeiElement{
    Expan();
    virtual ~Expan() {};

    string getAbbrValue() throw (AttributeNotFoundException);

    MeiAttribute* getAbbr() throw (AttributeNotFoundException);
    void setAbbr(string _abbr);
    bool hasAbbr();

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    EditMixIn    m_Edit;
    TransMixIn    m_Trans;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Expan);
};

/** \brief  expansion ― Indicates how a section may be programmatically expanded into its
 *          'through-composed' form.
 *
 * The plist attribute contains an ordered list of IDs of descendant <section>,          
 *          <ending>, <lem>, or <rdg> elements. For example, the sequence "A End1 A End2"          
 *          indicates that the section labelled 'A' comes first, then the ending labelled          
 *          'End1', followed by the 'A' section again, and finally the ending labelled          
 *          'End2'..
 */
struct Expansion : public BaseMeiElement{
    Expansion();
    virtual ~Expansion() {};

    CommonMixIn    m_Common;
    ParticipantidentMixIn    m_Participantident;
    TypedMixIn    m_Typed;
    LinkInternalMixIn    m_LinkInternal;
    ControleventMixIn    m_Controlevent;
    CritMixIn    m_Crit;
    SourceMixIn    m_Source;
    EditMixIn    m_Edit;
    private:
        //REGISTER_DECLARATION(Expansion);
};

/** \brief  forme work ― This element is intended for capture of header/footer material
 *          that is non-repeating; that is, it occurs on isolated pages.
 *
 * For recurring headers and footers use pgHead* and pgFoot* elements. This element          
 *          is modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Fw : public BaseMeiElement{
    Fw();
    virtual ~Fw() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Fw);
};

/** \brief  group ― Enables the gathering of multiple documents into a single file.
 *
 * Because its model contains the music element, each of the documents can have its          
 *          own front and back matter. This element is modelled on an element in the Text          
 *          Encoding Initiative (TEI)..
 */
struct Group : public BaseMeiElement{
    Group();
    virtual ~Group() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    private:
        //REGISTER_DECLARATION(Group);
};

/** \brief  group symbol ― A brace or bracket used to group two or more staves of a score
 *          or part.
 *
 * This element provides an alternative to the staffGrp element's symbol attribute.          
 *          It may be used when exact placement or editorial details for the grouping symbol          
 *          must be recorded..
 */
struct GrpSym : public BaseMeiElement{
    GrpSym();
    virtual ~GrpSym() {};

    CommonMixIn    m_Common;
    StaffgroupingsymMixIn    m_Staffgroupingsym;
    XyMixIn    m_Xy;
    VisualoffsetMixIn    m_Visualoffset;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(GrpSym);
};

/** \brief  identifier ― An alpha-numeric string that establishes the identity of the
 *          described material, such as an International Standard Book/Music
 *          Number, Library of Congress Control Number, publisher's number, a personal
 *          identification number, an entry in a bibliography or catalog, etc.
 *
 * The type attribute may be used to indicate the system from which the identifier          
 *          was derived..
 */
struct Identifier : public BaseMeiElement{
    Identifier();
    virtual ~Identifier() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Identifier);
};

/** \brief  incipit ― The opening words or music of a composition.
 *
 * The <p> and <lg> elements are permitted in order to accommodate a text incipit,          
 *          while <score> is available to provide an MEI-encoded musical incipit. An incipit          
 *          encoded in another text format can be included in a CDATA section inside the          
 *          <incipCode> element..
 */
struct Incip : public BaseMeiElement{
    Incip();
    virtual ~Incip() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    private:
        //REGISTER_DECLARATION(Incip);
};

/** \brief  instrument group ― Collects MIDI instrument definitions.
 */
struct InstrGrp : public BaseMeiElement{
    InstrGrp();
    virtual ~InstrGrp() {};

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(InstrGrp);
};

/** \brief  instrument definition ― MIDI instrument declaration.
 *
 * This element provides a starting or default instrument declaration for a staff,          
 *          a group of staves, or a layer. MIDI prog elements may then change the instrument          
 *          as necessary..
 */
struct InstrDef : public BaseMeiElement{
    InstrDef();
    virtual ~InstrDef() {};

    string getMidiInstrnumValue() throw (AttributeNotFoundException);

    MeiAttribute* getMidiInstrnum() throw (AttributeNotFoundException);
    void setMidiInstrnum(string _midiinstrnum);
    bool hasMidiInstrnum();

    string getMidiInstrnameValue() throw (AttributeNotFoundException);

    MeiAttribute* getMidiInstrname() throw (AttributeNotFoundException);
    void setMidiInstrname(string _midiinstrname);
    bool hasMidiInstrname();

    CommonMixIn    m_Common;
    ChannelizedMixIn    m_Channelized;
    private:
        //REGISTER_DECLARATION(InstrDef);
};

/** \brief  key accidental ― Accidental in a key signature.
 *
 * It is a semantic error not to provide either the x and y pair of attributes or          
 *          the staffloc attribute..
 */
struct KeyAccid : public BaseMeiElement{
    KeyAccid();
    virtual ~KeyAccid() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    CommonMixIn    m_Common;
    EnclosingcharsMixIn    m_Enclosingchars;
    StafflocMixIn    m_Staffloc;
    XyMixIn    m_Xy;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(KeyAccid);
};

/** \brief  key signature ― This element may be used as an alternative to the key.
 *
 * * attributes (especially key.sig.mixed) on scoreDef and staffDef..
 */
struct KeySig : public BaseMeiElement{
    KeySig();
    virtual ~KeySig() {};

    string getModeValue() throw (AttributeNotFoundException);

    MeiAttribute* getMode() throw (AttributeNotFoundException);
    void setMode(string _mode);
    bool hasMode();

    CommonMixIn    m_Common;
    PitchMixIn    m_Pitch;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(KeySig);
};

/** \brief  label ― A text string that identifies a staff or staff group.
 */
struct Label : public BaseMeiElement{
    Label();
    virtual ~Label() {};

    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    CritMixIn    m_Crit;
    SourceMixIn    m_Source;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Label);
};

/** \brief  layer ― An independent stream of events on a staff.
 *
 * The term 'layer' is used instead of 'voice' in order to avoid confusion between          
 *          'voice' and 'voice leading'. The n attribute is used to establish a connection          
 *          back to the appropriate layerDef element..
 */
struct Layer : public BaseMeiElement{
    Layer();
    virtual ~Layer() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    MeterconformanceMixIn    m_Meterconformance;
    VisibilityMixIn    m_Visibility;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Layer);
};

/** \brief  layer definition ― Container for layer meta-information.
 */
struct LayerDef : public BaseMeiElement{
    LayerDef();
    virtual ~LayerDef() {};

    BeamingVisMixIn    m_BeamingVis;
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    DurationDefaultMixIn    m_DurationDefault;
    InstrumentidentMixIn    m_Instrumentident;
    LabelsAddlMixIn    m_LabelsAddl;
    OctavedefaultMixIn    m_Octavedefault;
    TextstyleMixIn    m_Textstyle;
    VisibilityMixIn    m_Visibility;
    BeamingLogMixIn    m_BeamingLog;
    private:
        //REGISTER_DECLARATION(LayerDef);
};

/** \brief  line break ― An empty formatting element that forces text to begin on a new
 *          line.
 *
 * The n attribute should be used to record a label for the line, i.e., most likely          
 *          a line number. See comment on <verse> element for description of func attribute.          
 *          Do not confuse this element with the <sb> element, which performs a similar          
 *          function for musical notation. This element is modelled on an element in the          
 *          Text Encoding Initiative (TEI)..
 */
struct Lb : public BaseMeiElement{
    Lb();
    virtual ~Lb() {};

    string getFuncValue() throw (AttributeNotFoundException);

    MeiAttribute* getFunc() throw (AttributeNotFoundException);
    void setFunc(string _func);
    bool hasFunc();

    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    CritMixIn    m_Crit;
    SourceMixIn    m_Source;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Lb);
};

/** \brief  musical division ― The mdiv element may contain one or both of 2 possible
 *          views of the music.
 *
 * The score view is the traditional full and open score while the parts view          
 *          contains each performer's view of the score; that is, his part. These 2 views          
 *          are necessary because it is not always possible or desirable to generate one          
 *          from the other. The score and parts elements are placed here and not directly          
 *          within the body element because score and part characteristics may change from          
 *          mdiv to mdiv. For example, the 2nd movement of a symphony may require different          
 *          performing forces (and therefore different score and part layout) than the other          
 *          movements. The mdiv element may be recursively nested in order to represent          
 *          music which exhibits this kind of structure. For example, an opera is normally          
 *          divided into acts, which are in turn divided into scenes. This may be          
 *          represented by the following markup: <mdiv> <- the opera <mdiv> <- act I <mdiv>          
 *          <- scene i <mdiv> <- scene ii </mdiv> <mdiv> <- act II <mdiv> <- scene i <mdiv>          
 *          <- scene ii </mdiv> </mdiv>.
 */
struct Mdiv : public BaseMeiElement{
    Mdiv();
    virtual ~Mdiv() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    TypedMixIn    m_Typed;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Mdiv);
};

/** \brief  mei ― The document element for a single document, containing a header and data.
 *
 * The <mei> element defines a particular instance of a document encoded with the          
 *          MEI schema. The name of this element should not be changed in order to assure an          
 *          absolute minimum level of MEI compliance..
 */
struct Mei : public BaseMeiElement{
    Mei();
    virtual ~Mei() {};

    string getXmlidValue() throw (AttributeNotFoundException);

    MeiAttribute* getXmlid() throw (AttributeNotFoundException);
    void setXmlid(string _xmlid);
    bool hasXmlid();

    MeiversionMixIn    m_Meiversion;
    private:
        //REGISTER_DECLARATION(Mei);
};

/** \brief  music ― Container for everything else in the document apart from the header.
 */
struct Music : public BaseMeiElement{
    Music();
    virtual ~Music() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    MeiversionMixIn    m_Meiversion;
    private:
        //REGISTER_DECLARATION(Music);
};

/** \brief  name ― Contains the name of an entity that is difficult to tag more
 *          specifically as a <corpName>, <geogName>, <persName>, or             <title>.
 *
 * The <name> element may be used in place of the more specific elements when it is          
 *          not known what kind of name is being described or when a high degree of          
 *          precision is not necessary. For example, the <name> element might be used when          
 *          it is not clear whether the name "Bach" refers to a person or a geographic          
 *          feature. The <name> element may be used for an individual, such as 'Henry VIII,          
 *          King of England'; a corporate body, such as 'The Beatles'; a geographical place;          
 *          or a generative mechanical process. When name parts are needed, use <name> sub-          
 *          elements. The recommended values for the type attribute are: pers, corp, place,          
 *          process. The <date> sub-element is available within <name> in order to record          
 *          any dates, associated with the name, i.e., birth and death in the case of          
 *          persons or creation and dissolution in the case of a corporate entity or place.          
 *          The name of the list from which a controlled value is taken, such as the          
 *          Thesaurus of Geographic Names (TGN) or Library of Congress Name Authority File          
 *          (LCNAF), may be recorded using the authority attribute. This element is modelled          
 *          on an element in Encoded Archival Description (EAD)..
 */
struct Name : public BaseMeiElement{
    Name();
    virtual ~Name() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    NameMixIn    m_Name;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Name);
};

/** \brief  note ― A single pitched event.
 *
 * (Read, p. 63) The note element is allowed to contain other events for situations          
 *          where a single (usually ornamented) written note is representative of a group of          
 *          performed notes. The accid and artic sub-elements may be used instead of the          
 *          note element's attributes when accid and artic represent first-class objects,          
 *          e.g., when they require attributes, such as x and y location attributes.          
 *          Similarly, the syl sub-element may be used instead of the syl attribute. The          
 *          verse sub-element may be used to group text syllables by verse. The colored          
 *          attribute may be used to indicate coloration. In the mensural repertoire,          
 *          coloration is a temporary change in the underlying mensuration from perfect to          
 *          imperfect. In the CMN repertoire, coloration is an inversion of the note head's          
 *          normal rendition, that is, the note head is void when it would otherwise be          
 *          filled and vice versa. Do not confuse this with visual color..
 */
struct Note : public BaseMeiElement{
    Note();
    virtual ~Note() {};

    string getOctGesValue() throw (AttributeNotFoundException);

    MeiAttribute* getOctGes() throw (AttributeNotFoundException);
    void setOctGes(string _octges);
    bool hasOctGes();

    string getPnameGesValue() throw (AttributeNotFoundException);

    MeiAttribute* getPnameGes() throw (AttributeNotFoundException);
    void setPnameGes(string _pnameges);
    bool hasPnameGes();

    string getPnumValue() throw (AttributeNotFoundException);

    MeiAttribute* getPnum() throw (AttributeNotFoundException);
    void setPnum(string _pnum);
    bool hasPnum();

    string getHeadshapeValue() throw (AttributeNotFoundException);

    MeiAttribute* getHeadshape() throw (AttributeNotFoundException);
    void setHeadshape(string _headshape);
    bool hasHeadshape();

    string getColoredValue() throw (AttributeNotFoundException);

    MeiAttribute* getColored() throw (AttributeNotFoundException);
    void setColored(string _colored);
    bool hasColored();

    string getGlissValue() throw (AttributeNotFoundException);

    MeiAttribute* getGliss() throw (AttributeNotFoundException);
    void setGliss(string _gliss);
    bool hasGliss();

    string getLigValue() throw (AttributeNotFoundException);

    MeiAttribute* getLig() throw (AttributeNotFoundException);
    void setLig(string _lig);
    bool hasLig();

    string getPclassValue() throw (AttributeNotFoundException);

    MeiAttribute* getPclass() throw (AttributeNotFoundException);
    void setPclass(string _pclass);
    bool hasPclass();

    string getTabFretValue() throw (AttributeNotFoundException);

    MeiAttribute* getTabFret() throw (AttributeNotFoundException);
    void setTabFret(string _tabfret);
    bool hasTabFret();

    string getTabStringValue() throw (AttributeNotFoundException);

    MeiAttribute* getTabString() throw (AttributeNotFoundException);
    void setTabString(string _tabstring);
    bool hasTabString();

    AccidentalPerformedMixIn    m_AccidentalPerformed;
    AltsymMixIn    m_Altsym;
    ArticulationPerformedMixIn    m_ArticulationPerformed;
    AugmentdotsMixIn    m_Augmentdots;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    DurationMusicalMixIn    m_DurationMusical;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationRatioMixIn    m_DurationRatio;
    EnclosingcharsMixIn    m_Enclosingchars;
    FermatapresentMixIn    m_Fermatapresent;
    InstrumentidentMixIn    m_Instrumentident;
    RelativesizeMixIn    m_Relativesize;
    StemmedMixIn    m_Stemmed;
    SyltextMixIn    m_Syltext;
    TupletpresentMixIn    m_Tupletpresent;
    VisibilityMixIn    m_Visibility;
    VisualoffsetHoMixIn    m_VisualoffsetHo;
    VisualoffsetToMixIn    m_VisualoffsetTo;
    XyMixIn    m_Xy;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    VisualoffsetMixIn    m_Visualoffset;
    EventMixIn    m_Event;
    BeamedMixIn    m_Beamed;
    BeamsecondaryMixIn    m_Beamsecondary;
    GracedMixIn    m_Graced;
    LvpresentMixIn    m_Lvpresent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    MensurLogMixIn    m_MensurLog;
    MensurationLogMixIn    m_MensurationLog;
    CommonAnlMixIn    m_CommonAnl;
    HarmonicfunctionMixIn    m_Harmonicfunction;
    IntervallicdescMixIn    m_Intervallicdesc;
    MelodicfunctionMixIn    m_Melodicfunction;
    SolfaMixIn    m_Solfa;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Note);
};

/** \brief  number ― Numeric information in any form.
 *
 * This element is used only when it is necessary to display a number in a special          
 *          way or to identify it with a type attribute..
 */
struct Num : public BaseMeiElement{
    Num();
    virtual ~Num() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    MeasurementMixIn    m_Measurement;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Num);
};

/** \brief  paragraph ― One or more text phrases that form a logical prose passage.
 *
 * A paragraph is usually typographically distinct: The text usually begins on a          
 *          new line and the first letter of the content is often indented, enlarged, or          
 *          both. This element is modelled on elements in Encoded Archival Description, Text          
 *          Encoding Initiative (TEI), and HTML..
 */
struct P : public BaseMeiElement{
    P();
    virtual ~P() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(P);
};

/** \brief  pad ― An indication of extra visual space between notational elements.
 */
struct Pad : public BaseMeiElement{
    Pad();
    virtual ~Pad() {};

    string getNumValue() throw (AttributeNotFoundException);

    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(string _num);
    bool hasNum();

    CommonMixIn    m_Common;
    EventMixIn    m_Event;
    private:
        //REGISTER_DECLARATION(Pad);
};

/** \brief  parts ― Gathers performers' parts.
 */
struct Parts : public BaseMeiElement{
    Parts();
    virtual ~Parts() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    TypedMixIn    m_Typed;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    private:
        //REGISTER_DECLARATION(Parts);
};

/** \brief  part ― An alternative visual rendition of the score from a particular
 *          performer's point of view.
 *
 * Part elements are not used in the score to indicate voice leading. Next          
 *          attributes on event elements should be used for this purpose. Part elements are          
 *          useful for encoding individual parts when there is no score, such as early music          
 *          part books, when the music has non-aligning bar lines, when different layout,          
 *          such as page turns, are needed for the score and parts, or for accommodating          
 *          software that requires part-by-part encoding. When assembly of the parts into a          
 *          score is desired and there are non-aligning bar lines, bar lines which indicate          
 *          points of alignment across all the parts may be marked as 'controlling', while          
 *          non-aligning ones may be marked as 'non-controlling'..
 */
struct Part : public BaseMeiElement{
    Part();
    virtual ~Part() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    TypedMixIn    m_Typed;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    private:
        //REGISTER_DECLARATION(Part);
};

/** \brief  page break ― The n attribute records the page number in the source.
 *
 * It need not be an integer, e.g. 'iv', or 'p17-3'. The logical page number can be          
 *          calculated by counting previous <pb> ancestor elements. When used in a score          
 *          context, a page break implies an accompanying system break. This element is          
 *          modelled on an element in the Text Encoding Initiative (TEI)..
 */
struct Pb : public BaseMeiElement{
    Pb();
    virtual ~Pb() {};

    string getFuncValue() throw (AttributeNotFoundException);

    MeiAttribute* getFunc() throw (AttributeNotFoundException);
    void setFunc(string _func);
    bool hasFunc();

    CommonMixIn    m_Common;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    CritMixIn    m_Crit;
    SourceMixIn    m_Source;
    RdgAnlMixIn    m_RdgAnl;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Pb);
};

/** \brief  page description ― Contains a brief prose description of the appearance or
 *          description of the content of a physical page.
 *
 * Best practice suggests the use of controlled vocabulary. Don't confuse this          
 *          element with a figure caption. A caption is text primarily intended for display          
 *          with an illustration. It may or may not function as a description of the          
 *          illustration..
 */
struct PgDesc : public BaseMeiElement{
    PgDesc();
    virtual ~PgDesc() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        //REGISTER_DECLARATION(PgDesc);
};

/** \brief  page header ― A running header on the first page.
 *
 * This element is a specialized form of the fw element for capturing the table-          
 *          formatted textual data that often appears on the first page of printed music. It          
 *          may also be used for similarly formatted material in manuscripts. The pgHead*          
 *          and pgFoot* elements should *not* be used to encode textual notes/annotations.          
 *          Auto-generated page numbers may be indicated with a processing instruction..
 */
struct PgHead : public BaseMeiElement{
    PgHead();
    virtual ~PgHead() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(PgHead);
};

/** \brief  page header 2 ― A running header on the pages following the first.
 *
 * This element is a specialized form of the fw element. The pgHead* and pgFoot*          
 *          elements should *not* be used to encode textual notes/annotations. Auto-          
 *          generated page numbers may be indicated with a processing instruction..
 */
struct PgHead2 : public BaseMeiElement{
    PgHead2();
    virtual ~PgHead2() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(PgHead2);
};

/** \brief  page footer ― A running footer on the first page.
 *
 * This element is a specialized form of the fw element. Auto-generated page          
 *          numbers may be indicated with a processing instruction. The pgHead* and pgFoot*          
 *          elements should *not* be used to encode textual notes/annotations..
 */
struct PgFoot : public BaseMeiElement{
    PgFoot();
    virtual ~PgFoot() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(PgFoot);
};

/** \brief  page footer 2 ― A running header on the pages following the first.
 *
 * This element is a specialized form of the fw element. Auto-generated page          
 *          numbers may be indicated with a processing instruction. The pgHead* and pgFoot*          
 *          elements should *not* be used to encode textual notes/annotations..
 */
struct PgFoot2 : public BaseMeiElement{
    PgFoot2();
    virtual ~PgFoot2() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(PgFoot2);
};

/** \brief  phrase ― Historically, a phrase mark indicated a "unified melodic idea", while
 *          the term "slur" was used for two-note legato patterns.
 *
 * (Read, p. 265). Nowadays, however, "phrase" and "slur" are often used          
 *          interchangeably (Read, p. 265-266), since the visual rendition of the two          
 *          concepts is the same. MEI provides two distinct elements so that those users          
 *          wishing to maintain a distinction for historical reasons may do so. If the user          
 *          does not want to maintain the distinction, then the more generic <slur> element          
 *          should be employed. The starting point of the phrase may be indicated by either          
 *          a tstamp, tstamp.ges, tstamp.real or startid attribute, while the ending point          
 *          may be recorded by either a dur, dur.ges or endid attribute. It is a semantic          
 *          error not to specify one starting and one ending type of attribute. Either          
 *          place, bulge, or bezier attributes may be used to record the curvature of the          
 *          phrase. Please note that the dur attribute here is not a true duration, but          
 *          rather a time stamp for the end point of the phrase mark..
 */
struct Phrase : public BaseMeiElement{
    Phrase();
    virtual ~Phrase() {};

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    CurvatureMixIn    m_Curvature;
    CurverendMixIn    m_Curverend;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationTimestampMixIn    m_DurationTimestamp;
    JoinedMixIn    m_Joined;
    XyMixIn    m_Xy;
    Xy2MixIn    m_Xy2;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Phrase);
};

/** \brief  rend ― A formatting element indicating special visual rendering, e.
 *
 * g., bold or italicized, of a text word or phrase. When an entire element should          
 *          be rendered in a special way, a style sheet function should be used instead of          
 *          the <rend> element..
 */
struct Rend : public BaseMeiElement{
    Rend();
    virtual ~Rend() {};

    string getAltrendValue() throw (AttributeNotFoundException);

    MeiAttribute* getAltrend() throw (AttributeNotFoundException);
    void setAltrend(string _altrend);
    bool hasAltrend();

    string getRendValue() throw (AttributeNotFoundException);

    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(string _rend);
    bool hasRend();

    string getRotationValue() throw (AttributeNotFoundException);

    MeiAttribute* getRotation() throw (AttributeNotFoundException);
    void setRotation(string _rotation);
    bool hasRotation();

    string getValignValue() throw (AttributeNotFoundException);

    MeiAttribute* getValign() throw (AttributeNotFoundException);
    void setValign(string _valign);
    bool hasValign();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    HorizontalalignMixIn    m_Horizontalalign;
    LangMixIn    m_Lang;
    TypographyMixIn    m_Typography;
    private:
        //REGISTER_DECLARATION(Rend);
};

/** \brief  repository ― Institution or agency which holds a bibliographic item.
 *
 * Sub-units of the institution may be marked with <repository> sub-elements. The          
 *          name of the list from which a controlled value is taken may be recorded using          
 *          the authority attribute. This element is modelled on an element in Encoded          
 *          Archival Description (EAD)..
 */
struct Repository : public BaseMeiElement{
    Repository();
    virtual ~Repository() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    NameMixIn    m_Name;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Repository);
};

/** \brief  rest ― A non-sounding event found in the source being transcribed (Read, p.
 *
 * 96-102). Do not confuse this element with the space element, which is used as an          
 *          aid for visual alignment..
 */
struct Rest : public BaseMeiElement{
    Rest();
    virtual ~Rest() {};

    string getSpacesValue() throw (AttributeNotFoundException);

    MeiAttribute* getSpaces() throw (AttributeNotFoundException);
    void setSpaces(string _spaces);
    bool hasSpaces();

    AltsymMixIn    m_Altsym;
    AugmentdotsMixIn    m_Augmentdots;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    DurationMusicalMixIn    m_DurationMusical;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationRatioMixIn    m_DurationRatio;
    FermatapresentMixIn    m_Fermatapresent;
    InstrumentidentMixIn    m_Instrumentident;
    LinelocMixIn    m_Lineloc;
    RelativesizeMixIn    m_Relativesize;
    TupletpresentMixIn    m_Tupletpresent;
    XyMixIn    m_Xy;
    VisualoffsetMixIn    m_Visualoffset;
    EventMixIn    m_Event;
    BeamedMixIn    m_Beamed;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    MensurLogMixIn    m_MensurLog;
    MensurationLogMixIn    m_MensurationLog;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Rest);
};

/** \brief  role ― Name of a dramatic role, as given in a cast list.
 */
struct Role : public BaseMeiElement{
    Role();
    virtual ~Role() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Role);
};

/** \brief  role description ― Describes a character's role in a drama.
 */
struct RoleDesc : public BaseMeiElement{
    RoleDesc();
    virtual ~RoleDesc() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(RoleDesc);
};

/** \brief  system break ― An empty formatting element that forces notation to begin on a
 *          new line.
 *
 * Do not confuse this element with the <lb> element, which performs a similar          
 *          function in prose..
 */
struct Sb : public BaseMeiElement{
    Sb();
    virtual ~Sb() {};

    string getRendValue() throw (AttributeNotFoundException);

    MeiAttribute* getRend() throw (AttributeNotFoundException);
    void setRend(string _rend);
    bool hasRend();

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    CritMixIn    m_Crit;
    SourceMixIn    m_Source;
    RdgAnlMixIn    m_RdgAnl;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Sb);
};

/** \brief  score ― Full score view of the mdiv.
 *
 * Since the measure element is optional, a score may consist entirely of          
 *          pagebreaks, each of which points to a page image. Div elements are allowed          
 *          preceding and following sections of music data in order to accommodate blocks of          
 *          explanatory text..
 */
struct Score : public BaseMeiElement{
    Score();
    virtual ~Score() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    TypedMixIn    m_Typed;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    private:
        //REGISTER_DECLARATION(Score);
};

/** \brief  score definition ― Container for score meta-information.
 */
struct ScoreDef : public BaseMeiElement{
    ScoreDef();
    virtual ~ScoreDef() {};

    string getTunePnameValue() throw (AttributeNotFoundException);

    MeiAttribute* getTunePname() throw (AttributeNotFoundException);
    void setTunePname(string _tunepname);
    bool hasTunePname();

    string getTuneHzValue() throw (AttributeNotFoundException);

    MeiAttribute* getTuneHz() throw (AttributeNotFoundException);
    void setTuneHz(string _tunehz);
    bool hasTuneHz();

    string getTuneTemperValue() throw (AttributeNotFoundException);

    MeiAttribute* getTuneTemper() throw (AttributeNotFoundException);
    void setTuneTemper(string _tunetemper);
    bool hasTuneTemper();

    string getEndingRendValue() throw (AttributeNotFoundException);

    MeiAttribute* getEndingRend() throw (AttributeNotFoundException);
    void setEndingRend(string _endingrend);
    bool hasEndingRend();

    string getMnumVisibleValue() throw (AttributeNotFoundException);

    MeiAttribute* getMnumVisible() throw (AttributeNotFoundException);
    void setMnumVisible(string _mnumvisible);
    bool hasMnumVisible();

    string getMusicNameValue() throw (AttributeNotFoundException);

    MeiAttribute* getMusicName() throw (AttributeNotFoundException);
    void setMusicName(string _musicname);
    bool hasMusicName();

    string getMusicSizeValue() throw (AttributeNotFoundException);

    MeiAttribute* getMusicSize() throw (AttributeNotFoundException);
    void setMusicSize(string _musicsize);
    bool hasMusicSize();

    string getOptimizeValue() throw (AttributeNotFoundException);

    MeiAttribute* getOptimize() throw (AttributeNotFoundException);
    void setOptimize(string _optimize);
    bool hasOptimize();

    string getPageHeightValue() throw (AttributeNotFoundException);

    MeiAttribute* getPageHeight() throw (AttributeNotFoundException);
    void setPageHeight(string _pageheight);
    bool hasPageHeight();

    string getPageWidthValue() throw (AttributeNotFoundException);

    MeiAttribute* getPageWidth() throw (AttributeNotFoundException);
    void setPageWidth(string _pagewidth);
    bool hasPageWidth();

    string getPageUnitsValue() throw (AttributeNotFoundException);

    MeiAttribute* getPageUnits() throw (AttributeNotFoundException);
    void setPageUnits(string _pageunits);
    bool hasPageUnits();

    string getPageTopmarValue() throw (AttributeNotFoundException);

    MeiAttribute* getPageTopmar() throw (AttributeNotFoundException);
    void setPageTopmar(string _pagetopmar);
    bool hasPageTopmar();

    string getPageBotmarValue() throw (AttributeNotFoundException);

    MeiAttribute* getPageBotmar() throw (AttributeNotFoundException);
    void setPageBotmar(string _pagebotmar);
    bool hasPageBotmar();

    string getPageLeftmarValue() throw (AttributeNotFoundException);

    MeiAttribute* getPageLeftmar() throw (AttributeNotFoundException);
    void setPageLeftmar(string _pageleftmar);
    bool hasPageLeftmar();

    string getPageRightmarValue() throw (AttributeNotFoundException);

    MeiAttribute* getPageRightmar() throw (AttributeNotFoundException);
    void setPageRightmar(string _pagerightmar);
    bool hasPageRightmar();

    string getPagePanelsValue() throw (AttributeNotFoundException);

    MeiAttribute* getPagePanels() throw (AttributeNotFoundException);
    void setPagePanels(string _pagepanels);
    bool hasPagePanels();

    string getPageScaleValue() throw (AttributeNotFoundException);

    MeiAttribute* getPageScale() throw (AttributeNotFoundException);
    void setPageScale(string _pagescale);
    bool hasPageScale();

    string getSpacingPackexpValue() throw (AttributeNotFoundException);

    MeiAttribute* getSpacingPackexp() throw (AttributeNotFoundException);
    void setSpacingPackexp(string _spacingpackexp);
    bool hasSpacingPackexp();

    string getSpacingPackfactValue() throw (AttributeNotFoundException);

    MeiAttribute* getSpacingPackfact() throw (AttributeNotFoundException);
    void setSpacingPackfact(string _spacingpackfact);
    bool hasSpacingPackfact();

    string getSpacingStaffValue() throw (AttributeNotFoundException);

    MeiAttribute* getSpacingStaff() throw (AttributeNotFoundException);
    void setSpacingStaff(string _spacingstaff);
    bool hasSpacingStaff();

    string getSpacingSystemValue() throw (AttributeNotFoundException);

    MeiAttribute* getSpacingSystem() throw (AttributeNotFoundException);
    void setSpacingSystem(string _spacingsystem);
    bool hasSpacingSystem();

    string getSystemLeftmarValue() throw (AttributeNotFoundException);

    MeiAttribute* getSystemLeftmar() throw (AttributeNotFoundException);
    void setSystemLeftmar(string _systemleftmar);
    bool hasSystemLeftmar();

    string getSystemRightmarValue() throw (AttributeNotFoundException);

    MeiAttribute* getSystemRightmar() throw (AttributeNotFoundException);
    void setSystemRightmar(string _systemrightmar);
    bool hasSystemRightmar();

    string getSystemTopmarValue() throw (AttributeNotFoundException);

    MeiAttribute* getSystemTopmar() throw (AttributeNotFoundException);
    void setSystemTopmar(string _systemtopmar);
    bool hasSystemTopmar();

    string getGridShowValue() throw (AttributeNotFoundException);

    MeiAttribute* getGridShow() throw (AttributeNotFoundException);
    void setGridShow(string _gridshow);
    bool hasGridShow();

    BarplacementMixIn    m_Barplacement;
    BeamingVisMixIn    m_BeamingVis;
    CleffingLogMixIn    m_CleffingLog;
    CleffingVisMixIn    m_CleffingVis;
    CommonMixIn    m_Common;
    DistancesMixIn    m_Distances;
    DurationDefaultMixIn    m_DurationDefault;
    KeysigsLogMixIn    m_KeysigsLog;
    KeysigsVisMixIn    m_KeysigsVis;
    LyricstyleMixIn    m_Lyricstyle;
    MetersLogMixIn    m_MetersLog;
    MetersVisMixIn    m_MetersVis;
    MmtempoMixIn    m_Mmtempo;
    MultinummeasuresMixIn    m_Multinummeasures;
    OctavedefaultMixIn    m_Octavedefault;
    OnelinestaffMixIn    m_Onelinestaff;
    TextstyleMixIn    m_Textstyle;
    TranspositionMixIn    m_Transposition;
    BeamingLogMixIn    m_BeamingLog;
    SlurrendMixIn    m_Slurrend;
    TierendMixIn    m_Tierend;
    PianopedalsMixIn    m_Pianopedals;
    RehearsalMixIn    m_Rehearsal;
    MensurationLogMixIn    m_MensurationLog;
    MensurationVisMixIn    m_MensurationVis;
    ChannelizedMixIn    m_Channelized;
    MiditempoMixIn    m_Miditempo;
    TimebaseMixIn    m_Timebase;
    private:
        //REGISTER_DECLARATION(ScoreDef);
};

/** \brief  section ― Container for actual music data.
 *
 * The linking attributes are available here so that this element can point to          
 *          external media objects or to related internal elements, such as annotations..
 */
struct Section : public BaseMeiElement{
    Section();
    virtual ~Section() {};

    string getRestartValue() throw (AttributeNotFoundException);

    MeiAttribute* getRestart() throw (AttributeNotFoundException);
    void setRestart(string _restart);
    bool hasRestart();

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    TypedMixIn    m_Typed;
    LinkInternalMixIn    m_LinkInternal;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Section);
};

/** \brief  space ― A placeholder used to fill an incomplete measure, layer, etc.
 *
 * most often so that the combined duration of the events equals the number of          
 *          beats in the measure..
 */
struct Space : public BaseMeiElement{
    Space();
    virtual ~Space() {};

    string getCompressableValue() throw (AttributeNotFoundException);

    MeiAttribute* getCompressable() throw (AttributeNotFoundException);
    void setCompressable(string _compressable);
    bool hasCompressable();

    AugmentdotsMixIn    m_Augmentdots;
    CommonMixIn    m_Common;
    DurationMusicalMixIn    m_DurationMusical;
    DurationPerformedMixIn    m_DurationPerformed;
    FermatapresentMixIn    m_Fermatapresent;
    TupletpresentMixIn    m_Tupletpresent;
    EventMixIn    m_Event;
    BeamedMixIn    m_Beamed;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Space);
};

/** \brief  stacked text ― An inline table with a single column.
 */
struct Stack : public BaseMeiElement{
    Stack();
    virtual ~Stack() {};

    string getDelimValue() throw (AttributeNotFoundException);

    MeiAttribute* getDelim() throw (AttributeNotFoundException);
    void setDelim(string _delim);
    bool hasDelim();

    string getAlignValue() throw (AttributeNotFoundException);

    MeiAttribute* getAlign() throw (AttributeNotFoundException);
    void setAlign(string _align);
    bool hasAlign();

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Stack);
};

/** \brief  staff ― A group of equidistant horizontal lines on which notes are placed in
 *          order to represent pitch.
 *
 * In MEI, however, <staff> is a grouping element for individual 'strands' of          
 *          notes, rests, etc. that may or may not be rendered on staff lines; that is,          
 *          diastematic and non-diastematic signs. The n attribute functions as a connection          
 *          back to the appropriate staffDef element where logical and visual information          
 *          about the staff is recorded. If the n attribute is omitted, encoding order is          
 *          presumed to match the staff order. Of course, if data is supplied for only a          
 *          subset of staves found in a printed source, the n attribute must be supplied..
 */
struct Staff : public BaseMeiElement{
    Staff();
    virtual ~Staff() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    MeterconformanceMixIn    m_Meterconformance;
    VisibilityMixIn    m_Visibility;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Staff);
};

/** \brief  staff definition ― Container for staff meta-information.
 */
struct StaffDef : public BaseMeiElement{
    StaffDef();
    virtual ~StaffDef() {};

    string getGridShowValue() throw (AttributeNotFoundException);

    MeiAttribute* getGridShow() throw (AttributeNotFoundException);
    void setGridShow(string _gridshow);
    bool hasGridShow();

    string getLayerschemeValue() throw (AttributeNotFoundException);

    MeiAttribute* getLayerscheme() throw (AttributeNotFoundException);
    void setLayerscheme(string _layerscheme);
    bool hasLayerscheme();

    string getLinesValue() throw (AttributeNotFoundException);

    MeiAttribute* getLines() throw (AttributeNotFoundException);
    void setLines(string _lines);
    bool hasLines();

    string getLinesColorValue() throw (AttributeNotFoundException);

    MeiAttribute* getLinesColor() throw (AttributeNotFoundException);
    void setLinesColor(string _linescolor);
    bool hasLinesColor();

    string getLinesVisibleValue() throw (AttributeNotFoundException);

    MeiAttribute* getLinesVisible() throw (AttributeNotFoundException);
    void setLinesVisible(string _linesvisible);
    bool hasLinesVisible();

    string getSpacingValue() throw (AttributeNotFoundException);

    MeiAttribute* getSpacing() throw (AttributeNotFoundException);
    void setSpacing(string _spacing);
    bool hasSpacing();

    string getProportNumValue() throw (AttributeNotFoundException);

    MeiAttribute* getProportNum() throw (AttributeNotFoundException);
    void setProportNum(string _proportnum);
    bool hasProportNum();

    string getProportNumbaseValue() throw (AttributeNotFoundException);

    MeiAttribute* getProportNumbase() throw (AttributeNotFoundException);
    void setProportNumbase(string _proportnumbase);
    bool hasProportNumbase();

    string getTabStringsValue() throw (AttributeNotFoundException);

    MeiAttribute* getTabStrings() throw (AttributeNotFoundException);
    void setTabStrings(string _tabstrings);
    bool hasTabStrings();

    BeamingVisMixIn    m_BeamingVis;
    CleffingLogMixIn    m_CleffingLog;
    CleffingVisMixIn    m_CleffingVis;
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    DistancesMixIn    m_Distances;
    DurationDefaultMixIn    m_DurationDefault;
    InstrumentidentMixIn    m_Instrumentident;
    KeysigsLogMixIn    m_KeysigsLog;
    KeysigsVisMixIn    m_KeysigsVis;
    LabelsAddlMixIn    m_LabelsAddl;
    LyricstyleMixIn    m_Lyricstyle;
    MetersLogMixIn    m_MetersLog;
    MetersVisMixIn    m_MetersVis;
    MultinummeasuresMixIn    m_Multinummeasures;
    OctavedefaultMixIn    m_Octavedefault;
    OnelinestaffMixIn    m_Onelinestaff;
    ScalableMixIn    m_Scalable;
    TextstyleMixIn    m_Textstyle;
    TranspositionMixIn    m_Transposition;
    VisibilityMixIn    m_Visibility;
    BeamingLogMixIn    m_BeamingLog;
    SlurrendMixIn    m_Slurrend;
    TierendMixIn    m_Tierend;
    PianopedalsMixIn    m_Pianopedals;
    RehearsalMixIn    m_Rehearsal;
    MensurationLogMixIn    m_MensurationLog;
    MensurationVisMixIn    m_MensurationVis;
    TimebaseMixIn    m_Timebase;
    private:
        //REGISTER_DECLARATION(StaffDef);
};

/** \brief  staff group ― A group of bracketed or braced staves.
 *
 * Bracketed staff groups may contain other bracketed or braced staff groups or          
 *          single staves. See Read, p. 35-38, examples p. 434, 438. System is the more          
 *          proper name for this concept (Read, p. 37-38)..
 */
struct StaffGrp : public BaseMeiElement{
    StaffGrp();
    virtual ~StaffGrp() {};

    string getBarthruValue() throw (AttributeNotFoundException);

    MeiAttribute* getBarthru() throw (AttributeNotFoundException);
    void setBarthru(string _barthru);
    bool hasBarthru();

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    StaffgroupingsymMixIn    m_Staffgroupingsym;
    InstrumentidentMixIn    m_Instrumentident;
    LabelsAddlMixIn    m_LabelsAddl;
    VisibilityMixIn    m_Visibility;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(StaffGrp);
};

/** \brief  syllable ― Individual lyric syllable.
 *
 * Do not confuse this element with the syllable element. The align attribute          
 *          indicates the horizontal alignment of the syllable with respect to the note to          
 *          which it is attached..
 */
struct Syl : public BaseMeiElement{
    Syl();
    virtual ~Syl() {};

    string getConValue() throw (AttributeNotFoundException);

    MeiAttribute* getCon() throw (AttributeNotFoundException);
    void setCon(string _con);
    bool hasCon();

    string getWordposValue() throw (AttributeNotFoundException);

    MeiAttribute* getWordpos() throw (AttributeNotFoundException);
    void setWordpos(string _wordpos);
    bool hasWordpos();

    CommonMixIn    m_Common;
    HorizontalalignMixIn    m_Horizontalalign;
    TypographyMixIn    m_Typography;
    XyMixIn    m_Xy;
    VisualoffsetMixIn    m_Visualoffset;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Syl);
};

/** \brief  tempo ― Text and symbols descriptive of tempo, mood, or style, e.
 *
 * g., "allarg.", "a tempo", "cantabile", "Moderato", "[qtrnote]=60", "Moderato          
 *          [qtrnote] =60"). Both instantaneous and continuous tempo markings may be encoded          
 *          using this element. Please note that the dur attribute here is expressed in          
 *          musical time, i.e., beats or other time stamp. Therefore, it is not a true          
 *          duration, but rather a time stamp for the end point of the directive..
 */
struct Tempo : public BaseMeiElement{
    Tempo();
    virtual ~Tempo() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    MmtempoMixIn    m_Mmtempo;
    PlacementMixIn    m_Placement;
    StartidMixIn    m_Startid;
    Visualoffset2HoMixIn    m_Visualoffset2Ho;
    Visualoffset2ToMixIn    m_Visualoffset2To;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    MiditempoMixIn    m_Miditempo;
    private:
        //REGISTER_DECLARATION(Tempo);
};

/** \brief  title ― Title of a bibliographic entity.
 *
 * The type attribute may be used to classify the title according to some          
 *          convenient typology. Sample values include: main (main title), subordinate          
 *          (subtitle, title of part), abbreviated (abbreviated form of title), alternative          
 *          (alternate title by which the work is also known), translated (translated form          
 *          of title), uniform (collective title). The type attribute is provided for          
 *          convenience in analysing titles and processing them according to their type;          
 *          where such specialized processing is not necessary, there is no need for such          
 *          analysis, and the entire title, including subtitles and any parallel titles, may          
 *          be enclosed within a single <title> element. Title parts may be encoded in          
 *          <title> sub-elements. The name of the list from which a controlled value is          
 *          taken may be recorded using the authority attribute. This element is modelled on          
 *          an element in the Text Encoding Initiative (TEI)..
 */
struct Title : public BaseMeiElement{
    Title();
    virtual ~Title() {};

    string getLevelValue() throw (AttributeNotFoundException);

    MeiAttribute* getLevel() throw (AttributeNotFoundException);
    void setLevel(string _level);
    bool hasLevel();

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    NameMixIn    m_Name;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Title);
};

/** \brief  title page ― Contains a transcription of the title page of a text.
 *
 * It may be used within the physDesc element when no other transcription is          
 *          provided. This element is modelled on an element in Encoded Archival Description          
 *          (EAD)..
 */
struct TitlePage : public BaseMeiElement{
    TitlePage();
    virtual ~TitlePage() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(TitlePage);
};

#endif // SHARED_H_