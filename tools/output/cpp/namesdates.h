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
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include "namesdatesmixins.h"
#include <string>


namespace mei {
/** \brief contains an additional name component, such as a nickname, epithet, or alias, or
 *  any other descriptive phrase used within a personal name.
 */
class MEI_EXPORT AddName : public MeiElement {
    public:
        AddName();
        AddName(const AddName& other);
        virtual ~AddName();

/* include <addName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PersonalMixIn    m_Personal;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AddName);
};

/** \brief contains an informal description of a person's present or past affiliation with
 *  some organization, for example an employer or sponsor.
 */
class MEI_EXPORT Affiliation : public MeiElement {
    public:
        Affiliation();
        Affiliation(const Affiliation& other);
        virtual ~Affiliation();

/* include <affiliation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Affiliation);
};

/** \brief specifies the age of a person.
 */
class MEI_EXPORT Age : public MeiElement {
    public:
        Age();
        Age(const Age& other);
        virtual ~Age();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <age> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Age);
};

/** \brief contains information about a person's birth, such as its date and place.
 */
class MEI_EXPORT Birth : public MeiElement {
    public:
        Birth();
        Birth(const Birth& other);
        virtual ~Birth();

/* include <birth> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Birth);
};

/** \brief contains the name of a geo-political unit consisting of two or more nation
 *  states or countries.
 */
class MEI_EXPORT Bloc : public MeiElement {
    public:
        Bloc();
        Bloc(const Bloc& other);
        virtual ~Bloc();

/* include <bloc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Bloc);
};

/** \brief contains information about the physical climate of a place.
 */
class MEI_EXPORT Climate : public MeiElement {
    public:
        Climate();
        Climate(const Climate& other);
        virtual ~Climate();

/* include <climate> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Climate);
};

/** \brief (corporate name) – Identifies an organization or group of people that acts as
 *  a single entity.
 */
class MEI_EXPORT CorpName : public MeiElement {
    public:
        CorpName();
        CorpName(const CorpName& other);
        virtual ~CorpName();

/* include <corpName> */


    private:
        REGISTER_DECLARATION(CorpName);
};

/** \brief contains the name of a geo-political unit, such as a nation, country, colony, or
 *  commonwealth, larger than or administratively superior to a region and smaller
 *  than a bloc.
 */
class MEI_EXPORT Country : public MeiElement {
    public:
        Country();
        Country(const Country& other);
        virtual ~Country();

/* include <country> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Country);
};

/** \brief contains information about a person's death, such as its date and place.
 */
class MEI_EXPORT Death : public MeiElement {
    public:
        Death();
        Death(const Death& other);
        virtual ~Death();

/* include <death> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Death);
};

/** \brief contains the name of any kind of subdivision of a settlement, such as a parish,
 *  ward, or other administrative or geographic unit.
 */
class MEI_EXPORT District : public MeiElement {
    public:
        District();
        District(const District& other);
        virtual ~District();

/* include <district> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(District);
};

/** \brief contains a description of the educational experience of a person.
 */
class MEI_EXPORT Education : public MeiElement {
    public:
        Education();
        Education(const Education& other);
        virtual ~Education();

/* include <education> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Education);
};

/** \brief contains data relating to any kind of significant event associated with a
 *  person, place, or organization.
 */
class MEI_EXPORT Event : public MeiElement {
    public:
        Event();
        Event(const Event& other);
        virtual ~Event();
        /** \brief specifies the direction of a stage movement.
         */
        MeiAttribute* getWhere();
        void setWhere(std::string _where);
        bool hasWhere();
        void removeWhere();

/* include <event> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Event);
};

/** \brief specifies the faith, religion, or belief set of a person.
 */
class MEI_EXPORT Faith : public MeiElement {
    public:
        Faith();
        Faith(const Faith& other);
        virtual ~Faith();

/* include <faith> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Faith);
};

/** \brief contains information about a person's period of activity.
 */
class MEI_EXPORT Floruit : public MeiElement {
    public:
        Floruit();
        Floruit(const Floruit& other);
        virtual ~Floruit();

/* include <floruit> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Floruit);
};

/** \brief contains a forename, given or baptismal name.
 */
class MEI_EXPORT Forename : public MeiElement {
    public:
        Forename();
        Forename(const Forename& other);
        virtual ~Forename();

/* include <forename> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PersonalMixIn    m_Personal;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Forename);
};

/** \brief contains a name component used to distinguish otherwise similar names on the
 *  basis of the relative ages or generations of the persons named.
 */
class MEI_EXPORT GenName : public MeiElement {
    public:
        GenName();
        GenName(const GenName& other);
        virtual ~GenName();

/* include <genName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PersonalMixIn    m_Personal;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(GenName);
};

/** \brief contains any expression of a set of geographic coordinates, representing a
 *  point, line, or area on the surface of the earth in some notation.
 */
class MEI_EXPORT Geo : public MeiElement {
    public:
        Geo();
        Geo(const Geo& other);
        virtual ~Geo();

/* include <geo> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DeclaringMixIn    m_Declaring;

    private:
        REGISTER_DECLARATION(Geo);
};

/** \brief contains a common noun identifying some geographical feature contained within a
 *  geographic name, such as valley, mount, etc.
 */
class MEI_EXPORT GeogFeat : public MeiElement {
    public:
        GeogFeat();
        GeogFeat(const GeogFeat& other);
        virtual ~GeogFeat();

/* include <geogFeat> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(GeogFeat);
};

/** \brief identifies a name associated with some geographical feature such as Windrush
 *  Valley or Mount Sinai.
 */
class MEI_EXPORT GeogName : public MeiElement {
    public:
        GeogName();
        GeogName(const GeogName& other);
        virtual ~GeogName();

/* include <geogName> */


