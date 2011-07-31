/*
 *  corpus.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CORPUS_H_
#define CORPUS_H_

#include "meielement.h"

/** \brief The document element for a group of related MEI documents, 
 *         each with its own complete header, contains a header for the group, 
 *         and one or more <mei> elements.
 */
class MeiCorpus: public MeiElement {
public:
	MeiCorpus();
private:
};


#endif // CORPUS_H_