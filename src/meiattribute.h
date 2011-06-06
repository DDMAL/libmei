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

/** \brief  A representation of an attribute associated to an element in the MEI schema, 
 *          attributes describe the properties of the Mei Element. 
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
        /** \brief The MeiAttribute Constructor, requires the attribute name and value*/
		MeiAttribute(string attrname, string attrvalue);
		
		virtual ~MeiAttribute() {}
		
        bool operator==(const MeiAttribute &other) const;
		
		/** \brief Get the name of the attribute.
         *
         *  Each attribute is created with a name and value, the attribute cannot exist without a name
         *  \return string containing the attribute name.
         */
		string getName();
        
        /** \brief Set/Change the name of an attribute*/
        void setName(string attrname);
        
        /** \brief Get the value of the attribute.
         *  \return A string indicating the attribute value
         */
		string getValue();

        /** \brief Set/change the value of an attribute*/
		void setValue(string attrvalue);
        
        /** \brief Get the prefix associated with an attribute
         */
        string getPrefix();

        /** \brief Set/change the prefix associated with an attribute*/
        void setPrefix(string prfx);
		
	private:
		string name;
		string value;
		string prefix;
	};






#endif // MEIATTRIBUTE_H_
