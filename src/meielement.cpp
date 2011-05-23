/*
 *  meielement.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/1/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
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
}

MeiElement::MeiElement(string name, MeiNs ns) {
    this->name = name;
    this->ns = ns;
}


// name should always be set at instantiation, so we don't need an explicit setter here.
string MeiElement::getName() {
	return this->name;
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

vector<MeiElement> &MeiElement::getChildren() {
	return this->children;
}

/*  
    we should create a new method, hasChildElement or something like that, to check for a
    specific instance of a child.
*/
bool MeiElement::hasChild(string childName) {
	for (vector<MeiElement>::iterator iter = this->children.begin(); iter != children.end(); ++iter) {
		if (iter->getName() == childName) return true;
	}
	return false;	
}

void MeiElement::addChild(MeiElement c) {
	this->children.push_back(c);
}

/* this has been renamed to *removeChildren*, since it will remove *all* children 
	that match the name childName.
*/
void MeiElement::removeChildren(string childName) {
	vector<MeiElement>::iterator iter = children.begin();
	while (iter != this->children.end()) {
		if(iter->getName() == childName) {
			iter = this->children.erase(iter);
		} else {
			++iter;
		}
	}
}

/* removes one specific element from the children array.
	This needs help to actually work.
*/
//void MeiElement::removeChild(MeiElement c) {
//	vector<MeiElement>::iterator iter = children.begin();
//	while (iter != this->children.end()) {
//		if((*iter) === c) {
//			iter = this->children.erase(iter);
//		} else {
//			++iter;
//		}
//	}	
//}

void MeiElement::addChildren(vector<MeiElement> c) {
    for (unsigned int i=0; i < c.size(); i++) {
        this->children.push_back(c[i]);
    }
}

MeiAttribute* MeiElement::getFacs() {
    MeiAttribute* facs = this->getAttribute("facs");
    return facs;
}

void MeiElement::setFacs(string uuid) {
    MeiAttribute facs = MeiAttribute("facs", uuid);
    this->addAttribute(facs);
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
        
	vector<MeiElement>::iterator iter = children.begin();
	while (iter != children.end()) {
		(*iter).print(level+2);
		iter++;
	}
}
