#include "meielement.h"

#include <stdio.h>

#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

#include "meiattribute.h"
#include "meidocument.h"

using std::string;
using std::vector;
using std::find;

using mei::MeiAttribute;
using mei::MeiFactory;
using mei::MeiDocument;

MeiFactory::default_map * MeiFactory::defaultmap;

mei::MeiElement::MeiElement(string name) {
    this->name = name;
    this->value = "";
    this->parent = NULL;
    this->document = NULL;
    generateAndSetId();
}

extern "C"
{
#ifdef WIN32
#include <Rpc.h>
#else
#include <uuid/uuid.h>
#endif
}

void mei::MeiElement::generateAndSetId() {
#ifdef WIN
    UUID uuid;
    UuidCreate(&uuid);

    unsigned char *str;
    UuidToStringA(&uuid, &str);

    string s((char*) str);

    RpcStringFreeA(&str);
#else
    uuid_t uuid;
    uuid_generate_random(uuid);
    char s[37];
    uuid_unparse(uuid, s);
#endif
    string out;

    // xml IDs can't start with a number, so we prepend "m-" to every ID.
    out = "m-" + string(s);
    std::transform(out.begin(), out.end(), out.begin(), ::tolower);

    setId(out);
}

const string mei::MeiElement::getId() {
    return this->id;
}

void mei::MeiElement::setId(string id) {
    this->id = id;
}

bool mei::MeiElement::hasId() {
    return this->id != "";
}

const string mei::MeiElement::getName() {
    return this->name;
}

const string mei::MeiElement::getNs() {
    return this->ns;
}

void mei::MeiElement::setNs(string ns) {
    this->ns = ns;
}

const string mei::MeiElement::getValue() {
    return this->value;
}

void mei::MeiElement::setValue(string value) {
    this->value = value;
}

const string mei::MeiElement::getTail() {
    return this->tail;
}

void mei::MeiElement::setTail(string tail) {
    this->tail = tail;
}

const vector<MeiAttribute*>& mei::MeiElement::getAttributes() {
    return this->attributes;
}

void mei::MeiElement::setAttributes(const vector<MeiAttribute*> attrs) {
    attributes.clear();
    // Add one at a time so the element link gets added
    for (vector<MeiAttribute*>::const_iterator i = attrs.begin(); i != attrs.end(); ++i) {
        addAttribute(*i);
    }
}

MeiAttribute* mei::MeiElement::getAttribute(string name) {
    for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
        if ((*iter)->getName() == name) {
            return *iter;
        }
    }
    return NULL;
}

bool mei::MeiElement::hasAttribute(string name) {
    for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
        if ((*iter)->getName() == name) return true;
    }
    return false;
}

void mei::MeiElement::addAttribute(MeiAttribute *attr) {
    if (this->hasAttribute(attr->getName())) {
        removeAttribute(attr->getName());
    }
    attr->setElement(this);
    attributes.push_back(attr);
}

void mei::MeiElement::addAttribute(string attrname, string attrvalue) {
    MeiAttribute* attr = new MeiAttribute(attrname, attrvalue);
    if (this->hasAttribute(attrname)) {
        removeAttribute(attrname);
    }
    attr->setElement(this);
    attributes.push_back(attr);
}

void mei::MeiElement::removeAttribute(string name) {
    vector<MeiAttribute*>::iterator iter = attributes.begin();
    while (iter != attributes.end()) {
        if ((*iter)->getName() == name) {
            iter = attributes.erase(iter);
        } else {
            ++iter;
        }
    }
}

bool mei::MeiElement::hasParent() {
    return parent != NULL;
}

void mei::MeiElement::setParent(MeiElement *parent) {
    this->parent = parent;
}

mei::MeiElement* mei::MeiElement::getParent() {
    return this->parent;
}

void mei::MeiElement::setDocument(MeiDocument *document) {
    this->document = document;
    document->addIdMap(id, this);
    for (vector<mei::MeiElement*>::iterator iter = children.begin(); iter != children.end(); ++iter) {
        (*iter)->setDocument(document);
    }
}

MeiDocument* mei::MeiElement::getDocument() {
    return this->document;
}

void mei::MeiElement::removeDocument() {
    if(document) {
        this->document->rmIdMap(id);
        this->document = NULL;
    }
    for (vector<mei::MeiElement*>::iterator iter = children.begin(); iter != children.end(); ++iter) {
        (*iter)->removeDocument();
    }
}

/** Working with Children **/

void mei::MeiElement::addChild(MeiElement *child) {
    child->setParent(this);
    this->children.push_back(child);

    if (document) {
        child->setDocument(document);
        updateDocument();
    }
}

