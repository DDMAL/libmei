/*
 *  midi.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
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