    private:
        REGISTER_DECLARATION(GeogName);
};

/** \brief summarizes the state of a person's linguistic knowledge, either as prose or by a
 *  list of
 */
class MEI_EXPORT LangKnowledge : public MeiElement {
    public:
        LangKnowledge();
        LangKnowledge(const LangKnowledge& other);
        virtual ~LangKnowledge();
        /** \brief supplies one or more valid language tags for the languages specified
         */
        MeiAttribute* getTags();
        void setTags(std::string _tags);
        bool hasTags();
        void removeTags();

/* include <langKnowledge> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(LangKnowledge);
};

/** \brief summarizes the state of a person's linguistic competence, i.e., knowledge of a
 *  single language.
 */
class MEI_EXPORT LangKnown : public MeiElement {
    public:
        LangKnown();
        LangKnown(const LangKnown& other);
        virtual ~LangKnown();
        /** \brief supplies a valid language tag for the language concerned.
         */
        MeiAttribute* getTag();
        void setTag(std::string _tag);
        bool hasTag();
        void removeTag();
        /** \brief indicates the bibliographic level for a title, that is, whether it identifies an
         *  article, book, journal, series, or unpublished material.
         */
        MeiAttribute* getLevel();
        void setLevel(std::string _level);
        bool hasLevel();
        void removeLevel();

/* include <langKnown> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(LangKnown);
};

/** \brief contains a list of descriptions, each of which provides information about an
 *  identifiable event.
 */
class MEI_EXPORT ListEvent : public MeiElement {
    public:
        ListEvent();
        ListEvent(const ListEvent& other);
        virtual ~ListEvent();

/* include <listEvent> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DeclarableMixIn    m_Declarable;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(ListEvent);
};

/** \brief contains a list of nyms, that is, standardized names for any thing.
 */
class MEI_EXPORT ListNym : public MeiElement {
    public:
        ListNym();
        ListNym(const ListNym& other);
        virtual ~ListNym();

/* include <listNym> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DeclarableMixIn    m_Declarable;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(ListNym);
};

/** \brief contains a list of elements, each of which provides information about an
 *  identifiable organization.
 */
class MEI_EXPORT ListOrg : public MeiElement {
    public:
        ListOrg();
        ListOrg(const ListOrg& other);
        virtual ~ListOrg();

/* include <listOrg> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DeclarableMixIn    m_Declarable;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(ListOrg);
};

/** \brief contains a list of descriptions, each of which provides information about an
 *  identifiable person or a group of people, for example the participants in a
 *  language interaction, or the people referred to in a historical source.
 */
class MEI_EXPORT ListPerson : public MeiElement {
    public:
        ListPerson();
        ListPerson(const ListPerson& other);
        virtual ~ListPerson();

/* include <listPerson> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DeclarableMixIn    m_Declarable;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(ListPerson);
};

/** \brief contains a list of places, optionally followed by a list of relationships (other
 *  than containment) defined amongst them.
 */
class MEI_EXPORT ListPlace : public MeiElement {
    public:
        ListPlace();
        ListPlace(const ListPlace& other);
        virtual ~ListPlace();

/* include <listPlace> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DeclarableMixIn    m_Declarable;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(ListPlace);
};

/** \brief donne des informations sur les relations qui existent entre des personnes, des
 *  lieux, ou des organisations, soit de manière informelle en prose, soit de
 *  manière formelle.
 */
class MEI_EXPORT ListRelation : public MeiElement {
    public:
        ListRelation();
        ListRelation(const ListRelation& other);
        virtual ~ListRelation();

/* include <listRelation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(ListRelation);
};

/** \brief defines the location of a place as a set of geographical coordinates, in terms
 *  of other named geo-political entities, or as an address.
 */
class MEI_EXPORT Location : public MeiElement {
    public:
        Location();
        Location(const Location& other);
        virtual ~Location();

/* include <location> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;

    private:
        REGISTER_DECLARATION(Location);
};

/** \brief contains a connecting phrase or link used within a name but not regarded as part
 *  of it, such as
 */
class MEI_EXPORT NameLink : public MeiElement {
    public:
        NameLink();
        NameLink(const NameLink& other);
        virtual ~NameLink();

/* include <nameLink> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(NameLink);
};

/** \brief contains an informal description of a person's present or past nationality or
 *  citizenship.
 */
class MEI_EXPORT Nationality : public MeiElement {
    public:
        Nationality();
        Nationality(const Nationality& other);
        virtual ~Nationality();

/* include <nationality> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Nationality);
};

/** \brief contient la définition de tout nom ou partie de nom dans leur forme canonique.
 */
class MEI_EXPORT Nym : public MeiElement {
    public:
        Nym();
        Nym(const Nym& other);
        virtual ~Nym();
        /** \brief points to constituent nyms
         */
        MeiAttribute* getParts();
        void setParts(std::string _parts);
        bool hasParts();
        void removeParts();

/* include <nym> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Nym);
};

/** \brief contains an informal description of a person's trade, profession or occupation.
 */
class MEI_EXPORT Occupation : public MeiElement {
    public:
        Occupation();
        Occupation(const Occupation& other);
        virtual ~Occupation();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();
        /** \brief identifies an occupation code defined within the classification system or
         *  taxonomy defined by the
         */
        MeiAttribute* getCode();
        void setCode(std::string _code);
        bool hasCode();
        void removeCode();

/* include <occupation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Occupation);
};

/** \brief marks that part of a relative temporal or spatial expression which indicates the
 *  direction of the offset between the two place names, dates, or times involved in
 *  the expression.
 */
class MEI_EXPORT Offset : public MeiElement {
    public:
        Offset();
        Offset(const Offset& other);
        virtual ~Offset();

/* include <offset> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Offset);
};

/** \brief provides information about an identifiable organization such as a business, a
 *  tribe, or any other grouping of people.
 */
class MEI_EXPORT Org : public MeiElement {
    public:
        Org();
        Org(const Org& other);
        virtual ~Org();
        /** \brief may be used to specify further information about the entity referenced by this
         *  name, for example the occupation of a person, or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();

/* include <org> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Org);
};

/** \brief contains an organizational name.
 */
class MEI_EXPORT OrgName : public MeiElement {
    public:
        OrgName();
        OrgName(const OrgName& other);
        virtual ~OrgName();

/* include <orgName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        PersonalMixIn    m_Personal;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(OrgName);
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


    private:
        REGISTER_DECLARATION(PeriodName);
};

/** \brief contains a proper noun or proper-noun phrase referring to a person, possibly
 *  including one or more of the person's forenames, surnames, honorifics, added
 *  names, etc.
 */
class MEI_EXPORT PersName : public MeiElement {
    public:
        PersName();
        PersName(const PersName& other);
        virtual ~PersName();

/* include <persName> */


