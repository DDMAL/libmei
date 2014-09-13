/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter and Others

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

#include "meicommon.h"
#include "meinamespace.h"
#include "meiattribute.h"
#include "exceptions.h"

#define REGISTER_DECLARATION(NAME) \
static DerivedRegister<NAME> nodereg

// This is namespaced because it appears in the implementation files.
#define REGISTER_DEFINITION(NAME, s) \
mei::DerivedRegister<NAME> NAME::nodereg(s)

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

// Forward declaration
class MeiDocument;

class MEI_EXPORT MeiElement
    {
    public:
        /** \brief Create a named MeiElement
         */
        MeiElement(std::string name);

        /*
         * \brief Copy constructor
         *
         * The copied element will not be tied to a document
         */
        MeiElement(const MeiElement& ele);

        virtual ~MeiElement();

        /** \brief Get the id of this element.
         */
        const std::string getId();

        /** \brief Set an element's ID. 
         *   This is not always necessary since an element
         *   that does not have an ID will be assigned a 
         *   random UUID string automatically if the ID is not set.
         */
        void setId(std::string id);

        /** \brief Checks if the ID of the element is set.
         */
        bool hasId();

        /** \brief Get the name of this element
         */
        const std::string getName();

        /** \brief get the xml tail of an Mei Element
         *
         *  \return The xml tail associated with the Mei Element or
         *          an empty string if the Mei Element has no tail
         */
        const std::string getTail();

        /** \brief Set the xml tail associated with the Mei Element */
        void setTail(std::string tail);

        /** \brief Get the value associated with the Mei Element
         *
         *  \return A string indicating the value of the Mei Element or
         *          an empty string if the element has no value
         */
        const std::string getValue();

        /** \brief Set the value associated with the Mei Element */
        void setValue(std::string value);

        /** \brief Get a list of all the attributes associated with an Mei Element
         *
         *  \return A const vector of the attributes on this element.
         */
        const std::vector<MeiAttribute*>& getAttributes();

        /**
         * \brief add all of the given attributes to this element.
         */
        void setAttributes(const std::vector<MeiAttribute*> attrs);

        /**
         * \brief Add an attribute to this element.
         *
         * If an attribute with the same name already exists on
         * this element, it is replaced.
         */
        void addAttribute(MeiAttribute *attribute);

        /**
         * \brief Add an attribute attrname with a value attrvalue. 
         *  Creates an MeiAttribute object and adds it to the element.
         *
         * If an attribute with the same name already exists on
         * this element, it is replaced
         */
        void addAttribute(std::string attrname, std::string attrvalue);

        /**
         * \brief Convienence method to get the attribute with a given name.
         *
         * \return the attribute with this name, or NULL if the atribute doesn't exist.
         */
        MeiAttribute* getAttribute(std::string name);

        /**
         * \brief Remove the attribute with the given name.
         */
        void removeAttribute(std::string name);

        /**
         * \brief See if this element has an attribute with the given name.
         */
        bool hasAttribute(std::string name);

        /** \brief Check if this element has a parent element
         *
         *  \return True if it does, False if it does not
         */
        bool hasParent();

        /** \brief Get this element's parent, if it exists.
         */
        MeiElement *getParent();

        /** \brief Links this element and it's children to the given document
         *
         *  Also updates the document id map for getElementById lookups
         */
        void setDocument(MeiDocument *doc) throw (DocumentRootNotSetException);

        /** \brief Gets a pointer to the document this element is attached to.
         */
        MeiDocument* getDocument();

        /** \brief Removes the pointer from this element and it's children to its currently assigned document
         *
         *  Also updates the document id map for getElementById lookups
         */
        void removeDocument();

        /** \brief sets this element's parent to the given element
         */
        void setParent(MeiElement *parent);

        /**
         * \brief Add another element as a child of this element.
         *  The child is added at the end of all other children.
         */
        void addChild(MeiElement *child);

        /**
         * \brief Add an element as a child before the specifed element.
         */
        void addChildBefore(MeiElement *before, MeiElement *child);

        /**
         * \brief set the children of this element to be the given children.
         *
         * This will remove any existing children.
         */
        void setChildren(std::vector<MeiElement*> children);

        /**
         * \brief Get all of the children of this element.
         */
        const std::vector<MeiElement*>& getChildren();

        /**
         * \brief Get all of the children of this element that have a given name.
         */
        const std::vector<MeiElement*> getChildrenByName(std::string name);

        /**
         * \brief Remove all of the children of this element.
         *
         * The children are deleted and removed from the element.
         */
        void deleteAllChildren();

        /**
         * \brief Remove the children from this element that have a given name.
         */
        void removeChildrenByName(std::string cname);

        /**
         * \brief Remove the specified element as a child from this element.
         *
         * Elements are compared by memory address. It is the responsibility
         * of the caller to free elements after they have been removed.
         */
        void removeChild(MeiElement *child);

        /**
         * \brief Check if this element has any children.
         */
        bool hasChildren();

        /**
         * \brief Check if this element has any children with the given name.
         */
        bool hasChildren(std::string cname);

        /**
         *  \brief Get the ancestor with a given element name
         *
         *  \return MeiElement, or NULL if no ancestor is found.
         */
        MeiElement* getAncestor(std::string name);

        /**
         *  \brief Returns TRUE if this element has an ancestor element 
         *     with a given name; FALSE otherwise
         */   
        bool hasAncestor(std::string name);

        /**
         *  \brief Get all descendants of the current element.
         */
        std::vector<MeiElement*> getDescendants();

        /**
         *  \brief Get all descendants of the current element that match
         *     a given name
         */
        std::vector<MeiElement*> getDescendantsByName(std::string name);

        /**
         *  \brief Get all the peer elements of the current element.
         *      Note that this will return a list of all the children
         *      of this objects parent, including itself. This is done
         *      so that we can preserve ordering amongst peer elements.
         *      In other words, removing self from the list of peer 
         *      elements would be a bad idea, since we wouldn't know 
         *      where this element occurs in relation to its peers.
         *
         *  \return A vector of MeiElements (possibly empty).
         */
        std::vector<MeiElement*> getPeers();

        /** \brief Gets this item's position in the flattened document structure.
         *      Position is numbered by the order the elements occur, so the first
         *      element is 0, the next 1, and so on.
         *  
         *  \return Integer index of the item's position, or -1 if either the element's
         *      document is not set, or the element is not found in the document.
         *
         */
        int getPositionInDocument();

        /** \brief Looks backwards from this element. Wrapper around the document->lookBack()
         *     method.
         */
        MeiElement* lookBack(std::string name);

        const std::vector<MeiElement*> flatten();

        /** \brief Print a tree of elements with this one at the root. */
        void print();

        /** \brief Print a tree starting at this element, but indented.
         *  \param l the indentation level.
         */
        void print(int l);
        template<typename T> static MeiElement* createT(std::string id);

        void updateDocument();
    private:
        /**
         * Call back to the document to update its internal representation
         * of the flatened element tree.
         */
        void generateAndSetId();
        std::string id;
        std::string name;
        std::string value;
        std::string tail;
        std::string ns;

        std::vector<MeiAttribute*> attributes;
        std::vector<MeiElement*> children;
        MeiElement *parent;
        MeiDocument *document;
};

