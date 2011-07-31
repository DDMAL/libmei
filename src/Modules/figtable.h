/*
 *  figtable.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
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