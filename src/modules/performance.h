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

#ifndef PERFORMANCE_H_
#define PERFORMANCE_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include <string>


namespace mei {
/** \brief (audio/video file) – References an external digital audio or video file.
 */
class MEI_EXPORT AvFile : public MeiElement {
    public:
        AvFile();
        AvFile(const AvFile& other);
        virtual ~AvFile();

/* include <avFile> */

        BiblMixIn    m_Bibl;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DeclaringMixIn    m_Declaring;
        InternetmediaMixIn    m_Internetmedia;
        FacsimileMixIn    m_Facsimile;
        PointingMixIn    m_Pointing;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AvFile);
};

/** \brief Defines a time segment of interest within a recording or within a digital audio
 *  or video file.
 */
class MEI_EXPORT Clip : public MeiElement {
    public:
        Clip();
        Clip(const Clip& other);
        virtual ~Clip();

/* include <clip> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DatapointingMixIn    m_Datapointing;
        DeclaringMixIn    m_Declaring;
        MediaboundsMixIn    m_Mediabounds;
        StartidMixIn    m_Startid;

    private:
        REGISTER_DECLARATION(Clip);
};

/** \brief A presentation of one or more musical works.
 */
class MEI_EXPORT Performance : public MeiElement {
    public:
        Performance();
        Performance(const Performance& other);
        virtual ~Performance();

/* include <performance> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Performance);
};

/** \brief A recorded performance.
 */
class MEI_EXPORT Recording : public MeiElement {
    public:
        Recording();
        Recording(const Recording& other);
        virtual ~Recording();

/* include <recording> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DatapointingMixIn    m_Datapointing;
        DeclaringMixIn    m_Declaring;
        MediaboundsMixIn    m_Mediabounds;
        StartidMixIn    m_Startid;

    private:
        REGISTER_DECLARATION(Recording);
};

/** \brief Indicates a point in time either absolutely (using the absolute attribute), or
 *  relative to another when element (using the since, interval and inttype
 *  attributes).
 */
class MEI_EXPORT When : public MeiElement {
    public:
        When();
        When(const When& other);
        virtual ~When();
        /** \brief Provides an absolute value for the time point.
         */
        MeiAttribute* getAbsolute();
        void setAbsolute(std::string _absolute);
        bool hasAbsolute();
        void removeAbsolute();
        /** \brief Specifies the time interval between this time point and the one designated by
         *  the since attribute.
         * 
         *  This attribute can only be interpreted meaningfully in conjunction with the
         *  inttype attribute.
         */
        MeiAttribute* getInterval();
        void setInterval(std::string _interval);
        bool hasInterval();
        void removeInterval();
        /** \brief Specifies the kind of values used in the absolute attribute.
         */
        MeiAttribute* getAbstype();
        void setAbstype(std::string _abstype);
        bool hasAbstype();
        void removeAbstype();
        /** \brief Specifies the kind of values used in the interval attribute.
         */
        MeiAttribute* getInttype();
        void setInttype(std::string _inttype);
        bool hasInttype();
        void removeInttype();
        /** \brief Identifies the reference point for determining the time of the current when
         *  element, which is obtained by adding the interval to the time of the reference
         *  point.
         * 
         *  The value should be the ID of another when element within the same parent
         *  element. If the since attribute is omitted and the absolute attribute is not
         *  specified, then the reference point is understood to be the immediately
         *  preceding when element.
         */
        MeiAttribute* getSince();
        void setSince(std::string _since);
        bool hasSince();
        void removeSince();

/* include <when> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        DatapointingMixIn    m_Datapointing;

    private:
        REGISTER_DECLARATION(When);
};
}
#endif  // PERFORMANCE_H_
