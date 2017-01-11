#include "frbr.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ComponentGrp::ComponentGrp() :
    MeiElement("componentGrp"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::ComponentGrp, "componentGrp");
mei::ComponentGrp::~ComponentGrp() {}
mei::ComponentGrp::ComponentGrp(const ComponentGrp& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <componentGrp> */

mei::Expression::Expression() :
    MeiElement("expression"),
    m_Datapointing(this),
    m_Common(this),
    m_CommonPart(this),
    m_Bibl(this)
{
}
REGISTER_DEFINITION(mei::Expression, "expression");
mei::Expression::~Expression() {}
mei::Expression::Expression(const Expression& other) :
    MeiElement(other),
    m_Datapointing(this),
    m_Common(this),
    m_CommonPart(this),
    m_Bibl(this)
{
}

/* include <expression> */

mei::ExpressionList::ExpressionList() :
    MeiElement("expressionList"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::ExpressionList, "expressionList");
mei::ExpressionList::~ExpressionList() {}
mei::ExpressionList::ExpressionList(const ExpressionList& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <expressionList> */

mei::Item::Item() :
    MeiElement("item"),
    m_Datapointing(this),
    m_Common(this),
    m_CommonPart(this),
    m_Bibl(this),
    m_Pointing(this),
    m_Targeteval(this)
{
}
REGISTER_DEFINITION(mei::Item, "item");
mei::Item::~Item() {}
mei::Item::Item(const Item& other) :
    MeiElement(other),
    m_Datapointing(this),
    m_Common(this),
    m_CommonPart(this),
    m_Bibl(this),
    m_Pointing(this),
    m_Targeteval(this)
{
}

/* include <item> */

mei::ItemList::ItemList() :
    MeiElement("itemList"),
    m_Common(this),
    m_CommonPart(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::ItemList, "itemList");
mei::ItemList::~ItemList() {}
mei::ItemList::ItemList(const ItemList& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Typed(this)
{
}

/* include <itemList> */

mei::Relation::Relation() :
    MeiElement("relation"),
    m_Common(this),
    m_CommonPart(this),
    m_Bibl(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Pointing(this),
    m_Rel(this),
    m_Targeteval(this)
{
}
REGISTER_DEFINITION(mei::Relation, "relation");
mei::Relation::~Relation() {}
mei::Relation::Relation(const Relation& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this),
    m_Bibl(this),
    m_Responsibility(this),
    m_Source(this),
    m_Evidence(this),
    m_Pointing(this),
    m_Rel(this),
    m_Targeteval(this)
{
}

/* include <relation> */

mei::RelationList::RelationList() :
    MeiElement("relationList"),
    m_Common(this),
    m_CommonPart(this)
{
}
REGISTER_DEFINITION(mei::RelationList, "relationList");
mei::RelationList::~RelationList() {}
mei::RelationList::RelationList(const RelationList& other) :
    MeiElement(other),
    m_Common(this),
    m_CommonPart(this)
{
}

/* include <relationList> */



