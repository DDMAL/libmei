
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

#ifndef FIGTABLE_H_
#define FIGTABLE_H_

#include "meielement.h"
#include "exceptions.h"
#include "mei.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "figtablemixins.h"


namespace mei {
    
/** \brief   figure ― groups elements representing or containing graphic information such
    * as an illustration or figure. This element is modelled on the figure element in
    * the Text Encoding Initiative (TEI).
    */

class MEI_EXPORT Fig : public MeiElement {
    public:
        Fig();
        virtual ~Fig() {}
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    XyMixIn    m_Xy;
    private:
        REGISTER_DECLARATION(Fig);
};

/** \brief   figure description ― Contains a brief prose description of the appearance or
    * content of a graphic figure, for use when documenting an image without
    * displaying it. Best practice suggests the use of controlled vocabulary. Don't
    * confuse this element with a figure caption. A caption is text primarily intended
    * for display with an illustration. It may or may not function as a description of
    * the illustration. This element is modelled on an element in the Text Encoding
    * Initiative (TEI).
    */

class MEI_EXPORT Figdesc : public MeiElement {
    public:
        Figdesc();
        virtual ~Figdesc() {}
        
        
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    private:
        REGISTER_DECLARATION(Figdesc);
};

/** \brief   graphic ― Indicates the location of an inline graphic, illustration, or
    * figure. This element is modelled on an element in the Text Encoding Initiative
    * (TEI).
    */

class MEI_EXPORT Graphic : public MeiElement {
    public:
        Graphic();
        virtual ~Graphic() {}
        
    /** \brief   measurement of the vertical dimension of an image.
    */
    MeiAttribute* getHeight();
    void setHeight(std::string _height);
    bool hasHeight();
    void removeHeight();

        
    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    InternetmediaMixIn    m_Internetmedia;
    FacsimileMixIn    m_Facsimile;
    LinkExternalMixIn    m_LinkExternal;
    MeasurementMixIn    m_Measurement;
    TypedMixIn    m_Typed;
    WidthMixIn    m_Width;
    private:
        REGISTER_DECLARATION(Graphic);
};

/** \brief   table ― Visual layout in tabular form. This element is modelled on elements in
    * Encoded Archival Description (EAD), Text Encoding Initiative (TEI), and HTML.
    */

class MEI_EXPORT Table : public MeiElement {
    public:
        Table();
        virtual ~Table() {}
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    private:
        REGISTER_DECLARATION(Table);
};

/** \brief   table data ― Designates a table cell that contains data as opposed to a cell
    * that contains column or row heading information. The colspan and rowspan
    * attributes tabular display rendering information. This element is modelled on an
    * element in HTML.
    */

class MEI_EXPORT Td : public MeiElement {
    public:
        Td();
        virtual ~Td() {}
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    TabularMixIn    m_Tabular;
    private:
        REGISTER_DECLARATION(Td);
};

/** \brief   table header ― Designates a table cell containing column or row heading
    * information as opposed to one containing data. The colspan and rowspan
    * attributes tabular display rendering information. This element is modelled on an
    * element in HTML.
    */

class MEI_EXPORT Th : public MeiElement {
    public:
        Th();
        virtual ~Th() {}
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    TabularMixIn    m_Tabular;
    private:
        REGISTER_DECLARATION(Th);
};

/** \brief   table row ― A formatting element that contains one or more <td> or <th>
    * elements (cells) in a <table>. A cell is the intersection of a row and a column.
    * The precise rendition of the table and its cells should be specified in a style
    * sheet. This element is modelled on an element in HTML.
    */

class MEI_EXPORT Tr : public MeiElement {
    public:
        Tr();
        virtual ~Tr() {}
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    XyMixIn    m_Xy;
    private:
        REGISTER_DECLARATION(Tr);
};

}
#endif // FIGTABLE_H_
