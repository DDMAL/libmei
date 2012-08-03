//
//  meixml.cpp
//  libmei
//
//  Created by Andrew Hankinson on 12-05-28.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "meixml.h"
#include <string>

using std::string;

mei::XmlProcessingInstruction::XmlProcessingInstruction(string name, string value) {
    this->name = name;
    this->value = value;
}

string mei::XmlProcessingInstruction::getName() {
    return this->name;
}

string mei::XmlProcessingInstruction::getValue() {
    return this->value;
}

mei::XmlProcessingInstruction::~XmlProcessingInstruction() {
}

