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
#include <mei/exceptions.h>

#include <boost/python.hpp>
#include <boost/python/exception_translator.hpp>
#include <iostream>
#include <string>
#include <exception>

using namespace boost::python;
using namespace std;

PyObject* pyMeiExceptionType;
PyObject* pyVersionMismatchExceptionType;
PyObject* pyDuplicateAttributeExceptionType;
PyObject* pyAttributeNotFoundExceptionType;
PyObject* pyChildNotFoundExceptionType;
PyObject* pyNoVersionFoundExceptionType;
PyObject* pyElementNotRegisteredExceptionType;
PyObject* pyDocumentRootNotSetExceptionType;
PyObject* pyFileWriteFailureExceptionType;
PyObject* pyMalformedFileExceptionType;

// void MeiExceptionTranslate(mei::MeiException const& e) {
//     assert(pyMeiExceptionType != NULL);
//     object pythonExceptionInstance(e);
//     PyErr_SetObject(pyMeiExceptionType, pythonExceptionInstance.ptr());
//     throw_error_already_set();
// }

void MeiExceptionTranslate(mei::MeiException const& e) {
    PyErr_SetString(PyExc_RuntimeError, e.what());
}

void VersionMismatchExceptionTranslate(mei::VersionMismatchException const& e) {
    assert(pyVersionMismatchExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyVersionMismatchExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void DuplicateAttributeExceptionTranslate(mei::DuplicateAttributeException const& e) {
    assert(pyDuplicateAttributeExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyDuplicateAttributeExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void AttributeNotFoundExceptionTranslate(mei::AttributeNotFoundException const& e) {
    assert(pyAttributeNotFoundExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyAttributeNotFoundExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void ChildNotFoundExceptionTranslate(mei::ChildNotFoundException const& e) {
    assert(pyChildNotFoundExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyChildNotFoundExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void NoVersionFoundExceptionTranslate(mei::NoVersionFoundException const& e) {
    assert(pyNoVersionFoundExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyNoVersionFoundExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void ElementNotRegisteredExceptionTranslate(mei::ElementNotRegisteredException const& e) {
    assert(pyElementNotRegisteredExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyElementNotRegisteredExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void DocumentRootNotSetExceptionTranslate(mei::DocumentRootNotSetException const& e) {
    assert(pyDocumentRootNotSetExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyDocumentRootNotSetExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void FileWriteFailureExceptionTranslate(mei::FileWriteFailureException const& e) {
    assert(pyFileWriteFailureExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyFileWriteFailureExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void MalformedFileExceptionTranslate(mei::MalformedFileException const& e) {
    assert(pyMalformedFileExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyMalformedFileExceptionType, pythonExceptionInstance.ptr());
    throw_error_already_set();
}

PyObject* createExceptionClass(const char* name, PyObject* baseTypeObj = PyExc_Exception)
{
    using std::string;
    namespace bp = boost::python;

    string scopeName = bp::extract<string>(bp::scope().attr("__name__"));
    string qualifiedName0 = scopeName + "." + name;
    char* qualifiedName1 = const_cast<char*>(qualifiedName0.c_str());

    PyObject* typeObj = PyErr_NewException(qualifiedName1, baseTypeObj, 0);
    if(!typeObj) bp::throw_error_already_set();
    bp::scope().attr(name) = bp::handle<>(bp::borrowed(typeObj));
    return typeObj;
}

BOOST_PYTHON_MODULE(_libmei_exceptions) {
    // class_<mei::MeiException> myMeiExceptionClass("MeiException", init<string>());
    // myMeiExceptionClass.def("what", &mei::MeiException::what)
    //     .add_property("message", &mei::MeiException::what)
    // ;
    pyMeiExceptionType = createExceptionClass("MeiException");
    register_exception_translator<mei::MeiException>(&MeiExceptionTranslate);

    class_<mei::VersionMismatchException> myVersionMismatchClass("VersionMismatchException", init<string>());
    myVersionMismatchClass.def("what", &mei::VersionMismatchException::what)
        .add_property("message", &mei::VersionMismatchException::what)
    ;
    pyVersionMismatchExceptionType = createExceptionClass("VersionMismatchException");
    register_exception_translator<mei::VersionMismatchException>(&VersionMismatchExceptionTranslate);

    class_<mei::DuplicateAttributeException> myDuplicateAttributeClass("DuplicateAttributeException", init<string>());
    myDuplicateAttributeClass.def("what", &mei::DuplicateAttributeException::what)
        .add_property("message", &mei::DuplicateAttributeException::what)
    ;
    pyDuplicateAttributeExceptionType = myDuplicateAttributeClass.ptr();
    register_exception_translator<mei::DuplicateAttributeException>(&DuplicateAttributeExceptionTranslate);

    class_<mei::AttributeNotFoundException> myAttributeNotFoundClass("AttributeNotFoundException", init<string>());
    myAttributeNotFoundClass.def("what", &mei::AttributeNotFoundException::what)
        .add_property("message", &mei::AttributeNotFoundException::what)
    ;
    pyAttributeNotFoundExceptionType = myAttributeNotFoundClass.ptr();
    register_exception_translator<mei::AttributeNotFoundException>(&AttributeNotFoundExceptionTranslate);

    class_<mei::ChildNotFoundException> myChildNotFoundClass("ChildNotFoundException", init<string>());
    myChildNotFoundClass.def("what", &mei::ChildNotFoundException::what)
        .add_property("message", &mei::ChildNotFoundException::what)
    ;
    pyChildNotFoundExceptionType = myChildNotFoundClass.ptr();
    register_exception_translator<mei::ChildNotFoundException>(&ChildNotFoundExceptionTranslate);

    class_<mei::NoVersionFoundException> myNoVersionFoundClass("NoVersionFoundException", init<string>());
    myNoVersionFoundClass.def("what", &mei::NoVersionFoundException::what)
        .add_property("message", &mei::NoVersionFoundException::what)
    ;
    pyNoVersionFoundExceptionType = myNoVersionFoundClass.ptr();
    register_exception_translator<mei::NoVersionFoundException>(&NoVersionFoundExceptionTranslate);

    class_<mei::ElementNotRegisteredException> myElementNotRegisteredClass("ElementNotRegisteredException", init<string>());
    myElementNotRegisteredClass.def("what", &mei::ElementNotRegisteredException::what)
        .add_property("message", &mei::ElementNotRegisteredException::what)
    ;
    pyElementNotRegisteredExceptionType = myElementNotRegisteredClass.ptr();
    register_exception_translator<mei::ElementNotRegisteredException>(&ElementNotRegisteredExceptionTranslate);

    class_<mei::DocumentRootNotSetException> myDocumentRootNotSetClass("DocumentRootNotSetException", init<string>());
    myDocumentRootNotSetClass.def("what", &mei::DocumentRootNotSetException::what)
        .add_property("message", &mei::DocumentRootNotSetException::what)
    ;
    pyDocumentRootNotSetExceptionType = myDocumentRootNotSetClass.ptr();
    register_exception_translator<mei::DocumentRootNotSetException>(&DocumentRootNotSetExceptionTranslate);

    class_<mei::FileWriteFailureException> myFileWriteFailureClass("FileWriteFailureException", init<string>());
    myFileWriteFailureClass.def("what", &mei::FileWriteFailureException::what)
        .add_property("message", &mei::FileWriteFailureException::what)
    ;
    pyFileWriteFailureExceptionType = myFileWriteFailureClass.ptr();
    register_exception_translator<mei::FileWriteFailureException>(&FileWriteFailureExceptionTranslate);

    class_<mei::MalformedFileException> myMalformedFileClass("MalformedFileException", init<string>());
    myMalformedFileClass.def("what", &mei::MalformedFileException::what)
        .add_property("message", &mei::MalformedFileException::what)
    ;
    pyMalformedFileExceptionType = myMalformedFileClass.ptr();
    register_exception_translator<mei::MalformedFileException>(&MalformedFileExceptionTranslate);
}