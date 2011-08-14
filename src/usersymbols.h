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
    
#ifndef USERSYMBOLS_H_
#define USERSYMBOLS_H_

#include "facsimilemixins.h"
#include "sharedmixins.h"
#include "analysismixins.h"
#include "cmnmixins.h"
#include "critappmixins.h"
using namespace std;
/** \brief  anchored text ― Container for text that is fixed to a particular location,
 *          regardless of changes made to the layout of the measures around it.
 *
 * This element may be used where semantic markup of the text is neither possible          
 *          nor desirable, such as in optical music recognition (OMR) applications. The          
 *          content model here is similar to paragraph without model.textcomponent and <pb>          
 *          sub-elements. The starting point of the text may be identified in absolute          
 *          output coordinate terms using the x and y attributes or relative to the location          
 *          of another element using the startid attribute. The attributes in the          
 *          att.visualoffset class may be used to record horizontal, vertical, or time          
 *          offsets from the absolute coordinates or from the location of the referenced          
 *          element..
 */
struct AnchoredText : public BaseMeiElement{
    AnchoredText();
    virtual ~AnchoredText() {};

    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    StartidMixIn    m_Startid;
    TypedMixIn    m_Typed;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(AnchoredText);
};

/** \brief  curve ― A curved line that cannot be represented by a more specific element,
 *          such as a <slur>.
 *
 * The starting point of the curve may be identified in absolute output coordinate          
 *          terms using the x1 and y1 attributes or relative to the location of another          
 *          element using the startid attribute. The attributes in the att.visualoffset          
 *          class may be used to record horizontal, vertical, or time offsets from the          
 *          absolute coordinates or from the location of the referenced element. Similarly,          
 *          the terminal point of the curve may be recorded using either the x2,y2          
 *          coordinates or in relation to the location of another element using the endid          
 *          attribute. Attributes in the att.visualoffset2 class maybe used to record the          
 *          offsets of the ending point. The bulge attribute or, alternatively, the bezier          
 *          attribute, describes the shape of the curve. The bulge attribute describes the          
 *          curve as a set of distance values above or below an imaginary line connecting          
 *          the endpoints of the curve while the bezier attribute records the placement of          
 *          Bezier control points as a series of space-separated xy coordinate pairs, e.g.,          
 *          19 45 -32 118. The bulge attribute must contain one or more values of the NUMBER          
 *          datatype. The rend attribute captures the appearance of the curve..
 */
struct Curve : public BaseMeiElement{
    Curve();
    virtual ~Curve() {};

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    CurvatureMixIn    m_Curvature;
    CurverendMixIn    m_Curverend;
    TypedMixIn    m_Typed;
    XyMixIn    m_Xy;
    Xy2MixIn    m_Xy2;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Curve);
};

/** \brief  line ― A line that cannot be represented by a more specific element.
 *
 * The starting point of the line may be identified in absolute output coordinate          
 *          terms using the x1 and y1 attributes or relative to the location of another          
 *          element using the startid attribute. The attributes in the att.visualoffset          
 *          class may be used to record horizontal, vertical, or time offsets from the          
 *          absolute coordinates or from the location of the referenced element. Similarly,          
 *          the terminal point of the line may be recorded using either the x2 and y2          
 *          attributes or in relation to the location of another element using the endid          
 *          attribute. Attributes in the att.visualoffset2 class maybe used to record the          
 *          offsets of the ending point. Text content of the line element, e.g. 'gliss.',          
 *          may be rendered with the line. The appearance of the line is captured in the          
 *          rend attribute..
 */
struct Line : public BaseMeiElement{
    Line();
    virtual ~Line() {};

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    LinerendMixIn    m_Linerend;
    TypedMixIn    m_Typed;
    XyMixIn    m_Xy;
    Xy2MixIn    m_Xy2;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Line);
};

/** \brief  symbol ― A reference to a previously defined symbol.
 *
 * The starting point, e.g. "hotspot", of the symbol may be identified in absolute          
 *          output coordinate terms using the x and y attributes or relative to another          
 *          element using the startid attribute. Attributes in the att.visualoffset class          
 *          may be used to record horizontal, vertical, or time offsets from the absolute          
 *          coordinates or from the location of the referenced element. The ref attribute          
 *          must contain the id of a symbolDef element. The scale attribute indicates that          
 *          the printed output must be scaled by the specified percentage..
 */
struct Symbol : public BaseMeiElement{
    Symbol();
    virtual ~Symbol() {};

    string getRefValue() throw (AttributeNotFoundException);

    MeiAttribute* getRef() throw (AttributeNotFoundException);
    void setRef(string _ref);
    bool hasRef();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    ScalableMixIn    m_Scalable;
    StartidMixIn    m_Startid;
    TypedMixIn    m_Typed;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Symbol);
};

/** \brief  symbol definition ― Declaration of an individual symbol in a symbolTable.
 */
struct SymbolDef : public BaseMeiElement{
    SymbolDef();
    virtual ~SymbolDef() {};

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(SymbolDef);
};

/** \brief  symbol table ― Contains individual, user-defined symbols.
 *
 * Like a chord table, a symbolTable may be shared between mei instances through          
 *          the use of an external parsed entity containing the symbolTable to be shared..
 */
struct SymbolTable : public BaseMeiElement{
    SymbolTable();
    virtual ~SymbolTable() {};

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(SymbolTable);
};

#endif // USERSYMBOLS_H_