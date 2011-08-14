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
    
#ifndef MIDIMIXINS_H_
#define MIDIMIXINS_H_

#include "meielement.h"
#include "exceptions.h"
#include "sharedmixins.h"
using namespace std;

/** \brief   Attributes that record MIDI channel information
 */
struct ChannelizedMixIn {

    ChannelizedMixIn(BaseMeiElement *b);

    string getMidiChannelValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiChannel() throw (AttributeNotFoundException);
    void setMidiChannel(string _midichannel);
    bool hasMidiChannel();

    string getMidiDutyValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiDuty() throw (AttributeNotFoundException);
    void setMidiDuty(string _mididuty);
    bool hasMidiDuty();

    string getMidiPortValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiPort() throw (AttributeNotFoundException);
    void setMidiPort(string _midiport);
    bool hasMidiPort();

    string getMidiTrackValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiTrack() throw (AttributeNotFoundException);
    void setMidiTrack(string _miditrack);
    bool hasMidiTrack();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record MIDI numbers
 */
struct MidinumberMixIn {

    MidinumberMixIn(BaseMeiElement *b);

    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(string _num);
    bool hasNum();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record MIDI tempo information
 */
struct MiditempoMixIn {

    MiditempoMixIn(BaseMeiElement *b);

    string getMidiTempoValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiTempo() throw (AttributeNotFoundException);
    void setMidiTempo(string _miditempo);
    bool hasMidiTempo();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record MIDI values
 */
struct MidivalueMixIn {

    MidivalueMixIn(BaseMeiElement *b);

    string getValValue() throw (AttributeNotFoundException);
    MeiAttribute* getVal() throw (AttributeNotFoundException);
    void setVal(string _val);
    bool hasVal();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that record time-base information
 */
struct TimebaseMixIn {

    TimebaseMixIn(BaseMeiElement *b);

    string getPpqValue() throw (AttributeNotFoundException);
    MeiAttribute* getPpq() throw (AttributeNotFoundException);
    void setPpq(string _ppq);
    bool hasPpq();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes common to MIDI events
 */
struct MidiEventMixIn {

    MidiEventMixIn(BaseMeiElement *b);

    string getLayerValue() throw (AttributeNotFoundException);
    MeiAttribute* getLayer() throw (AttributeNotFoundException);
    void setLayer(string _layer);
    bool hasLayer();

    string getStaffValue() throw (AttributeNotFoundException);
    MeiAttribute* getStaff() throw (AttributeNotFoundException);
    void setStaff(string _staff);
    bool hasStaff();

    string getTstampValue() throw (AttributeNotFoundException);
    MeiAttribute* getTstamp() throw (AttributeNotFoundException);
    void setTstamp(string _tstamp);
    bool hasTstamp();


    private:
         BaseMeiElement *b;
};

#endif // MIDIMIXINS_H_