/*
 *  harmony.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef HARMONY_H_
#define HARMONY_H_

#include "meielement.h"

/** \brief An indication of fingering in a chord tablature grid. */
class Barre: public MeiElement {
public:
	Barre();
private:
};

/** \brief Chord tablature definition. */
class ChordDef: public MeiElement {
public:
	ChordDef();
private:
};

/** \brief An individual pitch in a chord defined by a <chorddef> element.*/
class ChordMember: public MeiElement {
public:
	ChordMember();
private:
};

/** \brief Chord/tablature look-up table. */
class ChordTable: public MeiElement {
public:
	ChordTable();
private:
};

/** \brief An indication of harmony, e.g., chord names, tablature grids, harmonic analysis, figured bass.*/
class Harm: public MeiElement {
public:
	Harm();
private:
};

//added in MEI 2011

/** \brief */
class F: public MeiElement {
public:
	F();
private:
};

/** \brief */
class Fb: public MeiElement {
public:
	Fb();
private:
};

#endif // HARMONY_H_