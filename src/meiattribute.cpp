/*
 *  meiattributes.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/4/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "meiattribute.h"

#include <iostream>
#include <string>

MeiAttribute::MeiAttribute(string attrname, string attrvalue) {
	this->name = attrname;
	this->value = attrvalue;
	this->prefix = "";
}

bool MeiAttribute::operator==(const MeiAttribute &other) const {
	return (this->name == other.name && this->value == other.value && this->prefix == other.prefix);
}

string MeiAttribute::getName() {
	return this->name;
}

void MeiAttribute::setName(string attrname)
{
    this->name = attrname;
}

string MeiAttribute::getValue() {
	return this->value;
}

void MeiAttribute::setValue(string attrvalue) {
	this->value = attrvalue;
}

string MeiAttribute::getPrefix() {
    return this->prefix;
}

void MeiAttribute::setPrefix(string prfx) {
    this->prefix = prfx;
}


