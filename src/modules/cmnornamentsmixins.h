/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
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

#ifndef CMNORNAMENTSMIXIN_H_
#define CMNORNAMENTSMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class MordentLogMixIn {
    public:
        explicit MordentLogMixIn(MeiElement *b);
        virtual ~MordentLogMixIn();
        /** \brief 
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief 
         */
        MeiAttribute* getLong();
        void setLong(std::string _long);
        bool hasLong();
        void removeLong();

/* include <longmixin> */

    private:
        MeiElement *b;
};

class OrnamentaccidMixIn {
    public:
        explicit OrnamentaccidMixIn(MeiElement *b);
        virtual ~OrnamentaccidMixIn();
        /** \brief 
         */
        MeiAttribute* getAccidupper();
        void setAccidupper(std::string _accidupper);
        bool hasAccidupper();
        void removeAccidupper();
        /** \brief 
         */
        MeiAttribute* getAccidlower();
        void setAccidlower(std::string _accidlower);
        bool hasAccidlower();
        void removeAccidlower();

/* include <accidlowermixin> */

    private:
        MeiElement *b;
};

class TurnLogMixIn {
    public:
        explicit TurnLogMixIn(MeiElement *b);
        virtual ~TurnLogMixIn();
        /** \brief 
         */
        MeiAttribute* getDelayed();
        void setDelayed(std::string _delayed);
        bool hasDelayed();
        void removeDelayed();
        /** \brief 
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};
}
#endif  // CMNORNAMENTSMIXIN_H_
