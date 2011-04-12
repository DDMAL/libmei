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

string MeiElement::getName() {
	return this->name;
}

string MeiElement::getValue() {
	return this->value;
}

string MeiElement::getTail() {
	return this->tail;
}

void MeiElement::setValue(string value) {
	this->value = value;
}

vector<MeiAttribute> MeiElement::getAttributes() {
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

vector<MeiElement> MeiElement::getChildren() {
	return this->children;
}

/* We need to discuss this method. Calling meiCompare seems like 
	it's a bad idea, since it obscures what's going on (just comparing the names).
 
	If we want to really check if an element has a *specific* instance of a child, 
    we should create a new method, hasChildElement or something like that.
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

// Temporarily use this method to compare MeiElements, to be later replaced by an overloaded == operator
//bool MeiElement::meiCompare(MeiElement element1, MeiElement element2) {
//	if(element1.getName() == element2.getName()) return true;
//	else return false;
//}

void MeiElement::print() {
	print(0);
}

void MeiElement::print(int level) {
	printf("%*s ", level + (int)getName().length(), getName().c_str());
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
