//
//  meiexception.cpp
//  mei
//
//  Created by Andrew Hankinson on 11-08-09.
//  Copyright 2011 McGill University. All rights reserved.
//

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
    
class MEI_EXPORT FooBarException : public MeiException {
public:
    explicit FooBarException(const std::string &what) : MeiException("blahblah") {}
    ~FooBarException() throw() {}
};
}
#endif

