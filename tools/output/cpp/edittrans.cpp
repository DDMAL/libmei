#include "edittrans.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Abbr::Abbr() :
    MeiElement("abbr")
{
}
REGISTER_DEFINITION(mei::Abbr, "abbr");
mei::Abbr::~Abbr() {}
mei::Abbr::Abbr(const Abbr& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::Abbr::getExpan() {
    if (!hasAttribute("expan")) {
        throw AttributeNotFoundException("expan");
    }
    return getAttribute("expan");
};

void mei::Abbr::setExpan(std::string _expan) {
    MeiAttribute *a = new MeiAttribute("expan", _expan);
    addAttribute(a);
};

bool mei::Abbr::hasExpan() {
    return hasAttribute("expan");
};

void mei::Abbr::removeExpan() {
    removeAttribute("expan");
};
/* include <abbr> */

mei::Add::Add() :
    MeiElement("add")
{
}
REGISTER_DEFINITION(mei::Add, "add");
mei::Add::~Add() {}
mei::Add::Add(const Add& other) :
    MeiElement(other),

{
}

/* include <add> */

mei::Choice::Choice() :
    MeiElement("choice")
{
}
REGISTER_DEFINITION(mei::Choice, "choice");
mei::Choice::~Choice() {}
mei::Choice::Choice(const Choice& other) :
    MeiElement(other),

{
}

/* include <choice> */

mei::Corr::Corr() :
    MeiElement("corr")
{
}
REGISTER_DEFINITION(mei::Corr, "corr");
mei::Corr::~Corr() {}
mei::Corr::Corr(const Corr& other) :
    MeiElement(other),

{
}

/* include <corr> */

mei::Damage::Damage() :
    MeiElement("damage")
{
}
REGISTER_DEFINITION(mei::Damage, "damage");
mei::Damage::~Damage() {}
mei::Damage::Damage(const Damage& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::Damage::getDegree() {
    if (!hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return getAttribute("degree");
};

void mei::Damage::setDegree(std::string _degree) {
    MeiAttribute *a = new MeiAttribute("degree", _degree);
    addAttribute(a);
};

bool mei::Damage::hasDegree() {
    return hasAttribute("degree");
};

void mei::Damage::removeDegree() {
    removeAttribute("degree");
};
/* include <damage> */

mei::Del::Del() :
    MeiElement("del")
{
}
REGISTER_DEFINITION(mei::Del, "del");
mei::Del::~Del() {}
mei::Del::Del(const Del& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::Del::getRend() {
    if (!hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return getAttribute("rend");
};

void mei::Del::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    addAttribute(a);
};

bool mei::Del::hasRend() {
    return hasAttribute("rend");
};

void mei::Del::removeRend() {
    removeAttribute("rend");
};
/* include <del> */

mei::Expan::Expan() :
    MeiElement("expan")
{
}
REGISTER_DEFINITION(mei::Expan, "expan");
mei::Expan::~Expan() {}
mei::Expan::Expan(const Expan& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::Expan::getAbbr() {
    if (!hasAttribute("abbr")) {
        throw AttributeNotFoundException("abbr");
    }
    return getAttribute("abbr");
};

void mei::Expan::setAbbr(std::string _abbr) {
    MeiAttribute *a = new MeiAttribute("abbr", _abbr);
    addAttribute(a);
};

bool mei::Expan::hasAbbr() {
    return hasAttribute("abbr");
};

void mei::Expan::removeAbbr() {
    removeAttribute("abbr");
};
/* include <expan> */

mei::Gap::Gap() :
    MeiElement("gap")
{
}
REGISTER_DEFINITION(mei::Gap, "gap");
mei::Gap::~Gap() {}
mei::Gap::Gap(const Gap& other) :
    MeiElement(other),

{
}

/* include <gap> */

mei::HandShift::HandShift() :
    MeiElement("handShift")
{
}
REGISTER_DEFINITION(mei::HandShift, "handShift");
mei::HandShift::~HandShift() {}
mei::HandShift::HandShift(const HandShift& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::HandShift::getCharacter() {
    if (!hasAttribute("character")) {
        throw AttributeNotFoundException("character");
    }
    return getAttribute("character");
};

void mei::HandShift::setCharacter(std::string _character) {
    MeiAttribute *a = new MeiAttribute("character", _character);
    addAttribute(a);
};

bool mei::HandShift::hasCharacter() {
    return hasAttribute("character");
};

void mei::HandShift::removeCharacter() {
    removeAttribute("character");
};
MeiAttribute* mei::HandShift::getNew() {
    if (!hasAttribute("new")) {
        throw AttributeNotFoundException("new");
    }
    return getAttribute("new");
};

void mei::HandShift::setNew(std::string _new) {
    MeiAttribute *a = new MeiAttribute("new", _new);
    addAttribute(a);
};

bool mei::HandShift::hasNew() {
    return hasAttribute("new");
};

void mei::HandShift::removeNew() {
    removeAttribute("new");
};
MeiAttribute* mei::HandShift::getOld() {
    if (!hasAttribute("old")) {
        throw AttributeNotFoundException("old");
    }
    return getAttribute("old");
};

void mei::HandShift::setOld(std::string _old) {
    MeiAttribute *a = new MeiAttribute("old", _old);
    addAttribute(a);
};

bool mei::HandShift::hasOld() {
    return hasAttribute("old");
};

void mei::HandShift::removeOld() {
    removeAttribute("old");
};
/* include <handShift> */

mei::Orig::Orig() :
    MeiElement("orig")
{
}
REGISTER_DEFINITION(mei::Orig, "orig");
mei::Orig::~Orig() {}
mei::Orig::Orig(const Orig& other) :
    MeiElement(other),

{
}

/* include <orig> */

mei::Reg::Reg() :
    MeiElement("reg")
{
}
REGISTER_DEFINITION(mei::Reg, "reg");
mei::Reg::~Reg() {}
mei::Reg::Reg(const Reg& other) :
    MeiElement(other),

{
}

/* include <reg> */

mei::Restore::Restore() :
    MeiElement("restore")
{
}
REGISTER_DEFINITION(mei::Restore, "restore");
mei::Restore::~Restore() {}
mei::Restore::Restore(const Restore& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::Restore::getDesc() {
    if (!hasAttribute("desc")) {
        throw AttributeNotFoundException("desc");
    }
    return getAttribute("desc");
};

void mei::Restore::setDesc(std::string _desc) {
    MeiAttribute *a = new MeiAttribute("desc", _desc);
    addAttribute(a);
};

bool mei::Restore::hasDesc() {
    return hasAttribute("desc");
};

void mei::Restore::removeDesc() {
    removeAttribute("desc");
};
/* include <restore> */

mei::Sic::Sic() :
    MeiElement("sic")
{
}
REGISTER_DEFINITION(mei::Sic, "sic");
mei::Sic::~Sic() {}
mei::Sic::Sic(const Sic& other) :
    MeiElement(other),

{
}

/* include <sic> */

mei::Subst::Subst() :
    MeiElement("subst")
{
}
REGISTER_DEFINITION(mei::Subst, "subst");
mei::Subst::~Subst() {}
mei::Subst::Subst(const Subst& other) :
    MeiElement(other),

{
}

/* include <subst> */

mei::Supplied::Supplied() :
    MeiElement("supplied")
{
}
REGISTER_DEFINITION(mei::Supplied, "supplied");
mei::Supplied::~Supplied() {}
mei::Supplied::Supplied(const Supplied& other) :
    MeiElement(other),

{
}

/* include <supplied> */

mei::Unclear::Unclear() :
    MeiElement("unclear")
{
}
REGISTER_DEFINITION(mei::Unclear, "unclear");
mei::Unclear::~Unclear() {}
mei::Unclear::Unclear(const Unclear& other) :
    MeiElement(other),

{
}

/* include <unclear> */



