/*
 Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter and Others
 
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
#include "meielement.h"
#include "pugixml.hpp"
#include <string>

namespace mei
{
    typedef std::vector<std::string> XMLProcessingInstructions;
    typedef std::vector<std::string> ImportWarnings;
    
    bool MEI_STRICT_IMPORT = true;
    bool MEI_LAX_IMPORT = false;
    
    struct MEI_EXPORT XMLImportResult
    {
        MeiDocument *meiDocument;
        XMLProcessingInstructions xmlProcessingInstructions;
        ImportWarnings importWarnings;
        int importStatus = 0;
    };
    
    enum MEI_EXPORT mei_import_status
    {
        status_ok = 0,
        status_warnings
    };
    
    MEI_EXPORT XMLImportResult documentFromFile(std::string filename, bool strict);
    MEI_EXPORT XMLImportResult documentFromText(std::string text, bool strict);
}


#endif // MEI_XMLIMPORT_H_
