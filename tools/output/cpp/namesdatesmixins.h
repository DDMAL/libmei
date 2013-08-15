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

#ifndef NAMESDATESMIXIN_H_
#define NAMESDATESMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class DatableCustomMixIn {
    public:
        explicit DatableCustomMixIn(MeiElement *b);
        virtual ~DatableCustomMixIn();
        /** \brief supplies the value of a date or time in some standard form.
         */
        MeiAttribute* getWhen-custom();
        void setWhen-custom(std::string _when-custom);
        bool hasWhen-custom();
        void removeWhen-custom();
        /** \brief specifies the earliest possible date for the event in some custom standard form.
         */
        MeiAttribute* getNotBefore-custom();
        void setNotBefore-custom(std::string _notBefore-custom);
        bool hasNotBefore-custom();
        void removeNotBefore-custom();
        /** \brief specifies the latest possible date for the event in some custom standard form.
         */
        MeiAttribute* getNotAfter-custom();
        void setNotAfter-custom(std::string _notAfter-custom);
        bool hasNotAfter-custom();
        void removeNotAfter-custom();
        /** \brief indicates the starting point of the period in some standard form.
         */
        MeiAttribute* getFrom-custom();
        void setFrom-custom(std::string _from-custom);
        bool hasFrom-custom();
        void removeFrom-custom();
        /** \brief indicates the ending point of the period in some standard form.
         */
        MeiAttribute* getTo-custom();
        void setTo-custom(std::string _to-custom);
        bool hasTo-custom();
        void removeTo-custom();
        /** \brief supplies a pointer to some location defining a named point in time with
         *  reference to which the datable item is understood to have occurred
         */
        MeiAttribute* getDatingPoint();
        void setDatingPoint(std::string _datingPoint);
        bool hasDatingPoint();
        void removeDatingPoint();
        /** \brief supplies a pointer to a
         */
        MeiAttribute* getDatingMethod();
        void setDatingMethod(std::string _datingMethod);
        bool hasDatingMethod();
        void removeDatingMethod();

/* include <datingMethodmixin> */

    private:
        MeiElement *b;
};

class DatableIsoMixIn {
    public:
        explicit DatableIsoMixIn(MeiElement *b);
        virtual ~DatableIsoMixIn();
        /** \brief supplies the value of a date or time in a standard form.
         */
        MeiAttribute* getWhen-iso();
        void setWhen-iso(std::string _when-iso);
        bool hasWhen-iso();
        void removeWhen-iso();
        /** \brief specifies the earliest possible date for the event in standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getNotBefore-iso();
        void setNotBefore-iso(std::string _notBefore-iso);
        bool hasNotBefore-iso();
        void removeNotBefore-iso();
        /** \brief specifies the latest possible date for the event in standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getNotAfter-iso();
        void setNotAfter-iso(std::string _notAfter-iso);
        bool hasNotAfter-iso();
        void removeNotAfter-iso();
        /** \brief indicates the starting point of the period in standard form.
         */
        MeiAttribute* getFrom-iso();
        void setFrom-iso(std::string _from-iso);
        bool hasFrom-iso();
        void removeFrom-iso();
        /** \brief indicates the ending point of the period in standard form.
         */
        MeiAttribute* getTo-iso();
        void setTo-iso(std::string _to-iso);
        bool hasTo-iso();
        void removeTo-iso();

/* include <to-isomixin> */

    private:
        MeiElement *b;
};
}
#endif  // NAMESDATESMIXIN_H_
