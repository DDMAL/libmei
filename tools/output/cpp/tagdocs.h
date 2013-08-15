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

#ifndef TAGDOCS_H_
#define TAGDOCS_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "teimixins.h"
#include "linkingmixins.h"
#include "analysismixins.h"
#include "transcrmixins.h"
#include "tagdocsmixins.h"
#include <string>


namespace mei {
/** \brief supplies the recommended XML name for an element, class, attribute, etc.
 * 
 *  in some language.
 */
class MEI_EXPORT AltIdent : public MeiElement {
    public:
        AltIdent();
        AltIdent(const AltIdent& other);
        virtual ~AltIdent();

/* include <altIdent> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(AltIdent);
};

/** \brief contains the name of an attribute appearing within running text.
 */
class MEI_EXPORT Att : public MeiElement {
    public:
        Att();
        Att(const Att& other);
        virtual ~Att();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();

/* include <att> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Att);
};

/** \brief contains the definition of a single attribute.
 */
class MEI_EXPORT AttDef : public MeiElement {
    public:
        AttDef();
        AttDef(const AttDef& other);
        virtual ~AttDef();
        /** \brief specifies the approximate percentage (by volume) of the text which uses this
         *  language.
         */
        MeiAttribute* getUsage();
        void setUsage(std::string _usage);
        bool hasUsage();
        void removeUsage();
        /** \brief specifies the namespace to which this attribute belongs
         */
        MeiAttribute* getNs();
        void setNs(std::string _ns);
        bool hasNs();
        void removeNs();

/* include <attDef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        IdentifiedMixIn    m_Identified;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;

    private:
        REGISTER_DECLARATION(AttDef);
};

/** \brief contains documentation for all the attributes associated with this element, as a
 *  series of
 */
class MEI_EXPORT AttList : public MeiElement {
    public:
        AttList();
        AttList(const AttList& other);
        virtual ~AttList();
        /** \brief specifies how the content of the division is organized.
         */
        MeiAttribute* getOrg();
        void setOrg(std::string _org);
        bool hasOrg();
        void removeOrg();

/* include <attList> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(AttList);
};

/** \brief points to the definition of an attribute or group of attributes.
 */
class MEI_EXPORT AttRef : public MeiElement {
    public:
        AttRef();
        AttRef(const AttRef& other);
        virtual ~AttRef();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();

/* include <attRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(AttRef);
};

/** \brief points to the specification for an attribute or model class which is to be
 *  included in a schema
 */
class MEI_EXPORT ClassRef : public MeiElement {
    public:
        ClassRef();
        ClassRef(const ClassRef& other);
        virtual ~ClassRef();
        /** \brief provides an externally-defined means of identifying the entity (or entities)
         *  being named, using a coded value of some kind.
         */
        MeiAttribute* getKey();
        void setKey(std::string _key);
        bool hasKey();
        void removeKey();

/* include <classRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ReadFromMixIn    m_ReadFrom;

    private:
        REGISTER_DECLARATION(ClassRef);
};

/** \brief contains reference information for a TEI element class; that is a group of
 *  elements which appear together in content models, or which share some common
 *  attribute, or both.
 */
class MEI_EXPORT ClassSpec : public MeiElement {
    public:
        ClassSpec();
        ClassSpec(const ClassSpec& other);
        virtual ~ClassSpec();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief indicates which alternation and sequence instantiations of a model class may be
         *  referenced.
         * 
         *  By default, all variations are permitted.
         */
        MeiAttribute* getGenerate();
        void setGenerate(std::string _generate);
        bool hasGenerate();
        void removeGenerate();

/* include <classSpec> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        IdentifiedMixIn    m_Identified;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;

    private:
        REGISTER_DECLARATION(ClassSpec);
};

/** \brief specifies all the classes of which the documented element or class is a member
 *  or subclass.
 */
class MEI_EXPORT Classes : public MeiElement {
    public:
        Classes();
        Classes(const Classes& other);
        virtual ~Classes();
        /** \brief specifies the mode of this channel with respect to speech and writing.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();

/* include <classes> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Classes);
};

/** \brief contains literal code from some formal language such as a programming language.
 */
class MEI_EXPORT Code : public MeiElement {
    public:
        Code();
        Code(const Code& other);
        virtual ~Code();
        /** \brief a name identifying the formal language in which the code is expressed
         */
        MeiAttribute* getLang();
        void setLang(std::string _lang);
        bool hasLang();
        void removeLang();

/* include <code> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Code);
};

/** \brief the formal rules of a constraint
 */
class MEI_EXPORT Constraint : public MeiElement {
    public:
        Constraint();
        Constraint(const Constraint& other);
        virtual ~Constraint();

/* include <constraint> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Constraint);
};

/** \brief contains a constraint, expressed in some formal syntax, which cannot be
 *  expressed in the structural content model
 */
class MEI_EXPORT ConstraintSpec : public MeiElement {
    public:
        ConstraintSpec();
        ConstraintSpec(const ConstraintSpec& other);
        virtual ~ConstraintSpec();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();

/* include <constraintSpec> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        IdentifiedMixIn    m_Identified;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(ConstraintSpec);
};

/** \brief contains the text of a declaration for the schema documented.
 */
class MEI_EXPORT Content : public MeiElement {
    public:
        Content();
        Content(const Content& other);
        virtual ~Content();
        /** \brief controls whether or not pattern names generated in the corresponding RELAXNG
         *  schema source are automatically prefixed to avoid potential nameclashes.
         */
        MeiAttribute* getAutoPrefix();
        void setAutoPrefix(std::string _autoPrefix);
        bool hasAutoPrefix();
        void removeAutoPrefix();

/* include <content> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Content);
};

/** \brief specifies the declared value for an attribute, by referring to any datatype
 *  defined by the chosen schema language.
 */
class MEI_EXPORT Datatype : public MeiElement {
    public:
        Datatype();
        Datatype(const Datatype& other);
        virtual ~Datatype();
        /** \brief indicates the minimum number of times this datatype may occur in the
         *  specification of the attribute being defined
         */
        MeiAttribute* getMinOccurs();
        void setMinOccurs(std::string _minOccurs);
        bool hasMinOccurs();
        void removeMinOccurs();
        /** \brief indicates the maximum number of times this datatype may occur in the
         *  specification of the attribute being defined
         */
        MeiAttribute* getMaxOccurs();
        void setMaxOccurs(std::string _maxOccurs);
        bool hasMaxOccurs();
        void removeMaxOccurs();

/* include <datatype> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Datatype);
};

/** \brief specifies the default declared value for an attribute.
 */
class MEI_EXPORT DefaultVal : public MeiElement {
    public:
        DefaultVal();
        DefaultVal(const DefaultVal& other);
        virtual ~DefaultVal();

/* include <defaultVal> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(DefaultVal);
};

/** \brief contains any kind of illustrative example.
 */
class MEI_EXPORT Eg : public MeiElement {
    public:
        Eg();
        Eg(const Eg& other);
        virtual ~Eg();

/* include <eg> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Eg);
};

/** \brief contains a single well-formed XML fragment demonstrating the use of some XML
 *  element or attribute, in which the
 */
class MEI_EXPORT EgXML : public MeiElement {
    public:
        EgXML();
        EgXML(const EgXML& other);
        virtual ~EgXML();
        /** \brief indicates the intended validity of the example with respect to a schema.
         */
        MeiAttribute* getValid();
        void setValid(std::string _valid);
        bool hasValid();
        void removeValid();

/* include <egXML> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        SourceMixIn    m_Source;

    private:
        REGISTER_DECLARATION(EgXML);
};

/** \brief points to the specification for some element which is to be included in a schema
 */
class MEI_EXPORT ElementRef : public MeiElement {
    public:
        ElementRef();
        ElementRef(const ElementRef& other);
        virtual ~ElementRef();
        /** \brief provides an externally-defined means of identifying the entity (or entities)
         *  being named, using a coded value of some kind.
         */
        MeiAttribute* getKey();
        void setKey(std::string _key);
        bool hasKey();
        void removeKey();

/* include <elementRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ReadFromMixIn    m_ReadFrom;

    private:
        REGISTER_DECLARATION(ElementRef);
};

/** \brief documents the structure, content, and purpose of a single element type.
 */
class MEI_EXPORT ElementSpec : public MeiElement {
    public:
        ElementSpec();
        ElementSpec(const ElementSpec& other);
        virtual ~ElementSpec();
        /** \brief specifies a default prefix which will be prepended to all patterns from the
         *  imported module
         */
        MeiAttribute* getPrefix();
        void setPrefix(std::string _prefix);
        bool hasPrefix();
        void removePrefix();

/* include <elementSpec> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        IdentifiedMixIn    m_Identified;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;
        NamespaceableMixIn    m_Namespaceable;

    private:
        REGISTER_DECLARATION(ElementSpec);
};

/** \brief specifies a component which is considered equivalent to the parent element,
 *  either by co-reference, or by external link.
 */
class MEI_EXPORT Equiv : public MeiElement {
    public:
        Equiv();
        Equiv(const Equiv& other);
        virtual ~Equiv();
        /** \brief specifies the full formal name of the namespace concerned.
         */
        MeiAttribute* getName();
        void setName(std::string _name);
        bool hasName();
        void removeName();
        /** \brief references the underlying concept of which the parent is a representation by
         *  means of some external identifier
         */
        MeiAttribute* getUri();
        void setUri(std::string _uri);
        bool hasUri();
        void removeUri();
        /** \brief references an external script which contains a method to transform instances of
         *  this element to canonical TEI
         */
        MeiAttribute* getFilter();
        void setFilter(std::string _filter);
        bool hasFilter();
        void removeFilter();

/* include <equiv> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        InternetMediaMixIn    m_InternetMedia;

    private:
        REGISTER_DECLARATION(Equiv);
};

/** \brief groups an example demonstrating the use of an element along with optional
 *  paragraphs of commentary.
 */
class MEI_EXPORT Exemplum : public MeiElement {
    public:
        Exemplum();
        Exemplum(const Exemplum& other);
        virtual ~Exemplum();

/* include <exemplum> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;
        TranslatableMixIn    m_Translatable;

    private:
        REGISTER_DECLARATION(Exemplum);
};

/** \brief contains the name (generic identifier) of an element.
 */
class MEI_EXPORT Gi : public MeiElement {
    public:
        Gi();
        Gi(const Gi& other);
        virtual ~Gi();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();

/* include <gi> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Gi);
};

/** \brief contains an identifier or name for an object of some kind in a formal language.
 */
class MEI_EXPORT Ident : public MeiElement {
    public:
        Ident();
        Ident(const Ident& other);
        virtual ~Ident();

/* include <ident> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(Ident);
};

/** \brief supplies a list of significant references to places where this element is
 *  discussed, in the current document or elsewhere.
 */
class MEI_EXPORT ListRef : public MeiElement {
    public:
        ListRef();
        ListRef(const ListRef& other);
        virtual ~ListRef();

/* include <listRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(ListRef);
};

/** \brief points to the specification for some pattern which is to be included in a schema
 */
class MEI_EXPORT MacroRef : public MeiElement {
    public:
        MacroRef();
        MacroRef(const MacroRef& other);
        virtual ~MacroRef();
        /** \brief provides an externally-defined means of identifying the entity (or entities)
         *  being named, using a coded value of some kind.
         */
        MeiAttribute* getKey();
        void setKey(std::string _key);
        bool hasKey();
        void removeKey();

/* include <macroRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ReadFromMixIn    m_ReadFrom;

    private:
        REGISTER_DECLARATION(MacroRef);
};

/** \brief documents the function and implementation of a pattern.
 */
class MEI_EXPORT MacroSpec : public MeiElement {
    public:
        MacroSpec();
        MacroSpec(const MacroSpec& other);
        virtual ~MacroSpec();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <macroSpec> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        IdentifiedMixIn    m_Identified;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;

