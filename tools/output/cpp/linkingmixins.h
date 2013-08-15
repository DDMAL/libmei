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

#ifndef LINKINGMIXIN_H_
#define LINKINGMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class GlobalLinkingMixIn {
    public:
        explicit GlobalLinkingMixIn(MeiElement *b);
        virtual ~GlobalLinkingMixIn();
        /** \brief points to elements that correspond to the current element in some way.
         */
        MeiAttribute* getCorresp();
        void setCorresp(std::string _corresp);
        bool hasCorresp();
        void removeCorresp();
        /** \brief points to elements that are synchronous with the current element.
         */
        MeiAttribute* getSynch();
        void setSynch(std::string _synch);
        bool hasSynch();
        void removeSynch();
        /** \brief points to an element that is the same as the current element.
         */
        MeiAttribute* getSameAs();
        void setSameAs(std::string _sameAs);
        bool hasSameAs();
        void removeSameAs();
        /** \brief points to an element of which the current element is a copy.
         */
        MeiAttribute* getCopyOf();
        void setCopyOf(std::string _copyOf);
        bool hasCopyOf();
        void removeCopyOf();
        /** \brief points to the next element of a virtual aggregate of which the current element
         *  is part.
         */
        MeiAttribute* getNext();
        void setNext(std::string _next);
        bool hasNext();
        void removeNext();
        /** \brief points to the previous element of a virtual aggregate of which the current
         *  element is part.
         */
        MeiAttribute* getPrev();
        void setPrev(std::string _prev);
        bool hasPrev();
        void removePrev();
        /** \brief points to elements that are in exclusive alternation with the current element.
         */
        MeiAttribute* getExclude();
        void setExclude(std::string _exclude);
        bool hasExclude();
        void removeExclude();
        /** \brief selects one or more alternants; if one alternant is selected, the ambiguity or
         *  uncertainty is marked as resolved.
         * 
         *  If more than one alternant is selected, the degree of ambiguity or uncertainty
         *  is marked as reduced by the number of alternants not selected.
         */
        MeiAttribute* getSelect();
        void setSelect(std::string _select);
        bool hasSelect();
        void removeSelect();

/* include <selectmixin> */

    private:
        MeiElement *b;
};
}
#endif  // LINKINGMIXIN_H_
