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

#ifndef FIGTABLE_H_
#define FIGTABLE_H_

#include "meielement.h"

/** \brief Groups elements representing or containing graphic information such as an illustration or figure.*/
class Fig: public MeiElement {
public:
	Fig();
private:
};

/** \brief Contains a brief description of a graphic figure for use when documenting an image without displaying it. */
class FigDesc: public MeiElement {
public:
	FigDesc();
private:
};

/** \brief Indicates the location of an inline graphic, illustration, or figure.*/
class Graphic: public MeiElement {
public:
	Graphic();
private:
};

/** \brief Visual layout in tabular form. */
class Table: public MeiElement {
public:
	Table();
private:
};

/** \brief Designates a table cell that contains data as opposed to a cell that contains column or row heading information. */
class Td: public MeiElement {
public:
	Td();
private:
};

/** \brief */
class Th: public MeiElement {
public:
	Th();
private:
};

/** \brief A formatting element that contains one or more <td> or <th> elements (cells) in a <table>*/
class Tr: public MeiElement {
public:
	Tr();
private:
};




#endif //FIGTABLE_H_