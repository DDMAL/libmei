/*
    Copyright (c) 2011 Jamie Klassen, Alastair Porter, Mahtab Ghamsari-Esfahani, Andrew Hankinson

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
    
#ifndef ANALYSISMIXINS_H_
#define ANALYSISMIXINS_H_

#include "meielement.h"
#include "exceptions.h"
using namespace std;

/** \brief   Common analytical attributes. When the meiLinkAlign module is used, the when
 *           attribute is also a member of this attribute class.
 */
struct CommonAnlMixIn {

    CommonAnlMixIn(BaseMeiElement *b);

    string getCopyofValue() throw (AttributeNotFoundException);
    MeiAttribute* getCopyof() throw (AttributeNotFoundException);
    void setCopyof(string _copyof);
    bool hasCopyof();

    string getCorrespValue() throw (AttributeNotFoundException);
    MeiAttribute* getCorresp() throw (AttributeNotFoundException);
    void setCorresp(string _corresp);
    bool hasCorresp();

    string getNextValue() throw (AttributeNotFoundException);
    MeiAttribute* getNext() throw (AttributeNotFoundException);
    void setNext(string _next);
    bool hasNext();

    string getPrevValue() throw (AttributeNotFoundException);
    MeiAttribute* getPrev() throw (AttributeNotFoundException);
    void setPrev(string _prev);
    bool hasPrev();

    string getSameasValue() throw (AttributeNotFoundException);
    MeiAttribute* getSameas() throw (AttributeNotFoundException);
    void setSameas(string _sameas);
    bool hasSameas();

    string getSynchValue() throw (AttributeNotFoundException);
    MeiAttribute* getSynch() throw (AttributeNotFoundException);
    void setSynch(string _synch);
    bool hasSynch();

    string getWhenValue() throw (AttributeNotFoundException);
    MeiAttribute* getWhen() throw (AttributeNotFoundException);
    void setWhen(string _when);
    bool hasWhen();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes describing the harmonic function of a single pitch
 */
struct HarmonicfunctionMixIn {

    HarmonicfunctionMixIn(BaseMeiElement *b);

    string getHfuncValue() throw (AttributeNotFoundException);
    MeiAttribute* getHfunc() throw (AttributeNotFoundException);
    void setHfunc(string _hfunc);
    bool hasHfunc();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that describe harmonic intervals
 */
struct IntervalharmonicMixIn {

    IntervalharmonicMixIn(BaseMeiElement *b);

    string getInthValue() throw (AttributeNotFoundException);
    MeiAttribute* getInth() throw (AttributeNotFoundException);
    void setInth(string _inth);
    bool hasInth();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes describing melodic function
 */
struct MelodicfunctionMixIn {

    MelodicfunctionMixIn(BaseMeiElement *b);

    string getMfuncValue() throw (AttributeNotFoundException);
    MeiAttribute* getMfunc() throw (AttributeNotFoundException);
    void setMfunc(string _mfunc);
    bool hasMfunc();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that specify pitch using sol-fa
 */
struct SolfaMixIn {

    SolfaMixIn(BaseMeiElement *b);

    string getPsolfaValue() throw (AttributeNotFoundException);
    MeiAttribute* getPsolfa() throw (AttributeNotFoundException);
    void setPsolfa(string _psolfa);
    bool hasPsolfa();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that provide for description of intervallic content
 */
struct IntervallicdescMixIn {

    IntervallicdescMixIn(BaseMeiElement *b);

    string getIntmValue() throw (AttributeNotFoundException);
    MeiAttribute* getIntm() throw (AttributeNotFoundException);
    void setIntm(string _intm);
    bool hasIntm();

    string getInthValue() throw (AttributeNotFoundException);
    MeiAttribute* getInth() throw (AttributeNotFoundException);
    void setInth(string _inth);
    bool hasInth();


    private:
         BaseMeiElement *b;
};

#endif // ANALYSISMIXINS_H_