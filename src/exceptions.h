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

#include "mei.h"

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


class MEI_EXPORT FooBarException : public MeiException {
public:
    explicit FooBarException(const std::string &what) : MeiException("blahblah") {}
    ~FooBarException() throw() {}
};
}
#endif

