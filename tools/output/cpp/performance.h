/*
    Copyright (c) 2011-2013 Andrew Hankinson, Alastair Porter, and Others
    
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

#ifndef PERFORMANCE_H_
#define PERFORMANCE_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"


namespace mei {
/** \brief (audio/video file) – References an external digital audio or video file.
 */
class MEI_EXPORT AvFile : public MeiElement {
    public:
        AvFile();
        AvFile(const AvFile& other);
        virtual ~AvFile();

/* include <avFile> */


    private:
        REGISTER_DECLARATION(AvFile);
};

/** \brief – Defines a time segment of interest within a recording or within a digital
 *  audio or video file.
 */
class MEI_EXPORT Clip : public MeiElement {
    public:
        Clip();
        Clip(const Clip& other);
        virtual ~Clip();

/* include <clip> */


    private:
        REGISTER_DECLARATION(Clip);
};

/** \brief contains a section of front or back matter describing how a dramatic piece is to
 *  be performed in general or how it was performed on some specific occasion.
 */
class MEI_EXPORT Performance : public MeiElement {
    public:
        Performance();
        Performance(const Performance& other);
        virtual ~Performance();

/* include <performance> */


    private:
        REGISTER_DECLARATION(Performance);
};

/** \brief provides details of an audio or video recording event used as the source of a
 *  spoken text, either directly or from a public broadcast.
 */
class MEI_EXPORT Recording : public MeiElement {
    public:
        Recording();
        Recording(const Recording& other);
        virtual ~Recording();

/* include <recording> */


    private:
        REGISTER_DECLARATION(Recording);
};
}
#endif  // PERFORMANCE_H_
