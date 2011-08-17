

#include "mensuralmixins.h"
using std::string;


LigatureLogMixIn::LigatureLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LigatureLogMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* LigatureLogMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void LigatureLogMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool LigatureLogMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void LigatureLogMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};


MensurLogMixIn::MensurLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MensurLogMixIn::getModusmaiorValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->m_Base.getAttributeValue("modusmaior");
};

MeiAttribute* MensurLogMixIn::getModusmaior() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->m_Base.getAttribute("modusmaior");
};

void MensurLogMixIn::setModusmaior(std::string _modusmaior) {
    if (!b->m_Base.hasAttribute("modusmaior")) {
        MeiAttribute *a = new MeiAttribute("modusmaior", _modusmaior);
        b->m_Base.addAttribute(a);
    }
};

bool MensurLogMixIn::hasModusmaior() {
    return b->m_Base.hasAttribute("modusmaior");
};

void MensurLogMixIn::removeModusmaior() {
    b->m_Base.removeAttribute("modusmaior");
};

string MensurLogMixIn::getModusminorValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->m_Base.getAttributeValue("modusminor");
};

MeiAttribute* MensurLogMixIn::getModusminor() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->m_Base.getAttribute("modusminor");
};

void MensurLogMixIn::setModusminor(std::string _modusminor) {
    if (!b->m_Base.hasAttribute("modusminor")) {
        MeiAttribute *a = new MeiAttribute("modusminor", _modusminor);
        b->m_Base.addAttribute(a);
    }
};

bool MensurLogMixIn::hasModusminor() {
    return b->m_Base.hasAttribute("modusminor");
};

void MensurLogMixIn::removeModusminor() {
    b->m_Base.removeAttribute("modusminor");
};

string MensurLogMixIn::getProlatioValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->m_Base.getAttributeValue("prolatio");
};

MeiAttribute* MensurLogMixIn::getProlatio() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->m_Base.getAttribute("prolatio");
};

void MensurLogMixIn::setProlatio(std::string _prolatio) {
    if (!b->m_Base.hasAttribute("prolatio")) {
        MeiAttribute *a = new MeiAttribute("prolatio", _prolatio);
        b->m_Base.addAttribute(a);
    }
};

bool MensurLogMixIn::hasProlatio() {
    return b->m_Base.hasAttribute("prolatio");
};

void MensurLogMixIn::removeProlatio() {
    b->m_Base.removeAttribute("prolatio");
};

string MensurLogMixIn::getTempusValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->m_Base.getAttributeValue("tempus");
};

MeiAttribute* MensurLogMixIn::getTempus() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->m_Base.getAttribute("tempus");
};

void MensurLogMixIn::setTempus(std::string _tempus) {
    if (!b->m_Base.hasAttribute("tempus")) {
        MeiAttribute *a = new MeiAttribute("tempus", _tempus);
        b->m_Base.addAttribute(a);
    }
};

bool MensurLogMixIn::hasTempus() {
    return b->m_Base.hasAttribute("tempus");
};

void MensurLogMixIn::removeTempus() {
    b->m_Base.removeAttribute("tempus");
};


MensurVisMixIn::MensurVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MensurVisMixIn::getDotValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dot")) {
        throw AttributeNotFoundException("dot");
    }
    return b->m_Base.getAttributeValue("dot");
};

MeiAttribute* MensurVisMixIn::getDot() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dot")) {
        throw AttributeNotFoundException("dot");
    }
    return b->m_Base.getAttribute("dot");
};

void MensurVisMixIn::setDot(std::string _dot) {
    if (!b->m_Base.hasAttribute("dot")) {
        MeiAttribute *a = new MeiAttribute("dot", _dot);
        b->m_Base.addAttribute(a);
    }
};

bool MensurVisMixIn::hasDot() {
    return b->m_Base.hasAttribute("dot");
};

void MensurVisMixIn::removeDot() {
    b->m_Base.removeAttribute("dot");
};

string MensurVisMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* MensurVisMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void MensurVisMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool MensurVisMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void MensurVisMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};

