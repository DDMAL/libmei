

#include "analysismixins.h"
using std::string;


CommonAnlMixIn::CommonAnlMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CommonAnlMixIn::getCopyofValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("copyof")) {
        throw AttributeNotFoundException("copyof");
    }
    return b->m_Base.getAttributeValue("copyof");
};

MeiAttribute* CommonAnlMixIn::getCopyof() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("copyof")) {
        throw AttributeNotFoundException("copyof");
    }
    return b->m_Base.getAttribute("copyof");
};

void CommonAnlMixIn::setCopyof(std::string _copyof) {
    if (!b->m_Base.hasAttribute("copyof")) {
        MeiAttribute *a = new MeiAttribute("copyof", _copyof);
        b->m_Base.addAttribute(a);
    }
};

bool CommonAnlMixIn::hasCopyof() {
    return b->m_Base.hasAttribute("copyof");
};

void CommonAnlMixIn::removeCopyof() {
    b->m_Base.removeAttribute("copyof");
};

string CommonAnlMixIn::getCorrespValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->m_Base.getAttributeValue("corresp");
};

MeiAttribute* CommonAnlMixIn::getCorresp() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->m_Base.getAttribute("corresp");
};

void CommonAnlMixIn::setCorresp(std::string _corresp) {
    if (!b->m_Base.hasAttribute("corresp")) {
        MeiAttribute *a = new MeiAttribute("corresp", _corresp);
        b->m_Base.addAttribute(a);
    }
};

bool CommonAnlMixIn::hasCorresp() {
    return b->m_Base.hasAttribute("corresp");
};

void CommonAnlMixIn::removeCorresp() {
    b->m_Base.removeAttribute("corresp");
};

string CommonAnlMixIn::getNextValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->m_Base.getAttributeValue("next");
};

MeiAttribute* CommonAnlMixIn::getNext() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->m_Base.getAttribute("next");
};

void CommonAnlMixIn::setNext(std::string _next) {
    if (!b->m_Base.hasAttribute("next")) {
        MeiAttribute *a = new MeiAttribute("next", _next);
        b->m_Base.addAttribute(a);
    }
};

bool CommonAnlMixIn::hasNext() {
    return b->m_Base.hasAttribute("next");
};

void CommonAnlMixIn::removeNext() {
    b->m_Base.removeAttribute("next");
};

string CommonAnlMixIn::getPrevValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->m_Base.getAttributeValue("prev");
};

MeiAttribute* CommonAnlMixIn::getPrev() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->m_Base.getAttribute("prev");
};

void CommonAnlMixIn::setPrev(std::string _prev) {
    if (!b->m_Base.hasAttribute("prev")) {
        MeiAttribute *a = new MeiAttribute("prev", _prev);
        b->m_Base.addAttribute(a);
    }
};

bool CommonAnlMixIn::hasPrev() {
    return b->m_Base.hasAttribute("prev");
};

void CommonAnlMixIn::removePrev() {
    b->m_Base.removeAttribute("prev");
};

string CommonAnlMixIn::getSameasValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("sameas")) {
        throw AttributeNotFoundException("sameas");
    }
    return b->m_Base.getAttributeValue("sameas");
};

MeiAttribute* CommonAnlMixIn::getSameas() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("sameas")) {
        throw AttributeNotFoundException("sameas");
    }
    return b->m_Base.getAttribute("sameas");
};

void CommonAnlMixIn::setSameas(std::string _sameas) {
    if (!b->m_Base.hasAttribute("sameas")) {
        MeiAttribute *a = new MeiAttribute("sameas", _sameas);
        b->m_Base.addAttribute(a);
    }
};

bool CommonAnlMixIn::hasSameas() {
    return b->m_Base.hasAttribute("sameas");
};

void CommonAnlMixIn::removeSameas() {
    b->m_Base.removeAttribute("sameas");
};

string CommonAnlMixIn::getSynchValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->m_Base.getAttributeValue("synch");
};

MeiAttribute* CommonAnlMixIn::getSynch() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->m_Base.getAttribute("synch");
};

void CommonAnlMixIn::setSynch(std::string _synch) {
    if (!b->m_Base.hasAttribute("synch")) {
        MeiAttribute *a = new MeiAttribute("synch", _synch);
        b->m_Base.addAttribute(a);
    }
};

bool CommonAnlMixIn::hasSynch() {
    return b->m_Base.hasAttribute("synch");
};

void CommonAnlMixIn::removeSynch() {
    b->m_Base.removeAttribute("synch");
};


HarmonicfunctionMixIn::HarmonicfunctionMixIn(BaseMeiElement *b) {
    this->b = b;
};

string HarmonicfunctionMixIn::getHfuncValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hfunc")) {
        throw AttributeNotFoundException("hfunc");
    }
    return b->m_Base.getAttributeValue("hfunc");
};

MeiAttribute* HarmonicfunctionMixIn::getHfunc() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hfunc")) {
        throw AttributeNotFoundException("hfunc");
    }
    return b->m_Base.getAttribute("hfunc");
};

