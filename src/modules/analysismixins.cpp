#include "analysismixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::CommonAnlMixIn::CommonAnlMixIn(MeiElement *b) {
    this->b = b;
};

mei::CommonAnlMixIn::~CommonAnlMixIn() {}
MeiAttribute* mei::CommonAnlMixIn::getCopyof() {
    if (!b->hasAttribute("copyof")) {
        return NULL;
    }
    return b->getAttribute("copyof");
};

void mei::CommonAnlMixIn::setCopyof(std::string _copyof) {
    MeiAttribute *a = new MeiAttribute("copyof", _copyof);
    b->addAttribute(a);
};

bool mei::CommonAnlMixIn::hasCopyof() {
    return b->hasAttribute("copyof");
};

void mei::CommonAnlMixIn::removeCopyof() {
    b->removeAttribute("copyof");
};
MeiAttribute* mei::CommonAnlMixIn::getCorresp() {
    if (!b->hasAttribute("corresp")) {
        return NULL;
    }
    return b->getAttribute("corresp");
};

void mei::CommonAnlMixIn::setCorresp(std::string _corresp) {
    MeiAttribute *a = new MeiAttribute("corresp", _corresp);
    b->addAttribute(a);
};

bool mei::CommonAnlMixIn::hasCorresp() {
    return b->hasAttribute("corresp");
};

void mei::CommonAnlMixIn::removeCorresp() {
    b->removeAttribute("corresp");
};
MeiAttribute* mei::CommonAnlMixIn::getNext() {
    if (!b->hasAttribute("next")) {
        return NULL;
    }
    return b->getAttribute("next");
};

void mei::CommonAnlMixIn::setNext(std::string _next) {
    MeiAttribute *a = new MeiAttribute("next", _next);
    b->addAttribute(a);
};

bool mei::CommonAnlMixIn::hasNext() {
    return b->hasAttribute("next");
};

void mei::CommonAnlMixIn::removeNext() {
    b->removeAttribute("next");
};
MeiAttribute* mei::CommonAnlMixIn::getPrev() {
    if (!b->hasAttribute("prev")) {
        return NULL;
    }
    return b->getAttribute("prev");
};

void mei::CommonAnlMixIn::setPrev(std::string _prev) {
    MeiAttribute *a = new MeiAttribute("prev", _prev);
    b->addAttribute(a);
};

bool mei::CommonAnlMixIn::hasPrev() {
    return b->hasAttribute("prev");
};

void mei::CommonAnlMixIn::removePrev() {
    b->removeAttribute("prev");
};
MeiAttribute* mei::CommonAnlMixIn::getSameas() {
    if (!b->hasAttribute("sameas")) {
        return NULL;
    }
    return b->getAttribute("sameas");
};

void mei::CommonAnlMixIn::setSameas(std::string _sameas) {
    MeiAttribute *a = new MeiAttribute("sameas", _sameas);
    b->addAttribute(a);
};

bool mei::CommonAnlMixIn::hasSameas() {
    return b->hasAttribute("sameas");
};

void mei::CommonAnlMixIn::removeSameas() {
    b->removeAttribute("sameas");
};
MeiAttribute* mei::CommonAnlMixIn::getSynch() {
    if (!b->hasAttribute("synch")) {
        return NULL;
    }
    return b->getAttribute("synch");
};

void mei::CommonAnlMixIn::setSynch(std::string _synch) {
    MeiAttribute *a = new MeiAttribute("synch", _synch);
    b->addAttribute(a);
};

bool mei::CommonAnlMixIn::hasSynch() {
    return b->hasAttribute("synch");
};

void mei::CommonAnlMixIn::removeSynch() {
    b->removeAttribute("synch");
};

/* include <synchmixin> */
mei::HarmonicfunctionMixIn::HarmonicfunctionMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarmonicfunctionMixIn::~HarmonicfunctionMixIn() {}
MeiAttribute* mei::HarmonicfunctionMixIn::getDeg() {
    if (!b->hasAttribute("deg")) {
        return NULL;
    }
    return b->getAttribute("deg");
};

void mei::HarmonicfunctionMixIn::setDeg(std::string _deg) {
    MeiAttribute *a = new MeiAttribute("deg", _deg);
    b->addAttribute(a);
};

