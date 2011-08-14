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

MeiElement::MeiElement() {
    this->name_ = "";
	this->value_ = "";
    this->prefix_ = MEI_PREFIX;
    this->ns_ = MEI_NS;
  	this->parent_ = NULL;
}

MeiElement::MeiElement(string _name) {
	this->name_ = _name;
	this->value_ = "";
   	this->parent_ = NULL;
}

MeiElement::MeiElement(string _name, string _value) {
    this->name_ = _name;
    this->value_ = _value;
    this->parent_ = NULL;
}

MeiElement::MeiElement(string _name, string _value, string _prefix, string _ns, MeiElement * _parent) {
	this->name_ = _name;
    this->value_ = _value;
    this->ns_ = _ns;
    this->prefix_ = _prefix;
	this->parent_ = _parent;
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
MeiElement::~MeiElement() {}

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
string MeiElement::getId() {
    return this->id_;
}

void MeiElement::setId(string _id) {
    this->id_ = _id;
    if (this->hasAttribute("xml:id")) {
        this->removeAttribute("xml:id");
        MeiAttribute *x = new MeiAttribute("xml:id", _id);
        this->addAttribute(x);
    }
}

bool MeiElement::hasId() {
    return this->hasAttribute("xml:id");
}

string MeiElement::getName() {
	return this->name_;
}

//need a name setter for editing MEI files
void MeiElement::setName(string _name) {
	this->name_ = _name;
}

string MeiElement::getNs() {
    return this->ns_;
}

void MeiElement::setNs(string _ns) {
	this->ns_ = _ns;
}

string MeiElement::getValue() {
	return this->value_;
}

string MeiElement::getPrefix() {
    return this->prefix_;
};

void MeiElement::setPrefix(string _prefix) {
    this->prefix_ = _prefix;
};

void MeiElement::setValue(string value) {
	this->value_ = value;
}

string MeiElement::getTail() {
	return this->tail_;
}

void MeiElement::setTail(string tail) {
    this->tail_ = tail;
}





vector<MeiAttribute*>& MeiElement::getAttributes() {
	return this->attributes_;
}

void MeiElement::setAttributes(vector<MeiAttribute*> _attrs) {
    this->attributes_ = _attrs;
};

MeiAttribute* MeiElement::getAttribute(string _name) throw (AttributeNotFoundException) {
    
    if(!this->hasAttribute(_name)) {
        throw AttributeNotFoundException(_name);
    }
    
    for (vector<MeiAttribute*>::iterator iter = attributes_.begin(); iter != attributes_.end(); ++iter) {
        if ((*iter)->getName() == _name) {
            return *iter;
        }
    }
};

string MeiElement::getAttributeValue(string _name) throw (AttributeNotFoundException) {
    
    if (!this->hasAttribute(_name)) {
        throw AttributeNotFoundException(_name);
    }
    
	for (vector<MeiAttribute*>::iterator iter = attributes_.begin(); iter != attributes_.end(); ++iter) {
		if ((*iter)->getName() == _name) return (*iter)->getValue();
	}
};

bool MeiElement::hasAttribute(string _name) {
	for (vector<MeiAttribute*>::iterator iter = attributes_.begin(); iter != attributes_.end(); ++iter) {
		if ((*iter)->getName() == _name) return true;
	}
	return false;
};

void MeiElement::addAttribute(MeiAttribute *_attr) throw (DuplicateAttributeException) {
	for (vector<MeiAttribute*>::iterator i = attributes_.begin(); i != attributes_.end(); ++i) {
		if ( (*i)->getName() == _attr->getName() ) {
			throw DuplicateAttributeException((*i)->getName());
		}
	}
	attributes_.push_back(_attr);
};

void MeiElement::removeAttribute(string _name) {
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







bool MeiElement::hasParent() {
	return (parent_ != NULL);
};

void MeiElement::setParent(MeiElement *_parent) {
	parent_ = _parent;
};

void MeiElement::removeParent() {
	parent_ = NULL;
};

MeiElement *MeiElement::getParent() {
	return parent_;
};

/** Working with Children **/

void MeiElement::addChild(MeiElement *child) {
    this->children_.push_back(child);
}

void MeiElement::setChildren(vector<MeiElement*> children) {
    deleteAllChildren();
    this->children_ = children;
}

vector<MeiElement*> MeiElement::getChildren() {
    return this->children_;
}

vector<MeiElement*> MeiElement::getChildrenByName(string name) throw (ChildNotFoundException) {
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

MeiElement* MeiElement::getChildById(string cid) throw (ChildNotFoundException) {
    for (vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        if ((*iter)->getId() == cid) return *iter;
    }
    throw ChildNotFoundException(cid);
}

void MeiElement::deleteAllChildren() {
    for (vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        delete *iter;
    }
    children_.empty();
}

void MeiElement::removeChildren(string cname) {
    vector<MeiElement*>::iterator iter = children_.begin();
	while (iter != this->children_.end()) {
		if((*iter)->getName() == cname) {
			iter = this->children_.erase(iter);
		} else {
			++iter;
		}
	}
}

void MeiElement::removeChild(MeiElement * child) {
    vector<MeiElement*>::iterator iter = children_.begin();
	while (iter != this->children_.end()) {
		if(child == *iter) {
			iter = this->children_.erase(iter);
		} else {
			++iter;
		}
	}
}

bool MeiElement::hasChildren(string cname) {
    for (vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        if((*iter)->getName() == cname) return true;
    }
    return false;
}

bool MeiElement::hasChild(MeiElement * child) {
    for(vector<MeiElement*>::iterator iter = children_.begin(); iter != children_.end(); ++iter) {
        if( child == *iter) return true;
    }
    return false;
}

void MeiElement::print() {
	print(0);
}

void MeiElement::print(int level) {
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