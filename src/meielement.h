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
static DerivedRegister<NAME> nodereg

// This is namespaced because it appears in the implementation files.
#define REGISTER_DEFINITION(NAME, s) \
mei::DerivedRegister<NAME> NAME::nodereg(s)

using std::string;
using std::vector;

namespace mei {
/** \brief  A representation of an MEI tag refering to an element in an MEI tree,
 *          the element may contain attributes and child elements.
 *
 * MeiElements are in essence single tags in the MEI schema.
 * They are stored as tree nodes each of which contains information within itself
 * but is also part of a larger structure based on musical logic.
 * Major musical entities such as notes, chords and clefs are stored as MeiElements.
 * Each element will need a name to exist and can contain a value and attributes as options to further define it.
 */

class MEI_EXPORT MeiElement
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
        MeiElement(string name, string value);

        MeiElement(string name, string value, string prefix, string ns, MeiElement * parent);

        virtual ~MeiElement();


        string getId();
        void setId(string id);
        bool hasId();

        /** \brief Return the name of the Mei Element
         */
        string getName();

        /** \brief Set the name of the Mei Element
         */
        void setName(string name);

        /** \brief Return the namespace associated with the Mei Element
         */
        string getNs();
        void setNs(string ns);

        string getPrefix();
        void setPrefix(string prefix);

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
        void setAttributes(vector<MeiAttribute*> attrs);
        MeiAttribute* getAttribute(string name) throw (AttributeNotFoundException);
        string getAttributeValue(string name) throw (AttributeNotFoundException);
        void addAttribute(MeiAttribute *attribute) throw (DuplicateAttributeException);

        void removeAttribute(string name);

        bool hasAttribute(string name);

        /** \brief Determine whether the element has a parent element
         *
         *  \return True if it does, False if it does not
         */
        bool hasParent();

        /** \return the element's parent, if it exists.
         */
        MeiElement *getParent();

        /** \brief sets the element's parent to the given Mei element
         */
        void setParent(MeiElement *parent);

        void removeParent();

        void addChild(MeiElement *child);
        void setChildren(vector<MeiElement*> children);
        vector<MeiElement*> getChildren();
        vector<MeiElement*> getChildrenByName(string name) throw (ChildNotFoundException);
        MeiElement* getChildById(string cid) throw(ChildNotFoundException);
        void deleteAllChildren();
        void removeChildren(string cname);
        void removeChild(MeiElement *child);
        bool hasChildren(string cname);
        bool hasChild(MeiElement *child);

//        /** \brief Make the Mei element c the child of another Mei element,
//         *         c is added to the list of children associated with the Mei element.
//         */
//      template<class T>
//      void addChild(T* c) {
//          dynamic_cast<MeiElement*>(c)->setParent(this);
//          children_.push_back( dynamic_cast<MeiElement*>(c) );
//      }

        /** \brief Print the current Mei tree*/
        void print();

        /** \brief Print the current Mei tree given an indentation*/
        void print(int l);

    protected:
        MeiElement();

    private:
        string id;
        string name;
        string value;
        string tail;
        string ns;
        string prefix;

        vector<MeiAttribute*> attributes;
        vector<MeiElement*> children;
        MeiElement *parent;


    };

// http://stackoverflow.com/questions/582331/c-is-there-a-way-to-instantiate-objects-from-a-string-holding-their-class-name/582456#582456

    //template<typename T> MeiElement* createTFromNode(xmlNode* node) { return new T(node); }
    template<typename T> MeiElement* createT() { return new T(); }

    struct MeiFactory {
        //typedef std::map<std::string, MeiElement*(*)(xmlNode*)> node_map;
        typedef std::map<std::string, MeiElement*(*)()> default_map;

       // static MeiElement* createInstanceFromNode(std::string const& s, xmlNode* node) {
       //     node_map::iterator it = getNodeMap()->find(s);
       //     if(it == getNodeMap()->end())
       //         return NULL;
       //     return it->second(node);
       // }

        static MeiElement* createInstance(std::string const& s) {

            default_map::iterator it = getMap()->find(s);
            if(it == getMap()->end())
                return NULL;
            return it->second();

        }

        static bool inMap(std::string const& query) {
            default_map::iterator it = getMap()->find(query);
            if(it == getMap()->end())
                return false;
            return true;
        }

    protected:
        // static node_map * getNodeMap() {
        //     // never delete'ed. (exist until program termination)
        //     // because we can't guarantee correct destruction order
        //     if(!nodemap) { nodemap = new node_map; }
        //     return nodemap;
        // }
        static default_map * getMap() {
            if(!defaultmap) { defaultmap = new default_map; }
            return defaultmap;
        }

    private:
        // static node_map * nodemap;
        static default_map * defaultmap;
    };

    template<typename T>
    struct DerivedRegister : MeiFactory {
        DerivedRegister(std::string const& s) {
            getMap()->insert(std::make_pair(s, &createT<T>));
        }
    };

    // template<typename T>
    // struct NodeDerivedRegister : MeiFactory {
    //     NodeDerivedRegister(std::string const& s) {
    //         getNodeMap()->insert(std::make_pair(s, &createTFromNode<T>));
    //     }
    // };

}
#endif // MEIELEMENT_H_

