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


#ifndef MEIDOCUMENT_H_
#define MEIDOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include "mei.h"
#include "meielement.h"
#include "meinamespace.h"

namespace mei {

/** \brief The entity which will contains all the elements and attributes
 *         storing a musical piece in the MEI schema.
 *
 * An MeiDocument is the first entity created or used when reading and writing MEI files.
 * All musical information for a piece is stored as a tree of MeiElements within the MeiDocument.
 * The document itself contains a name and an encoding, both of which are needed to identify it.
 * MeiDocuments can be written to and Read from XML.
 */
class MEI_EXPORT MeiDocument {
    public:
        /**
         * \brief Create a new Document with a specified name
         */
        MeiDocument(std::string docname);
        /**
         * \brief Create a new untitled document.
         */
        MeiDocument();

        /** \brief Get the name of the document
         *
         *  Each document is initially creating with a name and encoding thus a document
         *  name must exist if a valid Mei document exists
         *  \return The document name
         */
        const std::string getDocName();

        /** \brief Set/change the name of the Mei document */
        void setDocName(std::string docname);

        bool hasNamespace(std::string href);
        MeiNamespace* getNamespace(std::string href);
        vector<MeiNamespace*> getNamespaces();
        void addNamespace(MeiNamespace* ns);

        std::string getVersion();

        /** \brief Find the root element of the tree structure in the Mei document*/
        MeiElement* getRootElement();

        /** \brief Make an Mei element the Root element of a document*/
        void setRootElement(MeiElement* root);

        /** \brief Get the element with the given ID.
         *
         *  \return The Mei element with the given id, or NULL if
         *   the element doesn't exist
         */
        MeiElement* getElementById(std::string id);

    private:
        MeiElement* getElementById(std::string id, MeiElement* from);
        std::string docname;
        /** The version of this MEI document. */
        std::string meiVersion;
        MeiElement* root;
        void init(std::string docname);

        std::vector<MeiNamespace*> namespaces;
        bool nsMatch(string href);
    };
}
#endif  // MEIDOCUMENT_H_
