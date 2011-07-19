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
    MeiAttribute *accid = new MeiAttribute("accid", accidental);
    addAttribute(accid);
}

Accid::Accid(): MeiElement("accid") {
}

Address::Address(): MeiElement("address") {
}

AddrLine::AddrLine(): MeiElement("addrLine") {
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
    MeiAttribute *Articulation = getAttribute("artic");
	if (Articulation) {
		Articulation->setValue(artic);
	} else {
		Articulation = new MeiAttribute("artic", artic);
		addAttribute(Articulation);
	}
}

BarLine::BarLine(): MeiElement("barLine") {
}

Bibl::Bibl(): MeiElement("bibl") {
}

Body::Body(): MeiElement("body") {
}

Caption::Caption(): MeiElement("caption") {
}

Chord::Chord(): MeiElement("chord") {
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
    MeiAttribute *stemDirection = getAttribute("stem.dir");
	if (stemDirection) {
		stemDirection->setValue(direction);
	} else {
		stemDirection = new MeiAttribute("stem.dir", direction);
		addAttribute(stemDirection);
	}
}

Clef::Clef(): MeiElement("clef") {
}

ClefChange::ClefChange(): MeiElement("clefChange") {
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

Incip::Incip(): MeiElement("incip") {
}

InstrDef::InstrDef(): MeiElement("instrDef") {
}

InstrGrp::InstrGrp(): MeiElement("instrGrp") {
}

KeyAccid::KeyAccid(): MeiElement("keyAccid") {
}

KeyChange::KeyChange(): MeiElement("keychange") {
}

KeySig::KeySig(): MeiElement("keySig") {
}

Label::Label(): MeiElement("label") {
}

Layer::Layer(): MeiElement("layer") {
}

LayerDef::LayerDef(): MeiElement("layerDef") {
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
REGISTER_DEFINITION(Note,"note");

string Note::getStemDir() throw (AttributeNotFoundException) {
    MeiAttribute* stemdir = getAttribute("stem.dir");
    if (stemdir != NULL) {
        return stemdir->getValue();
    } else {
        throw AttributeNotFoundException("stem.dir");
    }
}

void Note::setStemDir(string direction) {
    MeiAttribute *stemDirection = getAttribute("stem.dir");
	if (stemDirection) {
		stemDirection->setValue(direction);
	} else {
		stemDirection = new MeiAttribute("stem.dir", direction);
		addAttribute(stemDirection);
	}
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
    MeiAttribute *tievalue = getAttribute("tie");
	if (tievalue) {
		tievalue->setValue(tie);
	} else {
		tievalue = new MeiAttribute("tie", tie);
		addAttribute(tievalue);
	}
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
    MeiAttribute *tupletvalue = getAttribute("tuplet");
	if (tupletvalue) {
		tupletvalue->setValue(tuplet);
	} else {
		tupletvalue = new MeiAttribute("tuplet", tuplet);
		addAttribute(tupletvalue);
	}
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

PgDesc::PgDesc(): MeiElement("pgDesc") {
}

PgFoot::PgFoot(): MeiElement("pgFoot") {
}

PgFoot2::PgFoot2(): MeiElement("pgFoot2") {
}

PgHead::PgHead(): MeiElement("pgHead") {
}

PgHead2::PgHead2(): MeiElement("pgHead2") {
}

Phrase::Phrase(): MeiElement("phrase") {
}

Rend::Rend(): MeiElement("rend") {
}

Repository::Repository(): MeiElement("repository") {
}

Rest::Rest(): MeiElement("rest") {
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
    MeiAttribute *stemDirection = getAttribute("stem.dir");
	if (stemDirection) {
		stemDirection->setValue(direction);
	} else {
		stemDirection = new MeiAttribute("stem.dir", direction);
		addAttribute(stemDirection);
	}
}

Sb::Sb(): MeiElement("sb") {
}

Section::Section(): MeiElement("section") {
};

Score::Score(): MeiElement("score") {
}

ScoreDef::ScoreDef(): MeiElement("scoreDef") {
}

Space::Space(): MeiElement("space") {
}

Stack::Stack(): MeiElement("stack") {
}

Staff::Staff(): MeiElement("staff") {
}

StaffDef::StaffDef(): MeiElement("staffDef") {
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

StaffGrp::StaffGrp(): MeiElement("staffGrp") {
}

Syl::Syl(): MeiElement("syl") {
}

Tempo::Tempo(): MeiElement("tempo") {
}

Title::Title(): MeiElement("title") {
}

TitlePage::TitlePage(): MeiElement("titlePage") {
}

// added in MEI 2011
CastItem::CastItem(): MeiElement("castItem") { }
RoleDesc::RoleDesc(): MeiElement("roledesc") { }
Actor::Actor(): MeiElement("actor") { }
Role::Role(): MeiElement("role") { }
CastList::CastList(): MeiElement("castList") { }
CastGrp::CastGrp(): MeiElement("castGrp") { }
