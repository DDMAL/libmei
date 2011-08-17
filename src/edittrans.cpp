

#include "edittrans.h"
using std::string;


Add::Add() : m_Common(this), m_Facsimile(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Handident(this), m_Sequence(this) {
    m_Base.setName("add");
};



Choice::Choice() : m_Common(this) {
    m_Base.setName("choice");
};



Corr::Corr() : m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Handident(this), m_Sequence(this) {
    m_Base.setName("corr");
};



Damage::Damage() : m_Agentident(this), m_Common(this), m_Extent(this), m_Facsimile(this), m_Handident(this), m_Typed(this) {
    m_Base.setName("damage");
};


string Damage::getDegreeValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return m_Base.getAttributeValue("degree");
};

MeiAttribute* Damage::getDegree() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return m_Base.getAttribute("degree");
};

void Damage::setDegree(std::string _degree) {
    if (!m_Base.hasAttribute("degree")) {
        MeiAttribute *a = new MeiAttribute("degree", _degree);
        m_Base.addAttribute(a);
    }
};

bool Damage::hasDegree() {
    return m_Base.hasAttribute("degree");
};

void Damage::removeDegree() {
    m_Base.removeAttribute("degree");
};


Del::Del() : m_Common(this), m_Facsimile(this), m_Handident(this), m_Sequence(this) {
    m_Base.setName("del");
};


string Del::getRendValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttributeValue("rend");
};

MeiAttribute* Del::getRend() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return m_Base.getAttribute("rend");
};

void Del::setRend(std::string _rend) {
    if (!m_Base.hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        m_Base.addAttribute(a);
    }
};

bool Del::hasRend() {
    return m_Base.hasAttribute("rend");
};

void Del::removeRend() {
    m_Base.removeAttribute("rend");
};


Gap::Gap() : m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Extent(this), m_Handident(this), m_Measurement(this), m_Reasonident(this) {
    m_Base.setName("gap");
};



Handshift::Handshift() : m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Medium(this) {
    m_Base.setName("handShift");
};


string Handshift::getCharacterValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("character")) {
        throw AttributeNotFoundException("character");
    }
    return m_Base.getAttributeValue("character");
};

MeiAttribute* Handshift::getCharacter() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("character")) {
        throw AttributeNotFoundException("character");
    }
    return m_Base.getAttribute("character");
};

void Handshift::setCharacter(std::string _character) {
    if (!m_Base.hasAttribute("character")) {
        MeiAttribute *a = new MeiAttribute("character", _character);
        m_Base.addAttribute(a);
    }
};

bool Handshift::hasCharacter() {
    return m_Base.hasAttribute("character");
};

void Handshift::removeCharacter() {
    m_Base.removeAttribute("character");
};

string Handshift::getNewValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("new")) {
        throw AttributeNotFoundException("new");
    }
    return m_Base.getAttributeValue("new");
};

MeiAttribute* Handshift::getNew() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("new")) {
        throw AttributeNotFoundException("new");
    }
    return m_Base.getAttribute("new");
};

void Handshift::setNew(std::string _new) {
    if (!m_Base.hasAttribute("new")) {
        MeiAttribute *a = new MeiAttribute("new", _new);
        m_Base.addAttribute(a);
    }
};

bool Handshift::hasNew() {
    return m_Base.hasAttribute("new");
};

void Handshift::removeNew() {
    m_Base.removeAttribute("new");
};

string Handshift::getOldValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("old")) {
        throw AttributeNotFoundException("old");
    }
    return m_Base.getAttributeValue("old");
};

MeiAttribute* Handshift::getOld() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("old")) {
        throw AttributeNotFoundException("old");
    }
    return m_Base.getAttribute("old");
};

void Handshift::setOld(std::string _old) {
    if (!m_Base.hasAttribute("old")) {
        MeiAttribute *a = new MeiAttribute("old", _old);
        m_Base.addAttribute(a);
    }
};

bool Handshift::hasOld() {
    return m_Base.hasAttribute("old");
};

void Handshift::removeOld() {
    m_Base.removeAttribute("old");
};


Orig::Orig() : m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Typed(this) {
    m_Base.setName("orig");
};



Reg::Reg() : m_Common(this), m_Authorized(this), m_Edit(this), m_Responsibility(this), m_Source(this) {
    m_Base.setName("reg");
};



Restore::Restore() : m_Common(this), m_Facsimile(this), m_Handident(this), m_Sequence(this), m_Typed(this) {
    m_Base.setName("restore");
};


string Restore::getDescValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("desc")) {
        throw AttributeNotFoundException("desc");
    }
    return m_Base.getAttributeValue("desc");
};

MeiAttribute* Restore::getDesc() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("desc")) {
        throw AttributeNotFoundException("desc");
    }
    return m_Base.getAttribute("desc");
};

void Restore::setDesc(std::string _desc) {
    if (!m_Base.hasAttribute("desc")) {
        MeiAttribute *a = new MeiAttribute("desc", _desc);
        m_Base.addAttribute(a);
    }
};

bool Restore::hasDesc() {
    return m_Base.hasAttribute("desc");
};

void Restore::removeDesc() {
    m_Base.removeAttribute("desc");
};


Sic::Sic() : m_Common(this), m_Facsimile(this) {
    m_Base.setName("sic");
};



Subst::Subst() : m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Handident(this), m_Sequence(this) {
    m_Base.setName("subst");
};



Supplied::Supplied() : m_Agentident(this), m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Reasonident(this) {
    m_Base.setName("supplied");
};



Unclear::Unclear() : m_Agentident(this), m_Common(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Facsimile(this), m_Handident(this), m_Reasonident(this) {
    m_Base.setName("unclear");
};




