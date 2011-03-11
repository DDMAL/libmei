/*
 *  meiattribute.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/4/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef MEIATTRIBUTE_H_
#define MEIATTRIBUTE_H_

#include <string> 

using std::string;

class MeiElement;

class MeiAttribute
	{
	public:
		MeiAttribute(string name, string value); 
		
		string getName(); 
		string getValue();		
		
	private:
		string name; 
		string value;
		//string prefix;
				
	};






#endif // MEIATTRIBUTE_H_