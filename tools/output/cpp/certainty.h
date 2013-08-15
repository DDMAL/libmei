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

#ifndef CERTAINTY_H_
#define CERTAINTY_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include <string>


namespace mei {
/** \brief indicates the degree of certainty associated with some aspect of the text
 *  markup.
 */
class MEI_EXPORT Certainty : public MeiElement {
    public:
        Certainty();
        Certainty(const Certainty& other);
        virtual ~Certainty();
        /** \brief signifies the degree of certainty associated with the intervention or
         *  interpretation.
         */
        MeiAttribute* getCert();
        void setCert(std::string _cert);
        bool hasCert();
        void removeCert();
        /** \brief indicates more exactly the aspect concerning which certainty is being expressed:
         *  specifically, whether the markup is correctly located, whether the correct
         *  element or attribute name has been used, or whether the content of the element
         *  or attribute is correct, etc.
         */
        MeiAttribute* getLocus();
        void setLocus(std::string _locus);
        bool hasLocus();
        void removeLocus();
        /** \brief provides an alternative value for the aspect of the markup in question—an
         *  alternative generic identifier, transcription, or attribute value, or the
         *  identifier of an
         */
        MeiAttribute* getAssertedValue();
        void setAssertedValue(std::string _assertedValue);
        bool hasAssertedValue();
        void removeAssertedValue();
        /** \brief indicates conditions assumed in the assignment of a degree of confidence.
         */
        MeiAttribute* getGiven();
        void setGiven(std::string _given);
        bool hasGiven();
        void removeGiven();
        /** \brief signifies the degree of damage according to a convenient scale.
         * 
         *  The
         */
        MeiAttribute* getDegree();
        void setDegree(std::string _degree);
        bool hasDegree();
        void removeDegree();

/* include <certainty> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ScopingMixIn    m_Scoping;

    private:
        REGISTER_DECLARATION(Certainty);
};

/** \brief indicates the numerical accuracy or precision associated with some aspect of the
 *  text markup.
 */
class MEI_EXPORT Precision : public MeiElement {
    public:
        Precision();
        Precision(const Precision& other);
        virtual ~Precision();
        /** \brief signifies the degree of damage according to a convenient scale.
         * 
         *  The
         */
        MeiAttribute* getDegree();
        void setDegree(std::string _degree);
        bool hasDegree();
        void removeDegree();
        /** \brief characterizes the precision of the values specified by the other attributes.
         */
        MeiAttribute* getPrecision();
        void setPrecision(std::string _precision);
        bool hasPrecision();
        void removePrecision();
        /** \brief supplies a standard deviation associated with the value in question
         */
        MeiAttribute* getStdDeviation();
        void setStdDeviation(std::string _stdDeviation);
        bool hasStdDeviation();
        void removeStdDeviation();

/* include <precision> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ScopingMixIn    m_Scoping;
        RangingMixIn    m_Ranging;

    private:
        REGISTER_DECLARATION(Precision);
};

/** \brief identifies the individual(s) responsible for some aspect of the content or
 *  markup of particular element(s).
 */
class MEI_EXPORT Respons : public MeiElement {
    public:
        Respons();
        Respons(const Respons& other);
        virtual ~Respons();
        /** \brief indicates more exactly the aspect concerning which certainty is being expressed:
         *  specifically, whether the markup is correctly located, whether the correct
         *  element or attribute name has been used, or whether the content of the element
         *  or attribute is correct, etc.
         */
        MeiAttribute* getLocus();
        void setLocus(std::string _locus);
        bool hasLocus();
        void removeLocus();
        /** \brief indicates the agency responsible for the intervention or interpretation, for
         *  example an editor or transcriber.
         */
        MeiAttribute* getResp();
        void setResp(std::string _resp);
        bool hasResp();
        void removeResp();

/* include <respons> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ScopingMixIn    m_Scoping;

    private:
        REGISTER_DECLARATION(Respons);
};
}
#endif  // CERTAINTY_H_
