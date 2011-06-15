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

#ifndef PTRREF_H_
#define PTRREF_H_

#include "meielement.h"

/** \brief An empty linking element that uses attributes to connect 
 *         the MEI document to an external electronic object.
 */
class ExtPtr: public MeiElement {
public:
	ExtPtr();
private:
};

/** \brief A linking element that can include text and sub-elements 
 *         as a reference to an electronic object external to the MEI document. 
 */
class ExtRef: public MeiElement {
public:
	ExtRef();
private:
};

/** \brief An empty internal linking element that uses attributes to provide for movement 
 *         from one place in an MEI document to another place in the same document.
 */
class Ptr: public MeiElement {
public:
	Ptr();
private:
};

/** \brief An internal linking element that provides for movement from one place in a 
 *         MEI document to another point in the same document.
 */
class Ref: public MeiElement {
public:
	Ref();
private:
};








#endif // PTRREF_H_