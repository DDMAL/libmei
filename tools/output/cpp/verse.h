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

#ifndef VERSE_H_
#define VERSE_H_

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
/** \brief marks the point at which a metrical line may be divided.
 */
class MEI_EXPORT Caesura : public MeiElement {
    public:
        Caesura();
        Caesura(const Caesura& other);
        virtual ~Caesura();

/* include <caesura> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Caesura);
};

/** \brief documents the notation employed to represent a metrical pattern when this is
 *  specified as the value of a
 */
class MEI_EXPORT MetDecl : public MeiElement {
    public:
        MetDecl();
        MetDecl(const MetDecl& other);
        virtual ~MetDecl();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief specifies a regular expression defining any value that is legal for this
         *  notation.
         */
        MeiAttribute* getPattern();
        void setPattern(std::string _pattern);
        bool hasPattern();
        void removePattern();

/* include <metDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclarableMixIn    m_Declarable;

    private:
        REGISTER_DECLARATION(MetDecl);
};

/** \brief documents the intended significance of a particular character or character
 *  sequence within a metrical notation, either explicitly or in terms of other
 *  symbol elements in the same metDecl.
 */
class MEI_EXPORT MetSym : public MeiElement {
    public:
        MetSym();
        MetSym(const MetSym& other);
        virtual ~MetSym();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();
        /** \brief specifies whether the symbol is defined in terms of other symbols (
         */
        MeiAttribute* getTerminal();
        void setTerminal(std::string _terminal);
        bool hasTerminal();
        void removeTerminal();

/* include <metSym> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(MetSym);
};

/** \brief marks the rhyming part of a metrical line.
 */
class MEI_EXPORT Rhyme : public MeiElement {
    public:
        Rhyme();
        Rhyme(const Rhyme& other);
        virtual ~Rhyme();
        /** \brief provides a label to identify which part of a rhyme scheme this rhyming string
         *  instantiates.
         */
        MeiAttribute* getLabel();
        void setLabel(std::string _label);
        bool hasLabel();
        void removeLabel();

/* include <rhyme> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Rhyme);
};
}
#endif  // VERSE_H_
