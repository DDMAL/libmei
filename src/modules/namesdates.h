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

#ifndef NAMESDATES_H_
#define NAMESDATES_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "edittransmixins.h"
#include "critappmixins.h"
#include "facsimilemixins.h"


namespace mei {
/** \brief (corporate name) – Identifies an organization or group of people that acts as
 *  a single entity.
 */
class MEI_EXPORT CorpName : public MeiElement {
    public:
        CorpName();
        CorpName(const CorpName& other);
        virtual ~CorpName();

/* include <corpName> */

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
        REGISTER_DECLARATION(CorpName);
};

/** \brief (geographic name) – The proper noun designation for a place, natural feature,
 *  or political jurisdiction.
 */
class MEI_EXPORT GeogName : public MeiElement {
    public:
        GeogName();
        GeogName(const GeogName& other);
        virtual ~GeogName();

/* include <geogName> */

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
        REGISTER_DECLARATION(GeogName);
};

/** \brief (period name) – A label that describes a period of time, such as 'Baroque' or
 *  '3rd Style period'.
 */
class MEI_EXPORT PeriodName : public MeiElement {
    public:
        PeriodName();
        PeriodName(const PeriodName& other);
        virtual ~PeriodName();

/* include <periodName> */

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
        REGISTER_DECLARATION(PeriodName);
};

/** \brief (personal name) – Designation for an individual, including any or all of that
 *  individual's forenames, surnames, honorific titles, and added names
 */
class MEI_EXPORT PersName : public MeiElement {
    public:
        PersName();
        PersName(const PersName& other);
        virtual ~PersName();

/* include <persName> */

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
        REGISTER_DECLARATION(PersName);
};

/** \brief (style name) – A label for a characteristic style of writing or performance,
 *  such as 'bebop' or 'rock-n-roll'.
 */
class MEI_EXPORT StyleName : public MeiElement {
    public:
        StyleName();
        StyleName(const StyleName& other);
        virtual ~StyleName();

/* include <styleName> */

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
        REGISTER_DECLARATION(StyleName);
};
}
#endif  // NAMESDATES_H_
