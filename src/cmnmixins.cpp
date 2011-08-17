

#include "cmnmixins.h"
using std::string;


ArpegLogMixIn::ArpegLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ArpegLogMixIn::getOrderValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("order")) {
        throw AttributeNotFoundException("order");
    }
    return b->m_Base.getAttributeValue("order");
};

MeiAttribute* ArpegLogMixIn::getOrder() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("order")) {
        throw AttributeNotFoundException("order");
    }
    return b->m_Base.getAttribute("order");
};

void ArpegLogMixIn::setOrder(std::string _order) {
    if (!b->m_Base.hasAttribute("order")) {
        MeiAttribute *a = new MeiAttribute("order", _order);
        b->m_Base.addAttribute(a);
    }
};

bool ArpegLogMixIn::hasOrder() {
    return b->m_Base.hasAttribute("order");
};

void ArpegLogMixIn::removeOrder() {
    b->m_Base.removeAttribute("order");
};


ArpegVisMixIn::ArpegVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ArpegVisMixIn::getArrowValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("arrow")) {
        throw AttributeNotFoundException("arrow");
    }
    return b->m_Base.getAttributeValue("arrow");
};

MeiAttribute* ArpegVisMixIn::getArrow() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("arrow")) {
        throw AttributeNotFoundException("arrow");
    }
    return b->m_Base.getAttribute("arrow");
};

void ArpegVisMixIn::setArrow(std::string _arrow) {
    if (!b->m_Base.hasAttribute("arrow")) {
        MeiAttribute *a = new MeiAttribute("arrow", _arrow);
        b->m_Base.addAttribute(a);
    }
};

bool ArpegVisMixIn::hasArrow() {
    return b->m_Base.hasAttribute("arrow");
};

void ArpegVisMixIn::removeArrow() {
    b->m_Base.removeAttribute("arrow");
};


BtremLogMixIn::BtremLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BtremLogMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* BtremLogMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void BtremLogMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool BtremLogMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void BtremLogMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};


BeamedMixIn::BeamedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BeamedMixIn::getBeamValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam")) {
        throw AttributeNotFoundException("beam");
    }
    return b->m_Base.getAttributeValue("beam");
};

MeiAttribute* BeamedMixIn::getBeam() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam")) {
        throw AttributeNotFoundException("beam");
    }
    return b->m_Base.getAttribute("beam");
};

void BeamedMixIn::setBeam(std::string _beam) {
    if (!b->m_Base.hasAttribute("beam")) {
        MeiAttribute *a = new MeiAttribute("beam", _beam);
        b->m_Base.addAttribute(a);
    }
};

bool BeamedMixIn::hasBeam() {
    return b->m_Base.hasAttribute("beam");
};

void BeamedMixIn::removeBeam() {
    b->m_Base.removeAttribute("beam");
};


BeamedwithMixIn::BeamedwithMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BeamedwithMixIn::getBeamWithValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.with")) {
        throw AttributeNotFoundException("beam.with");
    }
    return b->m_Base.getAttributeValue("beam.with");
};

MeiAttribute* BeamedwithMixIn::getBeamWith() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.with")) {
        throw AttributeNotFoundException("beam.with");
    }
    return b->m_Base.getAttribute("beam.with");
};

void BeamedwithMixIn::setBeamWith(std::string _beamwith) {
    if (!b->m_Base.hasAttribute("beam.with")) {
        MeiAttribute *a = new MeiAttribute("beam.with", _beamwith);
        b->m_Base.addAttribute(a);
    }
};

bool BeamedwithMixIn::hasBeamWith() {
    return b->m_Base.hasAttribute("beam.with");
};

void BeamedwithMixIn::removeBeamWith() {
    b->m_Base.removeAttribute("beam.with");
};


BeamingLogMixIn::BeamingLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BeamingLogMixIn::getBeamGroupValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.group")) {
        throw AttributeNotFoundException("beam.group");
    }
    return b->m_Base.getAttributeValue("beam.group");
};

MeiAttribute* BeamingLogMixIn::getBeamGroup() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.group")) {
        throw AttributeNotFoundException("beam.group");
    }
    return b->m_Base.getAttribute("beam.group");
};

void BeamingLogMixIn::setBeamGroup(std::string _beamgroup) {
    if (!b->m_Base.hasAttribute("beam.group")) {
        MeiAttribute *a = new MeiAttribute("beam.group", _beamgroup);
        b->m_Base.addAttribute(a);
    }
};

bool BeamingLogMixIn::hasBeamGroup() {
    return b->m_Base.hasAttribute("beam.group");
};

void BeamingLogMixIn::removeBeamGroup() {
    b->m_Base.removeAttribute("beam.group");
};

string BeamingLogMixIn::getBeamRestsValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.rests")) {
        throw AttributeNotFoundException("beam.rests");
    }
    return b->m_Base.getAttributeValue("beam.rests");
};

