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
    
#ifndef NAMESDATES_H_
#define NAMESDATES_H_

#include "facsimilemixins.h"
#include "sharedmixins.h"
#include "edittransmixins.h"
using namespace std;
/** \brief  corporate name ― Identifies an organization or group of people that acts as a
 *          single entity.
 *
 * Examples include names of associations, institutions, business firms, non-profit          
 *          enterprises, governments, government agencies, projects, programs, religious          
 *          bodies, churches, conferences, athletic contests, exhibitions, expeditions,          
 *          fairs, and ships. Secondary name parts may be encoded in <corpName> sub-          
 *          elements. The name of the list from which a controlled value is taken may be          
 *          recorded using the authority attribute. This element is modelled on an element          
 *          in Encoded Archival Description (EAD)..
 */
struct CorpName : public BaseMeiElement{
    CorpName();
    virtual ~CorpName() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    NameMixIn    m_Name;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(CorpName);
};

/** \brief  geographic name ― The proper noun designation for a place, natural feature, or
 *          political jurisdiction.
 *
 * Examples include Black Forest; Baltimore, Maryland; and Quartier Latin, Paris.          
 *          Name sub-parts may be encoded in <geogName> sub-elements. The name of the list          
 *          from which a controlled value is taken, such as the Thesaurus of Geographic          
 *          Names (TGN), may be recorded using the authority attribute. This element is          
 *          modelled on an element in Encoded Archival Description (EAD)..
 */
struct GeogName : public BaseMeiElement{
    GeogName();
    virtual ~GeogName() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    NameMixIn    m_Name;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(GeogName);
};

/** \brief  period name ― A label that describes a period of time, such as 'Baroque' or
 *          '3rd Style period'.
 *
 * The name of the list from which a controlled value is taken may be recorded          
 *          using the authority attribute..
 */
struct PeriodName : public BaseMeiElement{
    PeriodName();
    virtual ~PeriodName() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    NameMixIn    m_Name;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(PeriodName);
};

/** \brief  personal name ― Designation for an individual, including any or all of that
 *          individual's forenames, surnames, honorific titles, and added names.
 *
 * Name sub-parts may be recorded in <persName> sub-elements. The name of the list          
 *          from which a controlled value is taken may be recorded using the authority          
 *          attribute. This element is modelled on an element in Encoded Archival          
 *          Description (EAD)..
 */
struct PersName : public BaseMeiElement{
    PersName();
    virtual ~PersName() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    NameMixIn    m_Name;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(PersName);
};

/** \brief  style name ― A label for a characteristic style of writing or performance,
 *          such as 'bebop' or 'rock-n-roll'.
 *
 * Do not confuse this element with the <periodName> element. The name of the list          
 *          from which a controlled value is taken may be recorded using the authority          
 *          attribute..
 */
struct StyleName : public BaseMeiElement{
    StyleName();
    virtual ~StyleName() {};

    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    LangMixIn    m_Lang;
    TypedMixIn    m_Typed;
    NameMixIn    m_Name;
    EditMixIn    m_Edit;
    FacsimileMixIn    m_Facsimile;
    private:
        //REGISTER_DECLARATION(StyleName);
};

#endif // NAMESDATES_H_