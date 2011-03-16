/*
 *  shared.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/14/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef SHARED_H_
#define SHARED_H_

#include "meielement.h"
#include "meiattribute.h"
#include "exceptions.h"

class Note: public MeiElement 
	{
	public:
		Note();
		string getPitchName() throw (invalidAttribute);
		void setPitchName(string pitchname);
		
	private:
		string pitchname;
	};

class Clef: public MeiElement 
	{
	public:
		Clef();
	private:
	};

class KeySig: public MeiElement 
	{
	public:
		KeySig();
	private:
	};


#endif // SHARED_H_
