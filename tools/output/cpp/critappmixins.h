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

#ifndef CRITAPPMIXIN_H_
#define CRITAPPMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class Mei_critMixIn {
    public:
        explicit Mei_critMixIn(MeiElement *b);
        virtual ~Mei_critMixIn();
        /** \brief documents the presumed cause for the intervention.
         */
        MeiAttribute* getCause();
        void setCause(std::string _cause);
        bool hasCause();
        void removeCause();

/* include <causemixin> */

    private:
        MeiElement *b;
};

class Mei_sourceMixIn {
    public:
        explicit Mei_sourceMixIn(MeiElement *b);
        virtual ~Mei_sourceMixIn();
        /** \brief contains a list of one or more pointers indicating sources supporting the given
         *  intervention or interpretation.
         */
        MeiAttribute* getSource();
        void setSource(std::string _source);
        bool hasSource();
        void removeSource();

/* include <sourcemixin> */

    private:
        MeiElement *b;
};
}
#endif  // CRITAPPMIXIN_H_
