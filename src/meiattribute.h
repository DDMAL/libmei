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
		MeiAttribute(string attrname, string attrvalue);
		
		string getName();
        void setName(string attrname);
        
		string getValue();
		void setValue(string attrvalue);
        
        string getPrefix();
        void setPrefix(string prfx);
		
	private:
		string name;
		string value;
		string prefix;
	};






#endif // MEIATTRIBUTE_H_