void HarmonicfunctionMixIn::setHfunc(std::string _hfunc) {
    if (!b->m_Base.hasAttribute("hfunc")) {
        MeiAttribute *a = new MeiAttribute("hfunc", _hfunc);
        b->m_Base.addAttribute(a);
    }
};

bool HarmonicfunctionMixIn::hasHfunc() {
    return b->m_Base.hasAttribute("hfunc");
};

void HarmonicfunctionMixIn::removeHfunc() {
    b->m_Base.removeAttribute("hfunc");
};


IntervalharmonicMixIn::IntervalharmonicMixIn(BaseMeiElement *b) {
    this->b = b;
};

string IntervalharmonicMixIn::getInthValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("inth")) {
        throw AttributeNotFoundException("inth");
    }
    return b->m_Base.getAttributeValue("inth");
};

MeiAttribute* IntervalharmonicMixIn::getInth() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("inth")) {
        throw AttributeNotFoundException("inth");
    }
    return b->m_Base.getAttribute("inth");
};

void IntervalharmonicMixIn::setInth(std::string _inth) {
    if (!b->m_Base.hasAttribute("inth")) {
        MeiAttribute *a = new MeiAttribute("inth", _inth);
        b->m_Base.addAttribute(a);
    }
};

bool IntervalharmonicMixIn::hasInth() {
    return b->m_Base.hasAttribute("inth");
};

void IntervalharmonicMixIn::removeInth() {
    b->m_Base.removeAttribute("inth");
};


IntervallicdescMixIn::IntervallicdescMixIn(BaseMeiElement *b) {
    this->b = b;
};

string IntervallicdescMixIn::getIntmValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("intm")) {
        throw AttributeNotFoundException("intm");
    }
    return b->m_Base.getAttributeValue("intm");
};

MeiAttribute* IntervallicdescMixIn::getIntm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("intm")) {
        throw AttributeNotFoundException("intm");
    }
    return b->m_Base.getAttribute("intm");
};

void IntervallicdescMixIn::setIntm(std::string _intm) {
    if (!b->m_Base.hasAttribute("intm")) {
        MeiAttribute *a = new MeiAttribute("intm", _intm);
        b->m_Base.addAttribute(a);
    }
};

bool IntervallicdescMixIn::hasIntm() {
    return b->m_Base.hasAttribute("intm");
};

void IntervallicdescMixIn::removeIntm() {
    b->m_Base.removeAttribute("intm");
};


MelodicfunctionMixIn::MelodicfunctionMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MelodicfunctionMixIn::getMfuncValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mfunc")) {
        throw AttributeNotFoundException("mfunc");
    }
    return b->m_Base.getAttributeValue("mfunc");
};

MeiAttribute* MelodicfunctionMixIn::getMfunc() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mfunc")) {
        throw AttributeNotFoundException("mfunc");
    }
    return b->m_Base.getAttribute("mfunc");
};

void MelodicfunctionMixIn::setMfunc(std::string _mfunc) {
    if (!b->m_Base.hasAttribute("mfunc")) {
        MeiAttribute *a = new MeiAttribute("mfunc", _mfunc);
        b->m_Base.addAttribute(a);
    }
};

bool MelodicfunctionMixIn::hasMfunc() {
    return b->m_Base.hasAttribute("mfunc");
};

void MelodicfunctionMixIn::removeMfunc() {
    b->m_Base.removeAttribute("mfunc");
};


PitchclassMixIn::PitchclassMixIn(BaseMeiElement *b) {
    this->b = b;
};

string PitchclassMixIn::getPclassValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pclass")) {
        throw AttributeNotFoundException("pclass");
    }
    return b->m_Base.getAttributeValue("pclass");
};

MeiAttribute* PitchclassMixIn::getPclass() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pclass")) {
        throw AttributeNotFoundException("pclass");
    }
    return b->m_Base.getAttribute("pclass");
};

void PitchclassMixIn::setPclass(std::string _pclass) {
    if (!b->m_Base.hasAttribute("pclass")) {
        MeiAttribute *a = new MeiAttribute("pclass", _pclass);
        b->m_Base.addAttribute(a);
    }
};

bool PitchclassMixIn::hasPclass() {
    return b->m_Base.hasAttribute("pclass");
};

void PitchclassMixIn::removePclass() {
    b->m_Base.removeAttribute("pclass");
};


SolfaMixIn::SolfaMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SolfaMixIn::getPsolfaValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("psolfa")) {
        throw AttributeNotFoundException("psolfa");
    }
    return b->m_Base.getAttributeValue("psolfa");
};

MeiAttribute* SolfaMixIn::getPsolfa() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("psolfa")) {
        throw AttributeNotFoundException("psolfa");
    }
    return b->m_Base.getAttribute("psolfa");
};

void SolfaMixIn::setPsolfa(std::string _psolfa) {
    if (!b->m_Base.hasAttribute("psolfa")) {
        MeiAttribute *a = new MeiAttribute("psolfa", _psolfa);
        b->m_Base.addAttribute(a);
    }
};

bool SolfaMixIn::hasPsolfa() {
    return b->m_Base.hasAttribute("psolfa");
};

void SolfaMixIn::removePsolfa() {
    b->m_Base.removeAttribute("psolfa");
};



