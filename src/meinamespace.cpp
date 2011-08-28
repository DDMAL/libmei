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

mei::MeiNamespace::MeiNamespace(string prefix, string href) {
    this->prefix = prefix;
    this->href = href;
}

mei::MeiNamespace::~MeiNamespace() {
}

string mei::MeiNamespace::getHref() {
    return this->href;
}

string mei::MeiNamespace::getPrefix() {
    return this->prefix;
}
