/*
    Copyright (c) 2011-2012 Andrew Hankinson

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

#include "Python.h"
#include <mei/meinamespace.h>
#include <mei/meielement.h>
#include <mei/meiattribute.h>
#include <mei/meidocument.h>
#include <mei/xmlimport.h>
#include <mei/xmlexport.h>
#include <mei/exceptions.h>
#include <mei/meixml.h>

#include <boost/python.hpp>
#include <boost/python/tuple.hpp>
#include <boost/python/iterator.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>
#include <boost/python/exception_translator.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include <sstream>

using namespace boost::python;
using namespace std;

using mei::MeiNamespace;
using mei::MeiElement;
using mei::MeiAttribute;
using mei::MeiDocument;
using mei::XmlImport;
using mei::XmlExport;
using mei::XmlInstructions;
using mei::XmlProcessingInstruction;

typedef vector<MeiElement*> MeiElementList;
typedef vector<MeiAttribute*> MeiAttributeList;
typedef vector<MeiNamespace*> MeiNamespaceList;

bool MeiElement_EqualWrap(const MeiElement* x, const MeiElement* y) { return x == y; }
bool MeiElement_NEqualWrap(const MeiElement* x, const MeiElement* y) { return x != y; }
string MeiElement_Print(MeiElement* x) { return "<MeiElement " + x->getName() + ":" + x->getId() + ">"; }

bool MeiDocument_EqualWrap(const MeiDocument* x, const MeiDocument* y) { return x == y; }
bool MeiDocument_NEqualWrap(const MeiDocument* x, const MeiDocument* y) { return x != y; }
string MeiDocument_Print(MeiDocument *x) { return "<MeiDocument " + x->getVersion() + ">"; }

bool MeiAttribute_EqualWrap(const MeiAttribute* x, const MeiAttribute* y) { return x == y; }
bool MeiAttribute_NEqualWrap(const MeiAttribute* x, const MeiAttribute* y) { return x != y; }
string MeiAttribute_Print(MeiAttribute* x) { return "<MeiAttribute " + x->getName() + ":" + x->getValue() + ">"; }

bool MeiNamespace_EqualWrap(const MeiNamespace* x, const MeiNamespace* y) { return x == y; }
bool MeiNamespace_NEqualWrap(const MeiNamespace* x, const MeiNamespace* y) { return x != y; }
string MeiNamespace_Print(MeiNamespace* x) { return "<MeiNamespace " + x->getPrefix() + ":" + x->getHref() + ">"; }

bool MeiElementList_EqualWrap(const MeiElementList x, const MeiElementList y) { return x == y; }
bool MeiElementList_NEqualWrap(const MeiElementList x, const MeiElementList y) { return x != y; }
bool MeiElementList_NonZero(const MeiElementList x) { return !x.empty(); }
string MeiElementList_Print(MeiElementList x) {
    stringstream res;
    res << "[ ";
    for(vector<MeiElement*>::iterator iter = x.begin(); iter != x.end(); ++iter) {
        res << "<MeiElement " << (*iter)->getName() << ":" << (*iter)->getId()  << "> ";
    }
    res << "]";
    return res.str();
}

bool MeiAttributeList_EqualWrap(const MeiAttributeList x, const MeiAttributeList y) { return x == y; }
bool MeiAttributeList_NEqualWrap(const MeiAttributeList x, const MeiAttributeList y) { return x != y; }
bool MeiAttributeList_NonZero(const MeiAttributeList x) { return !x.empty(); }
string MeiAttributeList_Print(MeiAttributeList x) {
    stringstream res;
    res << "[ ";
    for(vector<MeiAttribute*>::iterator iter = x.begin(); iter != x.end(); ++iter) {
        res << "<MeiAttribute " << (*iter)->getName() << ":" << (*iter)->getValue()  << "> ";
    }
    res << "]";
    return res.str();
}

bool MeiNamespaceList_EqualWrap(const MeiNamespaceList x, const MeiNamespaceList y) { return x == y; }
bool MeiNamespaceList_NEqualWrap(const MeiNamespaceList x, const MeiNamespaceList y) { return x != y; }
bool MeiNamespaceList_NonZero(const MeiNamespaceList x) { return !x.empty(); }
string MeiNamespaceList_Print(MeiNamespaceList x) {
    stringstream res;
    res << "[ ";
    for(vector<MeiNamespace*>::iterator iter = x.begin(); iter != x.end(); ++iter) {
        res << "<MeiNamespace " << (*iter)->getPrefix() << ":" << (*iter)->getHref()  << "> ";
    }
    res << "]";
    return res.str();
}


BOOST_PYTHON_MODULE(_libmei) {
    docstring_options local_docstring_options(true, true, false);

    class_<XmlInstructions>("XmlInstructions")
    ;

    class_<XmlProcessingInstruction>("XmlProcessingInstruction")
    ;

    class_<MeiElementList>("MeiElementList")
        .def(vector_indexing_suite<MeiElementList>())
        .def("__eq__", &MeiElementList_EqualWrap)
        .def("__ne__", &MeiElementList_NEqualWrap)
        .def("__iter__", boost::python::iterator<MeiElementList>())
        .def("__nonzero__", &MeiElementList_NonZero)
        .def("__str__", &MeiElementList_Print)
        .def("__repr__", &MeiElementList_Print)
    ;

    class_<MeiAttributeList>("MeiAttributeList")
        .def(vector_indexing_suite<MeiAttributeList>())
        .def("__eq__", &MeiAttributeList_EqualWrap)
        .def("__ne__", &MeiAttributeList_NEqualWrap)
        .def("__iter__", boost::python::iterator<MeiAttributeList>())
        .def("__nonzero__", &MeiAttributeList_NonZero)
        .def("__str__", &MeiAttributeList_Print)
        .def("__repr__", &MeiAttributeList_Print)
    ;

    class_<MeiNamespaceList>("MeiNamespaceList")
        .def(vector_indexing_suite<MeiNamespaceList>())
        .def("__eq__", &MeiNamespaceList_EqualWrap)
        .def("__ne__", &MeiNamespaceList_NEqualWrap)
        .def("__iter__", boost::python::iterator<MeiNamespaceList>())
        .def("__nonzero__", &MeiNamespaceList_NonZero)
        .def("__str__", &MeiNamespaceList_Print)
        .def("__repr__", &MeiNamespaceList_Print)
    ;

    class_<MeiNamespace, MeiNamespace*>("MeiNamespace", init<string, string>())
        .def("__eq__", &MeiNamespace_EqualWrap)
        .def("__ne__", &MeiNamespace_NEqualWrap)
        .def("__str__", &MeiNamespace_Print)
        .def("__repr__", &MeiNamespace_Print)
        .def("getHref", &MeiNamespace::getHref)
        .add_property("href", &MeiNamespace::getHref)
        .def("getPrefix", &MeiNamespace::getPrefix)
        .add_property("prefix", &MeiNamespace::getPrefix)
    ;

    void (MeiElement::*addAttributeByObject)(MeiAttribute*) = &MeiElement::addAttribute;
    void (MeiElement::*addAttributeByString)(string, string) = &MeiElement::addAttribute;
    void (MeiElement::*setDocument)(MeiDocument*) = &MeiElement::setDocument;
    bool (MeiElement::*hasChildrenBool)() = &MeiElement::hasChildren;
    bool (MeiElement::*hasChildrenArgs)(string) = &MeiElement::hasChildren;
    void (MeiElement::*printAll)() = &MeiElement::print;
    void (MeiElement::*printLvl)(int) = &MeiElement::print;

    MeiElement* (MeiDocument::*getElementById)(string) = &MeiDocument::getElementById;
    
    MeiDocument* (XmlImport::*documentFromFileNInstr)(string) = &XmlImport::documentFromFile;
    MeiDocument* (XmlImport::*documentFromFileInstr)(string, &XmlInstructions) = &XmlImport::documentFromFile;
    MeiDocument* (XmlImport::*documentFromTextNInstr)(string) = &XmlImport::documentFromText;
    MeiDocument* (XmlImport::*documentFromTextInstr)(string, &XmlInstructions) = &XmlImport::documentFromText;

    bool (XmlExport::*documentToFileInstr)(string, &XmlInstructions) = &XmlExport::meiDocumentToFile;
    bool (XmlExport::*documentToFileNInstr)(string) = &XmlExport::meiDocumentToFile;
    string (XmlExport::*documentToTextInstr)(string, &XmlInstructions) = &XmlExport::meiDocumentToText;
    string (XmlExport::*documentToTextNInstr)(string) = &XmlExport::meiDocumentToText;
    
    // MeiDocument* (XmlImport::*documentFromFileStr)(const string) = &XmlImport::documentFromFile;

    class_<XmlImport>("XmlImport", init<>())
        .def("documentFromText", documentFromTextInstr, return_value_policy<manage_new_object>())
        .def("documentFromText", documentFromTextNInstr, return_value_policy<manage_new_object>())
        // .staticmethod("documentFromText")

        .def("documentFromFile", documentFromFileInstr, return_value_policy<manage_new_object>())
        .def("documentFromFile", documentFromFileNInstr, return_value_policy<manage_new_object>())
        // .staticmethod("documentFromFile")
    ;

    class_<XmlExport>("XmlExport", boost::python::no_init)
        .def("meiDocumentToFile", documentToFileInstr)
        .def("meiDocumentToFile", documentToFileNInstr)
        // .staticmethod("meiDocumentToFile")

        .def("meiDocumentToText", documentToTextInstr)
        .def("meiDocumentToText", documentToTextNInstr)
        // .staticmethod("meiDocumentToText")

        .def("meiElementToText", &XmlExport::meiElementToText)
        .staticmethod("meiElementToText")
    ;

    class_<MeiDocument, MeiDocument*>("MeiDocument", init<optional<string> >())
        .def("__eq__", &MeiDocument_EqualWrap)
        .def("__ne__", &MeiDocument_NEqualWrap)
        .def("__str__", &MeiDocument_Print)
        .def("__repr__", &MeiDocument_Print)
        .def("hasNamespace", &MeiDocument::hasNamespace)
        .def("getNamespace", &MeiDocument::getNamespace, return_value_policy<reference_existing_object>())
        .def("getNamespaces", &MeiDocument::getNamespaces)
        .add_property("namespaces", &MeiDocument::getNamespaces)

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
        // .def(init<const MeiElement&>())
        .def("__eq__", &MeiElement_EqualWrap)
        .def("__ne__", &MeiElement_NEqualWrap)
        .def("__str__", &MeiElement_Print)
        .def("__repr__", &MeiElement_Print)

        .def("getId", &MeiElement::getId)
        .def("setId", &MeiElement::setId)
        .add_property("id", &MeiElement::getId, &MeiElement::setId)

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
        .def("addChildBefore", &MeiElement::addChildBefore)
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
        .def("updateDocument", &MeiElement::updateDocument)
    ;

    class_<MeiAttribute, MeiAttribute*>("MeiAttribute", init<string, string>())
        .def(init<MeiNamespace*, string, string>())
        .def("__eq__", &MeiAttribute_EqualWrap)
        .def("__ne__", &MeiAttribute_NEqualWrap)
        .def("__str__", &MeiAttribute_Print)
        .def("__repr__", &MeiAttribute_Print)
        .def("getName", &MeiAttribute::getName)
        .add_property("name", &MeiAttribute::getName)

        .def("getValue", &MeiAttribute::getValue)
        .def("setValue", &MeiAttribute::setValue)
        .add_property("value", &MeiAttribute::getValue, &MeiAttribute::setValue)

        .def("hasNamespace", &MeiAttribute::hasNamespace)
        .def("getNamespace", &MeiAttribute::getNamespace, return_value_policy<reference_existing_object>())
    ;

}
