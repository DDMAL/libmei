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

#ifndef USERSYMBOLS_H_
#define USERSYMBOLS_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include <string>


namespace mei {
/** \brief – Container for text that is fixed to a particular location, regardless of
 *  changes made to the layout of the measures around it.
 */
class MEI_EXPORT AnchoredText : public MeiElement {
    public:
        AnchoredText();
        AnchoredText(const AnchoredText& other);
        virtual ~AnchoredText();

/* include <anchoredText> */


    private:
        REGISTER_DECLARATION(AnchoredText);
};

/** \brief – A curved line that cannot be represented by a more specific element, such as
 *  a <slur>.
 */
class MEI_EXPORT Curve : public MeiElement {
    public:
        Curve();
        Curve(const Curve& other);
        virtual ~Curve();

/* include <curve> */


    private:
        REGISTER_DECLARATION(Curve);
};

/** \brief contains the transcription of a topographic line in the source document
 */
class MEI_EXPORT Line : public MeiElement {
    public:
        Line();
        Line(const Line& other);
        virtual ~Line();

/* include <line> */


    private:
        REGISTER_DECLARATION(Line);
};

/** \brief represents the value part of a feature-value specification which contains one of
 *  a finite list of symbols.
 */
class MEI_EXPORT Symbol : public MeiElement {
    public:
        Symbol();
        Symbol(const Symbol& other);
        virtual ~Symbol();
        /** \brief provides an explicit means of locating a full definition for the entity being
         *  named by means of one or more URIs.
         */
        MeiAttribute* getRef();
        void setRef(std::string _ref);
        bool hasRef();
        void removeRef();

/* include <symbol> */


    private:
        REGISTER_DECLARATION(Symbol);
};

/** \brief (symbol definition) – Declaration of an individual symbol in a symbolTable.
 */
class MEI_EXPORT SymbolDef : public MeiElement {
    public:
        SymbolDef();
        SymbolDef(const SymbolDef& other);
        virtual ~SymbolDef();

/* include <symbolDef> */


    private:
        REGISTER_DECLARATION(SymbolDef);
};

/** \brief – Contains individual, user-defined symbols.
 */
class MEI_EXPORT SymbolTable : public MeiElement {
    public:
        SymbolTable();
        SymbolTable(const SymbolTable& other);
        virtual ~SymbolTable();

/* include <symbolTable> */


    private:
        REGISTER_DECLARATION(SymbolTable);
};
}
#endif  // USERSYMBOLS_H_
