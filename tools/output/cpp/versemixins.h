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

#ifndef VERSEMIXIN_H_
#define VERSEMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class EnjambMixIn {
    public:
        explicit EnjambMixIn(MeiElement *b);
        virtual ~EnjambMixIn();
        /** \brief indicates that the end of a verse line is marked by enjambement.
         */
        MeiAttribute* getEnjamb();
        void setEnjamb(std::string _enjamb);
        bool hasEnjamb();
        void removeEnjamb();

/* include <enjambmixin> */

    private:
        MeiElement *b;
};

class MetricalMixIn {
    public:
        explicit MetricalMixIn(MeiElement *b);
        virtual ~MetricalMixIn();
        /** \brief contains a user-specified encoding for the conventional metrical structure of
         *  the element.
         */
        MeiAttribute* getMet();
        void setMet(std::string _met);
        bool hasMet();
        void removeMet();
        /** \brief contains a user-specified encoding for the actual realization of the
         *  conventional metrical structure applicable to the element.
         */
        MeiAttribute* getReal();
        void setReal(std::string _real);
        bool hasReal();
        void removeReal();
        /** \brief specifies the rhyme scheme applicable to a group of verse lines.
         */
        MeiAttribute* getRhyme();
        void setRhyme(std::string _rhyme);
        bool hasRhyme();
        void removeRhyme();

/* include <rhymemixin> */

    private:
        MeiElement *b;
};
}
#endif  // VERSEMIXIN_H_
