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

#ifndef FIGTABLE_H_
#define FIGTABLE_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "figtablemixins.h"
#include <string>


namespace mei {
/** \brief (figure) – Groups elements representing or containing graphic information such
 *  as an illustration or figure.
 */
class MEI_EXPORT Fig : public MeiElement {
    public:
        Fig();
        Fig(const Fig& other);
        virtual ~Fig();

/* include <fig> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Fig);
};

/** \brief (figure description) – Contains a brief prose description of the appearance or
 *  content of a graphic figure, for use when documenting an image without
 *  displaying it.
 */
class MEI_EXPORT FigDesc : public MeiElement {
    public:
        FigDesc();
        FigDesc(const FigDesc& other);
        virtual ~FigDesc();

/* include <figDesc> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(FigDesc);
};

/** \brief Indicates the location of an inline graphic.
 */
class MEI_EXPORT Graphic : public MeiElement {
    public:
        Graphic();
        Graphic(const Graphic& other);
        virtual ~Graphic();
        /** \brief Indicates the upper-left corner x coordinate.
         */
        MeiAttribute* getUlx();
        void setUlx(std::string _ulx);
        bool hasUlx();
        void removeUlx();
        /** \brief Indicates the upper-left corner y coordinate.
         */
        MeiAttribute* getUly();
        void setUly(std::string _uly);
        bool hasUly();
        void removeUly();

/* include <graphic> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DeclaringMixIn    m_Declaring;
        HeightMixIn    m_Height;
        WidthMixIn    m_Width;
        InternetmediaMixIn    m_Internetmedia;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        MeasurementMixIn    m_Measurement;
        StartidMixIn    m_Startid;
        TypedMixIn    m_Typed;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;

    private:
        REGISTER_DECLARATION(Graphic);
};

/** \brief Contains text displayed in tabular form.
 */
class MEI_EXPORT Table : public MeiElement {
    public:
        Table();
        Table(const Table& other);
        virtual ~Table();

/* include <table> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Table);
};

/** \brief (table data) – Designates a table cell that contains data as opposed to a cell
 *  that contains column or row heading information.
 */
class MEI_EXPORT Td : public MeiElement {
    public:
        Td();
        Td(const Td& other);
        virtual ~Td();

/* include <td> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;
        TabularMixIn    m_Tabular;

    private:
        REGISTER_DECLARATION(Td);
};

/** \brief (table header) – Designates a table cell containing column or row heading
 *  information as opposed to one containing data.
 */
class MEI_EXPORT Th : public MeiElement {
    public:
        Th();
        Th(const Th& other);
        virtual ~Th();

/* include <th> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;
        TabularMixIn    m_Tabular;

    private:
        REGISTER_DECLARATION(Th);
};

/** \brief (table row) – A formatting element that contains one or more cells
 *  (intersection of a row and a column) in a <table>.
 */
class MEI_EXPORT Tr : public MeiElement {
    public:
        Tr();
        Tr(const Tr& other);
        virtual ~Tr();

/* include <tr> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Tr);
};
}
#endif  // FIGTABLE_H_
