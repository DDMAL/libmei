#include "meielement.h"
#include "meiattribute.h"

#include <stdio.h>

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using std::string;
using mei::MeiAttribute;
using mei::MeiFactory;

MeiFactory::default_map * MeiFactory::defaultmap;

mei::MeiElement::MeiElement() {
    this->name = "";
	this->value = "";
    this->prefix = MEI_PREFIX;
    this->ns = MEI_NS;
  	this->parent = NULL;
}

mei::MeiElement::MeiElement(string name) {
	this->name = name;
	this->value = "";
   	this->parent = NULL;
}

mei::MeiElement::MeiElement(string name, string value) {
    this->name = name;
    this->value = value;
    this->parent = NULL;
}

mei::MeiElement::MeiElement(string name, string value, string prefix, string ns, MeiElement * parent) {
	this->name = name;
    this->value = value;
    this->ns = ns;
    this->prefix = prefix;
	this->parent = parent;
}



/*
MeiElement::MeiElement(xmlNode* node) {
	parent_ = NULL;
	value_ = "";
	xmlNode* curnode = NULL;
    xmlAttr* curattr = NULL;
    const xmlChar* attrname;
	const xmlChar* attrprefix;
    xmlNode* attrvalue = NULL;
    xmlNs* xmlns = NULL;
	
	if (node && node->type == XML_ELEMENT_NODE) {
		xmlns = node->ns;
		const xmlChar* childhref = xmlns->href;
		const xmlChar* childprefix = xmlns->prefix;
		MeiNs ns;
		if (childhref != NULL) {
			ns.href = (const char*)childhref;
		}
		if (childprefix != NULL) {
			ns.prefix = (const char*)childprefix;
		}
		
		this->ns = ns;
		this->name_ = (const char*)node->name;
		
		if (node->nsDef != NULL) {
			if (node->nsDef->href != NULL && node->nsDef->prefix != NULL) {
				string prefix = (const char*)(node->nsDef->prefix);
				string href = (const char*)(node->nsDef->href);
				MeiAttribute *attribute = new MeiAttribute(prefix,href);
				attribute->setPrefix("xmlns");
				addAttribute(attribute);
			}
		}
		
		if (node->properties) {                
			for (curattr = node->properties; curattr; curattr = curattr->next) {
				if (curattr->type == XML_ATTRIBUTE_NODE) {
					attrname = curattr->name;
					if (curattr->children) {
						attrvalue = curattr->children;
						if (curattr->atype != XML_ATTRIBUTE_ID) {
							string name = (const char *)(attrname);
							string value = (const char *)(attrvalue->content);
							MeiAttribute *curmeiattr = new MeiAttribute(name, value);
							if (curattr->ns) {
								if (curattr->ns->prefix) {
									attrprefix = curattr->ns->prefix;
									string prefix = (const char*)attrprefix;
									curmeiattr->setPrefix(prefix);
								}
							}
                            addAttribute(curmeiattr);
						} else {
                            MeiAttribute *idattr = new MeiAttribute("id",string((const char*)attrvalue->content));
                            idattr->setPrefix("xml");
                            addAttribute(idattr);
                        }
					}
				}					
			}
		}
		
		for (curnode = node->children; curnode; curnode = curnode->next) {
			if ( curnode->type == XML_TEXT_NODE) {
				setValue((const char *)curnode->content);
			}
		}
	}
	//else throw an exception?
}
*/
mei::MeiElement::~MeiElement() {}

//currently fails to compare children vectors
/*
bool MeiElement::operator==(const MeiElement &other) const {
	if (!this->children.empty() && !other.children_.empty()) {
		return (this->name_ == other.getName() && this->parent_ == other.getParent()
				&& this->value_ == other.getValue() && this->tail_ == other.getTail() && this->attributes_ == other.getAttributes()
				&& this->children == other.children self-referentiality? && this->ns.prefix == other.ns.prefix && this->ns.href == other.ns.href);
	} else if (this->children.empty() && other.children.empty()) {
		return (this->name == other.name && this->parent == other.parent
				&& this->value == other.value && this->tail == other.tail && this->attributes == other.attributes 
				&& this->ns.prefix == other.ns.prefix && this->ns.href == other.ns.href);
	} else {
		return false;
	}
		
}*/

// TODO: make sure that this is kept in sync with the xml:id MeiAttribute!
string mei::MeiElement::getId() {
    return this->id;
}

void mei::MeiElement::setId(string id) {
    this->id = id;
    if (this->hasAttribute("xml:id")) {
        this->removeAttribute("xml:id");
        MeiAttribute *x = new MeiAttribute("xml:id", id);
        this->addAttribute(x);
    }
}

bool mei::MeiElement::hasId() {
    return this->hasAttribute("xml:id");
}

string mei::MeiElement::getName() {
	return this->name;
}

