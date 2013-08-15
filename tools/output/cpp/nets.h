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

#ifndef NETS_H_
#define NETS_H_

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
/** \brief encodes an arc, the connection from one node to another in a graph.
 */
class MEI_EXPORT Arc : public MeiElement {
    public:
        Arc();
        Arc(const Arc& other);
        virtual ~Arc();
        /** \brief indicates the starting point of the period in standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getFrom();
        void setFrom(std::string _from);
        bool hasFrom();
        void removeFrom();
        /** \brief indicates the ending point of the period in standard form, e.g.
         * 
         *  yyyy-mm-dd.
         */
        MeiAttribute* getTo();
        void setTo(std::string _to);
        bool hasTo();
        void removeTo();

/* include <arc> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Arc);
};

/** \brief provides explicitly for a leaf of an embedding tree, which may also be encoded
 *  with the eTree element.
 */
class MEI_EXPORT ELeaf : public MeiElement {
    public:
        ELeaf();
        ELeaf(const ELeaf& other);
        virtual ~ELeaf();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <eLeaf> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(ELeaf);
};

/** \brief provides an alternative to tree element for representing ordered rooted tree
 *  structures.
 */
class MEI_EXPORT ETree : public MeiElement {
    public:
        ETree();
        ETree(const ETree& other);
        virtual ~ETree();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <eTree> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;
        TypedMixIn    m_Typed;

    private:
        REGISTER_DECLARATION(ETree);
};

/** \brief provides for groups of rooted trees.
 */
class MEI_EXPORT Forest : public MeiElement {
    public:
        Forest();
        Forest(const Forest& other);
        virtual ~Forest();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <forest> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Forest);
};

/** \brief encodes a graph, which is a collection of nodes, and arcs which connect the
 *  nodes.
 */
