#include "mensuralmixins.h"
using namespace std;

MensurationVisMixIn::MensurationVisMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MensurationVisMixIn::getMensurFormValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.form")) {
        throw AttributeNotFoundException("mensur.form");
    }
    return b->m_Base.getAttributeValue("mensur.form");
};
            
MeiAttribute* MensurationVisMixIn::getMensurForm() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.form")) {
        throw AttributeNotFoundException("mensur.form");
    }
    return b->m_Base.getAttribute("mensur.form");
};
            
void MensurationVisMixIn::setMensurForm(string _mensurform) {
    if(!b->m_Base.hasAttribute("mensur.form")) {
        MeiAttribute * a = new MeiAttribute("mensur.form", _mensurform);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationVisMixIn::hasMensurForm() {
    return b->m_Base.hasAttribute("mensur.form");
};
            
string MensurationVisMixIn::getMensurLocValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.loc")) {
        throw AttributeNotFoundException("mensur.loc");
    }
    return b->m_Base.getAttributeValue("mensur.loc");
};
            
MeiAttribute* MensurationVisMixIn::getMensurLoc() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.loc")) {
        throw AttributeNotFoundException("mensur.loc");
    }
    return b->m_Base.getAttribute("mensur.loc");
};
            
void MensurationVisMixIn::setMensurLoc(string _mensurloc) {
    if(!b->m_Base.hasAttribute("mensur.loc")) {
        MeiAttribute * a = new MeiAttribute("mensur.loc", _mensurloc);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationVisMixIn::hasMensurLoc() {
    return b->m_Base.hasAttribute("mensur.loc");
};
            
string MensurationVisMixIn::getMensurSizeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.size")) {
        throw AttributeNotFoundException("mensur.size");
    }
    return b->m_Base.getAttributeValue("mensur.size");
};
            
MeiAttribute* MensurationVisMixIn::getMensurSize() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.size")) {
        throw AttributeNotFoundException("mensur.size");
    }
    return b->m_Base.getAttribute("mensur.size");
};
            
void MensurationVisMixIn::setMensurSize(string _mensursize) {
    if(!b->m_Base.hasAttribute("mensur.size")) {
        MeiAttribute * a = new MeiAttribute("mensur.size", _mensursize);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationVisMixIn::hasMensurSize() {
    return b->m_Base.hasAttribute("mensur.size");
};
            
MensurLogMixIn::MensurLogMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MensurLogMixIn::getModusmaiorValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->m_Base.getAttributeValue("modusmaior");
};
            
MeiAttribute* MensurLogMixIn::getModusmaior() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->m_Base.getAttribute("modusmaior");
};
            
void MensurLogMixIn::setModusmaior(string _modusmaior) {
    if(!b->m_Base.hasAttribute("modusmaior")) {
        MeiAttribute * a = new MeiAttribute("modusmaior", _modusmaior);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurLogMixIn::hasModusmaior() {
    return b->m_Base.hasAttribute("modusmaior");
};
            
string MensurLogMixIn::getModusminorValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->m_Base.getAttributeValue("modusminor");
};
            
MeiAttribute* MensurLogMixIn::getModusminor() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->m_Base.getAttribute("modusminor");
};
            
void MensurLogMixIn::setModusminor(string _modusminor) {
    if(!b->m_Base.hasAttribute("modusminor")) {
        MeiAttribute * a = new MeiAttribute("modusminor", _modusminor);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurLogMixIn::hasModusminor() {
    return b->m_Base.hasAttribute("modusminor");
};
            
string MensurLogMixIn::getProlatioValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->m_Base.getAttributeValue("prolatio");
};
            
MeiAttribute* MensurLogMixIn::getProlatio() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->m_Base.getAttribute("prolatio");
};
            
void MensurLogMixIn::setProlatio(string _prolatio) {
    if(!b->m_Base.hasAttribute("prolatio")) {
        MeiAttribute * a = new MeiAttribute("prolatio", _prolatio);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurLogMixIn::hasProlatio() {
    return b->m_Base.hasAttribute("prolatio");
};
            
string MensurLogMixIn::getTempusValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->m_Base.getAttributeValue("tempus");
};
            
MeiAttribute* MensurLogMixIn::getTempus() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->m_Base.getAttribute("tempus");
};
            
void MensurLogMixIn::setTempus(string _tempus) {
    if(!b->m_Base.hasAttribute("tempus")) {
        MeiAttribute * a = new MeiAttribute("tempus", _tempus);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurLogMixIn::hasTempus() {
    return b->m_Base.hasAttribute("tempus");
};
            
string MensurLogMixIn::getNumValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};
            
MeiAttribute* MensurLogMixIn::getNum() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};
            
void MensurLogMixIn::setNum(string _num) {
    if(!b->m_Base.hasAttribute("num")) {
        MeiAttribute * a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurLogMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};
            
string MensurLogMixIn::getNumbaseValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->m_Base.getAttributeValue("numbase");
};
            
MeiAttribute* MensurLogMixIn::getNumbase() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->m_Base.getAttribute("numbase");
};
            
void MensurLogMixIn::setNumbase(string _numbase) {
    if(!b->m_Base.hasAttribute("numbase")) {
        MeiAttribute * a = new MeiAttribute("numbase", _numbase);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurLogMixIn::hasNumbase() {
    return b->m_Base.hasAttribute("numbase");
};
            
MensurationLogMixIn::MensurationLogMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MensurationLogMixIn::getMensurDotValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.dot")) {
        throw AttributeNotFoundException("mensur.dot");
    }
    return b->m_Base.getAttributeValue("mensur.dot");
};
            
