
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

#ifndef NEUMES_H_
#define NEUMES_H_

#include "meielement.h"
#include "exceptions.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "neumesmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
    
/** \brief   interrupted neume ― a graphically interrupted neume; that is, a neume which is
    * logically a single entity but is written using multiple signs. The constituent
    * signs may be encoded using ineume and uneume sub-elements.
    */

class Ineume : public MeiElement {
    public:
        Ineume();
        virtual ~Ineume() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TypedMixIn    m_Typed;
    IneumeLogMixIn    m_IneumeLog;
    ColorMixIn    m_Color;
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    private:
        REGISTER_DECLARATION(Ineume);
};


/** \brief   syllable ― Neume notation can be thought of as "neumed text". Therefore, the
    * syllable element provides high-level organization in this repertoire.
    */

class Syllable : public MeiElement {
    public:
        Syllable();
        virtual ~Syllable() {};
        
        
    CommonMixIn    m_Common;
    private:
        REGISTER_DECLARATION(Syllable);
};


/** \brief   uninterrupted neume ― A graphically-uninterrupted neume sign. While ineume is
    * allowed as a sub-element of uneume here as part of the model.eventLike.neume
    * class, it is unlikely that an uninterrupted neume containing an interrupted
    * neume is a meaningful construct.
    */

class Uneume : public MeiElement {
    public:
        Uneume();
        virtual ~Uneume() {};
        
        
    CommonMixIn    m_Common;
    FacsimileMixIn    m_Facsimile;
    TypedMixIn    m_Typed;
    UneumeLogMixIn    m_UneumeLog;
    TimestampMusicalMixIn    m_TimestampMusical;
    TimestampPerformedMixIn    m_TimestampPerformed;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    SyltextMixIn    m_Syltext;
    AltsymMixIn    m_Altsym;
    ColorMixIn    m_Color;
    RelativesizeMixIn    m_Relativesize;
    VisualoffsetHoMixIn    m_VisualoffsetHo;
    XyMixIn    m_Xy;
    VisibilityMixIn    m_Visibility;
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    HarmonicfunctionMixIn    m_Harmonicfunction;
    MelodicfunctionMixIn    m_Melodicfunction;
    IntervallicdescMixIn    m_Intervallicdesc;
    IntervalharmonicMixIn    m_Intervalharmonic;
    SolfaMixIn    m_Solfa;
    private:
        REGISTER_DECLARATION(Uneume);
};


}
#endif // NEUMES_H_
