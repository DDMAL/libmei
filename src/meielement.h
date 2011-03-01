/*
 *  meielement.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/1/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef MEIELEMENT_H_
#define MEIELEMENT_H_

#include <string> 

using std::string;

class MeiElement
	{
	public:
		MeiElement(string name);
		
		string getName(); 
		
		
	private:
		string name;
		string value;
		string tail;

	};








#endif // MEIELEMENT_H_