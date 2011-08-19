
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

#ifndef LINKALIGN_H_
#define LINKALIGN_H_

#include "meielement.h"
#include "exceptions.h"
#include "mei.h"
#include "sharedmixins.h"


namespace mei {
    
/** \brief   timeline ― Provides a set of ordered points in time to which musical elements
    * can be linked in order to create a temporal alignment of those elements. The
    * origin attribute designates the origin of the timeline, i.e., the time at which
    * it begins. It must point to one of the when elements in its content. The avref
    * attribute is provided in order to link the timeline to a particular external
    * media file, such as an audio file. This element is modelled on an element in the
    * Text Encoding Initiative (TEI).
    */

class MEI_EXPORT Timeline : public MeiElement {
    public:
        Timeline();
        virtual ~Timeline();
        
    /** \brief   holds the xml:id of an <avFile> element that references an external digital
    * media.
    */
    MeiAttribute* getAvref();
    void setAvref(std::string _avref);
    bool hasAvref();
    void removeAvref();

    /** \brief   designates the origin of the timeline, i.e. the <when> element associated with
    * the beginning of the timeline.
    */
    MeiAttribute* getOrigin();
    void setOrigin(std::string _origin);
    bool hasOrigin();
    void removeOrigin();

        
    CommonMixIn    m_Common;
    private:
        REGISTER_DECLARATION(Timeline);
};

/** \brief   when ― Indicates a point in time either absolutely (using the absolute
    * attribute), or relative to other elements in the same timeline element (using
    * the interval and since attributes). The data attribute may be used to reference
    * one or more features that occur at this point in time. This element is modelled
    * on an element in the Text Encoding Initiative (TEI).
    */

class MEI_EXPORT When : public MeiElement {
    public:
        When();
        virtual ~When();
        
    /** \brief   provides an absolute value for the time associated with a point on a timeline.
    * This attribute is required for the element designated as the origin by the
    * parent timeline.
    */
    MeiAttribute* getAbsolute();
    void setAbsolute(std::string _absolute);
    bool hasAbsolute();
    void removeAbsolute();

    /** \brief   specifies the time interval between this time point and the one designated by
    * the since attribute. This attribute can only be interpreted meaningfully in
    * conjunction with the inttype attribute.
    */
    MeiAttribute* getInterval();
    void setInterval(std::string _interval);
    bool hasInterval();
    void removeInterval();

    /** \brief   specifies the kind of values used in the interval attribute.
    */
    MeiAttribute* getInttype();
    void setInttype(std::string _inttype);
    bool hasInttype();
    void removeInttype();

    /** \brief   identifies the reference point for determining the time of the current when
    * element, which is obtained by adding the interval to the time of the reference
    * point. The value should be the ID of another when element in the same timeline.
    * If the since attribute is omitted and the absolute attribute is not specified,
    * then the reference point is understood to be the immediately preceding when
    * element.
    */
    MeiAttribute* getSince();
    void setSince(std::string _since);
    bool hasSince();
    void removeSince();

        
    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        REGISTER_DECLARATION(When);
};

}
#endif // LINKALIGN_H_
