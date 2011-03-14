/*
 *  meidocument.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/11/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef MEIDOCUMENT_H_
#define MEIDOCUMENT_H_

#include <string>
#include <vector>
#include "meielement.h"

using std::string;
using std::vector;

class MeiDocument
	{
	public:
		MeiDocument(string docname, string encoding);
		
		string getName();
		string getEncoding();
		vector<MeiElement> getElements();
		
		void setEncoding(string encoding);
		
		void addElement(MeiElement element);
		void removeElement(MeiElement element);
		
	private:
		string docname;
		string encoding;
		
		MeiElement element (string name);
		vector<MeiElement> elements;
		
	};

#endif // MEIDOCUMENT_H_