    private:
        REGISTER_DECLARATION(PersName);
};

/** \brief provides information about an identifiable individual, for example a participant
 *  in a language interaction, or a person referred to in a historical source.
 */
class MEI_EXPORT Person : public MeiElement {
    public:
        Person();
        Person(const Person& other);
        virtual ~Person();
        /** \brief may be used to specify further information about the entity referenced by this
         *  name, for example the occupation of a person, or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();
        /** \brief specifies the sex of the person.
         */
        MeiAttribute* getSex();
        void setSex(std::string _sex);
        bool hasSex();
        void removeSex();
        /** \brief specifies an age group for the person.
         */
        MeiAttribute* getAge();
        void setAge(std::string _age);
        bool hasAge();
        void removeAge();

/* include <person> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Person);
};

/** \brief describes a group of individuals treated as a single person for analytic
 *  purposes.
 */
class MEI_EXPORT PersonGrp : public MeiElement {
    public:
        PersonGrp();
        PersonGrp(const PersonGrp& other);
        virtual ~PersonGrp();
        /** \brief may be used to specify further information about the entity referenced by this
         *  name, for example the occupation of a person, or the status of a place.
         */
        MeiAttribute* getRole();
        void setRole(std::string _role);
        bool hasRole();
        void removeRole();
        /** \brief specifies the sex of the person.
         */
        MeiAttribute* getSex();
        void setSex(std::string _sex);
        bool hasSex();
        void removeSex();
        /** \brief specifies an age group for the person.
         */
        MeiAttribute* getAge();
        void setAge(std::string _age);
        bool hasAge();
        void removeAge();
        /** \brief specifies the size or approximate size of the group.
         */
        MeiAttribute* getSize();
        void setSize(std::string _size);
        bool hasSize();
        void removeSize();

/* include <personGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(PersonGrp);
};

/** \brief contains data about a geographic location
 */
class MEI_EXPORT Place : public MeiElement {
    public:
        Place();
        Place(const Place& other);
        virtual ~Place();

/* include <place> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Place);
};

/** \brief contains an absolute or relative place name.
 */
class MEI_EXPORT PlaceName : public MeiElement {
    public:
        PlaceName();
        PlaceName(const PlaceName& other);
        virtual ~PlaceName();

/* include <placeName> */

        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PersonalMixIn    m_Personal;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(PlaceName);
};

/** \brief contains information about the population of a place.
 */
class MEI_EXPORT Population : public MeiElement {
    public:
        Population();
        Population(const Population& other);
        virtual ~Population();

/* include <population> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Population);
};

/** \brief contains the name of an administrative unit such as a state, province, or
 *  county, larger than a settlement, but smaller than a country.
 */
class MEI_EXPORT Region : public MeiElement {
    public:
        Region();
        Region(const Region& other);
        virtual ~Region();

/* include <region> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Region);
};

/** \brief describes any kind of relationship or linkage amongst a specified group of
 *  places, events, persons, objects or other items.
 */
class MEI_EXPORT Relation : public MeiElement {
    public:
        Relation();
        Relation(const Relation& other);
        virtual ~Relation();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();
        /** \brief specifies the number of passive participants (or
         */
        MeiAttribute* getPassive();
        void setPassive(std::string _passive);
        bool hasPassive();
        void removePassive();

/* include <relation> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        CanonicalMixIn    m_Canonical;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(Relation);
};

/** \brief donne des informations sur les relations qui existent entre des personnes, des
 *  lieux, ou des organisations, soit de manière informelle en prose, soit de
 *  manière formelle.
 */
class MEI_EXPORT RelationGrp : public MeiElement {
    public:
        RelationGrp();
        RelationGrp(const RelationGrp& other);
        virtual ~RelationGrp();

/* include <relationGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        SortableMixIn    m_Sortable;

    private:
        REGISTER_DECLARATION(RelationGrp);
};

/** \brief describes a person's present or past places of residence.
 */
class MEI_EXPORT Residence : public MeiElement {
    public:
        Residence();
        Residence(const Residence& other);
        virtual ~Residence();

/* include <residence> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(Residence);
};

/** \brief contains a name component which indicates that the referent has a particular
 *  role or position in society, such as an official title or rank.
 */
class MEI_EXPORT RoleName : public MeiElement {
    public:
        RoleName();
        RoleName(const RoleName& other);
        virtual ~RoleName();

/* include <roleName> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PersonalMixIn    m_Personal;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(RoleName);
};

/** \brief contains the name of a settlement such as a city, town, or village identified as
 *  a single geo-political or administrative unit.
 */
class MEI_EXPORT Settlement : public MeiElement {
    public:
        Settlement();
        Settlement(const Settlement& other);
        virtual ~Settlement();

/* include <settlement> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Settlement);
};

/** \brief specifies the sex of a person.
 */
class MEI_EXPORT Sex : public MeiElement {
    public:
        Sex();
        Sex(const Sex& other);
        virtual ~Sex();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <sex> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;

