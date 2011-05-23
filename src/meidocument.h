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
		
        /** \brief Get the name of the document
         *  
         *  Each document is initially creating with a name and encoding thus a document 
         *  name must exist if a valid Mei document exists
         *  \return The document name
         */
		string getDocName();
        
        /** \brief Set/change the name of the Mei document */
        void setDocName(string docname);
        
        /** \brief Get the string indicating the Mei document encoding*/
		string getEncoding();
		
        /** \brief Set/change the encoding of the Mei document*/
		void setEncoding(string encoding);
        
        /** \brief Find the root element of the tree structure in the Mei document*/
		MeiElement* getRootElement();
		
        /** \brief Make an Mei element the Root element of a document*/
        void setRootElement(MeiElement* root);
        
		
        /** \brief Read an Mei file in XMl format and create an Mei Document containing the Mei tree structure.
         *
         *  The xml file is found using its name and encoding. The method will go through the xml structure recursively
         *  and create an Mei tree accordingly.
         *  \return An Mei Document containing the Mei tree structure or NULL if the XML file does not exist
         */
		static MeiDocument* ReadFromXml(string docname, string encoding);
		
        /** \brief Take an Mei Document and convert it to Xml format; creates an xml output.
         *  
         *  The method will go through the Mei Document structure recursively and create xml tags
         *  maintaining the same element structure and attributes. A final xml file is created and written
         *  to a filename and location in the directory.
         */
        void WriteToXml(MeiDocument* meidoc);
		
	private:
		string docname;
		string encoding;
		MeiElement* root;
		
		// Read Information off an XMLNode tree to create an Mei one
		static void XmlNodeToMei (xmlNode* node, MeiElement* parent, MeiElement *root);
        
        // Read Information from an MEI tree to create an XML tree  
		static void MeiToXmlNode (MeiElement meiparent, xmlNodePtr xmlparent, xmlNodePtr xmlroot, xmlDocPtr xmldoc);

	};

#endif // MEIDOCUMENT_H_
