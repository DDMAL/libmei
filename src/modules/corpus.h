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

#ifndef CORPUS_H_
#define CORPUS_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "mei.h"
#include "sharedmixins.h"


namespace mei {
/** \brief meiCorpus ― The document element for a group of related MEI documents, each
 *  with its own complete header, contains a header for the group, and one or more
 *  <mei> elements.
 * 
 *  The group may be related in a number of ways, for example, by composer, by
 *  similar instrumentation, by holding institution, etc. This element's name should
 *  not be changed in order to assure an absolute minimum level of MEI compliance.
 *  This element is modelled on the teiCorpus element in the Text Encoding
 *  Initiative (TEI).
 */
class MEI_EXPORT MeiCorpus : public MeiElement {
    public:
        MeiCorpus();
        virtual ~MeiCorpus();

/* include <meiCorpus> */

        CommonMixIn    m_Common;
        MeiversionMixIn    m_Meiversion;

    private:
        REGISTER_DECLARATION(MeiCorpus);
};
}
#endif  // CORPUS_H_
