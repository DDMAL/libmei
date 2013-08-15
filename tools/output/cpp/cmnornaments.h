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

#ifndef CMNORNAMENTS_H_
#define CMNORNAMENTS_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"


namespace mei {
/** \brief – An ornament indicating rapid alternation of the main note with a secondary
 *  note, usually a step below, but sometimes a step above.
 */
class MEI_EXPORT Mordent : public MeiElement {
    public:
        Mordent();
        Mordent(const Mordent& other);
        virtual ~Mordent();

/* include <mordent> */


    private:
        REGISTER_DECLARATION(Mordent);
};

/** \brief – Rapid alternation of a note with one (usually at the interval of a second)
 *  above.
 */
class MEI_EXPORT Trill : public MeiElement {
    public:
        Trill();
        Trill(const Trill& other);
        virtual ~Trill();

/* include <trill> */


    private:
        REGISTER_DECLARATION(Trill);
};

/** \brief – An ornament consisting of four notes — the upper neighbor of the written
 *  note, the written note, the lower neighbor, and the written note.
 */
class MEI_EXPORT Turn : public MeiElement {
    public:
        Turn();
        Turn(const Turn& other);
        virtual ~Turn();

/* include <turn> */


    private:
        REGISTER_DECLARATION(Turn);
};
}
#endif  // CMNORNAMENTS_H_
