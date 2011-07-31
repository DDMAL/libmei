/*
 *  cmn.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CMN_H_
#define CMN_H_

#include "meielement.h"
#include "exceptions.h"

/** \brief Indicates that the notes of a chord are to be performed successively rather than simultaneously.*/
class Arpeg: public MeiElement {
public:
	Arpeg();
private:
};

/** \brief A container for a series of explicitly beamed events that begins and ends entirely within a measure.*/
class Beam: public MeiElement {
public:
	Beam();
    
    MeiElement getFirstChild() throw (ChildrenNotFoundException);
    MeiElement getLastChild() throw (ChildrenNotFoundException);
private:
};

/** \brief Alternative element for explicitly encoding beams which extend across barlines.*/
class BeamSpan: public MeiElement {
public:
	BeamSpan();
private:
};

/** \brief An indication that material on a preceding beat should be repeated.*/
class BeatRpt: public MeiElement {
public:
	BeatRpt();
private:
};

/** \brief A variation in pitch (often microtonal) upwards or downwards during the course of a note.*/
class Bend: public MeiElement {
public:
	Bend();
private:
};

/** \brief A indication of a point at which the performer on an instrument requiring breath may breathe.*/
class Breath: public MeiElement {
public:
	Breath();
private:
};

/** \brief A rapid alternation on a single pitch or chord.*/
class BtRem: public MeiElement {
public:
	BtRem();
private:
};

/** \brief An indication placed over a note or rest to indicated that it should be held longer than its written value.*/
class Fermata: public MeiElement {
public:
	Fermata();
private:
};

/** \brief A continuous or sliding movement from one pitch to another, usually indicated by a straight or wavy line.*/
class Gliss: public MeiElement {
public:
	Gliss();
private:
};

/** \brief */
class HairPin: public MeiElement {
public:
	HairPin();
private:
};

/** \brief A half-measure repeat in any meter. */
class HalfMRpt: public MeiElement {
public:
	HalfMRpt();
private:
};

/** \brief */
class HarpPedal: public MeiElement {
public:
	HarpPedal();
private:
};

/** \brief "Unit of musical time consisting of a fixed number of note-values as determined by the prevailing meter and contained between two barlines*/
class Measure: public MeiElement {
public:
	Measure();
    
    string getMeasureNumber() throw (AttributeNotFoundException);
    void setMeasureNumber(string measurenumber);
    
    string getBarline() throw (AttributeNotFoundException);
    void setBarline(string barline);
    bool hasBarline();
    bool isRepeated();
    
private:
    vector<string> barlines;
};

/** \brief Complete measure rest in any meter*/
class MRest: public MeiElement {
public:
	MRest();
private:
};

/** \brief An indication that the previous measure should be repeated.*/
class MRpt: public MeiElement {
public:
	MRpt();
private:
};

/** \brief An indication that the previous two measures should be repeated.*/
class MRpt2: public MeiElement {
public:
	MRpt2();
private:
};

/** \brief Complete measure consisting of empty space in any meter.*/
class MSpace: public MeiElement {
public:
	MSpace();
private:
};

/** \brief Multiple measures of rest compressed into a single symbol, 
 *         frequently found in performer parts.
 */
class MultiRest: public MeiElement {
public:
	MultiRest();
private:
};

/** \brief Multiple repeated measures.*/
class MultiRpt: public MeiElement {
public:
	MultiRpt();
private:
};

/** \brief An indication that a passage should be performed one or more octaves above or below its written pitch.*/
class Octave: public MeiElement {
public:
	Octave();
private:
};

/** \brief An alternative, usually simpler, version of a measure *present in the source being transcribed.*/
class Ossia: public MeiElement {
public:
	Ossia();
private:
};

/** \brief Piano pedal mark.*/
class Pedal: public MeiElement {
public:
	Pedal();
private:
};

/** \brief Rehearsal Mark (For Orchestral Scores)*/
class Reh: public MeiElement {
public:
	Reh();
private:
};

/** \brief A phrase or passage played entirely legato.
 *
 *         Historically, the term "slur" indicated two notes performed legato, 
 *         while the term "phrase" was used for a "unified melodic idea". 
 *         Nowadays, however, "slur" often has the same meaning as "phrase",
 *         since the visual rendition of the two concepts is the same. 
 */
class Slur: public MeiElement {
public:
	Slur();
    
    string getStartId() throw (AttributeNotFoundException);
    void setStartId(string stid);
    
    string getEndId() throw (AttributeNotFoundException);
    void setEndId(string eid);
    
    string getStaff() throw (AttributeNotFoundException);
    void setStaff(string staff);
    
private:
};

/** \brief An indication that two notes of the same pitch form a single note 
 *         with their combined rhythmic values. 
 */
class Tie: public MeiElement {
public:
	Tie();
    
    string getStartId() throw (AttributeNotFoundException);
    void setStartId(string stid);
    
    string getEndId() throw (AttributeNotFoundException);
    void setEndId(string eid);
    
    string getStaff() throw (AttributeNotFoundException);
    void setStaff(string staff);
    
private:
};

/** \brief A group of notes with "irregular" rhythmic values, 
 *         for example, three notes in the time normally occupied by two.
 */
class Tuplet: public MeiElement {
public:
	Tuplet();
private:
};

/** \brief Alternative element for encoding tuplets, especially useful for tuplets that extend across barlines.*/
class TupletSpan: public MeiElement {
public:
	TupletSpan();
private:
};

#endif // CMN_H_