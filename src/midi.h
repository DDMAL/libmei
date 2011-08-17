
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
#include "exceptions.h"
#include "analysismixins.h"
#include "linkalignmixins.h"
#include "sharedmixins.h"
#include "midimixins.h"



/** \brief   control change ― MIDI parameter/control change. The num attribute specifies
    * parameter number, while val contains the parameter value. Each must fall in the
    * range 0-127.
    */

struct Cc : public BaseMeiElement {
    Cc();
    virtual ~Cc() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    MidinumberMixIn    m_Midinumber;
    MidivalueMixIn    m_Midivalue;
    private:
        //REGISTER_DECLARATION(Cc);
};


/** \brief   channel ― MIDI channel assignment.
    */

struct Chan : public BaseMeiElement {
    Chan();
    virtual ~Chan() {};
    
    /** \brief   along with numbase, describes duration as a ratio. num is the first value in the
    * ratio, while numbase is the second.
    */
    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(std::string _num);
    bool hasNum();
    void removeNum();

    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    private:
        //REGISTER_DECLARATION(Chan);
};


/** \brief   channel pressure ― MIDI channel pressure/after touch. The value of the num
    * attribute must be in the range 0-127.
    */

struct Chanpr : public BaseMeiElement {
    Chanpr();
    virtual ~Chanpr() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    MidinumberMixIn    m_Midinumber;
    private:
        //REGISTER_DECLARATION(Chanpr);
};


/** \brief   cue ― MIDI cue point.
    */

struct Cue : public BaseMeiElement {
    Cue();
    virtual ~Cue() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    private:
        //REGISTER_DECLARATION(Cue);
};


/** \brief   hex ― Arbitrary MIDI data in hexadecimal form. The element's content must be
    * wrapped in a CDATA section to avoid parsing errors.
    */

struct Hex : public BaseMeiElement {
    Hex();
    virtual ~Hex() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    private:
        //REGISTER_DECLARATION(Hex);
};


/** \brief   marker ― MIDI marker meta-event.
    */

struct Marker : public BaseMeiElement {
    Marker();
    virtual ~Marker() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    private:
        //REGISTER_DECLARATION(Marker);
};


/** \brief   meta text ― MIDI text meta-event.
    */

struct Metatext : public BaseMeiElement {
    Metatext();
    virtual ~Metatext() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    private:
        //REGISTER_DECLARATION(Metatext);
};


/** \brief   midi ― Container for elements that contain information useful when generating
    * MIDI output. The n attribute can be used to differentiate between multiple MIDI
    * data streams, e.g. quantized/unquantized, straight/swing, ornamented/as notated,
    * etc.
    */

struct Midi : public BaseMeiElement {
    Midi();
    virtual ~Midi() {};
    
    
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    private:
        //REGISTER_DECLARATION(Midi);
};


/** \brief   note-off ― MIDI note-off event.
    */

struct Noteoff : public BaseMeiElement {
    Noteoff();
    virtual ~Noteoff() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    MidinumberMixIn    m_Midinumber;
    private:
        //REGISTER_DECLARATION(Noteoff);
};


/** \brief   note-on ― MIDI note-on event.
    */

struct Noteon : public BaseMeiElement {
    Noteon();
    virtual ~Noteon() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    MidinumberMixIn    m_Midinumber;
    private:
        //REGISTER_DECLARATION(Noteon);
};


/** \brief   port ― MIDI port. The num attribute must be in the range 0-127.
    */

struct Port : public BaseMeiElement {
    Port();
    virtual ~Port() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    MidinumberMixIn    m_Midinumber;
    private:
        //REGISTER_DECLARATION(Port);
};


/** \brief   program ― MIDI program change. The num attribute must be in the range 0-127.
    */

struct Prog : public BaseMeiElement {
    Prog();
    virtual ~Prog() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    MidinumberMixIn    m_Midinumber;
    private:
        //REGISTER_DECLARATION(Prog);
};


/** \brief   sequence number ― MIDI sequence number.
    */

struct Seqnum : public BaseMeiElement {
    Seqnum();
    virtual ~Seqnum() {};
    
    /** \brief   along with numbase, describes duration as a ratio. num is the first value in the
    * ratio, while numbase is the second.
    */
    string getNumValue() throw (AttributeNotFoundException);
    MeiAttribute* getNum() throw (AttributeNotFoundException);
    void setNum(std::string _num);
    bool hasNum();
    void removeNum();

    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    private:
        //REGISTER_DECLARATION(Seqnum);
};


/** \brief   track name ― MIDI track/sequence name.
    */

struct Trkname : public BaseMeiElement {
    Trkname();
    virtual ~Trkname() {};
    
    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    private:
        //REGISTER_DECLARATION(Trkname);
};


/** \brief   velocity ― MIDI Note-on/off velocity. The num attribute must be in the range
    * 0-127.
    */

struct Vel : public BaseMeiElement {
    Vel();
    virtual ~Vel() {};
    
    /** \brief   records the function of the dot.
    */
    string getFormValue() throw (AttributeNotFoundException);
    MeiAttribute* getForm() throw (AttributeNotFoundException);
    void setForm(std::string _form);
    bool hasForm();
    void removeForm();

    
    CommonAnlMixIn    m_CommonAnl;
    AlignmentMixIn    m_Alignment;
    CommonMixIn    m_Common;
    StaffidentMixIn    m_Staffident;
    LayeridentMixIn    m_Layerident;
    TimestampMusicalMixIn    m_TimestampMusical;
    MidinumberMixIn    m_Midinumber;
    private:
        //REGISTER_DECLARATION(Vel);
};


#endif // MIDI_H_
