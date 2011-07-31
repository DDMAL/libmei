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

/** \brief A mensural notation symbol that combines two or more notes into a single sign.*/
class Ligature: public MeiElement {
public:
	Ligature();
private:
};

/** \brief The <mensur> element is provided for the encoding of mensural notation. */
class Mensur: public MeiElement {
public:
	Mensur();
private:
};

/** \brief The <proportion> element is provided for the encoding of mensural notation.*/
class Proport: public MeiElement {
public:
	Proport();
private:
};

#endif // MENSURAL_H_