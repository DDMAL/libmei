#include "linking.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Ab::Ab() :
    MeiElement("ab"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declaring(this),
    m_Fragmentable(this)
{
}
REGISTER_DEFINITION(mei::Ab, "ab");
mei::Ab::~Ab() {}
mei::Ab::Ab(const Ab& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Declaring(this),
    m_Fragmentable(this)
{
}

/* include <ab> */

mei::Alt::Alt() :
    MeiElement("alt"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Alt, "alt");
mei::Alt::~Alt() {}
mei::Alt::Alt(const Alt& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Alt::getTarget() {
    if (!hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return getAttribute("target");
};

void mei::Alt::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    addAttribute(a);
};

bool mei::Alt::hasTarget() {
    return hasAttribute("target");
};

void mei::Alt::removeTarget() {
    removeAttribute("target");
};
MeiAttribute* mei::Alt::getTargets() {
    if (!hasAttribute("targets")) {
        throw AttributeNotFoundException("targets");
    }
    return getAttribute("targets");
};

void mei::Alt::setTargets(std::string _targets) {
    MeiAttribute *a = new MeiAttribute("targets", _targets);
    addAttribute(a);
};

bool mei::Alt::hasTargets() {
    return hasAttribute("targets");
};

void mei::Alt::removeTargets() {
    removeAttribute("targets");
};
MeiAttribute* mei::Alt::getMode() {
    if (!hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return getAttribute("mode");
};

void mei::Alt::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    addAttribute(a);
};

bool mei::Alt::hasMode() {
    return hasAttribute("mode");
};

void mei::Alt::removeMode() {
    removeAttribute("mode");
};
MeiAttribute* mei::Alt::getWeights() {
    if (!hasAttribute("weights")) {
        throw AttributeNotFoundException("weights");
    }
    return getAttribute("weights");
};

void mei::Alt::setWeights(std::string _weights) {
    MeiAttribute *a = new MeiAttribute("weights", _weights);
    addAttribute(a);
};

bool mei::Alt::hasWeights() {
    return hasAttribute("weights");
};

void mei::Alt::removeWeights() {
    removeAttribute("weights");
};
/* include <alt> */

mei::AltGrp::AltGrp() :
    MeiElement("altGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PointingGroup(this),
    m_Pointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AltGrp, "altGrp");
mei::AltGrp::~AltGrp() {}
mei::AltGrp::AltGrp(const AltGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PointingGroup(this),
    m_Pointing(this),
    m_Typed(this)
{
}

MeiAttribute* mei::AltGrp::getMode() {
    if (!hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return getAttribute("mode");
};

void mei::AltGrp::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    addAttribute(a);
};

bool mei::AltGrp::hasMode() {
    return hasAttribute("mode");
};

void mei::AltGrp::removeMode() {
    removeAttribute("mode");
};
/* include <altGrp> */

mei::Anchor::Anchor() :
    MeiElement("anchor"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Anchor, "anchor");
mei::Anchor::~Anchor() {}
mei::Anchor::Anchor(const Anchor& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <anchor> */

mei::Join::Join() :
    MeiElement("join"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Join, "join");
mei::Join::~Join() {}
mei::Join::Join(const Join& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Join::getTargets() {
    if (!hasAttribute("targets")) {
        throw AttributeNotFoundException("targets");
    }
    return getAttribute("targets");
};

void mei::Join::setTargets(std::string _targets) {
    MeiAttribute *a = new MeiAttribute("targets", _targets);
    addAttribute(a);
};

bool mei::Join::hasTargets() {
    return hasAttribute("targets");
};

void mei::Join::removeTargets() {
    removeAttribute("targets");
};
MeiAttribute* mei::Join::getResult() {
    if (!hasAttribute("result")) {
        throw AttributeNotFoundException("result");
    }
    return getAttribute("result");
};

void mei::Join::setResult(std::string _result) {
    MeiAttribute *a = new MeiAttribute("result", _result);
    addAttribute(a);
};

bool mei::Join::hasResult() {
    return hasAttribute("result");
};

void mei::Join::removeResult() {
    removeAttribute("result");
};
MeiAttribute* mei::Join::getScope() {
    if (!hasAttribute("scope")) {
        throw AttributeNotFoundException("scope");
    }
    return getAttribute("scope");
};

void mei::Join::setScope(std::string _scope) {
    MeiAttribute *a = new MeiAttribute("scope", _scope);
    addAttribute(a);
};

bool mei::Join::hasScope() {
    return hasAttribute("scope");
};

void mei::Join::removeScope() {
    removeAttribute("scope");
};
/* include <join> */

mei::JoinGrp::JoinGrp() :
    MeiElement("joinGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PointingGroup(this),
    m_Pointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::JoinGrp, "joinGrp");
mei::JoinGrp::~JoinGrp() {}
mei::JoinGrp::JoinGrp(const JoinGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PointingGroup(this),
    m_Pointing(this),
    m_Typed(this)
{
}

MeiAttribute* mei::JoinGrp::getResult() {
    if (!hasAttribute("result")) {
        throw AttributeNotFoundException("result");
    }
    return getAttribute("result");
};

void mei::JoinGrp::setResult(std::string _result) {
    MeiAttribute *a = new MeiAttribute("result", _result);
    addAttribute(a);
};

bool mei::JoinGrp::hasResult() {
    return hasAttribute("result");
};

void mei::JoinGrp::removeResult() {
    removeAttribute("result");
};
/* include <joinGrp> */

mei::Link::Link() :
    MeiElement("link"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Link, "link");
mei::Link::~Link() {}
mei::Link::Link(const Link& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Link::getTargets() {
    if (!hasAttribute("targets")) {
        throw AttributeNotFoundException("targets");
    }
    return getAttribute("targets");
};

void mei::Link::setTargets(std::string _targets) {
    MeiAttribute *a = new MeiAttribute("targets", _targets);
    addAttribute(a);
};

bool mei::Link::hasTargets() {
    return hasAttribute("targets");
};

void mei::Link::removeTargets() {
    removeAttribute("targets");
};
/* include <link> */

mei::LinkGrp::LinkGrp() :
    MeiElement("linkGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PointingGroup(this),
    m_Pointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::LinkGrp, "linkGrp");
mei::LinkGrp::~LinkGrp() {}
mei::LinkGrp::LinkGrp(const LinkGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_PointingGroup(this),
    m_Pointing(this),
    m_Typed(this)
{
}

/* include <linkGrp> */

mei::Seg::Seg() :
    MeiElement("seg"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Seg, "seg");
mei::Seg::~Seg() {}
mei::Seg::Seg(const Seg& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this),
    m_Responsibility(this)
{
}

/* include <seg> */

mei::Timeline::Timeline() :
    MeiElement("timeline"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Timeline, "timeline");
mei::Timeline::~Timeline() {}
mei::Timeline::Timeline(const Timeline& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Timeline::getOrigin() {
    if (!hasAttribute("origin")) {
        throw AttributeNotFoundException("origin");
    }
    return getAttribute("origin");
};

void mei::Timeline::setOrigin(std::string _origin) {
    MeiAttribute *a = new MeiAttribute("origin", _origin);
    addAttribute(a);
};

bool mei::Timeline::hasOrigin() {
    return hasAttribute("origin");
};

void mei::Timeline::removeOrigin() {
    removeAttribute("origin");
};
MeiAttribute* mei::Timeline::getUnit() {
    if (!hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return getAttribute("unit");
};

void mei::Timeline::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    addAttribute(a);
};

bool mei::Timeline::hasUnit() {
    return hasAttribute("unit");
};

void mei::Timeline::removeUnit() {
    removeAttribute("unit");
};
MeiAttribute* mei::Timeline::getInterval() {
    if (!hasAttribute("interval")) {
        throw AttributeNotFoundException("interval");
    }
    return getAttribute("interval");
};

void mei::Timeline::setInterval(std::string _interval) {
    MeiAttribute *a = new MeiAttribute("interval", _interval);
    addAttribute(a);
};

bool mei::Timeline::hasInterval() {
    return hasAttribute("interval");
};

void mei::Timeline::removeInterval() {
    removeAttribute("interval");
};
/* include <timeline> */

mei::When::When() :
    MeiElement("when"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::When, "when");
mei::When::~When() {}
mei::When::When(const When& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::When::getAbsolute() {
    if (!hasAttribute("absolute")) {
        throw AttributeNotFoundException("absolute");
    }
    return getAttribute("absolute");
};

void mei::When::setAbsolute(std::string _absolute) {
    MeiAttribute *a = new MeiAttribute("absolute", _absolute);
    addAttribute(a);
};

bool mei::When::hasAbsolute() {
    return hasAttribute("absolute");
};

void mei::When::removeAbsolute() {
    removeAttribute("absolute");
};
MeiAttribute* mei::When::getUnit() {
    if (!hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return getAttribute("unit");
};

void mei::When::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    addAttribute(a);
};

bool mei::When::hasUnit() {
    return hasAttribute("unit");
};

void mei::When::removeUnit() {
    removeAttribute("unit");
};
MeiAttribute* mei::When::getInterval() {
    if (!hasAttribute("interval")) {
        throw AttributeNotFoundException("interval");
    }
    return getAttribute("interval");
};

void mei::When::setInterval(std::string _interval) {
    MeiAttribute *a = new MeiAttribute("interval", _interval);
    addAttribute(a);
};

bool mei::When::hasInterval() {
    return hasAttribute("interval");
};

void mei::When::removeInterval() {
    removeAttribute("interval");
};
MeiAttribute* mei::When::getSince() {
    if (!hasAttribute("since")) {
        throw AttributeNotFoundException("since");
    }
    return getAttribute("since");
};

void mei::When::setSince(std::string _since) {
    MeiAttribute *a = new MeiAttribute("since", _since);
    addAttribute(a);
};

bool mei::When::hasSince() {
    return hasAttribute("since");
};

void mei::When::removeSince() {
    removeAttribute("since");
};
/* include <when> */



