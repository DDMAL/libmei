/*
 *  usersymbols.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/29/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef USERSYMBOLS_H_
#define USERSYMBOLS_H_

#include "meielement.h"

class AnchoredText: public MeiElement {
	public:
		AnchoredText();
	private:
	};

class Curve: public MeiElement {
public:
	Curve();
private:
};

class Line: public MeiElement {
public:
	Line();
private:
};

class Symbol: public MeiElement {
public:
	Symbol();
private:
};

class SymbolDef: public MeiElement {
public:
	SymbolDef();
private:
};

class SymbolTable: public MeiElement {
public:
	SymbolTable();
private:
};

#endif // USERSYMBOLS_H_