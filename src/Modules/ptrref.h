/*
 *  ptrref.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/29/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PTRREF_H_
#define PTRREF_H_

#include "meielement.h"

/** \brief An empty linking element that uses attributes to connect 
 *         the MEI document to an external electronic object.
 */
class ExtPtr: public MeiElement {
public:
	ExtPtr();
private:
};

/** \brief A linking element that can include text and sub-elements 
 *         as a reference to an electronic object external to the MEI document. 
 */
class ExtRef: public MeiElement {
public:
	ExtRef();
private:
};

/** \brief An empty internal linking element that uses attributes to provide for movement 
 *         from one place in an MEI document to another place in the same document.
 */
class Ptr: public MeiElement {
public:
	Ptr();
private:
};

/** \brief An internal linking element that provides for movement from one place in a 
 *         MEI document to another point in the same document.
 */
class Ref: public MeiElement {
public:
	Ref();
private:
};








#endif // PTRREF_H_