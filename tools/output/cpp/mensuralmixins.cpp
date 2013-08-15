#include "mensuralmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_ligatureLogMixIn::Mei_ligatureLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_ligatureLogMixIn::~Mei_ligatureLogMixIn() {}
MeiAttribute* mei::Mei_ligatureLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_ligatureLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_ligatureLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_ligatureLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::Mei_mensurVisMixIn::Mei_mensurVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_mensurVisMixIn::~Mei_mensurVisMixIn() {}
MeiAttribute* mei::Mei_mensurVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_mensurVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_mensurVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_mensurVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::Mei_mensurVisMixIn::getOrient() {
    if (!b->hasAttribute("orient")) {
        throw AttributeNotFoundException("orient");
    }
    return b->getAttribute("orient");
};

void mei::Mei_mensurVisMixIn::setOrient(std::string _orient) {
    MeiAttribute *a = new MeiAttribute("orient", _orient);
    b->addAttribute(a);
};

bool mei::Mei_mensurVisMixIn::hasOrient() {
    return b->hasAttribute("orient");
};

void mei::Mei_mensurVisMixIn::removeOrient() {
    b->removeAttribute("orient");
};

/* include <orientmixin> */
mei::Mei_mensurDefaultLogMixIn::Mei_mensurDefaultLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_mensurDefaultLogMixIn::~Mei_mensurDefaultLogMixIn() {}
MeiAttribute* mei::Mei_mensurDefaultLogMixIn::getMensurDot() {
    if (!b->hasAttribute("mensur.dot")) {
        throw AttributeNotFoundException("mensur.dot");
    }
    return b->getAttribute("mensur.dot");
};

void mei::Mei_mensurDefaultLogMixIn::setMensurDot(std::string _mensurdot) {
    MeiAttribute *a = new MeiAttribute("mensur.dot", _mensurdot);
    b->addAttribute(a);
};

bool mei::Mei_mensurDefaultLogMixIn::hasMensurDot() {
    return b->hasAttribute("mensur.dot");
};

void mei::Mei_mensurDefaultLogMixIn::removeMensurDot() {
    b->removeAttribute("mensur.dot");
};
MeiAttribute* mei::Mei_mensurDefaultLogMixIn::getMensurLoc() {
    if (!b->hasAttribute("mensur.loc")) {
        throw AttributeNotFoundException("mensur.loc");
    }
    return b->getAttribute("mensur.loc");
};

void mei::Mei_mensurDefaultLogMixIn::setMensurLoc(std::string _mensurloc) {
    MeiAttribute *a = new MeiAttribute("mensur.loc", _mensurloc);
    b->addAttribute(a);
};

bool mei::Mei_mensurDefaultLogMixIn::hasMensurLoc() {
    return b->hasAttribute("mensur.loc");
};

void mei::Mei_mensurDefaultLogMixIn::removeMensurLoc() {
    b->removeAttribute("mensur.loc");
};
MeiAttribute* mei::Mei_mensurDefaultLogMixIn::getMensurSign() {
    if (!b->hasAttribute("mensur.sign")) {
        throw AttributeNotFoundException("mensur.sign");
    }
    return b->getAttribute("mensur.sign");
};

void mei::Mei_mensurDefaultLogMixIn::setMensurSign(std::string _mensursign) {
    MeiAttribute *a = new MeiAttribute("mensur.sign", _mensursign);
    b->addAttribute(a);
};

bool mei::Mei_mensurDefaultLogMixIn::hasMensurSign() {
    return b->hasAttribute("mensur.sign");
};

void mei::Mei_mensurDefaultLogMixIn::removeMensurSign() {
    b->removeAttribute("mensur.sign");
};
MeiAttribute* mei::Mei_mensurDefaultLogMixIn::getMensurSlash() {
    if (!b->hasAttribute("mensur.slash")) {
        throw AttributeNotFoundException("mensur.slash");
    }
    return b->getAttribute("mensur.slash");
};

void mei::Mei_mensurDefaultLogMixIn::setMensurSlash(std::string _mensurslash) {
    MeiAttribute *a = new MeiAttribute("mensur.slash", _mensurslash);
    b->addAttribute(a);
};

bool mei::Mei_mensurDefaultLogMixIn::hasMensurSlash() {
    return b->hasAttribute("mensur.slash");
};

void mei::Mei_mensurDefaultLogMixIn::removeMensurSlash() {
    b->removeAttribute("mensur.slash");
};

/* include <mensur.slashmixin> */
mei::Mei_mensurDefaultVisMixIn::Mei_mensurDefaultVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_mensurDefaultVisMixIn::~Mei_mensurDefaultVisMixIn() {}
MeiAttribute* mei::Mei_mensurDefaultVisMixIn::getMensurColor() {
    if (!b->hasAttribute("mensur.color")) {
        throw AttributeNotFoundException("mensur.color");
    }
    return b->getAttribute("mensur.color");
};

void mei::Mei_mensurDefaultVisMixIn::setMensurColor(std::string _mensurcolor) {
    MeiAttribute *a = new MeiAttribute("mensur.color", _mensurcolor);
    b->addAttribute(a);
};

bool mei::Mei_mensurDefaultVisMixIn::hasMensurColor() {
    return b->hasAttribute("mensur.color");
};

void mei::Mei_mensurDefaultVisMixIn::removeMensurColor() {
    b->removeAttribute("mensur.color");
};
MeiAttribute* mei::Mei_mensurDefaultVisMixIn::getMensurForm() {
    if (!b->hasAttribute("mensur.form")) {
        throw AttributeNotFoundException("mensur.form");
    }
    return b->getAttribute("mensur.form");
};

