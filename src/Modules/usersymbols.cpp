/*
 *  usersymbols.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/29/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "usersymbols.h"

AnchoredText::AnchoredText(): MeiElement("anochoredtext") {
}

Curve::Curve(): MeiElement("curve") {
}

Line::Line(): MeiElement("line") {
}

Symbol::Symbol(): MeiElement("symbol") {
}

SymbolDef::SymbolDef(): MeiElement("symboldef") {
}

SymbolTable::SymbolTable(): MeiElement("symboltable") {
}
