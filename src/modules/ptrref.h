
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
#include "exceptions.h"
#include "mei.h"
#include "sharedmixins.h"


namespace mei {
    
/** \brief   external pointer ― An empty linking element that uses attributes to connect
    * the MEI document to an external electronic object. Either the entityref or href
    * attribute may be used to identify the external object. Don't confuse this
    * element with the <ptr< element, which is an internal link for movement from one
    * place in the MEI document to another in the same document. This element is
    * modelled on an element in Encoded Archival Description (EAD).
    */

class MEI_EXPORT Extptr : public MeiElement {
    public:
        Extptr();
        virtual ~Extptr();
        
        
    CommonMixIn    m_Common;
    InternetmediaMixIn    m_Internetmedia;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    private:
        REGISTER_DECLARATION(Extptr);
};

/** \brief   external reference ― A linking element that can include text and sub-elements
    * as part of its reference to an electronic object that is external to the MEI
    * document. Either the entityref or href attribute may be used to identify the
    * external object. Don't confuse this element with the <ref> element, which is an
    * internal link for movement from one place in the MEI document to another in the
    * same document. This element is modelled on an element in Encoded Archival
    * Description (EAD).
    */

class MEI_EXPORT Extref : public MeiElement {
    public:
        Extref();
        virtual ~Extref();
        
        
    CommonMixIn    m_Common;
    InternetmediaMixIn    m_Internetmedia;
    LangMixIn    m_Lang;
    LinkCommonMixIn    m_LinkCommon;
    LinkExternalMixIn    m_LinkExternal;
    private:
        REGISTER_DECLARATION(Extref);
};

/** \brief   pointer ― An empty internal linking element that uses attributes to provide
    * for movement from one place in an MEI document to another place in the same
    * document. Unlike the <ref> element, <ptr> cannot contain text or sub-elements to
    * describe the referenced object. Don't confuse this element with <extptr> which
    * is used to connect the MEI document to an external electronic object. This
    * element is modelled on an element in Encoded Archival Description (EAD).
    */

class MEI_EXPORT Ptr : public MeiElement {
    public:
        Ptr();
        virtual ~Ptr();
        
        
    CommonMixIn    m_Common;
    LinkCommonMixIn    m_LinkCommon;
    ParticipantidentMixIn    m_Participantident;
    private:
        REGISTER_DECLARATION(Ptr);
};

/** \brief   reference ― An internal linking element that provides for movement from one
    * place in a MEI document to another point in the same document. Unlike the <ptr>
    * element, <ref> may contain text and sub-elements to describe the destination.
    * Don't confuse this element with <extref> which provides for linking to an
    * electronic object that is external to the MEI document. This element is modelled
    * on an element in Encoded Archival Description (EAD).
    */

class MEI_EXPORT Ref : public MeiElement {
    public:
        Ref();
        virtual ~Ref();
        
        
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    LinkCommonMixIn    m_LinkCommon;
    ParticipantidentMixIn    m_Participantident;
    private:
        REGISTER_DECLARATION(Ref);
};

}
#endif // PTRREF_H_
