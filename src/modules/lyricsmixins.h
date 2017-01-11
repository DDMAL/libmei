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

#ifndef LYRICSMIXIN_H_
#define LYRICSMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class VerseLogMixIn {
    public:
        explicit VerseLogMixIn(MeiElement *b);
        virtual ~VerseLogMixIn();
        /** \brief Used to indicate a common, usually centered, refrain.
         */
        MeiAttribute* getRefrain();
        void setRefrain(std::string _refrain);
        bool hasRefrain();
        void removeRefrain();
        /** \brief Used to specify a rhythm for the lyric syllables that differs from that of the
         *  notes on the staff, e.g.
         * 
         *  '4,4,4,4' when the rhythm of the notes is '4.,8,4.,8'.
         */
        MeiAttribute* getRhythm();
        void setRhythm(std::string _rhythm);
        bool hasRhythm();
        void removeRhythm();

/* include <rhythmmixin> */

    private:
        MeiElement *b;
};
}
#endif  // LYRICSMIXIN_H_
