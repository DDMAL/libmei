/*
 *  facsimile.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef FACSIMILE_H_
#define FACSIMILE_H_

#include "meielement.h"

/** \brief Contains a representation of some written source in the form of a set of images rather than as transcribed or encoded text. */
class Facsimile: public MeiElement {
public:
	Facsimile();
private:
};

/** \brief Defines a written surface in terms of a rectangular coordinate space.*/
class Surface: public MeiElement {
public:
	Surface();
private:
};

/** \brief Defines a rectangular area contained within a surface.*/
class Zone: public MeiElement {
public:
	Zone();
private:
};

#endif // FACSIMILE_H_