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

#ifndef ANALYSISMIXIN_H_
#define ANALYSISMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class GlobalAnalyticMixIn {
    public:
        explicit GlobalAnalyticMixIn(MeiElement *b);
        virtual ~GlobalAnalyticMixIn();
        /** \brief indicates one or more elements containing interpretations of the element on
         *  which the
         */
        MeiAttribute* getAna();
        void setAna(std::string _ana);
        bool hasAna();
        void removeAna();

/* include <anamixin> */

    private:
        MeiElement *b;
};

class Mei_commonAnlMixIn {
    public:
        explicit Mei_commonAnlMixIn(MeiElement *b);
        virtual ~Mei_commonAnlMixIn();
        /** \brief points to an element of which the current element is a copy.
         */
        MeiAttribute* getCopyof();
        void setCopyof(std::string _copyof);
        bool hasCopyof();
        void removeCopyof();
        /** \brief points to elements that correspond to the current element in some way.
         */
        MeiAttribute* getCorresp();
        void setCorresp(std::string _corresp);
        bool hasCorresp();
        void removeCorresp();
        /** \brief points to the next element of a virtual aggregate of which the current element
         *  is part.
         */
        MeiAttribute* getNext();
        void setNext(std::string _next);
        bool hasNext();
        void removeNext();
        /** \brief points to the previous element of a virtual aggregate of which the current
         *  element is part.
         */
        MeiAttribute* getPrev();
        void setPrev(std::string _prev);
        bool hasPrev();
        void removePrev();
        /** \brief points to an element that is the same as the current element but is not a
         *  literal copy of the current element.
         */
        MeiAttribute* getSameas();
        void setSameas(std::string _sameas);
        bool hasSameas();
        void removeSameas();
        /** \brief points to elements that are synchronous with the current element.
         */
        MeiAttribute* getSynch();
        void setSynch(std::string _synch);
        bool hasSynch();
        void removeSynch();

/* include <synchmixin> */

    private:
        MeiElement *b;
};

class Mei_harmonicfunctionMixIn {
    public:
        explicit Mei_harmonicfunctionMixIn(MeiElement *b);
        virtual ~Mei_harmonicfunctionMixIn();
        /** \brief describes harmonic function in any convenient typology.
         */
        MeiAttribute* getHfunc();
        void setHfunc(std::string _hfunc);
        bool hasHfunc();
        void removeHfunc();

/* include <hfuncmixin> */

    private:
        MeiElement *b;
};

class Mei_intervalharmonicMixIn {
    public:
        explicit Mei_intervalharmonicMixIn(MeiElement *b);
        virtual ~Mei_intervalharmonicMixIn();
        /** \brief encodes the harmonic interval between this note and other pitches occurring at
         *  the same time.
         */
        MeiAttribute* getInth();
        void setInth(std::string _inth);
        bool hasInth();
        void removeInth();

/* include <inthmixin> */

    private:
        MeiElement *b;
};

class Mei_intervallicdescMixIn {
    public:
        explicit Mei_intervallicdescMixIn(MeiElement *b);
        virtual ~Mei_intervallicdescMixIn();
        /** \brief encodes the melodic interval from the previous pitch.
         * 
         *  The value may be a general directional indication (u, d, s) or a precise numeric
         *  value in half steps.
         */
        MeiAttribute* getIntm();
        void setIntm(std::string _intm);
        bool hasIntm();
        void removeIntm();

/* include <intmmixin> */

    private:
        MeiElement *b;
};

class Mei_melodicfunctionMixIn {
    public:
        explicit Mei_melodicfunctionMixIn(MeiElement *b);
        virtual ~Mei_melodicfunctionMixIn();
        /** \brief describes melodic function in any convenient typology.
         */
        MeiAttribute* getMfunc();
        void setMfunc(std::string _mfunc);
        bool hasMfunc();
        void removeMfunc();

/* include <mfuncmixin> */

    private:
        MeiElement *b;
};

class Mei_pitchclassMixIn {
    public:
        explicit Mei_pitchclassMixIn(MeiElement *b);
        virtual ~Mei_pitchclassMixIn();
        /** \brief holds pitch class information.
         */
        MeiAttribute* getPclass();
        void setPclass(std::string _pclass);
        bool hasPclass();
        void removePclass();

/* include <pclassmixin> */

    private:
        MeiElement *b;
};

class Mei_solfaMixIn {
    public:
        explicit Mei_solfaMixIn(MeiElement *b);
        virtual ~Mei_solfaMixIn();
        /** \brief contains sol-fa designation, e.g., do, re, mi, etc., in either a fixed or
         *  movable Do system.
         */
        MeiAttribute* getPsolfa();
        void setPsolfa(std::string _psolfa);
        bool hasPsolfa();
        void removePsolfa();

/* include <psolfamixin> */

    private:
        MeiElement *b;
};
}
#endif  // ANALYSISMIXIN_H_
