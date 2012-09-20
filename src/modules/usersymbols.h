/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter, and Others
    
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
#include "analysismixins.h"
#include "linkalignmixins.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
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

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        StartidMixIn    m_Startid;
        TypedMixIn    m_Typed;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;

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

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        ColorMixIn    m_Color;
        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        TypedMixIn    m_Typed;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        CurvatureMixIn    m_Curvature;
        CurverendMixIn    m_Curverend;

    private:
        REGISTER_DECLARATION(Curve);
};

/** \brief – A line that cannot be represented by a more specific element.
 */
class MEI_EXPORT Line : public MeiElement {
    public:
        Line();
        Line(const Line& other);
        virtual ~Line();

/* include <line> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        ColorMixIn    m_Color;
        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        TypedMixIn    m_Typed;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        LinerendMixIn    m_Linerend;

    private:
        REGISTER_DECLARATION(Line);
};

/** \brief – A reference to a previously defined symbol.
 */
class MEI_EXPORT Symbol : public MeiElement {
    public:
        Symbol();
        Symbol(const Symbol& other);
        virtual ~Symbol();
        /** \brief contains a reference to a previously-declared user-defined symbol.
         */
        MeiAttribute* getRef();
        void setRef(std::string _ref);
        bool hasRef();
        void removeRef();

/* include <symbol> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        ColorMixIn    m_Color;
        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        ScalableMixIn    m_Scalable;
        StartidMixIn    m_Startid;
        TypedMixIn    m_Typed;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;

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

        CommonMixIn    m_Common;
        CoordinatedMixIn    m_Coordinated;

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

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(SymbolTable);
};
}
#endif  // USERSYMBOLS_H_
