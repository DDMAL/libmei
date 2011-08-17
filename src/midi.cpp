

#include "midi.h"
using std::string;


Cc::Cc() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this), m_Midinumber(this), m_Midivalue(this) {
    m_Base.setName("cc");
};



Chan::Chan() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this) {
    m_Base.setName("chan");
};


string Chan::getNumValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttributeValue("num");
};

MeiAttribute* Chan::getNum() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttribute("num");
};

void Chan::setNum(std::string _num) {
    if (!m_Base.hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        m_Base.addAttribute(a);
    }
};

bool Chan::hasNum() {
    return m_Base.hasAttribute("num");
};

void Chan::removeNum() {
    m_Base.removeAttribute("num");
};


Chanpr::Chanpr() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this), m_Midinumber(this) {
    m_Base.setName("chanPr");
};



Cue::Cue() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this) {
    m_Base.setName("cue");
};



Hex::Hex() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this) {
    m_Base.setName("hex");
};



Marker::Marker() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this) {
    m_Base.setName("marker");
};



Metatext::Metatext() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this) {
    m_Base.setName("metaText");
};



Midi::Midi() : m_Common(this), m_Staffident(this), m_Layerident(this), m_CommonAnl(this), m_Alignment(this) {
    m_Base.setName("midi");
};



Noteoff::Noteoff() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this), m_Midinumber(this) {
    m_Base.setName("noteOff");
};



Noteon::Noteon() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this), m_Midinumber(this) {
    m_Base.setName("noteOn");
};



Port::Port() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this), m_Midinumber(this) {
    m_Base.setName("port");
};



Prog::Prog() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this), m_Midinumber(this) {
    m_Base.setName("prog");
};



Seqnum::Seqnum() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this) {
    m_Base.setName("seqNum");
};


string Seqnum::getNumValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttributeValue("num");
};

MeiAttribute* Seqnum::getNum() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return m_Base.getAttribute("num");
};

void Seqnum::setNum(std::string _num) {
    if (!m_Base.hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        m_Base.addAttribute(a);
    }
};

bool Seqnum::hasNum() {
    return m_Base.hasAttribute("num");
};

void Seqnum::removeNum() {
    m_Base.removeAttribute("num");
};


Trkname::Trkname() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this) {
    m_Base.setName("trkName");
};



Vel::Vel() : m_CommonAnl(this), m_Alignment(this), m_Common(this), m_Staffident(this), m_Layerident(this), m_TimestampMusical(this), m_Midinumber(this) {
    m_Base.setName("vel");
};


string Vel::getFormValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};

MeiAttribute* Vel::getForm() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};

void Vel::setForm(std::string _form) {
    if (!m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};

bool Vel::hasForm() {
    return m_Base.hasAttribute("form");
};

void Vel::removeForm() {
    m_Base.removeAttribute("form");
};



