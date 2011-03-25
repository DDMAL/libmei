/*
 *  shared.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/14/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "shared.h"
#include "exceptions.h"

Abbr::Abbr(): MeiElement("abbr") {
}

Accid::Accid(): MeiElement("accid") {
}

Address::Address(): MeiElement("address") {
}

AddressLine::AddressLine(): MeiElement("addressline") {
}

Annot::Annot(): MeiElement("annot") {
}

AppInfo::AppInfo(): MeiElement("appinfo") {
}

Artic::Artic(): MeiElement("artic") {
}

BarLine::BarLine(): MeiElement("barline") {
}

Bibl::Bibl(): MeiElement("bibl") {
}

Body::Body(): MeiElement("body") {
}

Caption::Caption(): MeiElement("caption") {
}

Chord::Chord(): MeiElement("chord") {
}

Clef::Clef(): MeiElement("clef") {
}

ClefChange::ClefChange(): MeiElement("clefchange") {
}

Custos::Custos(): MeiElement("custos") {
}

Date::Date(): MeiElement("date") {
}

Dir::Dir(): MeiElement("dir") {
}

Dot::Dot(): MeiElement("dot") {
}

Dynam::Dynam(): MeiElement("dynam") {
}

Edition::Edition(): MeiElement("edition") {
}

Ending::Ending(): MeiElement("ending") {
}

Expan::Expan(): MeiElement("expan") {
}

Expansion::Expansion(): MeiElement("expansion") {
}

Fw::Fw(): MeiElement("fw") {
}

Group::Group(): MeiElement("group") {
}

Grpsym::Grpsym(): MeiElement("grpsym") {
}

Identifier::Identifier(): MeiElement("identifier") {
}

Instrdef::Instrdef(): MeiElement("instrdef") {
}

Instrgrp::Instrgrp(): MeiElement("instrgrp") {
}

KeyAccid::KeyAccid(): MeiElement("keyaccid") {
}

KeyChange::KeyChange(): MeiElement("keychange") {
}

KeySig::KeySig(): MeiElement("keysig") {
}

Label::Label(): MeiElement("label") {
}

Layer::Layer(): MeiElement("layer") {
}

LayerDef::LayerDef(): MeiElement("layerdef") {
}

Lb::Lb(): MeiElement("lb") {
}

Mdiv::Mdiv(): MeiElement("mdiv") {
}

Mei::Mei(): MeiElement("mei") {
}

Music::Music(): MeiElement("music") {
}

Name::Name(): MeiElement("name") {
}

Note::Note(): MeiElement("note") {
}

string Note::getAccidental() throw (invalidAttribute) {
	MeiAttribute* accidentalAttr = getAttribute("accid");
	if (accidentalAttr!=NULL) {
		return accidentalAttr->getValue();
	} else {
		throw invalidAttribute("accid");
	}
}

void Note::setAccidental(string accidental) {
	MeiAttribute accidentalAttr = MeiAttribute("accid", accidental);
	addAttribute(accidentalAttr);
}

string Note::getOctave() throw (invalidAttribute) {
	MeiAttribute* octaveAttr = getAttribute("oct");
	if (octaveAttr!=NULL) {
		return octaveAttr->getValue();
	} else {
		throw invalidAttribute("oct");
	}
}

void Note::setOctave(string octave) {
	MeiAttribute octaveAttr = MeiAttribute("oct", octave);
	addAttribute(octaveAttr);
}

string Note::getPitchName() throw (invalidAttribute) {
	MeiAttribute* pitchName = getAttribute("pname");
	if (pitchName!=NULL) {
		return pitchName->getValue();
	} else {
		throw invalidAttribute("pname");
	}
}

void Note::setPitchName(string pitchname) {
	MeiAttribute pitchName = MeiAttribute("pname", pitchname);
	addAttribute(pitchName);
}



Num::Num(): MeiElement("num") {
}

P::P(): MeiElement("p") {
}

Pad::Pad(): MeiElement("pad") {
}

Part::Part(): MeiElement("part") {
}

Parts::Parts(): MeiElement("parts") {
}

Pb::Pb(): MeiElement("pb") {
}

PgDesc::PgDesc(): MeiElement("pgdesc") {
}

PgFoot1::PgFoot1(): MeiElement("pgfoot1") {
}

PgFoot2::PgFoot2(): MeiElement("pgfoot2") {
}

PgHead1::PgHead1(): MeiElement("pghead1") {
}

PgHead2::PgHead2(): MeiElement("pghead2") {
}

Phrase::Phrase(): MeiElement("phrase") {
}

Rend::Rend(): MeiElement("rend") {
}

Repository::Repository(): MeiElement("repository") {
}

Rest::Rest(): MeiElement("rest") {
}

Sb::Sb(): MeiElement("sb") {
}

Score::Score(): MeiElement("score") {
}

ScoreDef::ScoreDef(): MeiElement("scoredef") {
}

Space::Space(): MeiElement("space") {
}

Stack::Stack(): MeiElement("stack") {
}

Staff::Staff(): MeiElement("staff") {
}

StaffDef::StaffDef(): MeiElement("staffdef") {
}

StaffGrp::StaffGrp(): MeiElement("staffgrp") {
}

Syl::Syl(): MeiElement("syl") {
}

Tempo::Tempo(): MeiElement("tempo") {
}

Title::Title(): MeiElement("title") {
}

TitlePage::TitlePage(): MeiElement("titlepage") {
}