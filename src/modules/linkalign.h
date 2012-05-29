/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
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
#include "sharedmixins.h"
#include <string>


namespace mei {
/** \brief 
 */
class MEI_EXPORT Timeline : public MeiElement {
    public:
        Timeline();
        Timeline(const Timeline& other);
        virtual ~Timeline();
        /** \brief 
         */
        MeiAttribute* getAvref();
        void setAvref(std::string _avref);
        bool hasAvref();
        void removeAvref();
        /** \brief 
         */
        MeiAttribute* getOrigin();
        void setOrigin(std::string _origin);
        bool hasOrigin();
        void removeOrigin();

/* include <timeline> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(Timeline);
};

/** \brief 
 */
class MEI_EXPORT When : public MeiElement {
    public:
        When();
        When(const When& other);
        virtual ~When();
        /** \brief 
         */
        MeiAttribute* getAbsolute();
        void setAbsolute(std::string _absolute);
        bool hasAbsolute();
        void removeAbsolute();
        /** \brief 
         */
        MeiAttribute* getInterval();
        void setInterval(std::string _interval);
        bool hasInterval();
        void removeInterval();
        /** \brief 
         */
        MeiAttribute* getInttype();
        void setInttype(std::string _inttype);
        bool hasInttype();
        void removeInttype();
        /** \brief 
         */
        MeiAttribute* getSince();
        void setSince(std::string _since);
        bool hasSince();
        void removeSince();

/* include <when> */

        CommonMixIn    m_Common;
        DatapointingMixIn    m_Datapointing;

    private:
        REGISTER_DECLARATION(When);
};
}
#endif  // LINKALIGN_H_
