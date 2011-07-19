/*
 Copyright (c) 2011 Mahtab Ghamsari-Esfahani, Jamie Klassen, Alastair Porter, Andrew Hankinson
 
 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including
 without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to
 the following conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <libxml/xmlreader.h>
#include "meidocument.h"

class MeiXmlInputStream {
public:
	MeiXmlInputStream();
	virtual ~MeiXmlInputStream() {};
	/** \brief Read an Mei file in XMl format and create an Mei Document containing the Mei tree structure.
	 *
	 *  The xml file is found using its name and encoding. The method will go through the xml structure recursively
	 *  and create an Mei tree accordingly.
	 *  \return An Mei Document containing the Mei tree structure or NULL if the XML file does not exist
	 */
	static MeiDocument* ReadFromXml(string docname, string encoding);
	
private:
	// Read Information off an XMLNode tree to create an Mei one
	static void XmlNodeToMei (xmlNode* node, MeiElement* parent);
};

class MeiXmlOutputStream {
public:
	MeiXmlOutputStream();
	virtual ~MeiXmlOutputStream() {};
	/** \brief Take an Mei Document and convert it to Xml format; creates an xml output.
	 *  
	 *  The method will go through the Mei Document structure recursively and create xml tags
	 *  maintaining the same element structure and attributes. A final xml file is created and written
	 *  to a filename and location in the directory.
	 */
	void WriteToXml(MeiDocument* meidoc);
	
private:
	// Read Information from an MEI tree to create an XML tree  
	static void MeiToXmlNode (MeiElement *meiparent, xmlNodePtr xmlparent, xmlNodePtr xmlroot, xmlDocPtr xmldoc);
};
