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

#include <stdio.h>
#include <stdlib.h>

#include "types.h"

/* DurationElement */

DurationElement::DurationElement() {
	dur = NULL;
	dots = NULL;
}

int DurationElement::getDuration() throw (AttributeNotFoundException) {
	if (dur) {
		return atoi(dur->getValue().c_str());
	} else {
		MeiAttribute *durattr = getAttribute("dur");
		if (durattr) {
			dur = durattr;
			return atoi(dur->getValue().c_str());
		} else {
			throw AttributeNotFoundException("dur");
		}
	}
}

void DurationElement::setDuration(int duration) {
	char buf[36];
	snprintf(buf, 36, "%d", duration);
	if (dur) {
		dur->setValue(string(buf));
	} else {
		MeiAttribute *durattr = getAttribute("dur");
		if (durattr) {
			dur = durattr;
			dur->setValue(string(buf));
		} else {
			dur = new MeiAttribute("dur",string(buf));
			addAttribute(dur);
		}
	}
}

int DurationElement::getDots() throw (AttributeNotFoundException) {
	if (dots) {
		return atoi(dots->getValue().c_str());
	} else {
		MeiAttribute *dotsattr = getAttribute("dots");
		if (dotsattr) {
			dots = dotsattr;
			return atoi(dots->getValue().c_str());
		} else {
			throw AttributeNotFoundException("dots");
		}
	}
}

void DurationElement::setDots(int ndots) {
	char buf[36];
	snprintf(buf, 36, "%d", ndots);
	if (dots) {
		dots->setValue(string(buf));
	} else {
		MeiAttribute *dotsattr = getAttribute("dots");
		if (dotsattr) {
			dots = dotsattr;
			dots->setValue(string(buf));
		} else {
			dots = new MeiAttribute("dots",string(buf));
			addAttribute(dots);
		}
	}
}

bool DurationElement::isDotted() {
	if (dots || hasChild("dot")) { //should probably be hasDescendant
		return true;
	} else {
		MeiAttribute* dotsattr = getAttribute("dots");
		if (dotsattr) {
			dots = dotsattr;
			return true;
		} else {
			return false;
		}
	}
}

/* PitchedElement */

PitchedElement::PitchedElement() {
	pName = NULL;
	oct = NULL;
	accid = NULL;
	accidentals = NULL;
}

string PitchedElement::getPitchName() throw (AttributeNotFoundException) {
	if (pName) {
		return pName->getValue();
	} else {
		MeiAttribute *pnameattr = getAttribute("pname");
		if (pnameattr) {
			pName = pnameattr;
			return pName->getValue();
		} else {
			throw AttributeNotFoundException("pname");
		}
	}
}

void PitchedElement::setPitchName(string pname) {
	if (pName) {
		pName->setValue(pname);
	} else {
		MeiAttribute *pnameattr = getAttribute("pname");
		if (pnameattr) {
			pName = pnameattr;
			pName->setValue(pname);
		} else {
			pName = new MeiAttribute("pname",pname);
			addAttribute(pName);
		}
	}
}

int PitchedElement::getOctave() throw (AttributeNotFoundException) {
	if (oct) {
		return atoi(oct->getValue().c_str());
	} else {
		MeiAttribute *octattr = getAttribute("oct");
		if (octattr) {
			oct = octattr;
			return atoi(oct->getValue().c_str());
		} else {
			throw AttributeNotFoundException("oct");
		}
	}
}

void PitchedElement::setOctave(int octave) {
	char buf[36];
	snprintf(buf, 36, "%d", octave);
	if (oct) {
		oct->setValue(string(buf));
	} else {
		MeiAttribute *octattr = getAttribute("oct");
		if (octattr) {
			oct = octattr;
			oct->setValue(string(buf));
		} else {
			oct = new MeiAttribute("oct",string(buf));
			addAttribute(oct);
		}
	}
}

vector<Accid*>* PitchedElement::getAccidentals() throw (AttributeNotFoundException) {
	if (accidentals) {
		return accidentals;
	} else {
		throw AttributeNotFoundException("accid");
	}
}

void PitchedElement::setAccidentals(vector<Accid*>* accids) {
	accidentals = accids;
	removeAttribute("accid");
	removeChildren("accid");
	if (accids->size() > 1) {
		for (vector<Accid*>::iterator i = accids->begin(); i != accids->end(); i++) {
			Accid *child = *i;
			addChild((MeiElement*)child);
		}
	} else {
		Accid* onlyAccidental = accids->front();
		if (onlyAccidental->hasAttribute("accid") && onlyAccidental->getAttributes().size() > 1) {
			addChild((MeiElement*)onlyAccidental);
		} else {
			MeiAttribute *accidattr = onlyAccidental->getAttribute("accid");
			if (accidattr && onlyAccidental->getAttributes().size() == 1) {
				addAttribute(accidattr);
			}
		}
	}
}