MeiAttribute* BeamingLogMixIn::getBeamRests() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.rests")) {
        throw AttributeNotFoundException("beam.rests");
    }
    return b->m_Base.getAttribute("beam.rests");
};

void BeamingLogMixIn::setBeamRests(std::string _beamrests) {
    if (!b->m_Base.hasAttribute("beam.rests")) {
        MeiAttribute *a = new MeiAttribute("beam.rests", _beamrests);
        b->m_Base.addAttribute(a);
    }
};

bool BeamingLogMixIn::hasBeamRests() {
    return b->m_Base.hasAttribute("beam.rests");
};

void BeamingLogMixIn::removeBeamRests() {
    b->m_Base.removeAttribute("beam.rests");
};


BeamrendMixIn::BeamrendMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BeamrendMixIn::getRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};

MeiAttribute* BeamrendMixIn::getRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};

void BeamrendMixIn::setRend(std::string _rend) {
    if (!b->m_Base.hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};

bool BeamrendMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};

void BeamrendMixIn::removeRend() {
    b->m_Base.removeAttribute("rend");
};

string BeamrendMixIn::getSlopeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slope")) {
        throw AttributeNotFoundException("slope");
    }
    return b->m_Base.getAttributeValue("slope");
};

MeiAttribute* BeamrendMixIn::getSlope() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slope")) {
        throw AttributeNotFoundException("slope");
    }
    return b->m_Base.getAttribute("slope");
};

void BeamrendMixIn::setSlope(std::string _slope) {
    if (!b->m_Base.hasAttribute("slope")) {
        MeiAttribute *a = new MeiAttribute("slope", _slope);
        b->m_Base.addAttribute(a);
    }
};

bool BeamrendMixIn::hasSlope() {
    return b->m_Base.hasAttribute("slope");
};

void BeamrendMixIn::removeSlope() {
    b->m_Base.removeAttribute("slope");
};


BeamsecondaryMixIn::BeamsecondaryMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BeamsecondaryMixIn::getBreaksecValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("breaksec")) {
        throw AttributeNotFoundException("breaksec");
    }
    return b->m_Base.getAttributeValue("breaksec");
};

MeiAttribute* BeamsecondaryMixIn::getBreaksec() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("breaksec")) {
        throw AttributeNotFoundException("breaksec");
    }
    return b->m_Base.getAttribute("breaksec");
};

void BeamsecondaryMixIn::setBreaksec(std::string _breaksec) {
    if (!b->m_Base.hasAttribute("breaksec")) {
        MeiAttribute *a = new MeiAttribute("breaksec", _breaksec);
        b->m_Base.addAttribute(a);
    }
};

bool BeamsecondaryMixIn::hasBreaksec() {
    return b->m_Base.hasAttribute("breaksec");
};

void BeamsecondaryMixIn::removeBreaksec() {
    b->m_Base.removeAttribute("breaksec");
};


BeatrptVisMixIn::BeatrptVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BeatrptVisMixIn::getRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};

MeiAttribute* BeatrptVisMixIn::getRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};

void BeatrptVisMixIn::setRend(std::string _rend) {
    if (!b->m_Base.hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};

bool BeatrptVisMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};

void BeatrptVisMixIn::removeRend() {
    b->m_Base.removeAttribute("rend");
};


BendGesMixIn::BendGesMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BendGesMixIn::getAmountValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("amount")) {
        throw AttributeNotFoundException("amount");
    }
    return b->m_Base.getAttributeValue("amount");
};

MeiAttribute* BendGesMixIn::getAmount() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("amount")) {
        throw AttributeNotFoundException("amount");
    }
    return b->m_Base.getAttribute("amount");
};

void BendGesMixIn::setAmount(std::string _amount) {
    if (!b->m_Base.hasAttribute("amount")) {
        MeiAttribute *a = new MeiAttribute("amount", _amount);
        b->m_Base.addAttribute(a);
    }
};

bool BendGesMixIn::hasAmount() {
    return b->m_Base.hasAttribute("amount");
};

void BendGesMixIn::removeAmount() {
    b->m_Base.removeAttribute("amount");
};


CutoutMixIn::CutoutMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CutoutMixIn::getCutoutValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cutout")) {
        throw AttributeNotFoundException("cutout");
    }
    return b->m_Base.getAttributeValue("cutout");
};

MeiAttribute* CutoutMixIn::getCutout() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cutout")) {
        throw AttributeNotFoundException("cutout");
    }
    return b->m_Base.getAttribute("cutout");
};

void CutoutMixIn::setCutout(std::string _cutout) {
    if (!b->m_Base.hasAttribute("cutout")) {
        MeiAttribute *a = new MeiAttribute("cutout", _cutout);
        b->m_Base.addAttribute(a);
    }
};

bool CutoutMixIn::hasCutout() {
    return b->m_Base.hasAttribute("cutout");
};

void CutoutMixIn::removeCutout() {
    b->m_Base.removeAttribute("cutout");
};