bool mei::HarmonicfunctionMixIn::hasDeg() {
    return b->hasAttribute("deg");
};

void mei::HarmonicfunctionMixIn::removeDeg() {
    b->removeAttribute("deg");
};

/* include <degmixin> */
mei::IntervalharmonicMixIn::IntervalharmonicMixIn(MeiElement *b) {
    this->b = b;
};

mei::IntervalharmonicMixIn::~IntervalharmonicMixIn() {}
MeiAttribute* mei::IntervalharmonicMixIn::getInth() {
    if (!b->hasAttribute("inth")) {
        return NULL;
    }
    return b->getAttribute("inth");
};

void mei::IntervalharmonicMixIn::setInth(std::string _inth) {
    MeiAttribute *a = new MeiAttribute("inth", _inth);
    b->addAttribute(a);
};

bool mei::IntervalharmonicMixIn::hasInth() {
    return b->hasAttribute("inth");
};

void mei::IntervalharmonicMixIn::removeInth() {
    b->removeAttribute("inth");
};

/* include <inthmixin> */
mei::IntervalmelodicMixIn::IntervalmelodicMixIn(MeiElement *b) {
    this->b = b;
};

mei::IntervalmelodicMixIn::~IntervalmelodicMixIn() {}
MeiAttribute* mei::IntervalmelodicMixIn::getIntm() {
    if (!b->hasAttribute("intm")) {
        return NULL;
    }
    return b->getAttribute("intm");
};

void mei::IntervalmelodicMixIn::setIntm(std::string _intm) {
    MeiAttribute *a = new MeiAttribute("intm", _intm);
    b->addAttribute(a);
};

bool mei::IntervalmelodicMixIn::hasIntm() {
    return b->hasAttribute("intm");
};

void mei::IntervalmelodicMixIn::removeIntm() {
    b->removeAttribute("intm");
};

/* include <intmmixin> */
mei::MelodicfunctionMixIn::MelodicfunctionMixIn(MeiElement *b) {
    this->b = b;
};

mei::MelodicfunctionMixIn::~MelodicfunctionMixIn() {}
MeiAttribute* mei::MelodicfunctionMixIn::getMfunc() {
    if (!b->hasAttribute("mfunc")) {
        return NULL;
    }
    return b->getAttribute("mfunc");
};

void mei::MelodicfunctionMixIn::setMfunc(std::string _mfunc) {
    MeiAttribute *a = new MeiAttribute("mfunc", _mfunc);
    b->addAttribute(a);
};

bool mei::MelodicfunctionMixIn::hasMfunc() {
    return b->hasAttribute("mfunc");
};

void mei::MelodicfunctionMixIn::removeMfunc() {
    b->removeAttribute("mfunc");
};

/* include <mfuncmixin> */
mei::PitchclassMixIn::PitchclassMixIn(MeiElement *b) {
    this->b = b;
};

mei::PitchclassMixIn::~PitchclassMixIn() {}
MeiAttribute* mei::PitchclassMixIn::getPclass() {
    if (!b->hasAttribute("pclass")) {
        return NULL;
    }
    return b->getAttribute("pclass");
};

void mei::PitchclassMixIn::setPclass(std::string _pclass) {
    MeiAttribute *a = new MeiAttribute("pclass", _pclass);
    b->addAttribute(a);
};

bool mei::PitchclassMixIn::hasPclass() {
    return b->hasAttribute("pclass");
};

void mei::PitchclassMixIn::removePclass() {
    b->removeAttribute("pclass");
};

/* include <pclassmixin> */
mei::SolfaMixIn::SolfaMixIn(MeiElement *b) {
    this->b = b;
};

mei::SolfaMixIn::~SolfaMixIn() {}
MeiAttribute* mei::SolfaMixIn::getPsolfa() {
    if (!b->hasAttribute("psolfa")) {
        return NULL;
    }
    return b->getAttribute("psolfa");
};

void mei::SolfaMixIn::setPsolfa(std::string _psolfa) {
    MeiAttribute *a = new MeiAttribute("psolfa", _psolfa);
    b->addAttribute(a);
};

bool mei::SolfaMixIn::hasPsolfa() {
    return b->hasAttribute("psolfa");
};

void mei::SolfaMixIn::removePsolfa() {
    b->removeAttribute("psolfa");
};

/* include <psolfamixin> */


