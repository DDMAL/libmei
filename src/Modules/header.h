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

/** \brief */
class AccessDesc: public MeiElement {
	public:
		AccessDesc();
	private:
};

/** \brief */
class AcqSource: public MeiElement {
public:
	AcqSource();
private:
};

/** \brief */
class AltMeiid: public MeiElement {
public:
	AltMeiid();
private:
};

/** \brief */
class Application: public MeiElement {
public:
	Application();
private:
};

/** \brief */
class Availability: public MeiElement {
public:
	Availability();
private:
};

/** \brief */
class Change: public MeiElement {
public:
	Change();
private:
};

/** \brief */
class ChangeDesc: public MeiElement {
public:
	ChangeDesc();
private:
};

/** \brief */
class ClassCode: public MeiElement {
public:
	ClassCode();
private:
};

/** \brief */
class Classification: public MeiElement {
public:
	Classification();
private:
};

/** \brief */	
class Condition: public MeiElement {
	public:
		Condition();
	private:
};

/** \brief */	
class Correction: public MeiElement {
	public:
		Correction();
	private:
};

/** \brief */	
class Creation: public MeiElement {
	public:
		Creation();
	private:
};

/** \brief */	
class Dimensions: public MeiElement {
	public:
		Dimensions();
	private:
};

/** \brief */	
class EditionStmt: public MeiElement {
	public:
		EditionStmt();
	private:
};

/** \brief */	
class EditorialDecl: public MeiElement {
	public:
		EditorialDecl();
	private:
};

/** \brief */	
class EncodingDesc: public MeiElement {
	public:
		EncodingDesc();
	private:
};

/** \brief */	
class Event: public MeiElement {
	public:
		Event();
	private:
};

/** \brief */	
class EventList: public MeiElement {
	public:
		EventList();
	private:
};

/** \brief */	
class ExhibitHist: public MeiElement {
	public:
		ExhibitHist();
	private:
};

/** \brief */	
class Extent: public MeiElement {
	public:
		Extent();
	private:
};

/** \brief */	
class FileDesc: public MeiElement {
	public:
		FileDesc();
	private:
};

/** \brief */	
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

/** \brief */	
class HandList: public MeiElement {
	public:
		HandList();
	private:
};

/** \brief */	
class Inscription: public MeiElement {
	public:
		Inscription();
	private:
};

/** \brief */	
class Interpretation: public MeiElement {
	public:
		Interpretation();
	private:
};

/** \brief */	
class KeyWords: public MeiElement {
	public:
		KeyWords();
	private:
};

/** \brief */	
class Language: public MeiElement {
	public:
		Language();
	private:
};

/** \brief */	
class LangUsage: public MeiElement {
	public:
		LangUsage();
	private:
};

/** \brief */	
class MeiHead: public MeiElement {
	public:
		MeiHead();
	private:
};

/** \brief */	
class Normalization: public MeiElement {
	public:
		Normalization();
	private:
};

/** \brief */
class NotesStmt: public MeiElement {
	public:
		NotesStmt();
	private:
};

/** \brief */
class PhysDesc: public MeiElement {
	public:
		PhysDesc();
	private:
};

/** \brief */
class PhysLoc: public MeiElement {
	public:
		PhysLoc();
	private:
};

/** \brief */
class PhysMedium: public MeiElement {
	public:
		PhysMedium();
	private:
};

/** \brief */
class ProfileDesc: public MeiElement {
	public:
		ProfileDesc();
	private:
};

/** \brief */
class Price: public MeiElement {
	public:
		Price();
	private:
};

/** \brief */
class ProjectDesc: public MeiElement {
	public:
		ProjectDesc();
	private:
};

/** \brief */
class Provenance: public MeiElement {
	public:
		Provenance();
	private:
};

/** \brief */
class PubStmt: public MeiElement {
	public:
		PubStmt();
	private:
};

/** \brief */
class Resp: public MeiElement {
	public:
		Resp();
	private:
};

/** \brief */
class RespStmt: public MeiElement {
	public:
		RespStmt();
	private:
};

/** \brief */
class RevisionDesc: public MeiElement {
	public:
		RevisionDesc();
	private:
};

/** \brief */
class SamplingDescl: public MeiElement {
	public:
		SamplingDescl();
	private:
};

/** \brief */
class Segmentation: public MeiElement {
	public:
		Segmentation();
	private:
};

/** \brief */
class SeriesStmt: public MeiElement {
	public:
		SeriesStmt();
	private:
};

/** \brief */
class Source: public MeiElement {
	public:
		Source();
	private:
};

/** \brief */
class SourceDesc: public MeiElement {
	public:
		SourceDesc();
	private:
};

/** \brief */
class StdVals: public MeiElement {
	public:
		StdVals();
	private:
};

/** \brief */
class SysReq: public MeiElement {
	public:
		SysReq();
	private:
};

/** \brief */
class Term: public MeiElement {
	public:
		Term();
	private:
};

/** \brief */
class TitleStmt: public MeiElement {
	public:
		TitleStmt();
	private:
};

/** \brief */
class TreatmentHist: public MeiElement {
	public:
		TreatmentHist();
	private:
};

/** \brief */
class TreatmentSched: public MeiElement {
	public:
		TreatmentSched();
	private:
};

/** \brief */
class Unpub: public MeiElement {
	public:
		Unpub();
	private:
};

/** \brief */
class UserStrict: public MeiElement {
	public:
		UserStrict();
	private:
};	

// added in MEI 2011

/** \brief */
class Plate: public MeiElement {
public:
    Plate();
private:
};

/** \brief */
class TermList: public MeiElement {
public:
    TermList();
private:
};	

/** \brief */
class Watermark: public MeiElement {
public:
    Watermark();
private:
};	

/** \brief */
class RelatedItem: public MeiElement {
public:
    RelatedItem();
private:
};	

/** \brief */
class Contents: public MeiElement {
public:
    Contents();
private:
};	

/** \brief */
class Work: public MeiElement {
public:
    Work();
private:
};	

/** \brief */
class PerfMedium: public MeiElement {
public:
    PerfMedium();
private:
};	

/** \brief */
class WorkDesc: public MeiElement {
public:
    WorkDesc();
private:
};	

/** \brief */
class InstrVoice: public MeiElement {
public:
    InstrVoice();
private:
};	

/** \brief */
class Performer: public MeiElement {
public:
    Performer();
private:
};

/** \brief */
class Key: public MeiElement {
public:
    Key();
private:
};	

/** \brief */
class Ensemble: public MeiElement {
public:
    Ensemble();
private:
};	

/** \brief */
class History: public MeiElement {
public:
    History();
private:
};	




#endif