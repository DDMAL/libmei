/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani
    
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

#ifndef PERFORMANCE_H_
#define PERFORMANCE_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include <string>


namespace mei {
/** \brief avFile ― References an external digital audio or video file.
 * 
 *  This element is analogous to the <graphic> element in the figtable module.
 */
class MEI_EXPORT AvFile : public MeiElement {
    public:
        AvFile();
        AvFile(const AvFile& other);
        virtual ~AvFile();

/* include <avFile> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        InternetmediaMixIn    m_Internetmedia;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AvFile);
};

/** \brief clip ― Defines a time segment of interest within a digital audio or video
 *  recording.
 * 
 *  This element is analogous to the <zone> element in the facsimile module.
 */
class MEI_EXPORT Clip : public MeiElement {
    public:
        Clip();
        Clip(const Clip& other);
        virtual ~Clip();
        /** \brief indication of the absolute start time.
         */
        MeiAttribute* getBegin();
        void setBegin(std::string _begin);
        bool hasBegin();
        void removeBegin();
        /** \brief indication of the absolute end time.
         */
        MeiAttribute* getEnd();
        void setEnd(std::string _end);
        bool hasEnd();
        void removeEnd();
        /** \brief type of values used in the begin/end attributes.
         * 
         *  The begin and end attributes can only be interpreted meaningfully in conjunction
         *  with this attribute.
         */
        MeiAttribute* getBetype();
        void setBetype(std::string _betype);
        bool hasBetype();
        void removeBetype();

/* include <clip> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        StartidMixIn    m_Startid;

    private:
        REGISTER_DECLARATION(Clip);
};

/** \brief performance ― Groups one or more recorded performances.
 * 
 *  The decls attribute may be used to link the collection with a particular source
 *  described in the header. This element is analogous to the <facsimile> element in
 *  the facsimile module.
 */
class MEI_EXPORT Performance : public MeiElement {
    public:
        Performance();
        Performance(const Performance& other);
        virtual ~Performance();

/* include <performance> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Performance);
};

/** \brief recording ― Defines a performance in terms of a group of one or more digital
 *  audio or video representations.
 * 
 *  The startid attribute may be used to hold a reference to the first feature
 *  occurring in this performance. This element is analogous to the <surface>
 *  element in the facsimile module.
 */
class MEI_EXPORT Recording : public MeiElement {
    public:
        Recording();
        Recording(const Recording& other);
        virtual ~Recording();
        /** \brief indication of the absolute start time.
         */
        MeiAttribute* getBegin();
        void setBegin(std::string _begin);
        bool hasBegin();
        void removeBegin();
        /** \brief indication of the absolute end time.
         */
        MeiAttribute* getEnd();
        void setEnd(std::string _end);
        bool hasEnd();
        void removeEnd();
        /** \brief type of values used in the begin/end attributes.
         * 
         *  The begin and end attributes can only be interpreted meaningfully in conjunction
         *  with this attribute.
         */
        MeiAttribute* getBetype();
        void setBetype(std::string _betype);
        bool hasBetype();
        void removeBetype();

/* include <recording> */

        CommonMixIn    m_Common;
        DeclaringMixIn    m_Declaring;
        StartidMixIn    m_Startid;

    private:
        REGISTER_DECLARATION(Recording);
};
}
#endif  // PERFORMANCE_H_
