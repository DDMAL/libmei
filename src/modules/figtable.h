/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
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
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "figtablemixins.h"
#include <string>


namespace mei {
/** \brief 
 */
class MEI_EXPORT Fig : public MeiElement {
    public:
        Fig();
        Fig(const Fig& other);
        virtual ~Fig();

/* include <fig> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Fig);
};

/** \brief 
 */
class MEI_EXPORT FigDesc : public MeiElement {
    public:
        FigDesc();
        FigDesc(const FigDesc& other);
        virtual ~FigDesc();

/* include <figDesc> */

        CommonMixIn    m_Common;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(FigDesc);
};

/** \brief 
 */
class MEI_EXPORT Graphic : public MeiElement {
    public:
        Graphic();
        Graphic(const Graphic& other);
        virtual ~Graphic();
        /** \brief 
         */
        MeiAttribute* getHeight();
        void setHeight(std::string _height);
        bool hasHeight();
        void removeHeight();

/* include <graphic> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        InternetmediaMixIn    m_Internetmedia;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        MeasurementMixIn    m_Measurement;
        TypedMixIn    m_Typed;
        WidthMixIn    m_Width;

    private:
        REGISTER_DECLARATION(Graphic);
};

/** \brief 
 */
class MEI_EXPORT Table : public MeiElement {
    public:
        Table();
        Table(const Table& other);
        virtual ~Table();

/* include <table> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Table);
};

/** \brief 
 */
class MEI_EXPORT Td : public MeiElement {
    public:
        Td();
        Td(const Td& other);
        virtual ~Td();

/* include <td> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;
        TabularMixIn    m_Tabular;

    private:
        REGISTER_DECLARATION(Td);
};

/** \brief 
 */
class MEI_EXPORT Th : public MeiElement {
    public:
        Th();
        Th(const Th& other);
        virtual ~Th();

/* include <th> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;
        TabularMixIn    m_Tabular;

    private:
        REGISTER_DECLARATION(Th);
};

/** \brief 
 */
class MEI_EXPORT Tr : public MeiElement {
    public:
        Tr();
        Tr(const Tr& other);
        virtual ~Tr();

/* include <tr> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Tr);
};
}
#endif  // FIGTABLE_H_
