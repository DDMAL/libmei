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

#ifndef CRITAPP_H_
#define CRITAPP_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "critappmixins.h"
#include "analysismixins.h"
#include "performancemixins.h"


namespace mei {
/** \brief (apparatus) – Contains one or more alternative encodings.
 */
class MEI_EXPORT App : public MeiElement {
    public:
        App();
        App(const App& other);
        virtual ~App();

/* include <app> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(App);
};

/** \brief (lemma) – Contains the lemma, or base text, of a textual variation.
 */
class MEI_EXPORT Lem : public MeiElement {
    public:
        Lem();
        Lem(const Lem& other);
        virtual ~Lem();

/* include <lem> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        CritMixIn    m_Crit;
        HandidentMixIn    m_Handident;
        ResponsibilityMixIn    m_Responsibility;
        SequenceMixIn    m_Sequence;
        SourceMixIn    m_Source;
        PointingMixIn    m_Pointing;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TargetevalMixIn    m_Targeteval;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Lem);
};

/** \brief (reading) – Contains a single reading within a textual variation.
 */
class MEI_EXPORT Rdg : public MeiElement {
    public:
        Rdg();
        Rdg(const Rdg& other);
        virtual ~Rdg();

/* include <rdg> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        CritMixIn    m_Crit;
        HandidentMixIn    m_Handident;
        ResponsibilityMixIn    m_Responsibility;
        SequenceMixIn    m_Sequence;
        SourceMixIn    m_Source;
        PointingMixIn    m_Pointing;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TargetevalMixIn    m_Targeteval;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Rdg);
};
}
#endif  // CRITAPP_H_
