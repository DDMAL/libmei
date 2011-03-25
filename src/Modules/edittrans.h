/*
 *  edittrans.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef EDITTRANS_H_
#define EDITTRANS_H_

#include "meielement.h"

class Add: public MeiElement {
public:
	Add();
private:
};

class Choice: public MeiElement {
public:
	Choice();
private:
};

class Corr: public MeiElement {
public:
	Corr();
private:
};

class Damage: public MeiElement {
public:
	Damage();
private:
};

class Del: public MeiElement {
public:
	Del();
private:
};

class Gap: public MeiElement {
public:
	Gap();
private:
};

class HandShift: public MeiElement {
public:
	HandShift();
private:
};

class Orig: public MeiElement {
public:
	Orig();
private:
};

class Reg: public MeiElement {
public:
	Reg();
private:
};

class Restore: public MeiElement {
public:
	Restore();
private:
};

class Sic: public MeiElement {
public:
	Sic();
private:
};

class Subst: public MeiElement {
public:
	Subst();
private:
};

class Supplied: public MeiElement {
public:
	Supplied();
private:
};

class Unclear: public MeiElement {
public:
	Unclear();
private:
};


#endif // EDITTRANS_H_