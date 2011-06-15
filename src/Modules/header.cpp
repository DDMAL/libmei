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

AccessDesc::AccessDesc(): MeiElement("accessdesc") {
}

AcqSource::AcqSource(): MeiElement("acqsource") {
}

AltMeiid::AltMeiid(): MeiElement("altmeiid") {
}

Application::Application(): MeiElement("application") {
}

Availability::Availability(): MeiElement("availability") {
}

Change::Change(): MeiElement("change") {
}

ChangeDesc::ChangeDesc(): MeiElement("changedesc") {
}

ClassCode::ClassCode(): MeiElement("classcode") {
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

EditionStmt::EditionStmt(): MeiElement("editionstmt") {
}

EditorialDecl::EditorialDecl(): MeiElement("editorialdecl") {
}

EncodingDesc::EncodingDesc(): MeiElement("encodingdesc") {
}

Event::Event(): MeiElement("event") {
}

EventList::EventList(): MeiElement("eventlist") {
}

ExhibitHist::ExhibitHist(): MeiElement("exhibithist") {
}

Extent::Extent(): MeiElement("extent") {
}

FileDesc::FileDesc(): MeiElement("filedesc") {
}

FingerPrint::FingerPrint(): MeiElement("fingerprint") {
}

Hand::Hand(): MeiElement("hand") {
}

HandList::HandList(): MeiElement("handlist") {
}

Inscription::Inscription(): MeiElement("inscription") {
}

Interpretation::Interpretation(): MeiElement("interpretation") {
}

KeyWords::KeyWords(): MeiElement("keywords") {
}

Language::Language(): MeiElement("language") {
}

MeiHead::MeiHead(): MeiElement("meihead") {
}

Normalization::Normalization(): MeiElement("normalization") {
}

NotesStmt::NotesStmt(): MeiElement("notesstmt") {
}

PhysDesc::PhysDesc(): MeiElement("physdesc") {
}

PhysLoc::PhysLoc(): MeiElement("physloc") {
}

PhysMedium::PhysMedium(): MeiElement("physmedium") {
}

ProfileDesc::ProfileDesc(): MeiElement("profiledesc") {
}

Provenance::Provenance(): MeiElement("provenance") {
}

PubStmt::PubStmt(): MeiElement("pubstmt") {
}

Resp::Resp(): MeiElement("resp") {
}

RespStmt::RespStmt(): MeiElement("respstmt") {
}

RevisionDesc::RevisionDesc(): MeiElement("revisiondesc") {
}

SamplingDescl::SamplingDescl(): MeiElement("samplingdescl") {
}

Segmentation::Segmentation(): MeiElement("segmentation") {
}

SeriesStmt::SeriesStmt(): MeiElement("seriesstmt") {
}

Source::Source(): MeiElement("source") {
}

SourceDesc::SourceDesc(): MeiElement("sourcedesc") {
}

StdVals::StdVals(): MeiElement("stdvals") {
}

SysReq::SysReq(): MeiElement("sysreq") {
}

Term::Term(): MeiElement("term") {
}

TitleStmt::TitleStmt(): MeiElement("titlestmt") {
}

TreatmentHist::TreatmentHist(): MeiElement("treatmenthist") {
}

TreatmentSched::TreatmentSched(): MeiElement("treatmentsched") {
}

Unpub::Unpub(): MeiElement("unpub") {
}

UserStrict::UserStrict(): MeiElement("userstrict") {
}

// added in MEI 2011
Plate::Plate(): MeiElement("plate") { }
TermList::TermList(): MeiElement("termlist") { }
Watermark::Watermark(): MeiElement("watermark") { }
RelatedItem::RelatedItem(): MeiElement("relateditem") { }
Contents::Contents(): MeiElement("contents") { }
Work::Work(): MeiElement("work") { }
PerfMedium::PerfMedium(): MeiElement("perfmedium") { }
WorkDesc::WorkDesc(): MeiElement("workdesc") { }
InstrVoice::InstrVoice(): MeiElement("instrvoice") { }
Performer::Performer(): MeiElement("performer") { }
Key::Key(): MeiElement("key") { }
Ensemble::Ensemble(): MeiElement("ensemble") { }
History::History(): MeiElement("history") { }
