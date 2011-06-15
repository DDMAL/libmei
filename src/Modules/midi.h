/*
    Copyright (c) 2011 Mahtab Ghamsari-Esfahani, Jamie Klassen, Alastair Porter, Andrew Hankinson

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

#ifndef MIDI_H_
#define MIDI_H_

#include "meielement.h"

/** \brief MIDI parameter/control change.*/
class Cc: public MeiElement {
public:
	Cc();
private:
};

/** \brief MIDI channel assignment.*/
class Chan: public MeiElement {
public:
	Chan();
private:
};

/** \brief MIDI channel pressure/after touch.*/
class ChanPr: public MeiElement {
public:
	ChanPr();
private:
};

/** \brief MIDI cue point. */
class Cue: public MeiElement {
public:
	Cue();
private:
};

/** \brief Arbitrary MIDI data in hexadecimal form. */
class Hex: public MeiElement {
public:
	Hex();
private:
};

/** \brief Vocally performed 'text' of a musical composition, such as a song or opera.*/
class Lyrics: public MeiElement {
public:
	Lyrics();
private:
};

/** \brief MIDI marker meta-event. */
class Marker: public MeiElement {
public:
	Marker();
private:
};

/** \brief MIDI text meta-event.*/
class MetaText: public MeiElement {
public:
	MetaText();
private:
};

/** \brief Container for elements that contain information useful when generating MIDI output.*/
class Midi: public MeiElement {
public:
	Midi();
private:
};

/** \brief MIDI note-off event. */
class NoteOff: public MeiElement {
public:
	NoteOff();
private:
};

/** \brief MIDI note-on event. */
class NoteOn: public MeiElement {
public:
	NoteOn();
private:
};

/** \brief MIDI port. The num attribute must be in the range 0-127. */
class Port: public MeiElement {
public:
	Port();
private:
};

/** \brief MIDI program change. The num attribute must be in the range 0-127. */
class Prog: public MeiElement {
public:
	Prog();
private:
};

/** \brief MIDI sequence number. */
class SeqNum: public MeiElement {
public:
	SeqNum();
private:
};

/** \brief MIDI track/sequence name. */
class TrkName: public MeiElement {
public:
	TrkName();
private:
};

/** \brief MIDI Note-on/off velocity.*/
class Vel: public MeiElement {
public:
	Vel();
private:
};

#endif //MIDI_H_