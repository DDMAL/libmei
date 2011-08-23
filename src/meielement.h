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

#include <libxml/xmlreader.h>

#include <string>
#include <vector>
#include <map>

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

/** \brief Base class to represent an element from the Mei schema.
 *
 * An MeiElement contains a name, which is the same as the XML tag from the schema.
 * Elements have an optional value, tail, attribute list, and children.
 *
 * An MeiElement has an optional ID. If the ID is set, this must be unique in the
 * document that this element is a part of.
 *
 * Elements from the Mei schema have a default namespace, but you can add an arbitrary element
 * to the document tree by setting its namespace value.
 *
 * You can create an MeiElement, but should probably use a subclass instead. That is,
 * use Note() instead of MeiElement("note").
 */
class MEI_EXPORT MeiElement
    {
    public:
        /** \brief Create a named MeiElement
         */
        MeiElement(string name);

        virtual ~MeiElement() {}

        /** \brief Get the id of this element.
         */
        const string getId();
        
        /** \brief Set the ID of this elelement.
         *
         *  The id MUST be unique in the document, if given.
         */
        void setId(string id);

        /** \brief Checks if the ID of the element is set.
         */
        bool hasId();
    
        /** \brief Get the name of this element
         */
        const string getName();

        /** \brief Return the namespace associated with the Mei Element
         */
        const string getNs();
        /** \brief Set the namespace for this element.
         *
         *  If not given, the default MEI namespace will be used.
         */
        void setNs(string ns);

        /** \brief get the xml tail of an Mei Element
         *
         *  \return The xml tail associated with the Mei Element or
         *          an empty string if the Mei Element has no tail
         */
        const string getTail();

        /** \brief Set the xml tail associated with the Mei Element */
        void setTail(string tail);

        /** \brief Get the value associated with the Mei Element
         *
         *  \return A string indicating the value of the Mei Element or
         *          an empty string if the element has no value
         */
        const string getValue();

        /** \brief Set the value associated with the Mei Element */
        void setValue(string value);

        /** \brief Get a list of all the attributes associated with an Mei Element
         *
         *  \return A const vector of the attributes on this element.
         */
        const vector<MeiAttribute*>& getAttributes();
        
        /**
         * \brief add all of the given attributes to this element.
         */
        void setAttributes(const vector<MeiAttribute*> attrs);
        
        /**
         * \brief Add an attribute to this element.
         *
         * If an attribute with the same name already exists on
         * this element, it is replaced.
         */
        void addAttribute(MeiAttribute *attribute);
        
        /**
         * \brief Convienence method to get the attribute with a given name.
         *
         * \return the attribute with this name, or NULL if the atribute doesn't exist.
         */
        MeiAttribute* getAttribute(string name);

        /**
         * \brief Remove the attribute with the given name.
         */
        void removeAttribute(string name);
        
        /**
         * \brief See if this element has an attribute with the given name.
         */
        bool hasAttribute(string name);

        /** \brief Check if this element has a parent element
         *
         *  \return True if it does, False if it does not
         */
        bool hasParent();

        /** \brief Get this element's parent, if it exists.
         */
        MeiElement *getParent();

        /** \brief sets this element's parent to the given element
         */
        void setParent(MeiElement *parent);

        /**
         * \brief Add another element as a child of this element.
         */
        void addChild(MeiElement *child);

        /**
         * \brief set the children of this element to be the given children.
         *
         * This will remove any existing children.
         */
        void setChildren(vector<MeiElement*> children);
        
        /**
         * \brief Get all of the children of this element.
         */
        const vector<MeiElement*>& getChildren();
        
        /**
         * \brief Get all of the children of this element that have a given name.
         */
        const vector<MeiElement*> getChildrenByName(string name);
        
        /**
         * \brief Remove all of the children of this element.
         *
         * The children are deleted and removed from the element.
         */
        void deleteAllChildren();
        
        /**
         * \brief Remove the children from this element that have a given name.
         */
        void removeChildrenWithName(string cname);
        
        /**
         * \brief Remove the specified element as a child from this element.
         *
         * Elements are compared by memory address. It is the responsibility
         * of the caller to free elements after they have been removed.
         */
        void removeChild(MeiElement *child);
        
        /**
         * \brief Check if this element has any children with the given name.
         */
        bool hasChildren(string cname);

        /** \brief Print a tree of elements with this one at the root. */
        void print();

        /** \brief Print a tree starting at this element, but indented.
         *  \param l the indentation level. 
         */
        void print(int l);

    private:
        string id;
        string name;
        string value;
        string tail;
        string ns;

        vector<MeiAttribute*> attributes;
        vector<MeiElement*> children;
        MeiElement *parent;
};

// This implements the element map for allowing the creation of an element given its
// name. e.g. "note" -> a Note object.
// http://stackoverflow.com/questions/582331/c-is-there-a-way-to-instantiate-objects-from-a-string-holding-their-class-name/582456#582456
template<typename T> MeiElement* createT() { return new T(); }

struct MeiFactory {
    typedef std::map<std::string, MeiElement*(*)()> default_map;

    static MeiElement* createInstance(std::string const& s) {
        default_map::iterator it = getMap()->find(s);
        if (it == getMap()->end()) {
            return NULL;
        }
        return it->second();
    }

    static bool inMap(std::string const& query) {
        default_map::iterator it = getMap()->find(query);
        if (it == getMap()->end()) {
            return false;
        }
        return true;
    }

protected:
    static default_map *getMap() {
        if (!defaultmap) {
            defaultmap = new default_map;
        }
        return defaultmap;
    }

private:
    static default_map *defaultmap;
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
    
    
    // a special type of MeiElement for holding text values. This has the unique name of 
    // "_text" to avoid any confusion with "real" MEI elements.
    class MEI_EXPORT MeiTextNode : public MeiElement {
        public:
            MeiTextNode();
            virtual ~MeiTextNode();
       
    };
    
    class MEI_EXPORT MeiCommentNode : public MeiElement {
        public:
            MeiCommentNode();
            virtual ~MeiCommentNode();
    };

}
#endif  // MEIELEMENT_H_