void mei::MeiElement::addChildBefore(MeiElement *before, MeiElement *child) {
    child->setParent(this);
    vector<MeiElement*>::iterator pos = find(children.begin(), children.end(), before);
    if (pos == children.end()) {
        return;
    }
    this->children.insert(pos, child);

    if (document) {
        child->setDocument(document);
        updateDocument();
    }
}

void mei::MeiElement::setChildren(vector<MeiElement*> children) {
    deleteAllChildren();
    for (vector<mei::MeiElement*>::iterator iter = children.begin(); iter != children.end(); ++iter) {
        (*iter)->setParent(this);
        this->children.push_back(*iter);
    }

    updateDocument();
}

const vector<mei::MeiElement*>& mei::MeiElement::getChildren() {
    return this->children;
}

const vector<mei::MeiElement*> mei::MeiElement::getChildrenByName(string name) {
    vector<mei::MeiElement*> res;
    for (vector<MeiElement*>::iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        if ((*iter)->getName() == name) {
            res.push_back(*iter);
        }
    }
    return res;
}

void mei::MeiElement::deleteAllChildren() {
    for (vector<mei::MeiElement*>::iterator iter = children.begin(); iter != children.end(); ++iter) {
        (*iter)->removeDocument();
        delete *iter;
    }
    children.clear();

    updateDocument();
}

void mei::MeiElement::removeChild(MeiElement *child) {
    vector<MeiElement*>::iterator iter = this->children.begin();
    while (iter != this->children.end()) {
        if (child == *iter) {
            (*iter)->removeDocument();
            iter = this->children.erase(iter);
        } else {
            ++iter;
        }
    }

    updateDocument();
}

void mei::MeiElement::removeChildrenWithName(string name) {
    vector<MeiElement*>::iterator iter = this->children.begin();
    while (iter != this->children.end()) {
        if (name == (*iter)->getName()) {
            (*iter)->removeDocument();
            iter = this->children.erase(iter);
        } else {
            ++iter;
        }
    }

    updateDocument();
}

bool mei::MeiElement::hasChildren() {
    // topsy-turvy world! returns true if not empty.
    return !this->children.empty();
}

bool mei::MeiElement::hasChildren(string cname) {
    for (vector<MeiElement*>::iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        if ((*iter)->getName() == cname) return true;
    }
    return false;
}

mei::MeiElement* mei::MeiElement::getAncestor(string name) {
    if (parent == NULL) {
        return NULL;
    }
    if (name == parent->name) {
        return parent;
    }
    return parent->getAncestor(name);
}

vector<mei::MeiElement*> mei::MeiElement::getDescendants() {
    vector<mei::MeiElement*> res = this->flatten();
    res.erase(res.begin());
    return res;
}

vector<mei::MeiElement*> mei::MeiElement::getPeers() {
    if (this->parent) {
        return this->parent->getChildren();
    }
    vector<mei::MeiElement*> emptyres;
    return emptyres;
}

int mei::MeiElement::getPositionInDocument() {
    if (!this->document) {
        return -1;
    }

    vector<MeiElement*> els = this->document->getFlattenedTree();
    for (unsigned int i = 0; i < els.size(); ++i) {
        if (els[i] == this) {
            return i;       
        }
    }

    return -1;  // this element was not found in the document
}

void mei::MeiElement::print() {
    print(0);
}

void mei::MeiElement::print(int level) {
    printf("%*s ", level + (int)getName().length(), getName().c_str());

    if (this->getNs().size()>0) {
        printf("{%s} ", this->getNs().c_str());
    }

    for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter !=attributes.end(); ++iter) {
        printf("%s=%s ", (*iter)->getName().c_str(), (*iter)->getValue().c_str());
    }

    if (value != "") {
        printf(" (v=%s)", value.c_str());
    }
    if (tail != "") {
        printf(" (t=%s)", tail.c_str());
    }

    printf("\n");

    vector<MeiElement*>::iterator iter = this->children.begin();
    while (iter != this->children.end()) {
        (*iter)->print(level+2);
        iter++;
    }
}

const vector<mei::MeiElement*> mei::MeiElement::flatten() {
    vector<MeiElement*> res;
    res.push_back(this);
    vector<MeiElement*> children = this->getChildren();
    for (vector<mei::MeiElement*>::const_iterator iter = children.begin(); iter != children.end(); ++iter) {
        vector<MeiElement*> subres = (*iter)->flatten();
        res.insert(res.end(), subres.begin(), subres.end());
    }
    return res;
}

void mei::MeiElement::updateDocument() {
    if (document) {
        document->updateFlattenedTree();
    }
}

mei::MeiCommentNode::MeiCommentNode() :
    MeiElement("_comment")
{
}
mei::MeiCommentNode::~MeiCommentNode() {}
