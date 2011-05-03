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

class Trill: public MeiElement {
public:
	Trill();
private:
};

class Turn: public MeiElement {
public:
	Turn();
private:
};







#endif // CMNORNAMENTS_H_