ExpandableMixIn::ExpandableMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ExpandableMixIn::getExpandValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("expand")) {
        throw AttributeNotFoundException("expand");
    }
    return b->m_Base.getAttributeValue("expand");
};

MeiAttribute* ExpandableMixIn::getExpand() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("expand")) {
        throw AttributeNotFoundException("expand");
    }
    return b->m_Base.getAttribute("expand");
};

void ExpandableMixIn::setExpand(std::string _expand) {
    if (!b->m_Base.hasAttribute("expand")) {
        MeiAttribute *a = new MeiAttribute("expand", _expand);
        b->m_Base.addAttribute(a);
    }
};

bool ExpandableMixIn::hasExpand() {
    return b->m_Base.hasAttribute("expand");
};

void ExpandableMixIn::removeExpand() {
    b->m_Base.removeAttribute("expand");
};


FtremGesMixIn::FtremGesMixIn(BaseMeiElement *b) {
    this->b = b;
};

string FtremGesMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* FtremGesMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void FtremGesMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool FtremGesMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void FtremGesMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};


FermataVisMixIn::FermataVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string FermataVisMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* FermataVisMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void FermataVisMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool FermataVisMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void FermataVisMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};

string FermataVisMixIn::getShapeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->m_Base.getAttributeValue("shape");
};

MeiAttribute* FermataVisMixIn::getShape() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->m_Base.getAttribute("shape");
};

void FermataVisMixIn::setShape(std::string _shape) {
    if (!b->m_Base.hasAttribute("shape")) {
        MeiAttribute *a = new MeiAttribute("shape", _shape);
        b->m_Base.addAttribute(a);
    }
};

bool FermataVisMixIn::hasShape() {
    return b->m_Base.hasAttribute("shape");
};

void FermataVisMixIn::removeShape() {
    b->m_Base.removeAttribute("shape");
};


GlissVisMixIn::GlissVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string GlissVisMixIn::getTextValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text")) {
        throw AttributeNotFoundException("text");
    }
    return b->m_Base.getAttributeValue("text");
};

MeiAttribute* GlissVisMixIn::getText() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text")) {
        throw AttributeNotFoundException("text");
    }
    return b->m_Base.getAttribute("text");
};

void GlissVisMixIn::setText(std::string _text) {
    if (!b->m_Base.hasAttribute("text")) {
        MeiAttribute *a = new MeiAttribute("text", _text);
        b->m_Base.addAttribute(a);
    }
};

bool GlissVisMixIn::hasText() {
    return b->m_Base.hasAttribute("text");
};

void GlissVisMixIn::removeText() {
    b->m_Base.removeAttribute("text");
};


GracedMixIn::GracedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string GracedMixIn::getGraceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grace")) {
        throw AttributeNotFoundException("grace");
    }
    return b->m_Base.getAttributeValue("grace");
};

MeiAttribute* GracedMixIn::getGrace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grace")) {
        throw AttributeNotFoundException("grace");
    }
    return b->m_Base.getAttribute("grace");
};

void GracedMixIn::setGrace(std::string _grace) {
    if (!b->m_Base.hasAttribute("grace")) {
        MeiAttribute *a = new MeiAttribute("grace", _grace);
        b->m_Base.addAttribute(a);
    }
};

bool GracedMixIn::hasGrace() {
    return b->m_Base.hasAttribute("grace");
};

void GracedMixIn::removeGrace() {
    b->m_Base.removeAttribute("grace");
};

string GracedMixIn::getGraceTimeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grace.time")) {
        throw AttributeNotFoundException("grace.time");
    }
    return b->m_Base.getAttributeValue("grace.time");
};

MeiAttribute* GracedMixIn::getGraceTime() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grace.time")) {
        throw AttributeNotFoundException("grace.time");
    }
    return b->m_Base.getAttribute("grace.time");
};

void GracedMixIn::setGraceTime(std::string _gracetime) {
    if (!b->m_Base.hasAttribute("grace.time")) {
        MeiAttribute *a = new MeiAttribute("grace.time", _gracetime);
        b->m_Base.addAttribute(a);
    }
};

bool GracedMixIn::hasGraceTime() {
    return b->m_Base.hasAttribute("grace.time");
};

void GracedMixIn::removeGraceTime() {
    b->m_Base.removeAttribute("grace.time");
};


HairpinLogMixIn::HairpinLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string HairpinLogMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* HairpinLogMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void HairpinLogMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool HairpinLogMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void HairpinLogMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};


HairpinVisMixIn::HairpinVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string HairpinVisMixIn::getOpeningValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("opening")) {
        throw AttributeNotFoundException("opening");
    }
    return b->m_Base.getAttributeValue("opening");
};

MeiAttribute* HairpinVisMixIn::getOpening() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("opening")) {
        throw AttributeNotFoundException("opening");
    }
    return b->m_Base.getAttribute("opening");
};

