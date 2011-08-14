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
    
#ifndef EDITTRANSMIXINS_H_
#define EDITTRANSMIXINS_H_

#include "meielement.h"
#include "exceptions.h"
#include "sharedmixins.h"
#include "critappmixins.h"
using namespace std;

/** \brief   Attributes for the identification of a causative agent
 */
struct AgentidentMixIn {

    AgentidentMixIn(BaseMeiElement *b);

    string getAgentValue() throw (AttributeNotFoundException);
    MeiAttribute* getAgent() throw (AttributeNotFoundException);
    void setAgent(string _agent);
    bool hasAgent();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes for identification of the extent of editorial assertions
 */
struct ExtentMixIn {

    ExtentMixIn(BaseMeiElement *b);

    string getExtentValue() throw (AttributeNotFoundException);
    MeiAttribute* getExtent() throw (AttributeNotFoundException);
    void setExtent(string _extent);
    bool hasExtent();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes that identify the reason why an editorial feature is used
 */
struct ReasonidentMixIn {

    ReasonidentMixIn(BaseMeiElement *b);

    string getReasonValue() throw (AttributeNotFoundException);
    MeiAttribute* getReason() throw (AttributeNotFoundException);
    void setReason(string _reason);
    bool hasReason();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes describing the nature of an encoded scholarly intervention or
 *           interpretation
 */
struct EditMixIn {

    EditMixIn(BaseMeiElement *b);

    string getCertValue() throw (AttributeNotFoundException);
    MeiAttribute* getCert() throw (AttributeNotFoundException);
    void setCert(string _cert);
    bool hasCert();

    string getEvidenceValue() throw (AttributeNotFoundException);
    MeiAttribute* getEvidence() throw (AttributeNotFoundException);
    void setEvidence(string _evidence);
    bool hasEvidence();

    string getRespValue() throw (AttributeNotFoundException);
    MeiAttribute* getResp() throw (AttributeNotFoundException);
    void setResp(string _resp);
    bool hasResp();

    string getSourceValue() throw (AttributeNotFoundException);
    MeiAttribute* getSource() throw (AttributeNotFoundException);
    void setSource(string _source);
    bool hasSource();


    private:
         BaseMeiElement *b;
};

/** \brief   Attributes for elements encoding authorial or scribal intervention when
 *           transcribing manuscript or similar sources
 */
struct TransMixIn {

    TransMixIn(BaseMeiElement *b);

    string getHandValue() throw (AttributeNotFoundException);
    MeiAttribute* getHand() throw (AttributeNotFoundException);
    void setHand(string _hand);
    bool hasHand();

    string getSeqValue() throw (AttributeNotFoundException);
    MeiAttribute* getSeq() throw (AttributeNotFoundException);
    void setSeq(string _seq);
    bool hasSeq();


    private:
         BaseMeiElement *b;
};

#endif // EDITTRANSMIXINS_H_