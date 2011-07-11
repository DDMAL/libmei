/*
    Copyright (c) 2011 Mahtab Ghamsari-Esfahani, Jamie Klassen, Alastair Porter, Andrew Hankinson

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef NEUME_H_
#define NEUME_H_

#include "meielement.h"
#include "types.h"

/** \brief a graphically interrupted neume; that is, a neume which is logically a single entity 
 *         but is written using multiple signs.
 */
class Ineume: public SpatialElement	{
	public:
		Ineume();
	private:
	};

/** \brief Neume notation can be thought of as "neumed text". 
 *         Therefore, the syllable element provides high-level 
 *         organization in this repertoire. 
 */
class Syllable: public SpatialElement	{
public:
	Syllable();
private:
};

/** \brief A graphically-uninterrupted neume sign.*/
class Uneume: public SpatialElement	{
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
