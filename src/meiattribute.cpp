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


#include "meiattribute.h"

#include <string>

using std::string;

mei::MeiAttribute::MeiAttribute(string attrname, string attrvalue) {
    this->name = attrname;
    this->value = attrvalue;
    this->prefix = "";
    this->href = "";
}

bool mei::MeiAttribute::operator==(const MeiAttribute &other) const {
    return (this->name == other.name &&
            this->value == other.value &&
            this->prefix == other.prefix && 
            this->href == other.href);
}

string mei::MeiAttribute::getName() {
    return this->name;
}

void mei::MeiAttribute::setName(string attrname) {
    this->name = attrname;
}

string mei::MeiAttribute::getValue() {
    return this->value;
}

void mei::MeiAttribute::setValue(string attrvalue) {
    this->value = attrvalue;
}

string mei::MeiAttribute::getPrefix() {
    return this->prefix;
}

void mei::MeiAttribute::setPrefix(string prfx) {
    this->prefix = prfx;
}

bool mei::MeiAttribute::hasPrefix() {
    if (this->prefix != "") {
        return true;   
    } else {
        return false;
    }
}

string mei::MeiAttribute::getHref() {
    return this->href;
}

void mei::MeiAttribute::setHref(string href) {
    this->href = href;
}

bool mei::MeiAttribute::hasHref() {
    if (this->href != "") {
        return true;   
    } else {
        return false;
    }
}


