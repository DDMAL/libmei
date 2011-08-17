

#include "midimixins.h"
using std::string;


ChannelizedMixIn::ChannelizedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ChannelizedMixIn::getMidiChannelValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.channel")) {
        throw AttributeNotFoundException("midi.channel");
    }
    return b->m_Base.getAttributeValue("midi.channel");
};

MeiAttribute* ChannelizedMixIn::getMidiChannel() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.channel")) {
        throw AttributeNotFoundException("midi.channel");
    }
    return b->m_Base.getAttribute("midi.channel");
};

void ChannelizedMixIn::setMidiChannel(std::string _midichannel) {
    if (!b->m_Base.hasAttribute("midi.channel")) {
        MeiAttribute *a = new MeiAttribute("midi.channel", _midichannel);
        b->m_Base.addAttribute(a);
    }
};

bool ChannelizedMixIn::hasMidiChannel() {
    return b->m_Base.hasAttribute("midi.channel");
};

void ChannelizedMixIn::removeMidiChannel() {
    b->m_Base.removeAttribute("midi.channel");
};

string ChannelizedMixIn::getMidiDutyValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.duty")) {
        throw AttributeNotFoundException("midi.duty");
    }
    return b->m_Base.getAttributeValue("midi.duty");
};

MeiAttribute* ChannelizedMixIn::getMidiDuty() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.duty")) {
        throw AttributeNotFoundException("midi.duty");
    }
    return b->m_Base.getAttribute("midi.duty");
};

void ChannelizedMixIn::setMidiDuty(std::string _mididuty) {
    if (!b->m_Base.hasAttribute("midi.duty")) {
        MeiAttribute *a = new MeiAttribute("midi.duty", _mididuty);
        b->m_Base.addAttribute(a);
    }
};

bool ChannelizedMixIn::hasMidiDuty() {
    return b->m_Base.hasAttribute("midi.duty");
};

void ChannelizedMixIn::removeMidiDuty() {
    b->m_Base.removeAttribute("midi.duty");
};

string ChannelizedMixIn::getMidiPortValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.port")) {
        throw AttributeNotFoundException("midi.port");
    }
    return b->m_Base.getAttributeValue("midi.port");
};

MeiAttribute* ChannelizedMixIn::getMidiPort() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.port")) {
        throw AttributeNotFoundException("midi.port");
    }
    return b->m_Base.getAttribute("midi.port");
};

void ChannelizedMixIn::setMidiPort(std::string _midiport) {
    if (!b->m_Base.hasAttribute("midi.port")) {
        MeiAttribute *a = new MeiAttribute("midi.port", _midiport);
        b->m_Base.addAttribute(a);
    }
};

bool ChannelizedMixIn::hasMidiPort() {
    return b->m_Base.hasAttribute("midi.port");
};

void ChannelizedMixIn::removeMidiPort() {
    b->m_Base.removeAttribute("midi.port");
};

string ChannelizedMixIn::getMidiTrackValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.track")) {
        throw AttributeNotFoundException("midi.track");
    }
    return b->m_Base.getAttributeValue("midi.track");
};

MeiAttribute* ChannelizedMixIn::getMidiTrack() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.track")) {
        throw AttributeNotFoundException("midi.track");
    }
    return b->m_Base.getAttribute("midi.track");
};

void ChannelizedMixIn::setMidiTrack(std::string _miditrack) {
    if (!b->m_Base.hasAttribute("midi.track")) {
        MeiAttribute *a = new MeiAttribute("midi.track", _miditrack);
        b->m_Base.addAttribute(a);
    }
};

bool ChannelizedMixIn::hasMidiTrack() {
    return b->m_Base.hasAttribute("midi.track");
};

void ChannelizedMixIn::removeMidiTrack() {
    b->m_Base.removeAttribute("midi.track");
};


MidiinstrumentMixIn::MidiinstrumentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MidiinstrumentMixIn::getMidiInstrnumValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.instrnum")) {
        throw AttributeNotFoundException("midi.instrnum");
    }
    return b->m_Base.getAttributeValue("midi.instrnum");
};

MeiAttribute* MidiinstrumentMixIn::getMidiInstrnum() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.instrnum")) {
        throw AttributeNotFoundException("midi.instrnum");
    }
    return b->m_Base.getAttribute("midi.instrnum");
};

