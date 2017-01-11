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

#ifndef FIGTABLEMIXIN_H_
#define FIGTABLEMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class TabularMixIn {
    public:
        explicit TabularMixIn(MeiElement *b);
        virtual ~TabularMixIn();
        /** \brief The number of columns spanned by this cell.
         */
        MeiAttribute* getColspan();
        void setColspan(std::string _colspan);
        bool hasColspan();
        void removeColspan();
        /** \brief The number of rows spanned by this cell.
         */
        MeiAttribute* getRowspan();
        void setRowspan(std::string _rowspan);
        bool hasRowspan();
        void removeRowspan();

/* include <rowspanmixin> */

    private:
        MeiElement *b;
};
}
#endif  // FIGTABLEMIXIN_H_
