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

#ifndef FIGURES_H_
#define FIGURES_H_

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
/** \brief contains one cell of a table.
 */
class MEI_EXPORT Cell : public MeiElement {
    public:
        Cell();
        Cell(const Cell& other);
        virtual ~Cell();

/* include <cell> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TableDecorationMixIn    m_TableDecoration;

    private:
        REGISTER_DECLARATION(Cell);
};

/** \brief contains a brief prose description of the appearance or content of a graphic
 *  figure, for use when documenting an image without displaying it.
 */
class MEI_EXPORT FigDesc : public MeiElement {
    public:
        FigDesc();
        FigDesc(const FigDesc& other);
        virtual ~FigDesc();

/* include <figDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FigDesc);
};

/** \brief groups elements representing or containing graphic information such as an
 *  illustration, formula, or figure.
 */
class MEI_EXPORT Figure : public MeiElement {
    public:
        Figure();
        Figure(const Figure& other);
        virtual ~Figure();

/* include <figure> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PlacementMixIn    m_Placement;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Figure);
};

/** \brief contains a mathematical or other formula.
 */
class MEI_EXPORT Formula : public MeiElement {
    public:
        Formula();
        Formula(const Formula& other);
        virtual ~Formula();
        /** \brief indicates what notation is used for the pronunciation, if more than one occurs
         *  in the machine-readable dictionary.
         */
        MeiAttribute* getNotation();
        void setNotation(std::string _notation);
        bool hasNotation();
        void removeNotation();

/* include <formula> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Formula);
};

/** \brief encodes the presence of music notation in a text.
 * 
 *  Some MEI elements are allowed within.
 */
class MEI_EXPORT NotatedMusic : public MeiElement {
    public:
        NotatedMusic();
        NotatedMusic(const NotatedMusic& other);
        virtual ~NotatedMusic();

/* include <notatedMusic> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PlacementMixIn    m_Placement;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(NotatedMusic);
};

/** \brief contains one row of a table.
 */
class MEI_EXPORT Row : public MeiElement {
    public:
        Row();
        Row(const Row& other);
        virtual ~Row();

/* include <row> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TableDecorationMixIn    m_TableDecoration;

    private:
        REGISTER_DECLARATION(Row);
};

/** \brief contains text displayed in tabular form, in rows and columns.
 */
class MEI_EXPORT Table : public MeiElement {
    public:
        Table();
        Table(const Table& other);
        virtual ~Table();
        /** \brief indicates the number of rows occupied by this cell or row.
         */
        MeiAttribute* getRows();
        void setRows(std::string _rows);
        bool hasRows();
        void removeRows();
        /** \brief indicates the number of columns occupied by this cell or row.
         */
        MeiAttribute* getCols();
        void setCols(std::string _cols);
        bool hasCols();
        void removeCols();

/* include <table> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Table);
};
}
#endif  // FIGURES_H_
