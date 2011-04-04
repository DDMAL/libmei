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
		
		static MeiDocument* ReadFromXml(string docname, string encoding);
		void WriteToXml(MeiDocument* meidoc);
		
	private:
		string docname;
		string encoding;
		MeiElement* root;
		
		// Read Information off an XMLNode tree to create an Mei one
		static void XmlNodeToMei (xmlNode* node, MeiElement* parent);
        
        // Read Information from an MEI tree to create an XML tree  
		static void MeiToXmlNode (MeiElement meiparent, xmlNodePtr xmlparent);

	};

#endif // MEIDOCUMENT_H_
