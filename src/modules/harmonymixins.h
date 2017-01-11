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

#ifndef HARMONYMIXIN_H_
#define HARMONYMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class FretlocationMixIn {
    public:
        explicit FretlocationMixIn(MeiElement *b);
        virtual ~FretlocationMixIn();
        /** \brief Records the location at which a string should be stopped against a fret.
         */
        MeiAttribute* getFret();
        void setFret(std::string _fret);
        bool hasFret();
        void removeFret();

/* include <fretmixin> */

    private:
        MeiElement *b;
};

class HarmLogMixIn {
    public:
        explicit HarmLogMixIn(MeiElement *b);
        virtual ~HarmLogMixIn();
        /** \brief Contains a reference to a <chordDef> element elsewhere in the document.
         */
        MeiAttribute* getChordref();
        void setChordref(std::string _chordref);
        bool hasChordref();
        void removeChordref();

/* include <chordrefmixin> */

    private:
        MeiElement *b;
};

class HarmVisMixIn {
    public:
        explicit HarmVisMixIn(MeiElement *b);
        virtual ~HarmVisMixIn();
        /** \brief Describes how the harmonic indication should be rendered.
         */
        MeiAttribute* getRendgrid();
        void setRendgrid(std::string _rendgrid);
        bool hasRendgrid();
        void removeRendgrid();

/* include <rendgridmixin> */

    private:
        MeiElement *b;
};
}
#endif  // HARMONYMIXIN_H_
