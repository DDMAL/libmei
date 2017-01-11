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

#ifndef MENSURALMIXIN_H_
#define MENSURALMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class LigatureLogMixIn {
    public:
        explicit LigatureLogMixIn(MeiElement *b);
        virtual ~LigatureLogMixIn();
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

class MensurVisMixIn {
    public:
        explicit MensurVisMixIn(MeiElement *b);
        virtual ~MensurVisMixIn();
        /** \brief Records the appearance and usually the function of the bar line.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();
        /** \brief Describes the rotation or reflection of the base symbol.
         */
        MeiAttribute* getOrient();
        void setOrient(std::string _orient);
        bool hasOrient();
        void removeOrient();

/* include <orientmixin> */

    private:
        MeiElement *b;
};

class MensuralLogMixIn {
    public:
        explicit MensuralLogMixIn(MeiElement *b);
        virtual ~MensuralLogMixIn();
        /** \brief Determines if a dot is to be added to the base symbol.
         */
        MeiAttribute* getMensurDot();
        void setMensurDot(std::string _mensurdot);
        bool hasMensurDot();
        void removeMensurDot();
        /** \brief The base symbol in the mensuration sign/time signature of mensural notation.
         */
        MeiAttribute* getMensurSign();
        void setMensurSign(std::string _mensursign);
        bool hasMensurSign();
        void removeMensurSign();
        /** \brief Indicates the number lines added to the mensuration sign.
         * 
         *  For example, one slash is added for what we now call 'alla breve'.
         */
        MeiAttribute* getMensurSlash();
        void setMensurSlash(std::string _mensurslash);
        bool hasMensurSlash();
        void removeMensurSlash();
        /** \brief Together, proport.num and proport.numbase specify a proportional change as a
         *  ratio, e.g., 1:3.
         * 
         *  Proport.num is for the first value in the ratio.
         */
        MeiAttribute* getProportNum();
        void setProportNum(std::string _proportnum);
        bool hasProportNum();
        void removeProportNum();
        /** \brief Together, proport.num and proport.numbase specify a proportional change as a
         *  ratio, e.g., 1:3.
         * 
         *  Proport.numbase is for the second value in the ratio.
         */
        MeiAttribute* getProportNumbase();
        void setProportNumbase(std::string _proportnumbase);
        bool hasProportNumbase();
        void removeProportNumbase();

/* include <proport.numbasemixin> */

    private:
        MeiElement *b;
};

class MensuralSharedMixIn {
    public:
        explicit MensuralSharedMixIn(MeiElement *b);
        virtual ~MensuralSharedMixIn();
        /** \brief Describes the maxima-long relationship.
         */
        MeiAttribute* getModusmaior();
        void setModusmaior(std::string _modusmaior);
        bool hasModusmaior();
        void removeModusmaior();
        /** \brief Describes the long-breve relationship.
         */
        MeiAttribute* getModusminor();
        void setModusminor(std::string _modusminor);
        bool hasModusminor();
        void removeModusminor();
        /** \brief Describes the semibreve-minim relationship.
         */
        MeiAttribute* getProlatio();
        void setProlatio(std::string _prolatio);
        bool hasProlatio();
        void removeProlatio();
        /** \brief Describes the breve-semibreve relationship.
         */
        MeiAttribute* getTempus();
        void setTempus(std::string _tempus);
        bool hasTempus();
        void removeTempus();

/* include <tempusmixin> */

    private:
        MeiElement *b;
};

class MensuralVisMixIn {
    public:
        explicit MensuralVisMixIn(MeiElement *b);
        virtual ~MensuralVisMixIn();
        /** \brief Records the color of the mensuration sign.
         * 
         *  Do not confuse this with the musical term 'color' as used in pre-CMN notation.
         */
        MeiAttribute* getMensurColor();
        void setMensurColor(std::string _mensurcolor);
        bool hasMensurColor();
        void removeMensurColor();
        /** \brief Indicates whether the base symbol is written vertically or horizontally.
         */
        MeiAttribute* getMensurForm();
        void setMensurForm(std::string _mensurform);
        bool hasMensurForm();
        void removeMensurForm();
        /** \brief Holds the staff location of the mensuration sign.
         */
        MeiAttribute* getMensurLoc();
        void setMensurLoc(std::string _mensurloc);
        bool hasMensurLoc();
        void removeMensurLoc();
        /** \brief Describes the rotation or reflection of the base symbol.
         */
        MeiAttribute* getMensurOrient();
        void setMensurOrient(std::string _mensurorient);
        bool hasMensurOrient();
        void removeMensurOrient();
        /** \brief Describes the relative size of the mensuration sign.
         */
        MeiAttribute* getMensurSize();
        void setMensurSize(std::string _mensursize);
        bool hasMensurSize();
        void removeMensurSize();

/* include <mensur.sizemixin> */

    private:
        MeiElement *b;
};

class NoteLogMensuralMixIn {
    public:
        explicit NoteLogMensuralMixIn(MeiElement *b);
        virtual ~NoteLogMensuralMixIn();
        /** \brief Indicates this element's participation in a ligature.
         */
        MeiAttribute* getLig();
        void setLig(std::string _lig);
        bool hasLig();
        void removeLig();

/* include <ligmixin> */

    private:
        MeiElement *b;
};

class RestVisMensuralMixIn {
    public:
        explicit RestVisMensuralMixIn(MeiElement *b);
        virtual ~RestVisMensuralMixIn();
        /** \brief States how many spaces are covered by the rest.
         */
        MeiAttribute* getSpaces();
        void setSpaces(std::string _spaces);
        bool hasSpaces();
        void removeSpaces();

/* include <spacesmixin> */

    private:
        MeiElement *b;
};
}
#endif  // MENSURALMIXIN_H_
