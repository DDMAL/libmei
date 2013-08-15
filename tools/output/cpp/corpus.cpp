#include "corpus.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Activity::Activity() :
    MeiElement("activity"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Activity, "activity");
mei::Activity::~Activity() {}
mei::Activity::Activity(const Activity& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <activity> */

mei::Channel::Channel() :
    MeiElement("channel"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Channel, "channel");
mei::Channel::~Channel() {}
mei::Channel::Channel(const Channel& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Channel::getMode() {
    if (!hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return getAttribute("mode");
};

void mei::Channel::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    addAttribute(a);
};

bool mei::Channel::hasMode() {
    return hasAttribute("mode");
};

void mei::Channel::removeMode() {
    removeAttribute("mode");
};
/* include <channel> */

mei::Constitution::Constitution() :
    MeiElement("constitution"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Constitution, "constitution");
mei::Constitution::~Constitution() {}
mei::Constitution::Constitution(const Constitution& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Constitution::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Constitution::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Constitution::hasType() {
    return hasAttribute("type");
};

void mei::Constitution::removeType() {
    removeAttribute("type");
};
/* include <constitution> */

mei::Derivation::Derivation() :
    MeiElement("derivation"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Derivation, "derivation");
mei::Derivation::~Derivation() {}
mei::Derivation::Derivation(const Derivation& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Derivation::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Derivation::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Derivation::hasType() {
    return hasAttribute("type");
};

void mei::Derivation::removeType() {
    removeAttribute("type");
};
/* include <derivation> */

mei::Domain::Domain() :
    MeiElement("domain"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Domain, "domain");
mei::Domain::~Domain() {}
mei::Domain::Domain(const Domain& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Domain::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Domain::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Domain::hasType() {
    return hasAttribute("type");
};

void mei::Domain::removeType() {
    removeAttribute("type");
};
/* include <domain> */

mei::Factuality::Factuality() :
    MeiElement("factuality"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Factuality, "factuality");
mei::Factuality::~Factuality() {}
mei::Factuality::Factuality(const Factuality& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Factuality::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Factuality::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Factuality::hasType() {
    return hasAttribute("type");
};

void mei::Factuality::removeType() {
    removeAttribute("type");
};
/* include <factuality> */

mei::Interaction::Interaction() :
    MeiElement("interaction"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Interaction, "interaction");
mei::Interaction::~Interaction() {}
mei::Interaction::Interaction(const Interaction& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Interaction::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Interaction::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Interaction::hasType() {
    return hasAttribute("type");
};

void mei::Interaction::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Interaction::getActive() {
    if (!hasAttribute("active")) {
        throw AttributeNotFoundException("active");
    }
    return getAttribute("active");
};

void mei::Interaction::setActive(std::string _active) {
    MeiAttribute *a = new MeiAttribute("active", _active);
    addAttribute(a);
};

bool mei::Interaction::hasActive() {
    return hasAttribute("active");
};

void mei::Interaction::removeActive() {
    removeAttribute("active");
};
MeiAttribute* mei::Interaction::getPassive() {
    if (!hasAttribute("passive")) {
        throw AttributeNotFoundException("passive");
    }
    return getAttribute("passive");
};

void mei::Interaction::setPassive(std::string _passive) {
    MeiAttribute *a = new MeiAttribute("passive", _passive);
    addAttribute(a);
};

bool mei::Interaction::hasPassive() {
    return hasAttribute("passive");
};

void mei::Interaction::removePassive() {
    removeAttribute("passive");
};
/* include <interaction> */

mei::Locale::Locale() :
    MeiElement("locale"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Locale, "locale");
mei::Locale::~Locale() {}
mei::Locale::Locale(const Locale& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <locale> */

mei::MeiCorpus::MeiCorpus() :
    MeiElement("meiCorpus")
{
}
REGISTER_DEFINITION(mei::MeiCorpus, "meiCorpus");
mei::MeiCorpus::~MeiCorpus() {}
mei::MeiCorpus::MeiCorpus(const MeiCorpus& other) :
    MeiElement(other),

{
}

/* include <meiCorpus> */

mei::ParticDesc::ParticDesc() :
    MeiElement("particDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::ParticDesc, "particDesc");
mei::ParticDesc::~ParticDesc() {}
mei::ParticDesc::ParticDesc(const ParticDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

/* include <particDesc> */

mei::Preparedness::Preparedness() :
    MeiElement("preparedness"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Preparedness, "preparedness");
mei::Preparedness::~Preparedness() {}
mei::Preparedness::Preparedness(const Preparedness& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Preparedness::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Preparedness::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Preparedness::hasType() {
    return hasAttribute("type");
};

void mei::Preparedness::removeType() {
    removeAttribute("type");
};
/* include <preparedness> */

mei::Purpose::Purpose() :
    MeiElement("purpose"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Purpose, "purpose");
mei::Purpose::~Purpose() {}
mei::Purpose::Purpose(const Purpose& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Purpose::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Purpose::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Purpose::hasType() {
    return hasAttribute("type");
};

void mei::Purpose::removeType() {
    removeAttribute("type");
};
MeiAttribute* mei::Purpose::getDegree() {
    if (!hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return getAttribute("degree");
};

void mei::Purpose::setDegree(std::string _degree) {
    MeiAttribute *a = new MeiAttribute("degree", _degree);
    addAttribute(a);
};

bool mei::Purpose::hasDegree() {
    return hasAttribute("degree");
};

void mei::Purpose::removeDegree() {
    removeAttribute("degree");
};
/* include <purpose> */

mei::Setting::Setting() :
    MeiElement("setting"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}
REGISTER_DEFINITION(mei::Setting, "setting");
mei::Setting::~Setting() {}
mei::Setting::Setting(const Setting& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Ascribed(this)
{
}

/* include <setting> */

mei::SettingDesc::SettingDesc() :
    MeiElement("settingDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::SettingDesc, "settingDesc");
mei::SettingDesc::~SettingDesc() {}
mei::SettingDesc::SettingDesc(const SettingDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

/* include <settingDesc> */

mei::TextDesc::TextDesc() :
    MeiElement("textDesc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}
REGISTER_DEFINITION(mei::TextDesc, "textDesc");
mei::TextDesc::~TextDesc() {}
mei::TextDesc::TextDesc(const TextDesc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declarable(this)
{
}

/* include <textDesc> */



