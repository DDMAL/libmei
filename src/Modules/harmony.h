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

class Barre: public MeiElement {
public:
	Barre();
private:
};

class ChordDef: public MeiElement {
public:
	ChordDef();
private:
};

class ChordMember: public MeiElement {
public:
	ChordMember();
private:
};

class ChordTable: public MeiElement {
public:
	ChordTable();
private:
};

class Harm: public MeiElement {
public:
	Harm();
private:
};

#endif // HARMONY_H_