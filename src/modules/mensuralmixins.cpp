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
mei::MensuralLogMixIn::MensuralLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensuralLogMixIn::~MensuralLogMixIn() {}
MeiAttribute* mei::MensuralLogMixIn::getMensurDot() {
    if (!b->hasAttribute("mensur.dot")) {
        throw AttributeNotFoundException("mensur.dot");
    }
    return b->getAttribute("mensur.dot");
};

void mei::MensuralLogMixIn::setMensurDot(std::string _mensurdot) {
    MeiAttribute *a = new MeiAttribute("mensur.dot", _mensurdot);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasMensurDot() {
    return b->hasAttribute("mensur.dot");
};

void mei::MensuralLogMixIn::removeMensurDot() {
    b->removeAttribute("mensur.dot");
};
MeiAttribute* mei::MensuralLogMixIn::getMensurSign() {
    if (!b->hasAttribute("mensur.sign")) {
        throw AttributeNotFoundException("mensur.sign");
    }
    return b->getAttribute("mensur.sign");
};

void mei::MensuralLogMixIn::setMensurSign(std::string _mensursign) {
    MeiAttribute *a = new MeiAttribute("mensur.sign", _mensursign);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasMensurSign() {
    return b->hasAttribute("mensur.sign");
};

void mei::MensuralLogMixIn::removeMensurSign() {
    b->removeAttribute("mensur.sign");
};
MeiAttribute* mei::MensuralLogMixIn::getMensurSlash() {
    if (!b->hasAttribute("mensur.slash")) {
        throw AttributeNotFoundException("mensur.slash");
    }
    return b->getAttribute("mensur.slash");
};

void mei::MensuralLogMixIn::setMensurSlash(std::string _mensurslash) {
    MeiAttribute *a = new MeiAttribute("mensur.slash", _mensurslash);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasMensurSlash() {
    return b->hasAttribute("mensur.slash");
};

void mei::MensuralLogMixIn::removeMensurSlash() {
    b->removeAttribute("mensur.slash");
};
MeiAttribute* mei::MensuralLogMixIn::getProportNum() {
    if (!b->hasAttribute("proport.num")) {
        throw AttributeNotFoundException("proport.num");
    }
    return b->getAttribute("proport.num");
};

void mei::MensuralLogMixIn::setProportNum(std::string _proportnum) {
    MeiAttribute *a = new MeiAttribute("proport.num", _proportnum);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasProportNum() {
    return b->hasAttribute("proport.num");
};

void mei::MensuralLogMixIn::removeProportNum() {
    b->removeAttribute("proport.num");
};
MeiAttribute* mei::MensuralLogMixIn::getProportNumbase() {
    if (!b->hasAttribute("proport.numbase")) {
        throw AttributeNotFoundException("proport.numbase");
    }
    return b->getAttribute("proport.numbase");
};

void mei::MensuralLogMixIn::setProportNumbase(std::string _proportnumbase) {
    MeiAttribute *a = new MeiAttribute("proport.numbase", _proportnumbase);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasProportNumbase() {
    return b->hasAttribute("proport.numbase");
};

void mei::MensuralLogMixIn::removeProportNumbase() {
    b->removeAttribute("proport.numbase");
};

/* include <proport.numbasemixin> */
mei::MensuralSharedMixIn::MensuralSharedMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensuralSharedMixIn::~MensuralSharedMixIn() {}
MeiAttribute* mei::MensuralSharedMixIn::getModusmaior() {
    if (!b->hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->getAttribute("modusmaior");
};

void mei::MensuralSharedMixIn::setModusmaior(std::string _modusmaior) {
    MeiAttribute *a = new MeiAttribute("modusmaior", _modusmaior);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasModusmaior() {
    return b->hasAttribute("modusmaior");
};

void mei::MensuralSharedMixIn::removeModusmaior() {
    b->removeAttribute("modusmaior");
};
MeiAttribute* mei::MensuralSharedMixIn::getModusminor() {
    if (!b->hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->getAttribute("modusminor");
};

void mei::MensuralSharedMixIn::setModusminor(std::string _modusminor) {
    MeiAttribute *a = new MeiAttribute("modusminor", _modusminor);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasModusminor() {
    return b->hasAttribute("modusminor");
};

void mei::MensuralSharedMixIn::removeModusminor() {
    b->removeAttribute("modusminor");
};
MeiAttribute* mei::MensuralSharedMixIn::getProlatio() {
    if (!b->hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->getAttribute("prolatio");
};

void mei::MensuralSharedMixIn::setProlatio(std::string _prolatio) {
    MeiAttribute *a = new MeiAttribute("prolatio", _prolatio);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasProlatio() {
    return b->hasAttribute("prolatio");
};

void mei::MensuralSharedMixIn::removeProlatio() {
    b->removeAttribute("prolatio");
};
MeiAttribute* mei::MensuralSharedMixIn::getTempus() {
    if (!b->hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->getAttribute("tempus");
};

void mei::MensuralSharedMixIn::setTempus(std::string _tempus) {
    MeiAttribute *a = new MeiAttribute("tempus", _tempus);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasTempus() {
    return b->hasAttribute("tempus");
};

void mei::MensuralSharedMixIn::removeTempus() {
    b->removeAttribute("tempus");
};

/* include <tempusmixin> */
mei::MensuralVisMixIn::MensuralVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensuralVisMixIn::~MensuralVisMixIn() {}
MeiAttribute* mei::MensuralVisMixIn::getMensurColor() {
    if (!b->hasAttribute("mensur.color")) {
        throw AttributeNotFoundException("mensur.color");
    }
    return b->getAttribute("mensur.color");
};

void mei::MensuralVisMixIn::setMensurColor(std::string _mensurcolor) {
    MeiAttribute *a = new MeiAttribute("mensur.color", _mensurcolor);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurColor() {
    return b->hasAttribute("mensur.color");
};

void mei::MensuralVisMixIn::removeMensurColor() {
    b->removeAttribute("mensur.color");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurForm() {
    if (!b->hasAttribute("mensur.form")) {
        throw AttributeNotFoundException("mensur.form");
    }
    return b->getAttribute("mensur.form");
};

void mei::MensuralVisMixIn::setMensurForm(std::string _mensurform) {
    MeiAttribute *a = new MeiAttribute("mensur.form", _mensurform);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurForm() {
    return b->hasAttribute("mensur.form");
};

void mei::MensuralVisMixIn::removeMensurForm() {
    b->removeAttribute("mensur.form");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurLoc() {
    if (!b->hasAttribute("mensur.loc")) {
        throw AttributeNotFoundException("mensur.loc");
    }
    return b->getAttribute("mensur.loc");
};

void mei::MensuralVisMixIn::setMensurLoc(std::string _mensurloc) {
    MeiAttribute *a = new MeiAttribute("mensur.loc", _mensurloc);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurLoc() {
    return b->hasAttribute("mensur.loc");
};

void mei::MensuralVisMixIn::removeMensurLoc() {
    b->removeAttribute("mensur.loc");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurOrient() {
    if (!b->hasAttribute("mensur.orient")) {
        throw AttributeNotFoundException("mensur.orient");
    }
    return b->getAttribute("mensur.orient");
};

void mei::MensuralVisMixIn::setMensurOrient(std::string _mensurorient) {
    MeiAttribute *a = new MeiAttribute("mensur.orient", _mensurorient);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurOrient() {
    return b->hasAttribute("mensur.orient");
};

void mei::MensuralVisMixIn::removeMensurOrient() {
    b->removeAttribute("mensur.orient");
};
MeiAttribute* mei::MensuralVisMixIn::getMensurSize() {
    if (!b->hasAttribute("mensur.size")) {
        throw AttributeNotFoundException("mensur.size");
    }
    return b->getAttribute("mensur.size");
};

void mei::MensuralVisMixIn::setMensurSize(std::string _mensursize) {
    MeiAttribute *a = new MeiAttribute("mensur.size", _mensursize);
    b->addAttribute(a);
};

bool mei::MensuralVisMixIn::hasMensurSize() {
    return b->hasAttribute("mensur.size");
};

void mei::MensuralVisMixIn::removeMensurSize() {
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