string MensurVisMixIn::getOrientValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("orient")) {
        throw AttributeNotFoundException("orient");
    }
    return b->m_Base.getAttributeValue("orient");
};

MeiAttribute* MensurVisMixIn::getOrient() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("orient")) {
        throw AttributeNotFoundException("orient");
    }
    return b->m_Base.getAttribute("orient");
};

void MensurVisMixIn::setOrient(std::string _orient) {
    if (!b->m_Base.hasAttribute("orient")) {
        MeiAttribute *a = new MeiAttribute("orient", _orient);
        b->m_Base.addAttribute(a);
    }
};

bool MensurVisMixIn::hasOrient() {
    return b->m_Base.hasAttribute("orient");
};

void MensurVisMixIn::removeOrient() {
    b->m_Base.removeAttribute("orient");
};

string MensurVisMixIn::getSignValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("sign")) {
        throw AttributeNotFoundException("sign");
    }
    return b->m_Base.getAttributeValue("sign");
};

MeiAttribute* MensurVisMixIn::getSign() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("sign")) {
        throw AttributeNotFoundException("sign");
    }
    return b->m_Base.getAttribute("sign");
};

void MensurVisMixIn::setSign(std::string _sign) {
    if (!b->m_Base.hasAttribute("sign")) {
        MeiAttribute *a = new MeiAttribute("sign", _sign);
        b->m_Base.addAttribute(a);
    }
};

bool MensurVisMixIn::hasSign() {
    return b->m_Base.hasAttribute("sign");
};

void MensurVisMixIn::removeSign() {
    b->m_Base.removeAttribute("sign");
};


MensurationLogMixIn::MensurationLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MensurationLogMixIn::getMensurDotValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.dot")) {
        throw AttributeNotFoundException("mensur.dot");
    }
    return b->m_Base.getAttributeValue("mensur.dot");
};

MeiAttribute* MensurationLogMixIn::getMensurDot() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.dot")) {
        throw AttributeNotFoundException("mensur.dot");
    }
    return b->m_Base.getAttribute("mensur.dot");
};

void MensurationLogMixIn::setMensurDot(std::string _mensurdot) {
    if (!b->m_Base.hasAttribute("mensur.dot")) {
        MeiAttribute *a = new MeiAttribute("mensur.dot", _mensurdot);
        b->m_Base.addAttribute(a);
    }
};

bool MensurationLogMixIn::hasMensurDot() {
    return b->m_Base.hasAttribute("mensur.dot");
};

void MensurationLogMixIn::removeMensurDot() {
    b->m_Base.removeAttribute("mensur.dot");
};

string MensurationLogMixIn::getMensurOrientValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.orient")) {
        throw AttributeNotFoundException("mensur.orient");
    }
    return b->m_Base.getAttributeValue("mensur.orient");
};

MeiAttribute* MensurationLogMixIn::getMensurOrient() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.orient")) {
        throw AttributeNotFoundException("mensur.orient");
    }
    return b->m_Base.getAttribute("mensur.orient");
};

void MensurationLogMixIn::setMensurOrient(std::string _mensurorient) {
    if (!b->m_Base.hasAttribute("mensur.orient")) {
        MeiAttribute *a = new MeiAttribute("mensur.orient", _mensurorient);
        b->m_Base.addAttribute(a);
    }
};

bool MensurationLogMixIn::hasMensurOrient() {
    return b->m_Base.hasAttribute("mensur.orient");
};

void MensurationLogMixIn::removeMensurOrient() {
    b->m_Base.removeAttribute("mensur.orient");
};

string MensurationLogMixIn::getMensurSignValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.sign")) {
        throw AttributeNotFoundException("mensur.sign");
    }
    return b->m_Base.getAttributeValue("mensur.sign");
};

MeiAttribute* MensurationLogMixIn::getMensurSign() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.sign")) {
        throw AttributeNotFoundException("mensur.sign");
    }
    return b->m_Base.getAttribute("mensur.sign");
};

