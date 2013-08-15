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

#ifndef DICTIONARIES_H_
#define DICTIONARIES_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include "dictionariesmixins.h"
#include <string>


namespace mei {
/** \brief contains grammatical case information given by a dictionary for a given form.
 */
class MEI_EXPORT Case : public MeiElement {
    public:
        Case();
        Case(const Case& other);
        virtual ~Case();

/* include <case> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Case);
};

/** \brief contains any sequence of words that co-occur with the headword with significant
 *  frequency.
 */
class MEI_EXPORT Colloc : public MeiElement {
    public:
        Colloc();
        Colloc(const Colloc& other);
        virtual ~Colloc();

/* include <colloc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Colloc);
};

/** \brief contains definition text in a dictionary entry.
 */
class MEI_EXPORT Def : public MeiElement {
    public:
        Def();
        Def(const Def& other);
        virtual ~Def();

/* include <def> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Def);
};

/** \brief encloses a part of a dictionary entry in which other phrase-level dictionary
 *  elements are freely combined.
 */
class MEI_EXPORT DictScrap : public MeiElement {
    public:
        DictScrap();
        DictScrap(const DictScrap& other);
        virtual ~DictScrap();

/* include <dictScrap> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(DictScrap);
};

/** \brief contains a single structured entry in any kind of lexical resource, such as a
 *  dictionary or lexicon.
 */
class MEI_EXPORT Entry : public MeiElement {
    public:
        Entry();
        Entry(const Entry& other);
        virtual ~Entry();

/* include <entry> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EntryLikeMixIn    m_EntryLike;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Entry);
};

/** \brief contains a single unstructured entry in any kind of lexical resource, such as a
 *  dictionary or lexicon.
 */
class MEI_EXPORT EntryFree : public MeiElement {
    public:
        EntryFree();
        EntryFree(const EntryFree& other);
        virtual ~EntryFree();

/* include <entryFree> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EntryLikeMixIn    m_EntryLike;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(EntryFree);
};

/** \brief encloses the etymological information in a dictionary entry.
 */
class MEI_EXPORT Etym : public MeiElement {
    public:
        Etym();
        Etym(const Etym& other);
        virtual ~Etym();

/* include <etym> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Etym);
};

/** \brief groups all the information on the written and spoken forms of one headword.
 */
class MEI_EXPORT Form : public MeiElement {
    public:
        Form();
        Form(const Form& other);
        virtual ~Form();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <form> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Form);
};

/** \brief identifies the morphological gender of a lexical item, as given in the
 *  dictionary.
 */
class MEI_EXPORT Gen : public MeiElement {
    public:
        Gen();
        Gen(const Gen& other);
        virtual ~Gen();

/* include <gen> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Gen);
};

/** \brief within an entry in a dictionary or a terminological data file, contains
 *  grammatical information relating to a term, word, or form.
 */
class MEI_EXPORT Gram : public MeiElement {
    public:
        Gram();
        Gram(const Gram& other);
        virtual ~Gram();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <gram> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Gram);
};

/** \brief groups morpho-syntactic information about a lexical item, e.g.
 */
class MEI_EXPORT GramGrp : public MeiElement {
    public:
        GramGrp();
        GramGrp(const GramGrp& other);
        virtual ~GramGrp();

/* include <gramGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(GramGrp);
};

/** \brief groups information relating to one homograph within an entry.
 */
class MEI_EXPORT Hom : public MeiElement {
    public:
        Hom();
        Hom(const Hom& other);
        virtual ~Hom();

/* include <hom> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Hom);
};

/** \brief contains a hyphenated form of a dictionary headword, or hyphenation information
 *  in some other form.
 */
class MEI_EXPORT Hyph : public MeiElement {
    public:
        Hyph();
        Hyph(const Hyph& other);
        virtual ~Hyph();

/* include <hyph> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Hyph);
};

/** \brief indicates the inflectional class associated with a lexical item.
 */
class MEI_EXPORT IType : public MeiElement {
    public:
        IType();
        IType(const IType& other);
        virtual ~IType();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <iType> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(IType);
};

/** \brief contains the name of a language mentioned in etymological or other linguistic
 *  discussion.
 */
class MEI_EXPORT Lang : public MeiElement {
    public:
        Lang();
        Lang(const Lang& other);
        virtual ~Lang();

/* include <lang> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Lang);
};

/** \brief contains a label for a form, example, translation, or other piece of
 *  information, e.g.
 * 
 *  abbreviation for, contraction of, literally, approximately, synonyms:, etc.
 */
class MEI_EXPORT Lbl : public MeiElement {
    public:
        Lbl();
        Lbl(const Lbl& other);
        virtual ~Lbl();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <lbl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Lbl);
};

/** \brief contains information about the grammatical mood of verbs (e.g.
 * 
 *  indicative, subjunctive, imperative).
 */
class MEI_EXPORT Mood : public MeiElement {
    public:
        Mood();
        Mood(const Mood& other);
        virtual ~Mood();

/* include <mood> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Mood);
};

/** \brief indicates grammatical number associated with a form, as given in a dictionary.
 */
class MEI_EXPORT Number : public MeiElement {
    public:
        Number();
        Number(const Number& other);
        virtual ~Number();

/* include <number> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Number);
};

/** \brief in a dictionary example, indicates a reference to the orthographic form(s) of
 *  the headword.
 */
class MEI_EXPORT ORef : public MeiElement {
    public:
        ORef();
        ORef(const ORef& other);
        virtual ~ORef();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <oRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(ORef);
};

/** \brief in a dictionary example, indicates a reference to variant orthographic form(s)
 *  of the headword.
 */
class MEI_EXPORT OVar : public MeiElement {
    public:
        OVar();
        OVar(const OVar& other);
        virtual ~OVar();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <oVar> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(OVar);
};

/** \brief gives the orthographic form of a dictionary headword.
 */
class MEI_EXPORT Orth : public MeiElement {
    public:
        Orth();
        Orth(const Orth& other);
        virtual ~Orth();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief indicates the size of the object concerned using a project-specific vocabulary
         *  combining quantity and units in a single string of words.
         */
        MeiAttribute* getExtent();
        void setExtent(std::string _extent);
        bool hasExtent();
        void removeExtent();

/* include <orth> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Orth);
};

/** \brief in a dictionary example, indicates a reference to the pronunciation(s) of the
 *  headword.
 */
class MEI_EXPORT PRef : public MeiElement {
    public:
        PRef();
        PRef(const PRef& other);
        virtual ~PRef();

/* include <pRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(PRef);
};

/** \brief in a dictionary example, indicates a reference to variant pronunciation(s) of
 *  the headword.
 */
class MEI_EXPORT PVar : public MeiElement {
    public:
        PVar();
        PVar(const PVar& other);
        virtual ~PVar();

/* include <pVar> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PointingMixIn    m_Pointing;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(PVar);
};

/** \brief contains an indication of the grammatical person (1st, 2nd, 3rd, etc.)
 *  associated with a given inflected form in a dictionary.
 */
class MEI_EXPORT Per : public MeiElement {
    public:
        Per();
        Per(const Per& other);
        virtual ~Per();

/* include <per> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Per);
};

/** \brief indicates the part of speech assigned to a dictionary headword such as noun,
 *  verb, or adjective.
 */
class MEI_EXPORT Pos : public MeiElement {
    public:
        Pos();
        Pos(const Pos& other);
        virtual ~Pos();

/* include <pos> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Pos);
};

/** \brief contains the pronunciation(s) of the word.
 */
class MEI_EXPORT Pron : public MeiElement {
    public:
        Pron();
        Pron(const Pron& other);
        virtual ~Pron();
        /** \brief indicates the size of the object concerned using a project-specific vocabulary
         *  combining quantity and units in a single string of words.
         */
        MeiAttribute* getExtent();
        void setExtent(std::string _extent);
        bool hasExtent();
        void removeExtent();
        /** \brief indicates what notation is used for the pronunciation, if more than one occurs
         *  in the machine-readable dictionary.
         */
        MeiAttribute* getNotation();
        void setNotation(std::string _notation);
        bool hasNotation();
        void removeNotation();

/* include <pron> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Pron);
};

/** \brief contains a dictionary entry for a lexical item related to the headword, such as
 *  a compound phrase or derived form, embedded inside a larger entry.
 */
class MEI_EXPORT Re : public MeiElement {
    public:
        Re();
        Re(const Re& other);
        virtual ~Re();

/* include <re> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Re);
};

/** \brief groups together all information relating to one word sense in a dictionary
 *  entry, for example definitions, examples, and translation equivalents.
 */
class MEI_EXPORT Sense : public MeiElement {
    public:
        Sense();
        Sense(const Sense& other);
        virtual ~Sense();
        /** \brief indicates the bibliographic level for a title, that is, whether it identifies an
         *  article, book, journal, series, or unpublished material.
         */
        MeiAttribute* getLevel();
        void setLevel(std::string _level);
        bool hasLevel();
        void removeLevel();

/* include <sense> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Sense);
};

/** \brief contains the stress pattern for a dictionary headword, if given separately.
 */
class MEI_EXPORT Stress : public MeiElement {
    public:
        Stress();
        Stress(const Stress& other);
        virtual ~Stress();

/* include <stress> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Stress);
};

/** \brief contains subcategorization information (transitive/intransitive, countable/non-
 *  countable, etc.)
 */
class MEI_EXPORT Subc : public MeiElement {
    public:
        Subc();
        Subc(const Subc& other);
        virtual ~Subc();

/* include <subc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Subc);
};

/** \brief groups a sequence of entries within any kind of lexical resource, such as a
 *  dictionary or lexicon which function as a single unit, for example a set of
 *  homographs.
 */
class MEI_EXPORT SuperEntry : public MeiElement {
    public:
        SuperEntry();
        SuperEntry(const SuperEntry& other);
        virtual ~SuperEntry();

/* include <superEntry> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EntryLikeMixIn    m_EntryLike;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(SuperEntry);
};

/** \brief contains the syllabification of the headword.
 */
class MEI_EXPORT Syll : public MeiElement {
    public:
        Syll();
        Syll(const Syll& other);
        virtual ~Syll();

/* include <syll> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Syll);
};

/** \brief indicates the grammatical tense associated with a given inflected form in a
 *  dictionary.
 */
class MEI_EXPORT Tns : public MeiElement {
    public:
        Tns();
        Tns(const Tns& other);
        virtual ~Tns();

/* include <tns> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Tns);
};

/** \brief contains usage information in a dictionary entry.
 */
class MEI_EXPORT Usg : public MeiElement {
    public:
        Usg();
        Usg(const Usg& other);
        virtual ~Usg();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <usg> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Usg);
};

/** \brief contains a phrase, sentence, or icon referring the reader to some other location
 *  in this or another text.
 */
class MEI_EXPORT Xr : public MeiElement {
    public:
        Xr();
        Xr(const Xr& other);
        virtual ~Xr();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <xr> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        LexicographicMixIn    m_Lexicographic;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Xr);
};
}
#endif  // DICTIONARIES_H_
