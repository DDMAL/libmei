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

#ifndef MIDI_H_
#define MIDI_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "mei.h"
#include "analysismixins.h"
#include "linkalignmixins.h"
#include "sharedmixins.h"
#include "midimixins.h"
#include <string>


namespace mei {
/** \brief control change ― MIDI parameter/control change.
 * 
 *  The num attribute specifies parameter number, while val contains the parameter
 *  value. Each must fall in the range 0-127.
 */
class MEI_EXPORT Cc : public MeiElement {
    public:
        Cc();
        virtual ~Cc();

/* include <cc> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;
        MidivalueMixIn    m_Midivalue;

    private:
        REGISTER_DECLARATION(Cc);
};

/** \brief channel ― MIDI channel assignment.
 */
class MEI_EXPORT Chan : public MeiElement {
    public:
        Chan();
        virtual ~Chan();
        /** \brief along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <chan> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(Chan);
};

/** \brief channel pressure ― MIDI channel pressure/after touch.
 * 
 *  The value of the num attribute must be in the range 0-127.
 */
class MEI_EXPORT ChanPr : public MeiElement {
    public:
        ChanPr();
        virtual ~ChanPr();

/* include <chanPr> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(ChanPr);
};

/** \brief cue ― MIDI cue point.
 */
class MEI_EXPORT Cue : public MeiElement {
    public:
        Cue();
        virtual ~Cue();

/* include <cue> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(Cue);
};

/** \brief hex ― Arbitrary MIDI data in hexadecimal form.
 * 
 *  The element's content must be wrapped in a CDATA section to avoid parsing
 *  errors.
 */
class MEI_EXPORT Hex : public MeiElement {
    public:
        Hex();
        virtual ~Hex();

/* include <hex> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(Hex);
};

/** \brief marker ― MIDI marker meta-event.
 */
class MEI_EXPORT Marker : public MeiElement {
    public:
        Marker();
        virtual ~Marker();

/* include <marker> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(Marker);
};

/** \brief meta text ― MIDI text meta-event.
 */
class MEI_EXPORT MetaText : public MeiElement {
    public:
        MetaText();
        virtual ~MetaText();

/* include <metaText> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(MetaText);
};

/** \brief midi ― Container for elements that contain information useful when generating
 *  MIDI output.
 * 
 *  The n attribute can be used to differentiate between multiple MIDI data streams,
 *  e.g. quantized/unquantized, straight/swing, ornamented/as notated, etc.
 */
class MEI_EXPORT Midi : public MeiElement {
    public:
        Midi();
        virtual ~Midi();

/* include <midi> */

        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Midi);
};

/** \brief note-off ― MIDI note-off event.
 */
class MEI_EXPORT NoteOff : public MeiElement {
    public:
        NoteOff();
        virtual ~NoteOff();

/* include <noteOff> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(NoteOff);
};

/** \brief note-on ― MIDI note-on event.
 */
class MEI_EXPORT NoteOn : public MeiElement {
    public:
        NoteOn();
        virtual ~NoteOn();

/* include <noteOn> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(NoteOn);
};

/** \brief port ― MIDI port.
 * 
 *  The num attribute must be in the range 0-127.
 */
class MEI_EXPORT Port : public MeiElement {
    public:
        Port();
        virtual ~Port();

/* include <port> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(Port);
};

/** \brief program ― MIDI program change.
 * 
 *  The num attribute must be in the range 0-127.
 */
class MEI_EXPORT Prog : public MeiElement {
    public:
        Prog();
        virtual ~Prog();

/* include <prog> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(Prog);
};

/** \brief sequence number ― MIDI sequence number.
 */
class MEI_EXPORT SeqNum : public MeiElement {
    public:
        SeqNum();
        virtual ~SeqNum();
        /** \brief along with numbase, describes duration as a ratio.
         * 
         *  num is the first value in the ratio, while numbase is the second.
         */
        MeiAttribute* getNum();
        void setNum(std::string _num);
        bool hasNum();
        void removeNum();

/* include <seqNum> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(SeqNum);
};

/** \brief track name ― MIDI track/sequence name.
 */
class MEI_EXPORT TrkName : public MeiElement {
    public:
        TrkName();
        virtual ~TrkName();

/* include <trkName> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;

    private:
        REGISTER_DECLARATION(TrkName);
};

/** \brief velocity ― MIDI Note-on/off velocity.
 * 
 *  The num attribute must be in the range 0-127.
 */
class MEI_EXPORT Vel : public MeiElement {
    public:
        Vel();
        virtual ~Vel();
        /** \brief records the function of the dot.
         */
        MeiAttribute* getForm();
        void setForm(std::string _form);
        bool hasForm();
        void removeForm();

/* include <vel> */

        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        CommonMixIn    m_Common;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        TimestampMusicalMixIn    m_TimestampMusical;
        MidinumberMixIn    m_Midinumber;

    private:
        REGISTER_DECLARATION(Vel);
};
}
#endif  // MIDI_H_
