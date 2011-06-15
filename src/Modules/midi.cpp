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