class MEI_EXPORT Graph : public MeiElement {
    public:
        Graph();
        Graph(const Graph& other);
        virtual ~Graph();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief states the order of the graph, i.e., the number of its nodes.
         */
        MeiAttribute* getOrder();
        void setOrder(std::string _order);
        bool hasOrder();
        void removeOrder();
        /** \brief specifies the size or approximate size of the group.
         */
        MeiAttribute* getSize();
        void setSize(std::string _size);
        bool hasSize();
        void removeSize();

/* include <graph> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Graph);
};

/** \brief represents an intermediate (or internal) node of a tree.
 */
class MEI_EXPORT INode : public MeiElement {
    public:
        INode();
        INode(const INode& other);
        virtual ~INode();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();
        /** \brief provides a list of identifiers of the elements which are the children of the
         *  root node.
         */
        MeiAttribute* getChildren();
        void setChildren(std::string _children);
        bool hasChildren();
        void removeChildren();
        /** \brief provides the identifier of the element which is the parent of this node.
         */
        MeiAttribute* getParent();
        void setParent(std::string _parent);
        bool hasParent();
        void removeParent();
        /** \brief indicates whether or not the tree is ordered, or if it is partially ordered.
         */
        MeiAttribute* getOrd();
        void setOrd(std::string _ord);
        bool hasOrd();
        void removeOrd();
        /** \brief provides an identifier of the element which this node follows.
         */
        MeiAttribute* getFollow();
        void setFollow(std::string _follow);
        bool hasFollow();
        void removeFollow();
        /** \brief gives the out degree of the node, the number of nodes which are adjacent to the
         *  given node.
         */
        MeiAttribute* getOutDegree();
        void setOutDegree(std::string _outDegree);
        bool hasOutDegree();
        void removeOutDegree();

/* include <iNode> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(INode);
};

/** \brief encodes the leaves (terminal nodes) of a tree.
 */
class MEI_EXPORT Leaf : public MeiElement {
    public:
        Leaf();
        Leaf(const Leaf& other);
        virtual ~Leaf();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();
        /** \brief provides the identifier of the element which is the parent of this node.
         */
        MeiAttribute* getParent();
        void setParent(std::string _parent);
        bool hasParent();
        void removeParent();
        /** \brief provides an identifier of the element which this node follows.
         */
        MeiAttribute* getFollow();
        void setFollow(std::string _follow);
        bool hasFollow();
        void removeFollow();

/* include <leaf> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Leaf);
};

/** \brief provides for lists of forests.
 */
class MEI_EXPORT ListForest : public MeiElement {
    public:
        ListForest();
        ListForest(const ListForest& other);
        virtual ~ListForest();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();

/* include <listForest> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(ListForest);
};

/** \brief encodes a node, a possibly labeled point in a graph.
 */
class MEI_EXPORT Node : public MeiElement {
    public:
        Node();
        Node(const Node& other);
        virtual ~Node();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();
        /** \brief indicates what kind of phenomenon is being noted in the passage.
         */
        MeiAttribute* getType();
        void setType(std::string _type);
        bool hasType();
        void removeType();
        /** \brief gives the identifiers of the nodes which are adjacent to the current node.
         */
        MeiAttribute* getAdjTo();
        void setAdjTo(std::string _adjTo);
        bool hasAdjTo();
        void removeAdjTo();
        /** \brief gives the identifiers of the nodes which are adjacent from the current node.
         */
        MeiAttribute* getAdjFrom();
        void setAdjFrom(std::string _adjFrom);
        bool hasAdjFrom();
        void removeAdjFrom();
        /** \brief gives the identifiers of the nodes which are both adjacent to and adjacent from
         *  the current node.
         */
        MeiAttribute* getAdj();
        void setAdj(std::string _adj);
        bool hasAdj();
        void removeAdj();
        /** \brief gives the in degree of the node, the number of nodes which are adjacent from the
         *  given node.
         */
        MeiAttribute* getInDegree();
        void setInDegree(std::string _inDegree);
        bool hasInDegree();
        void removeInDegree();
        /** \brief gives the out degree of the node, the number of nodes which are adjacent to the
         *  given node.
         */
        MeiAttribute* getOutDegree();
        void setOutDegree(std::string _outDegree);
        bool hasOutDegree();
        void removeOutDegree();
        /** \brief signifies the degree of damage according to a convenient scale.
         * 
         *  The
         */
        MeiAttribute* getDegree();
        void setDegree(std::string _degree);
        bool hasDegree();
        void removeDegree();

/* include <node> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Node);
};

/** \brief represents the root node of a tree.
 */
class MEI_EXPORT Root : public MeiElement {
    public:
        Root();
        Root(const Root& other);
        virtual ~Root();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();
        /** \brief provides a list of identifiers of the elements which are the children of the
         *  root node.
         */
        MeiAttribute* getChildren();
        void setChildren(std::string _children);
        bool hasChildren();
        void removeChildren();
        /** \brief indicates whether or not the tree is ordered, or if it is partially ordered.
         */
        MeiAttribute* getOrd();
        void setOrd(std::string _ord);
        bool hasOrd();
        void removeOrd();
        /** \brief gives the out degree of the node, the number of nodes which are adjacent to the
         *  given node.
         */
        MeiAttribute* getOutDegree();
        void setOutDegree(std::string _outDegree);
        bool hasOutDegree();
        void removeOutDegree();

/* include <root> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Root);
};

/** \brief encodes a tree, which is made up of a root, internal nodes, leaves, and arcs
 *  from root to leaves.
 */
class MEI_EXPORT Tree : public MeiElement {
    public:
        Tree();
        Tree(const Tree& other);
        virtual ~Tree();
        /** \brief gives the maximum number of children of the root and internal nodes of the tree.
         */
        MeiAttribute* getArity();
        void setArity(std::string _arity);
        bool hasArity();
        void removeArity();
        /** \brief indicates whether or not the tree is ordered, or if it is partially ordered.
         */
        MeiAttribute* getOrd();
        void setOrd(std::string _ord);
        bool hasOrd();
        void removeOrd();
        /** \brief states the order of the graph, i.e., the number of its nodes.
         */
        MeiAttribute* getOrder();
        void setOrder(std::string _order);
        bool hasOrder();
        void removeOrder();

/* include <tree> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Tree);
};

/** \brief provides for an underspecified eTree, that is, an eTree with information left
 *  out.
 */
class MEI_EXPORT Triangle : public MeiElement {
    public:
        Triangle();
        Triangle(const Triangle& other);
        virtual ~Triangle();
        /** \brief supplies the value of the number in standard form.
         */
        MeiAttribute* getValue();
        void setValue(std::string _value);
        bool hasValue();
        void removeValue();

/* include <triangle> */

        GlobalMixIn    m_Global;
        GlobalLinkingMixIn    m_GlobalLinking;
        GlobalAnalyticMixIn    m_GlobalAnalytic;
        GlobalFacsMixIn    m_GlobalFacs;
        GlobalChangeMixIn    m_GlobalChange;

    private:
        REGISTER_DECLARATION(Triangle);
};
}
#endif  // NETS_H_
