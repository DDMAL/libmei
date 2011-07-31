/*
 *  cmnornaments.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CMNORNAMENTS_H_
#define CMNORNAMENTS_H_

#include "meielement.h"
#include "exceptions.h"

/** \brief An ornament indicating rapid alternation of the main note with a secondary note, 
 *         usually a step below, but sometimes a step above.
 */
class Mordent: public MeiElement {
public:
	Mordent();
    
    string getTimeStamp() throw(AttributeNotFoundException);
    void setTimeStamp(string tmstp);
    
    string getPlace() throw(AttributeNotFoundException);
    void setPlace(string place);
    
    string getForm() throw(AttributeNotFoundException);
    void setForm(string Form);
    
    string getStaff() throw(AttributeNotFoundException);
    void setStaff(string staff);
    
private:
};

/** \brief Rapid alternation of a note with one (usually at the interval of a second) above.*/
class Trill: public MeiElement {
public:
	Trill();
private:
};

/** \brief An ornament consisting of four notes – the upper neighbor of the written note, the written note, 
 *         the lower neighbor, and the written note.
 */
class Turn: public MeiElement {
public:
	Turn();
private:
};

#endif // CMNORNAMENTS_H_