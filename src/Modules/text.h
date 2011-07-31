/*
 *  text.h
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/25/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef TEXT_H_
#define TEXT_H_

#include "meielement.h"

/** \brief Back matter such as indexes, advertisements, etc.*/
class Back: public MeiElement {
public:
	Back();
private:
};

/** \brief A formatting element that designates an extended quotation.*/
class BlockQuote: public MeiElement	{
public:
	BlockQuote();
private:
};

/** \brief Major structural division of text, such as a preface, chapter or section. */
class Div: public MeiElement {
public:
	Div();
private:
};

/** \brief Bundles prefatory text found before the start of the musical text. */
class Front: public MeiElement {
public:
	Front();
private:
};

/** \brief A rapid alternation between a pair of notes that are farther apart than a major second*/
class Ftrem: public MeiElement {
public:
	Ftrem();
private:
};

/** \brief Contains any heading, for example, the title of a section of text, or the heading of a list.*/
class Head: public MeiElement {
public:
	Head();
private:
};

/** \brief Single item in a <list>.*/
class Item: public MeiElement {
public:
	Item();
private:
};

/** \brief Line of Text - Contains a single line of text within a line group.*/
class L: public MeiElement	{
public:
	L();
private:
};

/** \brief To contain lyric verse although it may be used for any section of text that is organized as a group of lines*/
class Lg: public MeiElement	{
public:
	Lg();
private:
};

/** \brief A formatting element that contains as series of separated items that are arranged in a vertical sequence. */
class List: public MeiElement {
public:
	List();
private:
};

#endif // TEXT_H_