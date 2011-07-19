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

#ifndef HEADER_H_
#define HEADER_H_

#include "meielement.h"

/** \brief */
class AccessRestrict: public MeiElement {
	public:
		AccessRestrict();
	private:
};

/** \brief */
class AcqSource: public MeiElement {
public:
	AcqSource();
private:
};

/** \brief */
class AltId: public MeiElement {
public:
	AltId();
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
class ExhibHist: public MeiElement {
	public:
		ExhibHist();
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
class IncipCode: public MeiElement {
	public:
		IncipCode();
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
class PlateNum: public MeiElement {
	public:
		PlateNum();
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
class SamplingDecl: public MeiElement {
	public:
		SamplingDecl();
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
class TreatHist: public MeiElement {
	public:
		TreatHist();
	private:
};

/** \brief */
class TreatSched: public MeiElement {
	public:
		TreatSched();
	private:
};

/** \brief */
class Unpub: public MeiElement {
	public:
		Unpub();
	private:
};

/** \brief */
class UseRestrict: public MeiElement {
	public:
		UseRestrict();
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
class ContentItem: public MeiElement {
public:
	ContentItem();
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

#endif // HEADER_H_