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

#ifndef EDITTRANSMIXIN_H_
#define EDITTRANSMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AgentidentMixIn {
    public:
        explicit AgentidentMixIn(MeiElement *b);
        virtual ~AgentidentMixIn();
        /** \brief Signifies the causative agent of damage, illegibility, or other loss of original
         *  text.
         */
        MeiAttribute* getAgent();
        void setAgent(std::string _agent);
        bool hasAgent();
        void removeAgent();

/* include <agentmixin> */

    private:
        MeiElement *b;
};

class EvidenceMixIn {
    public:
        explicit EvidenceMixIn(MeiElement *b);
        virtual ~EvidenceMixIn();
        /** \brief Signifies the degree of certainty or precision associated with a feature.
         */
        MeiAttribute* getCert();
        void setCert(std::string _cert);
        bool hasCert();
        void removeCert();
        /** \brief Indicates the nature of the evidence supporting the reliability or accuracy of
         *  the intervention or interpretation.
         * 
         *  Suggested values include: 'internal', 'external', 'conjecture'.
         */
        MeiAttribute* getEvidence();
        void setEvidence(std::string _evidence);
        bool hasEvidence();
        void removeEvidence();

/* include <evidencemixin> */

    private:
        MeiElement *b;
};

class ExtentMixIn {
    public:
        explicit ExtentMixIn(MeiElement *b);
        virtual ~ExtentMixIn();
        /** \brief Indicates the extent of damage or omission.
         */
        MeiAttribute* getExtent();
        void setExtent(std::string _extent);
        bool hasExtent();
        void removeExtent();

/* include <extentmixin> */

    private:
        MeiElement *b;
};

class ReasonidentMixIn {
    public:
        explicit ReasonidentMixIn(MeiElement *b);
        virtual ~ReasonidentMixIn();
        /** \brief Holds a short phrase describing the reason for missing textual material (gap),
         *  why material is supplied (supplied), or why transcription is difficult
         *  (unclear).
         */
        MeiAttribute* getReason();
        void setReason(std::string _reason);
        bool hasReason();
        void removeReason();

/* include <reasonmixin> */

    private:
        MeiElement *b;
};
}
#endif  // EDITTRANSMIXIN_H_
