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

#ifndef EDITTRANSMIXIN_H_
#define EDITTRANSMIXIN_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class Mei_agentidentMixIn {
    public:
        explicit Mei_agentidentMixIn(MeiElement *b);
        virtual ~Mei_agentidentMixIn();
        /** \brief categorizes the cause of the damage, if it can be identified.
         */
        MeiAttribute* getAgent();
        void setAgent(std::string _agent);
        bool hasAgent();
        void removeAgent();

/* include <agentmixin> */

    private:
        MeiElement *b;
};

class Mei_editMixIn {
    public:
        explicit Mei_editMixIn(MeiElement *b);
        virtual ~Mei_editMixIn();
        /** \brief signifies the degree of certainty associated with the intervention or
         *  interpretation.
         */
        MeiAttribute* getCert();
        void setCert(std::string _cert);
        bool hasCert();
        void removeCert();
        /** \brief indicates the nature of the evidence supporting the reliability or accuracy of
         *  the intervention or interpretation.
         */
        MeiAttribute* getEvidence();
        void setEvidence(std::string _evidence);
        bool hasEvidence();
        void removeEvidence();

/* include <evidencemixin> */

    private:
        MeiElement *b;
};

class Mei_extentMixIn {
    public:
        explicit Mei_extentMixIn(MeiElement *b);
        virtual ~Mei_extentMixIn();
        /** \brief indicates the size of the object concerned using a project-specific vocabulary
         *  combining quantity and units in a single string of words.
         */
        MeiAttribute* getExtent();
        void setExtent(std::string _extent);
        bool hasExtent();
        void removeExtent();

/* include <extentmixin> */

    private:
        MeiElement *b;
};

class Mei_reasonidentMixIn {
    public:
        explicit Mei_reasonidentMixIn(MeiElement *b);
        virtual ~Mei_reasonidentMixIn();
        /** \brief gives the reason for omission.
         * 
         *  Sample values include
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