void mei::Mei_mensurDefaultVisMixIn::setMensurForm(std::string _mensurform) {
    MeiAttribute *a = new MeiAttribute("mensur.form", _mensurform);
    b->addAttribute(a);
};

bool mei::Mei_mensurDefaultVisMixIn::hasMensurForm() {
    return b->hasAttribute("mensur.form");
};

void mei::Mei_mensurDefaultVisMixIn::removeMensurForm() {
    b->removeAttribute("mensur.form");
};
MeiAttribute* mei::Mei_mensurDefaultVisMixIn::getMensurOrient() {
    if (!b->hasAttribute("mensur.orient")) {
        throw AttributeNotFoundException("mensur.orient");
    }
    return b->getAttribute("mensur.orient");
};

void mei::Mei_mensurDefaultVisMixIn::setMensurOrient(std::string _mensurorient) {
    MeiAttribute *a = new MeiAttribute("mensur.orient", _mensurorient);
    b->addAttribute(a);
};

bool mei::Mei_mensurDefaultVisMixIn::hasMensurOrient() {
    return b->hasAttribute("mensur.orient");
};

void mei::Mei_mensurDefaultVisMixIn::removeMensurOrient() {
    b->removeAttribute("mensur.orient");
};
MeiAttribute* mei::Mei_mensurDefaultVisMixIn::getMensurSize() {
    if (!b->hasAttribute("mensur.size")) {
        throw AttributeNotFoundException("mensur.size");
    }
    return b->getAttribute("mensur.size");
};

void mei::Mei_mensurDefaultVisMixIn::setMensurSize(std::string _mensursize) {
    MeiAttribute *a = new MeiAttribute("mensur.size", _mensursize);
    b->addAttribute(a);
};

bool mei::Mei_mensurDefaultVisMixIn::hasMensurSize() {
    return b->hasAttribute("mensur.size");
};

void mei::Mei_mensurDefaultVisMixIn::removeMensurSize() {
    b->removeAttribute("mensur.size");
};

/* include <mensur.sizemixin> */
mei::Mei_noteLogMensuralMixIn::Mei_noteLogMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_noteLogMensuralMixIn::~Mei_noteLogMensuralMixIn() {}
MeiAttribute* mei::Mei_noteLogMensuralMixIn::getLig() {
    if (!b->hasAttribute("lig")) {
        throw AttributeNotFoundException("lig");
    }
    return b->getAttribute("lig");
};

void mei::Mei_noteLogMensuralMixIn::setLig(std::string _lig) {
    MeiAttribute *a = new MeiAttribute("lig", _lig);
    b->addAttribute(a);
};

bool mei::Mei_noteLogMensuralMixIn::hasLig() {
    return b->hasAttribute("lig");
};

void mei::Mei_noteLogMensuralMixIn::removeLig() {
    b->removeAttribute("lig");
};

/* include <ligmixin> */
mei::Mei_restVisMensuralMixIn::Mei_restVisMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_restVisMensuralMixIn::~Mei_restVisMensuralMixIn() {}
MeiAttribute* mei::Mei_restVisMensuralMixIn::getSpaces() {
    if (!b->hasAttribute("spaces")) {
        throw AttributeNotFoundException("spaces");
    }
    return b->getAttribute("spaces");
};

void mei::Mei_restVisMensuralMixIn::setSpaces(std::string _spaces) {
    MeiAttribute *a = new MeiAttribute("spaces", _spaces);
    b->addAttribute(a);
};

bool mei::Mei_restVisMensuralMixIn::hasSpaces() {
    return b->hasAttribute("spaces");
};

void mei::Mei_restVisMensuralMixIn::removeSpaces() {
    b->removeAttribute("spaces");
};

/* include <spacesmixin> */
mei::Mei_staffDefLogMensuralMixIn::Mei_staffDefLogMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_staffDefLogMensuralMixIn::~Mei_staffDefLogMensuralMixIn() {}
MeiAttribute* mei::Mei_staffDefLogMensuralMixIn::getProportNum() {
    if (!b->hasAttribute("proport.num")) {
        throw AttributeNotFoundException("proport.num");
    }
    return b->getAttribute("proport.num");
};

void mei::Mei_staffDefLogMensuralMixIn::setProportNum(std::string _proportnum) {
    MeiAttribute *a = new MeiAttribute("proport.num", _proportnum);
    b->addAttribute(a);
};

bool mei::Mei_staffDefLogMensuralMixIn::hasProportNum() {
    return b->hasAttribute("proport.num");
};

void mei::Mei_staffDefLogMensuralMixIn::removeProportNum() {
    b->removeAttribute("proport.num");
};
MeiAttribute* mei::Mei_staffDefLogMensuralMixIn::getProportNumbase() {
    if (!b->hasAttribute("proport.numbase")) {
        throw AttributeNotFoundException("proport.numbase");
    }
    return b->getAttribute("proport.numbase");
};

void mei::Mei_staffDefLogMensuralMixIn::setProportNumbase(std::string _proportnumbase) {
    MeiAttribute *a = new MeiAttribute("proport.numbase", _proportnumbase);
    b->addAttribute(a);
};

bool mei::Mei_staffDefLogMensuralMixIn::hasProportNumbase() {
    return b->hasAttribute("proport.numbase");
};

void mei::Mei_staffDefLogMensuralMixIn::removeProportNumbase() {
    b->removeAttribute("proport.numbase");
};

/* include <proport.numbasemixin> */