//need a name setter for editing MEI files
void mei::MeiElement::setName(string name) {
	this->name = name;
}

string mei::MeiElement::getNs() {
    return this->ns;
}

void mei::MeiElement::setNs(string ns) {
	this->ns = ns;
}

string mei::MeiElement::getValue() {
	return this->value;
}

string mei::MeiElement::getPrefix() {
    return this->prefix;
}

void mei::MeiElement::setPrefix(string prefix) {
    this->prefix = prefix;
}

void mei::MeiElement::setValue(string value) {
	this->value = value;
}

string mei::MeiElement::getTail() {
	return this->tail;
}

void mei::MeiElement::setTail(string tail) {
    this->tail = tail;
}

vector<MeiAttribute*>& mei::MeiElement::getAttributes() {
	return this->attributes;
}

void mei::MeiElement::setAttributes(vector<MeiAttribute*> attrs) {
    this->attributes = attrs;
}

MeiAttribute* mei::MeiElement::getAttribute(string name) throw (AttributeNotFoundException) {
    
    if(!this->hasAttribute(name)) {
        throw AttributeNotFoundException(name);
    }
    
    for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
        if ((*iter)->getName() == name) {
            return *iter;
        }
    }
    return NULL;
}

string mei::MeiElement::getAttributeValue(string name) throw (AttributeNotFoundException) {
    
    if (!this->hasAttribute(name)) {
        throw AttributeNotFoundException(name);
    }
    
	for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
		if ((*iter)->getName() == name) return (*iter)->getValue();
	}
    return NULL;
}

bool mei::MeiElement::hasAttribute(string name) {
	for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
		if ((*iter)->getName() == name) return true;
	}
	return false;
}

void mei::MeiElement::addAttribute(MeiAttribute *attr) throw (DuplicateAttributeException) {
	for (vector<MeiAttribute*>::iterator i = attributes.begin(); i != attributes.end(); ++i) {
		if ( (*i)->getName() == attr->getName() ) {
			throw DuplicateAttributeException((*i)->getName());
		}
	}
	attributes.push_back(attr);
}

void mei::MeiElement::removeAttribute(string name) {
	vector<MeiAttribute*>::iterator iter = attributes.begin();
	while (iter != attributes.end()) {
		if ((*iter)->getName() == name) {
			iter = attributes.erase(iter);
		}
		else {
			++iter;
		}
	}
}

bool mei::MeiElement::hasParent() {
	return (this->parent != NULL);
}

void mei::MeiElement::setParent(MeiElement *parent) {
	this->parent = parent;
}

void mei::MeiElement::removeParent() {
	this->parent = NULL;
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

vector<mei::MeiElement*> mei::MeiElement::getChildren() {
    return this->children;
}

vector<mei::MeiElement*> mei::MeiElement::getChildrenByName(string name) throw (ChildNotFoundException) {
    if (!this->hasChildren(name)) {
        throw ChildNotFoundException(name);
    }
    vector<mei::MeiElement*> res;
    for (vector<MeiElement*>::iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        if ((*iter)->getName() == name) {
            res.push_back(*iter);
        }
    }
    return res;
}

mei::MeiElement* mei::MeiElement::getChildById(string cid) throw (ChildNotFoundException) {
    for (vector<mei::MeiElement*>::iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        if ((*iter)->getId() == cid) return *iter;
    }
    throw ChildNotFoundException(cid);
}

void mei::MeiElement::deleteAllChildren() {
    for (vector<mei::MeiElement*>::iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        delete *iter;
    }
    this->children.empty();
}

void mei::MeiElement::removeChildren(string cname) {
    vector<MeiElement*>::iterator iter = this->children.begin();
	while (iter != this->children.end()) {
		if((*iter)->getName() == cname) {
			iter = this->children.erase(iter);
		} else {
			++iter;
		}
	}
}

void mei::MeiElement::removeChild(MeiElement * child) {
    vector<MeiElement*>::iterator iter = this->children.begin();
	while (iter != this->children.end()) {
		if(child == *iter) {
			iter = this->children.erase(iter);
		} else {
			++iter;
		}
	}
}

bool mei::MeiElement::hasChildren(string cname) {
    for (vector<MeiElement*>::iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        if((*iter)->getName() == cname) return true;
    }
    return false;
}

bool mei::MeiElement::hasChild(MeiElement * child) {
    for(vector<MeiElement*>::iterator iter = this->children.begin(); iter != this->children.end(); ++iter) {
        if( child == *iter) return true;
    }
    return false;
}

void mei::MeiElement::print() {
	print(0);
}

void mei::MeiElement::print(int level) {
	printf("%*s ", level + (int)getName().length(), getName().c_str());
    
	if (this->getNs().size()>0) {
		printf("%s:%s ", this->getPrefix().c_str(), this->getNs().c_str());
    }
	
    for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter !=attributes.end(); iter++) {
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