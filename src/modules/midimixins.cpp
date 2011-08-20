#include "midimixins.h"

#include <string>
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;

mei::ChannelizedMixIn::ChannelizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::ChannelizedMixIn::~ChannelizedMixIn() {}
MeiAttribute* mei::ChannelizedMixIn::getMidiChannel() {
    if (!b->hasAttribute("midi.channel")) {
        throw AttributeNotFoundException("midi.channel");
    }
    return b->getAttribute("midi.channel");
};

void mei::ChannelizedMixIn::setMidiChannel(std::string _midichannel) {
    if (!b->hasAttribute("midi.channel")) {
        MeiAttribute *a = new MeiAttribute("midi.channel", _midichannel);
        b->addAttribute(a);
    }
};

bool mei::ChannelizedMixIn::hasMidiChannel() {
    return b->hasAttribute("midi.channel");
};

void mei::ChannelizedMixIn::removeMidiChannel() {
    b->removeAttribute("midi.channel");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiDuty() {
    if (!b->hasAttribute("midi.duty")) {
        throw AttributeNotFoundException("midi.duty");
    }
    return b->getAttribute("midi.duty");
};

void mei::ChannelizedMixIn::setMidiDuty(std::string _mididuty) {
    if (!b->hasAttribute("midi.duty")) {
        MeiAttribute *a = new MeiAttribute("midi.duty", _mididuty);
        b->addAttribute(a);
    }
};

bool mei::ChannelizedMixIn::hasMidiDuty() {
    return b->hasAttribute("midi.duty");
};

void mei::ChannelizedMixIn::removeMidiDuty() {
    b->removeAttribute("midi.duty");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiPort() {
    if (!b->hasAttribute("midi.port")) {
        throw AttributeNotFoundException("midi.port");
    }
    return b->getAttribute("midi.port");
};

void mei::ChannelizedMixIn::setMidiPort(std::string _midiport) {
    if (!b->hasAttribute("midi.port")) {
        MeiAttribute *a = new MeiAttribute("midi.port", _midiport);
        b->addAttribute(a);
    }
};

bool mei::ChannelizedMixIn::hasMidiPort() {
    return b->hasAttribute("midi.port");
};

void mei::ChannelizedMixIn::removeMidiPort() {
    b->removeAttribute("midi.port");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiTrack() {
    if (!b->hasAttribute("midi.track")) {
        throw AttributeNotFoundException("midi.track");
    }
    return b->getAttribute("midi.track");
};

void mei::ChannelizedMixIn::setMidiTrack(std::string _miditrack) {
    if (!b->hasAttribute("midi.track")) {
        MeiAttribute *a = new MeiAttribute("midi.track", _miditrack);
        b->addAttribute(a);
    }
};

bool mei::ChannelizedMixIn::hasMidiTrack() {
    return b->hasAttribute("midi.track");
};

void mei::ChannelizedMixIn::removeMidiTrack() {
    b->removeAttribute("midi.track");
};

mei::MidiinstrumentMixIn::MidiinstrumentMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidiinstrumentMixIn::~MidiinstrumentMixIn() {}
MeiAttribute* mei::MidiinstrumentMixIn::getMidiInstrnum() {
    if (!b->hasAttribute("midi.instrnum")) {
        throw AttributeNotFoundException("midi.instrnum");
    }
    return b->getAttribute("midi.instrnum");
};

void mei::MidiinstrumentMixIn::setMidiInstrnum(std::string _midiinstrnum) {
    if (!b->hasAttribute("midi.instrnum")) {
        MeiAttribute *a = new MeiAttribute("midi.instrnum", _midiinstrnum);
        b->addAttribute(a);
    }
};

bool mei::MidiinstrumentMixIn::hasMidiInstrnum() {
    return b->hasAttribute("midi.instrnum");
};

void mei::MidiinstrumentMixIn::removeMidiInstrnum() {
    b->removeAttribute("midi.instrnum");
};
MeiAttribute* mei::MidiinstrumentMixIn::getMidiInstrname() {
    if (!b->hasAttribute("midi.instrname")) {
        throw AttributeNotFoundException("midi.instrname");
    }
    return b->getAttribute("midi.instrname");
};

void mei::MidiinstrumentMixIn::setMidiInstrname(std::string _midiinstrname) {
    if (!b->hasAttribute("midi.instrname")) {
        MeiAttribute *a = new MeiAttribute("midi.instrname", _midiinstrname);
        b->addAttribute(a);
    }
};

bool mei::MidiinstrumentMixIn::hasMidiInstrname() {
    return b->hasAttribute("midi.instrname");
};

void mei::MidiinstrumentMixIn::removeMidiInstrname() {
    b->removeAttribute("midi.instrname");
};

mei::MidinumberMixIn::MidinumberMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidinumberMixIn::~MidinumberMixIn() {}
MeiAttribute* mei::MidinumberMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->getAttribute("num");
};

void mei::MidinumberMixIn::setNum(std::string _num) {
    if (!b->hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        b->addAttribute(a);
    }
};

bool mei::MidinumberMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::MidinumberMixIn::removeNum() {
    b->removeAttribute("num");
};

mei::MiditempoMixIn::MiditempoMixIn(MeiElement *b) {
    this->b = b;
};

mei::MiditempoMixIn::~MiditempoMixIn() {}
MeiAttribute* mei::MiditempoMixIn::getMidiTempo() {
    if (!b->hasAttribute("midi.tempo")) {
        throw AttributeNotFoundException("midi.tempo");
    }
    return b->getAttribute("midi.tempo");
};

void mei::MiditempoMixIn::setMidiTempo(std::string _miditempo) {
    if (!b->hasAttribute("midi.tempo")) {
        MeiAttribute *a = new MeiAttribute("midi.tempo", _miditempo);
        b->addAttribute(a);
    }
};

bool mei::MiditempoMixIn::hasMidiTempo() {
    return b->hasAttribute("midi.tempo");
};

void mei::MiditempoMixIn::removeMidiTempo() {
    b->removeAttribute("midi.tempo");
};

mei::MidivalueMixIn::MidivalueMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidivalueMixIn::~MidivalueMixIn() {}
MeiAttribute* mei::MidivalueMixIn::getVal() {
    if (!b->hasAttribute("val")) {
        throw AttributeNotFoundException("val");
    }
    return b->getAttribute("val");
};

void mei::MidivalueMixIn::setVal(std::string _val) {
    if (!b->hasAttribute("val")) {
        MeiAttribute *a = new MeiAttribute("val", _val);
        b->addAttribute(a);
    }
};

bool mei::MidivalueMixIn::hasVal() {
    return b->hasAttribute("val");
};

void mei::MidivalueMixIn::removeVal() {
    b->removeAttribute("val");
};

mei::TimebaseMixIn::TimebaseMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimebaseMixIn::~TimebaseMixIn() {}
MeiAttribute* mei::TimebaseMixIn::getPpq() {
    if (!b->hasAttribute("ppq")) {
        throw AttributeNotFoundException("ppq");
    }
    return b->getAttribute("ppq");
};

void mei::TimebaseMixIn::setPpq(std::string _ppq) {
    if (!b->hasAttribute("ppq")) {
        MeiAttribute *a = new MeiAttribute("ppq", _ppq);
        b->addAttribute(a);
    }
};

bool mei::TimebaseMixIn::hasPpq() {
    return b->hasAttribute("ppq");
};

void mei::TimebaseMixIn::removePpq() {
    b->removeAttribute("ppq");
};



