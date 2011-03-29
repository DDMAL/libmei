/*
 *  ptrref.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/29/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PTRREF_H_
#define PTRREF_H_

#include "meielement.h"

class ExtPtr: public MeiElement {
public:
	ExtPtr();
private:
};

class ExtRef: public MeiElement {
public:
	ExtRef();
private:
};

class Ptr: public MeiElement {
public:
	Ptr();
private:
};

class Ref: public MeiElement {
public:
	Ref();
private:
};








#endif // PTRREF_H_