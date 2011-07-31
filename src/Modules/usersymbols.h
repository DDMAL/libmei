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

/** \brief */
class AnchoredText: public MeiElement {
	public:
		AnchoredText();
	private:
	};

/** \brief */
class Curve: public MeiElement {
public:
	Curve();
private:
};

/** \brief */
class Line: public MeiElement {
public:
	Line();
private:
};

/** \brief */
class Symbol: public MeiElement {
public:
	Symbol();
private:
};

/** \brief */
class SymbolDef: public MeiElement {
public:
	SymbolDef();
private:
};

/** \brief */
class SymbolTable: public MeiElement {
public:
	SymbolTable();
private:
};

#endif // USERSYMBOLS_H_