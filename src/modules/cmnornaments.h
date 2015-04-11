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

#ifndef CMNORNAMENTS_H_
#define CMNORNAMENTS_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "cmnornamentsmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
/** \brief An ornament indicating rapid alternation of the main note with a secondary note,
 *  usually a step below, but sometimes a step above.
 */
class MEI_EXPORT Mordent : public MeiElement {
    public:
        Mordent();
        Mordent(const Mordent& other);
        virtual ~Mordent();

/* include <mordent> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        MordentLogMixIn    m_MordentLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        OrnamentaccidMixIn    m_Ornamentaccid;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Mordent);
};

/** \brief Rapid alternation of a note with one (usually at the interval of a second)
 *  above.
 */
class MEI_EXPORT Trill : public MeiElement {
    public:
        Trill();
        Trill(const Trill& other);
        virtual ~Trill();

/* include <trill> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        AugmentdotsMixIn    m_Augmentdots;
        DurationAdditiveMixIn    m_DurationAdditive;
        OrnamentaccidMixIn    m_Ornamentaccid;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        Timestamp2MusicalMixIn    m_Timestamp2Musical;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Trill);
};

/** \brief An ornament consisting of four notes — the upper neighbor of the written note,
 *  the written note, the lower neighbor, and the written note.
 */
class MEI_EXPORT Turn : public MeiElement {
    public:
        Turn();
        Turn(const Turn& other);
        virtual ~Turn();

/* include <turn> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TurnLogMixIn    m_TurnLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        OrnamentaccidMixIn    m_Ornamentaccid;
        StartidMixIn    m_Startid;
        ColorMixIn    m_Color;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        XyMixIn    m_Xy;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Turn);
};
}
#endif  // CMNORNAMENTS_H_
