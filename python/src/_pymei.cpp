#include "Python.h"
#include <mei/meinamespace.h>
#include <mei/meielement.h>
#include <mei/meiattribute.h>
#include <mei/meidocument.h>
#include <mei/xmlimport.h>
#include <mei/xmlexport.h>

#include <boost/python.hpp>
#include <boost/python/tuple.hpp>
#include <boost/python/iterator.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>
#include <iostream>
#include <vector>
#include <string>

using namespace boost::python;
using namespace std;

using mei::MeiNamespace;
using mei::MeiElement;
using mei::MeiAttribute;
using mei::MeiDocument;
using mei::XmlImport;
using mei::XmlExport;

typedef vector<MeiElement*> MeiElementList;
typedef vector<MeiAttribute*> MeiAttributeList;

bool MeiElement_EqualWrap(const MeiElement* x, const MeiElement* y) { return x == y; }
bool MeiElement_NEqualWrap(const MeiElement* x, const MeiElement* y) { return x != y; }

bool MeiDocument_EqualWrap(const MeiDocument* x, const MeiDocument* y) { return x == y; }
bool MeiDocument_NEqualWrap(const MeiDocument* x, const MeiDocument* y) { return x != y; }

bool MeiAttribute_EqualWrap(const MeiAttribute* x, const MeiAttribute* y) { return x == y; }
bool MeiAttribute_NEqualWrap(const MeiAttribute* x, const MeiAttribute* y) { return x != y; }

bool MeiNamespace_EqualWrap(const MeiNamespace* x, const MeiNamespace* y) { return x == y; }
bool MeiNamespace_NEqualWrap(const MeiNamespace* x, const MeiNamespace* y) { return x != y; }

bool MeiElementList_EqualWrap(const MeiElementList x, const MeiElementList y) { return x == y; }
bool MeiElementList_NEqualWrap(const MeiElementList x, const MeiElementList y) { return x != y; }
bool MeiElementList_NonZero(const MeiElementList x) { return !x.empty(); }

bool MeiAttributeList_EqualWrap(const MeiAttributeList x, const MeiAttributeList y) { return x == y; }
bool MeiAttributeList_NEqualWrap(const MeiAttributeList x, const MeiAttributeList y) { return x != y; }
bool MeiAttributeList_NonZero(const MeiAttributeList x) { return !x.empty(); }

