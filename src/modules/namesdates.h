
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

#ifndef NAMESDATES_H_
#define NAMESDATES_H_

#include "meielement.h"
#include "exceptions.h"
#include "mei.h"
#include "sharedmixins.h"
#include "edittransmixins.h"
#include "critappmixins.h"
#include "facsimilemixins.h"


namespace mei {
    
/** \brief   corporate name ― Identifies an organization or group of people that acts as a
    * single entity. Examples include names of associations, institutions, business
    * firms, non-profit enterprises, governments, government agencies, projects,
    * programs, religious bodies, churches, conferences, athletic contests,
    * exhibitions, expeditions, fairs, and ships. Secondary name parts may be encoded
    * in <corpName> sub-elements. The name of the list from which a controlled value
    * is taken may be recorded using the authority attribute. This element is modelled
    * on an element in Encoded Archival Description (EAD).
    */

class MEI_EXPORT Corpname : public MeiElement {
    public:
        Corpname();
        virtual ~Corpname() {}
        
        
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    EditMixIn    m_Edit;
    ResponsibilityMixIn    m_Responsibility;
    SourceMixIn    m_Source;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    NameMixIn    m_Name;
    AuthorizedMixIn    m_Authorized;
    CanonicalMixIn    m_Canonical;
    TypedMixIn    m_Typed;
    private:
        REGISTER_DECLARATION(Corpname);
};

/** \brief   geographic name ― The proper noun designation for a place, natural feature, or
    * political jurisdiction. Examples include Black Forest; Baltimore, Maryland; and
    * Quartier Latin, Paris. Name sub-parts may be encoded in <geogName> sub-elements.
    * The name of the list from which a controlled value is taken, such as the
    * Thesaurus of Geographic Names (TGN), may be recorded using the authority
    * attribute. This element is modelled on an element in Encoded Archival
    * Description (EAD).
    */

class MEI_EXPORT Geogname : public MeiElement {
    public:
        Geogname();
        virtual ~Geogname() {}
        
        
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    EditMixIn    m_Edit;
    ResponsibilityMixIn    m_Responsibility;
    SourceMixIn    m_Source;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    NameMixIn    m_Name;
    AuthorizedMixIn    m_Authorized;
    CanonicalMixIn    m_Canonical;
    TypedMixIn    m_Typed;
    private:
        REGISTER_DECLARATION(Geogname);
};

/** \brief   period name ― A label that describes a period of time, such as 'Baroque' or
    * '3rd Style period'. The name of the list from which a controlled value is taken
    * may be recorded using the authority attribute.
    */

class MEI_EXPORT Periodname : public MeiElement {
    public:
        Periodname();
        virtual ~Periodname() {}
        
        
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    EditMixIn    m_Edit;
    ResponsibilityMixIn    m_Responsibility;
    SourceMixIn    m_Source;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    NameMixIn    m_Name;
    AuthorizedMixIn    m_Authorized;
    CanonicalMixIn    m_Canonical;
    TypedMixIn    m_Typed;
    private:
        REGISTER_DECLARATION(Periodname);
};

/** \brief   personal name ― Designation for an individual, including any or all of that
    * individual's forenames, surnames, honorific titles, and added names. Name sub-
    * parts may be recorded in <persName> sub-elements. The name of the list from
    * which a controlled value is taken may be recorded using the authority attribute.
    * This element is modelled on an element in Encoded Archival Description (EAD).
    */

class MEI_EXPORT Persname : public MeiElement {
    public:
        Persname();
        virtual ~Persname() {}
        
        
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    DatableMixIn    m_Datable;
    EditMixIn    m_Edit;
    ResponsibilityMixIn    m_Responsibility;
    SourceMixIn    m_Source;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    NameMixIn    m_Name;
    AuthorizedMixIn    m_Authorized;
    CanonicalMixIn    m_Canonical;
    TypedMixIn    m_Typed;
    private:
        REGISTER_DECLARATION(Persname);
};

/** \brief   style name ― A label for a characteristic style of writing or performance,
    * such as 'bebop' or 'rock-n-roll'. Do not confuse this element with the
    * <periodName> element. The name of the list from which a controlled value is
    * taken may be recorded using the authority attribute.
    */

class MEI_EXPORT Stylename : public MeiElement {
    public:
        Stylename();
        virtual ~Stylename() {}
        
        
    BiblMixIn    m_Bibl;
    CommonMixIn    m_Common;
    EditMixIn    m_Edit;
    ResponsibilityMixIn    m_Responsibility;
    SourceMixIn    m_Source;
    FacsimileMixIn    m_Facsimile;
    LangMixIn    m_Lang;
    NameMixIn    m_Name;
    AuthorizedMixIn    m_Authorized;
    CanonicalMixIn    m_Canonical;
    TypedMixIn    m_Typed;
    private:
        REGISTER_DECLARATION(Stylename);
};

}
#endif // NAMESDATES_H_
