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

#ifndef TEXTCRITMIXIN_H_
#define TEXTCRITMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class RdgPartMixIn {
    public:
        explicit RdgPartMixIn(MeiElement *b);
        virtual ~RdgPartMixIn();
        /** \brief indicates the sigil or sigla for the witnesses to which the detail refers.
         */
        MeiAttribute* getWit();
        void setWit(std::string _wit);
        bool hasWit();
        void removeWit();

/* include <witmixin> */

    private:
        MeiElement *b;
};

class TextCriticalMixIn {
    public:
        explicit TextCriticalMixIn(MeiElement *b);
        virtual ~TextCriticalMixIn();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief documents the presumed cause for the intervention.
         */
        MeiAttribute* getCause();
        void setCause(std::string _cause);
        bool hasCause();
        void removeCause();
        /** \brief provides a number indicating the position of this reading in a sequence, when
         *  there is reason to presume a sequence to the variants on any one lemma.
         */
        MeiAttribute* getVarSeq();
        void setVarSeq(std::string _varSeq);
        bool hasVarSeq();
        void removeVarSeq();
        /** \brief in the case of damage (deliberate defacement, inking out, etc.) assignable to a
         *  distinct hand, signifies the hand responsible for the damage.
         */
        MeiAttribute* getHand();
        void setHand(std::string _hand);
        bool hasHand();
        void removeHand();

/* include <handmixin> */

    private:
        MeiElement *b;
};

class WitnessedMixIn {
    public:
        explicit WitnessedMixIn(MeiElement *b);
        virtual ~WitnessedMixIn();
        /** \brief indicates the sigil or sigla for the witnesses to which the detail refers.
         */
        MeiAttribute* getWit();
        void setWit(std::string _wit);
        bool hasWit();
        void removeWit();

/* include <witmixin> */

    private:
        MeiElement *b;
};
}
#endif  // TEXTCRITMIXIN_H_
