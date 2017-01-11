#include "midimixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ChannelizedMixIn::ChannelizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::ChannelizedMixIn::~ChannelizedMixIn() {}
MeiAttribute* mei::ChannelizedMixIn::getMidiChannel() {
    if (!b->hasAttribute("midi.channel")) {
        return NULL;
    }
    return b->getAttribute("midi.channel");
};

void mei::ChannelizedMixIn::setMidiChannel(std::string _midichannel) {
    MeiAttribute *a = new MeiAttribute("midi.channel", _midichannel);
    b->addAttribute(a);
};

bool mei::ChannelizedMixIn::hasMidiChannel() {
    return b->hasAttribute("midi.channel");
};

void mei::ChannelizedMixIn::removeMidiChannel() {
    b->removeAttribute("midi.channel");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiDuty() {
    if (!b->hasAttribute("midi.duty")) {
        return NULL;
    }
    return b->getAttribute("midi.duty");
};

void mei::ChannelizedMixIn::setMidiDuty(std::string _mididuty) {
    MeiAttribute *a = new MeiAttribute("midi.duty", _mididuty);
    b->addAttribute(a);
};

bool mei::ChannelizedMixIn::hasMidiDuty() {
    return b->hasAttribute("midi.duty");
};

void mei::ChannelizedMixIn::removeMidiDuty() {
    b->removeAttribute("midi.duty");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiPort() {
    if (!b->hasAttribute("midi.port")) {
        return NULL;
    }
    return b->getAttribute("midi.port");
};

void mei::ChannelizedMixIn::setMidiPort(std::string _midiport) {
    MeiAttribute *a = new MeiAttribute("midi.port", _midiport);
    b->addAttribute(a);
};

bool mei::ChannelizedMixIn::hasMidiPort() {
    return b->hasAttribute("midi.port");
};

void mei::ChannelizedMixIn::removeMidiPort() {
    b->removeAttribute("midi.port");
};
MeiAttribute* mei::ChannelizedMixIn::getMidiTrack() {
    if (!b->hasAttribute("midi.track")) {
        return NULL;
    }
    return b->getAttribute("midi.track");
};

void mei::ChannelizedMixIn::setMidiTrack(std::string _miditrack) {
    MeiAttribute *a = new MeiAttribute("midi.track", _miditrack);
    b->addAttribute(a);
};

bool mei::ChannelizedMixIn::hasMidiTrack() {
    return b->hasAttribute("midi.track");
};

void mei::ChannelizedMixIn::removeMidiTrack() {
    b->removeAttribute("midi.track");
};

/* include <midi.trackmixin> */
mei::MidiinstrumentMixIn::MidiinstrumentMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidiinstrumentMixIn::~MidiinstrumentMixIn() {}
MeiAttribute* mei::MidiinstrumentMixIn::getMidiInstrnum() {
    if (!b->hasAttribute("midi.instrnum")) {
        return NULL;
    }
    return b->getAttribute("midi.instrnum");
};

void mei::MidiinstrumentMixIn::setMidiInstrnum(std::string _midiinstrnum) {
    MeiAttribute *a = new MeiAttribute("midi.instrnum", _midiinstrnum);
    b->addAttribute(a);
};

bool mei::MidiinstrumentMixIn::hasMidiInstrnum() {
    return b->hasAttribute("midi.instrnum");
};

void mei::MidiinstrumentMixIn::removeMidiInstrnum() {
    b->removeAttribute("midi.instrnum");
};
MeiAttribute* mei::MidiinstrumentMixIn::getMidiInstrname() {
    if (!b->hasAttribute("midi.instrname")) {
        return NULL;
    }
    return b->getAttribute("midi.instrname");
};

void mei::MidiinstrumentMixIn::setMidiInstrname(std::string _midiinstrname) {
    MeiAttribute *a = new MeiAttribute("midi.instrname", _midiinstrname);
    b->addAttribute(a);
};

bool mei::MidiinstrumentMixIn::hasMidiInstrname() {
    return b->hasAttribute("midi.instrname");
};

void mei::MidiinstrumentMixIn::removeMidiInstrname() {
    b->removeAttribute("midi.instrname");
};
MeiAttribute* mei::MidiinstrumentMixIn::getMidiPan() {
    if (!b->hasAttribute("midi.pan")) {
        return NULL;
    }
    return b->getAttribute("midi.pan");
};

void mei::MidiinstrumentMixIn::setMidiPan(std::string _midipan) {
    MeiAttribute *a = new MeiAttribute("midi.pan", _midipan);
    b->addAttribute(a);
};

bool mei::MidiinstrumentMixIn::hasMidiPan() {
    return b->hasAttribute("midi.pan");
};

void mei::MidiinstrumentMixIn::removeMidiPan() {
    b->removeAttribute("midi.pan");
};
MeiAttribute* mei::MidiinstrumentMixIn::getMidiVolume() {
    if (!b->hasAttribute("midi.volume")) {
        return NULL;
    }
    return b->getAttribute("midi.volume");
};

void mei::MidiinstrumentMixIn::setMidiVolume(std::string _midivolume) {
    MeiAttribute *a = new MeiAttribute("midi.volume", _midivolume);
    b->addAttribute(a);
};

bool mei::MidiinstrumentMixIn::hasMidiVolume() {
    return b->hasAttribute("midi.volume");
};

void mei::MidiinstrumentMixIn::removeMidiVolume() {
    b->removeAttribute("midi.volume");
};

/* include <midi.volumemixin> */
mei::MidinumberMixIn::MidinumberMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidinumberMixIn::~MidinumberMixIn() {}
MeiAttribute* mei::MidinumberMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        return NULL;
    }
    return b->getAttribute("num");
};

