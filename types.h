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

#ifndef TYPES_H_
#define TYPES_H_

#include "meielement.h"

class DurationElement: public virtual MeiElement {
public:
	DurationElement();
	virtual ~DurationElement() {};
	int getDuration() {return duration;}
	void setDuration(int duration) {this->duration = duration;} //do stuff to the MeiElement
	int getDots() {return dots;}
	void setDots(int dots) {this->dots = dots;} //do stuff to the MeiElement
	bool isDotted();
	
private:
	
protected:
	int duration;
	int dots;
};

class PitchedElement: public virtual MeiElement {
public:
	PitchedElement();
	virtual ~PitchedElement() {};
	string getPitchName() {return pitchName;}
	void setPitchName(string pname) {this->pitchName = pname;} //do stuff to the MeiElement
	int getOctave() {return octave;}
	void setOctave(int oct) {this->octave = oct;} //do stuff to the MeiElement
	//char* getAccidentals() {return accidentals;}
	//void setAccidentals(char* accidentals[]) {this->accidentals = accidentals;} //actually have to do stuff to the MeiElement here
	//PyMEI has a getPitch-type method which returns the whole pitch (i.e. F#5, Bb4, etc)
	
private:
	
protected:
	string pitchName;
	int octave;	
};

class SpanningElement: public virtual MeiElement {
public:
	SpanningElement();
	virtual ~SpanningElement() {};
	string getStartId() {return startElement->getId();}
	void setStartId(string startid); //need to find elements?
	string getEndId() {return endElement->getId();}
	void setEndId(string endid) {this->endId = endid;} //need to find element with the given id?
	string getStaff() {return staffElement->getId();}
	void setStaff(string staff) {this->staff = staff;} //ditto
	
private:
	
protected:
	MeiElement* startElement;
	MeiElement* endElement;
	MeiElement* staffElement;
	string startId;
	string endId;
	string staff;
};

class SpatialElement: public virtual MeiElement {
public:
	SpatialElement();
	virtual ~SpatialElement() {};
	MeiAttribute* getFacs();
	void setFacs(string uuid);
	
private:
	
protected:
	MeiAttribute* facs;
};

#endif //TYPES_H_