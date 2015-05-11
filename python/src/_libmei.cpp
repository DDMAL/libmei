/*
    Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter, Greg Burlet and others

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
#include <mei/meielement.h>
#include <mei/meiattribute.h>
#include <mei/meidocument.h>
#include <mei/xmlimport.h>
#include <mei/xmlexport.h>
#include <mei/exceptions.h>

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

using mei::MeiElement;
using mei::MeiAttribute;
using mei::MeiDocument;
using mei::XMLImportResult;

typedef vector<MeiElement*> MeiElementList;
typedef vector<MeiAttribute*> MeiAttributeList;
typedef vector<string> XMLProcessingInstructions;
typedef vector<string> ImportWarnings;

bool MeiElement_EqualWrap(const MeiElement* x, const MeiElement* y) { return x == y; }
bool MeiElement_NEqualWrap(const MeiElement* x, const MeiElement* y) { return x != y; }
string MeiElement_Print(MeiElement* x) { return "<MeiElement " + x->getName() + ":" + x->getId() + ">"; }

bool MeiDocument_EqualWrap(const MeiDocument* x, const MeiDocument* y) { return x == y; }
bool MeiDocument_NEqualWrap(const MeiDocument* x, const MeiDocument* y) { return x != y; }
string MeiDocument_Print(MeiDocument *x) { return "<MeiDocument " + x->getVersion() + ">"; }

bool MeiAttribute_EqualWrap(const MeiAttribute* x, const MeiAttribute* y) { return x == y; }
bool MeiAttribute_NEqualWrap(const MeiAttribute* x, const MeiAttribute* y) { return x != y; }
string MeiAttribute_Print(MeiAttribute* x) { return "<MeiAttribute " + x->getName() + ":" + x->getValue() + ">"; }

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

MeiElement* MeiElementList_PopFromList(MeiElementList* x) {
    MeiElement* t = x->back();
    x->pop_back();
    return t;
}

void MeiElementList_PushToList(MeiElementList* x, MeiElement* y) {
    x->insert(x->begin(), y);
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

MeiAttribute* MeiAttributeList_PopFromList(MeiAttributeList* x) {
    MeiAttribute* t = x->back();
    x->pop_back();
    return t;
}

void MeiAttributeList_PushToList(MeiAttributeList* x, MeiAttribute* y) {
    x->insert(x->begin(), y);
}

/*
 * Converter for python lists to vector<T>
 */
template<typename T>
struct VectorFromList {
    VectorFromList() { 
        converter::registry::push_back(&convertible, &construct, type_id<vector<T*> >()); 
    }

    static void* convertible(PyObject* obj_ptr){
        if (!PySequence_Check(obj_ptr)) {
            return 0;
        }
        else {
            return obj_ptr;
        }
    }

    static void construct(PyObject* obj_ptr, converter::rvalue_from_python_stage1_data* data){
        // Get pointer to memory where the vector will be constructed
        void* storage = ((converter::rvalue_from_python_storage<std::vector<T*> >*)(data))->storage.bytes;

        // construct the new vector in place using the python list data
        new (storage) vector<T*>();
        vector<T*> *v = (vector<T*>*)(storage);
        long len = PySequence_Size(obj_ptr); 
        if (len < 0) {
            abort();
        }

        v->reserve(len); 
        
        // fill the C++ vector from the Python list data
        for(int i = 0; i < len; i++) { 
            v->push_back(extract<T*>(PySequence_GetItem(obj_ptr, i)));
        }

        // stash the pointer location for boost.python
        data->convertible = storage;
    }
};