// This implements the element map for allowing the creation of an element given its
// name. e.g. "note" -> a Note object.
// http://stackoverflow.com/questions/582331/c-is-there-a-way-to-instantiate-objects-from-a-string-holding-their-class-name/582456#582456
template<typename T> MeiElement* MeiElement::createT(std::string id) {
    MeiElement *ret = new T();
    if (id == "") {
        ret->generateAndSetId();
    } else {
        ret->setId(id);
    }
    return ret;
}

struct MeiFactory {
    typedef std::map<std::string, MeiElement*(*)(std::string)> default_map;
    /**
     * \brief Create an instance of the element registered for the give type name.
     * Types register a string using the REGISTER_DEFINITION and REGISTER_DECLARATION
     * macros. The ID is optional. If it is not given, a new ID will be generated.
     * \return an instance of the element, or NULL if the type doesn't exist.
     */
    static MeiElement* createInstance(std::string const& s, std::string const& id) throw(ElementNotRegisteredException) {
        default_map::iterator it = getMap()->find(s);
        if (it == getMap()->end()) {
            throw ElementNotRegisteredException(s);
        }
        return it->second(id);
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
            getMap()->insert(std::make_pair(s, &MeiElement::createT<T>));
        }
    };

    class MEI_EXPORT MeiCommentNode : public MeiElement {
        public:
            MeiCommentNode();
            virtual ~MeiCommentNode();
    };
}
#endif  // MEIELEMENT_H_
