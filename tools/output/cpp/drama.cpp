#include "drama.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Actor::Actor() :
    MeiElement("actor"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Actor, "actor");
mei::Actor::~Actor() {}
mei::Actor::Actor(const Actor& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <actor> */

mei::Camera::Camera() :
    MeiElement("camera"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Camera, "camera");
mei::Camera::~Camera() {}
mei::Camera::Camera(const Camera& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this)
{
}

/* include <camera> */

mei::Caption::Caption() :
    MeiElement("caption"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Caption, "caption");
mei::Caption::~Caption() {}
mei::Caption::Caption(const Caption& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <caption> */

mei::CastGroup::CastGroup() :
    MeiElement("castGroup"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::CastGroup, "castGroup");
mei::CastGroup::~CastGroup() {}
mei::CastGroup::CastGroup(const CastGroup& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <castGroup> */

mei::CastItem::CastItem() :
    MeiElement("castItem"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::CastItem, "castItem");
mei::CastItem::~CastItem() {}
mei::CastItem::CastItem(const CastItem& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::CastItem::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::CastItem::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::CastItem::hasType() {
    return hasAttribute("type");
};

void mei::CastItem::removeType() {
    removeAttribute("type");
};
/* include <castItem> */

mei::CastList::CastList() :
    MeiElement("castList"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::CastList, "castList");
mei::CastList::~CastList() {}
mei::CastList::CastList(const CastList& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <castList> */

mei::Epilogue::Epilogue() :
    MeiElement("epilogue"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Epilogue, "epilogue");
mei::Epilogue::~Epilogue() {}
mei::Epilogue::Epilogue(const Epilogue& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <epilogue> */

mei::Move::Move() :
    MeiElement("move"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::Move, "move");
mei::Move::~Move() {}
mei::Move::Move(const Move& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}

MeiAttribute* mei::Move::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Move::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Move::hasType() {
    return hasAttribute("type");
};

void mei::Move::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Move::getWhere() {
    if (!hasAttribute("where")) {
        throw AttributeNotFoundException("where");
    }
    return getAttribute("where");
};

void mei::Move::setWhere(std::string _where) {
    MeiAttribute *a = new MeiAttribute("where", _where);
    addAttribute(a);
};

bool mei::Move::hasWhere() {
    return hasAttribute("where");
};

void mei::Move::removeWhere() {
    removeAttribute("where");
};
MeiAttribute* mei::Move::getPerf() {
    if (!hasAttribute("perf")) {
        throw AttributeNotFoundException("perf");
    }
    return getAttribute("perf");
};

void mei::Move::setPerf(std::string _perf) {
    MeiAttribute *a = new MeiAttribute("perf", _perf);
    addAttribute(a);
};

bool mei::Move::hasPerf() {
    return hasAttribute("perf");
};

void mei::Move::removePerf() {
    removeAttribute("perf");
};
/* include <move> */

mei::Performance::Performance() :
    MeiElement("performance"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Performance, "performance");
mei::Performance::~Performance() {}
mei::Performance::Performance(const Performance& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <performance> */

mei::Prologue::Prologue() :
    MeiElement("prologue"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Prologue, "prologue");
mei::Prologue::~Prologue() {}
mei::Prologue::Prologue(const Prologue& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <prologue> */

mei::Role::Role() :
    MeiElement("role"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Role, "role");
mei::Role::~Role() {}
mei::Role::Role(const Role& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <role> */

mei::RoleDesc::RoleDesc() :
    MeiElement("roleDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::RoleDesc, "roleDesc");
mei::RoleDesc::~RoleDesc() {}
mei::RoleDesc::RoleDesc(const RoleDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <roleDesc> */

mei::Set::Set() :
    MeiElement("set"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Set, "set");
mei::Set::~Set() {}
mei::Set::Set(const Set& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <set> */

mei::Sound::Sound() :
    MeiElement("sound"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Sound, "sound");
mei::Sound::~Sound() {}
mei::Sound::Sound(const Sound& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Sound::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Sound::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Sound::hasType() {
    return hasAttribute("type");
};

void mei::Sound::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Sound::getDiscrete() {
    if (!hasAttribute("discrete")) {
        throw AttributeNotFoundException("discrete");
    }
    return getAttribute("discrete");
};

void mei::Sound::setDiscrete(std::string _discrete) {
    MeiAttribute *a = new MeiAttribute("discrete", _discrete);
    addAttribute(a);
};

bool mei::Sound::hasDiscrete() {
    return hasAttribute("discrete");
};

void mei::Sound::removeDiscrete() {
    removeAttribute("discrete");
};
/* include <sound> */

mei::SpGrp::SpGrp() :
    MeiElement("spGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::SpGrp, "spGrp");
mei::SpGrp::~SpGrp() {}
mei::SpGrp::SpGrp(const SpGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Ascribed(this)
{
}

/* include <spGrp> */

mei::Tech::Tech() :
    MeiElement("tech"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Tech, "tech");
mei::Tech::~Tech() {}
mei::Tech::Tech(const Tech& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Tech::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Tech::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Tech::hasType() {
    return hasAttribute("type");
};

void mei::Tech::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Tech::getPerf() {
    if (!hasAttribute("perf")) {
        throw AttributeNotFoundException("perf");
    }
    return getAttribute("perf");
};

void mei::Tech::setPerf(std::string _perf) {
    MeiAttribute *a = new MeiAttribute("perf", _perf);
    addAttribute(a);
};

bool mei::Tech::hasPerf() {
    return hasAttribute("perf");
};

void mei::Tech::removePerf() {
    removeAttribute("perf");
};
/* include <tech> */

mei::View::View() :
    MeiElement("view"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::View, "view");
mei::View::~View() {}
mei::View::View(const View& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <view> */



