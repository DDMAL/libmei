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
		
		string getDocName();
        void setDocName(string docname);
        
		string getEncoding();
		
		void setEncoding(string encoding);

		MeiElement* getRootElement();
		void setRootElement(MeiElement* root);
		
	private:
		string docname;
		string encoding;
		MeiElement* root;
	};

#endif // MEIDOCUMENT_H_