void HairpinVisMixIn::setOpening(std::string _opening) {
    if (!b->m_Base.hasAttribute("opening")) {
        MeiAttribute *a = new MeiAttribute("opening", _opening);
        b->m_Base.addAttribute(a);
    }
};

bool HairpinVisMixIn::hasOpening() {
    return b->m_Base.hasAttribute("opening");
};

void HairpinVisMixIn::removeOpening() {
    b->m_Base.removeAttribute("opening");
};


HarppedalLogMixIn::HarppedalLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string HarppedalLogMixIn::getCValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("c")) {
        throw AttributeNotFoundException("c");
    }
    return b->m_Base.getAttributeValue("c");
};

MeiAttribute* HarppedalLogMixIn::getC() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("c")) {
        throw AttributeNotFoundException("c");
    }
    return b->m_Base.getAttribute("c");
};

void HarppedalLogMixIn::setC(std::string _c) {
    if (!b->m_Base.hasAttribute("c")) {
        MeiAttribute *a = new MeiAttribute("c", _c);
        b->m_Base.addAttribute(a);
    }
};

bool HarppedalLogMixIn::hasC() {
    return b->m_Base.hasAttribute("c");
};

void HarppedalLogMixIn::removeC() {
    b->m_Base.removeAttribute("c");
};

string HarppedalLogMixIn::getDValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("d")) {
        throw AttributeNotFoundException("d");
    }
    return b->m_Base.getAttributeValue("d");
};

MeiAttribute* HarppedalLogMixIn::getD() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("d")) {
        throw AttributeNotFoundException("d");
    }
    return b->m_Base.getAttribute("d");
};

void HarppedalLogMixIn::setD(std::string _d) {
    if (!b->m_Base.hasAttribute("d")) {
        MeiAttribute *a = new MeiAttribute("d", _d);
        b->m_Base.addAttribute(a);
    }
};

bool HarppedalLogMixIn::hasD() {
    return b->m_Base.hasAttribute("d");
};

void HarppedalLogMixIn::removeD() {
    b->m_Base.removeAttribute("d");
};

string HarppedalLogMixIn::getEValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("e")) {
        throw AttributeNotFoundException("e");
    }
    return b->m_Base.getAttributeValue("e");
};

MeiAttribute* HarppedalLogMixIn::getE() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("e")) {
        throw AttributeNotFoundException("e");
    }
    return b->m_Base.getAttribute("e");
};

void HarppedalLogMixIn::setE(std::string _e) {
    if (!b->m_Base.hasAttribute("e")) {
        MeiAttribute *a = new MeiAttribute("e", _e);
        b->m_Base.addAttribute(a);
    }
};

bool HarppedalLogMixIn::hasE() {
    return b->m_Base.hasAttribute("e");
};

void HarppedalLogMixIn::removeE() {
    b->m_Base.removeAttribute("e");
};

string HarppedalLogMixIn::getFValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("f")) {
        throw AttributeNotFoundException("f");
    }
    return b->m_Base.getAttributeValue("f");
};

MeiAttribute* HarppedalLogMixIn::getF() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("f")) {
        throw AttributeNotFoundException("f");
    }
    return b->m_Base.getAttribute("f");
};

void HarppedalLogMixIn::setF(std::string _f) {
    if (!b->m_Base.hasAttribute("f")) {
        MeiAttribute *a = new MeiAttribute("f", _f);
        b->m_Base.addAttribute(a);
    }
};

bool HarppedalLogMixIn::hasF() {
    return b->m_Base.hasAttribute("f");
};

void HarppedalLogMixIn::removeF() {
    b->m_Base.removeAttribute("f");
};

string HarppedalLogMixIn::getGValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("g")) {
        throw AttributeNotFoundException("g");
    }
    return b->m_Base.getAttributeValue("g");
};

MeiAttribute* HarppedalLogMixIn::getG() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("g")) {
        throw AttributeNotFoundException("g");
    }
    return b->m_Base.getAttribute("g");
};

void HarppedalLogMixIn::setG(std::string _g) {
    if (!b->m_Base.hasAttribute("g")) {
        MeiAttribute *a = new MeiAttribute("g", _g);
        b->m_Base.addAttribute(a);
    }
};

bool HarppedalLogMixIn::hasG() {
    return b->m_Base.hasAttribute("g");
};

void HarppedalLogMixIn::removeG() {
    b->m_Base.removeAttribute("g");
};

string HarppedalLogMixIn::getAValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("a")) {
        throw AttributeNotFoundException("a");
    }
    return b->m_Base.getAttributeValue("a");
};

MeiAttribute* HarppedalLogMixIn::getA() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("a")) {
        throw AttributeNotFoundException("a");
    }
    return b->m_Base.getAttribute("a");
};

void HarppedalLogMixIn::setA(std::string _a) {
    if (!b->m_Base.hasAttribute("a")) {
        MeiAttribute *a = new MeiAttribute("a", _a);
        b->m_Base.addAttribute(a);
    }
};

bool HarppedalLogMixIn::hasA() {
    return b->m_Base.hasAttribute("a");
};