BOOST_PYTHON_MODULE(_libmei) {
    docstring_options local_docstring_options(true, true, false);

    // initialize converters for python lists to MeiElementList,
    // MeiAttributeList
    VectorFromList<MeiElement>();
    VectorFromList<MeiAttribute>();

    class_<MeiElementList>("MeiElementList")
        .def(vector_indexing_suite<MeiElementList>())
        .def("__eq__", &MeiElementList_EqualWrap)
        .def("__ne__", &MeiElementList_NEqualWrap)
        .def("__iter__", boost::python::iterator<MeiElementList>())
        .def("__nonzero__", &MeiElementList_NonZero)
        .def("__str__", &MeiElementList_Print)
        .def("__repr__", &MeiElementList_Print)
        .def("pop", &MeiElementList_PopFromList, return_value_policy<reference_existing_object>())
        .def("push", &MeiElementList_PushToList)

    ;

    class_<MeiAttributeList>("MeiAttributeList")
        .def(vector_indexing_suite<MeiAttributeList>())
        .def("__eq__", &MeiAttributeList_EqualWrap)
        .def("__ne__", &MeiAttributeList_NEqualWrap)
        .def("__iter__", boost::python::iterator<MeiAttributeList>())
        .def("__nonzero__", &MeiAttributeList_NonZero)
        .def("__str__", &MeiAttributeList_Print)
        .def("__repr__", &MeiAttributeList_Print)
        .def("pop", &MeiAttributeList_PopFromList, return_value_policy<reference_existing_object>())
        .def("push", &MeiAttributeList_PushToList)
    ;

    void (MeiElement::*addAttributeByObject)(MeiAttribute*) = &MeiElement::addAttribute;
    void (MeiElement::*addAttributeByString)(string, string) = &MeiElement::addAttribute;
    void (MeiElement::*setDocument)(MeiDocument*) = &MeiElement::setDocument;
    bool (MeiElement::*hasChildrenBool)() = &MeiElement::hasChildren;
    bool (MeiElement::*hasChildrenArgs)(string) = &MeiElement::hasChildren;
    void (MeiElement::*printElement)() = &MeiElement::printElement;

    MeiElement* (MeiDocument::*getElementById)(string) = &MeiDocument::getElementById;
    
    /*
        Import functions
    */
    class_<XMLImportResult>("XMLImportResult", init<>())
        .def("getMeiDocument", &XMLImportResult::getMeiDocument, return_value_policy<reference_existing_object>())
        .def("getXMLProcessingInstructions", &XMLImportResult::getXMLProcessingInstructions)
        .def("getImportWarnings", &XMLImportResult::getImportWarnings)
        .def("getImportStatus", &XMLImportResult::getImportStatus)
    ;

    XMLImportResult (*documentFromFileStrictImport)(string) = mei::documentFromFile;
    XMLImportResult (*documentFromFileChooseImport)(string, bool) = mei::documentFromFile;
    def("documentFromFile", documentFromFileStrictImport);
    def("documentFromFile", documentFromFileChooseImport);

    XMLImportResult (*documentFromTextStrictImport)(string) = mei::documentFromText;
    XMLImportResult (*documentFromTextChooseImport)(string, bool) = mei::documentFromText;
    def("documentFromText", documentFromTextStrictImport);
    def("documentFromText", documentFromTextChooseImport);

    /*
        Export Functions
    */
    bool (*documentToFileStandard)(MeiDocument*, string) = mei::documentToFile;
    bool (*documentToFileWithPI)(MeiDocument*, string, vector<string>) = mei::documentToFile;
    def("documentToFile", documentToFileStandard);
    def("documentToFile", documentToFileWithPI);

    string (*documentToTextStandard)(MeiDocument*) = mei::documentToText;
    string (*documentToTextWithPI)(MeiDocument*, vector<string>) = mei::documentToText;
    def("documentToText", documentToTextStandard);
    def("documentToText", documentToTextWithPI);
    def("elementToText", mei::elementToText);

    class_<MeiDocument, MeiDocument*>("MeiDocument", init<optional<string> >())
        .def("__eq__", &MeiDocument_EqualWrap)
        .def("__ne__", &MeiDocument_NEqualWrap)
        .def("__str__", &MeiDocument_Print)
        .def("__repr__", &MeiDocument_Print)
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
        .def(init<const MeiElement&>())
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
        .def("removeChildrenByName", &MeiElement::removeChildrenByName)
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
        .def("printElement", printElement)
    ;

    class_<MeiAttribute, MeiAttribute*>("MeiAttribute", init<string, string>())
        .def(init<const MeiAttribute&>())
        .def("__eq__", &MeiAttribute_EqualWrap)
        .def("__ne__", &MeiAttribute_NEqualWrap)
        .def("__str__", &MeiAttribute_Print)
        .def("__repr__", &MeiAttribute_Print)
        .def("getName", &MeiAttribute::getName)
        .add_property("name", &MeiAttribute::getName)

        .def("getValue", &MeiAttribute::getValue)
        .def("setValue", &MeiAttribute::setValue)
        .add_property("value", &MeiAttribute::getValue, &MeiAttribute::setValue)
    ;

}