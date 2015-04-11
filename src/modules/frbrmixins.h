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

#ifndef FRBRMIXIN_H_
#define FRBRMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class RelMixIn {
    public:
        explicit RelMixIn(MeiElement *b);
        virtual ~RelMixIn();
        /** \brief describes the relationship between the <relatedItem> and the resource described
         *  in the parent element, i.e., <bibl>, <source> or <relatedItem>.
         * 
         *  The values are based on MODS version 3.4. The subject of these relations is
         *  always the <relatedItem>, and the object is always the parent of the
         *  <relatedItem>. "preceding" and "succeeding" indicate temporal order.
         */
        MeiAttribute* getRel();
        void setRel(std::string _rel);
        bool hasRel();
        void removeRel();

/* include <relmixin> */

    private:
        MeiElement *b;
};
}
#endif  // FRBRMIXIN_H_
