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

class Cc: public MeiElement {
public:
	Cc();
private:
};

class Chan: public MeiElement {
public:
	Chan();
private:
};

class ChanPr: public MeiElement {
public:
	ChanPr();
private:
};

class Cue: public MeiElement {
public:
	Cue();
private:
};

class Hex: public MeiElement {
public:
	Hex();
private:
};

class Lyrics: public MeiElement {
public:
	Lyrics();
private:
};

class Marker: public MeiElement {
public:
	Marker();
private:
};

class MetaText: public MeiElement {
public:
	MetaText();
private:
};

class Midi: public MeiElement {
public:
	Midi();
private:
};

class NoteOff: public MeiElement {
public:
	NoteOff();
private:
};

class NoteOn: public MeiElement {
public:
	NoteOn();
private:
};

class Port: public MeiElement {
public:
	Port();
private:
};

class Prog: public MeiElement {
public:
	Prog();
private:
};

class SeqNum: public MeiElement {
public:
	SeqNum();
private:
};

class TrkName: public MeiElement {
public:
	TrkName();
private:
};

class Vel: public MeiElement {
public:
	Vel();
private:
};

#endif //MIDI_H_