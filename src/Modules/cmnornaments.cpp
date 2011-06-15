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


#include "cmnornaments.h"

Mordent::Mordent(): MeiElement("mordent") {
}

string Mordent::getTimeStamp() throw(AttributeNotFoundException) {
    MeiAttribute* Tstamp = getAttribute("tstamp");
    if (Tstamp != NULL) {
        return Tstamp->getValue();
    } else {
        throw AttributeNotFoundException("tstamp");
    }
}

void Mordent::setTimeStamp(string tmstp) {
    MeiAttribute Tstamp = MeiAttribute("tstamp", tmstp);
    addAttribute(Tstamp);
}

string Mordent::getPlace() throw(AttributeNotFoundException) {
    MeiAttribute* Place = getAttribute("place");
    if (Place != NULL) {
        return Place->getValue();
    } else {
        throw AttributeNotFoundException("place");
    }
}

void Mordent::setPlace(string place) {
    MeiAttribute Place = MeiAttribute("place", place);
    addAttribute(Place);
}

string Mordent::getForm() throw(AttributeNotFoundException) {
    MeiAttribute* Form = getAttribute("form");
    if (Form != NULL) {
        return Form->getValue();
    } else {
        throw AttributeNotFoundException("form");
    }
}

void Mordent::setForm(string form) {
    MeiAttribute Form = MeiAttribute("form", form);
    addAttribute(Form);
}

string Mordent::getStaff() throw(AttributeNotFoundException) {
    MeiAttribute* Staff1 = getAttribute("staff");
    if (Staff1 != NULL) {
        return Staff1->getValue();
    } else {
        throw AttributeNotFoundException("staff");
    }
}

void Mordent::setStaff(string staff) {
    MeiAttribute Staff1 = MeiAttribute("staff", staff);
    addAttribute(Staff1);
}

Trill::Trill(): MeiElement("trill") {
}

Turn::Turn(): MeiElement("turn") {
}