void HarppedalLogMixIn::removeA() {
    b->m_Base.removeAttribute("a");
};

string HarppedalLogMixIn::getBValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("b")) {
        throw AttributeNotFoundException("b");
    }
    return b->m_Base.getAttributeValue("b");
};

MeiAttribute* HarppedalLogMixIn::getB() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("b")) {
        throw AttributeNotFoundException("b");
    }
    return b->m_Base.getAttribute("b");
};

void HarppedalLogMixIn::setB(std::string _b) {
    if (!b->m_Base.hasAttribute("b")) {
        MeiAttribute *a = new MeiAttribute("b", _b);
        b->m_Base.addAttribute(a);
    }
};

bool HarppedalLogMixIn::hasB() {
    return b->m_Base.hasAttribute("b");
};

void HarppedalLogMixIn::removeB() {
    b->m_Base.removeAttribute("b");
};


LvpresentMixIn::LvpresentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LvpresentMixIn::getLvValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lv")) {
        throw AttributeNotFoundException("lv");
    }
    return b->m_Base.getAttributeValue("lv");
};

MeiAttribute* LvpresentMixIn::getLv() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lv")) {
        throw AttributeNotFoundException("lv");
    }
    return b->m_Base.getAttribute("lv");
};

void LvpresentMixIn::setLv(std::string _lv) {
    if (!b->m_Base.hasAttribute("lv")) {
        MeiAttribute *a = new MeiAttribute("lv", _lv);
        b->m_Base.addAttribute(a);
    }
};

bool LvpresentMixIn::hasLv() {
    return b->m_Base.hasAttribute("lv");
};

void LvpresentMixIn::removeLv() {
    b->m_Base.removeAttribute("lv");
};


MultirestVisMixIn::MultirestVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MultirestVisMixIn::getBlockValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("block")) {
        throw AttributeNotFoundException("block");
    }
    return b->m_Base.getAttributeValue("block");
};

MeiAttribute* MultirestVisMixIn::getBlock() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("block")) {
        throw AttributeNotFoundException("block");
    }
    return b->m_Base.getAttribute("block");
};

void MultirestVisMixIn::setBlock(std::string _block) {
    if (!b->m_Base.hasAttribute("block")) {
        MeiAttribute *a = new MeiAttribute("block", _block);
        b->m_Base.addAttribute(a);
    }
};

bool MultirestVisMixIn::hasBlock() {
    return b->m_Base.hasAttribute("block");
};

void MultirestVisMixIn::removeBlock() {
    b->m_Base.removeAttribute("block");
};


NoteGesCmnMixIn::NoteGesCmnMixIn(BaseMeiElement *b) {
    this->b = b;
};

string NoteGesCmnMixIn::getGlissValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("gliss")) {
        throw AttributeNotFoundException("gliss");
    }
    return b->m_Base.getAttributeValue("gliss");
};

MeiAttribute* NoteGesCmnMixIn::getGliss() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("gliss")) {
        throw AttributeNotFoundException("gliss");
    }
    return b->m_Base.getAttribute("gliss");
};

void NoteGesCmnMixIn::setGliss(std::string _gliss) {
    if (!b->m_Base.hasAttribute("gliss")) {
        MeiAttribute *a = new MeiAttribute("gliss", _gliss);
        b->m_Base.addAttribute(a);
    }
};

bool NoteGesCmnMixIn::hasGliss() {
    return b->m_Base.hasAttribute("gliss");
};

void NoteGesCmnMixIn::removeGliss() {
    b->m_Base.removeAttribute("gliss");
};


NumberedMixIn::NumberedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string NumberedMixIn::getNumValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};

MeiAttribute* NumberedMixIn::getNum() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};

void NumberedMixIn::setNum(std::string _num) {
    if (!b->m_Base.hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};

bool NumberedMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};

void NumberedMixIn::removeNum() {
    b->m_Base.removeAttribute("num");
};


NumberplacementMixIn::NumberplacementMixIn(BaseMeiElement *b) {
    this->b = b;
};

string NumberplacementMixIn::getNumPlaceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.place")) {
        throw AttributeNotFoundException("num.place");
    }
    return b->m_Base.getAttributeValue("num.place");
};

MeiAttribute* NumberplacementMixIn::getNumPlace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.place")) {
        throw AttributeNotFoundException("num.place");
    }
    return b->m_Base.getAttribute("num.place");
};

void NumberplacementMixIn::setNumPlace(std::string _numplace) {
    if (!b->m_Base.hasAttribute("num.place")) {
        MeiAttribute *a = new MeiAttribute("num.place", _numplace);
        b->m_Base.addAttribute(a);
    }
};

bool NumberplacementMixIn::hasNumPlace() {
    return b->m_Base.hasAttribute("num.place");
};

void NumberplacementMixIn::removeNumPlace() {
    b->m_Base.removeAttribute("num.place");
};