void MensurationLogMixIn::setMensurSign(std::string _mensursign) {
    if (!b->m_Base.hasAttribute("mensur.sign")) {
        MeiAttribute *a = new MeiAttribute("mensur.sign", _mensursign);
        b->m_Base.addAttribute(a);
    }
};

bool MensurationLogMixIn::hasMensurSign() {
    return b->m_Base.hasAttribute("mensur.sign");
};

void MensurationLogMixIn::removeMensurSign() {
    b->m_Base.removeAttribute("mensur.sign");
};

string MensurationLogMixIn::getMensurSlashValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.slash")) {
        throw AttributeNotFoundException("mensur.slash");
    }
    return b->m_Base.getAttributeValue("mensur.slash");
};

MeiAttribute* MensurationLogMixIn::getMensurSlash() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.slash")) {
        throw AttributeNotFoundException("mensur.slash");
    }
    return b->m_Base.getAttribute("mensur.slash");
};

void MensurationLogMixIn::setMensurSlash(std::string _mensurslash) {
    if (!b->m_Base.hasAttribute("mensur.slash")) {
        MeiAttribute *a = new MeiAttribute("mensur.slash", _mensurslash);
        b->m_Base.addAttribute(a);
    }
};

bool MensurationLogMixIn::hasMensurSlash() {
    return b->m_Base.hasAttribute("mensur.slash");
};

void MensurationLogMixIn::removeMensurSlash() {
    b->m_Base.removeAttribute("mensur.slash");
};


MensurationVisMixIn::MensurationVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MensurationVisMixIn::getMensurFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.form")) {
        throw AttributeNotFoundException("mensur.form");
    }
    return b->m_Base.getAttributeValue("mensur.form");
};

MeiAttribute* MensurationVisMixIn::getMensurForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.form")) {
        throw AttributeNotFoundException("mensur.form");
    }
    return b->m_Base.getAttribute("mensur.form");
};

void MensurationVisMixIn::setMensurForm(std::string _mensurform) {
    if (!b->m_Base.hasAttribute("mensur.form")) {
        MeiAttribute *a = new MeiAttribute("mensur.form", _mensurform);
        b->m_Base.addAttribute(a);
    }
};

bool MensurationVisMixIn::hasMensurForm() {
    return b->m_Base.hasAttribute("mensur.form");
};

void MensurationVisMixIn::removeMensurForm() {
    b->m_Base.removeAttribute("mensur.form");
};

string MensurationVisMixIn::getMensurLocValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.loc")) {
        throw AttributeNotFoundException("mensur.loc");
    }
    return b->m_Base.getAttributeValue("mensur.loc");
};

MeiAttribute* MensurationVisMixIn::getMensurLoc() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.loc")) {
        throw AttributeNotFoundException("mensur.loc");
    }
    return b->m_Base.getAttribute("mensur.loc");
};

void MensurationVisMixIn::setMensurLoc(std::string _mensurloc) {
    if (!b->m_Base.hasAttribute("mensur.loc")) {
        MeiAttribute *a = new MeiAttribute("mensur.loc", _mensurloc);
        b->m_Base.addAttribute(a);
    }
};

bool MensurationVisMixIn::hasMensurLoc() {
    return b->m_Base.hasAttribute("mensur.loc");
};

void MensurationVisMixIn::removeMensurLoc() {
    b->m_Base.removeAttribute("mensur.loc");
};

string MensurationVisMixIn::getMensurSizeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.size")) {
        throw AttributeNotFoundException("mensur.size");
    }
    return b->m_Base.getAttributeValue("mensur.size");
};

MeiAttribute* MensurationVisMixIn::getMensurSize() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mensur.size")) {
        throw AttributeNotFoundException("mensur.size");
    }
    return b->m_Base.getAttribute("mensur.size");
};

void MensurationVisMixIn::setMensurSize(std::string _mensursize) {
    if (!b->m_Base.hasAttribute("mensur.size")) {
        MeiAttribute *a = new MeiAttribute("mensur.size", _mensursize);
        b->m_Base.addAttribute(a);
    }
};

bool MensurationVisMixIn::hasMensurSize() {
    return b->m_Base.hasAttribute("mensur.size");
};

