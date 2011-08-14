#include "midimixins.h"
using namespace std;

ChannelizedMixIn::ChannelizedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ChannelizedMixIn::getMidiChannelValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.channel")) {
        throw AttributeNotFoundException("midi.channel");
    }
    return b->m_Base.getAttributeValue("midi.channel");
};
            
MeiAttribute* ChannelizedMixIn::getMidiChannel() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.channel")) {
        throw AttributeNotFoundException("midi.channel");
    }
    return b->m_Base.getAttribute("midi.channel");
};
            
void ChannelizedMixIn::setMidiChannel(string _midichannel) {
    if(!b->m_Base.hasAttribute("midi.channel")) {
        MeiAttribute * a = new MeiAttribute("midi.channel", _midichannel);
        b->m_Base.addAttribute(a);
    }
};
            
bool ChannelizedMixIn::hasMidiChannel() {
    return b->m_Base.hasAttribute("midi.channel");
};
            
string ChannelizedMixIn::getMidiDutyValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.duty")) {
        throw AttributeNotFoundException("midi.duty");
    }
    return b->m_Base.getAttributeValue("midi.duty");
};
            
MeiAttribute* ChannelizedMixIn::getMidiDuty() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.duty")) {
        throw AttributeNotFoundException("midi.duty");
    }
    return b->m_Base.getAttribute("midi.duty");
};
            
void ChannelizedMixIn::setMidiDuty(string _mididuty) {
    if(!b->m_Base.hasAttribute("midi.duty")) {
        MeiAttribute * a = new MeiAttribute("midi.duty", _mididuty);
        b->m_Base.addAttribute(a);
    }
};
            
bool ChannelizedMixIn::hasMidiDuty() {
    return b->m_Base.hasAttribute("midi.duty");
};
            
string ChannelizedMixIn::getMidiPortValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.port")) {
        throw AttributeNotFoundException("midi.port");
    }
    return b->m_Base.getAttributeValue("midi.port");
};
            
MeiAttribute* ChannelizedMixIn::getMidiPort() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.port")) {
        throw AttributeNotFoundException("midi.port");
    }
    return b->m_Base.getAttribute("midi.port");
};
            
void ChannelizedMixIn::setMidiPort(string _midiport) {
    if(!b->m_Base.hasAttribute("midi.port")) {
        MeiAttribute * a = new MeiAttribute("midi.port", _midiport);
        b->m_Base.addAttribute(a);
    }
};
            
bool ChannelizedMixIn::hasMidiPort() {
    return b->m_Base.hasAttribute("midi.port");
};
            
string ChannelizedMixIn::getMidiTrackValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.track")) {
        throw AttributeNotFoundException("midi.track");
    }
    return b->m_Base.getAttributeValue("midi.track");
};
            
MeiAttribute* ChannelizedMixIn::getMidiTrack() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.track")) {
        throw AttributeNotFoundException("midi.track");
    }
    return b->m_Base.getAttribute("midi.track");
};
            
void ChannelizedMixIn::setMidiTrack(string _miditrack) {
    if(!b->m_Base.hasAttribute("midi.track")) {
        MeiAttribute * a = new MeiAttribute("midi.track", _miditrack);
        b->m_Base.addAttribute(a);
    }
};
            
bool ChannelizedMixIn::hasMidiTrack() {
    return b->m_Base.hasAttribute("midi.track");
};
            
MidinumberMixIn::MidinumberMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MidinumberMixIn::getNumValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};
            
MeiAttribute* MidinumberMixIn::getNum() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};
            
void MidinumberMixIn::setNum(string _num) {
    if(!b->m_Base.hasAttribute("num")) {
        MeiAttribute * a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};
            
bool MidinumberMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};
            
MiditempoMixIn::MiditempoMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MiditempoMixIn::getMidiTempoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.tempo")) {
        throw AttributeNotFoundException("midi.tempo");
    }
    return b->m_Base.getAttributeValue("midi.tempo");
};
            
