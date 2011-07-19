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
REGISTER_DEFINITION(Arpeg,"arpeg");

Beam::Beam(): MeiElement("beam") {
}
REGISTER_DEFINITION(Beam,"beam");

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
REGISTER_DEFINITION(BeamSpan,"beamSpan");

BeatRpt::BeatRpt(): MeiElement("beatRpt") {
}
REGISTER_DEFINITION(BeatRpt,"beatRpt");

Bend::Bend(): MeiElement("bend") {
}
REGISTER_DEFINITION(Bend,"bend");

Breath::Breath(): MeiElement("breath") {
}
REGISTER_DEFINITION(Breath,"breath");

BTrem::BTrem(): MeiElement("bTrem") {
}
REGISTER_DEFINITION(BTrem,"bTrem");

Fermata::Fermata(): MeiElement("fermata") {
}
REGISTER_DEFINITION(Fermata,"fermata");

Gliss::Gliss(): MeiElement("gliss") {
}
REGISTER_DEFINITION(Gliss,"gliss");

HairPin::HairPin(): MeiElement("hairpin") {
}
REGISTER_DEFINITION(HairPin,"hairpin");

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
    MeiAttribute *measureNum = getAttribute("n");
	if (measureNum) {
		measureNum->setValue(measurenumber);
	} else {
		measureNum = new MeiAttribute("n", measurenumber);
		addAttribute(measureNum);
	}
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
    MeiAttribute *Barline = getAttribute("right");
	if (Barline) {
		Barline->setValue(barline);
	} else {
		Barline = new MeiAttribute("right", barline);
		addAttribute(Barline);
	}
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

Tie::Tie(): MeiElement("tie") {
}

Tuplet::Tuplet(): MeiElement("tuplet") {
}

TupletSpan::TupletSpan(): MeiElement("tupletSpan") {
}