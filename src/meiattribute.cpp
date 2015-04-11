#include "meiattribute.h"
#include "meielement.h"

#include <string>

using std::string;
using mei::MeiElement;

mei::MeiAttribute::MeiAttribute(string attrname, string attrvalue) {
    this->name = attrname;
    this->value = attrvalue;
    this->element = NULL;
}

bool mei::MeiAttribute::operator==(const MeiAttribute &other) const {
    return (this->name == other.name &&
            this->value == other.value);
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