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

#ifndef ISO-FS_H_
#define ISO-FS_H_

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
/** \brief defines a biconditional feature-structure constraint; both consequent and
 *  antecedent are specified as feature structures or groups of feature structures;
 *  the constraint is satisfied if both subsume a given feature structure, or if
 *  both do not.
 */
class MEI_EXPORT Bicond : public MeiElement {
    public:
        Bicond();
        Bicond(const Bicond& other);
        virtual ~Bicond();

/* include <bicond> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Bicond);
};

/** \brief represents the value part of a feature-value specification which can contain
 *  either of exactly two possible values.
 */
class MEI_EXPORT Binary : public MeiElement {
    public:
        Binary();
        Binary(const Binary& other);
        virtual ~Binary();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <binary> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Binary);
};

/** \brief defines a conditional feature-structure constraint; the consequent and the
 *  antecedent are specified as feature structures or feature-structure collections;
 *  the constraint is satisfied if both the antecedent and the consequent subsume a
 *  given feature structure, or if the antecedent does not.
 */
class MEI_EXPORT Cond : public MeiElement {
    public:
        Cond();
        Cond(const Cond& other);
        virtual ~Cond();

/* include <cond> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Cond);
};

/** \brief represents the value part of a feature-value specification which contains a
 *  defaulted value.
 */
class MEI_EXPORT Default : public MeiElement {
    public:
        Default();
        Default(const Default& other);
        virtual ~Default();

/* include <default> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Default);
};

/** \brief represents a
 */
class MEI_EXPORT F : public MeiElement {
    public:
        F();
        F(const F& other);
        virtual ~F();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();
        /** \brief references any element which can be used to represent the value of a feature.
         */
        MeiAttribute* getFVal();
        void setFVal(std::string _fVal);
        bool hasFVal();
        void removeFVal();

/* include <f> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(F);
};

/** \brief declares a single feature, specifying its name, organization, range of allowed
 *  values, and optionally its default value.
 */
class MEI_EXPORT FDecl : public MeiElement {
    public:
        FDecl();
        FDecl(const FDecl& other);
        virtual ~FDecl();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();
        /** \brief indicates whether or not the value of this feature may be present.
         */
        MeiAttribute* getOptional();
        void setOptional(std::string _optional);
        bool hasOptional();
        void removeOptional();

/* include <fDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FDecl);
};

/** \brief describes in prose what is represented by the feature being declared and its
 *  values.
 */
class MEI_EXPORT FDescr : public MeiElement {
    public:
        FDescr();
        FDescr(const FDescr& other);
        virtual ~FDescr();

/* include <fDescr> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FDescr);
};

/** \brief assembles a library of feature elements.
 */
class MEI_EXPORT FLib : public MeiElement {
    public:
        FLib();
        FLib(const FLib& other);
        virtual ~FLib();

/* include <fLib> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FLib);
};

/** \brief represents a
 */
class MEI_EXPORT Fs : public MeiElement {
    public:
        Fs();
        Fs(const Fs& other);
        virtual ~Fs();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief references the feature-value specifications making up this feature structure.
         */
        MeiAttribute* getFeats();
        void setFeats(std::string _feats);
        bool hasFeats();
        void removeFeats();

/* include <fs> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Fs);
};

/** \brief specifies constraints on the content of valid feature structures.
 */
class MEI_EXPORT FsConstraints : public MeiElement {
    public:
        FsConstraints();
        FsConstraints(const FsConstraints& other);
        virtual ~FsConstraints();

/* include <fsConstraints> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FsConstraints);
};

/** \brief declares one type of feature structure.
 */
class MEI_EXPORT FsDecl : public MeiElement {
    public:
        FsDecl();
        FsDecl(const FsDecl& other);
        virtual ~FsDecl();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief gives the name of one or more typed feature structures from which this type
         *  inherits feature specifications and constraints; if this type includes a feature
         *  specification with the same name as that of any of those specified by this
         *  attribute, or if more than one specification of the same name is inherited, then
         *  the set of possible values is defined by unification.
         * 
         *  Similarly, the set of constraints applicable is derived by combining those
         *  specified explicitly within this element with those implied by the
         */
        MeiAttribute* getBaseTypes();
        void setBaseTypes(std::string _baseTypes);
        bool hasBaseTypes();
        void removeBaseTypes();

/* include <fsDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FsDecl);
};

/** \brief describes in prose what is represented by the type of feature structure declared
 *  in the enclosing fsDecl.
 */
class MEI_EXPORT FsDescr : public MeiElement {
    public:
        FsDescr();
        FsDescr(const FsDescr& other);
        virtual ~FsDescr();

/* include <fsDescr> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FsDescr);
};

/** \brief provides a feature system declaration comprising one or more feature structure
 *  declarations or feature structure declaration links.
 */
class MEI_EXPORT FsdDecl : public MeiElement {
    public:
        FsdDecl();
        FsdDecl(const FsdDecl& other);
        virtual ~FsdDecl();

/* include <fsdDecl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FsdDecl);
};

/** \brief associates the name of a typed feature structure with a feature structure
 *  declaration for it.
 */
class MEI_EXPORT FsdLink : public MeiElement {
    public:
        FsdLink();
        FsdLink(const FsdLink& other);
        virtual ~FsdLink();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <fsdLink> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FsdLink);
};

/** \brief assembles a library of reusable feature value elements (including complete
 *  feature structures).
 */
class MEI_EXPORT FvLib : public MeiElement {
    public:
        FvLib();
        FvLib(const FvLib& other);
        virtual ~FvLib();

/* include <fvLib> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(FvLib);
};

/** \brief defines a conditional default value for a feature; the condition is specified as
 *  a feature structure, and is met if it subsumes the feature structure in the text
 *  for which a default value is sought.
 */
class MEI_EXPORT If : public MeiElement {
    public:
        If();
        If(const If& other);
        virtual ~If();

/* include <if> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(If);
};

/** \brief separates the condition from the consequence in a bicond element.
 */
class MEI_EXPORT Iff : public MeiElement {
    public:
        Iff();
        Iff(const Iff& other);
        virtual ~Iff();

/* include <iff> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Iff);
};

/** \brief represents the value part of a feature-value specification which contains a
 *  numeric value or range.
 */
class MEI_EXPORT Numeric : public MeiElement {
    public:
        Numeric();
        Numeric(const Numeric& other);
        virtual ~Numeric();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();
        /** \brief where the measurement summarizes more than one observation or a range, supplies
         *  the maximum value observed.
         */
        MeiAttribute* getMax();
        void setMax(std::string _max);
        bool hasMax();
        void removeMax();
        /** \brief specifies whether the value represented should be truncated to give an integer
         *  value.
         */
        MeiAttribute* getTrunc();
        void setTrunc(std::string _trunc);
        bool hasTrunc();
        void removeTrunc();

/* include <numeric> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Numeric);
};

/** \brief represents the value part of a feature-value specification which contains a
 *  string.
 */
class MEI_EXPORT String : public MeiElement {
    public:
        String();
        String(const String& other);
        virtual ~String();

/* include <string> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(String);
};

/** \brief represents the value part of a feature-value specification which contains one of
 *  a finite list of symbols.
 */
class MEI_EXPORT Symbol : public MeiElement {
    public:
        Symbol();
        Symbol(const Symbol& other);
        virtual ~Symbol();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <symbol> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        DatcatMixIn    m_Datcat;

