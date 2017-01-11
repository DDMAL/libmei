/*
    Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter, and Others

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

#ifndef FRBR_H_
#define FRBR_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "critappmixins.h"
#include "edittransmixins.h"
#include "frbrmixins.h"


namespace mei {
/** \brief (component group) – Container for components of a bibliographic entity.
 */
class MEI_EXPORT ComponentGrp : public MeiElement {
    public:
        ComponentGrp();
        ComponentGrp(const ComponentGrp& other);
        virtual ~ComponentGrp();

/* include <componentGrp> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(ComponentGrp);
};

/** \brief Intellectual or artistic realization of a work.
 */
class MEI_EXPORT Expression : public MeiElement {
    public:
        Expression();
        Expression(const Expression& other);
        virtual ~Expression();

/* include <expression> */

        DatapointingMixIn    m_Datapointing;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;

    private:
        REGISTER_DECLARATION(Expression);
};

/** \brief Gathers bibliographic expression entities.
 */
class MEI_EXPORT ExpressionList : public MeiElement {
    public:
        ExpressionList();
        ExpressionList(const ExpressionList& other);
        virtual ~ExpressionList();

/* include <expressionList> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(ExpressionList);
};

/** \brief Single instance or exemplar of a source/manifestation.
 */
class MEI_EXPORT Item : public MeiElement {
    public:
        Item();
        Item(const Item& other);
        virtual ~Item();

/* include <item> */

        DatapointingMixIn    m_Datapointing;
        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        PointingMixIn    m_Pointing;
        TargetevalMixIn    m_Targeteval;

    private:
        REGISTER_DECLARATION(Item);
};

/** \brief Gathers bibliographic item entities.
 */
class MEI_EXPORT ItemList : public MeiElement {
    public:
        ItemList();
        ItemList(const ItemList& other);
        virtual ~ItemList();

/* include <itemList> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(ItemList);
};

/** \brief A relation element describes the relationship between its parent and the object
 *  referenced by the relation element's target attribute.
 */
class MEI_EXPORT Relation : public MeiElement {
    public:
        Relation();
        Relation(const Relation& other);
        virtual ~Relation();

/* include <relation> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;
        BiblMixIn    m_Bibl;
        ResponsibilityMixIn    m_Responsibility;
        SourceMixIn    m_Source;
        EvidenceMixIn    m_Evidence;
        PointingMixIn    m_Pointing;
        RelMixIn    m_Rel;
        TargetevalMixIn    m_Targeteval;

    private:
        REGISTER_DECLARATION(Relation);
};

/** \brief Gathers bibliographic relation elements.
 */
class MEI_EXPORT RelationList : public MeiElement {
    public:
        RelationList();
        RelationList(const RelationList& other);
        virtual ~RelationList();

/* include <relationList> */

        CommonMixIn    m_Common;
        CommonPartMixIn    m_CommonPart;

    private:
        REGISTER_DECLARATION(RelationList);
};
}
#endif  // FRBR_H_
