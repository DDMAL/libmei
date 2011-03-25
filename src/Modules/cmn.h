/*
 *  cmn.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CMN_H_
#define CMN_H_

#include "meielement.h"

class Arpeg: public MeiElement {
public:
	Arpeg();
private:
};

class Beam: public MeiElement {
public:
	Beam();
private:
};

class BeamSpan: public MeiElement {
public:
	BeamSpan();
private:
};

class BeatRpt: public MeiElement {
public:
	BeatRpt();
private:
};

class Bend: public MeiElement {
public:
	Bend();
private:
};

class Breath: public MeiElement {
public:
	Breath();
private:
};

class BtRem: public MeiElement {
public:
	BtRem();
private:
};

class Fermata: public MeiElement {
public:
	Fermata();
private:
};

class Gliss: public MeiElement {
public:
	Gliss();
private:
};

class HairPin: public MeiElement {
public:
	HairPin();
private:
};

class HalfMRpt: public MeiElement {
public:
	HalfMRpt();
private:
};

class HarpPedal: public MeiElement {
public:
	HarpPedal();
private:
};

class Measure: public MeiElement {
public:
	Measure();
private:
};

class MRest: public MeiElement {
public:
	MRest();
private:
};

class MRpt: public MeiElement {
public:
	MRpt();
private:
};

class MRpt2: public MeiElement {
public:
	MRpt2();
private:
};

class MSpace: public MeiElement {
public:
	MSpace();
private:
};

class MultiRest: public MeiElement {
public:
	MultiRest();
private:
};

class MultiRpt: public MeiElement {
public:
	MultiRpt();
private:
};

class Octave: public MeiElement {
public:
	Octave();
private:
};

class Ossia: public MeiElement {
public:
	Ossia();
private:
};

class Pedal: public MeiElement {
public:
	Pedal();
private:
};

class Reh: public MeiElement {
public:
	Reh();
private:
};

class Slur: public MeiElement {
public:
	Slur();
private:
};

class Tie: public MeiElement {
public:
	Tie();
private:
};

class Tuplet: public MeiElement {
public:
	Tuplet();
private:
};

class TupletSpan: public MeiElement {
public:
	TupletSpan();
private:
};

#endif // CMN_H_