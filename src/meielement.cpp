#include "meielement.h"

#include <stdio.h>

#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

#include "meiattribute.h"
#include "meidocument.h"
#include "exceptions.h"

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
    this->generateAndSetId();
}

mei::MeiElement::~MeiElement() {
    this->attributes.clear();
}

mei::MeiElement::MeiElement(const MeiElement& ele) :
 name(ele.name), value(ele.value), tail(ele.tail), parent(ele.parent), document(NULL) {
    // deep copy child elements
    vector<MeiElement*>::const_iterator ele_it;
    for (ele_it = ele.children.begin(); ele_it != ele.children.end(); ++ele_it) {
        // recursive copy constructors, yay!
        this->addChild(new MeiElement(**ele_it));
    }

    // copy element attributes
    // use default MeiAttribute copy constructor with shallow pointer copy for MeiElement
    vector<MeiAttribute*>::const_iterator attr_it;
    for (attr_it = ele.attributes.begin(); attr_it != ele.attributes.end(); ++attr_it) {
        this->addAttribute(new MeiAttribute(**attr_it));
    }
    this->generateAndSetId();
}


bool mei::MeiElement::operator==(const mei::MeiElement &other) const {
    return (this->id != "" &&
            this->name == other.name &&
            this->id == other.id);
}

bool mei::MeiElement::operator!=(const mei::MeiElement &other) const {
    return !(*this == other);
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
#ifdef WIN32
    UUID uuid;
    UuidCreate(&uuid);

    unsigned char *str;
    UuidToStringA(&uuid, &str);

    string s((char*) str);

    RpcStringFreeA(&str);
#else
    uuid_t uuid;
    uuid_generate(uuid);
    char s[37];
    uuid_unparse(uuid, s);
#endif
    string out;

    // xml IDs can't start with a number, so we prepend "m-" to every ID.
    out = "m-" + string(s);
    std::transform(out.begin(), out.end(), out.begin(), ::tolower);

    this->setId(out);
}

const string mei::MeiElement::getId() const {
    return this->id;
}

void mei::MeiElement::setId(string id) {
    this->id = id;
}

bool mei::MeiElement::hasId() {
    return this->id != "";
}

const string mei::MeiElement::getName() const {
    return this->name;
}

const string mei::MeiElement::getValue() const {
    return this->value;
}

void mei::MeiElement::setValue(string value) {
    this->value = value;
}

const string mei::MeiElement::getTail() const {
    return this->tail;
}

void mei::MeiElement::setTail(string tail) {
    this->tail = tail;
}

const vector<MeiAttribute*>& mei::MeiElement::getAttributes() const {
    return this->attributes;
}

void mei::MeiElement::setAttributes(const vector<MeiAttribute*> attrs) {
    attributes.clear();
    // Add one at a time so the element link gets added
    for (vector<MeiAttribute*>::const_iterator i = attrs.begin(); i != attrs.end(); ++i) {
        this->addAttribute(*i);
    }
}

MeiAttribute* mei::MeiElement::getAttribute(string name) const {
    for (vector<MeiAttribute*>::const_iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
        if ((*iter)->getName() == name) {
            return *iter;
        }
    }
    return NULL;
}

bool mei::MeiElement::hasAttribute(string name) const {
    if (attributes.empty()) return false;
    
    for (vector<MeiAttribute*>::const_iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
        if ((*iter)->getName() == name) return true;
    }
    return false;
}

