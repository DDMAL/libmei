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

#ifndef LINKALIGN_H_
#define LINKALIGN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include <string>


namespace mei {
/** \brief provides a set of ordered points in time which can be linked to elements of a
 *  spoken text to create a temporal alignment of that text.
 */
class MEI_EXPORT Timeline : public MeiElement {
    public:
        Timeline();
        Timeline(const Timeline& other);
        virtual ~Timeline();
        /** \brief holds the identifier of an <avFile> element that references an external digital
         *  media file.
         */
        MeiAttribute* getAvref();
        void setAvref(std::string _avref);
        bool hasAvref();
        void removeAvref();
        /** \brief designates the origin of the timeline, i.e.
         * 
         *  the time at which it begins.
         */
        MeiAttribute* getOrigin();
        void setOrigin(std::string _origin);
        bool hasOrigin();
        void removeOrigin();

/* include <timeline> */


    private:
        REGISTER_DECLARATION(Timeline);
};

/** \brief indicates a point in time either relative to other elements in the same timeline
 *  tag, or absolutely.
 */
class MEI_EXPORT When : public MeiElement {
    public:
        When();
        When(const When& other);
        virtual ~When();
        /** \brief supplies an absolute value for the time.
         */
        MeiAttribute* getAbsolute();
        void setAbsolute(std::string _absolute);
        bool hasAbsolute();
        void removeAbsolute();
        /** \brief specifies the numeric portion of a time interval
         */
        MeiAttribute* getInterval();
        void setInterval(std::string _interval);
        bool hasInterval();
        void removeInterval();
        /** \brief specifies the kind of values used in the interval attribute.
         */
        MeiAttribute* getInttype();
        void setInttype(std::string _inttype);
        bool hasInttype();
        void removeInttype();
        /** \brief identifies the reference point for determining the time of the current
         */
        MeiAttribute* getSince();
        void setSince(std::string _since);
        bool hasSince();
        void removeSince();

/* include <when> */


    private:
        REGISTER_DECLARATION(When);
};
}
#endif  // LINKALIGN_H_