    private:
        REGISTER_DECLARATION(Symbol);
};

/** \brief separates the condition from the default in an
 */
class MEI_EXPORT Then : public MeiElement {
    public:
        Then();
        Then(const Then& other);
        virtual ~Then();

/* include <then> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Then);
};

/** \brief represents the value part of a feature-value specification which contains a set
 *  of values, only one of which can be valid.
 */
class MEI_EXPORT VAlt : public MeiElement {
    public:
        VAlt();
        VAlt(const VAlt& other);
        virtual ~VAlt();

/* include <vAlt> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(VAlt);
};

/** \brief represents the value part of a feature-value specification which contains
 *  multiple values organized as a set, bag, or list.
 */
class MEI_EXPORT VColl : public MeiElement {
    public:
        VColl();
        VColl(const VColl& other);
        virtual ~VColl();
        /** \brief specifies how the content of the division is organized.
         */
        MeiAttribute* getOrg();
        void setOrg(std::string _org);
        bool hasOrg();
        void removeOrg();

/* include <vColl> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(VColl);
};

/** \brief declares the default value to be supplied when a feature structure does not
 *  contain an instance of
 */
class MEI_EXPORT VDefault : public MeiElement {
    public:
        VDefault();
        VDefault(const VDefault& other);
        virtual ~VDefault();

/* include <vDefault> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(VDefault);
};

/** \brief represents the value part of a feature-value specification which appears at more
 *  than one point in a feature structure.
 */
class MEI_EXPORT VLabel : public MeiElement {
    public:
        VLabel();
        VLabel(const VLabel& other);
        virtual ~VLabel();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();

/* include <vLabel> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(VLabel);
};

/** \brief represents a feature value which is the result of merging together the feature
 *  values contained by its children, using the organization specified by the
 */
class MEI_EXPORT VMerge : public MeiElement {
    public:
        VMerge();
        VMerge(const VMerge& other);
        virtual ~VMerge();
        /** \brief specifies how the content of the division is organized.
         */
        MeiAttribute* getOrg();
        void setOrg(std::string _org);
        bool hasOrg();
        void removeOrg();

/* include <vMerge> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(VMerge);
};

/** \brief represents a feature value which is the negation of its content.
 */
class MEI_EXPORT VNot : public MeiElement {
    public:
        VNot();
        VNot(const VNot& other);
        virtual ~VNot();

/* include <vNot> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(VNot);
};

/** \brief defines the range of allowed values for a feature, in the form of an
 */
class MEI_EXPORT VRange : public MeiElement {
    public:
        VRange();
        VRange(const VRange& other);
        virtual ~VRange();

/* include <vRange> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(VRange);
};
}
#endif  // ISO-FS_H_
