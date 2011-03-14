/*
 *  neume_.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/14/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "neume.h"

Ineume::Ineume(string value): MeiElement("ineume") {
	setValue(value);
}

Uneume::Uneume(string value): MeiElement("uneume") {
	setValue(value);
}
