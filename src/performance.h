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
    
#ifndef PERFORMANCE_H_
#define PERFORMANCE_H_

#include "facsimilemixins.h"
#include "sharedmixins.h"
using namespace std;
/** \brief  performance ― Groups one or more recorded performances.
 *
 * The decls attribute may be used to link the collection with a particular source          
 *          described in the header. This element is analogous to the <facsimile> element in          
 *          the facsimile module..
 */
struct Performance : public BaseMeiElement{
    Performance();
    virtual ~Performance() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    private:
        //REGISTER_DECLARATION(Performance);
};

/** \brief  recording ― Defines a performance in terms of a group of one or more digital
 *          audio or video representations.
 *
 * The startid attribute may be used to hold a reference to the first feature          
 *          occurring in this performance. This element is analogous to the <surface>          
 *          element in the facsimile module..
 */
struct Recording : public BaseMeiElement{
    Recording();
    virtual ~Recording() {};

    string getBeginValue() throw (AttributeNotFoundException);

    MeiAttribute* getBegin() throw (AttributeNotFoundException);
    void setBegin(string _begin);
    bool hasBegin();

    string getEndValue() throw (AttributeNotFoundException);

    MeiAttribute* getEnd() throw (AttributeNotFoundException);
    void setEnd(string _end);
    bool hasEnd();

    string getBetypeValue() throw (AttributeNotFoundException);

    MeiAttribute* getBetype() throw (AttributeNotFoundException);
    void setBetype(string _betype);
    bool hasBetype();

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    StartidMixIn    m_Startid;
    StartendidMixIn    m_Startendid;
    private:
        //REGISTER_DECLARATION(Recording);
};

/** \brief  clip ― Defines a time segment of interest within a digital audio or video
 *          recording.
 *
 * This element is analogous to the <zone> element in the facsimile module..
 */
struct Clip : public BaseMeiElement{
    Clip();
    virtual ~Clip() {};

    string getBeginValue() throw (AttributeNotFoundException);

    MeiAttribute* getBegin() throw (AttributeNotFoundException);
    void setBegin(string _begin);
    bool hasBegin();

    string getEndValue() throw (AttributeNotFoundException);

    MeiAttribute* getEnd() throw (AttributeNotFoundException);
    void setEnd(string _end);
    bool hasEnd();

    string getBetypeValue() throw (AttributeNotFoundException);

    MeiAttribute* getBetype() throw (AttributeNotFoundException);
    void setBetype(string _betype);
    bool hasBetype();

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    StartidMixIn    m_Startid;
    StartendidMixIn    m_Startendid;
    private:
        //REGISTER_DECLARATION(Clip);
};

/** \brief  avFile ― References an external digital audio or video file.
 *
 * This element is analogous to the <graphic> element in the figtable module..
 */
struct AvFile : public BaseMeiElement{
    AvFile();
    virtual ~AvFile() {};

    CommonMixIn    m_Common;
    DeclaringMixIn    m_Declaring;
    InternetmediaMixIn    m_Internetmedia;
    LinkExternalMixIn    m_LinkExternal;
    TypedMixIn    m_Typed;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(AvFile);
};

#endif // PERFORMANCE_H_