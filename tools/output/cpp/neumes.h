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

#ifndef NEUMES_H_
#define NEUMES_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"


namespace mei {
/** \brief (interrupted neume) – a graphically interrupted neume; that is, a neume which
 *  is logically a single entity but is written using multiple signs.
 */
class MEI_EXPORT Ineume : public MeiElement {
    public:
        Ineume();
        Ineume(const Ineume& other);
        virtual ~Ineume();

/* include <ineume> */


    private:
        REGISTER_DECLARATION(Ineume);
};

/** \brief – Neume notation can be thought of as "neumed text".
 * 
 *  Therefore, the syllable element provides high-level organization in this
 *  repertoire.
 */
class MEI_EXPORT Syllable : public MeiElement {
    public:
        Syllable();
        Syllable(const Syllable& other);
        virtual ~Syllable();

/* include <syllable> */


    private:
        REGISTER_DECLARATION(Syllable);
};

/** \brief (uninterrupted neume) – A graphically-uninterrupted neume sign.
 */
class MEI_EXPORT Uneume : public MeiElement {
    public:
        Uneume();
        Uneume(const Uneume& other);
        virtual ~Uneume();

/* include <uneume> */


    private:
        REGISTER_DECLARATION(Uneume);
};
}
#endif  // NEUMES_H_
