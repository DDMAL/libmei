/*
    Copyright (c) 2011 Jamie Klassen, Alastair Porter, Mahtab Ghamsari-Esfahani, Andrew Hankinson

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

#include "facsimilemixins.h"
#include "analysismixins.h"
#include "cmnOrnamentsmixins.h"
#include "sharedmixins.h"
#include "cmnmixins.h"
#include "critappmixins.h"
using namespace std;
/** \brief  mordent ― An ornament indicating rapid alternation of the main note with a
 *          secondary note, usually a step below, but sometimes a step above.
 *
 * See Read, p. 245-246. Events may be contained within <mordent> in order to          
 *          record precise performance data. The starting point of the mordent may be          
 *          indicated by either a tstamp, tstamp.ges, tstamp.real or startid attribute. It          
 *          is a semantic error not to specify a starting point attribute..
 */
struct Mordent : public BaseMeiElement{
    Mordent();
    virtual ~Mordent() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    string getLongValue() throw (AttributeNotFoundException);

    MeiAttribute* getLong() throw (AttributeNotFoundException);
    void setLong(string _long);
    bool hasLong();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    PlacementMixIn    m_Placement;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    OrnamentaccidMixIn    m_Ornamentaccid;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Mordent);
};

/** \brief  trill ― Rapid alternation of a note with one (usually at the interval of a
 *          second) above.
 *
 * Usually, the interval is understood to be diatonic unless altered by an          
 *          accidental. The starting note of the trill; i.e., the written one or the          
 *          ornamenting one, and the speed of alternation depends on performance practice.          
 *          Events may be contained within <trill> in order to record precise performance          
 *          data. The starting point of the trill may be indicated by either a tstamp,          
 *          tstamp.ges, tstamp.real or startid attribute, while the ending point may be          
 *          recorded by either a dur, dur.ges or endid attribute. It is a semantic error not          
 *          to specify a starting point attribute. Please note that the dur attribute is not          
 *          a true duration, but rather a time stamp for the end point of the trill..
 */
struct Trill : public BaseMeiElement{
    Trill();
    virtual ~Trill() {};

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    DurationPerformedMixIn    m_DurationPerformed;
    DurationTimestampMixIn    m_DurationTimestamp;
    PlacementMixIn    m_Placement;
    Visualoffset2HoMixIn    m_Visualoffset2Ho;
    Visualoffset2ToMixIn    m_Visualoffset2To;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    Visualoffset2MixIn    m_Visualoffset2;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    TupletGesMixIn    m_TupletGes;
    CommonAnlMixIn    m_CommonAnl;
    OrnamentaccidMixIn    m_Ornamentaccid;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Trill);
};

/** \brief  turn ― An ornament consisting of four notes — the upper neighbor of the
 *          written note, the written note, the lower neighbor, and the written
 *          note.
 *
 * See Read, p. 246-247. Events may be contained within <turn> in order to record          
 *          precise performance data. Whether the turn is accented or unaccented may be          
 *          inferred from the timestamp — accented turns occur directly on the affected          
 *          beat, unaccented ones do not..
 */
struct Turn : public BaseMeiElement{
    Turn();
    virtual ~Turn() {};

    string getDelayedValue() throw (AttributeNotFoundException);

    MeiAttribute* getDelayed() throw (AttributeNotFoundException);
    void setDelayed(string _delayed);
    bool hasDelayed();

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    PlacementMixIn    m_Placement;
    StartidMixIn    m_Startid;
    XyMixIn    m_Xy;
    StartendidMixIn    m_Startendid;
    VisualoffsetMixIn    m_Visualoffset;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    OrnamentaccidMixIn    m_Ornamentaccid;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Turn);
};

#endif // CMNORNAMENTS_H_