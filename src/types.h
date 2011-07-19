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
#include "exceptions.h"

/** \brief Records a temporary alteration to the pitch of a note.*/
class Accid: public MeiElement
{
public:
	Accid(string accid);
	Accid();
private:
};

class DurationElement: public virtual MeiElement {
public:
	DurationElement();
	virtual ~DurationElement() {};
	
	int getDuration() throw (AttributeNotFoundException);
	void setDuration(int duration);
	
	int getDots() throw (AttributeNotFoundException);
	void setDots(int ndots);
	bool isDotted();
	
private:
	
protected:
	MeiAttribute* dur;
	MeiAttribute* dots;
};

class PitchedElement: public virtual MeiElement {
public:
	PitchedElement();
	virtual ~PitchedElement() {};
	
	string getPitchName() throw (AttributeNotFoundException);
	void setPitchName(string pname);
	
	int getOctave() throw (AttributeNotFoundException);
	void setOctave(int octave);
	
	vector<Accid*>* getAccidentals() throw (AttributeNotFoundException);
	void setAccidentals(vector<Accid*>* accids);
	void addAccidental(Accid *accid);
	
private:
	
protected:
	MeiAttribute* pName;
	MeiAttribute* oct;
	MeiAttribute* accid;
	vector<Accid*>* accidentals;	
};

class SpanningElement: public virtual MeiElement {
public:
	SpanningElement();
	virtual ~SpanningElement() {};
	
	string getStartId() throw (AttributeNotFoundException);
	MeiElement *getStartElement() throw (ElementIDNotFoundException);
	void setStartElement(MeiElement *startel);
	void setStartId(string startid);
	
	string getEndId() throw (AttributeNotFoundException);
	MeiElement *getEndElement() throw (ElementIDNotFoundException);
	void setEndElement(MeiElement *endel);
	void setEndId(string endid);
	
	string getStaff() throw (AttributeNotFoundException);
	MeiElement *getStaffElement() throw (ElementIDNotFoundException);
	void setStaffElement(MeiElement *staff);
	void setStaff(string staff);
	
private:
	
protected:
	MeiElement* startElement;
	MeiElement* endElement;
	MeiElement* staffElement;
	MeiAttribute* startId;
	MeiAttribute* endId;
	MeiAttribute* staff;
};

class SpatialElement: public virtual MeiElement {
public:
	SpatialElement();
	virtual ~SpatialElement() {};
	
	/** \brief Get the facsimile*/
	string getFacs() throw (AttributeNotFoundException);
	
	/** \brief Set the facsimile*/
	void setFacs(string uuid);
	
	void deleteFacs() {delete facs; facs = NULL;}
	
	/** \return the element's corresponding zone
	 */
	MeiElement* getZone() throw (ElementIDNotFoundException);
	
	/** \brief set the zone node associated to the element to a given Mei Element
	 */
	void setZone(MeiElement* zone);
	
private:
	
protected:
	MeiAttribute* facs;
	MeiElement* zone;
};

#endif //TYPES_H_