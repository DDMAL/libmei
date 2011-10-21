#include "Python.h"
#include <mei/meinamespace.h>
#include <mei/meielement.h>
#include <mei/meiattribute.h>
#include <mei/meidocument.h>
#include <boost/python.hpp>
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

typedef vector<MeiElement*> MeiElementList;
typedef vector<MeiAttribute*> MeiAttributeList;
// typedef vector<MeiElement*>& MeiElementListRef;


BOOST_PYTHON_MODULE(pymei) {
    class_<MeiElementList>("MeiElementList")
        .def(vector_indexing_suite<MeiElementList>())
    ;

    // class_<MeiElementListRef>("MeiElementListRef")
    //     .def(vector_indexing_suite<MeiElementListRef>())
    // ;

    class_<MeiNamespace>("MeiNamespace", init<string, string>())
        .def("getHref", &MeiNamespace::getHref)
        .def("getPrefix", &MeiNamespace::getPrefix)
    ;

    void (MeiElement::*addAttributeByObject)(MeiAttribute*) = &MeiElement::addAttribute;
    void (MeiElement::*addAttributeByString)(string, string) = &MeiElement::addAttribute;

    class_<MeiElement>("MeiElement", init<string>())
        .def("getId", &MeiElement::getId)
        .def("hasId", &MeiElement::hasId)
        .def("getName", &MeiElement::getName)
        .def("getTail", &MeiElement::getTail)
        .def("setTail", &MeiElement::setTail)
        .def("getValue", &MeiElement::getValue)
        .def("setValue", &MeiElement::setValue)
        // .def("getAttributes", &MeiElement::getAttributes) # this returns a reference -- need help
        .def("addAttribute", addAttributeByObject)
        .def("addAttribute", addAttributeByString)
        .def("getAttribute", &MeiElement::getAttribute, return_value_policy<manage_new_object>())
        .def("removeAttribute", &MeiElement::removeAttribute)
        .def("hasAttribute", &MeiElement::hasAttribute)
        .def("hasParent", &MeiElement::hasParent)
        .def("getParent", &MeiElement::getParent, return_value_policy<manage_new_object>())
        // .def("setDocument" &MeiElement::setDocument)
        .def("getDocument", &MeiElement::getDocument, return_value_policy<manage_new_object>())
        // .def("getChildren", &MeiElement::getChildren) # this returns a reference, so it's a special case...
        .def("getChildrenByName", &MeiElement::getChildrenByName)
    ;

    class_<MeiAttribute>("MeiAttribute", init<string, string>())
        .def("getName", &MeiAttribute::getName)
        .def("getValue", &MeiAttribute::getValue)
    ;

    class_<MeiDocument>("MeiDocument", init<>())
        .def("hasNamespace", &MeiDocument::hasNamespace)
    ;
}