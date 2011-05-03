/*
 *  harmony.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "harmony.h"

Barre::Barre(): MeiElement("barre") {
}

ChordDef::ChordDef(): MeiElement("chorddef") {
}

ChordMember::ChordMember(): MeiElement("chordmember") {
}

ChordTable::ChordTable(): MeiElement("chordtable") {
}

Harm::Harm(): MeiElement("harm") {
}

// added in MEI 2011
F::F(): MeiElement("f") { }
Fb::Fb(): MeiElement("fb") { }