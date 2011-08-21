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

#ifndef LYRICS_H_
#define LYRICS_H_

#include "meielement.h"
#include "exceptions.h"
#include "mei.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"
#include "lyricsmixins.h"


namespace mei {
/** \brief lyrics ― Vocally performed 'text' of a musical composition, such as a song or
 *  opera.
 * 
 *  The staff attribute gives the staff to which the lyrics are attached. If there
 *  is more than one layer on that staff, the layer attribute may be used to
 *  indicate the layer from which the rhythm should be taken. Often, automatic text
 *  underlay may rely on the notes of the indicated staff. When this is not
 *  desirable, however, the rhythm of the lyrics may be recorded in the rhythm
 *  attribute of the parent verse element.
 */
class MEI_EXPORT Lyrics : public MeiElement {
    public:
        Lyrics();
        virtual ~Lyrics();

        CommonMixIn    m_Common;
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

/** \brief verse ― Lyric verse.
 * 
 *  The lb element is allowed here in order to facilitate karaoke applications. The
 *  func attribute on lb may be used to distinguish true line ends from line group
 *  ends for these applications.
 */
class MEI_EXPORT Verse : public MeiElement {
    public:
        Verse();
        virtual ~Verse();

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LangMixIn    m_Lang;
        VerseLogMixIn    m_VerseLog;
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
