/*
 *  figtable.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef FIGTABLE_H_
#define FIGTABLE_H_

#include "meielement.h"

class Fig: public MeiElement {
public:
	Fig();
private:
};

class FigDesc: public MeiElement {
public:
	FigDesc();
private:
};

class Graphic: public MeiElement {
public:
	Graphic();
private:
};

class Table: public MeiElement {
public:
	Table();
private:
};

class Td: public MeiElement {
public:
	Td();
private:
};

class Th: public MeiElement {
public:
	Th();
private:
};

class Tr: public MeiElement {
public:
	Tr();
private:
};




#endif //FIGTABLE_H_