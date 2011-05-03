/*
 *  cmnornaments.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
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