void PitchedElement::addAccidental(Accid *accid) {
	vector<Accid*>* newaccid = accidentals;
    newaccid->push_back(accid);
    setAccidentals(newaccid);
}

/* SpanningElement */

SpanningElement::SpanningElement() {
	startElement = NULL;
	endElement = NULL;
	staffElement = NULL;
	startId = NULL;
	endId = NULL;
	staff = NULL;
}

string SpanningElement::getStartId() throw (AttributeNotFoundException) {
	if (startId) {
		return startId->getValue();
	} else {
		MeiAttribute *startidattr = getAttribute("startid");
		if (startidattr) {
			startId = startidattr;
			return startId->getValue();
		} else {
			throw AttributeNotFoundException("startid");
		}
	}
}

void SpanningElement::setStartId(string startid) {
	if (startId) {
		startId->setValue(startid);
	} else {
		MeiAttribute *startidattr = getAttribute("startid");
		if (startidattr) {
			startId = startidattr;
			startId->setValue(startid);
		} else {
			startId = new MeiAttribute("startid",startid);
			addAttribute(startId);
		}
	}
}

MeiElement* SpanningElement::getStartElement() throw (ElementIDNotFoundException) {
	return NULL;
	//figure out implementation
}

void SpanningElement::setStartElement(MeiElement *startel) {
	startElement = startel;
	setStartId(startel->getId());
}

string SpanningElement::getEndId() throw (AttributeNotFoundException) {
	if (endId) {
		return endId->getValue();
	} else {
		MeiAttribute *endidattr = getAttribute("endid");
		if (endidattr) {
			endId = endidattr;
			return endId->getValue();
		} else {
			throw AttributeNotFoundException("endid");
		}
	}
}

void SpanningElement::setEndId(string endid) {
	if (endId) {
		endId->setValue(endid);
	} else {
		MeiAttribute *endidattr = getAttribute("endid");
		if (endidattr) {
			endId = endidattr;
			endId->setValue(endid);
		} else {
			endId = new MeiAttribute("endid",endid);
			addAttribute(endId);
		}
	}
}

MeiElement* SpanningElement::getEndElement() throw (ElementIDNotFoundException) {
	return NULL;
}

void SpanningElement::setEndElement(MeiElement *endel) {
	endElement = endel;
	setEndId(endel->getId());
}

string SpanningElement::getStaff() throw (AttributeNotFoundException) {
	if (staff) {
		return staff->getValue();
	} else {
		MeiAttribute *staffattr = getAttribute("staff");
		if (staffattr) {
			staff = staffattr;
			return staff->getValue();
		} else {
			throw AttributeNotFoundException("staff");
		}
	}
}

void SpanningElement::setStaffElement(MeiElement *staff) {
	staffElement = staff;
	setStaff(staff->getId());
}

void SpanningElement::setStaff(string staffref) {
	if (staff) {
		staff->setValue(staffref);
	} else {
		MeiAttribute *staffattr = getAttribute("staff");
		if (staffattr) {
			staff = staffattr;
			staff->setValue(staffref);
		} else {
			staff = new MeiAttribute("staff",staffref);
			addAttribute(staff);
		}
	}
}

MeiElement* SpanningElement::getStaffElement() throw (ElementIDNotFoundException) {
	return NULL;
}

/* SpatialElement */

SpatialElement::SpatialElement() {
	facs = NULL;
	zone = NULL;
}

string SpatialElement::getFacs() throw (AttributeNotFoundException) {
	if (facs) {
		return facs->getValue();
	} else {
		MeiAttribute *facsattr = getAttribute("facs");
		if (facsattr) {
			facs = facsattr;
			return facs->getValue();
		} else {
			throw AttributeNotFoundException("facs");
		}
	}
}

void SpatialElement::setFacs(string uuid) {
	if (facs) {
		facs->setValue(uuid);
	} else {
		MeiAttribute *facsattr = getAttribute("facs");
		if (facsattr) {
			facs = facsattr;
			facs->setValue(uuid);
		} else {
			facs = new MeiAttribute("facs",uuid);
			addAttribute(facs);
		}
	}
}

MeiElement* SpatialElement::getZone() throw (ElementIDNotFoundException) {
	return NULL;
}

void SpatialElement::setZone(MeiElement* zone) {
	//throw an error if the argument is not a zone element?
	this->zone = zone;
	setFacs(zone->getId());
}