void mei::MeiElement::addAttribute(MeiAttribute *attr) {
    if (this->hasAttribute(attr->getName())) {
        this->removeAttribute(attr->getName());
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
    MeiAttribute *temp;
    while (iter != attributes.end()) {
        if ((*iter)->getName() == name) {
            temp = (*iter);
            iter = attributes.erase(iter);
            delete temp;
        } else {
            ++iter;
        }
    }
}

bool mei::MeiElement::hasParent() const {
    return parent != NULL;
}

void mei::MeiElement::setParent(MeiElement *parent) {
    this->parent = parent;
}

mei::MeiElement* mei::MeiElement::getParent() const {
    return this->parent;
}

void mei::MeiElement::setDocument(MeiDocument *document) throw(DocumentRootNotSetException) {
    if (!document->getRootElement()) {
        throw DocumentRootNotSetException("The document root is not set. Please set it using MeiDocument::setRootElement()");
    }

    this->document = document;
    document->addIdMap(id, this);
    
    vector<mei::MeiElement*> descendants = this->getDescendants();
    
    for (vector<mei::MeiElement*>::iterator iter = descendants.begin(); iter != descendants.end(); ++iter) {
        (*iter)->setDocument(document);
    }
}

MeiDocument* mei::MeiElement::getDocument() const {
    return this->document;
}

/*
    Removing the document pointer from an element will also
    remove it from all its child elements.
*/
void mei::MeiElement::removeDocument() {
    if (document) {
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

const vector<mei::MeiElement*>& mei::MeiElement::getChildren() const {
    return this->children;
}

const vector<mei::MeiElement*> mei::MeiElement::getChildrenByName(string name) const {
    vector<mei::MeiElement*> res;
    for (vector<MeiElement*>::const_iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
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

void mei::MeiElement::removeChildrenByName(string name) {
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

bool mei::MeiElement::hasChildren() const {
    // topsy-turvy world! returns true if not empty.
    return !this->children.empty();
}

bool mei::MeiElement::hasChildren(string cname) const {
    for (vector<MeiElement*>::const_iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        if ((*iter)->getName() == cname) return true;
    }
    return false;
}

mei::MeiElement* mei::MeiElement::getAncestor(string name) const {
    if (parent == NULL) {
        return NULL;
    }
    if (name == parent->name) {
        return parent;
    }
    return parent->getAncestor(name);
}

bool mei::MeiElement::hasAncestor(string name) const {
    MeiElement* m = getAncestor(name);
    if (m != NULL) {
        return true;
    }
    return false;
}

vector<mei::MeiElement*> mei::MeiElement::getDescendants() {
    vector<mei::MeiElement*> res = this->flatten();
    res.erase(res.begin());
    return res;
}

vector<mei::MeiElement*> mei::MeiElement::getDescendantsByName(string name) {
    vector<mei::MeiElement*> res;
    vector<mei::MeiElement*> desc = this->flatten();

    for (vector<MeiElement*>::iterator iter = desc.begin(); iter != desc.end(); ++iter) {
        if ((*iter)->getName() == name) {
            res.push_back(*iter);
        }
    }
    return res;
}

vector<mei::MeiElement*> mei::MeiElement::getPeers() const {
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
    return this->document->getPositionInDocument(this);
}

void mei::MeiElement::printElement() {
    printElement(0);
}

void mei::MeiElement::printElement(int level) {
    printf("%*s", level, "");
    printf("{%s", getName().c_str());

    for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter !=attributes.end(); ++iter) {
        printf(" %s=\"%s\"", (*iter)->getName().c_str(), (*iter)->getValue().c_str());
    }

    if (value != "") {
        printf(" (v=%s)", value.c_str());
    }
    if (tail != "") {
        printf(" (t=%s)", tail.c_str());
    }

    printf("}\n");

    vector<MeiElement*>::iterator iter = this->children.begin();
    while (iter != this->children.end()) {
        (*iter)->printElement(level+2);
        iter++;
    }
}

mei::MeiElement* mei::MeiElement::lookBack(string name) {
    if (!this->document) {
        return NULL;
    }
    return this->document->lookBack(this, name);
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
    if (document && document->getRootElement() != NULL) {
        document->updateFlattenedTree();
    }
}

mei::MeiCommentNode::MeiCommentNode() :
    MeiElement("_comment")
{
}
mei::MeiCommentNode::~MeiCommentNode() {}
