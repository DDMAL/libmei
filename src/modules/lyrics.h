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

#ifndef LYRICS_H_
#define LYRICS_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "analysismixins.h"
#include "performancemixins.h"
#include "lyricsmixins.h"


namespace mei {
/** \brief Vocally performed 'text' of a musical composition, such as a song or opera.
 */
class MEI_EXPORT Lyrics : public MeiElement {
    public:
        Lyrics();
        Lyrics(const Lyrics& other);
        virtual ~Lyrics();

/* include <lyrics> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        PlacementMixIn    m_Placement;
        TypographyMixIn    m_Typography;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Lyrics);
};

/** \brief Lyric verse.
 */
class MEI_EXPORT Verse : public MeiElement {
    public:
        Verse();
        Verse(const Verse& other);
        virtual ~Verse();

/* include <verse> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        VerseLogMixIn    m_VerseLog;
        ColorMixIn    m_Color;
        TypographyMixIn    m_Typography;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Verse);
};
}
#endif  // LYRICS_H_
