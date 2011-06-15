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

#include "shared.h"
#include "exceptions.h"

Abbr::Abbr(): MeiElement("abbr") {
}

Accid::Accid(string accidental): MeiElement("accid") {
    MeiAttribute accid = MeiAttribute("accid", accidental);
    addAttribute(accid);
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

string Artic::getArticulation() throw (AttributeNotFoundException) {
    MeiAttribute* Articulation = getAttribute("artic");
    if (Articulation != NULL) {
        return Articulation->getValue();
    } else {
        throw AttributeNotFoundException("atric");
    }
}

void Artic::setArticulation(string artic) {
    MeiAttribute Articulation = MeiAttribute("artic", artic);
    addAttribute(Articulation);
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

string Chord::getDuration() throw (AttributeNotFoundException) {
    MeiAttribute* duration = getAttribute("dur");
    if (duration !=NULL) {
        return duration->getValue();
    } else {
        throw AttributeNotFoundException("dur");
    }
}

void Chord::setDuration(string duration) {
    MeiAttribute dur = MeiAttribute("dur", duration);
    addAttribute(dur);
}

string Chord::getStemDir() throw (AttributeNotFoundException) {
    MeiAttribute* stemdir = getAttribute("stem.dir");
    if (stemdir != NULL) {
        return stemdir->getValue();
    } else {
        throw AttributeNotFoundException("stem.dir");
    }
}

void Chord::setStemDir(string direction) {
    MeiAttribute stemDirection = MeiAttribute("stem.dir", direction);
    addAttribute(stemDirection);
}

bool Chord::getIsDotted() {
    MeiAttribute* dots = getAttribute("dots");
    if (dots != NULL) {
        return true;
    } else {
        return false;
    }
}

string Chord::getNumDots() throw (AttributeNotFoundException) {
    MeiAttribute* numdots = getAttribute("dots");
    if (numdots != NULL) {
        return numdots->getValue();
    } else {
        throw AttributeNotFoundException("dots");
    }
}

void Chord::setNumDots(string numDots) {
    MeiAttribute nd = MeiAttribute("dots", numDots);
    addAttribute(nd);
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
vector<Accid> Note::getAccidentals() throw (AttributeNotFoundException) {
    return this->accidentals;
}

void Note::addAccidental(Accid accid) {
    vector<Accid> newaccid = accidentals;
    newaccid.push_back(accid);
    setAccidentals(newaccid);
}

/**
 * Set accidentals for this note. All previous accidentals are cleared.
 */
void Note::setAccidentals(vector<Accid> accid) {
    this->accidentals.clear();
    if (accid.size() > 1) {
        removeAttribute("accid");
        // more than one accidental. Every accidental becomes a child element.
        for (unsigned int i=0; i < accid.size(); i++) {
            this->accidentals.push_back(accid[i]);
            this->addChild(&(accid[i]));
        }
    } else {
		// only one accidental (most common). Only becomes a child element 
		// if it has more than one attribute; else it is a note attribute.	
		Accid onlyAccidental = accid.front();
		this->accidentals.push_back(onlyAccidental);
		if(onlyAccidental.hasAttribute("accid") && onlyAccidental.getAttributes().size() > 1) {
			this->addChild(&onlyAccidental);
		} else if (onlyAccidental.hasAttribute("accid") && onlyAccidental.getAttributes().size() == 1) {
			addAttribute(*onlyAccidental.getAttribute("accid"));
		}
	}
}

string Note::getOctave() throw (AttributeNotFoundException) {
    MeiAttribute* octaveAttr = getAttribute("oct");
    if (octaveAttr!=NULL) {
        return octaveAttr->getValue();
    } else {
        throw AttributeNotFoundException("oct");
    }
}

void Note::setOctave(string octave) {
	MeiAttribute octaveAttr = MeiAttribute("oct", octave);
	addAttribute(octaveAttr);
}

string Note::getPitchName() throw (AttributeNotFoundException) {
	MeiAttribute* pitchName = getAttribute("pname");
	if (pitchName!=NULL) {
        return pitchName->getValue();
	} else {
        throw AttributeNotFoundException("pname");
	}
}

void Note::setPitchName(string pitchname) {
	MeiAttribute pitchName = MeiAttribute("pname", pitchname);
	addAttribute(pitchName);
}

string Note::getDuration() throw (AttributeNotFoundException) {
    MeiAttribute* duration = getAttribute("dur");
    if (duration !=NULL) {
        return duration->getValue();
    } else {
        throw AttributeNotFoundException("dur");
    }
}

void Note::setDuration(string duration) {
    MeiAttribute dur = MeiAttribute("dur", duration);
    addAttribute(dur);
}

string Note::getStemDir() throw (AttributeNotFoundException) {
    MeiAttribute* stemdir = getAttribute("stem.dir");
    if (stemdir != NULL) {
        return stemdir->getValue();
    } else {
        throw AttributeNotFoundException("stem.dir");
    }
}

void Note::setStemDir(string direction) {
    MeiAttribute stemDirection = MeiAttribute("stem.dir", direction);
    addAttribute(stemDirection);
}

bool Note::getIsDotted() {
    MeiAttribute* dots = getAttribute("dots");
    if (dots != NULL) {
        return true;
    } else {
        return false;
    }
}

string Note::getNumDots() throw (AttributeNotFoundException) {
    MeiAttribute* numdots = getAttribute("dots");
    if (numdots != NULL) {
        return numdots->getValue();
    } else {
        throw AttributeNotFoundException("dots");
    }
}

void Note::setNumDots(string numDots) {
    MeiAttribute nd = MeiAttribute("dots", numDots);
    addAttribute(nd);
}

bool Note::getIsTied() {
    MeiAttribute* tie = getAttribute("tie");
    if (tie != NULL) {
        return true;
    } else {
        return false;
    }
}

string Note::getTie() throw (AttributeNotFoundException) {
    MeiAttribute* tie = getAttribute("tie");
    if (tie != NULL) {
        return tie->getValue();
    } else {
        throw AttributeNotFoundException("tie");
    }
}

void Note::setTie(string tie) {
    MeiAttribute tievalue = MeiAttribute("tie", tie);
    addAttribute(tievalue);
}

bool Note::getIsTuplet() {
    MeiAttribute* tupl = getAttribute("tuplet");
    if (tupl != NULL) {
        return true;
    } else {
        return false;
    }
}

string Note::getTuplet() throw (AttributeNotFoundException) {
    MeiAttribute* tupl = getAttribute("tuplet");
    if (tupl != NULL) {
        return tupl->getValue();
    } else {
        throw AttributeNotFoundException("tuplet");
    }
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

string Rest::getDuration() throw (AttributeNotFoundException) {
    MeiAttribute* duration = getAttribute("dur");
    if (duration !=NULL) {
        return duration->getValue();
    } else {
        throw AttributeNotFoundException("dur");
    }
}

void Rest::setDuration(string duration) {
    MeiAttribute dur = MeiAttribute("dur", duration);
    addAttribute(dur);
}

string Rest::getStemDir() throw (AttributeNotFoundException) {
    MeiAttribute* stemdir = getAttribute("stem.dir");
    if (stemdir != NULL) {
        return stemdir->getValue();
    } else {
        throw AttributeNotFoundException("stem.dir");
    }
}

void Rest::setStemDir(string direction) {
    MeiAttribute stemDirection = MeiAttribute("stem.dir", direction);
    addAttribute(stemDirection);
}

bool Rest::getIsDotted() {
    MeiAttribute* dots = getAttribute("dots");
    if (dots != NULL) {
        return true;
    } else {
        return false;
    }
}

string Rest::getNumDots() throw (AttributeNotFoundException) {
    MeiAttribute* numdots = getAttribute("dots");
    if (numdots != NULL) {
        return numdots->getValue();
    } else {
        throw AttributeNotFoundException("dots");
    }
}

void Rest::setNumDots(string numDots) {
    MeiAttribute nd = MeiAttribute("dots", numDots);
    addAttribute(nd);
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

string StaffDef::getClefArray() throw(AttributeNotFoundException) {
    
    MeiAttribute* Clefs = getAttribute("clef");
    if (Clefs != NULL) {
        return Clefs->getValue();
    } else {
        throw AttributeNotFoundException("clef");
    }
}

string StaffDef::getPPQ() throw(AttributeNotFoundException) {
    MeiAttribute* Ppq = getAttribute("ppq");
    if (Ppq != NULL) {
        return Ppq->getValue();
    } else {
        throw AttributeNotFoundException("ppq");
    }
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

// added in MEI 2011
CastItem::CastItem(): MeiElement("castitem") { }
RoleDesc::RoleDesc(): MeiElement("roledesc") { }
Actor::Actor(): MeiElement("actor") { }
Role::Role(): MeiElement("role") { }
CastList::CastList(): MeiElement("castlist") { }
CastGrp::CastGrp(): MeiElement("castgrp") { }
