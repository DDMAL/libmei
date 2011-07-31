/*
 *  neume_.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/14/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef NEUME_H_
#define NEUME_H_

#include "meielement.h"

/** \brief a graphically interrupted neume; that is, a neume which is logically a single entity 
 *         but is written using multiple signs.
 */
class Ineume: public MeiElement	{
	public:
		Ineume();
	private:
	};

/** \brief Neume notation can be thought of as "neumed text". 
 *         Therefore, the syllable element provides high-level 
 *         organization in this repertoire. 
 */
class Syllable: public MeiElement	{
public:
	Syllable();
private:
};

/** \brief A graphically-uninterrupted neume sign.*/
class Uneume: public MeiElement	{
	public:
		Uneume();
	private:
	};

// This is not in the MEI standard yet
//class Division: public MeiElement	{
//public:
//	Division();
//private:
//};

#endif // NEUME_H_
