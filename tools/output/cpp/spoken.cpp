#include "spoken.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Broadcast::Broadcast() :
    MeiElement("broadcast"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::Broadcast, "broadcast");
mei::Broadcast::~Broadcast() {}
mei::Broadcast::Broadcast(const Broadcast& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

/* include <broadcast> */

mei::Equipment::Equipment() :
    MeiElement("equipment"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::Equipment, "equipment");
mei::Equipment::~Equipment() {}
mei::Equipment::Equipment(const Equipment& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

/* include <equipment> */

mei::Incident::Incident() :
    MeiElement("incident"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Typed(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::Incident, "incident");
mei::Incident::~Incident() {}
mei::Incident::Incident(const Incident& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Typed(this),
    m_Ascribed(this)
{
}

/* include <incident> */

mei::Kinesic::Kinesic() :
    MeiElement("kinesic"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Typed(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::Kinesic, "kinesic");
mei::Kinesic::~Kinesic() {}
mei::Kinesic::Kinesic(const Kinesic& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Typed(this),
    m_Ascribed(this)
{
}

MeiAttribute* mei::Kinesic::getIterated() {
    if (!hasAttribute("iterated")) {
        throw AttributeNotFoundException("iterated");
    }
    return getAttribute("iterated");
};

void mei::Kinesic::setIterated(std::string _iterated) {
    MeiAttribute *a = new MeiAttribute("iterated", _iterated);
    addAttribute(a);
};

bool mei::Kinesic::hasIterated() {
    return hasAttribute("iterated");
};

void mei::Kinesic::removeIterated() {
    removeAttribute("iterated");
};
/* include <kinesic> */

mei::Pause::Pause() :
    MeiElement("pause"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Typed(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::Pause, "pause");
mei::Pause::~Pause() {}
mei::Pause::Pause(const Pause& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Typed(this),
    m_Ascribed(this)
{
}

/* include <pause> */

mei::Recording::Recording() :
    MeiElement("recording"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_DurationW3c(this),
    m_DurationIso(this)
{
}
REGISTER_DEFINITION(mei::Recording, "recording");
mei::Recording::~Recording() {}
mei::Recording::Recording(const Recording& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this),
    m_DurationW3c(this),
    m_DurationIso(this)
{
}

MeiAttribute* mei::Recording::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Recording::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Recording::hasType() {
    return hasAttribute("type");
};

void mei::Recording::removeType() {
    removeAttribute("type");
};
/* include <recording> */

mei::RecordingStmt::RecordingStmt() :
    MeiElement("recordingStmt"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::RecordingStmt, "recordingStmt");
mei::RecordingStmt::~RecordingStmt() {}
mei::RecordingStmt::RecordingStmt(const RecordingStmt& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <recordingStmt> */

mei::ScriptStmt::ScriptStmt() :
    MeiElement("scriptStmt"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::ScriptStmt, "scriptStmt");
mei::ScriptStmt::~ScriptStmt() {}
mei::ScriptStmt::ScriptStmt(const ScriptStmt& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

/* include <scriptStmt> */

mei::Shift::Shift() :
    MeiElement("shift"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::Shift, "shift");
mei::Shift::~Shift() {}
mei::Shift::Shift(const Shift& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}

MeiAttribute* mei::Shift::getFeature() {
    if (!hasAttribute("feature")) {
        throw AttributeNotFoundException("feature");
    }
    return getAttribute("feature");
};

void mei::Shift::setFeature(std::string _feature) {
    MeiAttribute *a = new MeiAttribute("feature", _feature);
    addAttribute(a);
};

bool mei::Shift::hasFeature() {
    return hasAttribute("feature");
};

void mei::Shift::removeFeature() {
    removeAttribute("feature");
};
MeiAttribute* mei::Shift::getNew() {
    if (!hasAttribute("new")) {
        throw AttributeNotFoundException("new");
    }
    return getAttribute("new");
};

void mei::Shift::setNew(std::string _new) {
    MeiAttribute *a = new MeiAttribute("new", _new);
    addAttribute(a);
};

bool mei::Shift::hasNew() {
    return hasAttribute("new");
};

void mei::Shift::removeNew() {
    removeAttribute("new");
};
/* include <shift> */

mei::U::U() :
    MeiElement("u"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Declaring(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::U, "u");
mei::U::~U() {}
mei::U::U(const U& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Declaring(this),
    m_Ascribed(this)
{
}

MeiAttribute* mei::U::getTrans() {
    if (!hasAttribute("trans")) {
        throw AttributeNotFoundException("trans");
    }
    return getAttribute("trans");
};

void mei::U::setTrans(std::string _trans) {
    MeiAttribute *a = new MeiAttribute("trans", _trans);
    addAttribute(a);
};

bool mei::U::hasTrans() {
    return hasAttribute("trans");
};

void mei::U::removeTrans() {
    removeAttribute("trans");
};
/* include <u> */

mei::Vocal::Vocal() :
    MeiElement("vocal"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Ascribed(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Vocal, "vocal");
mei::Vocal::~Vocal() {}
mei::Vocal::Vocal(const Vocal& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Ascribed(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Vocal::getIterated() {
    if (!hasAttribute("iterated")) {
        throw AttributeNotFoundException("iterated");
    }
    return getAttribute("iterated");
};

void mei::Vocal::setIterated(std::string _iterated) {
    MeiAttribute *a = new MeiAttribute("iterated", _iterated);
    addAttribute(a);
};

bool mei::Vocal::hasIterated() {
    return hasAttribute("iterated");
};

void mei::Vocal::removeIterated() {
    removeAttribute("iterated");
};
/* include <vocal> */

mei::Writing::Writing() :
    MeiElement("writing"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this),
    m_Typed(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Source(this)
{
}
REGISTER_DEFINITION(mei::Writing, "writing");
mei::Writing::~Writing() {}
mei::Writing::Writing(const Writing& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this),
    m_Typed(this),
    m_Timed(this),
    m_DurationW3c(this),
    m_DurationIso(this),
    m_Source(this)
{
}

MeiAttribute* mei::Writing::getGradual() {
    if (!hasAttribute("gradual")) {
        throw AttributeNotFoundException("gradual");
    }
    return getAttribute("gradual");
};

void mei::Writing::setGradual(std::string _gradual) {
    MeiAttribute *a = new MeiAttribute("gradual", _gradual);
    addAttribute(a);
};

bool mei::Writing::hasGradual() {
    return hasAttribute("gradual");
};

void mei::Writing::removeGradual() {
    removeAttribute("gradual");
};
/* include <writing> */



