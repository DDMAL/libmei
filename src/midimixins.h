
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

#ifndef MIDIMIXIN_H_
#define MIDIMIXIN_H_

#include "meielement.h"
#include "exceptions.h"



struct ChannelizedMixIn {
    ChannelizedMixIn(BaseMeiElement *b);
    virtual ~ChannelizedMixIn() {};
    
    /** \brief   records a MIDI channel value.
    */

    string getMidiChannelValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiChannel() throw (AttributeNotFoundException);
    void setMidiChannel(std::string _midichannel);
    bool hasMidiChannel();
    void removeMidiChannel();

    /** \brief   specifies the 'on' part of the duty cycle as a percentage of a note's duration.
    */

    string getMidiDutyValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiDuty() throw (AttributeNotFoundException);
    void setMidiDuty(std::string _mididuty);
    bool hasMidiDuty();
    void removeMidiDuty();

    /** \brief   sets the MIDI port value.
    */

    string getMidiPortValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiPort() throw (AttributeNotFoundException);
    void setMidiPort(std::string _midiport);
    bool hasMidiPort();
    void removeMidiPort();

    /** \brief   sets the MIDI track.
    */

    string getMidiTrackValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiTrack() throw (AttributeNotFoundException);
    void setMidiTrack(std::string _miditrack);
    bool hasMidiTrack();
    void removeMidiTrack();

    private:
        BaseMeiElement *b;
};


struct MidiinstrumentMixIn {
    MidiinstrumentMixIn(BaseMeiElement *b);
    virtual ~MidiinstrumentMixIn() {};
    
    /** \brief   sets the MIDI instrument number.
    */

    string getMidiInstrnumValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiInstrnum() throw (AttributeNotFoundException);
    void setMidiInstrnum(std::string _midiinstrnum);
    bool hasMidiInstrnum();
    void removeMidiInstrnum();

    /** \brief   provides a General MIDI label for the MIDI instrument.
    */

    string getMidiInstrnameValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiInstrname() throw (AttributeNotFoundException);
    void setMidiInstrname(std::string _midiinstrname);
    bool hasMidiInstrname();
    void removeMidiInstrname();

    private:
        BaseMeiElement *b;
};


struct MidinumberMixIn {
    MidinumberMixIn(BaseMeiElement *b);
    virtual ~MidinumberMixIn() {};
    
    /** \brief   along with numbase, describes duration as a ratio. num is the first value in the
    * ratio, while numbase is the second.
    */

    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(std::string _num);
    bool hasNum();
    void removeNum();

    private:
        BaseMeiElement *b;
};


struct MiditempoMixIn {
    MiditempoMixIn(BaseMeiElement *b);
    virtual ~MiditempoMixIn() {};
    
    /** \brief   contains a MIDI value, that is, the number of quarter notes per minute in the
    * range from 10 to 1000.
    */

    string getMidiTempoValue() throw (AttributeNotFoundException);
    MeiAttribute* getMidiTempo() throw (AttributeNotFoundException);
    void setMidiTempo(std::string _miditempo);
    bool hasMidiTempo();
    void removeMidiTempo();

    private:
        BaseMeiElement *b;
};


struct MidivalueMixIn {
    MidivalueMixIn(BaseMeiElement *b);
    virtual ~MidivalueMixIn() {};
    
    /** \brief   MIDI number
    */

    string getValValue() throw (AttributeNotFoundException);
    MeiAttribute* getVal() throw (AttributeNotFoundException);
    void setVal(std::string _val);
    bool hasVal();
    void removeVal();

    private:
        BaseMeiElement *b;
};


struct TimebaseMixIn {
    TimebaseMixIn(BaseMeiElement *b);
    virtual ~TimebaseMixIn() {};
    
    /** \brief   indicates the number of pulses (sometimes referred to as ticks or divisions) per
    * quarter note. Unlike MIDI, MEI permits different values for a score and
    * individual staves.
    */

    string getPpqValue() throw (AttributeNotFoundException);
    MeiAttribute* getPpq() throw (AttributeNotFoundException);
    void setPpq(std::string _ppq);
    bool hasPpq();
    void removePpq();

    private:
        BaseMeiElement *b;
};


#endif // MIDIMIXIN_H_
