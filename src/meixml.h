/*
 Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter and Others and Others
 
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

#ifndef MEI_XML_H
#define MEI_XML_H

#include "meicommon.h"

#include <string>
#include <vector>
#include <utility>

namespace mei {
    /**
        Define types that are used in both XML import and export
    */    
    class MEI_EXPORT XmlProcessingInstruction 
    {
    public:
        XmlProcessingInstruction(std::string name, std::string value);
        virtual ~XmlProcessingInstruction();

        std::string getName();
        std::string getValue();
    private:
        std::string name;
        std::string value;
    };
    
    typedef std::vector<XmlProcessingInstruction*> XmlInstructions;
}

#endif
