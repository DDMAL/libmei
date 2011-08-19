

#include "analysismixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::CommonAnlMixIn::CommonAnlMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::CommonAnlMixIn::getCopyof() {
    if (!b->hasAttribute("copyof")) {
        throw AttributeNotFoundException("copyof");
    }
    return b->getAttribute("copyof");
};

void mei::CommonAnlMixIn::setCopyof(std::string _copyof) {
    if (!b->hasAttribute("copyof")) {
        MeiAttribute *a = new MeiAttribute("copyof", _copyof);
        b->addAttribute(a);
    }
};

bool mei::CommonAnlMixIn::hasCopyof() {
    return b->hasAttribute("copyof");
};

void mei::CommonAnlMixIn::removeCopyof() {
    b->removeAttribute("copyof");
};

MeiAttribute* mei::CommonAnlMixIn::getCorresp() {
    if (!b->hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->getAttribute("corresp");
};

void mei::CommonAnlMixIn::setCorresp(std::string _corresp) {
    if (!b->hasAttribute("corresp")) {
        MeiAttribute *a = new MeiAttribute("corresp", _corresp);
        b->addAttribute(a);
    }
};

bool mei::CommonAnlMixIn::hasCorresp() {
    return b->hasAttribute("corresp");
};

void mei::CommonAnlMixIn::removeCorresp() {
    b->removeAttribute("corresp");
};

MeiAttribute* mei::CommonAnlMixIn::getNext() {
    if (!b->hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->getAttribute("next");
};

void mei::CommonAnlMixIn::setNext(std::string _next) {
    if (!b->hasAttribute("next")) {
        MeiAttribute *a = new MeiAttribute("next", _next);
        b->addAttribute(a);
    }
};

bool mei::CommonAnlMixIn::hasNext() {
    return b->hasAttribute("next");
};

void mei::CommonAnlMixIn::removeNext() {
    b->removeAttribute("next");
};

MeiAttribute* mei::CommonAnlMixIn::getPrev() {
    if (!b->hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->getAttribute("prev");
};

void mei::CommonAnlMixIn::setPrev(std::string _prev) {
    if (!b->hasAttribute("prev")) {
        MeiAttribute *a = new MeiAttribute("prev", _prev);
        b->addAttribute(a);
    }
};

bool mei::CommonAnlMixIn::hasPrev() {
    return b->hasAttribute("prev");
};

void mei::CommonAnlMixIn::removePrev() {
    b->removeAttribute("prev");
};

MeiAttribute* mei::CommonAnlMixIn::getSameas() {
    if (!b->hasAttribute("sameas")) {
        throw AttributeNotFoundException("sameas");
    }
    return b->getAttribute("sameas");
};

void mei::CommonAnlMixIn::setSameas(std::string _sameas) {
    if (!b->hasAttribute("sameas")) {
        MeiAttribute *a = new MeiAttribute("sameas", _sameas);
        b->addAttribute(a);
    }
};

bool mei::CommonAnlMixIn::hasSameas() {
    return b->hasAttribute("sameas");
};

void mei::CommonAnlMixIn::removeSameas() {
    b->removeAttribute("sameas");
};

MeiAttribute* mei::CommonAnlMixIn::getSynch() {
    if (!b->hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->getAttribute("synch");
};

void mei::CommonAnlMixIn::setSynch(std::string _synch) {
    if (!b->hasAttribute("synch")) {
        MeiAttribute *a = new MeiAttribute("synch", _synch);
        b->addAttribute(a);
    }
};

bool mei::CommonAnlMixIn::hasSynch() {
    return b->hasAttribute("synch");
};

void mei::CommonAnlMixIn::removeSynch() {
    b->removeAttribute("synch");
};


mei::HarmonicfunctionMixIn::HarmonicfunctionMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::HarmonicfunctionMixIn::getHfunc() {
    if (!b->hasAttribute("hfunc")) {
        throw AttributeNotFoundException("hfunc");
    }
    return b->getAttribute("hfunc");
};

void mei::HarmonicfunctionMixIn::setHfunc(std::string _hfunc) {
    if (!b->hasAttribute("hfunc")) {
        MeiAttribute *a = new MeiAttribute("hfunc", _hfunc);
        b->addAttribute(a);
    }
};

bool mei::HarmonicfunctionMixIn::hasHfunc() {
    return b->hasAttribute("hfunc");
};

void mei::HarmonicfunctionMixIn::removeHfunc() {
    b->removeAttribute("hfunc");
};


mei::IntervalharmonicMixIn::IntervalharmonicMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::IntervalharmonicMixIn::getInth() {
    if (!b->hasAttribute("inth")) {
        throw AttributeNotFoundException("inth");
    }
    return b->getAttribute("inth");
};

void mei::IntervalharmonicMixIn::setInth(std::string _inth) {
    if (!b->hasAttribute("inth")) {
        MeiAttribute *a = new MeiAttribute("inth", _inth);
        b->addAttribute(a);
    }
};

bool mei::IntervalharmonicMixIn::hasInth() {
    return b->hasAttribute("inth");
};

void mei::IntervalharmonicMixIn::removeInth() {
    b->removeAttribute("inth");
};


mei::IntervallicdescMixIn::IntervallicdescMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::IntervallicdescMixIn::getIntm() {
    if (!b->hasAttribute("intm")) {
        throw AttributeNotFoundException("intm");
    }
    return b->getAttribute("intm");
};

void mei::IntervallicdescMixIn::setIntm(std::string _intm) {
    if (!b->hasAttribute("intm")) {
        MeiAttribute *a = new MeiAttribute("intm", _intm);
        b->addAttribute(a);
    }
};

bool mei::IntervallicdescMixIn::hasIntm() {
    return b->hasAttribute("intm");
};

void mei::IntervallicdescMixIn::removeIntm() {
    b->removeAttribute("intm");
};


mei::MelodicfunctionMixIn::MelodicfunctionMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::MelodicfunctionMixIn::getMfunc() {
    if (!b->hasAttribute("mfunc")) {
        throw AttributeNotFoundException("mfunc");
    }
    return b->getAttribute("mfunc");
};

void mei::MelodicfunctionMixIn::setMfunc(std::string _mfunc) {
    if (!b->hasAttribute("mfunc")) {
        MeiAttribute *a = new MeiAttribute("mfunc", _mfunc);
        b->addAttribute(a);
    }
};

bool mei::MelodicfunctionMixIn::hasMfunc() {
    return b->hasAttribute("mfunc");
};

void mei::MelodicfunctionMixIn::removeMfunc() {
    b->removeAttribute("mfunc");
};


mei::PitchclassMixIn::PitchclassMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::PitchclassMixIn::getPclass() {
    if (!b->hasAttribute("pclass")) {
        throw AttributeNotFoundException("pclass");
    }
    return b->getAttribute("pclass");
};

void mei::PitchclassMixIn::setPclass(std::string _pclass) {
    if (!b->hasAttribute("pclass")) {
        MeiAttribute *a = new MeiAttribute("pclass", _pclass);
        b->addAttribute(a);
    }
};

bool mei::PitchclassMixIn::hasPclass() {
    return b->hasAttribute("pclass");
};

void mei::PitchclassMixIn::removePclass() {
    b->removeAttribute("pclass");
};


mei::SolfaMixIn::SolfaMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::SolfaMixIn::getPsolfa() {
    if (!b->hasAttribute("psolfa")) {
        throw AttributeNotFoundException("psolfa");
    }
    return b->getAttribute("psolfa");
};

void mei::SolfaMixIn::setPsolfa(std::string _psolfa) {
    if (!b->hasAttribute("psolfa")) {
        MeiAttribute *a = new MeiAttribute("psolfa", _psolfa);
        b->addAttribute(a);
    }
};

bool mei::SolfaMixIn::hasPsolfa() {
    return b->hasAttribute("psolfa");
};

void mei::SolfaMixIn::removePsolfa() {
    b->removeAttribute("psolfa");
};



