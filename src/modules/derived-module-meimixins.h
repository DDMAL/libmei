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

#ifndef DERIVED-MODULE-MEIMIXIN_H_
#define DERIVED-MODULE-MEIMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class SolesmesDivisionMixIn {
    public:
        explicit SolesmesDivisionMixIn(MeiElement *b);
        virtual ~SolesmesDivisionMixIn();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class SolesmesEpisemaMixIn {
    public:
        explicit SolesmesEpisemaMixIn(MeiElement *b);
        virtual ~SolesmesEpisemaMixIn();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <formmixin> */

    private:
        MeiElement *b;
};

class SolesmesNcMixIn {
    public:
        explicit SolesmesNcMixIn(MeiElement *b);
        virtual ~SolesmesNcMixIn();
        /** \brief The form of an "auctus".
         */
        MeiAttribute* getAuctus();
        void setAuctus(std::string _auctus);
        bool hasAuctus();
        void removeAuctus();
        /** \brief This neume component describes a deminutus note.
         */
        MeiAttribute* getDeminutus();
        void setDeminutus(std::string _deminutus);
        bool hasDeminutus();
        void removeDeminutus();
        /** \brief This neume component describes a quilisma note.
         */
        MeiAttribute* getQuilisma();
        void setQuilisma(std::string _quilisma);
        bool hasQuilisma();
        void removeQuilisma();
        /** \brief This neume component describes a punctum inclinatum
         */
        MeiAttribute* getInclinatum();
        void setInclinatum(std::string _inclinatum);
        bool hasInclinatum();
        void removeInclinatum();

/* include <inclinatummixin> */

    private:
        MeiElement *b;
};

class SolesmesNeumeMixIn {
    public:
        explicit SolesmesNeumeMixIn(MeiElement *b);
        virtual ~SolesmesNeumeMixIn();
        /** \brief Neume names taken primarily from the Liber Hymnarius, p.
         * 
         *  xii, except where the neume form given in this table may be represented with a
         *  different representation, e.g., a "podatus initia debilis" may be represented as
         *  a podatus with an initial deminutae. This also accepts freeform neume names.
         *  This is used for when a neume is known by a name, but it may not appear on this
         *  list.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();
        /** \brief Used to capture a neume variant name from the primary neume names.
         */
        MeiAttribute* getVariant();
        void setVariant(std::string _variant);
        bool hasVariant();
        void removeVariant();

/* include <variantmixin> */

    private:
        MeiElement *b;
};
}
#endif  // DERIVED-MODULE-MEIMIXIN_H_
