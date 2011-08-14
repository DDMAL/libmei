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
    
#ifndef MENSURAL_H_
#define MENSURAL_H_

#include "facsimilemixins.h"
#include "analysismixins.h"
#include "mensuralmixins.h"
#include "sharedmixins.h"
#include "cmnmixins.h"
#include "critappmixins.h"
using namespace std;
/** \brief  mensuration ― The <mensur> element is provided for the encoding of mensural
 *          notation.
 *
 * It collects information about the metrical relationship between a note value and          
 *          the next smaller value; that is, either triple or duple. The slash attribute          
 *          indicates the number lines added to the mensuration sign. For example, one slash          
 *          is added for what we now call 'alla breve'..
 */
struct Mensur : public BaseMeiElement{
    Mensur();
    virtual ~Mensur() {};

    string getDotValue() throw (AttributeNotFoundException);

    MeiAttribute* getDot() throw (AttributeNotFoundException);
    void setDot(string _dot);
    bool hasDot();

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    string getOrientValue() throw (AttributeNotFoundException);

    MeiAttribute* getOrient() throw (AttributeNotFoundException);
    void setOrient(string _orient);
    bool hasOrient();

    string getSignValue() throw (AttributeNotFoundException);

    MeiAttribute* getSign() throw (AttributeNotFoundException);
    void setSign(string _sign);
    bool hasSign();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    RelativesizeMixIn    m_Relativesize;
    SlashcountMixIn    m_Slashcount;
    StafflocMixIn    m_Staffloc;
    TupletAnlMixIn    m_TupletAnl;
    MensurLogMixIn    m_MensurLog;
    MensurationLogMixIn    m_MensurationLog;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Mensur);
};

/** \brief  proportion ― The <proportion> element is provided for the encoding of mensural
 *          notation.
 *
 * It allows the description of note durations as arithmetic ratios. While          
 *          mensuration refers to the normal relationships between note durations,          
 *          proportion affects the relations of the note durations to the tactus..
 */
struct Proport : public BaseMeiElement{
    Proport();
    virtual ~Proport() {};

    CommonMixIn    m_Common;
    DurationRatioMixIn    m_DurationRatio;
    TupletAnlMixIn    m_TupletAnl;
    MensurLogMixIn    m_MensurLog;
    MensurationLogMixIn    m_MensurationLog;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Proport);
};

/** \brief  ligature ― A mensural notation symbol that combines two or more notes into a
 *          single sign.
 *
 * The rhythmic meaning of the components of a ligature is typically contextual,          
 *          not absolute; therefore, an interpretative duration may be encoded on each of          
 *          the components using either the dur.ges attribute or the num and numbase          
 *          attribute pair. The <ligature> element should *not* be used for brackets in          
 *          modern notation that indicate notes that were part of a ligature in the original          
 *          source..
 */
struct Ligature : public BaseMeiElement{
    Ligature();
    virtual ~Ligature() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Ligature);
};

#endif // MENSURAL_H_