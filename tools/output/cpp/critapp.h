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

#ifndef CRITAPP_H_
#define CRITAPP_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"


namespace mei {
/** \brief contains one entry in a critical apparatus, with an optional lemma and usually
 *  one or more reading or a note on the relevant passage.
 */
class MEI_EXPORT App : public MeiElement {
    public:
        App();
        App(const App& other);
        virtual ~App();

/* include <app> */


    private:
        REGISTER_DECLARATION(App);
};

/** \brief contains the lemma, or base text, of a textual variation.
 */
class MEI_EXPORT Lem : public MeiElement {
    public:
        Lem();
        Lem(const Lem& other);
        virtual ~Lem();

/* include <lem> */


    private:
        REGISTER_DECLARATION(Lem);
};

/** \brief contains a single reading within a textual variation.
 */
class MEI_EXPORT Rdg : public MeiElement {
    public:
        Rdg();
        Rdg(const Rdg& other);
        virtual ~Rdg();

/* include <rdg> */


    private:
        REGISTER_DECLARATION(Rdg);
};
}
#endif  // CRITAPP_H_