void mei::MidinumberMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::MidinumberMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::MidinumberMixIn::removeNum() {
    b->removeAttribute("num");
};

/* include <nummixin> */
mei::MiditempoMixIn::MiditempoMixIn(MeiElement *b) {
    this->b = b;
};

mei::MiditempoMixIn::~MiditempoMixIn() {}
MeiAttribute* mei::MiditempoMixIn::getMidiBpm() {
    if (!b->hasAttribute("midi.bpm")) {
        return NULL;
    }
    return b->getAttribute("midi.bpm");
};

void mei::MiditempoMixIn::setMidiBpm(std::string _midibpm) {
    MeiAttribute *a = new MeiAttribute("midi.bpm", _midibpm);
    b->addAttribute(a);
};

bool mei::MiditempoMixIn::hasMidiBpm() {
    return b->hasAttribute("midi.bpm");
};

void mei::MiditempoMixIn::removeMidiBpm() {
    b->removeAttribute("midi.bpm");
};
MeiAttribute* mei::MiditempoMixIn::getMidiMspb() {
    if (!b->hasAttribute("midi.mspb")) {
        return NULL;
    }
    return b->getAttribute("midi.mspb");
};

void mei::MiditempoMixIn::setMidiMspb(std::string _midimspb) {
    MeiAttribute *a = new MeiAttribute("midi.mspb", _midimspb);
    b->addAttribute(a);
};

bool mei::MiditempoMixIn::hasMidiMspb() {
    return b->hasAttribute("midi.mspb");
};

void mei::MiditempoMixIn::removeMidiMspb() {
    b->removeAttribute("midi.mspb");
};

/* include <midi.mspbmixin> */
mei::MidivalueMixIn::MidivalueMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidivalueMixIn::~MidivalueMixIn() {}
MeiAttribute* mei::MidivalueMixIn::getVal() {
    if (!b->hasAttribute("val")) {
        return NULL;
    }
    return b->getAttribute("val");
};

void mei::MidivalueMixIn::setVal(std::string _val) {
    MeiAttribute *a = new MeiAttribute("val", _val);
    b->addAttribute(a);
};

bool mei::MidivalueMixIn::hasVal() {
    return b->hasAttribute("val");
};

void mei::MidivalueMixIn::removeVal() {
    b->removeAttribute("val");
};

/* include <valmixin> */
mei::Midivalue2MixIn::Midivalue2MixIn(MeiElement *b) {
    this->b = b;
};

mei::Midivalue2MixIn::~Midivalue2MixIn() {}
MeiAttribute* mei::Midivalue2MixIn::getVal2() {
    if (!b->hasAttribute("val2")) {
        return NULL;
    }
    return b->getAttribute("val2");
};

void mei::Midivalue2MixIn::setVal2(std::string _val2) {
    MeiAttribute *a = new MeiAttribute("val2", _val2);
    b->addAttribute(a);
};

bool mei::Midivalue2MixIn::hasVal2() {
    return b->hasAttribute("val2");
};

void mei::Midivalue2MixIn::removeVal2() {
    b->removeAttribute("val2");
};

/* include <val2mixin> */
mei::MidivelocityMixIn::MidivelocityMixIn(MeiElement *b) {
    this->b = b;
};

mei::MidivelocityMixIn::~MidivelocityMixIn() {}
MeiAttribute* mei::MidivelocityMixIn::getVel() {
    if (!b->hasAttribute("vel")) {
        return NULL;
    }
    return b->getAttribute("vel");
};

void mei::MidivelocityMixIn::setVel(std::string _vel) {
    MeiAttribute *a = new MeiAttribute("vel", _vel);
    b->addAttribute(a);
};

bool mei::MidivelocityMixIn::hasVel() {
    return b->hasAttribute("vel");
};

void mei::MidivelocityMixIn::removeVel() {
    b->removeAttribute("vel");
};

/* include <velmixin> */
mei::TimebaseMixIn::TimebaseMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimebaseMixIn::~TimebaseMixIn() {}
MeiAttribute* mei::TimebaseMixIn::getPpq() {
    if (!b->hasAttribute("ppq")) {
        return NULL;
    }
    return b->getAttribute("ppq");
};

void mei::TimebaseMixIn::setPpq(std::string _ppq) {
    MeiAttribute *a = new MeiAttribute("ppq", _ppq);
    b->addAttribute(a);
};

bool mei::TimebaseMixIn::hasPpq() {
    return b->hasAttribute("ppq");
};

void mei::TimebaseMixIn::removePpq() {
    b->removeAttribute("ppq");
};

/* include <ppqmixin> */


