
#include "linkalign.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Timeline::Timeline() : 
    MeiElement("timeline"),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Timeline, "timeline");
mei::Timeline::~Timeline() {};


MeiAttribute* mei::Timeline::getAvref() {
    if (!hasAttribute("avref")) {
        throw AttributeNotFoundException("avref");
    }
    return getAttribute("avref");
};

void mei::Timeline::setAvref(std::string _avref) {
    if (!hasAttribute("avref")) {
        MeiAttribute *a = new MeiAttribute("avref", _avref);
        addAttribute(a);
    }
};

bool mei::Timeline::hasAvref() {
    return hasAttribute("avref");
};

void mei::Timeline::removeAvref() {
    removeAttribute("avref");
};

MeiAttribute* mei::Timeline::getOrigin() {
    if (!hasAttribute("origin")) {
        throw AttributeNotFoundException("origin");
    }
    return getAttribute("origin");
};

void mei::Timeline::setOrigin(std::string _origin) {
    if (!hasAttribute("origin")) {
        MeiAttribute *a = new MeiAttribute("origin", _origin);
        addAttribute(a);
    }
};

bool mei::Timeline::hasOrigin() {
    return hasAttribute("origin");
};

void mei::Timeline::removeOrigin() {
    removeAttribute("origin");
};


mei::When::When() : 
    MeiElement("when"),
    m_Common(this),
    m_Datapointing(this) 
{
};
REGISTER_DEFINITION(mei::When, "when");
mei::When::~When() {};


MeiAttribute* mei::When::getAbsolute() {
    if (!hasAttribute("absolute")) {
        throw AttributeNotFoundException("absolute");
    }
    return getAttribute("absolute");
};

void mei::When::setAbsolute(std::string _absolute) {
    if (!hasAttribute("absolute")) {
        MeiAttribute *a = new MeiAttribute("absolute", _absolute);
        addAttribute(a);
    }
};

bool mei::When::hasAbsolute() {
    return hasAttribute("absolute");
};

void mei::When::removeAbsolute() {
    removeAttribute("absolute");
};

MeiAttribute* mei::When::getInterval() {
    if (!hasAttribute("interval")) {
        throw AttributeNotFoundException("interval");
    }
    return getAttribute("interval");
};

void mei::When::setInterval(std::string _interval) {
    if (!hasAttribute("interval")) {
        MeiAttribute *a = new MeiAttribute("interval", _interval);
        addAttribute(a);
    }
};

bool mei::When::hasInterval() {
    return hasAttribute("interval");
};

void mei::When::removeInterval() {
    removeAttribute("interval");
};

MeiAttribute* mei::When::getInttype() {
    if (!hasAttribute("inttype")) {
        throw AttributeNotFoundException("inttype");
    }
    return getAttribute("inttype");
};

void mei::When::setInttype(std::string _inttype) {
    if (!hasAttribute("inttype")) {
        MeiAttribute *a = new MeiAttribute("inttype", _inttype);
        addAttribute(a);
    }
};

bool mei::When::hasInttype() {
    return hasAttribute("inttype");
};

void mei::When::removeInttype() {
    removeAttribute("inttype");
};

MeiAttribute* mei::When::getSince() {
    if (!hasAttribute("since")) {
        throw AttributeNotFoundException("since");
    }
    return getAttribute("since");
};

void mei::When::setSince(std::string _since) {
    if (!hasAttribute("since")) {
        MeiAttribute *a = new MeiAttribute("since", _since);
        addAttribute(a);
    }
};

bool mei::When::hasSince() {
    return hasAttribute("since");
};

void mei::When::removeSince() {
    removeAttribute("since");
};



