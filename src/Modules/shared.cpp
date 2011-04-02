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

/*
 Accidentals are maintained in their own list, since we don't know if they are an 
 attribute or a child.
 
 We can probably fix this to check it when we call getAccidentals. But for now, this will do.
*/
vector<string> Note::getAccidentals() throw (AttributeNotFoundException) {
    return this->accidentals;
}

void Note::addAccidental(string accid) {
    vector<string> newaccid = accidentals;
    newaccid.push_back(accid);
    setAccidentals(newaccid);
}

/*
 A note may have multiple accidentals. Because of this, we have to separate
 two cases:
    1. One accidental. The accidental gets added to the note element as an attribute
    2. More than one accidental. The accidentals get added as child elements to the note.
 
 This means that the "setAccidentals" method must always take a vector, even if that vector
 is just one accidental.
 
*/
void Note::setAccidentals(vector<string> accid) {
    accidentals.clear();
    if (accid.size() == 1) {
        // only one attribute. Create an MEI attribute with the first element.
        string firstel = accid.front();
        MeiAttribute accidentalAttr = MeiAttribute("accid", firstel);
        addAttribute(accidentalAttr);
        accidentals.push_back(firstel);
    } else if (accid.size() > 1) {
        for (int i=0; i < accid.size(); i++) {
            MeiElement accidentalElement = MeiElement("accid");
            MeiAttribute accidAttr = MeiAttribute("accid", accid[i]);
            accidentalElement.addAttribute(accidAttr);
            addChild(accidentalElement);
            accidentals.push_back(accid[i]);
        }
    }
}

string Note::getOctave() throw (AttributeNotFoundException) {
    MeiAttribute* octaveAttr = getAttribute("oct");
    if (octaveAttr!=NULL) {
        this->octave = octaveAttr->getValue();
    } else {
        throw AttributeNotFoundException("oct");
    }
    return this->octave;
}

void Note::setOctave(string octave) {
	MeiAttribute octaveAttr = MeiAttribute("oct", octave);
	addAttribute(octaveAttr);
}

string Note::getPitchName() throw (AttributeNotFoundException) {
	MeiAttribute* pitchName = getAttribute("pname");
	if (pitchName!=NULL) {
        this->pitchname = pitchName->getValue();
	} else {
        throw AttributeNotFoundException("pname");
	}
    return this->pitchname;
}

void Note::setPitchName(string pitchname) {
	MeiAttribute pitchName = MeiAttribute("pname", pitchname);
	addAttribute(pitchName);
}

string Note::getDuration() throw (AttributeNotFoundException) {
    MeiAttribute* duration = getAttribute("dur");
    if (duration !=NULL) {
        this->duration = duration->getValue();
    } else {
        throw AttributeNotFoundException("dur");
    }
    return this->duration;
}

void Note::setDuration(string duration) {
    MeiAttribute dur = MeiAttribute("dur", duration);
    addAttribute(dur);
}

string Note::getStemDir() throw (AttributeNotFoundException) {
    MeiAttribute* stemdir = getAttribute("stem.dir");
    if (stemdir != NULL) {
        this->stemdir = stemdir->getValue();
    } else {
        throw AttributeNotFoundException("stem.dir");
    }
    return this->stemdir;
}

void Note::setStemDir(string direction) {
    MeiAttribute stemDirection = MeiAttribute("stem.dir", direction);
    addAttribute(stemDirection);
}

bool Note::getIsDotted() {
    MeiAttribute* dots = getAttribute("dots");
    if (dots != NULL) {
        this->isdotted = true;
        return this->isdotted;
    } else {
        return false;
    }
}

string Note::getNumDots() throw (AttributeNotFoundException) {
    MeiAttribute* numdots = getAttribute("dots");
    if (numdots != NULL) {
        this->dots = numdots->getValue();
    } else {
        throw AttributeNotFoundException("dots");
    }
    return this->dots;
}

void Note::setNumDots(string numDots) {
    MeiAttribute nd = MeiAttribute("dots", numDots);
    addAttribute(nd);
}

bool Note::getIsTied() {
    MeiAttribute* tie = getAttribute("tie");
    if (tie != NULL) {
        this->istied = true;
        return this->istied;
    } else {
        return false;
    }
}

string Note::getTie() throw (AttributeNotFoundException) {
    MeiAttribute* tie = getAttribute("tie");
    if (tie != NULL) {
        this->tie = tie->getValue();
    } else {
        throw AttributeNotFoundException("tie");
    }
    return this->tie;
}

void Note::setTie(string tie) {
    MeiAttribute tievalue = MeiAttribute("tie", tie);
    addAttribute(tievalue);
}

bool Note::getIsTuplet() {
    MeiAttribute* tupl = getAttribute("tuplet");
    if (tupl != NULL) {
        this->istuplet = true;
        return this->istuplet;
    } else {
        return false;
    }
}

string Note::getTuplet() throw (AttributeNotFoundException) {
    MeiAttribute* tupl = getAttribute("tuplet");
    if (tupl != NULL) {
        this->tuplet = tupl->getValue();
    } else {
        throw AttributeNotFoundException("tuplet");
    }
    return this->tuplet;
}

void Note::setTuplet(string tuplet) {
    MeiAttribute tupletvalue = MeiAttribute("tuplet", tuplet);
    addAttribute(tupletvalue);
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
