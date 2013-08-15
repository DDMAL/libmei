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

#ifndef SHARED_H_
#define SHARED_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include <string>


namespace mei {
/** \brief (accidental) – Records a temporary alteration to the pitch of a note.
 */
class MEI_EXPORT Accid : public MeiElement {
    public:
        Accid();
        Accid(const Accid& other);
        virtual ~Accid();

/* include <accid> */


    private:
        REGISTER_DECLARATION(Accid);
};

/** \brief contains the name of an actor appearing within a cast list.
 */
class MEI_EXPORT Actor : public MeiElement {
    public:
        Actor();
        Actor(const Actor& other);
        virtual ~Actor();

/* include <actor> */


    private:
        REGISTER_DECLARATION(Actor);
};

/** \brief contains one line of a postal address.
 */
class MEI_EXPORT AddrLine : public MeiElement {
    public:
        AddrLine();
        AddrLine(const AddrLine& other);
        virtual ~AddrLine();

/* include <addrLine> */


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


    private:
        REGISTER_DECLARATION(Address);
};

/** \brief (annotation) – Provides a short statement explaining the text or indicating
 *  the basis for an assertion.
 */
class MEI_EXPORT Annot : public MeiElement {
    public:
        Annot();
        Annot(const Annot& other);
        virtual ~Annot();

/* include <annot> */


    private:
        REGISTER_DECLARATION(Annot);
};

/** \brief (articulation) – An indication of how to play a note or chord.
 */
class MEI_EXPORT Artic : public MeiElement {
    public:
        Artic();
        Artic(const Artic& other);
        virtual ~Artic();

/* include <artic> */


    private:
        REGISTER_DECLARATION(Artic);
};

/** \brief – Vertical line drawn through one or more staves that divides musical notation
 *  into metrical units.
 */
class MEI_EXPORT BarLine : public MeiElement {
    public:
        BarLine();
        BarLine(const BarLine& other);
        virtual ~BarLine();

/* include <barLine> */


    private:
        REGISTER_DECLARATION(BarLine);
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


    private:
        REGISTER_DECLARATION(Bibl);
};

/** \brief contains the whole body of a single unitary text, excluding any front or back
 *  matter.
 */
class MEI_EXPORT Body : public MeiElement {
    public:
        Body();
        Body(const Body& other);
        virtual ~Body();

/* include <body> */


    private:
        REGISTER_DECLARATION(Body);
};

/** \brief contains the text of a caption or other text displayed as part of a film script
 *  or screenplay.
 */
class MEI_EXPORT Caption : public MeiElement {
    public:
        Caption();
        Caption(const Caption& other);
        virtual ~Caption();

/* include <caption> */


    private:
        REGISTER_DECLARATION(Caption);
};

/** \brief (cast group) – Groups one or more individual castItem elements within a cast
 *  list.
 */
class MEI_EXPORT CastGrp : public MeiElement {
    public:
        CastGrp();
        CastGrp(const CastGrp& other);
        virtual ~CastGrp();

/* include <castGrp> */


    private:
        REGISTER_DECLARATION(CastGrp);
};

/** \brief contains a single entry within a cast list, describing either a single role or a
 *  list of non-speaking roles.
 */
class MEI_EXPORT CastItem : public MeiElement {
    public:
        CastItem();
        CastItem(const CastItem& other);
        virtual ~CastItem();

/* include <castItem> */


    private:
        REGISTER_DECLARATION(CastItem);
};

/** \brief contains a single cast list or dramatis personae.
 */
class MEI_EXPORT CastList : public MeiElement {
    public:
        CastList();
        CastList(const CastList& other);
        virtual ~CastList();

/* include <castList> */


    private:
        REGISTER_DECLARATION(CastList);
};

/** \brief – A simultaneous sounding of two or more notes in the same layer *with the
 *  same duration*.
 */
class MEI_EXPORT Chord : public MeiElement {
    public:
        Chord();
        Chord(const Chord& other);
        virtual ~Chord();

/* include <chord> */


    private:
        REGISTER_DECLARATION(Chord);
};

/** \brief – Indication of the exact location of a particular note on the staff and,
 *  therefore, the other notes as well.
 */
class MEI_EXPORT Clef : public MeiElement {
    public:
        Clef();
        Clef(const Clef& other);
        virtual ~Clef();

/* include <clef> */


