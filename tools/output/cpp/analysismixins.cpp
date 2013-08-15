#include "analysismixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::GlobalAnalyticMixIn::GlobalAnalyticMixIn(MeiElement *b) {
    this->b = b;
};

mei::GlobalAnalyticMixIn::~GlobalAnalyticMixIn() {}
MeiAttribute* mei::GlobalAnalyticMixIn::getAna() {
    if (!b->hasAttribute("ana")) {
        throw AttributeNotFoundException("ana");
    }
    return b->getAttribute("ana");
};

void mei::GlobalAnalyticMixIn::setAna(std::string _ana) {
    MeiAttribute *a = new MeiAttribute("ana", _ana);
    b->addAttribute(a);
};

bool mei::GlobalAnalyticMixIn::hasAna() {
    return b->hasAttribute("ana");
};

void mei::GlobalAnalyticMixIn::removeAna() {
    b->removeAttribute("ana");
};

/* include <anamixin> */
mei::Mei_commonAnlMixIn::Mei_commonAnlMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_commonAnlMixIn::~Mei_commonAnlMixIn() {}
MeiAttribute* mei::Mei_commonAnlMixIn::getCopyof() {
    if (!b->hasAttribute("copyof")) {
        throw AttributeNotFoundException("copyof");
    }
    return b->getAttribute("copyof");
};

void mei::Mei_commonAnlMixIn::setCopyof(std::string _copyof) {
    MeiAttribute *a = new MeiAttribute("copyof", _copyof);
    b->addAttribute(a);
};

bool mei::Mei_commonAnlMixIn::hasCopyof() {
    return b->hasAttribute("copyof");
};

