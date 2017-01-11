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

#ifndef CRITAPPMIXIN_H_
#define CRITAPPMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class CritMixIn {
    public:
        explicit CritMixIn(MeiElement *b);
        virtual ~CritMixIn();
        /** \brief Classifies the cause for the variant reading, according to any appropriate
         *  typology of possible origins.
         */
        MeiAttribute* getCause();
        void setCause(std::string _cause);
        bool hasCause();
        void removeCause();

/* include <causemixin> */

    private:
        MeiElement *b;
};

class SourceMixIn {
    public:
        explicit SourceMixIn(MeiElement *b);
        virtual ~SourceMixIn();
        /** \brief Contains a list of one or more pointers indicating the sources which attest to a
         *  given reading.
         * 
         *  Each value should correspond to the ID of a <source> element located in the
         *  document header.
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
