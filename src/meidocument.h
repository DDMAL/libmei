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

/** \brief The entity which will contains all the elements and attributes 
 *         storing a musical piece in the MEI schema. 
 * 
 * An MeiDocument is the first entity created or used when reading and writing MEI files. 
 * All musical information for a piece is stored as a tree of MeiElements within the MeiDocument. 
 * The document itself contains a name and an encoding, both of which are needed to identify it. 
 * MeiDocuments can be written to and Read from XML.
 */

class MeiDocument
	{
	public:
        /** \brief The MeiDocument Constructor, requires the document name and encoding
         */
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
		static void MeiToXmlNode (MeiElement meiparent, xmlNodePtr xmlparent, xmlNodePtr xmlroot, xmlDocPtr xmldoc);

	};

#endif // MEIDOCUMENT_H_
