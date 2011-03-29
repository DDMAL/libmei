/*
 *  ptrref.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/29/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "ptrref.h"

ExtPtr::ExtPtr(): MeiElement("extptr") {
}

ExtRef::ExtRef(): MeiElement("extref") {
}

Ptr::Ptr(): MeiElement("ptr") {
}

Ref::Ref(): MeiElement("ref") {
}