MeiAttribute* MensurationLogMixIn::getMensurDot() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.dot")) {
        throw AttributeNotFoundException("mensur.dot");
    }
    return b->m_Base.getAttribute("mensur.dot");
};
            
void MensurationLogMixIn::setMensurDot(string _mensurdot) {
    if(!b->m_Base.hasAttribute("mensur.dot")) {
        MeiAttribute * a = new MeiAttribute("mensur.dot", _mensurdot);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasMensurDot() {
    return b->m_Base.hasAttribute("mensur.dot");
};
            
string MensurationLogMixIn::getMensurOrientValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.orient")) {
        throw AttributeNotFoundException("mensur.orient");
    }
    return b->m_Base.getAttributeValue("mensur.orient");
};
            
MeiAttribute* MensurationLogMixIn::getMensurOrient() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.orient")) {
        throw AttributeNotFoundException("mensur.orient");
    }
    return b->m_Base.getAttribute("mensur.orient");
};
            
void MensurationLogMixIn::setMensurOrient(string _mensurorient) {
    if(!b->m_Base.hasAttribute("mensur.orient")) {
        MeiAttribute * a = new MeiAttribute("mensur.orient", _mensurorient);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasMensurOrient() {
    return b->m_Base.hasAttribute("mensur.orient");
};
            
string MensurationLogMixIn::getMensurSignValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.sign")) {
        throw AttributeNotFoundException("mensur.sign");
    }
    return b->m_Base.getAttributeValue("mensur.sign");
};
            
MeiAttribute* MensurationLogMixIn::getMensurSign() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.sign")) {
        throw AttributeNotFoundException("mensur.sign");
    }
    return b->m_Base.getAttribute("mensur.sign");
};
            
void MensurationLogMixIn::setMensurSign(string _mensursign) {
    if(!b->m_Base.hasAttribute("mensur.sign")) {
        MeiAttribute * a = new MeiAttribute("mensur.sign", _mensursign);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasMensurSign() {
    return b->m_Base.hasAttribute("mensur.sign");
};
            
string MensurationLogMixIn::getMensurSlashValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.slash")) {
        throw AttributeNotFoundException("mensur.slash");
    }
    return b->m_Base.getAttributeValue("mensur.slash");
};
            
MeiAttribute* MensurationLogMixIn::getMensurSlash() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.slash")) {
        throw AttributeNotFoundException("mensur.slash");
    }
    return b->m_Base.getAttribute("mensur.slash");
};
            
void MensurationLogMixIn::setMensurSlash(string _mensurslash) {
    if(!b->m_Base.hasAttribute("mensur.slash")) {
        MeiAttribute * a = new MeiAttribute("mensur.slash", _mensurslash);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasMensurSlash() {
    return b->m_Base.hasAttribute("mensur.slash");
};
            
string MensurationLogMixIn::getModusmaiorValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->m_Base.getAttributeValue("modusmaior");
};
            
MeiAttribute* MensurationLogMixIn::getModusmaior() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->m_Base.getAttribute("modusmaior");
};
            
void MensurationLogMixIn::setModusmaior(string _modusmaior) {
    if(!b->m_Base.hasAttribute("modusmaior")) {
        MeiAttribute * a = new MeiAttribute("modusmaior", _modusmaior);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasModusmaior() {
    return b->m_Base.hasAttribute("modusmaior");
};
            
string MensurationLogMixIn::getModusminorValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->m_Base.getAttributeValue("modusminor");
};
            
MeiAttribute* MensurationLogMixIn::getModusminor() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->m_Base.getAttribute("modusminor");
};
            
void MensurationLogMixIn::setModusminor(string _modusminor) {
    if(!b->m_Base.hasAttribute("modusminor")) {
        MeiAttribute * a = new MeiAttribute("modusminor", _modusminor);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasModusminor() {
    return b->m_Base.hasAttribute("modusminor");
};
            
string MensurationLogMixIn::getProlatioValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->m_Base.getAttributeValue("prolatio");
};
            
MeiAttribute* MensurationLogMixIn::getProlatio() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->m_Base.getAttribute("prolatio");
};
            
void MensurationLogMixIn::setProlatio(string _prolatio) {
    if(!b->m_Base.hasAttribute("prolatio")) {
        MeiAttribute * a = new MeiAttribute("prolatio", _prolatio);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasProlatio() {
    return b->m_Base.hasAttribute("prolatio");
};
            
string MensurationLogMixIn::getTempusValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->m_Base.getAttributeValue("tempus");
};
            
MeiAttribute* MensurationLogMixIn::getTempus() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->m_Base.getAttribute("tempus");
};
            
void MensurationLogMixIn::setTempus(string _tempus) {
    if(!b->m_Base.hasAttribute("tempus")) {
        MeiAttribute * a = new MeiAttribute("tempus", _tempus);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasTempus() {
    return b->m_Base.hasAttribute("tempus");
};
            
string MensurationLogMixIn::getNumValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};
            
MeiAttribute* MensurationLogMixIn::getNum() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};
            
void MensurationLogMixIn::setNum(string _num) {
    if(!b->m_Base.hasAttribute("num")) {
        MeiAttribute * a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};
            
string MensurationLogMixIn::getNumbaseValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->m_Base.getAttributeValue("numbase");
};
            
MeiAttribute* MensurationLogMixIn::getNumbase() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->m_Base.getAttribute("numbase");
};
            
void MensurationLogMixIn::setNumbase(string _numbase) {
    if(!b->m_Base.hasAttribute("numbase")) {
        MeiAttribute * a = new MeiAttribute("numbase", _numbase);
        b->m_Base.addAttribute(a);
    }
};
            
bool MensurationLogMixIn::hasNumbase() {
    return b->m_Base.hasAttribute("numbase");
};
            