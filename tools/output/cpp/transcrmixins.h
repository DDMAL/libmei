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

#ifndef TRANSCRMIXIN_H_
#define TRANSCRMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class CoordinatedMixIn {
    public:
        explicit CoordinatedMixIn(MeiElement *b);
        virtual ~CoordinatedMixIn();
        /** \brief indicates the location within a temporal alignment at which this element begins.
         */
        MeiAttribute* getStart();
        void setStart(std::string _start);
        bool hasStart();
        void removeStart();
        /** \brief gives the x coordinate value for the upper left corner of a rectangular space.
         */
        MeiAttribute* getUlx();
        void setUlx(std::string _ulx);
        bool hasUlx();
        void removeUlx();
        /** \brief gives the y coordinate value for the upper left corner of a rectangular space.
         */
        MeiAttribute* getUly();
        void setUly(std::string _uly);
        bool hasUly();
        void removeUly();
        /** \brief gives the x coordinate value for the lower right corner of a rectangular space.
         */
        MeiAttribute* getLrx();
        void setLrx(std::string _lrx);
        bool hasLrx();
        void removeLrx();
        /** \brief gives the y coordinate value for the lower right corner of a rectangular space.
         */
        MeiAttribute* getLry();
        void setLry(std::string _lry);
        bool hasLry();
        void removeLry();

/* include <lrymixin> */

    private:
        MeiElement *b;
};

class GlobalChangeMixIn {
    public:
        explicit GlobalChangeMixIn(MeiElement *b);
        virtual ~GlobalChangeMixIn();
        /** \brief points to one or more
         */
        MeiAttribute* getChange();
        void setChange(std::string _change);
        bool hasChange();
        void removeChange();

/* include <changemixin> */

    private:
        MeiElement *b;
};

class GlobalFacsMixIn {
    public:
        explicit GlobalFacsMixIn(MeiElement *b);
        virtual ~GlobalFacsMixIn();
        /** \brief points to all or part of an image which corresponds with the content of the
         *  element.
         */
        MeiAttribute* getFacs();
        void setFacs(std::string _facs);
        bool hasFacs();
        void removeFacs();

/* include <facsmixin> */

    private:
        MeiElement *b;
};
}
#endif  // TRANSCRMIXIN_H_
