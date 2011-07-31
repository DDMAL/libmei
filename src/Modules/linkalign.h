/*
 *  linkalign.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef LINKALIGN_H_
#define LINKALIGN_H_

#include "meielement.h"

/** \brief Provides a set of ordered points in time to which musical elements can be linked in order to create an alignment.*/
class TimeLine: public MeiElement {
public:
	TimeLine();
private:
};

/** \brief Indicates a point in time either absolutely, or relative to other elements in the same timeline element*/
class When: public MeiElement {
public:
	When();
private:
};

#endif //LINKALIGN_H_