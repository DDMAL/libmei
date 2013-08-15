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

#ifndef FACSIMILE_H_
#define FACSIMILE_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"


namespace mei {
/** \brief contains a representation of some written source in the form of a set of images
 *  rather than as transcribed or encoded text.
 */
class MEI_EXPORT Facsimile : public MeiElement {
    public:
        Facsimile();
        Facsimile(const Facsimile& other);
        virtual ~Facsimile();

/* include <facsimile> */


    private:
        REGISTER_DECLARATION(Facsimile);
};

/** \brief defines a written surface as a two-dimensional coordinate space, optionally
 *  grouping one or more graphic representations of that space, zones of interest
 *  within that space, and transcriptions of the writing within them.
 */
class MEI_EXPORT Surface : public MeiElement {
    public:
        Surface();
        Surface(const Surface& other);
        virtual ~Surface();

/* include <surface> */


    private:
        REGISTER_DECLARATION(Surface);
};

/** \brief defines any two-dimensional area within a
 */
class MEI_EXPORT Zone : public MeiElement {
    public:
        Zone();
        Zone(const Zone& other);
        virtual ~Zone();

/* include <zone> */


    private:
        REGISTER_DECLARATION(Zone);
};
}
#endif  // FACSIMILE_H_
