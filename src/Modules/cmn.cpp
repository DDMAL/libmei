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


#include "cmn.h"

Arpeg::Arpeg(): MeiElement("arpeg") {
}

Beam::Beam(): MeiElement("beam") {
}

// Need to create another exception that takes care of children not existing to be applied here instead of the Attribute one
MeiElement Beam::getFirstChild() throw (ChildrenNotFoundException) {
    vector<MeiElement*> children = getChildren();
    if (children.size() > 0) {
        return *children[0];
    } else {
        throw ChildrenNotFoundException();
    }
}

MeiElement Beam::getLastChild() throw (ChildrenNotFoundException) {
    vector<MeiElement*> children = getChildren();
    if (children.size() > 0) {
        int ind = children.size();
        return *children[ind-1];
    } else {
        throw ChildrenNotFoundException();
    }
}

BeamSpan::BeamSpan(): MeiElement("beamSpan") {
}

BeatRpt::BeatRpt(): MeiElement("beatRpt") {
}

Bend::Bend(): MeiElement("bend") {
}

Breath::Breath(): MeiElement("breath") {
}

BTrem::BTrem(): MeiElement("bTrem") {
}

Fermata::Fermata(): MeiElement("fermata") {
}

Gliss::Gliss(): MeiElement("gliss") {
}

HairPin::HairPin(): MeiElement("hairpin") {
}

HalfMRpt::HalfMRpt(): MeiElement("halfmRpt") {
}

HarpPedal::HarpPedal(): MeiElement("harpPedal") {
}

Measure::Measure(): MeiElement("measure") {
}

string Measure::getMeasureNumber() throw (AttributeNotFoundException) {
    MeiAttribute* measureNum = getAttribute("n");
    if (measureNum != NULL) {
        return measureNum->getValue();
    } else {
        throw AttributeNotFoundException("n");
    }
}

void Measure::setMeasureNumber(string measurenumber) {
    MeiAttribute measureNum = MeiAttribute("n", measurenumber);
    addAttribute(measureNum);
}

string Measure::getBarline() throw (AttributeNotFoundException) {
    MeiAttribute* barLine = getAttribute("right");
    if (barLine != NULL) {
        return barLine->getValue();
    } else {
        throw AttributeNotFoundException("right");
    }
}

void Measure::setBarline(string barline) {
    MeiAttribute Barline = MeiAttribute("right", barline);
    addAttribute(Barline);
}

bool Measure::hasBarline() {
    return hasAttribute("right");
}

bool Measure::isRepeated() {
    if (hasAttribute("right")) {
        MeiAttribute* measureAttr = getAttribute("right");
        if (measureAttr->getValue() == "rptstart" || measureAttr->getValue() == "rptend" || measureAttr->getValue() == "rptboth") {
            return true;
        }
    }
    return false;
}

MRest::MRest(): MeiElement("mRest") {
}

MRpt::MRpt(): MeiElement("mRpt") {
}

MRpt2::MRpt2(): MeiElement("mRpt2") {
}

MSpace::MSpace(): MeiElement("mRpace") {
}

MultiRest::MultiRest(): MeiElement("multiRest") {
}

MultiRpt::MultiRpt(): MeiElement("multiRpt") {
}

Octave::Octave(): MeiElement("octave") {
}

Ossia::Ossia(): MeiElement("ossia") {
}

Pedal::Pedal(): MeiElement("pedal") {
}

Reh::Reh(): MeiElement("reh") {
}

Slur::Slur() : MeiElement("slur") {
}

string Slur::getStartId() throw (AttributeNotFoundException) {
    MeiAttribute* startID = getAttribute("startid");
    if (startID != NULL) {
        return startID->getValue();
    } else {
        throw AttributeNotFoundException("startid");
    }
}

void Slur::setStartId(string stid) {
    MeiAttribute startID = MeiAttribute("startid", stid);
    addAttribute(startID);
}

string Slur::getEndId() throw (AttributeNotFoundException) {
    MeiAttribute* endID = getAttribute("endid");
    if (endID != NULL) {
        return endID->getValue();
    } else {
        throw AttributeNotFoundException("endid");
    }
}

void Slur::setEndId(string eid) {
    MeiAttribute endID = MeiAttribute("endid", eid);
    addAttribute(endID);
}

string Slur::getStaff() throw (AttributeNotFoundException) {
    MeiAttribute* staFF = getAttribute("staff");
    if (staFF != NULL) {
        return staFF->getValue();
    } else {
        throw AttributeNotFoundException("staff");
    }
}

void Slur::setStaff(string staff) {
    MeiAttribute staFF = MeiAttribute("staff", staff);
    addAttribute(staFF);
}

Tie::Tie(): MeiElement("tie") {
}

string Tie::getStartId() throw (AttributeNotFoundException) {
    MeiAttribute* startID = getAttribute("startid");
    if (startID != NULL) {
        return startID->getValue();
    } else {
        throw AttributeNotFoundException("startid");
    }
}

void Tie::setStartId(string stid) {
    MeiAttribute startID = MeiAttribute("startid", stid);
    addAttribute(startID);
}

string Tie::getEndId() throw (AttributeNotFoundException) {
    MeiAttribute* endID = getAttribute("endid");
    if (endID != NULL) {
        return endID->getValue();
    } else {
        throw AttributeNotFoundException("endid");
    }
}

void Tie::setEndId(string eid) {
    MeiAttribute endID = MeiAttribute("endid", eid);
    addAttribute(endID);
}

string Tie::getStaff() throw (AttributeNotFoundException) {
    MeiAttribute* staFF = getAttribute("staff");
    if (staFF != NULL) {
        return staFF->getValue();
    } else {
        throw AttributeNotFoundException("staff");
    }
}

void Tie::setStaff(string staff) {
    MeiAttribute staFF = MeiAttribute("staff", staff);
    addAttribute(staFF);
}

Tuplet::Tuplet(): MeiElement("tuplet") {
}

TupletSpan::TupletSpan(): MeiElement("tupletSpan") {
}