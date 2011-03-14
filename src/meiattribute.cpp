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

MeiAttribute::MeiAttribute(string name, string value) {
	this->name = name;
	this->value = value;
	
}

string MeiAttribute::getName() {
	return name;
}

string MeiAttribute::getValue() {
	return value;
}
