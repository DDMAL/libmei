#include "certainty.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Certainty::Certainty() :
    MeiElement("certainty"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Scoping(this)
{
}
REGISTER_DEFINITION(mei::Certainty, "certainty");
mei::Certainty::~Certainty() {}
mei::Certainty::Certainty(const Certainty& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Scoping(this)
{
}

MeiAttribute* mei::Certainty::getCert() {
    if (!hasAttribute("cert")) {
        throw AttributeNotFoundException("cert");
    }
    return getAttribute("cert");
};

void mei::Certainty::setCert(std::string _cert) {
    MeiAttribute *a = new MeiAttribute("cert", _cert);
    addAttribute(a);
};

bool mei::Certainty::hasCert() {
    return hasAttribute("cert");
};

void mei::Certainty::removeCert() {
    removeAttribute("cert");
};
MeiAttribute* mei::Certainty::getLocus() {
    if (!hasAttribute("locus")) {
        throw AttributeNotFoundException("locus");
    }
    return getAttribute("locus");
};

void mei::Certainty::setLocus(std::string _locus) {
    MeiAttribute *a = new MeiAttribute("locus", _locus);
    addAttribute(a);
};

bool mei::Certainty::hasLocus() {
    return hasAttribute("locus");
};

void mei::Certainty::removeLocus() {
    removeAttribute("locus");
};
MeiAttribute* mei::Certainty::getAssertedValue() {
    if (!hasAttribute("assertedValue")) {
        throw AttributeNotFoundException("assertedValue");
    }
    return getAttribute("assertedValue");
};

void mei::Certainty::setAssertedValue(std::string _assertedValue) {
    MeiAttribute *a = new MeiAttribute("assertedValue", _assertedValue);
    addAttribute(a);
};

bool mei::Certainty::hasAssertedValue() {
    return hasAttribute("assertedValue");
};

void mei::Certainty::removeAssertedValue() {
    removeAttribute("assertedValue");
};
MeiAttribute* mei::Certainty::getGiven() {
    if (!hasAttribute("given")) {
        throw AttributeNotFoundException("given");
    }
    return getAttribute("given");
};

void mei::Certainty::setGiven(std::string _given) {
    MeiAttribute *a = new MeiAttribute("given", _given);
    addAttribute(a);
};

bool mei::Certainty::hasGiven() {
    return hasAttribute("given");
};

void mei::Certainty::removeGiven() {
    removeAttribute("given");
};
MeiAttribute* mei::Certainty::getDegree() {
    if (!hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return getAttribute("degree");
};

void mei::Certainty::setDegree(std::string _degree) {
    MeiAttribute *a = new MeiAttribute("degree", _degree);
    addAttribute(a);
};

bool mei::Certainty::hasDegree() {
    return hasAttribute("degree");
};

void mei::Certainty::removeDegree() {
    removeAttribute("degree");
};
/* include <certainty> */

mei::Precision::Precision() :
    MeiElement("precision"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Scoping(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Precision, "precision");
mei::Precision::~Precision() {}
mei::Precision::Precision(const Precision& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Scoping(this),
    m_Ranging(this)
{
}

MeiAttribute* mei::Precision::getDegree() {
    if (!hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return getAttribute("degree");
};

void mei::Precision::setDegree(std::string _degree) {
    MeiAttribute *a = new MeiAttribute("degree", _degree);
    addAttribute(a);
};

bool mei::Precision::hasDegree() {
    return hasAttribute("degree");
};

void mei::Precision::removeDegree() {
    removeAttribute("degree");
};
MeiAttribute* mei::Precision::getPrecision() {
    if (!hasAttribute("precision")) {
        throw AttributeNotFoundException("precision");
    }
    return getAttribute("precision");
};

void mei::Precision::setPrecision(std::string _precision) {
    MeiAttribute *a = new MeiAttribute("precision", _precision);
    addAttribute(a);
};

bool mei::Precision::hasPrecision() {
    return hasAttribute("precision");
};

void mei::Precision::removePrecision() {
    removeAttribute("precision");
};
MeiAttribute* mei::Precision::getStdDeviation() {
    if (!hasAttribute("stdDeviation")) {
        throw AttributeNotFoundException("stdDeviation");
    }
    return getAttribute("stdDeviation");
};

void mei::Precision::setStdDeviation(std::string _stdDeviation) {
    MeiAttribute *a = new MeiAttribute("stdDeviation", _stdDeviation);
    addAttribute(a);
};

bool mei::Precision::hasStdDeviation() {
    return hasAttribute("stdDeviation");
};

void mei::Precision::removeStdDeviation() {
    removeAttribute("stdDeviation");
};
/* include <precision> */

mei::Respons::Respons() :
    MeiElement("respons"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Scoping(this)
{
}
REGISTER_DEFINITION(mei::Respons, "respons");
mei::Respons::~Respons() {}
mei::Respons::Respons(const Respons& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Scoping(this)
{
}

MeiAttribute* mei::Respons::getLocus() {
    if (!hasAttribute("locus")) {
        throw AttributeNotFoundException("locus");
    }
    return getAttribute("locus");
};

void mei::Respons::setLocus(std::string _locus) {
    MeiAttribute *a = new MeiAttribute("locus", _locus);
    addAttribute(a);
};

bool mei::Respons::hasLocus() {
    return hasAttribute("locus");
};

void mei::Respons::removeLocus() {
    removeAttribute("locus");
};
MeiAttribute* mei::Respons::getResp() {
    if (!hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return getAttribute("resp");
};

void mei::Respons::setResp(std::string _resp) {
    MeiAttribute *a = new MeiAttribute("resp", _resp);
    addAttribute(a);
};

bool mei::Respons::hasResp() {
    return hasAttribute("resp");
};

void mei::Respons::removeResp() {
    removeAttribute("resp");
};
/* include <respons> */



