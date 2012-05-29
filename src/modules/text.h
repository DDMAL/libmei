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

#ifndef TEXT_H_
#define TEXT_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include <string>


namespace mei {
/** \brief 
 */
class MEI_EXPORT Back : public MeiElement {
    public:
        Back();
        Back(const Back& other);
        virtual ~Back();

/* include <back> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Back);
};

/** \brief 
 */
class MEI_EXPORT Div : public MeiElement {
    public:
        Div();
        Div(const Div& other);
        virtual ~Div();

/* include <div> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Div);
};

/** \brief 
 */
class MEI_EXPORT Front : public MeiElement {
    public:
        Front();
        Front(const Front& other);
        virtual ~Front();

/* include <front> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(Front);
};

/** \brief 
 */
class MEI_EXPORT Head : public MeiElement {
    public:
        Head();
        Head(const Head& other);
        virtual ~Head();

/* include <head> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Head);
};

/** \brief 
 */
class MEI_EXPORT Item : public MeiElement {
    public:
        Item();
        Item(const Item& other);
        virtual ~Item();

/* include <item> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Item);
};

/** \brief 
 */
class MEI_EXPORT L : public MeiElement {
    public:
        L();
        L(const L& other);
        virtual ~L();

/* include <l> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;

    private:
        REGISTER_DECLARATION(L);
};

/** \brief 
 */
class MEI_EXPORT Lg : public MeiElement {
    public:
        Lg();
        Lg(const Lg& other);
        virtual ~Lg();

/* include <lg> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Lg);
};

/** \brief 
 */
class MEI_EXPORT List : public MeiElement {
    public:
        List();
        List(const List& other);
        virtual ~List();
        /** \brief 
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <list> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(List);
};

/** \brief 
 */
class MEI_EXPORT Quote : public MeiElement {
    public:
        Quote();
        Quote(const Quote& other);
        virtual ~Quote();

/* include <quote> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        XyMixIn    m_Xy;

    private:
        REGISTER_DECLARATION(Quote);
};
}
#endif  // TEXT_H_
