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

class Ineume: public MeiElement
	{
	public:
		Ineume(string value);
	private:
	};


class Uneume: public MeiElement
	{
	public:
		Uneume(string value);
	private:
	};



#endif // NEUME_H_
