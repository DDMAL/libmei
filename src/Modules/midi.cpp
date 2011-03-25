/*
 *  midi.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "midi.h"

Cc::Cc(): MeiElement("cc") {
}

Chan::Chan(): MeiElement("chan") {
}

ChanPr::ChanPr(): MeiElement("chanpr") {
}

Cue::Cue(): MeiElement("cue") {
}

Hex::Hex(): MeiElement("hex") {
}

Lyrics::Lyrics(): MeiElement("lyrics") {
}

Marker::Marker(): MeiElement("marker") {
}

MetaText::MetaText(): MeiElement("metatext") {
}

Midi::Midi(): MeiElement("midi") {
}

NoteOff::NoteOff(): MeiElement("noteoff") {
}

NoteOn::NoteOn(): MeiElement("noteon") {
}

Port::Port(): MeiElement("port") {
}

Prog::Prog(): MeiElement("prog") {
}

SeqNum::SeqNum(): MeiElement("seqnum") {
}

TrkName::TrkName(): MeiElement("trkname") {
}

Vel::Vel(): MeiElement("vel") {
}