    private:
        REGISTER_DECLARATION(Clef);
};

/** \brief (clef group) – A set of simultaneously-occurring clefs.
 */
class MEI_EXPORT ClefGrp : public MeiElement {
    public:
        ClefGrp();
        ClefGrp(const ClefGrp& other);
        virtual ~ClefGrp();

/* include <clefGrp> */


    private:
        REGISTER_DECLARATION(ClefGrp);
};

/** \brief – Symbol placed at the end of a line of music to indicate the first note of
 *  the next line.
 * 
 *  Sometimes called a "direct".
 */
class MEI_EXPORT Custos : public MeiElement {
    public:
        Custos();
        Custos(const Custos& other);
        virtual ~Custos();

/* include <custos> */


    private:
        REGISTER_DECLARATION(Custos);
};

/** \brief contains a date in any format.
 */
class MEI_EXPORT Date : public MeiElement {
    public:
        Date();
        Date(const Date& other);
        virtual ~Date();

/* include <date> */


    private:
        REGISTER_DECLARATION(Date);
};

/** \brief (directive) – A text expression that is on the score (typically above, below,
 *  or between staves, but not on the staff) not encoded elsewhere in more specific
 *  elements, such as <tempo> or <dynam>.
 */
class MEI_EXPORT Dir : public MeiElement {
    public:
        Dir();
        Dir(const Dir& other);
        virtual ~Dir();

/* include <dir> */


    private:
        REGISTER_DECLARATION(Dir);
};

/** \brief – Dot of augmentation or division.
 */
class MEI_EXPORT Dot : public MeiElement {
    public:
        Dot();
        Dot(const Dot& other);
        virtual ~Dot();

/* include <dot> */


    private:
        REGISTER_DECLARATION(Dot);
};

/** \brief (dynamic) – Indication of the volume of a note, phrase, or section of music.
 */
class MEI_EXPORT Dynam : public MeiElement {
    public:
        Dynam();
        Dynam(const Dynam& other);
        virtual ~Dynam();

/* include <dynam> */


    private:
        REGISTER_DECLARATION(Dynam);
};

/** \brief describes the particularities of one edition of a text.
 */
class MEI_EXPORT Edition : public MeiElement {
    public:
        Edition();
        Edition(const Edition& other);
        virtual ~Edition();

/* include <edition> */


    private:
        REGISTER_DECLARATION(Edition);
};

/** \brief – Alternative ending for a repeated passage of music; i.e., prima volta,
 *  seconda volta, etc.
 */
class MEI_EXPORT Ending : public MeiElement {
    public:
        Ending();
        Ending(const Ending& other);
        virtual ~Ending();

/* include <ending> */


    private:
        REGISTER_DECLARATION(Ending);
};

/** \brief – Indicates how a section may be programmatically expanded into its 'through-
 *  composed' form.
 */
class MEI_EXPORT Expansion : public MeiElement {
    public:
        Expansion();
        Expansion(const Expansion& other);
        virtual ~Expansion();

/* include <expansion> */


    private:
        REGISTER_DECLARATION(Expansion);
};

/** \brief contains a running head (e.g.
 * 
 *  a header, footer), catchword, or similar material appearing on the current page.
 */
class MEI_EXPORT Fw : public MeiElement {
    public:
        Fw();
        Fw(const Fw& other);
        virtual ~Fw();

/* include <fw> */


    private:
        REGISTER_DECLARATION(Fw);
};

/** \brief contains the body of a composite text, grouping together a sequence of distinct
 *  texts (or groups of such texts) which are regarded as a unit for some purpose,
 *  for example the collected works of an author, a sequence of prose essays, etc.
 */
class MEI_EXPORT Group : public MeiElement {
    public:
        Group();
        Group(const Group& other);
        virtual ~Group();

/* include <group> */


    private:
        REGISTER_DECLARATION(Group);
};

/** \brief (group symbol) – A brace or bracket used to group two or more staves of a
 *  score or part.
 */
class MEI_EXPORT GrpSym : public MeiElement {
    public:
        GrpSym();
        GrpSym(const GrpSym& other);
        virtual ~GrpSym();

/* include <grpSym> */


    private:
        REGISTER_DECLARATION(GrpSym);
};

/** \brief – An alpha-numeric string that establishes the identity of the described
 *  material.
 */
class MEI_EXPORT Identifier : public MeiElement {
    public:
        Identifier();
        Identifier(const Identifier& other);
        virtual ~Identifier();

/* include <identifier> */


