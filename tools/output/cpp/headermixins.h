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

#ifndef HEADERMIXIN_H_
#define HEADERMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class PatternReplacementMixIn {
    public:
        explicit PatternReplacementMixIn(MeiElement *b);
        virtual ~PatternReplacementMixIn();
        /** \brief specifies a regular expression against which the values of other attributes can
         *  be matched.
         */
        MeiAttribute* getMatchPattern();
        void setMatchPattern(std::string _matchPattern);
        bool hasMatchPattern();
        void removeMatchPattern();
        /** \brief specifies a
         */
        MeiAttribute* getReplacementPattern();
        void setReplacementPattern(std::string _replacementPattern);
        bool hasReplacementPattern();
        void removeReplacementPattern();

/* include <replacementPatternmixin> */

    private:
        MeiElement *b;
};

class Mei_regularmethodMixIn {
    public:
        explicit Mei_regularmethodMixIn(MeiElement *b);
        virtual ~Mei_regularmethodMixIn();
        /** \brief indicates the method adopted to indicate corrections within the text.
         */
        MeiAttribute* getMethod();
        void setMethod(std::string _method);
        bool hasMethod();
        void removeMethod();

/* include <methodmixin> */

    private:
        MeiElement *b;
};
}
#endif  // HEADERMIXIN_H_
