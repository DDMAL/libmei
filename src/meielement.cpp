/*
    Copyright (c) 2011 Mahtab Ghamsari-Esfahani, Jamie Klassen, Alastair Porter, Andrew Hankinson

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

#include "meielement.h"
#include "meiattribute.h"

#include <stdio.h>

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
//MeiFactory::node_map * MeiFactory::nodemap;

BaseMeiElement::BaseMeiElement() {
    this->name_ = "";
	this->value_ = "";
    this->prefix_ = MEI_PREFIX;
    this->ns_ = MEI_NS;
  	this->parent_ = NULL;
}

BaseMeiElement::BaseMeiElement(string _name) {
	this->name_ = _name;
	this->value_ = "";
   	this->parent_ = NULL;
}

BaseMeiElement::BaseMeiElement(string _name, string _value) {
    this->name_ = _name;
    this->value_ = _value;
    this->parent_ = NULL;
}

BaseMeiElement::BaseMeiElement(string _name, string _value, string _prefix, string _ns, MeiElement * _parent) {
	this->name_ = _name;
    this->value_ = _value;
    this->ns_ = _ns;
    this->prefix_ = _prefix;
	this->parent_ = _parent;
}



/*
BaseMeiElement::BaseMeiElement(xmlNode* node) {
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
BaseMeiElement::~BaseMeiElement() {}

//currently fails to compare children vectors
/*
bool BaseMeiElement::operator==(const BaseMeiElement &other) const {
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
string BaseMeiElement::getId() {
    return this->id_;
}

void BaseMeiElement::setId(string _id) {
    this->id_ = _id;
    if (this->hasAttribute("xml:id")) {
        this->removeAttribute("xml:id");
        MeiAttribute *x = new MeiAttribute("xml:id", _id);
        this->addAttribute(x);
    }
}

bool BaseMeiElement::hasId() {
    return this->hasAttribute("xml:id");
}

string BaseMeiElement::getName() {
	return this->name_;
}

//need a name setter for editing MEI files
void BaseMeiElement::setName(string _name) {
	this->name_ = _name;
}

string BaseMeiElement::getNs() {
    return this->ns_;
}

void BaseMeiElement::setNs(string _ns) {
	this->ns_ = _ns;
}

string BaseMeiElement::getValue() {
	return this->value_;
}

string BaseMeiElement::getPrefix() {
    return this->prefix_;
};

void BaseMeiElement::setPrefix(string _prefix) {
    this->prefix_ = _prefix;
};

void BaseMeiElement::setValue(string _value) {
	this->value_ = _value;
}

string BaseMeiElement::getTail() {
	return this->tail_;
}

void BaseMeiElement::setTail(string _tail) {
    this->tail_ = _tail;
}

vector<MeiAttribute*>& BaseMeiElement::getAttributes() {
	return this->attributes_;
}

void BaseMeiElement::setAttributes(vector<MeiAttribute*> _attrs) {
    this->attributes_ = _attrs;
};

MeiAttribute* BaseMeiElement::getAttribute(string _name) throw (AttributeNotFoundException) {
    
    if(!this->hasAttribute(_name)) {
        throw AttributeNotFoundException(_name);
    }
    
    for (vector<MeiAttribute*>::iterator iter = attributes_.begin(); iter != attributes_.end(); ++iter) {
        if ((*iter)->getName() == _name) {
            return *iter;
        }
    }
};

string BaseMeiElement::getAttributeValue(string _name) throw (AttributeNotFoundException) {
    
    if (!this->hasAttribute(_name)) {
        throw AttributeNotFoundException(_name);
    }
    
	for (vector<MeiAttribute*>::iterator iter = attributes_.begin(); iter != attributes_.end(); ++iter) {
		if ((*iter)->getName() == _name) return (*iter)->getValue();
	}
};

bool BaseMeiElement::hasAttribute(string _name) {
	for (vector<MeiAttribute*>::iterator iter = attributes_.begin(); iter != attributes_.end(); ++iter) {
		if ((*iter)->getName() == _name) return true;
	}
	return false;
};

void BaseMeiElement::addAttribute(MeiAttribute *_attr) throw (DuplicateAttributeException) {
	for (vector<MeiAttribute*>::iterator i = attributes_.begin(); i != attributes_.end(); ++i) {
		if ( (*i)->getName() == _attr->getName() ) {
			throw DuplicateAttributeException((*i)->getName());
		}
	}
	attributes_.push_back(_attr);
};

void BaseMeiElement::removeAttribute(string _name) {
	vector<MeiAttribute*>::iterator iter = attributes_.begin();
	while (iter != attributes_.end()) {
		if ((*iter)->getName() == _name) {
			iter = attributes_.erase(iter);
		}
		else {
			++iter;
		}
	}
};

bool BaseMeiElement::hasParent() {
	return (this->parent_ != NULL);
};

void BaseMeiElement::setParent(MeiElement *_parent) {
	this->parent_ = _parent;
};

void BaseMeiElement::removeParent() {
	this->parent_ = NULL;
};

MeiElement* BaseMeiElement::getParent() {
	return this->parent_;
};

/** Working with Children **/

void BaseMeiElement::addChild(MeiElement *child) {
    this->children_.push_back(child);
}

void BaseMeiElement::setChildren(vector<MeiElement*> children) {
    deleteAllChildren();
    this->children_ = children;
}

vector<MeiElement*> BaseMeiElement::getChildren() {
    return this->children_;
}

vector<MeiElement*> BaseMeiElement::getChildrenByName(string name) throw (ChildNotFoundException) {
    if (!this->hasChildren(name)) {
        throw ChildNotFoundException(name);
    }
    vector<MeiElement*> res;
    for (vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        if ((*iter)->getName() == name) {
            res.push_back(*iter);
        }
    }
    return res;
}

MeiElement* BaseMeiElement::getChildById(string cid) throw (ChildNotFoundException) {
    for (vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        if ((*iter)->getId() == cid) return *iter;
    }
    throw ChildNotFoundException(cid);
}

void BaseMeiElement::deleteAllChildren() {
    for (vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        delete *iter;
    }
    this->children_.empty();
}

void BaseMeiElement::removeChildren(string cname) {
    vector<MeiElement*>::iterator iter = children_.begin();
	while (iter != this->children_.end()) {
		if((*iter)->getName() == cname) {
			iter = this->children_.erase(iter);
		} else {
			++iter;
		}
	}
}

void BaseMeiElement::removeChild(MeiElement * child) {
    vector<MeiElement*>::iterator iter = children_.begin();
	while (iter != this->children_.end()) {
		if(child == *iter) {
			iter = this->children_.erase(iter);
		} else {
			++iter;
		}
	}
}

bool BaseMeiElement::hasChildren(string cname) {
    for (vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        if((*iter)->getName() == cname) return true;
    }
    return false;
}

bool BaseMeiElement::hasChild(MeiElement * child) {
    for(vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        if( child == *iter) return true;
    }
    return false;
}

void BaseMeiElement::print() {
	print(0);
}

void BaseMeiElement::print(int level) {
	printf("%*s ", level + (int)getName().length(), getName().c_str());
    
	if (this->getNs().size()>0) {
		printf("%s:%s ", this->getPrefix().c_str(), this->getNs().c_str());
    }
	
    for (vector<MeiAttribute*>::iterator iter = attributes_.begin(); iter !=attributes_.end(); iter++) {
        printf("%s=%s ", (*iter)->getName().c_str(), (*iter)->getValue().c_str());
    }
    
    printf("\n");
        
	vector<MeiElement*>::iterator iter = children_.begin();
	while (iter != children_.end()) {
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