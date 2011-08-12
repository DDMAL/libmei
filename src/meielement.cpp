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
#include "sharedmixins.h"

#include <stdio.h>

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
MeiFactory::node_map * MeiFactory::nodemap;
MeiFactory::default_map * MeiFactory::defaultmap;

MeiElement::MeiElement() {
	this->parent = NULL;
	this->value = "";
}

MeiElement::MeiElement(string name) {
	this->name = name;
	this->parent = NULL;
	this->value = "";
}

MeiElement::MeiElement(string name, MeiNs ns) {
    this->ns = ns;
	this->name = name;
	this->parent = NULL;
	this->value = "";
}

MeiElement::MeiElement(xmlNode* node) {
	parent = NULL;
	value = "";
	xmlNode* curnode = NULL;
    xmlAttr* curattr = NULL;
    const xmlChar* attrname;
	const xmlChar* attrprefix;
    xmlNode* attrvalue = NULL;
    xmlNs* xmlns = NULL;
	
	if (node->type == XML_ELEMENT_NODE) {
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
		this->name = (const char*)node->name;
		
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

MeiElement::~MeiElement() {}

//currently fails to compare children vectors
bool MeiElement::operator==(const MeiElement &other) const {
	if (!this->children.empty() && !other.children.empty()) {
		return (this->name == other.name && this->parent == other.parent
				&& this->value == other.value && this->tail == other.tail && this->attributes == other.attributes 
				/*&& this->children == other.children self-referentiality?*/ && this->ns.prefix == other.ns.prefix && this->ns.href == other.ns.href);
	} else if (this->children.empty() && other.children.empty()) {
		return (this->name == other.name && this->parent == other.parent
				&& this->value == other.value && this->tail == other.tail && this->attributes == other.attributes 
				&& this->ns.prefix == other.ns.prefix && this->ns.href == other.ns.href);
	} else {
		return false;
	}
		
}

string MeiElement::getName() {
	return this->name;
}

//need a name setter for editing MEI files
void MeiElement::setName(string _name) {
	this->name = _name;
}

MeiNs MeiElement::getNs() {
    return this->ns;
}

void MeiElement::setNs(MeiNs ns) {
	this->ns = ns;
}

string MeiElement::getValue() {
	return this->value;
}

void MeiElement::setValue(string value) {
	this->value = value;
}

string MeiElement::getTail() {
	return this->tail;
}

void MeiElement::setTail(string tail) {
    this->tail = tail;
}

vector<MeiAttribute*>& MeiElement::getAttributes() {
	return this->attributes;
}

MeiAttribute* MeiElement::getAttribute(string name) {
	for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
		if ((*iter)->getName() == name) return (*iter);
	}
	return NULL;
}

bool MeiElement::hasAttribute(string name) {
	for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
		if ((*iter)->getName() == name) return true;
	}
	return false;
}

void MeiElement::addAttribute(MeiAttribute *attribute) throw (DuplicateAttributeException) {
	for (vector<MeiAttribute*>::iterator i = attributes.begin(); i != attributes.end(); ++i) {
		if ( (*i)->getName() == attribute->getName() ) {
			throw DuplicateAttributeException((*i)->getName());
		}
	}
	attributes.push_back(attribute);
}

void MeiElement::removeAttribute(string attributeName) {
	vector<MeiAttribute*>::iterator iter = attributes.begin();
	while (iter != attributes.end()) {
		if ((*iter)->getName() == attributeName) {
			iter = attributes.erase(iter);
		}
		else {
			++iter;
		}
	}
}

bool MeiElement::hasParent() {
	return (parent != NULL);
}

void MeiElement::setParent(MeiElement *_parent) {
	parent = _parent;
}

void MeiElement::removeParent() {
	parent = NULL;
}

MeiElement *MeiElement::getParent() {
	return parent;
}

vector<MeiElement*> &MeiElement::getChildren() {
	return this->children;
}

/*  
    we should create a new method, hasChildElement or something like that, to check for a
    specific instance of a child.
*/
bool MeiElement::hasChild(string childName) {
	for (vector<MeiElement*>::iterator iter = this->children.begin(); iter != children.end(); ++iter) {
		if ((*iter)->getName() == childName) return true;
	}
	return false;	
}

/* this has been renamed to *removeChildren*, since it will remove *all* children 
	that match the name childName.
*/
void MeiElement::removeChildren(string childName) {
	vector<MeiElement*>::iterator iter = children.begin();
	while (iter != this->children.end()) {
		if((*iter)->getName() == childName) {
			iter = this->children.erase(iter);
		} else {
			++iter;
		}
	}
}

/* removes one specific element from the children array.
*/
void MeiElement::removeChild(MeiElement *c) {
	vector<MeiElement*>::iterator iter = children.begin();
	while (iter != this->children.end()) {
		if((*iter) == c) {
			c->removeParent();
			iter = children.erase(iter);
		} else {
			++iter;
		}
	}	
}

void MeiElement::addChildren(vector<MeiElement*> c) {
    for (vector<MeiElement*>::iterator i = c.begin(); i != c.end(); i++) {
        this->addChild(*i);
    }
}

void MeiElement::print() {
	print(0);
}

void MeiElement::print(int level) {
	printf("%*s ", level + (int)getName().length(), getName().c_str());
    
	if (ns.href.size()>0) {
		printf("%s:%s ", ns.prefix.c_str(), ns.href.c_str());
    }
	
    for (vector<MeiAttribute*>::iterator iter = attributes.begin(); iter !=attributes.end(); iter++) {
        printf("%s=%s ", (*iter)->getName().c_str(), (*iter)->getValue().c_str());
    }
    
    printf("\n");
        
	vector<MeiElement*>::iterator iter = children.begin();
	while (iter != children.end()) {
		(*iter)->print(level+2);
		iter++;
	}
}

vector<MeiElement*> MeiElement::getChildrenByName(string _name) {
	vector<MeiElement*> result;
	for (vector<MeiElement*>::iterator i = children.begin(); i != children.end(); ++i) {
		if ((*i)->getName() == _name) {
			result.push_back(*i);
		}
	}
	return result;
}

void MeiElement::deleteChildren() {
	for (vector<MeiElement*>::iterator i = children.begin(); i != children.end(); ++i) {
		delete (*i);
	}
	children.clear();
}

vector<MeiElement*> MeiElement::getDescendantsByName(string _name) {
	vector<MeiElement*> result(0);
	for (vector<MeiElement*>::iterator i = children.begin(); i != children.end(); ++i) {
		if ((*i)->getName() == _name) {
			result.push_back(*i);
		}
		for (vector<MeiElement*>::iterator it = (*i)->getDescendantsByName(_name).begin(); it != (*i)->getDescendantsByName(_name).end(); ++it) {
			result.push_back(*it);
		}
	}
	return result;
}
	

MeiElement* MeiElement::getDescendantById(string _uuid) {
	vector<MeiElement*>::iterator i = children.begin();
	while ( i != children.end() ) {
		try {
			if (dynamic_cast<CommonMixIn*>(*i)->getId() == _uuid) {
				return (*i);
			}
		} catch (bad_cast) {} catch (AttributeNotFoundException) {}
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
