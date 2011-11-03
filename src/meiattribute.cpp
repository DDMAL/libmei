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
#include "meinamespace.h"
#include "meielement.h"

#include <string>

using std::string;
using mei::MeiNamespace;
using mei::MeiElement;

mei::MeiAttribute::MeiAttribute(string attrname, string attrvalue) {
    this->name = attrname;
    this->value = attrvalue;
    this->ns = NULL;
    this->element = NULL;
}

mei::MeiAttribute::MeiAttribute(MeiNamespace *ns, string attrname, string attrvalue) {
    this->name = attrname;
    this->value = attrvalue;
    this->ns = ns;
    this->element = NULL;
}

bool mei::MeiAttribute::operator==(const MeiAttribute &other) const {
    return (this->name == other.name &&
            this->value == other.value &&
            this->ns == other.ns);
}

string mei::MeiAttribute::getName() {
    return this->name;
}

string mei::MeiAttribute::getValue() {
    return this->value;
}

void mei::MeiAttribute::setValue(string attrvalue) {
    this->value = attrvalue;
}

MeiElement* mei::MeiAttribute::getElement() {
    return this->element;
}

void mei::MeiAttribute::setElement(MeiElement *el) {
    this->element = el;
}

bool mei::MeiAttribute::hasNamespace() {
    return this->ns != NULL;
}

MeiNamespace* mei::MeiAttribute::getNamespace() {
    return this->ns;
}
