/*
 *  figtable.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "figtable.h"

Fig::Fig(): MeiElement("fig") {
}

FigDesc::FigDesc(): MeiElement("figdesc") {
}

Graphic::Graphic(): MeiElement("graphic") {
}

Table::Table(): MeiElement("table") {
}

Td::Td(): MeiElement("td") {
}

Th::Th(): MeiElement("th") {
}

Tr::Tr(): MeiElement("tr") {
}