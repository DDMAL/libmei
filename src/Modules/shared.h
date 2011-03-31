/*
 *  shared.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/14/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef SHARED_H_
#define SHARED_H_

#include "meielement.h"
#include "meiattribute.h"
#include "exceptions.h"

class Abbr: public MeiElement
	{
	public:
		Abbr();
	private:
	};

class Accid: public MeiElement
	{
	public:
		Accid();
	private:
	};

class Address: public MeiElement
	{
	public:
		Address();
	private:
	};

class AddressLine: public MeiElement
	{
	public:
		AddressLine();
	private:
	};

class Annot: public MeiElement
	{
	public:
		Annot();
	private:
	};

class AppInfo: public MeiElement
	{
	public:
		AppInfo();
	private:
	};

class Artic: public MeiElement
	{
	public:
		Artic();
	private:
	};

class BarLine: public MeiElement
	{
	public:
		BarLine();
	private:
	};

class Bibl: public MeiElement
	{
	public:
		Bibl();
	private:
	};

class Body: public MeiElement
	{
	public:
		Body();
	private:
	};

class Caption: public MeiElement
	{
	public:
		Caption();
	private:
	};

class Chord: public MeiElement
	{
	public:
		Chord();
	private:
	};

class Clef: public MeiElement 
	{
	public:
		Clef();
	private:
	};

class ClefChange: public MeiElement
	{
	public:
		ClefChange();
	private:
	};

class Custos: public MeiElement
	{
	public:
		Custos();
	private:
	};

class Date: public MeiElement
	{
	public:
		Date();
	private:
	};

class Dir: public MeiElement
	{
	public:
		Dir();
	private:
	};

class Dot: public MeiElement
	{
	public:
		Dot();
	private:
	};

class Dynam: public MeiElement
	{
	public:
		Dynam();
	private:
	};

class Edition: public MeiElement
	{
	public:
		Edition();
	private:
	};

class Ending: public MeiElement
	{
	public:
		Ending();
	private:
	};

class Expan: public MeiElement
	{
	public:
		Expan();
	private:
	};

class Expansion: public MeiElement
	{
	public:
		Expansion();
	private:
	};

class Fw: public MeiElement
	{
	public:
		Fw();
	private:
	};

class Group: public MeiElement
	{
	public:
		Group();
	private:
	};

class Grpsym: public MeiElement
	{
	public:
		Grpsym();
	private:
	};

class Identifier: public MeiElement
	{
	public:
		Identifier();
	private:
	};

class Instrdef: public MeiElement
	{
	public:
		Instrdef();
	private:
	};

class Instrgrp: public MeiElement
	{
	public:
		Instrgrp();
	private:
	};

class KeyAccid: public MeiElement
	{
	public:
		KeyAccid();
	private:
	};

class KeyChange: public MeiElement
	{
	public:
		KeyChange();
	private:
	};

class KeySig: public MeiElement 
	{
	public:
		KeySig();
	private:
	};

class Label: public MeiElement
	{
	public:
		Label();
	private:
	};

class Layer: public MeiElement
	{
	public:
		Layer();
	private:
	};

class LayerDef: public MeiElement
	{
	public:
		LayerDef();
	private:
	};

class Lb: public MeiElement
	{
	public:
		Lb();
	private:
	};

class Mdiv: public MeiElement
	{
	public:
		Mdiv();
	private:
	};

class Mei: public MeiElement
	{
	public:
		Mei();
	private:
	};

class Music: public MeiElement
	{
	public:
		Music();
	private:
	};

class Name: public MeiElement
	{
	public:
		Name();
	private:
	};

class Note: public MeiElement 
	{
	public:
		Note();
		string getAccidental() throw (AttributeNotFoundException);
		void setAccidental(string accidental);
		
		string getPitchName() throw (AttributeNotFoundException);
		void setPitchName(string pitchname);
		
		string getOctave() throw (AttributeNotFoundException);
		void setOctave(string octave);
		
	private:
		string pitchname;
		string octave;
		string accidental;
	};

class Num: public MeiElement
	{
	public:
		Num();
	private:
	};

class P: public MeiElement
	{
	public:
		P();
	private:
	};

class Pad: public MeiElement
	{
	public:
		Pad();
	private:
	};

class Part: public MeiElement
	{
	public:
		Part();
	private:
	};

class Parts: public MeiElement
	{
	public:
		Parts();
	private:
	};

class Pb: public MeiElement
	{
	public:
		Pb();
	private:
	};

class PgDesc: public MeiElement
	{
	public:
		PgDesc();
	private:
	};

class PgFoot1: public MeiElement
	{
	public:
		PgFoot1();
	private:
	};

class PgFoot2: public MeiElement
	{
	public:
		PgFoot2();
	private:
	};

class PgHead1: public MeiElement
	{
	public:
		PgHead1();
	private:
	};

class PgHead2: public MeiElement
	{
	public:
		PgHead2();
	private:
	};

class Phrase: public MeiElement
	{
	public:
		Phrase();
	private:
	};

class Rend: public MeiElement
	{
	public:
		Rend();
	private:
	};

class Repository: public MeiElement
	{
	public:
		Repository();
	private:
	};

class Rest: public MeiElement
	{
	public:
		Rest();
	private:
	};

class Sb: public MeiElement
	{
	public:
		Sb();
	private:
	};

class Score: public MeiElement
	{
	public:
		Score();
	private:
	};

class ScoreDef: public MeiElement
	{
	public:
		ScoreDef();
	private:
	};

class Section: public MeiElement
	{
	public:
		Section();
	private:
	};

class Space: public MeiElement
	{
	public:
		Space();
	private:
	};

class Stack: public MeiElement
	{
	public:
		Stack();
	private:
	};

class Staff: public MeiElement
	{
	public:
		Staff();
	private:
	};

class StaffDef: public MeiElement
	{
	public:
		StaffDef();
	private:
	};

class StaffGrp: public MeiElement
	{
	public:
		StaffGrp();
	private:
	};

class Syl: public MeiElement
	{
	public:
		Syl();
	private:
	};

class Tempo: public MeiElement
	{
	public:
		Tempo();
	private:
	};

class Title: public MeiElement
	{
	public:
		Title();
	private:
	};

class TitlePage: public MeiElement
	{
	public:
		TitlePage();
	private:
	};

#endif // SHARED_H_