void mei::Mei_commonAnlMixIn::removeCopyof() {
    b->removeAttribute("copyof");
};
MeiAttribute* mei::Mei_commonAnlMixIn::getCorresp() {
    if (!b->hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->getAttribute("corresp");
};

void mei::Mei_commonAnlMixIn::setCorresp(std::string _corresp) {
    MeiAttribute *a = new MeiAttribute("corresp", _corresp);
    b->addAttribute(a);
};

bool mei::Mei_commonAnlMixIn::hasCorresp() {
    return b->hasAttribute("corresp");
};

void mei::Mei_commonAnlMixIn::removeCorresp() {
    b->removeAttribute("corresp");
};
MeiAttribute* mei::Mei_commonAnlMixIn::getNext() {
    if (!b->hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->getAttribute("next");
};

void mei::Mei_commonAnlMixIn::setNext(std::string _next) {
    MeiAttribute *a = new MeiAttribute("next", _next);
    b->addAttribute(a);
};

bool mei::Mei_commonAnlMixIn::hasNext() {
    return b->hasAttribute("next");
};

void mei::Mei_commonAnlMixIn::removeNext() {
    b->removeAttribute("next");
};
MeiAttribute* mei::Mei_commonAnlMixIn::getPrev() {
    if (!b->hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->getAttribute("prev");
};

void mei::Mei_commonAnlMixIn::setPrev(std::string _prev) {
    MeiAttribute *a = new MeiAttribute("prev", _prev);
    b->addAttribute(a);
};

bool mei::Mei_commonAnlMixIn::hasPrev() {
    return b->hasAttribute("prev");
};

void mei::Mei_commonAnlMixIn::removePrev() {
    b->removeAttribute("prev");
};
MeiAttribute* mei::Mei_commonAnlMixIn::getSameas() {
    if (!b->hasAttribute("sameas")) {
        throw AttributeNotFoundException("sameas");
    }
    return b->getAttribute("sameas");
};

void mei::Mei_commonAnlMixIn::setSameas(std::string _sameas) {
    MeiAttribute *a = new MeiAttribute("sameas", _sameas);
    b->addAttribute(a);
};

bool mei::Mei_commonAnlMixIn::hasSameas() {
    return b->hasAttribute("sameas");
};

void mei::Mei_commonAnlMixIn::removeSameas() {
    b->removeAttribute("sameas");
};
MeiAttribute* mei::Mei_commonAnlMixIn::getSynch() {
    if (!b->hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->getAttribute("synch");
};

void mei::Mei_commonAnlMixIn::setSynch(std::string _synch) {
    MeiAttribute *a = new MeiAttribute("synch", _synch);
    b->addAttribute(a);
};

bool mei::Mei_commonAnlMixIn::hasSynch() {
    return b->hasAttribute("synch");
};

void mei::Mei_commonAnlMixIn::removeSynch() {
    b->removeAttribute("synch");
};

/* include <synchmixin> */
mei::Mei_harmonicfunctionMixIn::Mei_harmonicfunctionMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_harmonicfunctionMixIn::~Mei_harmonicfunctionMixIn() {}
MeiAttribute* mei::Mei_harmonicfunctionMixIn::getHfunc() {
    if (!b->hasAttribute("hfunc")) {
        throw AttributeNotFoundException("hfunc");
    }
    return b->getAttribute("hfunc");
};

void mei::Mei_harmonicfunctionMixIn::setHfunc(std::string _hfunc) {
    MeiAttribute *a = new MeiAttribute("hfunc", _hfunc);
    b->addAttribute(a);
};

bool mei::Mei_harmonicfunctionMixIn::hasHfunc() {
    return b->hasAttribute("hfunc");
};

void mei::Mei_harmonicfunctionMixIn::removeHfunc() {
    b->removeAttribute("hfunc");
};

/* include <hfuncmixin> */
mei::Mei_intervalharmonicMixIn::Mei_intervalharmonicMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_intervalharmonicMixIn::~Mei_intervalharmonicMixIn() {}
MeiAttribute* mei::Mei_intervalharmonicMixIn::getInth() {
    if (!b->hasAttribute("inth")) {
        throw AttributeNotFoundException("inth");
    }
    return b->getAttribute("inth");
};

void mei::Mei_intervalharmonicMixIn::setInth(std::string _inth) {
    MeiAttribute *a = new MeiAttribute("inth", _inth);
    b->addAttribute(a);
};

bool mei::Mei_intervalharmonicMixIn::hasInth() {
    return b->hasAttribute("inth");
};

void mei::Mei_intervalharmonicMixIn::removeInth() {
    b->removeAttribute("inth");
};

/* include <inthmixin> */
mei::Mei_intervallicdescMixIn::Mei_intervallicdescMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_intervallicdescMixIn::~Mei_intervallicdescMixIn() {}
MeiAttribute* mei::Mei_intervallicdescMixIn::getIntm() {
    if (!b->hasAttribute("intm")) {
        throw AttributeNotFoundException("intm");
    }
    return b->getAttribute("intm");
};

void mei::Mei_intervallicdescMixIn::setIntm(std::string _intm) {
    MeiAttribute *a = new MeiAttribute("intm", _intm);
    b->addAttribute(a);
};

bool mei::Mei_intervallicdescMixIn::hasIntm() {
    return b->hasAttribute("intm");
};

void mei::Mei_intervallicdescMixIn::removeIntm() {
    b->removeAttribute("intm");
};

/* include <intmmixin> */
mei::Mei_melodicfunctionMixIn::Mei_melodicfunctionMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_melodicfunctionMixIn::~Mei_melodicfunctionMixIn() {}
MeiAttribute* mei::Mei_melodicfunctionMixIn::getMfunc() {
    if (!b->hasAttribute("mfunc")) {
        throw AttributeNotFoundException("mfunc");
    }
    return b->getAttribute("mfunc");
};

void mei::Mei_melodicfunctionMixIn::setMfunc(std::string _mfunc) {
    MeiAttribute *a = new MeiAttribute("mfunc", _mfunc);
    b->addAttribute(a);
};

bool mei::Mei_melodicfunctionMixIn::hasMfunc() {
    return b->hasAttribute("mfunc");
};

void mei::Mei_melodicfunctionMixIn::removeMfunc() {
    b->removeAttribute("mfunc");
};

/* include <mfuncmixin> */
mei::Mei_pitchclassMixIn::Mei_pitchclassMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_pitchclassMixIn::~Mei_pitchclassMixIn() {}
MeiAttribute* mei::Mei_pitchclassMixIn::getPclass() {
    if (!b->hasAttribute("pclass")) {
        throw AttributeNotFoundException("pclass");
    }
    return b->getAttribute("pclass");
};

void mei::Mei_pitchclassMixIn::setPclass(std::string _pclass) {
    MeiAttribute *a = new MeiAttribute("pclass", _pclass);
    b->addAttribute(a);
};

bool mei::Mei_pitchclassMixIn::hasPclass() {
    return b->hasAttribute("pclass");
};

void mei::Mei_pitchclassMixIn::removePclass() {
    b->removeAttribute("pclass");
};

/* include <pclassmixin> */
mei::Mei_solfaMixIn::Mei_solfaMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_solfaMixIn::~Mei_solfaMixIn() {}
MeiAttribute* mei::Mei_solfaMixIn::getPsolfa() {
    if (!b->hasAttribute("psolfa")) {
        throw AttributeNotFoundException("psolfa");
    }
    return b->getAttribute("psolfa");
};

void mei::Mei_solfaMixIn::setPsolfa(std::string _psolfa) {
    MeiAttribute *a = new MeiAttribute("psolfa", _psolfa);
    b->addAttribute(a);
};

bool mei::Mei_solfaMixIn::hasPsolfa() {
    return b->hasAttribute("psolfa");
};

void mei::Mei_solfaMixIn::removePsolfa() {
    b->removeAttribute("psolfa");
};

/* include <psolfamixin> */


