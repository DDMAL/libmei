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
    
    enum MEI_EXPORT mei_import_strictness
    {
        MEI_STRICT_IMPORT = true,
        MEI_LAX_IMPORT = false
    };

    class MEI_EXPORT XMLImportResult
    {
    public:
        XMLImportResult();
        ~XMLImportResult();

        /* NB: Emscripten is happier if properties are accessed through getters. */
        MeiDocument* getMeiDocument();
        XMLProcessingInstructions getXMLProcessingInstructions();
        ImportWarnings getImportWarnings();
        int getImportStatus();

        /* Public properties so that we don't have to write explicit setters. */
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
    
    /**
     *  \brief Imports a document from a filename
     *
     *  \param filename A pathname string to the file to import
     *  \param strict   Sets the importer's strictness level. You may use the MEI_STRICT_IMPORT (true) or
     *      MEI_LAX_IMPORT (false) enums.
     *
     *  \return XMLImportResult An object containing the results of the import process.
     */
    MEI_EXPORT XMLImportResult documentFromFile(std::string filename, bool strict);
    MEI_EXPORT XMLImportResult documentFromFile(std::string filename);

    /**
     *  \brief Imports a document from a string
     *
     *  \param text The XML fragment to import. Note that this should be a complete MEI representation,
            as the importer will refuse to import (in strict mode) or raise warnings (in lax mode) if a
            partial MEI string is supplied.
     *  \param strict   Sets the importer's strictness level. You may use the MEI_STRICT_IMPORT (true) or
     *      MEI_LAX_IMPORT (false) enums.
     *
     *  \return XMLImportResult An object containing the results of the import process.
     */
    MEI_EXPORT XMLImportResult documentFromText(std::string text, bool strict);
    MEI_EXPORT XMLImportResult documentFromText(std::string text);
}


#endif // MEI_XMLIMPORT_H_
