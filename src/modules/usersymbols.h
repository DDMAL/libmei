/*
    Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter, and Others

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
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "analysismixins.h"
#include "performancemixins.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "usersymbolsmixins.h"
#include "externalsymbolsmixins.h"
#include <string>


namespace mei {
/** \brief Container for text that is fixed to a particular page location, regardless of
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
        CommonPartMixIn    m_CommonPart;
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

/** \brief A curved line that cannot be represented by a more specific element, such as a
 *  slur.
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
        CommonPartMixIn    m_CommonPart;
        CurvatureMixIn    m_Curvature;
        CurverendMixIn    m_Curverend;
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

    private:
        REGISTER_DECLARATION(Curve);
};

/** \brief A visual line that cannot be represented by a more specific; i.e., semantic,
 *  element.
 */
class MEI_EXPORT Line : public MeiElement {
    public:
        Line();
        Line(const Line& other);
        virtual ~Line();

/* include <line> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        DurationPerformedMixIn    m_DurationPerformed;
        PlistMixIn    m_Plist;
        TargetevalMixIn    m_Targeteval;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        DurationAdditiveMixIn    m_DurationAdditive;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
        LineVisMixIn    m_LineVis;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        Visualoffset2VoMixIn    m_Visualoffset2Vo;
        XyMixIn    m_Xy;
        Xy2MixIn    m_Xy2;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Line);
};

/** \brief One or more characters which are related to the parent symbol in some respect,
 *  as specified by the type attribute.
 */
class MEI_EXPORT Mapping : public MeiElement {
    public:
        Mapping();
        Mapping(const Mapping& other);
        virtual ~Mapping();

/* include <mapping> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Mapping);
};

/** \brief (property name) – Name of a property of the symbol.
 */
class MEI_EXPORT PropName : public MeiElement {
    public:
        PropName();
        PropName(const PropName& other);
        virtual ~PropName();
        /** \brief Characterizes the element in some sense, using any convenient classification
         *  scheme or typology.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <propName> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(PropName);
};

/** \brief (property value) – A single property value.
 */
class MEI_EXPORT PropValue : public MeiElement {
    public:
        PropValue();
        PropValue(const PropValue& other);
        virtual ~PropValue();

/* include <propValue> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(PropValue);
};

/** \brief (symbol name) – Contains the name of a symbol, expressed following Unicode
 *  conventions.
 */
class MEI_EXPORT SymName : public MeiElement {
    public:
        SymName();
        SymName(const SymName& other);
        virtual ~SymName();

/* include <symName> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(SymName);
};

/** \brief (symbol property) – Provides a name and value for some property of the parent
 *  symbol.
 */
class MEI_EXPORT SymProp : public MeiElement {
    public:
        SymProp();
        SymProp(const SymProp& other);
        virtual ~SymProp();

/* include <symProp> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(SymProp);
};

/** \brief A reference to a previously defined symbol.
 */
class MEI_EXPORT Symbol : public MeiElement {
    public:
        Symbol();
        Symbol(const Symbol& other);
        virtual ~Symbol();

/* include <symbol> */

        AltsymMixIn    m_Altsym;
        AuthorizedMixIn    m_Authorized;
        ColorMixIn    m_Color;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        ExtsymMixIn    m_Extsym;
        FacsimileMixIn    m_Facsimile;
        ScalableMixIn    m_Scalable;
        StartidMixIn    m_Startid;
        TypedMixIn    m_Typed;
        TypographyMixIn    m_Typography;
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
        CommonPartMixIn    m_CommonPart;
        CoordinatedMixIn    m_Coordinated;

    private:
        REGISTER_DECLARATION(SymbolDef);
};

/** \brief Contains a set of user-defined symbols.
 */
class MEI_EXPORT SymbolTable : public MeiElement {
    public:
        SymbolTable();
        SymbolTable(const SymbolTable& other);
        virtual ~SymbolTable();

/* include <symbolTable> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(SymbolTable);
};
}
#endif  // USERSYMBOLS_H_
