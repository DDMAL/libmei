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

#ifndef MEI_XMLIMPORT_H_
#define MEI_XMLIMPORT_H_

#include "meidocument.h"
#include "meixml.h"
#include <string>

namespace mei {

class XmlImportImpl;

class XmlImport {
    public:
        XmlImport();
        virtual ~XmlImport();
        /** \brief Read in an MEI Document from a filename */
        static MeiDocument* documentFromFile(std::string filename);
        static MeiDocument* documentFromFile(std::string filename, XmlInstructions &inst);
    
        /** \brief Read in an MEI Document from a string */
        static MeiDocument* documentFromText(std::string text);
        static MeiDocument* documentFromText(std::string text, XmlInstructions &inst);    
    private:
        XmlImportImpl *impl;
};
}

#endif  // MEI_XMLIMPORT_H_
