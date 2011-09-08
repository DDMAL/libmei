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

#ifndef PTRREF_H_
#define PTRREF_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
#include "mei.h"
#include "sharedmixins.h"


namespace mei {
/** \brief pointer ― Defines a pointer to another location.
 * 
 *  Unlike the <ref> element, <ptr> cannot contain text or sub-elements to describe
 *  the referenced object. This element is modelled on an element in Encoded
 *  Archival Description (EAD) and TEI.
 */
class MEI_EXPORT Ptr : public MeiElement {
    public:
        Ptr();
        virtual ~Ptr();

        CommonMixIn    m_Common;
        InternetmediaMixIn    m_Internetmedia;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Ptr);
};

/** \brief reference ― Defines a reference to another location.
 * 
 *  Unlike the <ptr> element, <ref> may contain text and sub-elements to describe
 *  the destination. This element is modelled on an element in Encoded Archival
 *  Description (EAD) and TEI.
 */
class MEI_EXPORT Ref : public MeiElement {
    public:
        Ref();
        virtual ~Ref();

        CommonMixIn    m_Common;
        InternetmediaMixIn    m_Internetmedia;
        LangMixIn    m_Lang;
        PointingMixIn    m_Pointing;

    private:
        REGISTER_DECLARATION(Ref);
};
}
#endif  // PTRREF_H_
