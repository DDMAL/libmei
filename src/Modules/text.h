/*
 *  text.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef TEXT_H_
#define TEXT_H_

#include "meielement.h"

class Back: public MeiElement {
public:
	Back();
private:
};

class BlockQuote: public MeiElement	{
public:
	BlockQuote();
private:
};

class Div: public MeiElement {
public:
	Div();
private:
};

class Front: public MeiElement {
public:
	Front();
private:
};

class Ftrem: public MeiElement {
public:
	Ftrem();
private:
};

class Head: public MeiElement {
public:
	Head();
private:
};

class Item: public MeiElement {
public:
	Item();
private:
};

class L: public MeiElement	{
public:
	L();
private:
};

class Lg: public MeiElement	{
public:
	Lg();
private:
};

class List: public MeiElement {
public:
	List();
private:
};

#endif // TEXT_H_