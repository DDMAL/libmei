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

#ifndef TEXT_H_
#define TEXT_H_

#include "meielement.h"
#include "types.h"

/** \brief Back matter such as indexes, advertisements, etc.*/
class Back: public MeiElement {
public:
	Back();
private:
};

/** \brief A formatting element that designates an extended quotation.*/
class Quote: public MeiElement	{
public:
	Quote();
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
class FTrem: public MeiElement {
public:
	FTrem();
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
class L: public SpatialElement	{
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