string NumberplacementMixIn::getNumVisibleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.visible")) {
        throw AttributeNotFoundException("num.visible");
    }
    return b->m_Base.getAttributeValue("num.visible");
};

MeiAttribute* NumberplacementMixIn::getNumVisible() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.visible")) {
        throw AttributeNotFoundException("num.visible");
    }
    return b->m_Base.getAttribute("num.visible");
};

void NumberplacementMixIn::setNumVisible(std::string _numvisible) {
    if (!b->m_Base.hasAttribute("num.visible")) {
        MeiAttribute *a = new MeiAttribute("num.visible", _numvisible);
        b->m_Base.addAttribute(a);
    }
};

bool NumberplacementMixIn::hasNumVisible() {
    return b->m_Base.hasAttribute("num.visible");
};

void NumberplacementMixIn::removeNumVisible() {
    b->m_Base.removeAttribute("num.visible");
};


OctaveLogMixIn::OctaveLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string OctaveLogMixIn::getCollValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("coll")) {
        throw AttributeNotFoundException("coll");
    }
    return b->m_Base.getAttributeValue("coll");
};

MeiAttribute* OctaveLogMixIn::getColl() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("coll")) {
        throw AttributeNotFoundException("coll");
    }
    return b->m_Base.getAttribute("coll");
};

void OctaveLogMixIn::setColl(std::string _coll) {
    if (!b->m_Base.hasAttribute("coll")) {
        MeiAttribute *a = new MeiAttribute("coll", _coll);
        b->m_Base.addAttribute(a);
    }
};

bool OctaveLogMixIn::hasColl() {
    return b->m_Base.hasAttribute("coll");
};

void OctaveLogMixIn::removeColl() {
    b->m_Base.removeAttribute("coll");
};


PedalLogMixIn::PedalLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string PedalLogMixIn::getDirValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dir")) {
        throw AttributeNotFoundException("dir");
    }
    return b->m_Base.getAttributeValue("dir");
};

MeiAttribute* PedalLogMixIn::getDir() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dir")) {
        throw AttributeNotFoundException("dir");
    }
    return b->m_Base.getAttribute("dir");
};

void PedalLogMixIn::setDir(std::string _dir) {
    if (!b->m_Base.hasAttribute("dir")) {
        MeiAttribute *a = new MeiAttribute("dir", _dir);
        b->m_Base.addAttribute(a);
    }
};

bool PedalLogMixIn::hasDir() {
    return b->m_Base.hasAttribute("dir");
};

void PedalLogMixIn::removeDir() {
    b->m_Base.removeAttribute("dir");
};


PedalVisMixIn::PedalVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string PedalVisMixIn::getStyleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("style")) {
        throw AttributeNotFoundException("style");
    }
    return b->m_Base.getAttributeValue("style");
};

MeiAttribute* PedalVisMixIn::getStyle() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("style")) {
        throw AttributeNotFoundException("style");
    }
    return b->m_Base.getAttribute("style");
};

void PedalVisMixIn::setStyle(std::string _style) {
    if (!b->m_Base.hasAttribute("style")) {
        MeiAttribute *a = new MeiAttribute("style", _style);
        b->m_Base.addAttribute(a);
    }
};

bool PedalVisMixIn::hasStyle() {
    return b->m_Base.hasAttribute("style");
};

void PedalVisMixIn::removeStyle() {
    b->m_Base.removeAttribute("style");
};


PianopedalsMixIn::PianopedalsMixIn(BaseMeiElement *b) {
    this->b = b;
};

string PianopedalsMixIn::getPedalStyleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pedal.style")) {
        throw AttributeNotFoundException("pedal.style");
    }
    return b->m_Base.getAttributeValue("pedal.style");
};

MeiAttribute* PianopedalsMixIn::getPedalStyle() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pedal.style")) {
        throw AttributeNotFoundException("pedal.style");
    }
    return b->m_Base.getAttribute("pedal.style");
};

void PianopedalsMixIn::setPedalStyle(std::string _pedalstyle) {
    if (!b->m_Base.hasAttribute("pedal.style")) {
        MeiAttribute *a = new MeiAttribute("pedal.style", _pedalstyle);
        b->m_Base.addAttribute(a);
    }
};

bool PianopedalsMixIn::hasPedalStyle() {
    return b->m_Base.hasAttribute("pedal.style");
};

void PianopedalsMixIn::removePedalStyle() {
    b->m_Base.removeAttribute("pedal.style");
};


RehearsalMixIn::RehearsalMixIn(BaseMeiElement *b) {
    this->b = b;
};

string RehearsalMixIn::getRehEncloseValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reh.enclose")) {
        throw AttributeNotFoundException("reh.enclose");
    }
    return b->m_Base.getAttributeValue("reh.enclose");
};

MeiAttribute* RehearsalMixIn::getRehEnclose() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reh.enclose")) {
        throw AttributeNotFoundException("reh.enclose");
    }
    return b->m_Base.getAttribute("reh.enclose");
};

