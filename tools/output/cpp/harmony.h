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

#ifndef HARMONY_H_
#define HARMONY_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include <string>


namespace mei {
/** \brief – An indication of fingering in a chord tablature grid.
 */
class MEI_EXPORT Barre : public MeiElement {
    public:
        Barre();
        Barre(const Barre& other);
        virtual ~Barre();

/* include <barre> */


    private:
        REGISTER_DECLARATION(Barre);
};

/** \brief (chord definition) – Chord tablature definition.
 */
class MEI_EXPORT ChordDef : public MeiElement {
    public:
        ChordDef();
        ChordDef(const ChordDef& other);
        virtual ~ChordDef();
        /** \brief records the fret position at which the chord tablature is to be played.
         */
        MeiAttribute* getPos();
        void setPos(std::string _pos);
        bool hasPos();
        void removePos();

/* include <chordDef> */


    private:
        REGISTER_DECLARATION(ChordDef);
};

/** \brief – An individual pitch in a chord defined by a <chordDef> element.
 */
class MEI_EXPORT ChordMember : public MeiElement {
    public:
        ChordMember();
        ChordMember(const ChordMember& other);
        virtual ~ChordMember();
        /** \brief indicates which finger, if any, should be used to play an individual string.
         * 
         *  The values 'x' and 'o' indicated muffled and open strings, respectively.
         */
        MeiAttribute* getFing();
        void setFing(std::string _fing);
        bool hasFing();
        void removeFing();

/* include <chordMember> */


    private:
        REGISTER_DECLARATION(ChordMember);
};

/** \brief – Chord/tablature look-up table.
 */
class MEI_EXPORT ChordTable : public MeiElement {
    public:
        ChordTable();
        ChordTable(const ChordTable& other);
        virtual ~ChordTable();

/* include <chordTable> */


    private:
        REGISTER_DECLARATION(ChordTable);
};

/** \brief represents a
 */
class MEI_EXPORT F : public MeiElement {
    public:
        F();
        F(const F& other);
        virtual ~F();
        /** \brief indicates the presence of an extension symbol, typically a dash or underscore,
         *  drawn from the end of the harmonic indication to the point indicated by the dur
         *  attribute.
         */
        MeiAttribute* getExtender();
        void setExtender(std::string _extender);
        bool hasExtender();
        void removeExtender();

/* include <f> */


    private:
        REGISTER_DECLARATION(F);
};

/** \brief (figured bass) – Symbols added to a bass line that indicate harmony.
 * 
 *  Used to improvise a chordal accompaniment. Sometimes called Generalbass,
 *  thoroughbass, or basso continuo.
 */
class MEI_EXPORT Fb : public MeiElement {
    public:
        Fb();
        Fb(const Fb& other);
        virtual ~Fb();

/* include <fb> */


    private:
        REGISTER_DECLARATION(Fb);
};

/** \brief (harmony) – An indication of harmony, e.g., chord names, tablature grids,
 *  harmonic analysis, figured bass.
 */
class MEI_EXPORT Harm : public MeiElement {
    public:
        Harm();
        Harm(const Harm& other);
        virtual ~Harm();

/* include <harm> */


    private:
        REGISTER_DECLARATION(Harm);
};
}
#endif  // HARMONY_H_
