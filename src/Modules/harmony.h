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

#ifndef HARMONY_H_
#define HARMONY_H_

#include "meielement.h"

/** \brief An indication of fingering in a chord tablature grid. */
class Barre: public MeiElement {
public:
	Barre();
private:
};

/** \brief Chord tablature definition. */
class ChordDef: public MeiElement {
public:
	ChordDef();
private:
};

/** \brief An individual pitch in a chord defined by a <chordDef> element.*/
class ChordMember: public MeiElement {
public:
	ChordMember();
private:
};

/** \brief Chord/tablature look-up table. */
class ChordTable: public MeiElement {
public:
	ChordTable();
private:
};

/** \brief An indication of harmony, e.g., chord names, tablature grids, harmonic analysis, figured bass.*/
class Harm: public MeiElement {
public:
	Harm();
private:
};

//added in MEI 2011

/** \brief */
class F: public MeiElement {
public:
	F();
private:
};

/** \brief */
class Fb: public MeiElement {
public:
	Fb();
private:
};

#endif // HARMONY_H_