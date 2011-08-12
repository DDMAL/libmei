/*
    Copyright (c) 2011 Mahtab Ghamsari-Esfahani, Jamie Klassen, Alastair Porter, Andrew Hankinson

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


#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_

#include <exception>

using std::exception;

class MeiException: public exception
{
public:
	MeiException(string message)
	{
		this->message = message;
	}
	
	~MeiException() throw() {};
	
	virtual const char* what() const throw()
	{
		return message.c_str();
	}
	
private:
	string message;
};

/** \brief Throw an error when an attribute does not exist on an Mei element*/
class AttributeNotFoundException: public MeiException
{
public:
    AttributeNotFoundException(string attributeName) : MeiException("This attribute does not exist on " + attributeName)
	{
		this->attributeName = attributeName;
	}
    
    ~AttributeNotFoundException() throw() { };

private:
    string attributeName;

};

/** \brief Throw an error when an Mei element has no elements as Children*/
class ChildrenNotFoundException: public MeiException
{
public:
    ChildrenNotFoundException() : MeiException("This element has no children.") { }
        
	~ChildrenNotFoundException() throw() { };
        
private:        
};

class ElementIDNotFoundException: public MeiException
{
public:
	ElementIDNotFoundException(string uuid) : MeiException("There is no element with the id " + uuid + " in the MEI tree.") { }
	~ElementIDNotFoundException() throw() { };
	
private:
};

/** \brief throw an error if an attribute is defined twice */
class DuplicateAttributeException: public MeiException
{
public:
	DuplicateAttributeException(string attributeName) : MeiException("The attribute " + attributeName + " has been defined multiple times.") { }
	~DuplicateAttributeException() throw () { };
private:
};

#endif // EXCEPTIONS_H_