MeiAttribute* MiditempoMixIn::getMidiTempo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("midi.tempo")) {
        throw AttributeNotFoundException("midi.tempo");
    }
    return b->m_Base.getAttribute("midi.tempo");
};
            
void MiditempoMixIn::setMidiTempo(string _miditempo) {
    if(!b->m_Base.hasAttribute("midi.tempo")) {
        MeiAttribute * a = new MeiAttribute("midi.tempo", _miditempo);
        b->m_Base.addAttribute(a);
    }
};
            
bool MiditempoMixIn::hasMidiTempo() {
    return b->m_Base.hasAttribute("midi.tempo");
};
            
MidivalueMixIn::MidivalueMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MidivalueMixIn::getValValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("val")) {
        throw AttributeNotFoundException("val");
    }
    return b->m_Base.getAttributeValue("val");
};
            
MeiAttribute* MidivalueMixIn::getVal() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("val")) {
        throw AttributeNotFoundException("val");
    }
    return b->m_Base.getAttribute("val");
};
            
void MidivalueMixIn::setVal(string _val) {
    if(!b->m_Base.hasAttribute("val")) {
        MeiAttribute * a = new MeiAttribute("val", _val);
        b->m_Base.addAttribute(a);
    }
};
            
bool MidivalueMixIn::hasVal() {
    return b->m_Base.hasAttribute("val");
};
            
TimebaseMixIn::TimebaseMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TimebaseMixIn::getPpqValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ppq")) {
        throw AttributeNotFoundException("ppq");
    }
    return b->m_Base.getAttributeValue("ppq");
};
            
MeiAttribute* TimebaseMixIn::getPpq() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ppq")) {
        throw AttributeNotFoundException("ppq");
    }
    return b->m_Base.getAttribute("ppq");
};
            
void TimebaseMixIn::setPpq(string _ppq) {
    if(!b->m_Base.hasAttribute("ppq")) {
        MeiAttribute * a = new MeiAttribute("ppq", _ppq);
        b->m_Base.addAttribute(a);
    }
};
            
bool TimebaseMixIn::hasPpq() {
    return b->m_Base.hasAttribute("ppq");
};
            
MidiEventMixIn::MidiEventMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MidiEventMixIn::getLayerValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttributeValue("layer");
};
            
MeiAttribute* MidiEventMixIn::getLayer() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttribute("layer");
};
            
void MidiEventMixIn::setLayer(string _layer) {
    if(!b->m_Base.hasAttribute("layer")) {
        MeiAttribute * a = new MeiAttribute("layer", _layer);
        b->m_Base.addAttribute(a);
    }
};
            
bool MidiEventMixIn::hasLayer() {
    return b->m_Base.hasAttribute("layer");
};
            
string MidiEventMixIn::getStaffValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttributeValue("staff");
};
            
MeiAttribute* MidiEventMixIn::getStaff() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttribute("staff");
};
            
void MidiEventMixIn::setStaff(string _staff) {
    if(!b->m_Base.hasAttribute("staff")) {
        MeiAttribute * a = new MeiAttribute("staff", _staff);
        b->m_Base.addAttribute(a);
    }
};
            
bool MidiEventMixIn::hasStaff() {
    return b->m_Base.hasAttribute("staff");
};
            
string MidiEventMixIn::getTstampValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttributeValue("tstamp");
};
            
MeiAttribute* MidiEventMixIn::getTstamp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttribute("tstamp");
};
            
void MidiEventMixIn::setTstamp(string _tstamp) {
    if(!b->m_Base.hasAttribute("tstamp")) {
        MeiAttribute * a = new MeiAttribute("tstamp", _tstamp);
        b->m_Base.addAttribute(a);
    }
};
            
bool MidiEventMixIn::hasTstamp() {
    return b->m_Base.hasAttribute("tstamp");
};
            