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


MeiElement::MeiElement(string name) {
	this->name = name;
	this->parent = NULL;
	this->zone = NULL;
	this->value = "";
}

MeiElement::MeiElement(string name, MeiNs ns) {
    this->name = name;
    this->ns = ns;
	this->parent = NULL;
	this->zone = NULL;
	this->value = "";
}

MeiElement::~MeiElement() {}

//currently fails to compare children vectors
bool MeiElement::operator==(const MeiElement &other) const {
	if (!this->children.empty() && !other.children.empty()) {
		return (this->name == other.name && this->parent == other.parent && this->id == other.id 
				&& this->value == other.value && this->tail == other.tail && this->attributes == other.attributes 
				/*&& this->children == other.children self-referentiality?*/ && this->ns.prefix == other.ns.prefix && this->ns.href == other.ns.href);
	} else if (this->children.empty() && other.children.empty()) {
		return (this->name == other.name && this->parent == other.parent && this->id == other.id 
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

string MeiElement::getId() {
    return this->id;
}

// TODO: when we get namespaces working properly, this needs to be fixed
void MeiElement::setId(string id) {
    MeiAttribute xmlid = MeiAttribute("xml:id", id);
    this->addAttribute(xmlid);
    this->id = id;
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

vector<MeiAttribute>& MeiElement::getAttributes() {
	return this->attributes;
}

MeiAttribute* MeiElement::getAttribute(string name) {
	for (vector<MeiAttribute>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
		if (iter->getName() == name) return &(*iter);
	}
	return NULL;
}

bool MeiElement::hasAttribute(string name) {
	for (vector<MeiAttribute>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
		if (iter->getName() == name) return true;
	}
	return false;
}

void MeiElement::addAttribute(MeiAttribute attribute) {
	attributes.push_back(attribute);
}

void MeiElement::removeAttribute(string attributeName) {
	vector<MeiAttribute>::iterator iter = attributes.begin();
	while (iter != attributes.end()) {
		if (iter->getName() == attributeName) {
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

void MeiElement::setParent(MeiElement &_parent) {
	parent = &_parent;
}

void MeiElement::removeParent() {
	parent = NULL;
}

MeiElement &MeiElement::getParent() {
	return *parent;
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

void MeiElement::addChild(MeiElement *c) {
	c->setParent(*this);
	children.push_back(c);
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

MeiAttribute* MeiElement::getFacs() {
    MeiAttribute* facs = this->getAttribute("facs");
    return facs;
}

void MeiElement::setFacs(string uuid) {
	if (this->getAttribute("facs") == NULL) {
		MeiAttribute facs = MeiAttribute("facs", uuid);
		this->addAttribute(facs);
	} else {
		this->getAttribute("facs")->setValue(uuid);
	}
}

MeiElement* MeiElement::getZone() {
	return zone;
}

void MeiElement::setZone(MeiElement* element) {
	this->zone = element;
}

void MeiElement::print() {
	print(0);
}

void MeiElement::print(int level) {
	printf("%*s ", level + (int)getName().length(), getName().c_str());
    
	if (ns.href.size()>0) {
		printf("%s:%s ", ns.prefix.c_str(), ns.href.c_str());
    }
	
    for (vector<MeiAttribute>::iterator iter = attributes.begin(); iter !=attributes.end(); iter++) {
        printf("%s=%s ", (*iter).getName().c_str(), (*iter).getValue().c_str());
    }
    
    printf("\n");
        
	vector<MeiElement*>::iterator iter = children.begin();
	while (iter != children.end()) {
		(*iter)->print(level+2);
		iter++;
	}
}
