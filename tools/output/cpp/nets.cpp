#include "nets.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Arc::Arc() :
    MeiElement("arc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Arc, "arc");
mei::Arc::~Arc() {}
mei::Arc::Arc(const Arc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Arc::getFrom() {
    if (!hasAttribute("from")) {
        throw AttributeNotFoundException("from");
    }
    return getAttribute("from");
};

void mei::Arc::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    addAttribute(a);
};

bool mei::Arc::hasFrom() {
    return hasAttribute("from");
};

void mei::Arc::removeFrom() {
    removeAttribute("from");
};
MeiAttribute* mei::Arc::getTo() {
    if (!hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return getAttribute("to");
};

void mei::Arc::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    addAttribute(a);
};

bool mei::Arc::hasTo() {
    return hasAttribute("to");
};

void mei::Arc::removeTo() {
    removeAttribute("to");
};
/* include <arc> */

mei::ELeaf::ELeaf() :
    MeiElement("eLeaf"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::ELeaf, "eLeaf");
mei::ELeaf::~ELeaf() {}
mei::ELeaf::ELeaf(const ELeaf& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

MeiAttribute* mei::ELeaf::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::ELeaf::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::ELeaf::hasValue() {
    return hasAttribute("value");
};

void mei::ELeaf::removeValue() {
    removeAttribute("value");
};
/* include <eLeaf> */

mei::ETree::ETree() :
    MeiElement("eTree"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::ETree, "eTree");
mei::ETree::~ETree() {}
mei::ETree::ETree(const ETree& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

MeiAttribute* mei::ETree::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::ETree::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::ETree::hasValue() {
    return hasAttribute("value");
};

void mei::ETree::removeValue() {
    removeAttribute("value");
};
/* include <eTree> */

mei::Forest::Forest() :
    MeiElement("forest"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Forest, "forest");
mei::Forest::~Forest() {}
mei::Forest::Forest(const Forest& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Forest::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Forest::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Forest::hasType() {
    return hasAttribute("type");
};

void mei::Forest::removeType() {
    removeAttribute("type");
};
/* include <forest> */

mei::Graph::Graph() :
    MeiElement("graph"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Graph, "graph");
mei::Graph::~Graph() {}
mei::Graph::Graph(const Graph& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Graph::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Graph::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Graph::hasType() {
    return hasAttribute("type");
};

void mei::Graph::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Graph::getOrder() {
    if (!hasAttribute("order")) {
        throw AttributeNotFoundException("order");
    }
    return getAttribute("order");
};

void mei::Graph::setOrder(std::string _order) {
    MeiAttribute *a = new MeiAttribute("order", _order);
    addAttribute(a);
};

bool mei::Graph::hasOrder() {
    return hasAttribute("order");
};

void mei::Graph::removeOrder() {
    removeAttribute("order");
};
MeiAttribute* mei::Graph::getSize() {
    if (!hasAttribute("size")) {
        throw AttributeNotFoundException("size");
    }
    return getAttribute("size");
};

void mei::Graph::setSize(std::string _size) {
    MeiAttribute *a = new MeiAttribute("size", _size);
    addAttribute(a);
};

bool mei::Graph::hasSize() {
    return hasAttribute("size");
};

void mei::Graph::removeSize() {
    removeAttribute("size");
};
/* include <graph> */

mei::INode::INode() :
    MeiElement("iNode"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::INode, "iNode");
mei::INode::~INode() {}
mei::INode::INode(const INode& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::INode::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::INode::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::INode::hasValue() {
    return hasAttribute("value");
};

void mei::INode::removeValue() {
    removeAttribute("value");
};
MeiAttribute* mei::INode::getChildren() {
    if (!hasAttribute("children")) {
        throw AttributeNotFoundException("children");
    }
    return getAttribute("children");
};

void mei::INode::setChildren(std::string _children) {
    MeiAttribute *a = new MeiAttribute("children", _children);
    addAttribute(a);
};

bool mei::INode::hasChildren() {
    return hasAttribute("children");
};

void mei::INode::removeChildren() {
    removeAttribute("children");
};
MeiAttribute* mei::INode::getParent() {
    if (!hasAttribute("parent")) {
        throw AttributeNotFoundException("parent");
    }
    return getAttribute("parent");
};

void mei::INode::setParent(std::string _parent) {
    MeiAttribute *a = new MeiAttribute("parent", _parent);
    addAttribute(a);
};

bool mei::INode::hasParent() {
    return hasAttribute("parent");
};

void mei::INode::removeParent() {
    removeAttribute("parent");
};
MeiAttribute* mei::INode::getOrd() {
    if (!hasAttribute("ord")) {
        throw AttributeNotFoundException("ord");
    }
    return getAttribute("ord");
};

void mei::INode::setOrd(std::string _ord) {
    MeiAttribute *a = new MeiAttribute("ord", _ord);
    addAttribute(a);
};

bool mei::INode::hasOrd() {
    return hasAttribute("ord");
};

void mei::INode::removeOrd() {
    removeAttribute("ord");
};
MeiAttribute* mei::INode::getFollow() {
    if (!hasAttribute("follow")) {
        throw AttributeNotFoundException("follow");
    }
    return getAttribute("follow");
};

void mei::INode::setFollow(std::string _follow) {
    MeiAttribute *a = new MeiAttribute("follow", _follow);
    addAttribute(a);
};

bool mei::INode::hasFollow() {
    return hasAttribute("follow");
};

void mei::INode::removeFollow() {
    removeAttribute("follow");
};
MeiAttribute* mei::INode::getOutDegree() {
    if (!hasAttribute("outDegree")) {
        throw AttributeNotFoundException("outDegree");
    }
    return getAttribute("outDegree");
};

void mei::INode::setOutDegree(std::string _outDegree) {
    MeiAttribute *a = new MeiAttribute("outDegree", _outDegree);
    addAttribute(a);
};

bool mei::INode::hasOutDegree() {
    return hasAttribute("outDegree");
};

void mei::INode::removeOutDegree() {
    removeAttribute("outDegree");
};
/* include <iNode> */

mei::Leaf::Leaf() :
    MeiElement("leaf"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Leaf, "leaf");
mei::Leaf::~Leaf() {}
mei::Leaf::Leaf(const Leaf& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Leaf::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Leaf::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Leaf::hasValue() {
    return hasAttribute("value");
};

void mei::Leaf::removeValue() {
    removeAttribute("value");
};
MeiAttribute* mei::Leaf::getParent() {
    if (!hasAttribute("parent")) {
        throw AttributeNotFoundException("parent");
    }
    return getAttribute("parent");
};

void mei::Leaf::setParent(std::string _parent) {
    MeiAttribute *a = new MeiAttribute("parent", _parent);
    addAttribute(a);
};

bool mei::Leaf::hasParent() {
    return hasAttribute("parent");
};

void mei::Leaf::removeParent() {
    removeAttribute("parent");
};
MeiAttribute* mei::Leaf::getFollow() {
    if (!hasAttribute("follow")) {
        throw AttributeNotFoundException("follow");
    }
    return getAttribute("follow");
};

void mei::Leaf::setFollow(std::string _follow) {
    MeiAttribute *a = new MeiAttribute("follow", _follow);
    addAttribute(a);
};

bool mei::Leaf::hasFollow() {
    return hasAttribute("follow");
};

void mei::Leaf::removeFollow() {
    removeAttribute("follow");
};
/* include <leaf> */

mei::ListForest::ListForest() :
    MeiElement("listForest"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::ListForest, "listForest");
mei::ListForest::~ListForest() {}
mei::ListForest::ListForest(const ListForest& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::ListForest::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::ListForest::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::ListForest::hasType() {
    return hasAttribute("type");
};

void mei::ListForest::removeType() {
    removeAttribute("type");
};
/* include <listForest> */

mei::Node::Node() :
    MeiElement("node"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Node, "node");
mei::Node::~Node() {}
mei::Node::Node(const Node& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Node::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Node::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Node::hasValue() {
    return hasAttribute("value");
};

void mei::Node::removeValue() {
    removeAttribute("value");
};
MeiAttribute* mei::Node::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Node::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Node::hasType() {
    return hasAttribute("type");
};

void mei::Node::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Node::getAdjTo() {
    if (!hasAttribute("adjTo")) {
        throw AttributeNotFoundException("adjTo");
    }
    return getAttribute("adjTo");
};

void mei::Node::setAdjTo(std::string _adjTo) {
    MeiAttribute *a = new MeiAttribute("adjTo", _adjTo);
    addAttribute(a);
};

bool mei::Node::hasAdjTo() {
    return hasAttribute("adjTo");
};

void mei::Node::removeAdjTo() {
    removeAttribute("adjTo");
};
MeiAttribute* mei::Node::getAdjFrom() {
    if (!hasAttribute("adjFrom")) {
        throw AttributeNotFoundException("adjFrom");
    }
    return getAttribute("adjFrom");
};

void mei::Node::setAdjFrom(std::string _adjFrom) {
    MeiAttribute *a = new MeiAttribute("adjFrom", _adjFrom);
    addAttribute(a);
};

bool mei::Node::hasAdjFrom() {
    return hasAttribute("adjFrom");
};

void mei::Node::removeAdjFrom() {
    removeAttribute("adjFrom");
};
MeiAttribute* mei::Node::getAdj() {
    if (!hasAttribute("adj")) {
        throw AttributeNotFoundException("adj");
    }
    return getAttribute("adj");
};

void mei::Node::setAdj(std::string _adj) {
    MeiAttribute *a = new MeiAttribute("adj", _adj);
    addAttribute(a);
};

bool mei::Node::hasAdj() {
    return hasAttribute("adj");
};

void mei::Node::removeAdj() {
    removeAttribute("adj");
};
MeiAttribute* mei::Node::getInDegree() {
    if (!hasAttribute("inDegree")) {
        throw AttributeNotFoundException("inDegree");
    }
    return getAttribute("inDegree");
};

void mei::Node::setInDegree(std::string _inDegree) {
    MeiAttribute *a = new MeiAttribute("inDegree", _inDegree);
    addAttribute(a);
};

bool mei::Node::hasInDegree() {
    return hasAttribute("inDegree");
};

void mei::Node::removeInDegree() {
    removeAttribute("inDegree");
};
MeiAttribute* mei::Node::getOutDegree() {
    if (!hasAttribute("outDegree")) {
        throw AttributeNotFoundException("outDegree");
    }
    return getAttribute("outDegree");
};

void mei::Node::setOutDegree(std::string _outDegree) {
    MeiAttribute *a = new MeiAttribute("outDegree", _outDegree);
    addAttribute(a);
};

bool mei::Node::hasOutDegree() {
    return hasAttribute("outDegree");
};

void mei::Node::removeOutDegree() {
    removeAttribute("outDegree");
};
MeiAttribute* mei::Node::getDegree() {
    if (!hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return getAttribute("degree");
};

void mei::Node::setDegree(std::string _degree) {
    MeiAttribute *a = new MeiAttribute("degree", _degree);
    addAttribute(a);
};

bool mei::Node::hasDegree() {
    return hasAttribute("degree");
};

void mei::Node::removeDegree() {
    removeAttribute("degree");
};
/* include <node> */

mei::Root::Root() :
    MeiElement("root"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Root, "root");
mei::Root::~Root() {}
mei::Root::Root(const Root& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Root::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Root::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Root::hasValue() {
    return hasAttribute("value");
};

void mei::Root::removeValue() {
    removeAttribute("value");
};
MeiAttribute* mei::Root::getChildren() {
    if (!hasAttribute("children")) {
        throw AttributeNotFoundException("children");
    }
    return getAttribute("children");
};

void mei::Root::setChildren(std::string _children) {
    MeiAttribute *a = new MeiAttribute("children", _children);
    addAttribute(a);
};

bool mei::Root::hasChildren() {
    return hasAttribute("children");
};

void mei::Root::removeChildren() {
    removeAttribute("children");
};
MeiAttribute* mei::Root::getOrd() {
    if (!hasAttribute("ord")) {
        throw AttributeNotFoundException("ord");
    }
    return getAttribute("ord");
};

void mei::Root::setOrd(std::string _ord) {
    MeiAttribute *a = new MeiAttribute("ord", _ord);
    addAttribute(a);
};

bool mei::Root::hasOrd() {
    return hasAttribute("ord");
};

void mei::Root::removeOrd() {
    removeAttribute("ord");
};
MeiAttribute* mei::Root::getOutDegree() {
    if (!hasAttribute("outDegree")) {
        throw AttributeNotFoundException("outDegree");
    }
    return getAttribute("outDegree");
};

void mei::Root::setOutDegree(std::string _outDegree) {
    MeiAttribute *a = new MeiAttribute("outDegree", _outDegree);
    addAttribute(a);
};

bool mei::Root::hasOutDegree() {
    return hasAttribute("outDegree");
};

void mei::Root::removeOutDegree() {
    removeAttribute("outDegree");
};
/* include <root> */

mei::Tree::Tree() :
    MeiElement("tree"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Tree, "tree");
mei::Tree::~Tree() {}
mei::Tree::Tree(const Tree& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Tree::getArity() {
    if (!hasAttribute("arity")) {
        throw AttributeNotFoundException("arity");
    }
    return getAttribute("arity");
};

void mei::Tree::setArity(std::string _arity) {
    MeiAttribute *a = new MeiAttribute("arity", _arity);
    addAttribute(a);
};

bool mei::Tree::hasArity() {
    return hasAttribute("arity");
};

void mei::Tree::removeArity() {
    removeAttribute("arity");
};
MeiAttribute* mei::Tree::getOrd() {
    if (!hasAttribute("ord")) {
        throw AttributeNotFoundException("ord");
    }
    return getAttribute("ord");
};

void mei::Tree::setOrd(std::string _ord) {
    MeiAttribute *a = new MeiAttribute("ord", _ord);
    addAttribute(a);
};

bool mei::Tree::hasOrd() {
    return hasAttribute("ord");
};

void mei::Tree::removeOrd() {
    removeAttribute("ord");
};
MeiAttribute* mei::Tree::getOrder() {
    if (!hasAttribute("order")) {
        throw AttributeNotFoundException("order");
    }
    return getAttribute("order");
};

void mei::Tree::setOrder(std::string _order) {
    MeiAttribute *a = new MeiAttribute("order", _order);
    addAttribute(a);
};

bool mei::Tree::hasOrder() {
    return hasAttribute("order");
};

void mei::Tree::removeOrder() {
    removeAttribute("order");
};
/* include <tree> */

mei::Triangle::Triangle() :
    MeiElement("triangle"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Triangle, "triangle");
mei::Triangle::~Triangle() {}
mei::Triangle::Triangle(const Triangle& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Triangle::getValue() {
    if (!hasAttribute("value")) {
        throw AttributeNotFoundException("value");
    }
    return getAttribute("value");
};

void mei::Triangle::setValue(std::string _value) {
    MeiAttribute *a = new MeiAttribute("value", _value);
    addAttribute(a);
};

bool mei::Triangle::hasValue() {
    return hasAttribute("value");
};

void mei::Triangle::removeValue() {
    removeAttribute("value");
};
/* include <triangle> */



