#include "mensuralmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::LigatureLogMixIn::LigatureLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::LigatureLogMixIn::~LigatureLogMixIn() {}
MeiAttribute* mei::LigatureLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::LigatureLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::LigatureLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::LigatureLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::MensurVisMixIn::MensurVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensurVisMixIn::~MensurVisMixIn() {}
MeiAttribute* mei::MensurVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::MensurVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::MensurVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::MensurVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::MensurVisMixIn::getOrient() {
    if (!b->hasAttribute("orient")) {
        throw AttributeNotFoundException("orient");
    }
    return b->getAttribute("orient");
};

void mei::MensurVisMixIn::setOrient(std::string _orient) {
    MeiAttribute *a = new MeiAttribute("orient", _orient);
    b->addAttribute(a);
};

bool mei::MensurVisMixIn::hasOrient() {
    return b->hasAttribute("orient");
};

void mei::MensurVisMixIn::removeOrient() {
    b->removeAttribute("orient");
};

/* include <orientmixin> */
mei::MensurDefaultLogMixIn::MensurDefaultLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensurDefaultLogMixIn::~MensurDefaultLogMixIn() {}
MeiAttribute* mei::MensurDefaultLogMixIn::getMensurDot() {
    if (!b->hasAttribute("mensur.dot")) {
        throw AttributeNotFoundException("mensur.dot");
    }
    return b->getAttribute("mensur.dot");
};

void mei::MensurDefaultLogMixIn::setMensurDot(std::string _mensurdot) {
    MeiAttribute *a = new MeiAttribute("mensur.dot", _mensurdot);
    b->addAttribute(a);
};

bool mei::MensurDefaultLogMixIn::hasMensurDot() {
    return b->hasAttribute("mensur.dot");
};

void mei::MensurDefaultLogMixIn::removeMensurDot() {
    b->removeAttribute("mensur.dot");
};
MeiAttribute* mei::MensurDefaultLogMixIn::getMensurLoc() {
    if (!b->hasAttribute("mensur.loc")) {
        throw AttributeNotFoundException("mensur.loc");
    }
    return b->getAttribute("mensur.loc");
};

void mei::MensurDefaultLogMixIn::setMensurLoc(std::string _mensurloc) {
    MeiAttribute *a = new MeiAttribute("mensur.loc", _mensurloc);
    b->addAttribute(a);
};

bool mei::MensurDefaultLogMixIn::hasMensurLoc() {
    return b->hasAttribute("mensur.loc");
};

void mei::MensurDefaultLogMixIn::removeMensurLoc() {
    b->removeAttribute("mensur.loc");
};
MeiAttribute* mei::MensurDefaultLogMixIn::getMensurSign() {
    if (!b->hasAttribute("mensur.sign")) {
        throw AttributeNotFoundException("mensur.sign");
    }
    return b->getAttribute("mensur.sign");
};

void mei::MensurDefaultLogMixIn::setMensurSign(std::string _mensursign) {
    MeiAttribute *a = new MeiAttribute("mensur.sign", _mensursign);
    b->addAttribute(a);
};

bool mei::MensurDefaultLogMixIn::hasMensurSign() {
    return b->hasAttribute("mensur.sign");
};

void mei::MensurDefaultLogMixIn::removeMensurSign() {
    b->removeAttribute("mensur.sign");
};
MeiAttribute* mei::MensurDefaultLogMixIn::getMensurSlash() {
    if (!b->hasAttribute("mensur.slash")) {
        throw AttributeNotFoundException("mensur.slash");
    }
    return b->getAttribute("mensur.slash");
};

void mei::MensurDefaultLogMixIn::setMensurSlash(std::string _mensurslash) {
    MeiAttribute *a = new MeiAttribute("mensur.slash", _mensurslash);
    b->addAttribute(a);
};

bool mei::MensurDefaultLogMixIn::hasMensurSlash() {
    return b->hasAttribute("mensur.slash");
};

void mei::MensurDefaultLogMixIn::removeMensurSlash() {
    b->removeAttribute("mensur.slash");
};

/* include <mensur.slashmixin> */
mei::MensurDefaultVisMixIn::MensurDefaultVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensurDefaultVisMixIn::~MensurDefaultVisMixIn() {}
MeiAttribute* mei::MensurDefaultVisMixIn::getMensurColor() {
    if (!b->hasAttribute("mensur.color")) {
        throw AttributeNotFoundException("mensur.color");
    }
    return b->getAttribute("mensur.color");
};

void mei::MensurDefaultVisMixIn::setMensurColor(std::string _mensurcolor) {
    MeiAttribute *a = new MeiAttribute("mensur.color", _mensurcolor);
    b->addAttribute(a);
};

bool mei::MensurDefaultVisMixIn::hasMensurColor() {
    return b->hasAttribute("mensur.color");
};

void mei::MensurDefaultVisMixIn::removeMensurColor() {
    b->removeAttribute("mensur.color");
};
MeiAttribute* mei::MensurDefaultVisMixIn::getMensurForm() {
    if (!b->hasAttribute("mensur.form")) {
        throw AttributeNotFoundException("mensur.form");
    }
    return b->getAttribute("mensur.form");
};

