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

/** \brief Throw an error when an attribute does not exist on an Mei element*/
class AttributeNotFoundException: public exception
{
public:
    AttributeNotFoundException(string attributeName)
    {
        this->attributeName = attributeName;
    }
    
    ~AttributeNotFoundException() throw() { };
    
    virtual const char* what() const throw() 
    {
        string s = "This attribute does not exist on ";
        s = s + attributeName;
        return s.c_str();
    }

private:
    string attributeName;

};

/** \brief Throw an error when an Mei element has no elements as Children*/
class ChildrenNotFoundException: public exception
    {
    public:
        ChildrenNotFoundException() { }
        
        ~ChildrenNotFoundException() throw() { };
        
        virtual const char* what() const throw() 
        {
            string s = "This element has no children.";
            return s.c_str();
        }
        
    private:
        
    };



#endif //EXCEPTIONS_H_
