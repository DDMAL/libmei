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
    
#ifndef NEUMES_H_
#define NEUMES_H_

#include "facsimilemixins.h"
#include "sharedmixins.h"
#include "analysismixins.h"
#include "cmnmixins.h"
#include "critappmixins.h"
using namespace std;
/** \brief  interrupted neume ― a graphically interrupted neume; that is, a neume which is
 *          logically a single entity but is written using multiple signs.
 *
 * The constituent signs may be encoded using ineume and uneume sub-elements..
 */
struct Ineume : public BaseMeiElement{
    Ineume();
    virtual ~Ineume() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    string getNameValue() throw (AttributeNotFoundException);

    MeiAttribute* getName() throw (AttributeNotFoundException);
    void setName(string _name);
    bool hasName();

    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    TypedMixIn    m_Typed;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Ineume);
};

/** \brief  syllable ― Neume notation can be thought of as "neumed text".
 *
 * Therefore, the syllable element provides high-level organization in this          
 *          repertoire..
 */
struct Syllable : public BaseMeiElement{
    Syllable();
    virtual ~Syllable() {};

    CommonMixIn    m_Common;
    private:
        //REGISTER_DECLARATION(Syllable);
};

/** \brief  uninterrupted neume ― A graphically-uninterrupted neume sign.
 *
 * While ineume is allowed as a sub-element of uneume here as part of the          
 *          model.eventLike.neume class, it is unlikely that an uninterrupted neume          
 *          containing an interrupted neume is a meaningful construct..
 */
struct Uneume : public BaseMeiElement{
    Uneume();
    virtual ~Uneume() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    string getNameValue() throw (AttributeNotFoundException);

    MeiAttribute* getName() throw (AttributeNotFoundException);
    void setName(string _name);
    bool hasName();

    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    CommonMixIn    m_Common;
    RelativesizeMixIn    m_Relativesize;
    SyltextMixIn    m_Syltext;
    TypedMixIn    m_Typed;
    VisibilityMixIn    m_Visibility;
    VisualoffsetHoMixIn    m_VisualoffsetHo;
    XyMixIn    m_Xy;
    VisualoffsetMixIn    m_Visualoffset;
    EventMixIn    m_Event;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    HarmonicfunctionMixIn    m_Harmonicfunction;
    IntervallicdescMixIn    m_Intervallicdesc;
    MelodicfunctionMixIn    m_Melodicfunction;
    SolfaMixIn    m_Solfa;
    RdgAnlMixIn    m_RdgAnl;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(Uneume);
};

#endif // NEUMES_H_