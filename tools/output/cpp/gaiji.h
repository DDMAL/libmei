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

#ifndef GAIJI_H_
#define GAIJI_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include <string>


namespace mei {
/** \brief provides descriptive information about a character.
 */
class MEI_EXPORT Char : public MeiElement {
    public:
        Char();
        Char(const Char& other);
        virtual ~Char();

/* include <char> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Char);
};

/** \brief provides information about nonstandard characters and glyphs.
 */
class MEI_EXPORT CharDecl : public MeiElement {
    public:
        CharDecl();
        CharDecl(const CharDecl& other);
        virtual ~CharDecl();

/* include <charDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(CharDecl);
};

/** \brief contains the name of a character, expressed following Unicode conventions.
 */
class MEI_EXPORT CharName : public MeiElement {
    public:
        CharName();
        CharName(const CharName& other);
        virtual ~CharName();

/* include <charName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(CharName);
};

/** \brief provides a name and value for some property of the parent character or glyph.
 */
class MEI_EXPORT CharProp : public MeiElement {
    public:
        CharProp();
        CharProp(const CharProp& other);
        virtual ~CharProp();

/* include <charProp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(CharProp);
};

/** \brief represents a glyph, or a non-standard character.
 */
class MEI_EXPORT G : public MeiElement {
    public:
        G();
        G(const G& other);
        virtual ~G();
        /** \brief provides an explicit means of locating a full definition for the entity being
         *  named by means of one or more URIs.
         */
        MeiAttribute* getRef();
        void setRef(std::string _ref);
        bool hasRef();
        void removeRef();

/* include <g> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(G);
};

/** \brief provides descriptive information about a character glyph.
 */
class MEI_EXPORT Glyph : public MeiElement {
    public:
        Glyph();
        Glyph(const Glyph& other);
        virtual ~Glyph();

/* include <glyph> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Glyph);
};

/** \brief contains the name of a glyph, expressed following Unicode conventions for
 *  character names.
 */
class MEI_EXPORT GlyphName : public MeiElement {
    public:
        GlyphName();
        GlyphName(const GlyphName& other);
        virtual ~GlyphName();

/* include <glyphName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(GlyphName);
};

/** \brief contains a locally defined name for some property.
 */
class MEI_EXPORT LocalName : public MeiElement {
    public:
        LocalName();
        LocalName(const LocalName& other);
        virtual ~LocalName();

/* include <localName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(LocalName);
};

/** \brief contains one or more characters which are related to the parent character or
 *  glyph in some respect, as specified by the
 */
class MEI_EXPORT Mapping : public MeiElement {
    public:
        Mapping();
        Mapping(const Mapping& other);
        virtual ~Mapping();

/* include <mapping> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Mapping);
};

/** \brief contains the name of a registered Unicode normative or informative property.
 */
class MEI_EXPORT UnicodeName : public MeiElement {
    public:
        UnicodeName();
        UnicodeName(const UnicodeName& other);
        virtual ~UnicodeName();
        /** \brief The version of the TEI scheme
         */
        MeiAttribute* getVersion();
        void setVersion(std::string _version);
        bool hasVersion();
        void removeVersion();

/* include <unicodeName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(UnicodeName);
};

/** \brief contains a single value for some property, attribute, or other analysis.
 */
class MEI_EXPORT Value : public MeiElement {
    public:
        Value();
        Value(const Value& other);
        virtual ~Value();

/* include <value> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Value);
};
}
#endif  // GAIJI_H_
