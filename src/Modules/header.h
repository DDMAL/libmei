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
	AcqSource();
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
};
	
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
	
class EditorialDecl: public MeiElement {
	public:
		EditorialDecl();
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
	
class EventList: public MeiElement {
	public:
		EventList();
	private:
};
	
class ExhibitHist: public MeiElement {
	public:
		ExhibitHist();
	private:
};
	
class Extent: public MeiElement {
	public:
		Extent();
	private:
};
	
class FileDesc: public MeiElement {
	public:
		FileDesc();
	private:
};
	
class FingerPrint: public MeiElement {
	public:
		FingerPrint();
	private:
};
	
class Hand: public MeiElement {
	public:
		Hand();
	private:
};
	
class HandList: public MeiElement {
	public:
		HandList();
	private:
};
	
class Inscription: public MeiElement {
	public:
		Inscription();
	private:
};
	
class Interpretation: public MeiElement {
	public:
		Interpretation();
	private:
};
	
class KeyWords: public MeiElement {
	public:
		KeyWords();
	private:
};
	
class Language: public MeiElement {
	public:
		Language();
	private:
};
	
class LangUsage: public MeiElement {
	public:
		LangUsage();
	private:
};
	
class MeiHead: public MeiElement {
	public:
		MeiHead();
	private:
};
	
class Normalization: public MeiElement {
	public:
		Normalization();
	private:
};

class NotesStmt: public MeiElement {
	public:
		NotesStmt();
	private:
};
	
class PhysDesc: public MeiElement {
	public:
		PhysDesc();
	private:
};
	
class PhysLoc: public MeiElement {
	public:
		PhysLoc();
	private:
};
	
class PhysMedium: public MeiElement {
	public:
		PhysMedium();
	private:
};
	
class ProfileDesc: public MeiElement {
	public:
		ProfileDesc();
	private:
};
	
class Price: public MeiElement {
	public:
		Price();
	private:
};
	
class ProjectDesc: public MeiElement {
	public:
		ProjectDesc();
	private:
};

class Provenance: public MeiElement {
	public:
		Provenance();
	private:
};
	
class PubStmt: public MeiElement {
	public:
		PubStmt();
	private:
};
	
class Resp: public MeiElement {
	public:
		Resp();
	private:
};
	
class RespStmt: public MeiElement {
	public:
		RespStmt();
	private:
};
	
class RevisionDesc: public MeiElement {
	public:
		RevisionDesc();
	private:
};
	
class SamplingDescl: public MeiElement {
	public:
		SamplingDescl();
	private:
};
	
class Segmentation: public MeiElement {
	public:
		Segmentation();
	private:
};
	
class SeriesStmt: public MeiElement {
	public:
		SeriesStmt();
	private:
};
	
class Source: public MeiElement {
	public:
		Source();
	private:
};
	
class SourceDesc: public MeiElement {
	public:
		SourceDesc();
	private:
};
	
class StdVals: public MeiElement {
	public:
		StdVals();
	private:
};
	
class SysReq: public MeiElement {
	public:
		SysReq();
	private:
};
	
class Term: public MeiElement {
	public:
		Term();
	private:
};
	
class TitleStmt: public MeiElement {
	public:
		TitleStmt();
	private:
};

class TreatmentHist: public MeiElement {
	public:
		TreatmentHist();
	private:
};

class TreatmentSched: public MeiElement {
	public:
		TreatmentSched();
	private:
};
	
class Unpub: public MeiElement {
	public:
		Unpub();
	private:
};
	
class UserStrict: public MeiElement {
	public:
		UserStrict();
	private:
};	
 
#endif