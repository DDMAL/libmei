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

#ifndef TABLATUREMIXIN_H_
#define TABLATUREMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
#include <string>

namespace mei {
class NoteGesTablatureMixIn {
    public:
        explicit NoteGesTablatureMixIn(MeiElement *b);
        virtual ~NoteGesTablatureMixIn();
        /** \brief records the fret at which a string should be stopped.
         */
        MeiAttribute* getTabFret();
        void setTabFret(std::string _tabfret);
        bool hasTabFret();
        void removeTabFret();
        /** \brief records which string is to be played.
         */
        MeiAttribute* getTabString();
        void setTabString(std::string _tabstring);
        bool hasTabString();
        void removeTabString();

    private:
        MeiElement *b;
};

class StaffdefGesTablatureMixIn {
    public:
        explicit StaffdefGesTablatureMixIn(MeiElement *b);
        virtual ~StaffdefGesTablatureMixIn();
        /** \brief provides a written pitch and octave for each open string, e.g.
         * 
         *  "e3 a3 d4 g4 b4 e5" for standard guitar tuning. It should contain the number of
         *  tokens indicated by the lines attribute. Chromatic alteration may be indicated
         *  with '-', or 'f', (flat) and '#', or 's' (sharp). Multiple sharps and flats are
         *  not permitted.
         */
        MeiAttribute* getTabStrings();
        void setTabStrings(std::string _tabstrings);
        bool hasTabStrings();
        void removeTabStrings();

    private:
        MeiElement *b;
};
}
#endif  // TABLATUREMIXIN_H_
