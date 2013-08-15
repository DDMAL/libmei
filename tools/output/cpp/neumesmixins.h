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

#ifndef NEUMESMIXIN_H_
#define NEUMESMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class Mei_ineumeLogMixIn {
    public:
        explicit Mei_ineumeLogMixIn(MeiElement *b);
        virtual ~Mei_ineumeLogMixIn();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();

/* include <namemixin> */

    private:
        MeiElement *b;
};

class Mei_uneumeLogMixIn {
    public:
        explicit Mei_uneumeLogMixIn(MeiElement *b);
        virtual ~Mei_uneumeLogMixIn();
        /** \brief specifies how quotation marks are indicated within the text.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();

/* include <namemixin> */

    private:
        MeiElement *b;
};
}
#endif  // NEUMESMIXIN_H_
