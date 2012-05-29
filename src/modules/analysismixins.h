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

#ifndef ANALYSISMIXIN_H_
#define ANALYSISMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class CommonAnlMixIn {
    public:
        explicit CommonAnlMixIn(MeiElement *b);
        virtual ~CommonAnlMixIn();
        /** \brief 
         */
        MeiAttribute* getCopyof();
        void setCopyof(std::string _copyof);
        bool hasCopyof();
        void removeCopyof();
        /** \brief 
         */
        MeiAttribute* getCorresp();
        void setCorresp(std::string _corresp);
        bool hasCorresp();
        void removeCorresp();
        /** \brief 
         */
        MeiAttribute* getNext();
        void setNext(std::string _next);
        bool hasNext();
        void removeNext();
        /** \brief 
         */
        MeiAttribute* getPrev();
        void setPrev(std::string _prev);
        bool hasPrev();
        void removePrev();
        /** \brief 
         */
        MeiAttribute* getSameas();
        void setSameas(std::string _sameas);
        bool hasSameas();
        void removeSameas();
        /** \brief 
         */
        MeiAttribute* getSynch();
        void setSynch(std::string _synch);
        bool hasSynch();
        void removeSynch();

/* include <synchmixin> */

    private:
        MeiElement *b;
};

class HarmonicfunctionMixIn {
    public:
        explicit HarmonicfunctionMixIn(MeiElement *b);
        virtual ~HarmonicfunctionMixIn();
        /** \brief 
         */
        MeiAttribute* getHfunc();
        void setHfunc(std::string _hfunc);
        bool hasHfunc();
        void removeHfunc();

/* include <hfuncmixin> */

    private:
        MeiElement *b;
};

class IntervalharmonicMixIn {
    public:
        explicit IntervalharmonicMixIn(MeiElement *b);
        virtual ~IntervalharmonicMixIn();
        /** \brief 
         */
        MeiAttribute* getInth();
        void setInth(std::string _inth);
        bool hasInth();
        void removeInth();

/* include <inthmixin> */

    private:
        MeiElement *b;
};

class IntervallicdescMixIn {
    public:
        explicit IntervallicdescMixIn(MeiElement *b);
        virtual ~IntervallicdescMixIn();
        /** \brief 
         */
        MeiAttribute* getIntm();
        void setIntm(std::string _intm);
        bool hasIntm();
        void removeIntm();

/* include <intmmixin> */

    private:
        MeiElement *b;
};

class MelodicfunctionMixIn {
    public:
        explicit MelodicfunctionMixIn(MeiElement *b);
        virtual ~MelodicfunctionMixIn();
        /** \brief 
         */
        MeiAttribute* getMfunc();
        void setMfunc(std::string _mfunc);
        bool hasMfunc();
        void removeMfunc();

/* include <mfuncmixin> */

    private:
        MeiElement *b;
};

class PitchclassMixIn {
    public:
        explicit PitchclassMixIn(MeiElement *b);
        virtual ~PitchclassMixIn();
        /** \brief 
         */
        MeiAttribute* getPclass();
        void setPclass(std::string _pclass);
        bool hasPclass();
        void removePclass();

/* include <pclassmixin> */

    private:
        MeiElement *b;
};

class SolfaMixIn {
    public:
        explicit SolfaMixIn(MeiElement *b);
        virtual ~SolfaMixIn();
        /** \brief 
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