BOOST_PYTHON_MODULE(_pymei) {

    docstring_options local_docstring_options(true, true, false);

    class_<MeiElementList>("MeiElementList")
        .def(vector_indexing_suite<MeiElementList>())
        .def("__eq__", &MeiElementList_EqualWrap)
        .def("__ne__", &MeiElementList_NEqualWrap)
        .def("__iter__", boost::python::iterator<MeiElementList>())
        .def("__nonzero__", &MeiElementList_NonZero)
    ;

    class_<MeiAttributeList>("MeiAttributeList")
        .def(vector_indexing_suite<MeiAttributeList>())
        .def("__eq__", &MeiAttributeList_EqualWrap)
        .def("__ne__", &MeiAttributeList_NEqualWrap)
        .def("__iter__", boost::python::iterator<MeiAttributeList>())
        .def("__nonzero__", &MeiAttributeList_NonZero)
    ;

    // class_<MeiElementListRef>("MeiElementListRef")
    //     .def(vector_indexing_suite<MeiElementListRef>())
    // ;

    class_<MeiNamespace, MeiNamespace*>("MeiNamespace", init<string, string>())
        .def("__eq__", &MeiNamespace_EqualWrap)
        .def("__ne__", &MeiNamespace_NEqualWrap)
        .def("getHref", &MeiNamespace::getHref)
        .def("getPrefix", &MeiNamespace::getPrefix)
    ;

    void (MeiElement::*addAttributeByObject)(MeiAttribute*) = &MeiElement::addAttribute;
    void (MeiElement::*addAttributeByString)(string, string) = &MeiElement::addAttribute;
    void (MeiElement::*setDocument)(MeiDocument*) = &MeiElement::setDocument;
    bool (MeiElement::*hasChildrenBool)() = &MeiElement::hasChildren;
    bool (MeiElement::*hasChildrenArgs)(string) = &MeiElement::hasChildren;
    void (MeiElement::*printAll)() = &MeiElement::print;
    void (MeiElement::*printLvl)(int) = &MeiElement::print;
    
    MeiElement* (MeiDocument::*getElementById)(string) = &MeiDocument::getElementById;

    // MeiDocument* (XmlImport::*documentFromFileStr)(const string) = &XmlImport::documentFromFile;
    
    class_<XmlImport>("XmlImport", init<>())
        .def("documentFromText", &XmlImport::documentFromText, return_value_policy<manage_new_object>())
        .staticmethod("documentFromText")

        .def("documentFromFile", &XmlImport::documentFromFile, return_value_policy<manage_new_object>())
        .staticmethod("documentFromFile")
    ;

    class_<XmlExport>("XmlExport", boost::python::no_init)
        .def("meiDocumentToFile", &XmlExport::meiDocumentToFile)
        .staticmethod("meiDocumentToFile")

        .def("meiDocumentToText", &XmlExport::meiDocumentToText)
        .staticmethod("meiDocumentToText")
    ;

    class_<MeiDocument, MeiDocument*>("MeiDocument", init<>())
        .def("__eq__", &MeiDocument_EqualWrap)
        .def("__ne__", &MeiDocument_NEqualWrap)
        .def("hasNamespace", &MeiDocument::hasNamespace)
        .def("getNamespace", &MeiDocument::getNamespace, return_value_policy<reference_existing_object>())
        .def("getNamespaces", &MeiDocument::getNamespaces)
        .def("addNamespace", &MeiDocument::addNamespace)
        .def("getVersion", &MeiDocument::getVersion)
        .add_property("version", &MeiDocument::getVersion)
        .def("getRootElement", &MeiDocument::getRootElement, return_value_policy<reference_existing_object>())
        .def("setRootElement", &MeiDocument::setRootElement)
        .add_property("root", 
            make_function(&MeiDocument::getRootElement, return_value_policy<reference_existing_object>()),
            make_function(&MeiDocument::setRootElement)
        )
        /* 
            MeiDocument has both a private and public function named getElementById. We expose
            the public one above and use it here.
        */
        .def("getElementById", getElementById, return_value_policy<reference_existing_object>())
        .def("getElementsByName", &MeiDocument::getElementsByName)
        .def("getPositionInDocument", &MeiDocument::getPositionInDocument)
        .def("addIdMap", &MeiDocument::addIdMap)
        .def("rmIdMap", &MeiDocument::rmIdMap)
        .def("getFlattenedTree", &MeiDocument::getFlattenedTree, return_value_policy<reference_existing_object>())
        .def("lookBack", &MeiDocument::lookBack, return_value_policy<reference_existing_object>())
    ;

    class_<MeiElement, MeiElement*>("MeiElement", init<string>())
        .def("__eq__", &MeiElement_EqualWrap)
        .def("__ne__", &MeiElement_NEqualWrap)
        .def("getId", &MeiElement::getId)
        .add_property("id", &MeiElement::getId)

        .def("hasId", &MeiElement::hasId)
        .def("getName", &MeiElement::getName, return_value_policy<return_by_value>())
        .add_property("name", &MeiElement::getName)

        .def("getTail", &MeiElement::getTail)
        .def("setTail", &MeiElement::setTail)
        .add_property("tail", &MeiElement::getTail, &MeiElement::setTail)

        .def("getValue", &MeiElement::getValue)
        .def("setValue", &MeiElement::setValue)
        .add_property("value", &MeiElement::getValue, &MeiElement::setValue)

        .def("getAttributes", &MeiElement::getAttributes, return_value_policy<reference_existing_object>())
        .def("setAttributes", &MeiElement::setAttributes)
        .add_property("attributes",
            make_function(&MeiElement::getAttributes, return_value_policy<reference_existing_object>()),
            make_function(&MeiElement::setAttributes)
        )

        .def("addAttribute", addAttributeByObject)
        .def("addAttribute", addAttributeByString)
        .def("getAttribute", &MeiElement::getAttribute, return_value_policy<reference_existing_object>())
        .def("removeAttribute", &MeiElement::removeAttribute)
        .def("hasAttribute", &MeiElement::hasAttribute)
        .def("hasParent", &MeiElement::hasParent)
        .def("setParent", &MeiElement::setParent)
        .def("getParent", &MeiElement::getParent, return_value_policy<reference_existing_object>())
        .add_property("parent",
            make_function(&MeiElement::getParent, return_value_policy<reference_existing_object>()),
            make_function(&MeiElement::setParent)
        )
        
        /* boost doesn't seem to like the forward declaration of MeiDocument in MeiElement.
            This construction for setDocument avoids this by explicitly masking it above
        */
        .def("setDocument", setDocument)
        .def("getDocument", &MeiElement::getDocument, return_value_policy<reference_existing_object>())
        .add_property("document", 
            make_function(&MeiElement::getDocument, return_value_policy<reference_existing_object>()),
            make_function(&MeiElement::setDocument)
        )

        .def("addChild", &MeiElement::addChild)
        .def("setChildren", &MeiElement::setChildren)
        .def("getChildren", &MeiElement::getChildren, return_value_policy<reference_existing_object>())
        .add_property("children", 
            make_function(&MeiElement::getChildren, return_value_policy<reference_existing_object>()), 
            make_function(&MeiElement::setChildren)
        )

        .def("getChildrenByName", &MeiElement::getChildrenByName)
        .def("deleteAllChildren", &MeiElement::deleteAllChildren)
        .def("removeChildrenWithName", &MeiElement::removeChildrenWithName)
        .def("removeChild", &MeiElement::removeChild)
        .def("hasChildren", hasChildrenBool)
        .def("hasChildren", hasChildrenArgs)
        .def("getAncestor", &MeiElement::getAncestor, return_value_policy<reference_existing_object>())
        .def("hasAncestor", &MeiElement::hasAncestor)
        .def("getDescendants", &MeiElement::getDescendants)
        .def("getDescendantsByName", &MeiElement::getDescendantsByName)
        .def("getPeers", &MeiElement::getPeers)
        .def("getPositionInDocument", &MeiElement::getPositionInDocument)
        .def("lookBack", &MeiElement::lookBack, return_value_policy<reference_existing_object>())
        .def("flatten", &MeiElement::flatten)
        .def("print", printAll)
        .def("print", printLvl)
        .def("updateDocument", &MeiElement::updateDocument)
    ;

    class_<MeiAttribute, MeiAttribute*>("MeiAttribute", init<string, string>())
        .def("__eq__", &MeiAttribute_EqualWrap)
        .def("__ne__", &MeiAttribute_NEqualWrap)
        .def("getName", &MeiAttribute::getName)
        .add_property("name", &MeiAttribute::getName)
        
        .def("getValue", &MeiAttribute::getValue)
        .def("setValue", &MeiAttribute::setValue)
        .add_property("value", &MeiAttribute::getValue, &MeiAttribute::setValue)

        .def("hasNamespace", &MeiAttribute::hasNamespace)
        .def("getNamespace", &MeiAttribute::getNamespace, return_value_policy<reference_existing_object>())
    ;

}