    private:
        REGISTER_DECLARATION(Sex);
};

/** \brief contains an informal description of a person's perceived social or economic
 *  status.
 */
class MEI_EXPORT SocecStatus : public MeiElement {
    public:
        SocecStatus();
        SocecStatus(const SocecStatus& other);
        virtual ~SocecStatus();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();
        /** \brief identifies an occupation code defined within the classification system or
         *  taxonomy defined by the
         */
        MeiAttribute* getCode();
        void setCode(std::string _code);
        bool hasCode();
        void removeCode();

/* include <socecStatus> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(SocecStatus);
};

/** \brief contains a description of some status or quality attributed to a person, place,
 *  or organization often at some specific time or for a specific date range.
 */
class MEI_EXPORT State : public MeiElement {
    public:
        State();
        State(const State& other);
        virtual ~State();

/* include <state> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        TypedMixIn    m_Typed;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;

    private:
        REGISTER_DECLARATION(State);
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


    private:
        REGISTER_DECLARATION(StyleName);
};

/** \brief contains a family (inherited) name, as opposed to a given, baptismal, or nick
 *  name.
 */
class MEI_EXPORT Surname : public MeiElement {
    public:
        Surname();
        Surname(const Surname& other);
        virtual ~Surname();

/* include <surname> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        PersonalMixIn    m_Personal;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Surname);
};

/** \brief contains information about the physical terrain of a place.
 */
class MEI_EXPORT Terrain : public MeiElement {
    public:
        Terrain();
        Terrain(const Terrain& other);
        virtual ~Terrain();

/* include <terrain> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Terrain);
};

/** \brief contains a description of some status or quality attributed to a person, place,
 *  or organization typically, but not necessarily, independent of the volition or
 *  action of the holder and usually not at some specific time or for a specific
 *  date range.
 */
class MEI_EXPORT Trait : public MeiElement {
    public:
        Trait();
        Trait(const Trait& other);
        virtual ~Trait();

/* include <trait> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatableMixIn    m_Datable;
        DatableW3cMixIn    m_DatableW3c;
        DatableIsoMixIn    m_DatableIso;
        DatableCustomMixIn    m_DatableCustom;
        EditLikeMixIn    m_EditLike;
        DimensionsMixIn    m_Dimensions;
        RangingMixIn    m_Ranging;
        ResponsibilityMixIn    m_Responsibility;
        NamingMixIn    m_Naming;
        CanonicalMixIn    m_Canonical;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Trait);
};
}
#endif  // NAMESDATES_H_
