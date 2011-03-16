/*
 *  shared.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/14/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "shared.h"
#include "exceptions.h"

Note::Note(): MeiElement("note") {
}

string Note::getPitchName() throw (invalidAttribute) {
	MeiAttribute* pitchName = getAttribute("pname");
	if (pitchName!=NULL) {
		return pitchName->getName();
	} else {
		throw invalidAttribute();
	}
}

void Note::setPitchName(string pitchname) {
	MeiAttribute pitchName = MeiAttribute("pname", pitchname);
}

Clef::Clef(): MeiElement("clef") {
}

KeySig::KeySig(): MeiElement("clef") {
}