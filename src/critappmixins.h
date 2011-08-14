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
    
#ifndef CRITAPPMIXINS_H_
#define CRITAPPMIXINS_H_

#include "meielement.h"
#include "exceptions.h"
#include "sharedmixins.h"
#include "analysismixins.h"
using namespace std;

/** \brief   Attributes common to elements that may refer to a source
 */
struct SourceMixIn {

    SourceMixIn(BaseMeiElement *b);

    string getSourceValue() throw (AttributeNotFoundException);
    MeiAttribute* getSource() throw (AttributeNotFoundException);
    void setSource(string _source);
    bool hasSource();


    private:
         BaseMeiElement *b;
};

/** \brief   Gestural domain attributes
 */
struct RdgGesMixIn {

    RdgGesMixIn(BaseMeiElement *b);


    private:
         BaseMeiElement *b;
};

/** \brief   Logical domain attributes
 */
struct RdgLogMixIn {

    RdgLogMixIn(BaseMeiElement *b);


    private:
         BaseMeiElement *b;
};

/** \brief   Visual domain attributes
 */
struct RdgVisMixIn {

    RdgVisMixIn(BaseMeiElement *b);


    private:
         BaseMeiElement *b;
};

/** \brief   Analytical domain attributes
 */
struct RdgAnlMixIn {

    RdgAnlMixIn(BaseMeiElement *b);

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

/** \brief   Attributes common to all elements representing variant readings
 */
struct CritMixIn {

    CritMixIn(BaseMeiElement *b);

    string getCauseValue() throw (AttributeNotFoundException);
    MeiAttribute* getCause() throw (AttributeNotFoundException);
    void setCause(string _cause);
    bool hasCause();

    string getHandValue() throw (AttributeNotFoundException);
    MeiAttribute* getHand() throw (AttributeNotFoundException);
    void setHand(string _hand);
    bool hasHand();

    string getRespValue() throw (AttributeNotFoundException);
    MeiAttribute* getResp() throw (AttributeNotFoundException);
    void setResp(string _resp);
    bool hasResp();

    string getSeqValue() throw (AttributeNotFoundException);
    MeiAttribute* getSeq() throw (AttributeNotFoundException);
    void setSeq(string _seq);
    bool hasSeq();

    string getSourceValue() throw (AttributeNotFoundException);
    MeiAttribute* getSource() throw (AttributeNotFoundException);
    void setSource(string _source);
    bool hasSource();


    private:
         BaseMeiElement *b;
};

#endif // CRITAPPMIXINS_H_