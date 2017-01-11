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

#ifndef EXTERNALSYMBOLSMIXIN_H_
#define EXTERNALSYMBOLSMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class ExtsymMixIn {
    public:
        explicit ExtsymMixIn(MeiElement *b);
        virtual ~ExtsymMixIn();
        /** \brief Glyph name.
         */
        MeiAttribute* getGlyphname();
        void setGlyphname(std::string _glyphname);
        bool hasGlyphname();
        void removeGlyphname();
        /** \brief Numeric glyph reference in hexadecimal notation, e.g.
         * 
         *  "#xE000" or "U+E000". N.B. SMuFL version 1.18 uses the range U+E000 - U+ECBF.
         */
        MeiAttribute* getGlyphnum();
        void setGlyphnum(std::string _glyphnum);
        bool hasGlyphnum();
        void removeGlyphnum();

/* include <glyphnummixin> */

    private:
        MeiElement *b;
};
}
#endif  // EXTERNALSYMBOLSMIXIN_H_
