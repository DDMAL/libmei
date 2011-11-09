/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
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
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class ChannelizedMixIn {
    public:
        explicit ChannelizedMixIn(MeiElement *b);
        virtual ~ChannelizedMixIn();
        /** \brief records a MIDI channel value.
         */
        MeiAttribute* getMidiChannel();
        void setMidiChannel(std::string _midichannel);
        bool hasMidiChannel();
        void removeMidiChannel();
        /** \brief specifies the 'on' part of the duty cycle as a percentage of a note's duration.
         */
        MeiAttribute* getMidiDuty();
        void setMidiDuty(std::string _mididuty);
        bool hasMidiDuty();
        void removeMidiDuty();
        /** \brief sets the MIDI port value.
         */
        MeiAttribute* getMidiPort();
        void setMidiPort(std::string _midiport);
        bool hasMidiPort();
        void removeMidiPort();
        /** \brief sets the MIDI track.
         */
        MeiAttribute* getMidiTrack();
        void setMidiTrack(std::string _miditrack);
        bool hasMidiTrack();
        void removeMidiTrack();

    private:
        MeiElement *b;
};

class MidiinstrumentMixIn {
    public:
        explicit MidiinstrumentMixIn(MeiElement *b);
        virtual ~MidiinstrumentMixIn();
        /** \brief sets the MIDI instrument number.
         */
        MeiAttribute* getMidiInstrnum();
        void setMidiInstrnum(std::string _midiinstrnum);
        bool hasMidiInstrnum();
        void removeMidiInstrnum();
        /** \brief provides a General MIDI label for the MIDI instrument.
         */
        MeiAttribute* getMidiInstrname();
        void setMidiInstrname(std::string _midiinstrname);
        bool hasMidiInstrname();
        void removeMidiInstrname();

    private:
        MeiElement *b;
};

class MidinumberMixIn {
    public:
        explicit MidinumberMixIn(MeiElement *b);
        virtual ~MidinumberMixIn();
        /** \brief along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

    private:
        MeiElement *b;
};

class MiditempoMixIn {
    public:
        explicit MiditempoMixIn(MeiElement *b);
        virtual ~MiditempoMixIn();
        /** \brief contains a MIDI value, that is, the number of quarter notes per minute in the
         *  range from 10 to 1000.
         */
        MeiAttribute* getMidiTempo();
        void setMidiTempo(std::string _miditempo);
        bool hasMidiTempo();
        void removeMidiTempo();

    private:
        MeiElement *b;
};

class MidivalueMixIn {
    public:
        explicit MidivalueMixIn(MeiElement *b);
        virtual ~MidivalueMixIn();
        /** \brief MIDI number
         */
        MeiAttribute* getVal();
        void setVal(std::string _val);
        bool hasVal();
        void removeVal();

    private:
        MeiElement *b;
};

class TimebaseMixIn {
    public:
        explicit TimebaseMixIn(MeiElement *b);
        virtual ~TimebaseMixIn();
        /** \brief indicates the number of pulses (sometimes referred to as ticks or divisions) per
         *  quarter note.
         * 
         *  Unlike MIDI, MEI permits different values for a score and individual staves.
         */
        MeiAttribute* getPpq();
        void setPpq(std::string _ppq);
        bool hasPpq();
        void removePpq();

    private:
        MeiElement *b;
};
}
#endif  // MIDIMIXIN_H_