void MidiinstrumentMixIn::setMidiInstrnum(std::string _midiinstrnum) {
    if (!b->m_Base.hasAttribute("midi.instrnum")) {
        MeiAttribute *a = new MeiAttribute("midi.instrnum", _midiinstrnum);
        b->m_Base.addAttribute(a);
    }
};

bool MidiinstrumentMixIn::hasMidiInstrnum() {
    return b->m_Base.hasAttribute("midi.instrnum");
};

void MidiinstrumentMixIn::removeMidiInstrnum() {
    b->m_Base.removeAttribute("midi.instrnum");
};

string MidiinstrumentMixIn::getMidiInstrnameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.instrname")) {
        throw AttributeNotFoundException("midi.instrname");
    }
    return b->m_Base.getAttributeValue("midi.instrname");
};

MeiAttribute* MidiinstrumentMixIn::getMidiInstrname() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.instrname")) {
        throw AttributeNotFoundException("midi.instrname");
    }
    return b->m_Base.getAttribute("midi.instrname");
};

void MidiinstrumentMixIn::setMidiInstrname(std::string _midiinstrname) {
    if (!b->m_Base.hasAttribute("midi.instrname")) {
        MeiAttribute *a = new MeiAttribute("midi.instrname", _midiinstrname);
        b->m_Base.addAttribute(a);
    }
};

bool MidiinstrumentMixIn::hasMidiInstrname() {
    return b->m_Base.hasAttribute("midi.instrname");
};

void MidiinstrumentMixIn::removeMidiInstrname() {
    b->m_Base.removeAttribute("midi.instrname");
};


MidinumberMixIn::MidinumberMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MidinumberMixIn::getNumValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};

MeiAttribute* MidinumberMixIn::getNum() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};

void MidinumberMixIn::setNum(std::string _num) {
    if (!b->m_Base.hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};

bool MidinumberMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};

void MidinumberMixIn::removeNum() {
    b->m_Base.removeAttribute("num");
};


MiditempoMixIn::MiditempoMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MiditempoMixIn::getMidiTempoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.tempo")) {
        throw AttributeNotFoundException("midi.tempo");
    }
    return b->m_Base.getAttributeValue("midi.tempo");
};

MeiAttribute* MiditempoMixIn::getMidiTempo() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.tempo")) {
        throw AttributeNotFoundException("midi.tempo");
    }
    return b->m_Base.getAttribute("midi.tempo");
};

void MiditempoMixIn::setMidiTempo(std::string _miditempo) {
    if (!b->m_Base.hasAttribute("midi.tempo")) {
        MeiAttribute *a = new MeiAttribute("midi.tempo", _miditempo);
        b->m_Base.addAttribute(a);
    }
};

bool MiditempoMixIn::hasMidiTempo() {
    return b->m_Base.hasAttribute("midi.tempo");
};

void MiditempoMixIn::removeMidiTempo() {
    b->m_Base.removeAttribute("midi.tempo");
};


MidivalueMixIn::MidivalueMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MidivalueMixIn::getValValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("val")) {
        throw AttributeNotFoundException("val");
    }
    return b->m_Base.getAttributeValue("val");
};

MeiAttribute* MidivalueMixIn::getVal() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("val")) {
        throw AttributeNotFoundException("val");
    }
    return b->m_Base.getAttribute("val");
};

void MidivalueMixIn::setVal(std::string _val) {
    if (!b->m_Base.hasAttribute("val")) {
        MeiAttribute *a = new MeiAttribute("val", _val);
        b->m_Base.addAttribute(a);
    }
};

bool MidivalueMixIn::hasVal() {
    return b->m_Base.hasAttribute("val");
};

void MidivalueMixIn::removeVal() {
    b->m_Base.removeAttribute("val");
};


TimebaseMixIn::TimebaseMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TimebaseMixIn::getPpqValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ppq")) {
        throw AttributeNotFoundException("ppq");
    }
    return b->m_Base.getAttributeValue("ppq");
};

MeiAttribute* TimebaseMixIn::getPpq() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ppq")) {
        throw AttributeNotFoundException("ppq");
    }
    return b->m_Base.getAttribute("ppq");
};

void TimebaseMixIn::setPpq(std::string _ppq) {
    if (!b->m_Base.hasAttribute("ppq")) {
        MeiAttribute *a = new MeiAttribute("ppq", _ppq);
        b->m_Base.addAttribute(a);
    }
};

bool TimebaseMixIn::hasPpq() {
    return b->m_Base.hasAttribute("ppq");
};

void TimebaseMixIn::removePpq() {
    b->m_Base.removeAttribute("ppq");
};



