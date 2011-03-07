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

#include <iostream>
#include <string>
#include <vector>

using namespace std;


MeiElement::MeiElement(string name) {
	this->name = name;	
}

string MeiElement::getName() {
	return name;
}

string MeiElement::getValue() {
	return value; 
}

string MeiElement::getTail() {
	return tail; 
}

void MeiElement::setValue(string value) {
	this->value = value; 
}

vector<MeiAttribute> MeiElement::getAttributes() {
	return attributes;       
}

void MeiElement::addAttribute(MeiAttribute attribute) {
	attributes.push_back(attribute); 
}

void MeiElement::removeAttribute(string attributeName) {
	for (vector<MeiAttribute>::iterator iter = attributes.begin(); iter != attributes.end(); ++iter) {
			if ((*iter).getName() == attributeName) attributes.erase(iter);
	}
}

void MeiElement::addChild(MeiElement child) {
	children.push_back(child);
}


