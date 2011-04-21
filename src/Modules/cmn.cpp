/*
 *  cmn.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "cmn.h"

Arpeg::Arpeg(): MeiElement("arpeg") {
}

Beam::Beam(): MeiElement("beam") {
}

// Need to create another exception that takes care of children not existing to be applied here instead of the Attribute one
MeiElement Beam::getFirstChild() throw (ChildrenNotFoundException) {
    vector<MeiElement> children = getChildren();
    if (children.size() > 0) {
        return children[0];
    } else {
        throw ChildrenNotFoundException();
    }
}

MeiElement Beam::getLastChild() throw (ChildrenNotFoundException) {
    vector<MeiElement> children = getChildren();
    if (children.size() > 0) {
        int ind = children.size();
        return children[ind-1];
    } else {
        throw ChildrenNotFoundException();
    }
}

BeamSpan::BeamSpan(): MeiElement("beamspan") {
}

BeatRpt::BeatRpt(): MeiElement("beatrpt") {
}

Bend::Bend(): MeiElement("bend") {
}

Breath::Breath(): MeiElement("breath") {
}

BtRem::BtRem(): MeiElement("bterm") {
}

Fermata::Fermata(): MeiElement("fermata") {
}

Gliss::Gliss(): MeiElement("gliss") {
}

HairPin::HairPin(): MeiElement("hairpin") {
}

HalfMRpt::HalfMRpt(): MeiElement("halfmrpt") {
}

HarpPedal::HarpPedal(): MeiElement("harppedal") {
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

MRest::MRest(): MeiElement("mrest") {
}

MRpt::MRpt(): MeiElement("mrpt") {
}

MRpt2::MRpt2(): MeiElement("mrpt2") {
}

MSpace::MSpace(): MeiElement("mspace") {
}

MultiRest::MultiRest(): MeiElement("multirest") {
}

MultiRpt::MultiRpt(): MeiElement("multirpt") {
}

Octave::Octave(): MeiElement("octave") {
}

Ossia::Ossia(): MeiElement("ossia") {
}

Pedal::Pedal(): MeiElement("pedal") {
}

Reh::Reh(): MeiElement("reh") {
}

Slur::Slur(): MeiElement("slur") {
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

TupletSpan::TupletSpan(): MeiElement("tupletspan") {
}