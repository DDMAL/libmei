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

#ifndef TEXTSTRUCTURE_H_
#define TEXTSTRUCTURE_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include "versemixins.h"
#include <string>


namespace mei {
/** \brief contains a single TEI-conformant document, comprising a TEI header and a text,
 *  either in isolation or as part of a
 */
class MEI_EXPORT TEI : public MeiElement {
    public:
        TEI();
        TEI(const TEI& other);
        virtual ~TEI();
        /** \brief The version of the TEI scheme
         */
        MeiAttribute* getVersion();
        void setVersion(std::string _version);
        bool hasVersion();
        void removeVersion();

/* include <TEI> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TEI);
};

/** \brief contains a formal list or prose description of the topics addressed by a
 *  subdivision of a text.
 */
class MEI_EXPORT Argument : public MeiElement {
    public:
        Argument();
        Argument(const Argument& other);
        virtual ~Argument();

/* include <argument> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Argument);
};

/** \brief contains any appendixes, etc.
 * 
 *  following the main part of a text.
 */
class MEI_EXPORT Back : public MeiElement {
    public:
        Back();
        Back(const Back& other);
        virtual ~Back();

/* include <back> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Back);
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

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Body);
};

/** \brief contains the primary statement of responsibility given for a work on its title
 *  page or at the head or end of the work.
 */
class MEI_EXPORT Byline : public MeiElement {
    public:
        Byline();
        Byline(const Byline& other);
        virtual ~Byline();

/* include <byline> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Byline);
};

/** \brief groups together salutations, datelines, and similar phrases appearing as a final
 *  group at the end of a division, especially of a letter.
 */
class MEI_EXPORT Closer : public MeiElement {
    public:
        Closer();
        Closer(const Closer& other);
        virtual ~Closer();

/* include <closer> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Closer);
};

/** \brief contains a brief description of the place, date, time, etc.
 * 
 *  of production of a letter, newspaper story, or other work, prefixed or suffixed
 *  to it as a kind of heading or trailer.
 */
class MEI_EXPORT Dateline : public MeiElement {
    public:
        Dateline();
        Dateline(const Dateline& other);
        virtual ~Dateline();

/* include <dateline> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Dateline);
};

/** \brief contains a subdivision of the front, body, or back of a text.
 */
class MEI_EXPORT Div : public MeiElement {
    public:
        Div();
        Div(const Div& other);
        virtual ~Div();

/* include <div> */

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
        REGISTER_DECLARATION(Div);
};

/** \brief contains a first-level subdivision of the front, body, or back of a text.
 */
class MEI_EXPORT Div1 : public MeiElement {
    public:
        Div1();
        Div1(const Div1& other);
        virtual ~Div1();

/* include <div1> */

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
        REGISTER_DECLARATION(Div1);
};

/** \brief contains a second-level subdivision of the front, body, or back of a text.
 */
class MEI_EXPORT Div2 : public MeiElement {
    public:
        Div2();
        Div2(const Div2& other);
        virtual ~Div2();

/* include <div2> */

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
        REGISTER_DECLARATION(Div2);
};

/** \brief contains a third-level subdivision of the front, body, or back of a text.
 */
class MEI_EXPORT Div3 : public MeiElement {
    public:
        Div3();
        Div3(const Div3& other);
        virtual ~Div3();

/* include <div3> */

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
        REGISTER_DECLARATION(Div3);
};

/** \brief contains a fourth-level subdivision of the front, body, or back of a text.
 */
class MEI_EXPORT Div4 : public MeiElement {
    public:
        Div4();
        Div4(const Div4& other);
        virtual ~Div4();

/* include <div4> */

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
        REGISTER_DECLARATION(Div4);
};

/** \brief contains a fifth-level subdivision of the front, body, or back of a text.
 */
class MEI_EXPORT Div5 : public MeiElement {
    public:
        Div5();
        Div5(const Div5& other);
        virtual ~Div5();

/* include <div5> */

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
        REGISTER_DECLARATION(Div5);
};

/** \brief contains a sixth-level subdivision of the front, body, or back of a text.
 */
class MEI_EXPORT Div6 : public MeiElement {
    public:
        Div6();
        Div6(const Div6& other);
        virtual ~Div6();

/* include <div6> */

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
        REGISTER_DECLARATION(Div6);
};

/** \brief contains the smallest possible subdivision of the front, body or back of a text,
 *  larger than a paragraph.
 */
class MEI_EXPORT Div7 : public MeiElement {
    public:
        Div7();
        Div7(const Div7& other);
        virtual ~Div7();

/* include <div7> */

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
        REGISTER_DECLARATION(Div7);
};

/** \brief contains the name of the author of the document, as given on the title page
 *  (often but not always contained in a byline).
 */
class MEI_EXPORT DocAuthor : public MeiElement {
    public:
        DocAuthor();
        DocAuthor(const DocAuthor& other);
        virtual ~DocAuthor();

/* include <docAuthor> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(DocAuthor);
};

/** \brief contains the date of a document, as given (usually) on a title page.
 */
class MEI_EXPORT DocDate : public MeiElement {
    public:
        DocDate();
        DocDate(const DocDate& other);
        virtual ~DocDate();
        /** \brief supplies the value of the date or time in a standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getWhen();
        void setWhen(std::string _when);
        bool hasWhen();
        void removeWhen();

/* include <docDate> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(DocDate);
};

/** \brief contains an edition statement as presented on a title page of a document.
 */
class MEI_EXPORT DocEdition : public MeiElement {
    public:
        DocEdition();
        DocEdition(const DocEdition& other);
        virtual ~DocEdition();

/* include <docEdition> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(DocEdition);
};

/** \brief contains the imprint statement (place and date of publication, publisher name),
 *  as given (usually) at the foot of a title page.
 */
class MEI_EXPORT DocImprint : public MeiElement {
    public:
        DocImprint();
        DocImprint(const DocImprint& other);
        virtual ~DocImprint();

/* include <docImprint> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(DocImprint);
};

/** \brief contains the title of a document, including all its constituents, as given on a
 *  title page.
 */
class MEI_EXPORT DocTitle : public MeiElement {
    public:
        DocTitle();
        DocTitle(const DocTitle& other);
        virtual ~DocTitle();

/* include <docTitle> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(DocTitle);
};

/** \brief contains a quotation, anonymous or attributed, appearing at the start or end of
 *  a section or on a title page.
 */
class MEI_EXPORT Epigraph : public MeiElement {
    public:
        Epigraph();
        Epigraph(const Epigraph& other);
        virtual ~Epigraph();

/* include <epigraph> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Epigraph);
};

/** \brief contains a single text of any kind, whether unitary or composite, which
 *  interrupts the text containing it at any point and after which the surrounding
 *  text resumes.
 */
class MEI_EXPORT FloatingText : public MeiElement {
    public:
        FloatingText();
        FloatingText(const FloatingText& other);
        virtual ~FloatingText();

/* include <floatingText> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(FloatingText);
};

/** \brief contains any prefatory matter (headers, title page, prefaces, dedications, etc.)
 *  found at the start of a document, before the main body.
 */
class MEI_EXPORT Front : public MeiElement {
    public:
        Front();
        Front(const Front& other);
        virtual ~Front();

/* include <front> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Front);
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

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Group);
};

/** \brief contains a formal statement authorizing the publication of a work, sometimes
 *  required to appear on a title page or its verso.
 */
class MEI_EXPORT Imprimatur : public MeiElement {
    public:
        Imprimatur();
        Imprimatur(const Imprimatur& other);
        virtual ~Imprimatur();

/* include <imprimatur> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Imprimatur);
};

/** \brief groups together dateline, byline, salutation, and similar phrases appearing as a
 *  preliminary group at the start of a division, especially of a letter.
 */
class MEI_EXPORT Opener : public MeiElement {
    public:
        Opener();
        Opener(const Opener& other);
        virtual ~Opener();

/* include <opener> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Opener);
};

/** \brief contains a postscript, e.g.
 * 
 *  to a letter.
 */
class MEI_EXPORT Postscript : public MeiElement {
    public:
        Postscript();
        Postscript(const Postscript& other);
        virtual ~Postscript();

/* include <postscript> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Postscript);
};

/** \brief contains a salutation or greeting prefixed to a foreword, dedicatory epistle, or
 *  other division of a text, or the salutation in the closing of a letter, preface,
 *  etc.
 */
class MEI_EXPORT Salute : public MeiElement {
    public:
        Salute();
        Salute(const Salute& other);
        virtual ~Salute();

/* include <salute> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Salute);
};

/** \brief contains the closing salutation, etc., appended to a foreword, dedicatory
 *  epistle, or other division of a text.
 */
class MEI_EXPORT Signed : public MeiElement {
    public:
        Signed();
        Signed(const Signed& other);
        virtual ~Signed();

/* include <signed> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Signed);
};

/** \brief contains a single text of any kind, whether unitary or composite, for example a
 *  poem or drama, a collection of essays, a novel, a dictionary, or a corpus
 *  sample.
 */
class MEI_EXPORT Text : public MeiElement {
    public:
        Text();
        Text(const Text& other);
        virtual ~Text();

/* include <text> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Text);
};

/** \brief contains the title page of a text, appearing within the front or back matter.
 */
class MEI_EXPORT TitlePage : public MeiElement {
    public:
        TitlePage();
        TitlePage(const TitlePage& other);
        virtual ~TitlePage();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <titlePage> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TitlePage);
};

/** \brief contains a subsection or division of the title of a work, as indicated on a
 *  title page.
 */
class MEI_EXPORT TitlePart : public MeiElement {
    public:
        TitlePart();
        TitlePart(const TitlePart& other);
        virtual ~TitlePart();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <titlePart> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(TitlePart);
};

/** \brief contains a closing title or footer appearing at the end of a division of a text.
 */
class MEI_EXPORT Trailer : public MeiElement {
    public:
        Trailer();
        Trailer(const Trailer& other);
        virtual ~Trailer();

/* include <trailer> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Trailer);
};
}
#endif  // TEXTSTRUCTURE_H_
