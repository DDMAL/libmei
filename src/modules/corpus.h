/*
    Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter, and Others

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
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"


namespace mei {
/** \brief (MEI corpus) – A group of related MEI documents, consisting of a header for
 *  the group, and one or more <mei> elements, each with its own complete header.
 */
class MEI_EXPORT MeiCorpus : public MeiElement {
    public:
        MeiCorpus();
        MeiCorpus(const MeiCorpus& other);
        virtual ~MeiCorpus();

/* include <meiCorpus> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        MeiversionMixIn    m_Meiversion;

    private:
        REGISTER_DECLARATION(MeiCorpus);
};
}
#endif  // CORPUS_H_