    private:
        REGISTER_DECLARATION(Identifier);
};

/** \brief (incipit) – The opening music and/or words of a composition.
 */
class MEI_EXPORT Incip : public MeiElement {
    public:
        Incip();
        Incip(const Incip& other);
        virtual ~Incip();

/* include <incip> */


    private:
        REGISTER_DECLARATION(Incip);
};

/** \brief (key accidental) – Accidental in a key signature.
 */
class MEI_EXPORT KeyAccid : public MeiElement {
    public:
        KeyAccid();
        KeyAccid(const KeyAccid& other);
        virtual ~KeyAccid();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <keyAccid> */


    private:
        REGISTER_DECLARATION(KeyAccid);
};

/** \brief (key signature) – Written key signature.
 */
class MEI_EXPORT KeySig : public MeiElement {
    public:
        KeySig();
        KeySig(const KeySig& other);
        virtual ~KeySig();

/* include <keySig> */


    private:
        REGISTER_DECLARATION(KeySig);
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


    private:
        REGISTER_DECLARATION(Label);
};

/** \brief – An independent stream of events on a staff.
 */
class MEI_EXPORT Layer : public MeiElement {
    public:
        Layer();
        Layer(const Layer& other);
        virtual ~Layer();

/* include <layer> */


    private:
        REGISTER_DECLARATION(Layer);
};

/** \brief (layer definition) – Container for layer meta-information.
 */
class MEI_EXPORT LayerDef : public MeiElement {
    public:
        LayerDef();
        LayerDef(const LayerDef& other);
        virtual ~LayerDef();

/* include <layerDef> */


    private:
        REGISTER_DECLARATION(LayerDef);
};

/** \brief marks the start of a new (typographic) line in some edition or version of a
 *  text.
 */
class MEI_EXPORT Lb : public MeiElement {
    public:
        Lb();
        Lb(const Lb& other);
        virtual ~Lb();
        /** \brief records the function of an accidental.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <lb> */


    private:
        REGISTER_DECLARATION(Lb);
};

/** \brief (musical division) – contains a subdivision of the body of a musical text.
 */
class MEI_EXPORT Mdiv : public MeiElement {
    public:
        Mdiv();
        Mdiv(const Mdiv& other);
        virtual ~Mdiv();

/* include <mdiv> */


    private:
        REGISTER_DECLARATION(Mdiv);
};

/** \brief – Contains a single MEI-conformant document, consisting of an MEI header and a
 *  musical text, either in isolation or as part of an meiCorpus element.
 */
class MEI_EXPORT Mei : public MeiElement {
    public:
        Mei();
        Mei(const Mei& other);
        virtual ~Mei();

/* include <mei> */


    private:
        REGISTER_DECLARATION(Mei);
};

/** \brief – Contains a single musical text of any kind, whether unitary or composite,
 *  for example, an etude, opera, song cycle, symphony, or anthology of piano solos.
 */
class MEI_EXPORT Music : public MeiElement {
    public:
        Music();
        Music(const Music& other);
        virtual ~Music();

/* include <music> */


    private:
        REGISTER_DECLARATION(Music);
};

/** \brief contains a proper noun or noun phrase.
 */
class MEI_EXPORT Name : public MeiElement {
    public:
        Name();
        Name(const Name& other);
        virtual ~Name();

/* include <name> */


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

/* include <note> */


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

/* include <num> */


    private:
        REGISTER_DECLARATION(Num);
};

/** \brief marks paragraphs in prose.
 */
class MEI_EXPORT P : public MeiElement {
    public:
        P();
        P(const P& other);
        virtual ~P();

/* include <p> */


    private:
        REGISTER_DECLARATION(P);
};

/** \brief (padding) – An indication of extra visual space between notational elements.
 */
class MEI_EXPORT Pad : public MeiElement {
    public:
        Pad();
        Pad(const Pad& other);
        virtual ~Pad();

/* include <pad> */


    private:
        REGISTER_DECLARATION(Pad);
};

/** \brief – An alternative visual rendition of the score from a particular performer's
 *  (or group of performers') point of view.
 */
class MEI_EXPORT Part : public MeiElement {
    public:
        Part();
        Part(const Part& other);
        virtual ~Part();

/* include <part> */


    private:
        REGISTER_DECLARATION(Part);
};

/** \brief – Provides a container for performers' parts.
 */
class MEI_EXPORT Parts : public MeiElement {
    public:
        Parts();
        Parts(const Parts& other);
        virtual ~Parts();

/* include <parts> */


