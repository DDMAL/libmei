
#include "edittrans.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::Add::Add() : 
    MeiElement("add"),
    m_Common(this),
    m_Facsimile(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Handident(this),
    m_Sequence(this) 
{
};
REGISTER_DEFINITION(mei::Add, "add");
mei::Add::~Add() {};



mei::Choice::Choice() : 
    MeiElement("choice"),
    m_Common(this) 
{
};
REGISTER_DEFINITION(mei::Choice, "choice");
mei::Choice::~Choice() {};



mei::Corr::Corr() : 
    MeiElement("corr"),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Handident(this),
    m_Sequence(this) 
{
};
REGISTER_DEFINITION(mei::Corr, "corr");
mei::Corr::~Corr() {};



mei::Damage::Damage() : 
    MeiElement("damage"),
    m_Agentident(this),
    m_Common(this),
    m_Extent(this),
    m_Facsimile(this),
    m_Handident(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Damage, "damage");
mei::Damage::~Damage() {};


MeiAttribute* mei::Damage::getDegree() {
    if (!hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return getAttribute("degree");
};

void mei::Damage::setDegree(std::string _degree) {
    if (!hasAttribute("degree")) {
        MeiAttribute *a = new MeiAttribute("degree", _degree);
        addAttribute(a);
    }
};

bool mei::Damage::hasDegree() {
    return hasAttribute("degree");
};

void mei::Damage::removeDegree() {
    removeAttribute("degree");
};


mei::Del::Del() : 
    MeiElement("del"),
    m_Common(this),
    m_Facsimile(this),
    m_Handident(this),
    m_Sequence(this) 
{
};
REGISTER_DEFINITION(mei::Del, "del");
mei::Del::~Del() {};


MeiAttribute* mei::Del::getRend() {
    if (!hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return getAttribute("rend");
};

void mei::Del::setRend(std::string _rend) {
    if (!hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        addAttribute(a);
    }
};

bool mei::Del::hasRend() {
    return hasAttribute("rend");
};

void mei::Del::removeRend() {
    removeAttribute("rend");
};


mei::Gap::Gap() : 
    MeiElement("gap"),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Extent(this),
    m_Handident(this),
    m_Measurement(this),
    m_Reasonident(this) 
{
};
REGISTER_DEFINITION(mei::Gap, "gap");
mei::Gap::~Gap() {};



mei::Handshift::Handshift() : 
    MeiElement("handShift"),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Medium(this) 
{
};
REGISTER_DEFINITION(mei::Handshift, "handShift");
mei::Handshift::~Handshift() {};


MeiAttribute* mei::Handshift::getCharacter() {
    if (!hasAttribute("character")) {
        throw AttributeNotFoundException("character");
    }
    return getAttribute("character");
};

void mei::Handshift::setCharacter(std::string _character) {
    if (!hasAttribute("character")) {
        MeiAttribute *a = new MeiAttribute("character", _character);
        addAttribute(a);
    }
};

bool mei::Handshift::hasCharacter() {
    return hasAttribute("character");
};

void mei::Handshift::removeCharacter() {
    removeAttribute("character");
};

MeiAttribute* mei::Handshift::getNew() {
    if (!hasAttribute("new")) {
        throw AttributeNotFoundException("new");
    }
    return getAttribute("new");
};

void mei::Handshift::setNew(std::string _new) {
    if (!hasAttribute("new")) {
        MeiAttribute *a = new MeiAttribute("new", _new);
        addAttribute(a);
    }
};

bool mei::Handshift::hasNew() {
    return hasAttribute("new");
};

void mei::Handshift::removeNew() {
    removeAttribute("new");
};

MeiAttribute* mei::Handshift::getOld() {
    if (!hasAttribute("old")) {
        throw AttributeNotFoundException("old");
    }
    return getAttribute("old");
};

void mei::Handshift::setOld(std::string _old) {
    if (!hasAttribute("old")) {
        MeiAttribute *a = new MeiAttribute("old", _old);
        addAttribute(a);
    }
};

bool mei::Handshift::hasOld() {
    return hasAttribute("old");
};

void mei::Handshift::removeOld() {
    removeAttribute("old");
};


mei::Orig::Orig() : 
    MeiElement("orig"),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Orig, "orig");
mei::Orig::~Orig() {};



mei::Reg::Reg() : 
    MeiElement("reg"),
    m_Common(this),
    m_Authorized(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this) 
{
};
REGISTER_DEFINITION(mei::Reg, "reg");
mei::Reg::~Reg() {};



mei::Restore::Restore() : 
    MeiElement("restore"),
    m_Common(this),
    m_Facsimile(this),
    m_Handident(this),
    m_Sequence(this),
    m_Typed(this) 
{
};
REGISTER_DEFINITION(mei::Restore, "restore");
mei::Restore::~Restore() {};


MeiAttribute* mei::Restore::getDesc() {
    if (!hasAttribute("desc")) {
        throw AttributeNotFoundException("desc");
    }
    return getAttribute("desc");
};

void mei::Restore::setDesc(std::string _desc) {
    if (!hasAttribute("desc")) {
        MeiAttribute *a = new MeiAttribute("desc", _desc);
        addAttribute(a);
    }
};

bool mei::Restore::hasDesc() {
    return hasAttribute("desc");
};

void mei::Restore::removeDesc() {
    removeAttribute("desc");
};


mei::Sic::Sic() : 
    MeiElement("sic"),
    m_Common(this),
    m_Facsimile(this) 
{
};
REGISTER_DEFINITION(mei::Sic, "sic");
mei::Sic::~Sic() {};



mei::Subst::Subst() : 
    MeiElement("subst"),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Handident(this),
    m_Sequence(this) 
{
};
REGISTER_DEFINITION(mei::Subst, "subst");
mei::Subst::~Subst() {};



mei::Supplied::Supplied() : 
    MeiElement("supplied"),
    m_Agentident(this),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Reasonident(this) 
{
};
REGISTER_DEFINITION(mei::Supplied, "supplied");
mei::Supplied::~Supplied() {};



mei::Unclear::Unclear() : 
    MeiElement("unclear"),
    m_Agentident(this),
    m_Common(this),
    m_Edit(this),
    m_Responsibility(this),
    m_Source(this),
    m_Facsimile(this),
    m_Handident(this),
    m_Reasonident(this) 
{
};
REGISTER_DEFINITION(mei::Unclear, "unclear");
mei::Unclear::~Unclear() {};




