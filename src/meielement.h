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

#include "meiattribute.h"

using std::string;
using std::vector;

class MeiElement
	{
	public:
		MeiElement(string name);
		
		string getName();
		string getTail();
		string getValue();
		
		vector <MeiAttribute> getAttributes();
		MeiAttribute* getAttribute(string name);
		bool meiCompare(MeiElement element1, MeiElement element2);
		
		void addAttribute(MeiAttribute attribute);
		void removeAttribute(string name);
		bool hasAttribute(string name);
		
		void setValue(string value);
		
		vector <MeiElement> getChildren();
		void addChild(MeiElement child);
		void removeChild(MeiElement child);
		bool hasChild(MeiElement child);

		
	private:
		string name;
		string value;
		string tail;
		
		MeiAttribute attribute(string name, string value);
		vector<MeiAttribute> attributes;
		vector<MeiElement> children;

	};

#endif // MEIELEMENT_H_