void mei::MensurDefaultVisMixIn::setMensurForm(std::string _mensurform) {
    MeiAttribute *a = new MeiAttribute("mensur.form", _mensurform);
    b->addAttribute(a);
};

bool mei::MensurDefaultVisMixIn::hasMensurForm() {
    return b->hasAttribute("mensur.form");
};

void mei::MensurDefaultVisMixIn::removeMensurForm() {
    b->removeAttribute("mensur.form");
};
MeiAttribute* mei::MensurDefaultVisMixIn::getMensurOrient() {
    if (!b->hasAttribute("mensur.orient")) {
        throw AttributeNotFoundException("mensur.orient");
    }
    return b->getAttribute("mensur.orient");
};

void mei::MensurDefaultVisMixIn::setMensurOrient(std::string _mensurorient) {
    MeiAttribute *a = new MeiAttribute("mensur.orient", _mensurorient);
    b->addAttribute(a);
};

bool mei::MensurDefaultVisMixIn::hasMensurOrient() {
    return b->hasAttribute("mensur.orient");
};

void mei::MensurDefaultVisMixIn::removeMensurOrient() {
    b->removeAttribute("mensur.orient");
};
MeiAttribute* mei::MensurDefaultVisMixIn::getMensurSize() {
    if (!b->hasAttribute("mensur.size")) {
        throw AttributeNotFoundException("mensur.size");
    }
    return b->getAttribute("mensur.size");
};

void mei::MensurDefaultVisMixIn::setMensurSize(std::string _mensursize) {
    MeiAttribute *a = new MeiAttribute("mensur.size", _mensursize);
    b->addAttribute(a);
};

bool mei::MensurDefaultVisMixIn::hasMensurSize() {
    return b->hasAttribute("mensur.size");
};

void mei::MensurDefaultVisMixIn::removeMensurSize() {
    b->removeAttribute("mensur.size");
};

/* include <mensur.sizemixin> */
mei::NoteLogMensuralMixIn::NoteLogMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteLogMensuralMixIn::~NoteLogMensuralMixIn() {}
MeiAttribute* mei::NoteLogMensuralMixIn::getLig() {
    if (!b->hasAttribute("lig")) {
        throw AttributeNotFoundException("lig");
    }
    return b->getAttribute("lig");
};

void mei::NoteLogMensuralMixIn::setLig(std::string _lig) {
    MeiAttribute *a = new MeiAttribute("lig", _lig);
    b->addAttribute(a);
};

bool mei::NoteLogMensuralMixIn::hasLig() {
    return b->hasAttribute("lig");
};

void mei::NoteLogMensuralMixIn::removeLig() {
    b->removeAttribute("lig");
};

/* include <ligmixin> */
mei::RestVisMensuralMixIn::RestVisMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::RestVisMensuralMixIn::~RestVisMensuralMixIn() {}
MeiAttribute* mei::RestVisMensuralMixIn::getSpaces() {
    if (!b->hasAttribute("spaces")) {
        throw AttributeNotFoundException("spaces");
    }
    return b->getAttribute("spaces");
};

void mei::RestVisMensuralMixIn::setSpaces(std::string _spaces) {
    MeiAttribute *a = new MeiAttribute("spaces", _spaces);
    b->addAttribute(a);
};

bool mei::RestVisMensuralMixIn::hasSpaces() {
    return b->hasAttribute("spaces");
};

void mei::RestVisMensuralMixIn::removeSpaces() {
    b->removeAttribute("spaces");
};

/* include <spacesmixin> */
mei::StaffDefLogMensuralMixIn::StaffDefLogMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffDefLogMensuralMixIn::~StaffDefLogMensuralMixIn() {}
MeiAttribute* mei::StaffDefLogMensuralMixIn::getProportNum() {
    if (!b->hasAttribute("proport.num")) {
        throw AttributeNotFoundException("proport.num");
    }
    return b->getAttribute("proport.num");
};

void mei::StaffDefLogMensuralMixIn::setProportNum(std::string _proportnum) {
    MeiAttribute *a = new MeiAttribute("proport.num", _proportnum);
    b->addAttribute(a);
};

bool mei::StaffDefLogMensuralMixIn::hasProportNum() {
    return b->hasAttribute("proport.num");
};

void mei::StaffDefLogMensuralMixIn::removeProportNum() {
    b->removeAttribute("proport.num");
};
MeiAttribute* mei::StaffDefLogMensuralMixIn::getProportNumbase() {
    if (!b->hasAttribute("proport.numbase")) {
        throw AttributeNotFoundException("proport.numbase");
    }
    return b->getAttribute("proport.numbase");
};

void mei::StaffDefLogMensuralMixIn::setProportNumbase(std::string _proportnumbase) {
    MeiAttribute *a = new MeiAttribute("proport.numbase", _proportnumbase);
    b->addAttribute(a);
};

bool mei::StaffDefLogMensuralMixIn::hasProportNumbase() {
    return b->hasAttribute("proport.numbase");
};

void mei::StaffDefLogMensuralMixIn::removeProportNumbase() {
    b->removeAttribute("proport.numbase");
};

/* include <proport.numbasemixin> */


