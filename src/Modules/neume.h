/*
 *  neume_.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/14/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef NEUME_H_
#define NEUME_H_

#include "meielement.h"

class Ineume: public MeiElement	{
	public:
		Ineume();
	private:
	};

class Syllable: public MeiElement	{
public:
	Syllable();
private:
};

class Uneume: public MeiElement	{
	public:
		Uneume();
	private:
	};

// This is not in the MEI standard yet
class Division: public MeiElement	{
public:
	Division();
private:
};



#endif // NEUME_H_
