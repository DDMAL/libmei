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

struct MeiNs {
    string prefix;
    string href;
};

/** \brief  A representation of an MEI tag refering to a single element within a tree, 
 *          the element may contain attributes and children based on musical logic. 
 * 
 * MeiElements are in essence single tags in the MEI schema. 
 * They are stored as tree nodes each of which contains information within itself 
 * but is also part of a larger structure based on musical logic.
 * Major musical entities such as notes, chords and clefs are stored as MeiElements. 
 * Each element will need a name to exist and can contain a value and attributes as options to further define it.
 */

class MeiElement
	{
	public:
        /** \brief The MeiElement Constructor, requires the element name (MEI tag name)
         */
		MeiElement(string name);
        
        /** \brief The MeiElement Constructor, taking in the element name and the associated XML namespace
         */
        MeiElement(string name, MeiNs ns);
        
        /** \brief The MeiElement Constructor, taking in the element name and the associated XML prefix
         */
        MeiElement(string name, string prefix);
        
		/** \brief Return the name of the Mei Element
         */
		string getName();
        
        /** \brief Return the namespace associated with the Mei Element
         */
        MeiNs getNs();
        
        /** \brief Return the associated ID with the Mei Element
         */
        string getId();
        
        /** \brief Set the MeiElement ID */
        void setId(string id);
        
        /** \brief get the xml tail of an Mei Element
         * 
         *  \return The xml tail associated with the Mei Element or
         *          an empty string if the Mei Element has no tail
         */
		string getTail();
        
        /** \brief Set the xml tail associated with the Mei Element */
		void setTail(string tail);
        
        /** \brief Get the value associated with the Mei Element
         * \return A string indicating the value of the Mei Element or
         *         NULL if the element has no value
         */
        string getValue();
        
        /** \brief Set the value associated with the Mei Element */
		void setValue(string value);
        
        /** \brief Get a list of all the attributes associated with an Mei Element
         *  \return A vector of Mei Attributes describing the element or NULL if the element has no attributes
         */
		vector <MeiAttribute>& getAttributes();
        
        /** \brief Search and find an attribute on an Mei Element given its name 
         *  \return The Attribute associated with the given name or NULL if the attribute
         *          does not exist
         */
		MeiAttribute* getAttribute(string name);
        
        /** \brief Compare two Mei Elements, 
         */
		bool meiCompare(MeiElement element1, MeiElement element2);
        
        /** \brief
         */
		void addAttribute(MeiAttribute attribute);
        
        /** \brief
         */
		void removeAttribute(string name);
        
        /** \brief
         */
		bool hasAttribute(string name);
        
        /** \brief
         */
		vector <MeiElement>& getChildren();
        
        /** \brief
         */
		void addChild(MeiElement c);
        
        /** \brief
         */
		void removeChildren(string childName);
        
        /** \brief
         */
		//void removeChild(MeiElement c);
        
        /** \brief
         */
		bool hasChild(string childName);
        
        /** \brief
         */
        void addChildren(vector<MeiElement> children);
        
        /** \brief
         */
        MeiAttribute* getFacs();
        
        /** \brief
         */
        void setFacs(string uuid);
        
		void print();
		void print(int l);
				
	private:
        string id;
		string name;
		string value;
		string tail;
		
		MeiAttribute attribute(string name, string value);
		vector<MeiAttribute> attributes;
		vector<MeiElement> children;
        MeiNs ns;

	};

#endif // MEIELEMENT_H_