void RehearsalMixIn::setRehEnclose(std::string _rehenclose) {
    if (!b->m_Base.hasAttribute("reh.enclose")) {
        MeiAttribute *a = new MeiAttribute("reh.enclose", _rehenclose);
        b->m_Base.addAttribute(a);
    }
};

bool RehearsalMixIn::hasRehEnclose() {
    return b->m_Base.hasAttribute("reh.enclose");
};

void RehearsalMixIn::removeRehEnclose() {
    b->m_Base.removeAttribute("reh.enclose");
};


ScoredefVisCmnMixIn::ScoredefVisCmnMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ScoredefVisCmnMixIn::getGridShowValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return b->m_Base.getAttributeValue("grid.show");
};

MeiAttribute* ScoredefVisCmnMixIn::getGridShow() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return b->m_Base.getAttribute("grid.show");
};

void ScoredefVisCmnMixIn::setGridShow(std::string _gridshow) {
    if (!b->m_Base.hasAttribute("grid.show")) {
        MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisCmnMixIn::hasGridShow() {
    return b->m_Base.hasAttribute("grid.show");
};

void ScoredefVisCmnMixIn::removeGridShow() {
    b->m_Base.removeAttribute("grid.show");
};


SlurrendMixIn::SlurrendMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SlurrendMixIn::getSlurRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slur.rend")) {
        throw AttributeNotFoundException("slur.rend");
    }
    return b->m_Base.getAttributeValue("slur.rend");
};

MeiAttribute* SlurrendMixIn::getSlurRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slur.rend")) {
        throw AttributeNotFoundException("slur.rend");
    }
    return b->m_Base.getAttribute("slur.rend");
};

void SlurrendMixIn::setSlurRend(std::string _slurrend) {
    if (!b->m_Base.hasAttribute("slur.rend")) {
        MeiAttribute *a = new MeiAttribute("slur.rend", _slurrend);
        b->m_Base.addAttribute(a);
    }
};

bool SlurrendMixIn::hasSlurRend() {
    return b->m_Base.hasAttribute("slur.rend");
};

void SlurrendMixIn::removeSlurRend() {
    b->m_Base.removeAttribute("slur.rend");
};


StemmedCmnMixIn::StemmedCmnMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StemmedCmnMixIn::getStemModValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.mod")) {
        throw AttributeNotFoundException("stem.mod");
    }
    return b->m_Base.getAttributeValue("stem.mod");
};

MeiAttribute* StemmedCmnMixIn::getStemMod() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.mod")) {
        throw AttributeNotFoundException("stem.mod");
    }
    return b->m_Base.getAttribute("stem.mod");
};

void StemmedCmnMixIn::setStemMod(std::string _stemmod) {
    if (!b->m_Base.hasAttribute("stem.mod")) {
        MeiAttribute *a = new MeiAttribute("stem.mod", _stemmod);
        b->m_Base.addAttribute(a);
    }
};

bool StemmedCmnMixIn::hasStemMod() {
    return b->m_Base.hasAttribute("stem.mod");
};

void StemmedCmnMixIn::removeStemMod() {
    b->m_Base.removeAttribute("stem.mod");
};

string StemmedCmnMixIn::getStemWithValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.with")) {
        throw AttributeNotFoundException("stem.with");
    }
    return b->m_Base.getAttributeValue("stem.with");
};

MeiAttribute* StemmedCmnMixIn::getStemWith() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.with")) {
        throw AttributeNotFoundException("stem.with");
    }
    return b->m_Base.getAttribute("stem.with");
};

void StemmedCmnMixIn::setStemWith(std::string _stemwith) {
    if (!b->m_Base.hasAttribute("stem.with")) {
        MeiAttribute *a = new MeiAttribute("stem.with", _stemwith);
        b->m_Base.addAttribute(a);
    }
};

bool StemmedCmnMixIn::hasStemWith() {
    return b->m_Base.hasAttribute("stem.with");
};

void StemmedCmnMixIn::removeStemWith() {
    b->m_Base.removeAttribute("stem.with");
};


TierendMixIn::TierendMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TierendMixIn::getTieRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tie.rend")) {
        throw AttributeNotFoundException("tie.rend");
    }
    return b->m_Base.getAttributeValue("tie.rend");
};

MeiAttribute* TierendMixIn::getTieRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tie.rend")) {
        throw AttributeNotFoundException("tie.rend");
    }
    return b->m_Base.getAttribute("tie.rend");
};

void TierendMixIn::setTieRend(std::string _tierend) {
    if (!b->m_Base.hasAttribute("tie.rend")) {
        MeiAttribute *a = new MeiAttribute("tie.rend", _tierend);
        b->m_Base.addAttribute(a);
    }
};

bool TierendMixIn::hasTieRend() {
    return b->m_Base.hasAttribute("tie.rend");
};

void TierendMixIn::removeTieRend() {
    b->m_Base.removeAttribute("tie.rend");
};


