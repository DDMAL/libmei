/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
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
#include "sharedmixins.h"
#include "harmonymixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"
#include "facsimilemixins.h"
#include <string>


namespace mei {
/** \brief 
 */
class MEI_EXPORT Barre : public MeiElement {
    public:
        Barre();
        Barre(const Barre& other);
        virtual ~Barre();

/* include <barre> */

        CommonMixIn    m_Common;
        FretlocationMixIn    m_Fretlocation;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;

    private:
        REGISTER_DECLARATION(Barre);
};

/** \brief 
 */
class MEI_EXPORT ChordDef : public MeiElement {
    public:
        ChordDef();
        ChordDef(const ChordDef& other);
        virtual ~ChordDef();
        /** \brief 
         */
        MeiAttribute* getPos();
        void setPos(std::string _pos);
        bool hasPos();
        void removePos();

/* include <chordDef> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(ChordDef);
};

/** \brief 
 */
class MEI_EXPORT ChordMember : public MeiElement {
    public:
        ChordMember();
        ChordMember(const ChordMember& other);
        virtual ~ChordMember();
        /** \brief 
         */
        MeiAttribute* getFing();
        void setFing(std::string _fing);
        bool hasFing();
        void removeFing();

/* include <chordMember> */

        CommonMixIn    m_Common;
        AccidentalPerformedMixIn    m_AccidentalPerformed;
        FretlocationMixIn    m_Fretlocation;
        IntervalharmonicMixIn    m_Intervalharmonic;
        PitchMixIn    m_Pitch;
        OctaveMixIn    m_Octave;

    private:
        REGISTER_DECLARATION(ChordMember);
};

/** \brief 
 */
class MEI_EXPORT ChordTable : public MeiElement {
    public:
        ChordTable();
        ChordTable(const ChordTable& other);
        virtual ~ChordTable();

/* include <chordTable> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(ChordTable);
};

/** \brief 
 */
class MEI_EXPORT F : public MeiElement {
    public:
        F();
        F(const F& other);
        virtual ~F();
        /** \brief 
         */
        MeiAttribute* getExtender();
        void setExtender(std::string _extender);
        bool hasExtender();
        void removeExtender();

/* include <f> */

        CommonMixIn    m_Common;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        AltsymMixIn    m_Altsym;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(F);
};

/** \brief 
 */
class MEI_EXPORT Fb : public MeiElement {
    public:
        Fb();
        Fb(const Fb& other);
        virtual ~Fb();

/* include <fb> */

        CommonMixIn    m_Common;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        FacsimileMixIn    m_Facsimile;

    private:
        REGISTER_DECLARATION(Fb);
};

/** \brief 
 */
class MEI_EXPORT Harm : public MeiElement {
    public:
        Harm();
        Harm(const Harm& other);
        virtual ~Harm();

/* include <harm> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        HarmLogMixIn    m_HarmLog;
        PlistMixIn    m_Plist;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        StartendidMixIn    m_Startendid;
        StartidMixIn    m_Startid;
        DurationTimestampMixIn    m_DurationTimestamp;
        HarmVisMixIn    m_HarmVis;
        PlacementMixIn    m_Placement;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        VisualoffsetToMixIn    m_VisualoffsetTo;
        VisualoffsetVoMixIn    m_VisualoffsetVo;
        Visualoffset2HoMixIn    m_Visualoffset2Ho;
        Visualoffset2ToMixIn    m_Visualoffset2To;
        XyMixIn    m_Xy;
        DurationPerformedMixIn    m_DurationPerformed;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Harm);
};
}
#endif  // HARMONY_H_
