/*
 *  header.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/29/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef HEADER_H_
#define HEADER_H_

#include "meielement.h"

class AccessDesc: public MeiElement {
public:
	AccessDesc();
private:
};

class AcqSource: public MeiElement {
public:
	Acq();
private:
};

class AltMeiid: public MeiElement {
public:
	AltMeiid();
private:
};

class Application: public MeiElement {
public:
	Application();
private:
};

class Availability: public MeiElement {
public:
	Availability();
private:
};

class Change: public MeiElement {
public:
	Change();
private:
};

class ChangeDesc: public MeiElement {
public:
	ChangeDesc();
private:
};

class ClassCode: public MeiElement {
public:
	ClassCode();
private:
};

class Classification: public MeiElement {
public:
	Classification();
private:
	
class Condition: public MeiElement {
	public:
		Condition();
	private:
};
	
class Correction: public MeiElement {
	public:
		Correction();
	private:
};
	
class Creation: public MeiElement {
	public:
		Creation();
	private:
};
	
class Dimensions: public MeiElement {
	public:
		Dimensions();
	private:
};
	
class EditionStmt: public MeiElement {
	public:
		EditionStmt();
	private:
};
	
class EditorialDec1: public MeiElement {
	public:
		EditorialDec1();
	private:
};
	
class EncodingDesc: public MeiElement {
	public:
		EncodingDesc();
	private:
};
	
class Event: public MeiElement {
	public:
		Event();
	private:
};

};