
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

#ifndef ANALYSISMIXIN_H_
#define ANALYSISMIXIN_H_

#include "meielement.h"
#include "exceptions.h"


namespace mei {
    
class CommonAnlMixIn {
    public:
        CommonAnlMixIn(MeiElement *b);
        virtual ~CommonAnlMixIn() {};
        
    /** \brief   points to an element of which the current element is a copy.
    */

    MeiAttribute* getCopyof();
    void setCopyof(std::string _copyof);
    bool hasCopyof();
    void removeCopyof();

    /** \brief   used to point to other elements that correspond to this one in a generic
    * fashion.
    */

    MeiAttribute* getCorresp();
    void setCorresp(std::string _corresp);
    bool hasCorresp();
    void removeCorresp();

    /** \brief   used to point to the next event(s) in a user-defined collection.
    */

    MeiAttribute* getNext();
    void setNext(std::string _next);
    bool hasNext();
    void removeNext();

    /** \brief   points to the previous event(s) in a user-defined collection.
    */

    MeiAttribute* getPrev();
    void setPrev(std::string _prev);
    bool hasPrev();
    void removePrev();

    /** \brief   points to an element that is the same as the current element but is not a
    * literal copy of the current element.
    */

    MeiAttribute* getSameas();
    void setSameas(std::string _sameas);
    bool hasSameas();
    void removeSameas();

    /** \brief   points to elements that are synchronous with the current element.
    */

    MeiAttribute* getSynch();
    void setSynch(std::string _synch);
    bool hasSynch();
    void removeSynch();

    private:
        MeiElement *b;
};


class HarmonicfunctionMixIn {
    public:
        HarmonicfunctionMixIn(MeiElement *b);
        virtual ~HarmonicfunctionMixIn() {};
        
    /** \brief   describes harmonic function in any convenient typology.
    */

    MeiAttribute* getHfunc();
    void setHfunc(std::string _hfunc);
    bool hasHfunc();
    void removeHfunc();

    private:
        MeiElement *b;
};


class IntervalharmonicMixIn {
    public:
        IntervalharmonicMixIn(MeiElement *b);
        virtual ~IntervalharmonicMixIn() {};
        
    /** \brief   encodes the harmonic interval between this note and other pitches occurring at
    * the same time.
    */

    MeiAttribute* getInth();
    void setInth(std::string _inth);
    bool hasInth();
    void removeInth();

    private:
        MeiElement *b;
};


class IntervallicdescMixIn {
    public:
        IntervallicdescMixIn(MeiElement *b);
        virtual ~IntervallicdescMixIn() {};
        
    /** \brief   encodes the melodic interval from the previous pitch. The value may be a general
    * directional indication (u, d, s) or a precise numeric value in half steps.
    */

    MeiAttribute* getIntm();
    void setIntm(std::string _intm);
    bool hasIntm();
    void removeIntm();

    private:
        MeiElement *b;
};


class MelodicfunctionMixIn {
    public:
        MelodicfunctionMixIn(MeiElement *b);
        virtual ~MelodicfunctionMixIn() {};
        
    /** \brief   describes melodic function in any convenient typology.
    */

    MeiAttribute* getMfunc();
    void setMfunc(std::string _mfunc);
    bool hasMfunc();
    void removeMfunc();

    private:
        MeiElement *b;
};


class PitchclassMixIn {
    public:
        PitchclassMixIn(MeiElement *b);
        virtual ~PitchclassMixIn() {};
        
    /** \brief   holds pitch class information.
    */

    MeiAttribute* getPclass();
    void setPclass(std::string _pclass);
    bool hasPclass();
    void removePclass();

    private:
        MeiElement *b;
};


class SolfaMixIn {
    public:
        SolfaMixIn(MeiElement *b);
        virtual ~SolfaMixIn() {};
        
    /** \brief   contains sol-fa designation, e.g., do, re, mi, etc., in either a fixed or
    * movable Do system.
    */

    MeiAttribute* getPsolfa();
    void setPsolfa(std::string _psolfa);
    bool hasPsolfa();
    void removePsolfa();

    private:
        MeiElement *b;
};


}
#endif // ANALYSISMIXIN_H_
