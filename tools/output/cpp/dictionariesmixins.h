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

#ifndef DICTIONARIESMIXIN_H_
#define DICTIONARIESMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class EntryLikeMixIn {
    public:
        explicit EntryLikeMixIn(MeiElement *b);
        virtual ~EntryLikeMixIn();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <typemixin> */

    private:
        MeiElement *b;
};

class LexicographicMixIn {
    public:
        explicit LexicographicMixIn(MeiElement *b);
        virtual ~LexicographicMixIn();
        /** \brief gives an expanded form of information presented more concisely in the dictionary
         */
        MeiAttribute* getExpand();
        void setExpand(std::string _expand);
        bool hasExpand();
        void removeExpand();
        /** \brief gives a normalized form of information given by the source text in a non-
         *  normalized form
         */
        MeiAttribute* getNorm();
        void setNorm(std::string _norm);
        bool hasNorm();
        void removeNorm();
        /** \brief gives the list of split values for a merged form
         */
        MeiAttribute* getSplit();
        void setSplit(std::string _split);
        bool hasSplit();
        void removeSplit();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();
        /** \brief gives the original string or is the empty string when the element does not
         *  appear in the source text.
         */
        MeiAttribute* getOrig();
        void setOrig(std::string _orig);
        bool hasOrig();
        void removeOrig();
        /** \brief provides a reference to an
         */
        MeiAttribute* getLocation();
        void setLocation(std::string _location);
        bool hasLocation();
        void removeLocation();
        /** \brief gives a reference to another element, where the original appears as a merged
         *  form.
         */
        MeiAttribute* getMergedIn();
        void setMergedIn(std::string _mergedIn);
        bool hasMergedIn();
        void removeMergedIn();
        /** \brief indicates whether the element is optional or not
         */
        MeiAttribute* getOpt();
        void setOpt(std::string _opt);
        bool hasOpt();
        void removeOpt();

/* include <optmixin> */

    private:
        MeiElement *b;
};
}
#endif  // DICTIONARIESMIXIN_H_
