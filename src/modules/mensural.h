/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter, and Others
    
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

#ifndef MENSURAL_H_
#define MENSURAL_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "mensuralmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
/** \brief 
 */
class MEI_EXPORT Ligature : public MeiElement {
    public:
        Ligature();
        Ligature(const Ligature& other);
        virtual ~Ligature();

/* include <ligature> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LigatureLogMixIn    m_LigatureLog;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Ligature);
};

/** \brief 
 */
class MEI_EXPORT Mensur : public MeiElement {
    public:
        Mensur();
        Mensur(const Mensur& other);
        virtual ~Mensur();

/* include <mensur> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        MensurLogMixIn    m_MensurLog;
        DurationRatioMixIn    m_DurationRatio;
        MensurVisMixIn    m_MensurVis;
        ColorMixIn    m_Color;
        RelativesizeMixIn    m_Relativesize;
        SlashcountMixIn    m_Slashcount;
        StafflocMixIn    m_Staffloc;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Mensur);
};

/** \brief 
 */
class MEI_EXPORT Proport : public MeiElement {
    public:
        Proport();
        Proport(const Proport& other);
        virtual ~Proport();

/* include <proport> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        DurationRatioMixIn    m_DurationRatio;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Proport);
};
}
#endif  // MENSURAL_H_
