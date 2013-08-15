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

#ifndef TEXT_H_
#define TEXT_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include <string>


namespace mei {
/** \brief contains any appendixes, etc.
 * 
 *  following the main part of a text.
 */
class MEI_EXPORT Back : public MeiElement {
    public:
        Back();
        Back(const Back& other);
        virtual ~Back();

/* include <back> */


    private:
        REGISTER_DECLARATION(Back);
};

/** \brief contains a subdivision of the front, body, or back of a text.
 */
class MEI_EXPORT Div : public MeiElement {
    public:
        Div();
        Div(const Div& other);
        virtual ~Div();

/* include <div> */


    private:
        REGISTER_DECLARATION(Div);
};

/** \brief contains any prefatory matter (headers, title page, prefaces, dedications, etc.)
 *  found at the start of a document, before the main body.
 */
class MEI_EXPORT Front : public MeiElement {
    public:
        Front();
        Front(const Front& other);
        virtual ~Front();

/* include <front> */


    private:
        REGISTER_DECLARATION(Front);
};

/** \brief contains any type of heading, for example the title of a section, or the heading
 *  of a list, glossary, manuscript description, etc.
 */
class MEI_EXPORT Head : public MeiElement {
    public:
        Head();
        Head(const Head& other);
        virtual ~Head();

/* include <head> */


    private:
        REGISTER_DECLARATION(Head);
};

/** \brief contains one component of a list.
 */
class MEI_EXPORT Item : public MeiElement {
    public:
        Item();
        Item(const Item& other);
        virtual ~Item();

/* include <item> */


    private:
        REGISTER_DECLARATION(Item);
};

/** \brief contains a single, possibly incomplete, line of verse.
 */
class MEI_EXPORT L : public MeiElement {
    public:
        L();
        L(const L& other);
        virtual ~L();

/* include <l> */


    private:
        REGISTER_DECLARATION(L);
};

/** \brief contains one or more verse lines functioning as a formal unit, e.g.
 * 
 *  a stanza, refrain, verse paragraph, etc.
 */
class MEI_EXPORT Lg : public MeiElement {
    public:
        Lg();
        Lg(const Lg& other);
        virtual ~Lg();

/* include <lg> */


    private:
        REGISTER_DECLARATION(Lg);
};

/** \brief contains any sequence of items organized as a list.
 */
class MEI_EXPORT List : public MeiElement {
    public:
        List();
        List(const List& other);
        virtual ~List();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <list> */


    private:
        REGISTER_DECLARATION(List);
};

/** \brief contains a phrase or passage attributed by the narrator or author to some agency
 *  external to the text.
 */
class MEI_EXPORT Quote : public MeiElement {
    public:
        Quote();
        Quote(const Quote& other);
        virtual ~Quote();

/* include <quote> */


    private:
        REGISTER_DECLARATION(Quote);
};
}
#endif  // TEXT_H_