    private:
        REGISTER_DECLARATION(MacroSpec);
};

/** \brief specifies class membership of the documented element or class.
 */
class MEI_EXPORT MemberOf : public MeiElement {
    public:
        MemberOf();
        MemberOf(const MemberOf& other);
        virtual ~MemberOf();
        /** \brief provides an externally-defined means of identifying the entity (or entities)
         *  being named, using a coded value of some kind.
         */
        MeiAttribute* getKey();
        void setKey(std::string _key);
        bool hasKey();
        void removeKey();
        /** \brief specifies the mode of this channel with respect to speech and writing.
         */
        MeiAttribute* getMode();
        void setMode(std::string _mode);
        bool hasMode();
        void removeMode();
        /** \brief where the measurement summarizes more than one observation or a range, supplies
         *  the maximum value observed.
         */
        MeiAttribute* getMax();
        void setMax(std::string _max);
        bool hasMax();
        void removeMax();
        /** \brief where the measurement summarizes more than one observation or a range, supplies
         *  the minimum value observed.
         */
        MeiAttribute* getMin();
        void setMin(std::string _min);
        bool hasMin();
        void removeMin();

/* include <memberOf> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(MemberOf);
};

/** \brief references a module which is to be incorporated into a schema.
 */
class MEI_EXPORT ModuleRef : public MeiElement {
    public:
        ModuleRef();
        ModuleRef(const ModuleRef& other);
        virtual ~ModuleRef();
        /** \brief specifies a default prefix which will be prepended to all patterns from the
         *  imported module
         */
        MeiAttribute* getPrefix();
        void setPrefix(std::string _prefix);
        bool hasPrefix();
        void removePrefix();

/* include <moduleRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        ReadFromMixIn    m_ReadFrom;

    private:
        REGISTER_DECLARATION(ModuleRef);
};

/** \brief documents the structure, content, and purpose of a single module, i.e.
 * 
 *  a named and externally visible group of declarations.
 */
class MEI_EXPORT ModuleSpec : public MeiElement {
    public:
        ModuleSpec();
        ModuleSpec(const ModuleSpec& other);
        virtual ~ModuleSpec();

/* include <moduleSpec> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        IdentifiedMixIn    m_Identified;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(ModuleSpec);
};

/** \brief contains any commentary or discussion about the usage of an element, attribute,
 *  class, or entity not otherwise documented within the containing element.
 */
class MEI_EXPORT Remarks : public MeiElement {
    public:
        Remarks();
        Remarks(const Remarks& other);
        virtual ~Remarks();

/* include <remarks> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranslatableMixIn    m_Translatable;

    private:
        REGISTER_DECLARATION(Remarks);
};

/** \brief generates a TEI-conformant schema and documentation for it.
 */
class MEI_EXPORT SchemaSpec : public MeiElement {
    public:
        SchemaSpec();
        SchemaSpec(const SchemaSpec& other);
        virtual ~SchemaSpec();
        /** \brief indicates the location within a temporal alignment at which this element begins.
         */
        MeiAttribute* getStart();
        void setStart(std::string _start);
        bool hasStart();
        void removeStart();
        /** \brief specifies a default prefix which will be prepended to all patterns from the
         *  imported module
         */
        MeiAttribute* getPrefix();
        void setPrefix(std::string _prefix);
        bool hasPrefix();
        void removePrefix();
        /** \brief specifies the language of the content to be found at the destination referenced
         *  by
         */
        MeiAttribute* getTargetLang();
        void setTargetLang(std::string _targetLang);
        bool hasTargetLang();
        void removeTargetLang();
        /** \brief specifies which languages to use when creating documentation if the description
         *  for an element, attribute, class or macro is available in more than one language
         */
        MeiAttribute* getDocLang();
        void setDocLang(std::string _docLang);
        bool hasDocLang();
        void removeDocLang();

/* include <schemaSpec> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        IdentifiedMixIn    m_Identified;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;
        NamespaceableMixIn    m_Namespaceable;
        ReadFromMixIn    m_ReadFrom;

    private:
        REGISTER_DECLARATION(SchemaSpec);
};

/** \brief indicates that a description of the specified element or class should be
 *  included at this point within a document.
 */
class MEI_EXPORT SpecDesc : public MeiElement {
    public:
        SpecDesc();
        SpecDesc(const SpecDesc& other);
        virtual ~SpecDesc();
        /** \brief provides an externally-defined means of identifying the entity (or entities)
         *  being named, using a coded value of some kind.
         */
        MeiAttribute* getKey();
        void setKey(std::string _key);
        bool hasKey();
        void removeKey();
        /** \brief supplies attribute names for which descriptions should additionally be obtained.
         */
        MeiAttribute* getAtts();
        void setAtts(std::string _atts);
        bool hasAtts();
        void removeAtts();

/* include <specDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(SpecDesc);
};

/** \brief contains any convenient grouping of specifications for use within the current
 *  module.
 */
class MEI_EXPORT SpecGrp : public MeiElement {
    public:
        SpecGrp();
        SpecGrp(const SpecGrp& other);
        virtual ~SpecGrp();

/* include <specGrp> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(SpecGrp);
};

/** \brief indicates that the declarations contained by the
 */
class MEI_EXPORT SpecGrpRef : public MeiElement {
    public:
        SpecGrpRef();
        SpecGrpRef(const SpecGrpRef& other);
        virtual ~SpecGrpRef();
        /** \brief specifies the destination of the reference by supplying one or more URI
         *  References
         */
        MeiAttribute* getTarget();
        void setTarget(std::string _target);
        bool hasTarget();
        void removeTarget();

/* include <specGrpRef> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(SpecGrpRef);
};

/** \brief marks where a list of descriptions is to be inserted into the prose
 *  documentation.
 */
class MEI_EXPORT SpecList : public MeiElement {
    public:
        SpecList();
        SpecList(const SpecList& other);
        virtual ~SpecList();

/* include <specList> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(SpecList);
};

/** \brief contains text of a complete start- or end-tag, possibly including attribute
 *  specifications, but excluding the opening and closing markup delimiter
 *  characters.
 */
class MEI_EXPORT Tag : public MeiElement {
    public:
        Tag();
        Tag(const Tag& other);
        virtual ~Tag();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief identifies the language used to describe the rendition.
         */
        MeiAttribute* getScheme();
        void setScheme(std::string _scheme);
        bool hasScheme();
        void removeScheme();

/* include <tag> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Tag);
};

/** \brief contains a single attribute value.
 */
class MEI_EXPORT Val : public MeiElement {
    public:
        Val();
        Val(const Val& other);
        virtual ~Val();

/* include <val> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Val);
};

/** \brief specifies any semantic or syntactic constraint on the value that an attribute
 *  may take, additional to the information carried by the datatype element.
 */
class MEI_EXPORT ValDesc : public MeiElement {
    public:
        ValDesc();
        ValDesc(const ValDesc& other);
        virtual ~ValDesc();

/* include <valDesc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TranslatableMixIn    m_Translatable;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;

    private:
        REGISTER_DECLARATION(ValDesc);
};

/** \brief documents a single value in a predefined list of values.
 */
class MEI_EXPORT ValItem : public MeiElement {
    public:
        ValItem();
        ValItem(const ValItem& other);
        virtual ~ValItem();
        /** \brief supplies the identifier which functions as the prefix for an abbreviated
         *  pointing scheme such as a private URI scheme.
         * 
         *  The prefix constitutes the text preceding the first colon.
         */
        MeiAttribute* getIdent();
        void setIdent(std::string _ident);
        bool hasIdent();
        void removeIdent();

/* include <valItem> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;

    private:
        REGISTER_DECLARATION(ValItem);
};

/** \brief contains one or more
 */
class MEI_EXPORT ValList : public MeiElement {
    public:
        ValList();
        ValList(const ValList& other);
        virtual ~ValList();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <valList> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        CombinableMixIn    m_Combinable;
        DeprecatedMixIn    m_Deprecated;

    private:
        REGISTER_DECLARATION(ValList);
};
}
#endif  // TAGDOCS_H_
