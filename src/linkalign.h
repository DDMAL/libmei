/*
    Copyright (c) 2011 Jamie Klassen, Alastair Porter, Mahtab Ghamsari-Esfahani, Andrew Hankinson

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

#include "sharedmixins.h"
using namespace std;
/** \brief  timeline ― Provides a set of ordered points in time to which musical elements
 *          can be linked in order to create a temporal alignment of those
 *          elements.
 *
 * The origin attribute designates the origin of the timeline, i.e., the time at          
 *          which it begins. It must point to one of the when elements in its content. The          
 *          avref attribute is provided in order to link the timeline to a particular          
 *          external media file, such as an audio file. This element is modelled on an          
 *          element in the Text Encoding Initiative (TEI)..
 */
struct Timeline : public BaseMeiElement{
    Timeline();
    virtual ~Timeline() {};

    string getAvrefValue() throw (AttributeNotFoundException);

    MeiAttribute* getAvref() throw (AttributeNotFoundException);
    void setAvref(string _avref);
    bool hasAvref();

    string getOriginValue() throw (AttributeNotFoundException);

    MeiAttribute* getOrigin() throw (AttributeNotFoundException);
    void setOrigin(string _origin);
    bool hasOrigin();

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Timeline);
};

/** \brief  when ― Indicates a point in time either absolutely (using the absolute
 *          attribute), or relative to other elements in the same timeline element
 *          (using the interval and since attributes).
 *
 * The data attribute may be used to reference one or more features that occur at          
 *          this point in time. This element is modelled on an element in the Text Encoding          
 *          Initiative (TEI)..
 */
struct When : public BaseMeiElement{
    When();
    virtual ~When() {};

    string getAbsoluteValue() throw (AttributeNotFoundException);

    MeiAttribute* getAbsolute() throw (AttributeNotFoundException);
    void setAbsolute(string _absolute);
    bool hasAbsolute();

    string getIntervalValue() throw (AttributeNotFoundException);

    MeiAttribute* getInterval() throw (AttributeNotFoundException);
    void setInterval(string _interval);
    bool hasInterval();

    string getInttypeValue() throw (AttributeNotFoundException);

    MeiAttribute* getInttype() throw (AttributeNotFoundException);
    void setInttype(string _inttype);
    bool hasInttype();

    string getSinceValue() throw (AttributeNotFoundException);

    MeiAttribute* getSince() throw (AttributeNotFoundException);
    void setSince(string _since);
    bool hasSince();

    CommonMixIn    m_Common;
    DatapointingMixIn    m_Datapointing;
    private:
        //REGISTER_DECLARATION(When);
};

#endif // LINKALIGN_H_