TupletLogMixIn::TupletLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TupletLogMixIn::getDurValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttributeValue("dur");
};

MeiAttribute* TupletLogMixIn::getDur() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttribute("dur");
};

void TupletLogMixIn::setDur(std::string _dur) {
    if (!b->m_Base.hasAttribute("dur")) {
        MeiAttribute *a = new MeiAttribute("dur", _dur);
        b->m_Base.addAttribute(a);
    }
};

bool TupletLogMixIn::hasDur() {
    return b->m_Base.hasAttribute("dur");
};

void TupletLogMixIn::removeDur() {
    b->m_Base.removeAttribute("dur");
};


TupletVisMixIn::TupletVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TupletVisMixIn::getBracketPlaceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bracket.place")) {
        throw AttributeNotFoundException("bracket.place");
    }
    return b->m_Base.getAttributeValue("bracket.place");
};

MeiAttribute* TupletVisMixIn::getBracketPlace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bracket.place")) {
        throw AttributeNotFoundException("bracket.place");
    }
    return b->m_Base.getAttribute("bracket.place");
};

void TupletVisMixIn::setBracketPlace(std::string _bracketplace) {
    if (!b->m_Base.hasAttribute("bracket.place")) {
        MeiAttribute *a = new MeiAttribute("bracket.place", _bracketplace);
        b->m_Base.addAttribute(a);
    }
};

bool TupletVisMixIn::hasBracketPlace() {
    return b->m_Base.hasAttribute("bracket.place");
};

void TupletVisMixIn::removeBracketPlace() {
    b->m_Base.removeAttribute("bracket.place");
};

string TupletVisMixIn::getBracketVisibleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bracket.visible")) {
        throw AttributeNotFoundException("bracket.visible");
    }
    return b->m_Base.getAttributeValue("bracket.visible");
};

MeiAttribute* TupletVisMixIn::getBracketVisible() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bracket.visible")) {
        throw AttributeNotFoundException("bracket.visible");
    }
    return b->m_Base.getAttribute("bracket.visible");
};

void TupletVisMixIn::setBracketVisible(std::string _bracketvisible) {
    if (!b->m_Base.hasAttribute("bracket.visible")) {
        MeiAttribute *a = new MeiAttribute("bracket.visible", _bracketvisible);
        b->m_Base.addAttribute(a);
    }
};

bool TupletVisMixIn::hasBracketVisible() {
    return b->m_Base.hasAttribute("bracket.visible");
};

void TupletVisMixIn::removeBracketVisible() {
    b->m_Base.removeAttribute("bracket.visible");
};

string TupletVisMixIn::getDurVisibleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.visible")) {
        throw AttributeNotFoundException("dur.visible");
    }
    return b->m_Base.getAttributeValue("dur.visible");
};

MeiAttribute* TupletVisMixIn::getDurVisible() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.visible")) {
        throw AttributeNotFoundException("dur.visible");
    }
    return b->m_Base.getAttribute("dur.visible");
};

void TupletVisMixIn::setDurVisible(std::string _durvisible) {
    if (!b->m_Base.hasAttribute("dur.visible")) {
        MeiAttribute *a = new MeiAttribute("dur.visible", _durvisible);
        b->m_Base.addAttribute(a);
    }
};

bool TupletVisMixIn::hasDurVisible() {
    return b->m_Base.hasAttribute("dur.visible");
};

void TupletVisMixIn::removeDurVisible() {
    b->m_Base.removeAttribute("dur.visible");
};

string TupletVisMixIn::getNumFormatValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.format")) {
        throw AttributeNotFoundException("num.format");
    }
    return b->m_Base.getAttributeValue("num.format");
};

MeiAttribute* TupletVisMixIn::getNumFormat() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.format")) {
        throw AttributeNotFoundException("num.format");
    }
    return b->m_Base.getAttribute("num.format");
};

void TupletVisMixIn::setNumFormat(std::string _numformat) {
    if (!b->m_Base.hasAttribute("num.format")) {
        MeiAttribute *a = new MeiAttribute("num.format", _numformat);
        b->m_Base.addAttribute(a);
    }
};

bool TupletVisMixIn::hasNumFormat() {
    return b->m_Base.hasAttribute("num.format");
};

void TupletVisMixIn::removeNumFormat() {
    b->m_Base.removeAttribute("num.format");
};


TupletspanLogMixIn::TupletspanLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TupletspanLogMixIn::getDurValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttributeValue("dur");
};

MeiAttribute* TupletspanLogMixIn::getDur() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttribute("dur");
};

void TupletspanLogMixIn::setDur(std::string _dur) {
    if (!b->m_Base.hasAttribute("dur")) {
        MeiAttribute *a = new MeiAttribute("dur", _dur);
        b->m_Base.addAttribute(a);
    }
};

bool TupletspanLogMixIn::hasDur() {
    return b->m_Base.hasAttribute("dur");
};

void TupletspanLogMixIn::removeDur() {
    b->m_Base.removeAttribute("dur");
};



