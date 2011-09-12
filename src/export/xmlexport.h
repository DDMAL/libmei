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

#ifndef MEI_XMLEXPORT_H_
#define MEI_XMLEXPORT_H_

#include <string>

#include "meidocument.h"

namespace mei {

class XmlExportImpl;

/**
 * \brief Export a document to XML.
 */
class XmlExport {
    public:
        /** \brief Save a document to a file. */
        static bool meiDocumentToFile(MeiDocument *doc, std::string filename);
        /** \brief Return the XML text of a document. */
        static std::string meiDocumentToText(MeiDocument *doc);
    virtual ~XmlExport();
    private:
        XmlExport(MeiDocument *doc);
        XmlExportImpl *impl;
};
}

#endif  // MEI_XMLEXPORT_H_
