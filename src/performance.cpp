

#include "performance.h"
using std::string;


Avfile::Avfile() : m_Common(this), m_Declaring(this), m_Internetmedia(this), m_Facsimile(this), m_LinkExternal(this), m_Typed(this) {
    m_Base.setName("avFile");
};



Clip::Clip() : m_Common(this), m_Declaring(this), m_Startid(this) {
    m_Base.setName("clip");
};


string Clip::getBeginValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("begin")) {
        throw AttributeNotFoundException("begin");
    }
    return m_Base.getAttributeValue("begin");
};

MeiAttribute* Clip::getBegin() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("begin")) {
        throw AttributeNotFoundException("begin");
    }
    return m_Base.getAttribute("begin");
};

void Clip::setBegin(std::string _begin) {
    if (!m_Base.hasAttribute("begin")) {
        MeiAttribute *a = new MeiAttribute("begin", _begin);
        m_Base.addAttribute(a);
    }
};

bool Clip::hasBegin() {
    return m_Base.hasAttribute("begin");
};

void Clip::removeBegin() {
    m_Base.removeAttribute("begin");
};

string Clip::getEndValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("end")) {
        throw AttributeNotFoundException("end");
    }
    return m_Base.getAttributeValue("end");
};

MeiAttribute* Clip::getEnd() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("end")) {
        throw AttributeNotFoundException("end");
    }
    return m_Base.getAttribute("end");
};

void Clip::setEnd(std::string _end) {
    if (!m_Base.hasAttribute("end")) {
        MeiAttribute *a = new MeiAttribute("end", _end);
        m_Base.addAttribute(a);
    }
};

bool Clip::hasEnd() {
    return m_Base.hasAttribute("end");
};

void Clip::removeEnd() {
    m_Base.removeAttribute("end");
};

string Clip::getBetypeValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("betype")) {
        throw AttributeNotFoundException("betype");
    }
    return m_Base.getAttributeValue("betype");
};

MeiAttribute* Clip::getBetype() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("betype")) {
        throw AttributeNotFoundException("betype");
    }
    return m_Base.getAttribute("betype");
};

void Clip::setBetype(std::string _betype) {
    if (!m_Base.hasAttribute("betype")) {
        MeiAttribute *a = new MeiAttribute("betype", _betype);
        m_Base.addAttribute(a);
    }
};

bool Clip::hasBetype() {
    return m_Base.hasAttribute("betype");
};

void Clip::removeBetype() {
    m_Base.removeAttribute("betype");
};


Performance::Performance() : m_Common(this), m_Declaring(this) {
    m_Base.setName("performance");
};



Recording::Recording() : m_Common(this), m_Declaring(this), m_Startid(this) {
    m_Base.setName("recording");
};


string Recording::getBeginValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("begin")) {
        throw AttributeNotFoundException("begin");
    }
    return m_Base.getAttributeValue("begin");
};

MeiAttribute* Recording::getBegin() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("begin")) {
        throw AttributeNotFoundException("begin");
    }
    return m_Base.getAttribute("begin");
};

void Recording::setBegin(std::string _begin) {
    if (!m_Base.hasAttribute("begin")) {
        MeiAttribute *a = new MeiAttribute("begin", _begin);
        m_Base.addAttribute(a);
    }
};

bool Recording::hasBegin() {
    return m_Base.hasAttribute("begin");
};

void Recording::removeBegin() {
    m_Base.removeAttribute("begin");
};

string Recording::getEndValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("end")) {
        throw AttributeNotFoundException("end");
    }
    return m_Base.getAttributeValue("end");
};

MeiAttribute* Recording::getEnd() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("end")) {
        throw AttributeNotFoundException("end");
    }
    return m_Base.getAttribute("end");
};

void Recording::setEnd(std::string _end) {
    if (!m_Base.hasAttribute("end")) {
        MeiAttribute *a = new MeiAttribute("end", _end);
        m_Base.addAttribute(a);
    }
};

bool Recording::hasEnd() {
    return m_Base.hasAttribute("end");
};

void Recording::removeEnd() {
    m_Base.removeAttribute("end");
};

string Recording::getBetypeValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("betype")) {
        throw AttributeNotFoundException("betype");
    }
    return m_Base.getAttributeValue("betype");
};

MeiAttribute* Recording::getBetype() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("betype")) {
        throw AttributeNotFoundException("betype");
    }
    return m_Base.getAttribute("betype");
};

void Recording::setBetype(std::string _betype) {
    if (!m_Base.hasAttribute("betype")) {
        MeiAttribute *a = new MeiAttribute("betype", _betype);
        m_Base.addAttribute(a);
    }
};

bool Recording::hasBetype() {
    return m_Base.hasAttribute("betype");
};

void Recording::removeBetype() {
    m_Base.removeAttribute("betype");
};



