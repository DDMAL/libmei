

#include "harmony.h"
using std::string;


Barre::Barre() : m_Common(this), m_Fretlocation(this), m_Startendid(this), m_Startid(this) {
    m_Base.setName("barre");
};



Chorddef::Chorddef() : m_Common(this) {
    m_Base.setName("chordDef");
};


string Chorddef::getPosValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pos")) {
        throw AttributeNotFoundException("pos");
    }
    return m_Base.getAttributeValue("pos");
};

MeiAttribute* Chorddef::getPos() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("pos")) {
        throw AttributeNotFoundException("pos");
    }
    return m_Base.getAttribute("pos");
};

void Chorddef::setPos(std::string _pos) {
    if (!m_Base.hasAttribute("pos")) {
        MeiAttribute *a = new MeiAttribute("pos", _pos);
        m_Base.addAttribute(a);
    }
};

bool Chorddef::hasPos() {
    return m_Base.hasAttribute("pos");
};

void Chorddef::removePos() {
    m_Base.removeAttribute("pos");
};


Chordmember::Chordmember() : m_Common(this), m_AccidentalPerformed(this), m_Fretlocation(this), m_Intervalharmonic(this), m_Pitch(this), m_Octave(this) {
    m_Base.setName("chordMember");
};


string Chordmember::getFingValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("fing")) {
        throw AttributeNotFoundException("fing");
    }
    return m_Base.getAttributeValue("fing");
};

MeiAttribute* Chordmember::getFing() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("fing")) {
        throw AttributeNotFoundException("fing");
    }
    return m_Base.getAttribute("fing");
};

void Chordmember::setFing(std::string _fing) {
    if (!m_Base.hasAttribute("fing")) {
        MeiAttribute *a = new MeiAttribute("fing", _fing);
        m_Base.addAttribute(a);
    }
};

bool Chordmember::hasFing() {
    return m_Base.hasAttribute("fing");
};

void Chordmember::removeFing() {
    m_Base.removeAttribute("fing");
};


Chordtable::Chordtable() : m_Common(this) {
    m_Base.setName("chordTable");
};



F::F() : m_Common(this), m_CommonAnl(this), m_Alignment(this), m_Altsym(this), m_Facsimile(this) {
    m_Base.setName("f");
};


string F::getExtenderValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return m_Base.getAttributeValue("extender");
};

MeiAttribute* F::getExtender() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return m_Base.getAttribute("extender");
};

void F::setExtender(std::string _extender) {
    if (!m_Base.hasAttribute("extender")) {
        MeiAttribute *a = new MeiAttribute("extender", _extender);
        m_Base.addAttribute(a);
    }
};

bool F::hasExtender() {
    return m_Base.hasAttribute("extender");
};

void F::removeExtender() {
    m_Base.removeAttribute("extender");
};


Fb::Fb() : m_Common(this), m_CommonAnl(this), m_Alignment(this), m_Facsimile(this) {
    m_Base.setName("fb");
};



Harm::Harm() : m_Common(this), m_Facsimile(this), m_HarmLog(this), m_Participantident(this), m_TimestampMusical(this), m_TimestampPerformed(this), m_Staffident(this), m_Layerident(this), m_Startendid(this), m_Startid(this), m_DurationTimestamp(this), m_HarmVis(this), m_Placement(this), m_VisualoffsetHo(this), m_VisualoffsetTo(this), m_VisualoffsetVo(this), m_Visualoffset2Ho(this), m_Visualoffset2To(this), m_Xy(this), m_DurationPerformed(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("harm");
};