void MensurationVisMixIn::removeMensurSize() {
    b->m_Base.removeAttribute("mensur.size");
};


NoteLogMensuralMixIn::NoteLogMensuralMixIn(BaseMeiElement *b) {
    this->b = b;
};

string NoteLogMensuralMixIn::getLigValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lig")) {
        throw AttributeNotFoundException("lig");
    }
    return b->m_Base.getAttributeValue("lig");
};

MeiAttribute* NoteLogMensuralMixIn::getLig() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lig")) {
        throw AttributeNotFoundException("lig");
    }
    return b->m_Base.getAttribute("lig");
};

void NoteLogMensuralMixIn::setLig(std::string _lig) {
    if (!b->m_Base.hasAttribute("lig")) {
        MeiAttribute *a = new MeiAttribute("lig", _lig);
        b->m_Base.addAttribute(a);
    }
};

bool NoteLogMensuralMixIn::hasLig() {
    return b->m_Base.hasAttribute("lig");
};

void NoteLogMensuralMixIn::removeLig() {
    b->m_Base.removeAttribute("lig");
};


RestVisMensuralMixIn::RestVisMensuralMixIn(BaseMeiElement *b) {
    this->b = b;
};

string RestVisMensuralMixIn::getSpacesValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spaces")) {
        throw AttributeNotFoundException("spaces");
    }
    return b->m_Base.getAttributeValue("spaces");
};

MeiAttribute* RestVisMensuralMixIn::getSpaces() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spaces")) {
        throw AttributeNotFoundException("spaces");
    }
    return b->m_Base.getAttribute("spaces");
};

void RestVisMensuralMixIn::setSpaces(std::string _spaces) {
    if (!b->m_Base.hasAttribute("spaces")) {
        MeiAttribute *a = new MeiAttribute("spaces", _spaces);
        b->m_Base.addAttribute(a);
    }
};

bool RestVisMensuralMixIn::hasSpaces() {
    return b->m_Base.hasAttribute("spaces");
};

void RestVisMensuralMixIn::removeSpaces() {
    b->m_Base.removeAttribute("spaces");
};


StaffdefLogMensuralMixIn::StaffdefLogMensuralMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StaffdefLogMensuralMixIn::getProportNumValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("proport.num")) {
        throw AttributeNotFoundException("proport.num");
    }
    return b->m_Base.getAttributeValue("proport.num");
};

MeiAttribute* StaffdefLogMensuralMixIn::getProportNum() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("proport.num")) {
        throw AttributeNotFoundException("proport.num");
    }
    return b->m_Base.getAttribute("proport.num");
};

void StaffdefLogMensuralMixIn::setProportNum(std::string _proportnum) {
    if (!b->m_Base.hasAttribute("proport.num")) {
        MeiAttribute *a = new MeiAttribute("proport.num", _proportnum);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefLogMensuralMixIn::hasProportNum() {
    return b->m_Base.hasAttribute("proport.num");
};

void StaffdefLogMensuralMixIn::removeProportNum() {
    b->m_Base.removeAttribute("proport.num");
};

string StaffdefLogMensuralMixIn::getProportNumbaseValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("proport.numbase")) {
        throw AttributeNotFoundException("proport.numbase");
    }
    return b->m_Base.getAttributeValue("proport.numbase");
};

MeiAttribute* StaffdefLogMensuralMixIn::getProportNumbase() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("proport.numbase")) {
        throw AttributeNotFoundException("proport.numbase");
    }
    return b->m_Base.getAttribute("proport.numbase");
};

void StaffdefLogMensuralMixIn::setProportNumbase(std::string _proportnumbase) {
    if (!b->m_Base.hasAttribute("proport.numbase")) {
        MeiAttribute *a = new MeiAttribute("proport.numbase", _proportnumbase);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefLogMensuralMixIn::hasProportNumbase() {
    return b->m_Base.hasAttribute("proport.numbase");
};

void StaffdefLogMensuralMixIn::removeProportNumbase() {
    b->m_Base.removeAttribute("proport.numbase");
};



