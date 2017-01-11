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

#ifndef PTRREF_H_
#define PTRREF_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"


namespace mei {
/** \brief (pointer) – Defines a pointer to another location, using only attributes to
 *  describe the destination.
 */
class MEI_EXPORT Ptr : public MeiElement {
    public:
        Ptr();
        Ptr(const Ptr& other);
        virtual ~Ptr();

/* include <ptr> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        InternetmediaMixIn    m_Internetmedia;
        PointingMixIn    m_Pointing;
        TargetevalMixIn    m_Targeteval;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Ptr);
};

/** \brief (reference) – Defines a reference to another location that may contain text
 *  and sub-elements to describe the destination.
 */
class MEI_EXPORT Ref : public MeiElement {
    public:
        Ref();
        Ref(const Ref& other);
        virtual ~Ref();

/* include <ref> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        InternetmediaMixIn    m_Internetmedia;
        LangMixIn    m_Lang;
        PointingMixIn    m_Pointing;
        TargetevalMixIn    m_Targeteval;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Ref);
};
}
#endif  // PTRREF_H_