    private:
        REGISTER_DECLARATION(Parts);
};

/** \brief marks the start of a new page in a paginated document.
 */
class MEI_EXPORT Pb : public MeiElement {
    public:
        Pb();
        Pb(const Pb& other);
        virtual ~Pb();

/* include <pb> */


    private:
        REGISTER_DECLARATION(Pb);
};

/** \brief (page description) – Contains a brief prose description of the appearance or
 *  description of the content of a physical page.
 */
class MEI_EXPORT PgDesc : public MeiElement {
    public:
        PgDesc();
        PgDesc(const PgDesc& other);
        virtual ~PgDesc();

/* include <pgDesc> */


    private:
        REGISTER_DECLARATION(PgDesc);
};

/** \brief (page footer) – A running footer on the first page.
 */
class MEI_EXPORT PgFoot : public MeiElement {
    public:
        PgFoot();
        PgFoot(const PgFoot& other);
        virtual ~PgFoot();

/* include <pgFoot> */


    private:
        REGISTER_DECLARATION(PgFoot);
};

/** \brief (page footer 2) – A running footer on the pages following the first.
 */
class MEI_EXPORT PgFoot2 : public MeiElement {
    public:
        PgFoot2();
        PgFoot2(const PgFoot2& other);
        virtual ~PgFoot2();

/* include <pgFoot2> */


    private:
        REGISTER_DECLARATION(PgFoot2);
};

/** \brief (page header) – A running header on the first page.
 */
class MEI_EXPORT PgHead : public MeiElement {
    public:
        PgHead();
        PgHead(const PgHead& other);
        virtual ~PgHead();

/* include <pgHead> */


    private:
        REGISTER_DECLARATION(PgHead);
};

/** \brief (page header 2) – A running header on the pages following the first.
 */
class MEI_EXPORT PgHead2 : public MeiElement {
    public:
        PgHead2();
        PgHead2(const PgHead2& other);
        virtual ~PgHead2();

/* include <pgHead2> */


    private:
        REGISTER_DECLARATION(PgHead2);
};

/** \brief – Indication of 1) a "unified melodic idea" or 2) performance technique.
 */
class MEI_EXPORT Phrase : public MeiElement {
    public:
        Phrase();
        Phrase(const Phrase& other);
        virtual ~Phrase();

/* include <phrase> */


    private:
        REGISTER_DECLARATION(Phrase);
};

/** \brief (render) – A formatting element indicating special visual rendering, e.g.,
 *  bold or italicized, of a text word or phrase.
 */
class MEI_EXPORT Rend : public MeiElement {
    public:
        Rend();
        Rend(const Rend& other);
        virtual ~Rend();
        /** \brief used to extend the values of the rend attribute.
         */
        MeiAttribute* getAltrend();
        void setAltrend(std::string _altrend);
        bool hasAltrend();
        void removeAltrend();
        /** \brief indicates how the element in question was rendered or presented in the source
         *  text.
         */
        MeiAttribute* getRend();
        void setRend(std::string _rend);
        bool hasRend();
        void removeRend();
        /** \brief A positive value for rotation rotates the text in a counter-clockwise fashion,
         *  while negative values produce clockwise rotation.
         */
        MeiAttribute* getRotation();
        void setRotation(std::string _rotation);
        bool hasRotation();
        void removeRotation();
        /** \brief specifies the vertical position of the element content relative to the
         *  surrounding text.
         */
        MeiAttribute* getValign();
        void setValign(std::string _valign);
        bool hasValign();
        void removeValign();

/* include <rend> */


    private:
        REGISTER_DECLARATION(Rend);
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


    private:
        REGISTER_DECLARATION(Repository);
};

/** \brief – A non-sounding event found in the source being transcribed.
 */
class MEI_EXPORT Rest : public MeiElement {
    public:
        Rest();
        Rest(const Rest& other);
        virtual ~Rest();

/* include <rest> */


    private:
        REGISTER_DECLARATION(Rest);
};

/** \brief contains the name of a dramatic role, as given in a cast list.
 */
class MEI_EXPORT Role : public MeiElement {
    public:
        Role();
        Role(const Role& other);
        virtual ~Role();

/* include <role> */


    private:
        REGISTER_DECLARATION(Role);
};

/** \brief describes a character's role in a drama.
 */
class MEI_EXPORT RoleDesc : public MeiElement {
    public:
        RoleDesc();
        RoleDesc(const RoleDesc& other);
        virtual ~RoleDesc();

/* include <roleDesc> */


