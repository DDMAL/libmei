/*
 *  namesdates.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/29/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef NAMESDATES_H_
#define NAMESDATES_H_

#include "meielement.h"

/** \brief corporate name*/
class CorpName: public MeiElement {
public:
	CorpName();
private:
};

/** \brief geographic name*/
class GeogName: public MeiElement {
public:
	GeogName();
private:
};

/** \brief Period Name - A label that describes a period of time*/
class PeriodName: public MeiElement {
public:
	PeriodName();
private:
};

/** \brief Personal name - designation of an individual*/
class PersName: public MeiElement {
public:
	PersName();
private:
};

/** \brief A label for a characteristic style of writing or performance, such as 'bebop' or 'rock-n-roll.*/
class StyleName: public MeiElement {
public:
	StyleName();
private:
};



#endif // NAMESDATES_H_