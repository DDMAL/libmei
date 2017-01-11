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

#ifndef CMNORNAMENTSMIXIN_H_
#define CMNORNAMENTSMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class MordentLogMixIn {
    public:
        explicit MordentLogMixIn(MeiElement *b);
        virtual ~MordentLogMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief When the long attribute is set to 'yes', a double or long mordent, consisting of
         *  5 notes, is indicated.
         */
        MeiAttribute* getLong();
        void setLong(std::string _long);
        bool hasLong();
        void removeLong();

/* include <longmixin> */

    private:
        MeiElement *b;
};

class OrnamMixIn {
    public:
        explicit OrnamMixIn(MeiElement *b);
        virtual ~OrnamMixIn();
        /** \brief Indicates that this element has an attached ornament.
         * 
         *  If visual information about the ornament is needed, then one of the elements
         *  that represents an ornament (mordent, trill, or turn) should be employed.
         */
        MeiAttribute* getOrnam();
        void setOrnam(std::string _ornam);
        bool hasOrnam();
        void removeOrnam();

/* include <ornammixin> */

    private:
        MeiElement *b;
};

class OrnamentaccidMixIn {
    public:
        explicit OrnamentaccidMixIn(MeiElement *b);
        virtual ~OrnamentaccidMixIn();
        /** \brief Records the written accidental associated with an upper neighboring note.
         */
        MeiAttribute* getAccidupper();
        void setAccidupper(std::string _accidupper);
        bool hasAccidupper();
        void removeAccidupper();
        /** \brief Records the written accidental associated with a lower neighboring note.
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
        /** \brief When the delayed attribute is set to 'true', the turn begins on the second half
         *  of the beat.
         * 
         *  See Read, p. 246.
         */
        MeiAttribute* getDelayed();
        void setDelayed(std::string _delayed);
        bool hasDelayed();
        void removeDelayed();
        /** \brief Records the appearance and usually the function of the bar line.
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
