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

#ifndef USERSYMBOLS_H_
#define USERSYMBOLS_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "mei.h"
#include "analysismixins.h"
#include "linkalignmixins.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include <string>


namespace mei {
/** \brief anchored text ― Container for text that is fixed to a particular location,
 *  regardless of changes made to the layout of the measures around it.
 * 
 *  This element may be used where semantic markup of the text is neither possible
 *  nor desirable, such as in optical music recognition (OMR) applications. The
 *  content model here is similar to paragraph without model.textcomponent and <pb>
 *  sub-elements. The starting point of the text may be identified in absolute
 *  output coordinate terms using the x and y attributes or relative to the location
 *  of another element using the startid attribute. The attributes in the
 *  att.visualoffset class may be used to record horizontal, vertical, or time
 *  offsets from the absolute coordinates or from the location of the referenced
 *  element.
 */
class MEI_EXPORT Anchoredtext : public MeiElement {
    public:
        Anchoredtext();
        virtual ~Anchoredtext();

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
        REGISTER_DECLARATION(Anchoredtext);
};

/** \brief curve ― A curved line that cannot be represented by a more specific element,
 *  such as a <slur>.
 * 
 *  The starting point of the curve may be identified in absolute output coordinate
 *  terms using the x1 and y1 attributes or relative to the location of another
 *  element using the startid attribute. The attributes in the att.visualoffset
 *  class may be used to record horizontal, vertical, or time offsets from the
 *  absolute coordinates or from the location of the referenced element. Similarly,
 *  the terminal point of the curve may be recorded using either the x2,y2
 *  coordinates or in relation to the location of another element using the endid
 *  attribute. Attributes in the att.visualoffset2 class maybe used to record the
 *  offsets of the ending point. The bulge attribute or, alternatively, the bezier
 *  attribute, describes the shape of the curve. The bulge attribute describes the
 *  curve as a set of distance values above or below an imaginary line connecting
 *  the endpoints of the curve while the bezier attribute records the placement of
 *  Bezier control points as a series of space-separated xy coordinate pairs, e.g.,
 *  19 45 -32 118. The bulge attribute must contain one or more values of the NUMBER
 *  datatype. The rend attribute captures the appearance of the curve.
 */
class MEI_EXPORT Curve : public MeiElement {
    public:
        Curve();
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

/** \brief line ― A line that cannot be represented by a more specific element.
 * 
 *  The starting point of the line may be identified in absolute output coordinate
 *  terms using the x1 and y1 attributes or relative to the location of another
 *  element using the startid attribute. The attributes in the att.visualoffset
 *  class may be used to record horizontal, vertical, or time offsets from the
 *  absolute coordinates or from the location of the referenced element. Similarly,
 *  the terminal point of the line may be recorded using either the x2 and y2
 *  attributes or in relation to the location of another element using the endid
 *  attribute. Attributes in the att.visualoffset2 class maybe used to record the
 *  offsets of the ending point. Text content of the line element, e.g. 'gliss.',
 *  may be rendered with the line. The appearance of the line is captured in the
 *  rend attribute.
 */
class MEI_EXPORT Line : public MeiElement {
    public:
        Line();
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

/** \brief symbol ― A reference to a previously defined symbol.
 * 
 *  The starting point, e.g. "hotspot", of the symbol may be identified in absolute
 *  output coordinate terms using the x and y attributes or relative to another
 *  element using the startid attribute. Attributes in the att.visualoffset class
 *  may be used to record horizontal, vertical, or time offsets from the absolute
 *  coordinates or from the location of the referenced element. The ref attribute
 *  must contain the id of a symbolDef element. The scale attribute indicates that
 *  the printed output must be scaled by the specified percentage.
 */
class MEI_EXPORT Symbol : public MeiElement {
    public:
        Symbol();
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

/** \brief symbol definition ― Declaration of an individual symbol in a symbolTable.
 */
class MEI_EXPORT Symboldef : public MeiElement {
    public:
        Symboldef();
        virtual ~Symboldef();

/* include <symbolDef> */

        CommonMixIn    m_Common;
        CoordinatedMixIn    m_Coordinated;

    private:
        REGISTER_DECLARATION(Symboldef);
};

/** \brief symbol table ― Contains individual, user-defined symbols.
 * 
 *  Like a chord table, a symbolTable may be shared between mei instances through
 *  the use of an external parsed entity containing the symbolTable to be shared.
 */
class MEI_EXPORT Symboltable : public MeiElement {
    public:
        Symboltable();
        virtual ~Symboltable();

/* include <symbolTable> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(Symboltable);
};
}
#endif  // USERSYMBOLS_H_
