
/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani
    
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

#ifndef NEUMESMIXIN_H_
#define NEUMESMIXIN_H_

#include "meielement.h"
#include "exceptions.h"



struct IneumeLogMixIn {
    IneumeLogMixIn(BaseMeiElement *b);
    virtual ~IneumeLogMixIn() {};
    
    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    /** \brief   records the name of the neume.
    */

    string getNameValue() throw (AttributeNotFoundException);
    MeiAttribute* getName() throw (AttributeNotFoundException);
    void setName(std::string _name);
    bool hasName();
    void removeName();

    private:
        BaseMeiElement *b;
};


struct UneumeLogMixIn {
    UneumeLogMixIn(BaseMeiElement *b);
    virtual ~UneumeLogMixIn() {};
    
    /** \brief   records the function of the dot.
    */

    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    /** \brief   records the name of the neume.
    */

    string getNameValue() throw (AttributeNotFoundException);
    MeiAttribute* getName() throw (AttributeNotFoundException);
    void setName(std::string _name);
    bool hasName();
    void removeName();

    private:
        BaseMeiElement *b;
};


#endif // NEUMESMIXIN_H_
