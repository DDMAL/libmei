//
//  MeiNamespace.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-22.
//  Copyright 2011 McGill University. All rights reserved.
//

#include "meinamespace.h"

#include <string>

using std::string;

mei::MeiNamespace::MeiNamespace() {
}

mei::MeiNamespace::~MeiNamespace() {
}

string mei::MeiNamespace::getHref() {
    return this->href;
}

void mei::MeiNamespace::setHref(string href) {
    this->href = href;
}

string mei::MeiNamespace::getPrefix() {
    return this->prefix;
}

void mei::MeiNamespace::setPrefix(string prefix) {
    this->prefix = prefix;
}
