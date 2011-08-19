
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

#ifndef CMNORNAMENTS_H_
#define CMNORNAMENTS_H_

#include "meielement.h"
#include "exceptions.h"
#include "mei.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "cmnornamentsmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
    
/** \brief   mordent ― An ornament indicating rapid alternation of the main note with a
    * secondary note, usually a step below, but sometimes a step above. See Read, p.
    * 245-246. Events may be contained within <mordent> in order to record precise
    * performance data. The starting point of the mordent may be indicated by either a
    * tstamp, tstamp.ges, tstamp.real or startid attribute. It is a semantic error not
    * to specify a starting point attribute.
    */

class MEI_EXPORT Mordent : public MeiElement {
    public:
        Mordent();
        virtual ~Mordent();
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    MordentLogMixIn    m_MordentLog;
    ParticipantidentMixIn    m_Participantident;
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

/** \brief   trill ― Rapid alternation of a note with one (usually at the interval of a
    * second) above. Usually, the interval is understood to be diatonic unless altered
    * by an accidental. The starting note of the trill; i.e., the written one or the
    * ornamenting one, and the speed of alternation depends on performance practice.
    * Events may be contained within <trill> in order to record precise performance
    * data. The starting point of the trill may be indicated by either a tstamp,
    * tstamp.ges, tstamp.real or startid attribute, while the ending point may be
    * recorded by either a dur, dur.ges or endid attribute. It is a semantic error not
    * to specify a starting point attribute. Please note that the dur attribute is not
    * a true duration, but rather a time stamp for the end point of the trill.
    */

class MEI_EXPORT Trill : public MeiElement {
    public:
        Trill();
        virtual ~Trill();
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    ParticipantidentMixIn    m_Participantident;
    TimestampMusicalMixIn    m_TimestampMusical;
    TimestampPerformedMixIn    m_TimestampPerformed;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    StartendidMixIn    m_Startendid;
    StartidMixIn    m_Startid;
    OrnamentaccidMixIn    m_Ornamentaccid;
    DurationTimestampMixIn    m_DurationTimestamp;
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

/** \brief   turn ― An ornament consisting of four notes — the upper neighbor of the
    * written note, the written note, the lower neighbor, and the written note. See
    * Read, p. 246-247. Events may be contained within <turn> in order to record
    * precise performance data. Whether the turn is accented or unaccented may be
    * inferred from the timestamp — accented turns occur directly on the affected
    * beat, unaccented ones do not.
    */

class MEI_EXPORT Turn : public MeiElement {
    public:
        Turn();
        virtual ~Turn();
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TurnLogMixIn    m_TurnLog;
    ParticipantidentMixIn    m_Participantident;
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
#endif // CMNORNAMENTS_H_
