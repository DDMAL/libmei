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

#include <libxml/xmlreader.h>

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
		
		static MeiDocument* ReadFromXML(string docname, string encoding);
		void WriteToXML();
		
	private:
		string docname;
		string encoding;
		MeiElement* root;
		
		// Obtain information on the current node in an XML document being read
		static void XmlNodeToMei (xmlNode* node, MeiElement* parent);
		
	};

#endif // MEIDOCUMENT_H_
