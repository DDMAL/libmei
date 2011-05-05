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

/** \brief  A representation of an attribute associate to an element within the MEI schema, 
 *          in essence describing the properties of the Mei Element. 
 * 
 * MeiAttributes are descriptors associated with MeiElements and are stored on the element. 
 * Each MeiAttribute needs a name and a value to be created and read. 
 * An MeiElement can have more than one attribute; 
 * all attributes are stored in the order they are created on the element. 
 * 
 */
class MeiAttribute
	{
	public:
        /** \brief The MeiAttribute Constructor, requires the attribute name and value
         */
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
