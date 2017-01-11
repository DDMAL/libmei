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

#ifndef NEUMES_H_
#define NEUMES_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "neumesmixins.h"
#include "usersymbolsmixins.h"
#include "externalsymbolsmixins.h"
#include "analysismixins.h"
#include "performancemixins.h"


namespace mei {
/** \brief (interrupted neume) – A graphically interrupted neume; that is, a neume which
 *  is logically a single entity but is written using multiple signs.
 */
class MEI_EXPORT Ineume : public MeiElement {
    public:
        Ineume();
        Ineume(const Ineume& other);
        virtual ~Ineume();

/* include <ineume> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        IneumeLogMixIn    m_IneumeLog;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExtsymMixIn    m_Extsym;
        StafflocMixIn    m_Staffloc;
        TypographyMixIn    m_Typography;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Ineume);
};

/** \brief Neume notation can be thought of as "neumed text".
 * 
 *  Therefore, the syllable element provides high-level organization in this
 *  repertoire.
 */
class MEI_EXPORT Syllable : public MeiElement {
    public:
        Syllable();
        Syllable(const Syllable& other);
        virtual ~Syllable();

/* include <syllable> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(Syllable);
};

/** \brief (uninterrupted neume) – A graphically-uninterrupted neume sign.
 */
class MEI_EXPORT Uneume : public MeiElement {
    public:
        Uneume();
        Uneume(const Uneume& other);
        virtual ~Uneume();

/* include <uneume> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        UneumeLogMixIn    m_UneumeLog;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        SyltextMixIn    m_Syltext;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        ExtsymMixIn    m_Extsym;
        RelativesizeMixIn    m_Relativesize;
        StafflocMixIn    m_Staffloc;
        TypographyMixIn    m_Typography;
        VisibilityMixIn    m_Visibility;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        HarmonicfunctionMixIn    m_Harmonicfunction;
        IntervalmelodicMixIn    m_Intervalmelodic;
        MelodicfunctionMixIn    m_Melodicfunction;
        SolfaMixIn    m_Solfa;

    private:
        REGISTER_DECLARATION(Uneume);
};
}
#endif  // NEUMES_H_
