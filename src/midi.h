/*
    Copyright (c) 2011 Jamie Klassen, Alastair Porter, Mahtab Ghamsari-Esfahani, Andrew Hankinson

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

#include "sharedmixins.h"
#include "analysismixins.h"
#include "cmnmixins.h"
#include "critappmixins.h"
#include "midimixins.h"
using namespace std;
/** \brief  control change ― MIDI parameter/control change.
 *
 * The num attribute specifies parameter number, while val contains the parameter          
 *          value. Each must fall in the range 0-127..
 */
struct Cc : public BaseMeiElement{
    Cc();
    virtual ~Cc() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidinumberMixIn    m_Midinumber;
    MidivalueMixIn    m_Midivalue;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Cc);
};

/** \brief  channel ― MIDI channel assignment.
 */
struct Chan : public BaseMeiElement{
    Chan();
    virtual ~Chan() {};

    string getNumValue() throw (AttributeNotFoundException);

    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(string _num);
    bool hasNum();

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Chan);
};

/** \brief  channel pressure ― MIDI channel pressure/after touch.
 *
 * The value of the num attribute must be in the range 0-127..
 */
struct ChanPr : public BaseMeiElement{
    ChanPr();
    virtual ~ChanPr() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidinumberMixIn    m_Midinumber;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(ChanPr);
};

/** \brief  cue ― MIDI cue point.
 */
struct Cue : public BaseMeiElement{
    Cue();
    virtual ~Cue() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Cue);
};

/** \brief  hex ― Arbitrary MIDI data in hexadecimal form.
 *
 * The element's content must be wrapped in a CDATA section to avoid parsing          
 *          errors..
 */
struct Hex : public BaseMeiElement{
    Hex();
    virtual ~Hex() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Hex);
};

/** \brief  marker ― MIDI marker meta-event.
 */
struct Marker : public BaseMeiElement{
    Marker();
    virtual ~Marker() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Marker);
};

/** \brief  meta text ― MIDI text meta-event.
 */
struct MetaText : public BaseMeiElement{
    MetaText();
    virtual ~MetaText() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(MetaText);
};

/** \brief  midi ― Container for elements that contain information useful when generating
 *          MIDI output.
 *
 * The n attribute can be used to differentiate between multiple MIDI data streams,          
 *          e.g. quantized/unquantized, straight/swing, ornamented/as notated, etc..
 */
struct Midi : public BaseMeiElement{
    Midi();
    virtual ~Midi() {};

    CommonMixIn    m_Common;
    LayeridentMixIn    m_Layerident;
    StaffidentMixIn    m_Staffident;
    EventMixIn    m_Event;
    ControleventMixIn    m_Controlevent;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Midi);
};

/** \brief  note-off ― MIDI note-off event.
 */
struct NoteOff : public BaseMeiElement{
    NoteOff();
    virtual ~NoteOff() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidinumberMixIn    m_Midinumber;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(NoteOff);
};

/** \brief  note-on ― MIDI note-on event.
 */
struct NoteOn : public BaseMeiElement{
    NoteOn();
    virtual ~NoteOn() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidinumberMixIn    m_Midinumber;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(NoteOn);
};

/** \brief  port ― MIDI port.
 *
 * The num attribute must be in the range 0-127..
 */
struct Port : public BaseMeiElement{
    Port();
    virtual ~Port() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidinumberMixIn    m_Midinumber;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Port);
};

/** \brief  program ― MIDI program change.
 *
 * The num attribute must be in the range 0-127..
 */
struct Prog : public BaseMeiElement{
    Prog();
    virtual ~Prog() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidinumberMixIn    m_Midinumber;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Prog);
};

/** \brief  sequence number ― MIDI sequence number.
 */
struct SeqNum : public BaseMeiElement{
    SeqNum();
    virtual ~SeqNum() {};

    string getNumValue() throw (AttributeNotFoundException);

    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(string _num);
    bool hasNum();

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(SeqNum);
};

/** \brief  track name ― MIDI track/sequence name.
 */
struct TrkName : public BaseMeiElement{
    TrkName();
    virtual ~TrkName() {};

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(TrkName);
};

/** \brief  velocity ― MIDI Note-on/off velocity.
 *
 * The num attribute must be in the range 0-127..
 */
struct Vel : public BaseMeiElement{
    Vel();
    virtual ~Vel() {};

    string getFormValue() throw (AttributeNotFoundException);

    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(string _form);
    bool hasForm();

    CommonMixIn    m_Common;
    TupletAnlMixIn    m_TupletAnl;
    CommonAnlMixIn    m_CommonAnl;
    RdgAnlMixIn    m_RdgAnl;
    MidinumberMixIn    m_Midinumber;
    MidiEventMixIn    m_MidiEvent;
    private:
        //REGISTER_DECLARATION(Vel);
};

#endif // MIDI_H_