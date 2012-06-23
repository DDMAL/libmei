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


#ifndef MEIEXCEPTION_H_
#define MEIEXCEPTION_H_

#include <exception>
#include <stdexcept>
#include <string>

#include "meicommon.h"

namespace mei {

class MEI_EXPORT MeiException : public std::runtime_error {
private:
    std::string message;
public:
    explicit MeiException(const std::string& message) : std::runtime_error(message) {
        this->message = message;
    }

    virtual const char* what() const throw() {
        return message.c_str();
    }
    ~MeiException() throw() {}
};

class MEI_EXPORT DuplicateAttributeException : public MeiException {
public:
    explicit DuplicateAttributeException(const std::string &what) :
        MeiException("Attribute " + what + " is already present on this object.") {}
    ~DuplicateAttributeException() throw() {}
};

class MEI_EXPORT AttributeNotFoundException : public MeiException {
public:
    explicit AttributeNotFoundException(const std::string &what) :
        MeiException("The attribute " + what + " was not found on this object.") {}
    ~AttributeNotFoundException() throw() {}
};

class MEI_EXPORT ChildNotFoundException : public MeiException {
public:
    explicit ChildNotFoundException(const std::string &what) :
        MeiException("The child " + what + " was not found on this object.") {}
    ~ChildNotFoundException() throw() {}
};

class MEI_EXPORT VersionMismatchException : public MeiException {
public:
    explicit VersionMismatchException(const std::string &what) :
    MeiException("The version " + what + " does not match the supported MEI version.") {}
    ~VersionMismatchException() throw() {}
};

class MEI_EXPORT NoVersionFoundException : public MeiException {
public:
    explicit NoVersionFoundException(const std::string &what) :
    MeiException("No mei version was found on this document.") {}
    ~NoVersionFoundException() throw() {}
};

class MEI_EXPORT ElementNotRegisteredException : public MeiException {
public:
    explicit ElementNotRegisteredException(const std::string &what) :
    MeiException("That element name " + what + " was not registered with the factory and could not be created.") {}
    ~ElementNotRegisteredException() throw() {}
};

class MEI_EXPORT DocumentRootNotSetException : public MeiException {
public:
    explicit DocumentRootNotSetException(const std::string &what) :
        MeiException("The document root was not set. Cannot export.") {}
    ~DocumentRootNotSetException() throw () {}
};

class MEI_EXPORT FileWriteFailureException : public MeiException {
public:
    explicit FileWriteFailureException(const std::string &what) :
    MeiException("There was an error writing the file " + what + ".") {}
    ~FileWriteFailureException() throw () {}
};
    
class MEI_EXPORT MalformedFileException : public MeiException {
public:
    explicit MalformedFileException(const std::string &what) :
    MeiException("The file " + what + " is malformed.") {}
    ~MalformedFileException() throw () {}
};
}
#endif

