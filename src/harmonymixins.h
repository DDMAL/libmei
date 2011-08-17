
/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani
    
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

#ifndef HARMONYMIXIN_H_
#define HARMONYMIXIN_H_

#include "meielement.h"
#include "exceptions.h"



struct FretlocationMixIn {
    FretlocationMixIn(BaseMeiElement *b);
    virtual ~FretlocationMixIn() {};
    
    /** \brief   records the location at which a string should be stopped against a fret.
    */

    string getFretValue() throw (AttributeNotFoundException);
    MeiAttribute* getFret() throw (AttributeNotFoundException);
    void setFret(std::string _fret);
    bool hasFret();
    void removeFret();

    private:
        BaseMeiElement *b;
};


struct HarmLogMixIn {
    HarmLogMixIn(BaseMeiElement *b);
    virtual ~HarmLogMixIn() {};
    
    /** \brief   contains a reference to a <chordDef> element elsewhere in the document.
    */

    string getChordrefValue() throw (AttributeNotFoundException);
    MeiAttribute* getChordref() throw (AttributeNotFoundException);
    void setChordref(std::string _chordref);
    bool hasChordref();
    void removeChordref();

    private:
        BaseMeiElement *b;
};


struct HarmVisMixIn {
    HarmVisMixIn(BaseMeiElement *b);
    virtual ~HarmVisMixIn() {};
    
    /** \brief   indicates the presence of an extension symbol, typically a dash or underscore,
    * drawn from the end of the harmonic indication to the point indicated by the dur
    * attribute.
    */

    string getExtenderValue() throw (AttributeNotFoundException);
    MeiAttribute* getExtender() throw (AttributeNotFoundException);
    void setExtender(std::string _extender);
    bool hasExtender();
    void removeExtender();

    /** \brief   describes how the harmonic indication should be rendered.
    */

    string getRendgridValue() throw (AttributeNotFoundException);
    MeiAttribute* getRendgrid() throw (AttributeNotFoundException);
    void setRendgrid(std::string _rendgrid);
    bool hasRendgrid();
    void removeRendgrid();

    private:
        BaseMeiElement *b;
};


#endif // HARMONYMIXIN_H_
