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
        /** \brief 
         */
        MeiAttribute* getMidiChannel();
        void setMidiChannel(std::string _midichannel);
        bool hasMidiChannel();
        void removeMidiChannel();
        /** \brief 
         */
        MeiAttribute* getMidiDuty();
        void setMidiDuty(std::string _mididuty);
        bool hasMidiDuty();
        void removeMidiDuty();
        /** \brief 
         */
        MeiAttribute* getMidiPort();
        void setMidiPort(std::string _midiport);
        bool hasMidiPort();
        void removeMidiPort();
        /** \brief 
         */
        MeiAttribute* getMidiTrack();
        void setMidiTrack(std::string _miditrack);
        bool hasMidiTrack();
        void removeMidiTrack();

/* include <midi.trackmixin> */

    private:
        MeiElement *b;
};

class MidiinstrumentMixIn {
    public:
        explicit MidiinstrumentMixIn(MeiElement *b);
        virtual ~MidiinstrumentMixIn();
        /** \brief 
         */
        MeiAttribute* getMidiInstrnum();
        void setMidiInstrnum(std::string _midiinstrnum);
        bool hasMidiInstrnum();
        void removeMidiInstrnum();
        /** \brief 
         */
        MeiAttribute* getMidiInstrname();
        void setMidiInstrname(std::string _midiinstrname);
        bool hasMidiInstrname();
        void removeMidiInstrname();

/* include <midi.instrnamemixin> */

    private:
        MeiElement *b;
};

class MidinumberMixIn {
    public:
        explicit MidinumberMixIn(MeiElement *b);
        virtual ~MidinumberMixIn();
        /** \brief 
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <nummixin> */

    private:
        MeiElement *b;
};

class MiditempoMixIn {
    public:
        explicit MiditempoMixIn(MeiElement *b);
        virtual ~MiditempoMixIn();
        /** \brief 
         */
        MeiAttribute* getMidiTempo();
        void setMidiTempo(std::string _miditempo);
        bool hasMidiTempo();
        void removeMidiTempo();

/* include <midi.tempomixin> */

    private:
        MeiElement *b;
};

class MidivalueMixIn {
    public:
        explicit MidivalueMixIn(MeiElement *b);
        virtual ~MidivalueMixIn();
        /** \brief 
         */
        MeiAttribute* getVal();
        void setVal(std::string _val);
        bool hasVal();
        void removeVal();

/* include <valmixin> */

    private:
        MeiElement *b;
};

class TimebaseMixIn {
    public:
        explicit TimebaseMixIn(MeiElement *b);
        virtual ~TimebaseMixIn();
        /** \brief 
         */
        MeiAttribute* getPpq();
        void setPpq(std::string _ppq);
        bool hasPpq();
        void removePpq();

/* include <ppqmixin> */

    private:
        MeiElement *b;
};
}
#endif  // MIDIMIXIN_H_
