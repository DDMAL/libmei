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
#include <map>

#include <libxml/xmlreader.h>

#include "mei.h"
#include "meiattribute.h"
#include "exceptions.h"

#define REGISTER_DECLARATION(NAME) \
static NodeDerivedRegister<NAME> nodereg

#define REGISTER_DEFINITION(NAME,s) \
NodeDerivedRegister<NAME> NAME::nodereg(s)

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
		
		/** \brief The MeiElement Constructor, requires the element name (MEI tag name)
         */
		MeiElement(string name);
        
        /** \brief The MeiElement Constructor, taking in the element name and the associated XML prefix
         */
        MeiElement(string _name, string _value);
        
        MeiElement(string _name, string _value, string _prefix, string _ns, MeiElement * parent);
		
		virtual ~MeiElement();
        
        
        string getId();
        void setId(string _id);
        bool hasId();
        
		/** \brief Return the name of the Mei Element
         */
		string getName();
		
		/** \brief Set the name of the Mei Element
		 */
		void setName(string _name);
        
        /** \brief Return the namespace associated with the Mei Element
         */
        string getNs();
		void setNs(string _ns);
        
        string getPrefix();
        void setPrefix(string _prefix);
        
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
        
        /** \brief Compare two Mei Elements, 
         */
		bool meiCompare(MeiElement element1, MeiElement element2);
        
        
        vector<MeiAttribute*>& getAttributes();
        void setAttributes(vector<MeiAttribute*> _attrs);
        MeiAttribute* getAttribute(string _name) throw (AttributeNotFoundException);
        string getAttributeValue(string _name) throw (AttributeNotFoundException);
        void addAttribute(MeiAttribute *_attribute) throw (DuplicateAttributeException);
		
        void removeAttribute(string _name);
		
        bool hasAttribute(string _name);
        
        /** \brief Determine whether the element has a parent element
		 *
		 *	\return True if it does, False if it does not
		 */
		bool hasParent();
		
		/** \return the element's parent, if it exists.
		 */
		MeiElement *getParent();
		
		/** \brief sets the element's parent to the given Mei element
		 */
		void setParent(MeiElement *_parent);
		
		void removeParent();
        
        void addChild(MeiElement *child);
        void setChildren(vector<MeiElement*> children);
        vector<MeiElement*> getChildren();
        vector<MeiElement*> getChildrenByName(string _name) throw (ChildNotFoundException);
        MeiElement* getChildById(string cid) throw(ChildNotFoundException);
        void deleteAllChildren();
        void removeChildren(string cname);
        void removeChild(MeiElement *child);
        bool hasChildren(string cname);
        bool hasChild(MeiElement *child);
        
//        /** \brief Make the Mei element c the child of another Mei element, 
//         *         c is added to the list of children associated with the Mei element. 
//         */
//		template<class T>
//		void addChild(T* c) {
//			dynamic_cast<MeiElement*>(c)->setParent(this);
//			children_.push_back( dynamic_cast<MeiElement*>(c) );
//		}
        
        /** \brief Print the current Mei tree*/
		void print();
        
        /** \brief Print the current Mei tree given an indentation*/
		void print(int l);
					
    protected:
        MeiElement();
        
	private:
        string id_;
		string name_;
		string value_;
		string tail_;
		string ns_;
        string prefix_;
        
		vector<MeiAttribute*> attributes_;
		vector<MeiElement*> children_;
		MeiElement *parent_;
        

	};

// http://stackoverflow.com/questions/582331/c-is-there-a-way-to-instantiate-objects-from-a-string-holding-their-class-name/582456#582456

//template<typename T> MeiElement* createTFromNode(xmlNode* node) { return new T(node); }
//template<typename T> MeiElement* createTFromNode(xmlNode* node) { return new T(); }
//struct MeiFactory {
//    typedef std::map<std::string, MeiElement*(*)(xmlNode*)> node_map;
//
//    static MeiElement* createInstanceFromNode(std::string const& s, xmlNode* node) {
//        node_map::iterator it = getNodeMap()->find(s);
//        if(it == getNodeMap()->end())
//            return NULL;
//        return it->second(node);
//    }
//
//protected:
//    static node_map * getNodeMap() {
//        // never delete'ed. (exist until program termination)
//        // because we can't guarantee correct destruction order 
//        if(!nodemap) { nodemap = new node_map; } 
//        return nodemap; 
//    }
//private:
//    static node_map * nodemap;
//};
//
//template<typename T>
//struct NodeDerivedRegister : MeiFactory {
//	NodeDerivedRegister(std::string const& s) {
//		getNodeMap()->insert(std::make_pair(s, &createTFromNode<T>));
//	}
//};


struct BaseMeiElement : public MeiElement {
    MeiElement m_Base;
};

#endif // MEIELEMENT_H_
