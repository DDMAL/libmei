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

object pyMeiExceptionType;
object pyVersionMismatchExceptionType;
object pyDuplicateAttributeExceptionType;
object pyAttributeNotFoundExceptionType;
object pyChildNotFoundExceptionType;
object pyNoVersionFoundExceptionType;
object pyElementNotRegisteredExceptionType;
object pyDocumentRootNotSetExceptionType;
object pyFileWriteFailureExceptionType;
object pyMalformedFileExceptionType;

void MeiExceptionTranslate(mei::MeiException const& e) {
    assert(pyMeiExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyMeiExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void VersionMismatchExceptionTranslate(mei::VersionMismatchException const& e) {
    assert(pyVersionMismatchExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyVersionMismatchExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void DuplicateAttributeExceptionTranslate(mei::DuplicateAttributeException const& e) {
    assert(pyDuplicateAttributeExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyDuplicateAttributeExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void AttributeNotFoundExceptionTranslate(mei::AttributeNotFoundException const& e) {
    assert(pyAttributeNotFoundExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyAttributeNotFoundExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void ChildNotFoundExceptionTranslate(mei::ChildNotFoundException const& e) {
    assert(pyChildNotFoundExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyChildNotFoundExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void NoVersionFoundExceptionTranslate(mei::NoVersionFoundException const& e) {
    assert(pyNoVersionFoundExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyNoVersionFoundExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void ElementNotRegisteredExceptionTranslate(mei::ElementNotRegisteredException const& e) {
    assert(pyElementNotRegisteredExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyElementNotRegisteredExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void DocumentRootNotSetExceptionTranslate(mei::DocumentRootNotSetException const& e) {
    assert(pyDocumentRootNotSetExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyDocumentRootNotSetExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void FileWriteFailureExceptionTranslate(mei::FileWriteFailureException const& e) {
    assert(pyFileWriteFailureExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyFileWriteFailureExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}

void MalformedFileExceptionTranslate(mei::MalformedFileException const& e) {
    assert(pyMalformedFileExceptionType != NULL);
    object pythonExceptionInstance(e);
    PyErr_SetObject(pyMalformedFileExceptionType.ptr(), pythonExceptionInstance.ptr());
    throw_error_already_set();
}


BOOST_PYTHON_MODULE(_libmei_exceptions) {
    object meiexception = class_<mei::MeiException>("MeiException", init<string>())
        .def("what", &mei::MeiException::what)
        .add_property("message", &mei::MeiException::what)
    ;
    pyMeiExceptionType = meiexception;
    register_exception_translator<mei::MeiException>(&MeiExceptionTranslate);

    object versionmismatch = class_<mei::VersionMismatchException>("VersionMismatchException", init<string>())
        .def("what", &mei::VersionMismatchException::what)
        .add_property("message", &mei::VersionMismatchException::what)
    ;
    pyVersionMismatchExceptionType = versionmismatch;
    register_exception_translator<mei::VersionMismatchException>(&VersionMismatchExceptionTranslate);
    
    object duplicateattr = class_<mei::DuplicateAttributeException>("DuplicateAttributeException", init<string>())
        .def("what", &mei::DuplicateAttributeException::what)
        .add_property("message", &mei::DuplicateAttributeException::what)
    ;
    pyDuplicateAttributeExceptionType = duplicateattr;
    register_exception_translator<mei::DuplicateAttributeException>(&DuplicateAttributeExceptionTranslate);

    object attrnotfound = class_<mei::AttributeNotFoundException>("AttributeNotFoundException", init<string>())
        .def("what", &mei::AttributeNotFoundException::what)
        .add_property("message", &mei::AttributeNotFoundException::what)
    ;
    pyAttributeNotFoundExceptionType = attrnotfound;
    register_exception_translator<mei::AttributeNotFoundException>(&AttributeNotFoundExceptionTranslate);

    object chnotfound = class_<mei::ChildNotFoundException>("ChildNotFoundException", init<string>())
        .def("what", &mei::ChildNotFoundException::what)
        .add_property("message", &mei::ChildNotFoundException::what)
    ;
    pyChildNotFoundExceptionType = chnotfound;
    register_exception_translator<mei::ChildNotFoundException>(&ChildNotFoundExceptionTranslate);

    object noversion = class_<mei::NoVersionFoundException>("NoVersionFoundException", init<string>())
        .def("what", &mei::NoVersionFoundException::what)
        .add_property("message", &mei::NoVersionFoundException::what)
    ;
    pyNoVersionFoundExceptionType = noversion;
    register_exception_translator<mei::NoVersionFoundException>(&NoVersionFoundExceptionTranslate);

    object notregistered = class_<mei::ElementNotRegisteredException>("ElementNotRegisteredException", init<string>())
        .def("what", &mei::ElementNotRegisteredException::what)
        .add_property("message", &mei::ElementNotRegisteredException::what)
    ;
    pyElementNotRegisteredExceptionType = noversion;
    register_exception_translator<mei::ElementNotRegisteredException>(&ElementNotRegisteredExceptionTranslate);

    object noroot = class_<mei::DocumentRootNotSetException>("DocumentRootNotSetException", init<string>())
        .def("what", &mei::DocumentRootNotSetException::what)
        .add_property("message", &mei::DocumentRootNotSetException::what)
    ;
    pyDocumentRootNotSetExceptionType = noroot;
    register_exception_translator<mei::DocumentRootNotSetException>(&DocumentRootNotSetExceptionTranslate);

    object filewrite = class_<mei::FileWriteFailureException>("FileWriteFailureException", init<string>())
        .def("what", &mei::FileWriteFailureException::what)
        .add_property("message", &mei::FileWriteFailureException::what)
    ;
    pyFileWriteFailureExceptionType = filewrite;
    register_exception_translator<mei::FileWriteFailureException>(&FileWriteFailureExceptionTranslate);

    object malformed = class_<mei::MalformedFileException>("MalformedFileException", init<string>())
        .def("what", &mei::MalformedFileException::what)
        .add_property("message", &mei::MalformedFileException::what)
    ;
    pyMalformedFileExceptionType = malformed;
    register_exception_translator<mei::MalformedFileException>(&MalformedFileExceptionTranslate);

}