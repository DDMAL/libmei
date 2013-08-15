#include "midimixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_channelizedMixIn::Mei_channelizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_channelizedMixIn::~Mei_channelizedMixIn() {}
MeiAttribute* mei::Mei_channelizedMixIn::getMidiChannel() {
    if (!b->hasAttribute("midi.channel")) {
        throw AttributeNotFoundException("midi.channel");
    }
    return b->getAttribute("midi.channel");
};

void mei::Mei_channelizedMixIn::setMidiChannel(std::string _midichannel) {
    MeiAttribute *a = new MeiAttribute("midi.channel", _midichannel);
    b->addAttribute(a);
};

bool mei::Mei_channelizedMixIn::hasMidiChannel() {
    return b->hasAttribute("midi.channel");
};

void mei::Mei_channelizedMixIn::removeMidiChannel() {
    b->removeAttribute("midi.channel");
};
MeiAttribute* mei::Mei_channelizedMixIn::getMidiDuty() {
    if (!b->hasAttribute("midi.duty")) {
        throw AttributeNotFoundException("midi.duty");
    }
    return b->getAttribute("midi.duty");
};

void mei::Mei_channelizedMixIn::setMidiDuty(std::string _mididuty) {
    MeiAttribute *a = new MeiAttribute("midi.duty", _mididuty);
    b->addAttribute(a);
};

bool mei::Mei_channelizedMixIn::hasMidiDuty() {
    return b->hasAttribute("midi.duty");
};

void mei::Mei_channelizedMixIn::removeMidiDuty() {
    b->removeAttribute("midi.duty");
};
MeiAttribute* mei::Mei_channelizedMixIn::getMidiPort() {
    if (!b->hasAttribute("midi.port")) {
        throw AttributeNotFoundException("midi.port");
    }
    return b->getAttribute("midi.port");
};

void mei::Mei_channelizedMixIn::setMidiPort(std::string _midiport) {
    MeiAttribute *a = new MeiAttribute("midi.port", _midiport);
    b->addAttribute(a);
};

bool mei::Mei_channelizedMixIn::hasMidiPort() {
    return b->hasAttribute("midi.port");
};

void mei::Mei_channelizedMixIn::removeMidiPort() {
    b->removeAttribute("midi.port");
};
MeiAttribute* mei::Mei_channelizedMixIn::getMidiTrack() {
    if (!b->hasAttribute("midi.track")) {
        throw AttributeNotFoundException("midi.track");
    }
    return b->getAttribute("midi.track");
};

void mei::Mei_channelizedMixIn::setMidiTrack(std::string _miditrack) {
    MeiAttribute *a = new MeiAttribute("midi.track", _miditrack);
    b->addAttribute(a);
};

bool mei::Mei_channelizedMixIn::hasMidiTrack() {
    return b->hasAttribute("midi.track");
};

void mei::Mei_channelizedMixIn::removeMidiTrack() {
    b->removeAttribute("midi.track");
};

/* include <midi.trackmixin> */
mei::Mei_midiinstrumentMixIn::Mei_midiinstrumentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_midiinstrumentMixIn::~Mei_midiinstrumentMixIn() {}
MeiAttribute* mei::Mei_midiinstrumentMixIn::getMidiInstrnum() {
    if (!b->hasAttribute("midi.instrnum")) {
        throw AttributeNotFoundException("midi.instrnum");
    }
    return b->getAttribute("midi.instrnum");
};

void mei::Mei_midiinstrumentMixIn::setMidiInstrnum(std::string _midiinstrnum) {
    MeiAttribute *a = new MeiAttribute("midi.instrnum", _midiinstrnum);
    b->addAttribute(a);
};

bool mei::Mei_midiinstrumentMixIn::hasMidiInstrnum() {
    return b->hasAttribute("midi.instrnum");
};

void mei::Mei_midiinstrumentMixIn::removeMidiInstrnum() {
    b->removeAttribute("midi.instrnum");
};
MeiAttribute* mei::Mei_midiinstrumentMixIn::getMidiInstrname() {
    if (!b->hasAttribute("midi.instrname")) {
        throw AttributeNotFoundException("midi.instrname");
    }
    return b->getAttribute("midi.instrname");
};

void mei::Mei_midiinstrumentMixIn::setMidiInstrname(std::string _midiinstrname) {
    MeiAttribute *a = new MeiAttribute("midi.instrname", _midiinstrname);
    b->addAttribute(a);
};

bool mei::Mei_midiinstrumentMixIn::hasMidiInstrname() {
    return b->hasAttribute("midi.instrname");
};

void mei::Mei_midiinstrumentMixIn::removeMidiInstrname() {
    b->removeAttribute("midi.instrname");
};

/* include <midi.instrnamemixin> */
mei::Mei_midinumberMixIn::Mei_midinumberMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_midinumberMixIn::~Mei_midinumberMixIn() {}
MeiAttribute* mei::Mei_midinumberMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->getAttribute("num");
};

void mei::Mei_midinumberMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::Mei_midinumberMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::Mei_midinumberMixIn::removeNum() {
    b->removeAttribute("num");
};

/* include <nummixin> */
mei::Mei_miditempoMixIn::Mei_miditempoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_miditempoMixIn::~Mei_miditempoMixIn() {}
MeiAttribute* mei::Mei_miditempoMixIn::getMidiTempo() {
    if (!b->hasAttribute("midi.tempo")) {
        throw AttributeNotFoundException("midi.tempo");
    }
    return b->getAttribute("midi.tempo");
};

void mei::Mei_miditempoMixIn::setMidiTempo(std::string _miditempo) {
    MeiAttribute *a = new MeiAttribute("midi.tempo", _miditempo);
    b->addAttribute(a);
};

bool mei::Mei_miditempoMixIn::hasMidiTempo() {
    return b->hasAttribute("midi.tempo");
};

void mei::Mei_miditempoMixIn::removeMidiTempo() {
    b->removeAttribute("midi.tempo");
};

/* include <midi.tempomixin> */
mei::Mei_midivalueMixIn::Mei_midivalueMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_midivalueMixIn::~Mei_midivalueMixIn() {}
MeiAttribute* mei::Mei_midivalueMixIn::getVal() {
    if (!b->hasAttribute("val")) {
        throw AttributeNotFoundException("val");
    }
    return b->getAttribute("val");
};

void mei::Mei_midivalueMixIn::setVal(std::string _val) {
    MeiAttribute *a = new MeiAttribute("val", _val);
    b->addAttribute(a);
};

bool mei::Mei_midivalueMixIn::hasVal() {
    return b->hasAttribute("val");
};

void mei::Mei_midivalueMixIn::removeVal() {
    b->removeAttribute("val");
};

/* include <valmixin> */
mei::Mei_timebaseMixIn::Mei_timebaseMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_timebaseMixIn::~Mei_timebaseMixIn() {}
MeiAttribute* mei::Mei_timebaseMixIn::getPpq() {
    if (!b->hasAttribute("ppq")) {
        throw AttributeNotFoundException("ppq");
    }
    return b->getAttribute("ppq");
};

void mei::Mei_timebaseMixIn::setPpq(std::string _ppq) {
    MeiAttribute *a = new MeiAttribute("ppq", _ppq);
    b->addAttribute(a);
};

bool mei::Mei_timebaseMixIn::hasPpq() {
    return b->hasAttribute("ppq");
};

void mei::Mei_timebaseMixIn::removePpq() {
    b->removeAttribute("ppq");
};

/* include <ppqmixin> */


