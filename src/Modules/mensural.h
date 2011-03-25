/*
 *  mensural.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */


#ifndef MENSURAL_H_
#define MENSURAL_H_

#include "meielement.h"

class Ligature: public MeiElement {
public:
	Ligature();
private:
};

class Mensur: public MeiElement {
public:
	Mensur();
private:
};

class Proport: public MeiElement {
public:
	Proport();
private:
};

#endif // MENSURAL_H_