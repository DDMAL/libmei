/*
 *  meielement.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/1/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "meielement.h"

#include <iostream>
#include <string>


MeiElement::MeiElement(string name) {
	this->name = name;	
}

string MeiElement::getName() {
	return name;
}