    private:
        REGISTER_DECLARATION(RoleDesc);
};

/** \brief (system break) – An empty formatting element that forces musical notation to
 *  begin on a new line.
 */
class MEI_EXPORT Sb : public MeiElement {
    public:
        Sb();
        Sb(const Sb& other);
        virtual ~Sb();

/* include <sb> */


    private:
        REGISTER_DECLARATION(Sb);
};

/** \brief – Full score view of the musical content.
 */
class MEI_EXPORT Score : public MeiElement {
    public:
        Score();
        Score(const Score& other);
        virtual ~Score();

/* include <score> */


    private:
        REGISTER_DECLARATION(Score);
};

/** \brief (score definition) – Container for score meta-information.
 */
class MEI_EXPORT ScoreDef : public MeiElement {
    public:
        ScoreDef();
        ScoreDef(const ScoreDef& other);
        virtual ~ScoreDef();

/* include <scoreDef> */


    private:
        REGISTER_DECLARATION(ScoreDef);
};

/** \brief – Segment of music data.
 */
class MEI_EXPORT Section : public MeiElement {
    public:
        Section();
        Section(const Section& other);
        virtual ~Section();

/* include <section> */


    private:
        REGISTER_DECLARATION(Section);
};

/** \brief indicates the location of a significant space in the copy text.
 */
class MEI_EXPORT Space : public MeiElement {
    public:
        Space();
        Space(const Space& other);
        virtual ~Space();

/* include <space> */


    private:
        REGISTER_DECLARATION(Space);
};

/** \brief (stacked text) – An inline table with a single column.
 */
class MEI_EXPORT Stack : public MeiElement {
    public:
        Stack();
        Stack(const Stack& other);
        virtual ~Stack();
        /** \brief supplies a delimiting string following the reference component.
         */
        MeiAttribute* getDelim();
        void setDelim(std::string _delim);
        bool hasDelim();
        void removeDelim();
        /** \brief specifies how the stacked text components should be aligned.
         */
        MeiAttribute* getAlign();
        void setAlign(std::string _align);
        bool hasAlign();
        void removeAlign();

/* include <stack> */


    private:
        REGISTER_DECLARATION(Stack);
};

/** \brief – A group of equidistant horizontal lines on which notes are placed in order
 *  to represent pitch or a grouping element for individual 'strands' of notes,
 *  rests, etc.
 * 
 *  that may or may not actually be rendered on staff lines; that is, both
 *  diastematic and non-diastematic signs.
 */
class MEI_EXPORT Staff : public MeiElement {
    public:
        Staff();
        Staff(const Staff& other);
        virtual ~Staff();

/* include <staff> */


    private:
        REGISTER_DECLARATION(Staff);
};

/** \brief (staff definition) – Container for staff meta-information.
 */
class MEI_EXPORT StaffDef : public MeiElement {
    public:
        StaffDef();
        StaffDef(const StaffDef& other);
        virtual ~StaffDef();

/* include <staffDef> */


    private:
        REGISTER_DECLARATION(StaffDef);
};

/** \brief (staff group) – A group of bracketed or braced staves.
 */
class MEI_EXPORT StaffGrp : public MeiElement {
    public:
        StaffGrp();
        StaffGrp(const StaffGrp& other);
        virtual ~StaffGrp();

/* include <staffGrp> */


    private:
        REGISTER_DECLARATION(StaffGrp);
};

/** \brief (syllable) – Individual lyric syllable.
 */
class MEI_EXPORT Syl : public MeiElement {
    public:
        Syl();
        Syl(const Syl& other);
        virtual ~Syl();

/* include <syl> */


    private:
        REGISTER_DECLARATION(Syl);
};

/** \brief – Text and symbols descriptive of tempo, mood, or style, e.g., "allarg.", "a
 *  tempo", "cantabile", "Moderato", "♩=60", "Moderato ♩ =60").
 */
class MEI_EXPORT Tempo : public MeiElement {
    public:
        Tempo();
        Tempo(const Tempo& other);
        virtual ~Tempo();

/* include <tempo> */


    private:
        REGISTER_DECLARATION(Tempo);
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

/* include <title> */


    private:
        REGISTER_DECLARATION(Title);
};

/** \brief contains the title page of a text, appearing within the front or back matter.
 */
class MEI_EXPORT TitlePage : public MeiElement {
    public:
        TitlePage();
        TitlePage(const TitlePage& other);
        virtual ~TitlePage();

/* include <titlePage> */


    private:
        REGISTER_DECLARATION(TitlePage);
};
}
#endif  // SHARED_H_
