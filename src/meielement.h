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

/** \brief  A representation of an MEI tag refering to an element in an MEI tree, 
 *          the element may contain attributes and child elements. 
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
        /** \brief overloading the == operator to allow comparison of two MeiElements.
		 */
		bool operator==(const MeiElement &other) const;
		
		MeiElement();
		
		/** \brief The MeiElement Constructor, requires the element name (MEI tag name)
         */
		MeiElement(string name);
        
        /** \brief The MeiElement Constructor, taking in the element name and the associated XML namespace
         */
        MeiElement(string name, MeiNs ns);
        
        /** \brief The MeiElement Constructor, taking in the element name and the associated XML prefix
         */
        MeiElement(string name, string prefix);
		
		virtual ~MeiElement();
        
		/** \brief Return the name of the Mei Element
         */
		string getName();
		
		/** \brief Set the name of the Mei Element
		 */
		void setName(string _name);
        
        /** \brief Return the namespace associated with the Mei Element
         */
        MeiNs getNs();
		void setNs(MeiNs ns);
        
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
        
        /** \brief Adds an attribute to the list of attributes associated with an Mei Element
         */
		void addAttribute(MeiAttribute attribute);
        
        /** \brief Find and delete an attribute associated with an Mei element using the attribute's name.
         */
		void removeAttribute(string name);
        
        /** \brief Determine whether an attribute is associated with an Mei element 
         *         given the attribute's name
         *
         *  \return True if the attribute exists, False if it does not
         */
		bool hasAttribute(string name);
        
		/** \brief Determine whether the element has a parent element
		 *
		 *	\return True if it does, False if it does not
		 */
		bool hasParent();
		
		/** \return the element's parent, if it exists.
		 */
		MeiElement &getParent();
		
		/** \brief sets the element's parent to the given Mei element
		 */
		void setParent(MeiElement &_parent);
		
		void removeParent();
		
        /** \brief Obtain a list of all the child elements of an Mei element
         *  \return A vector of Mei elements (the element's children)
         */
		vector <MeiElement*>& getChildren();
        
        /** \brief Make the Mei element c the child of another Mei element, 
         *         c is added to the list of children associated with the Mei element. 
         */
		void addChild(MeiElement *c);
        
        /** \brief Find and remove an element from the children of an Mei element using
         *         the child element's name
         */
		void removeChildren(string childName);
        
        /** \brief If the MeiElement has a child matching the given MeiElement exactly,
		 *			it is removed from the array of its children.
         */
		void removeChild(MeiElement *c);
        
        /** \brief Determine whether an element is a child of another Mei element
         *  
         *  \return TRUE if the parent-child association exists between the elements,
         *          otherwise FALSE
         */
		bool hasChild(string childName);
        
        /** \brief Make multiple Mei elements children of a parent Mei element, 
         *         the child elements must be in a vector to be added similtaneously
         */
        void addChildren(vector<MeiElement*> children);
        
        /** \brief Get the facsimile*/
        MeiAttribute* getFacs();
        
        /** \brief Set the facsimile*/
        void setFacs(string uuid);
		
		/** \return the element's corresponding zone
		 */
		MeiElement* getZone();
		
		/** \brief set the zone node associated to the element to a given Mei Element
		 */
		void setZone(MeiElement* element);
        
        /** \brief Print the current Mei tree*/
		void print();
        
        /** \brief Print the current Mei tree given an indentation*/
		void print(int l);
				
	private:
        string id;
		string name;
		string value;
		string tail;
		
		MeiAttribute attribute(string name, string value);
		vector<MeiAttribute> attributes;
		vector<MeiElement*> children;
		MeiElement *zone;
		MeiElement *parent;
        MeiNs ns;

	};

#endif // MEIELEMENT_H_
