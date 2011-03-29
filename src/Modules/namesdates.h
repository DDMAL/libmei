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

class CorpName: public MeiElement {
public:
	CorpName();
private:
};

class GeogName: public MeiElement {
public:
	GeogName();
private:
};

class PeriodName: public MeiElement {
public:
	PeriodName();
private:
};

class PersName: public MeiElement {
public:
	PersName();
private:
};

class StyleName: public MeiElement {
public:
	StyleName();
private:
};



#endif // NAMESDATES_H_