/*
 *  critapp.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CRITAPP_H_
#define CRITAPP_H_

#include "meielement.h"

/** \brief Apparatus - Contains one or more alternative encodings*/
class App: public MeiElement {
public:
	App();
private:
};

/** \brief Contains the lemma, or base text, of a textual variation. */
class Lem: public MeiElement {
public:
	Lem();
private:
};

/** \brief reading - A reading can be a multi-measure section and may have 
 *         its own meta-data without the overhead of child sections.
 */
class Rdg: public MeiElement {
public:
	Rdg();
private:
};

#endif //CRITAPP_H_