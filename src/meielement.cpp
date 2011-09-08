#include "meielement.h"

#include <stdio.h>

#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

#include "meiattribute.h"

using std::string;
using mei::MeiAttribute;
using mei::MeiFactory;

MeiFactory::default_map * MeiFactory::defaultmap;

mei::MeiElement::MeiElement(string name) {
    this->name = name;
    this->value = "";
    this->parent = NULL;
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
    removeAttribute(attr->getName());
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

/** Working with Children **/

void mei::MeiElement::addChild(MeiElement *child) {
    this->children.push_back(child);
}

void mei::MeiElement::setChildren(vector<MeiElement*> children) {
    deleteAllChildren();
    this->children = children;
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
        delete *iter;
    }
    children.clear();
}

void mei::MeiElement::removeChild(MeiElement *child) {
    vector<MeiElement*>::iterator iter = this->children.begin();
    while (iter != this->children.end()) {
        if (child == *iter) {
            iter = this->children.erase(iter);
        } else {
            ++iter;
        }
    }
}

void mei::MeiElement::removeChildrenWithName(string name) {
    vector<MeiElement*>::iterator iter = this->children.begin();
    while (iter != this->children.end()) {
        if (name == (*iter)->getName()) {
            iter = this->children.erase(iter);
        } else {
            ++iter;
        }
    }
}

bool mei::MeiElement::hasChildren() {
    return this->children != NULL;
}

bool mei::MeiElement::hasChildren(string cname) {
    for (vector<MeiElement*>::iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        if ((*iter)->getName() == cname) return true;
    }
    return false;
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

    printf("\n");

    vector<MeiElement*>::iterator iter = this->children.begin();
    while (iter != this->children.end()) {
        (*iter)->print(level+2);
        iter++;
    }
}



/*
vector<MeiElement*> MeiElement::getDescendantsByName(string _name) {
    vector<MeiElement*> result(0);
    for (vector<MeiElement*>::iterator i = children.begin(); i != children.end(); ++i) {
        if ((*i)->getName() == _name) {
            result.push_back(*i);
        }
        vector<MeiElement*> grandchildren = (*i)->getDescendantsByName(_name);
        for (vector<MeiElement*>::iterator it = grandchildren.begin(); it != grandchildren.end(); ++it) {
            result.push_back(*it);
        }
    }
    return result;
}


MeiElement* MeiElement::getDescendantById(string _uuid) {
    vector<MeiElement*>::iterator i = children.begin();
    while ( i != children.end() ) {
        // if *i has an id, check it. if it matches, succeed
        if ((*i)->getId() == _uuid) {
            return (*i);
        }
        // else, recurse
        MeiElement* result = (*i)->getDescendantById(_uuid);
        if (result) {
            return result;
        } else {
            ++i;
        }
    }
    return NULL;
}

MeiElement* MeiElement::getAncestorByName(string _name) {
    if (!parent || parent->getName() == _name) {
        return parent;
    } else {
        return parent->getAncestorByName(_name);
    }
}

bool MeiElement::hasAncestor(string _name) {
    if (!parent) {
        return false;
    } else if (parent->getName() == _name) {
        return true;
    } else {
        return parent->hasAncestor(_name);
    }
}

vector<MeiElement*>& MeiElement::getPeers() {
    return parent->getChildren();
}
*/

mei::MeiTextNode::MeiTextNode() :
    MeiElement("_text")
{
}

mei::MeiTextNode::~MeiTextNode() {}

mei::MeiCommentNode::MeiCommentNode() :
    MeiElement("_comment")
{
}
mei::MeiCommentNode::~MeiCommentNode() {}
