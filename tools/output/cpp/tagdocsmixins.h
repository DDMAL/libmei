/*
    Copyright (c) 2011-2013 Andrew Hankinson, Alastair Porter, and Others
    
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

#ifndef TAGDOCSMIXIN_H_
#define TAGDOCSMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class CombinableMixIn {
    public:
        explicit CombinableMixIn(MeiElement *b);
        virtual ~CombinableMixIn();
        /** \brief specifies the mode of this channel with respect to speech and writing.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <modemixin> */

    private:
        MeiElement *b;
};

class DeprecatedMixIn {
    public:
        explicit DeprecatedMixIn(MeiElement *b);
        virtual ~DeprecatedMixIn();
        /** \brief provides a date before which the construct being defined will not be removed.
         */
        MeiAttribute* getValidUntil();
        void setValidUntil(std::string _validUntil);
        bool hasValidUntil();
        void removeValidUntil();

/* include <validUntilmixin> */

    private:
        MeiElement *b;
};

class IdentifiedMixIn {
    public:
        explicit IdentifiedMixIn(MeiElement *b);
        virtual ~IdentifiedMixIn();
        /** \brief supplies the identifier which functions as the prefix for an abbreviated
         *  pointing scheme such as a private URI scheme.
         * 
         *  The prefix constitutes the text preceding the first colon.
         */
        MeiAttribute* getIdent();
        void setIdent(std::string _ident);
        bool hasIdent();
        void removeIdent();
        /** \brief says whether this object should be predeclared in the
         */
        MeiAttribute* getPredeclare();
        void setPredeclare(std::string _predeclare);
        bool hasPredeclare();
        void removePredeclare();
        /** \brief supplies a name for the module in which this object is to be declared.
         */
        MeiAttribute* getModule();
        void setModule(std::string _module);
        bool hasModule();
        void removeModule();
        /** \brief describes the status of a document either currently or, when associated with a
         *  dated element, at the time indicated.
         */
        MeiAttribute* getStatus();
        void setStatus(std::string _status);
        bool hasStatus();
        void removeStatus();

/* include <statusmixin> */

    private:
        MeiElement *b;
};

class NamespaceableMixIn {
    public:
        explicit NamespaceableMixIn(MeiElement *b);
        virtual ~NamespaceableMixIn();
        /** \brief specifies the namespace to which this attribute belongs
         */
        MeiAttribute* getNs();
        void setNs(std::string _ns);
        bool hasNs();
        void removeNs();

/* include <nsmixin> */

    private:
        MeiElement *b;
};
}
#endif  // TAGDOCSMIXIN_H_
