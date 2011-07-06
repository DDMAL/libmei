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

#include "header.h"

AccessRestrict::AccessRestrict(): MeiElement("accessRestrict") {
}

AcqSource::AcqSource(): MeiElement("acqSource") {
}

AltMeiid::AltMeiid(): MeiElement("altmeiid") {
}

Application::Application(): MeiElement("application") {
}

Availability::Availability(): MeiElement("availability") {
}

Change::Change(): MeiElement("change") {
}

ChangeDesc::ChangeDesc(): MeiElement("changeDesc") {
}

ClassCode::ClassCode(): MeiElement("classCode") {
}

Classification::Classification(): MeiElement("classification") {
}

Condition::Condition(): MeiElement("condition") {
}

Correction::Correction(): MeiElement("correction") {
}

Creation::Creation(): MeiElement("creation") {
}

Dimensions::Dimensions(): MeiElement("dimensions") {
}

EditionStmt::EditionStmt(): MeiElement("editionStmt") {
}

EditorialDecl::EditorialDecl(): MeiElement("editorialDecl") {
}

EncodingDesc::EncodingDesc(): MeiElement("encodingDesc") {
}

Event::Event(): MeiElement("event") {
}

EventList::EventList(): MeiElement("eventList") {
}

ExhibHist::ExhibHist(): MeiElement("exhibHist") {
}

Extent::Extent(): MeiElement("extent") {
}

FileDesc::FileDesc(): MeiElement("fileDesc") {
}

FingerPrint::FingerPrint(): MeiElement("fingerprint") {
}

Hand::Hand(): MeiElement("hand") {
}

HandList::HandList(): MeiElement("handList") {
}

Inscription::Inscription(): MeiElement("inscription") {
}

IncipCode::IncipCode(): MeiElement("incipCode") {
}

Interpretation::Interpretation(): MeiElement("interpretation") {
}

KeyWords::KeyWords(): MeiElement("keywords") {
}

Language::Language(): MeiElement("language") {
}

LangUsage::LangUsage(): MeiElement("langUsage") {
}

MeiHead::MeiHead(): MeiElement("meiHead") {
}

Normalization::Normalization(): MeiElement("normalization") {
}

NotesStmt::NotesStmt(): MeiElement("notesStmt") {
}

PhysDesc::PhysDesc(): MeiElement("physDesc") {
}

PhysLoc::PhysLoc(): MeiElement("physLoc") {
}

PhysMedium::PhysMedium(): MeiElement("physMedium") {
}

PlateNum::PlateNum(): MeiElement("plateNum") {
}

ProfileDesc::ProfileDesc(): MeiElement("profiledesc") {
}

Provenance::Provenance(): MeiElement("provenance") {
}

PubStmt::PubStmt(): MeiElement("pubStmt") {
}

Resp::Resp(): MeiElement("resp") {
}

RespStmt::RespStmt(): MeiElement("respStmt") {
}

RevisionDesc::RevisionDesc(): MeiElement("revisionDesc") {
}

SamplingDecl::SamplingDecl(): MeiElement("samplingDecl") {
}

Segmentation::Segmentation(): MeiElement("segmentation") {
}

SeriesStmt::SeriesStmt(): MeiElement("seriesStmt") {
}

Source::Source(): MeiElement("source") {
}

SourceDesc::SourceDesc(): MeiElement("sourceDesc") {
}

StdVals::StdVals(): MeiElement("stdVals") {
}

SysReq::SysReq(): MeiElement("sysReq") {
}

Term::Term(): MeiElement("term") {
}

TitleStmt::TitleStmt(): MeiElement("titleStmt") {
}

TreatHist::TreatHist(): MeiElement("treatHist") {
}

TreatSched::TreatSched(): MeiElement("treatSched") {
}

Unpub::Unpub(): MeiElement("unpub") {
}

UseRestrict::UseRestrict(): MeiElement("useRestrict") {
}

// added in MEI 2011
Plate::Plate(): MeiElement("plate") { }
TermList::TermList(): MeiElement("termList") { }
Watermark::Watermark(): MeiElement("watermark") { }
RelatedItem::RelatedItem(): MeiElement("relatedItem") { }
Contents::Contents(): MeiElement("contents") { }
ContentItem::ContentItem(): MeiElement("contentItem") { }
Work::Work(): MeiElement("work") { }
PerfMedium::PerfMedium(): MeiElement("perfMedium") { }
WorkDesc::WorkDesc(): MeiElement("workDesc") { }
InstrVoice::InstrVoice(): MeiElement("instrVoice") { }
Performer::Performer(): MeiElement("performer") { }
Key::Key(): MeiElement("key") { }
Ensemble::Ensemble(): MeiElement("ensemble") { }
History::History(): MeiElement("history") { }
