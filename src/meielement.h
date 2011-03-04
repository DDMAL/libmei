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
#include <vector> 

using std::string;
using std::vector;

class MeiAttribute; 

class MeiElement
	{
	public:
		MeiElement(string name);
		
		string getName(); 
		string getTail(); 
		string getValue();
		
		vector <MeiAttribute> getAttributes();
		
		void addAttribute(MeiAttribute attribute);
		void removeAttribute(MeiAttribute attribute);
		
		void setValue(string value);

		
	private:
		string name;
		string value;
		string tail;
		
		MeiAttribute attribute(string name, string value);
		vector<MeiAttribute> attributes;
		
		MeiElement child (string name); 
		vector<MeiElement> children;
		

	};








#endif // MEIELEMENT_H_