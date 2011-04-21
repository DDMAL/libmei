/*
 *  meiexceptions.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/16/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_

#include <exception>

using std::exception;

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
