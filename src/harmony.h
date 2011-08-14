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
    
#ifndef HARMONY_H_
#define HARMONY_H_

#include "facsimilemixins.h"
#include "analysismixins.h"
#include "harmonymixins.h"
#include "sharedmixins.h"
#include "cmnmixins.h"
#include "critappmixins.h"
using namespace std;
/** \brief  barre ― An indication of fingering in a chord tablature grid.
 *
 * The startid and endid attributes are used to indicate the <chordMember> elements          
 *          on which the barre starts and finishes respectively. The fret at which the barre          
 *          should be created is recorded by the fret attribute..
 */
struct Barre : public BaseMeiElement{
    Barre();
    virtual ~Barre() {};

    CommonMixIn    m_Common;
    StartendidMixIn    m_Startendid;
    FretlocationMixIn    m_Fretlocation;
    private:
        //REGISTER_DECLARATION(Barre);
};

/** \brief  chord definition ― Chord tablature definition.
 *
 * An id attribute, while not required by the schema, is needed so that <harm>          
 *          elements can reference a particular chord definition. The pos (position)          
 *          attribute is provided in order to create displayable chord tablature grids.          
 *          <chordMember> sub-elements record the individual pitches of the chord. <barre          
 *          >sub-elements may be used when a single finger is used to stop multiple          
 *          strings..
 */
struct ChordDef : public BaseMeiElement{
    ChordDef();
    virtual ~ChordDef() {};

    string getPosValue() throw (AttributeNotFoundException);

    MeiAttribute* getPos() throw (AttributeNotFoundException);
    void setPos(string _pos);
    bool hasPos();

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(ChordDef);
};

/** \brief  chord member ― An individual pitch in a chord defined by a <chordDef> element.
 *
 * The fing and fret attributes are provided in order to create displayable chord          
 *          tablature grids. The inth (harmonic interval) attribute may be used to          
 *          facilitate automated performance of a chord. It gives the number of 1/2 steps          
 *          above the bass. Of course, for the bass note itself, inth should be set to '0'.          
 *          The fret at which a finger should be placed is recorded in the fret attribute..
 */
struct ChordMember : public BaseMeiElement{
    ChordMember();
    virtual ~ChordMember() {};

    string getFingValue() throw (AttributeNotFoundException);

    MeiAttribute* getFing() throw (AttributeNotFoundException);
    void setFing(string _fing);
    bool hasFing();

    AccidentalPerformedMixIn    m_AccidentalPerformed;
    CommonMixIn    m_Common;
    AccidentalArticulationSlurpresentTiepresentPitchedMixIn    m_AccidentalArticulationSlurpresentTiepresentPitched;
    IntervalharmonicMixIn    m_Intervalharmonic;
    IntervallicdescMixIn    m_Intervallicdesc;
    FretlocationMixIn    m_Fretlocation;
    private:
        //REGISTER_DECLARATION(ChordMember);
};

/** \brief  chord table ― Chord/tablature look-up table.
 *
 * A table may be shared between MEI instances through the use of an external          
 *          parsed entity containing the look-up table to be shared..
 */
struct ChordTable : public BaseMeiElement{
    ChordTable();
    virtual ~ChordTable() {};

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(ChordTable);
};

/** \brief  Figure (figured bass) ― Single element of a figured bass indication.
 */
struct F : public BaseMeiElement{
    F();
    virtual ~F() {};

    string getExtenderValue() throw (AttributeNotFoundException);

    MeiAttribute* getExtender() throw (AttributeNotFoundException);
    void setExtender(string _extender);
    bool hasExtender();

    AltsymMixIn    m_Altsym;
    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(F);
};

/** \brief  Figured Bass ―.
 */
struct Fb : public BaseMeiElement{
    Fb();
    virtual ~Fb() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Fb);
};

/** \brief  harmony ― An indication of harmony, e.
 *
 * g., chord names, tablature grids, harmonic analysis, figured bass. The starting          
 *          point of the harmony may be indicated by either a tstamp, tstamp.ges,          
 *          tstamp.real or startid attribute, while the ending point may be recorded by          
 *          either a dur, dur.ges or endid attribute. It is a semantic error not to specify          
 *          a starting point attribute. The dur attribute encodes the logical and visual          
 *          duration of the harmony. Please note that the dur attribute here is not a true          
 *          duration, but rather a time stamp for the end point of the harmony..
 */
struct Harm : public BaseMeiElement{
    Harm();
    virtual ~Harm() {};

    string getChordrefValue() throw (AttributeNotFoundException);

    MeiAttribute* getChordref() throw (AttributeNotFoundException);
    void setChordref(string _chordref);
    bool hasChordref();

    string getExtenderValue() throw (AttributeNotFoundException);

    MeiAttribute* getExtender() throw (AttributeNotFoundException);
    void setExtender(string _extender);
    bool hasExtender();

    string getRendgridValue() throw (AttributeNotFoundException);

    MeiAttribute* getRendgrid() throw (AttributeNotFoundException);
    void setRendgrid(string _rendgrid);
    bool hasRendgrid();

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
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Harm);
};

#endif // HARMONY_H_