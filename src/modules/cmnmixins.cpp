#include "cmnmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ArpegLogMixIn::ArpegLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArpegLogMixIn::~ArpegLogMixIn() {}
MeiAttribute* mei::ArpegLogMixIn::getOrder() {
    if (!b->hasAttribute("order")) {
        return NULL;
    }
    return b->getAttribute("order");
};

void mei::ArpegLogMixIn::setOrder(std::string _order) {
    MeiAttribute *a = new MeiAttribute("order", _order);
    b->addAttribute(a);
};

bool mei::ArpegLogMixIn::hasOrder() {
    return b->hasAttribute("order");
};

void mei::ArpegLogMixIn::removeOrder() {
    b->removeAttribute("order");
};

/* include <ordermixin> */
mei::ArpegVisMixIn::ArpegVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArpegVisMixIn::~ArpegVisMixIn() {}
MeiAttribute* mei::ArpegVisMixIn::getArrow() {
    if (!b->hasAttribute("arrow")) {
        return NULL;
    }
    return b->getAttribute("arrow");
};

void mei::ArpegVisMixIn::setArrow(std::string _arrow) {
    MeiAttribute *a = new MeiAttribute("arrow", _arrow);
    b->addAttribute(a);
};

bool mei::ArpegVisMixIn::hasArrow() {
    return b->hasAttribute("arrow");
};

void mei::ArpegVisMixIn::removeArrow() {
    b->removeAttribute("arrow");
};

/* include <arrowmixin> */
mei::BTremLogMixIn::BTremLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BTremLogMixIn::~BTremLogMixIn() {}
MeiAttribute* mei::BTremLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::BTremLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::BTremLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::BTremLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::BeamedMixIn::BeamedMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamedMixIn::~BeamedMixIn() {}
MeiAttribute* mei::BeamedMixIn::getBeam() {
    if (!b->hasAttribute("beam")) {
        return NULL;
    }
    return b->getAttribute("beam");
};

void mei::BeamedMixIn::setBeam(std::string _beam) {
    MeiAttribute *a = new MeiAttribute("beam", _beam);
    b->addAttribute(a);
};

bool mei::BeamedMixIn::hasBeam() {
    return b->hasAttribute("beam");
};

void mei::BeamedMixIn::removeBeam() {
    b->removeAttribute("beam");
};

/* include <beammixin> */
mei::BeamedwithMixIn::BeamedwithMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamedwithMixIn::~BeamedwithMixIn() {}
MeiAttribute* mei::BeamedwithMixIn::getBeamWith() {
    if (!b->hasAttribute("beam.with")) {
        return NULL;
    }
    return b->getAttribute("beam.with");
};

void mei::BeamedwithMixIn::setBeamWith(std::string _beamwith) {
    MeiAttribute *a = new MeiAttribute("beam.with", _beamwith);
    b->addAttribute(a);
};

bool mei::BeamedwithMixIn::hasBeamWith() {
    return b->hasAttribute("beam.with");
};

void mei::BeamedwithMixIn::removeBeamWith() {
    b->removeAttribute("beam.with");
};

/* include <beam.withmixin> */
mei::BeamingLogMixIn::BeamingLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamingLogMixIn::~BeamingLogMixIn() {}
MeiAttribute* mei::BeamingLogMixIn::getBeamGroup() {
    if (!b->hasAttribute("beam.group")) {
        return NULL;
    }
    return b->getAttribute("beam.group");
};

void mei::BeamingLogMixIn::setBeamGroup(std::string _beamgroup) {
    MeiAttribute *a = new MeiAttribute("beam.group", _beamgroup);
    b->addAttribute(a);
};

bool mei::BeamingLogMixIn::hasBeamGroup() {
    return b->hasAttribute("beam.group");
};

void mei::BeamingLogMixIn::removeBeamGroup() {
    b->removeAttribute("beam.group");
};
MeiAttribute* mei::BeamingLogMixIn::getBeamRests() {
    if (!b->hasAttribute("beam.rests")) {
        return NULL;
    }
    return b->getAttribute("beam.rests");
};

void mei::BeamingLogMixIn::setBeamRests(std::string _beamrests) {
    MeiAttribute *a = new MeiAttribute("beam.rests", _beamrests);
    b->addAttribute(a);
};

bool mei::BeamingLogMixIn::hasBeamRests() {
    return b->hasAttribute("beam.rests");
};

void mei::BeamingLogMixIn::removeBeamRests() {
    b->removeAttribute("beam.rests");
};

/* include <beam.restsmixin> */
mei::BeamrendMixIn::BeamrendMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamrendMixIn::~BeamrendMixIn() {}
MeiAttribute* mei::BeamrendMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::BeamrendMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::BeamrendMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::BeamrendMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::BeamrendMixIn::getSlope() {
    if (!b->hasAttribute("slope")) {
        return NULL;
    }
    return b->getAttribute("slope");
};

void mei::BeamrendMixIn::setSlope(std::string _slope) {
    MeiAttribute *a = new MeiAttribute("slope", _slope);
    b->addAttribute(a);
};

bool mei::BeamrendMixIn::hasSlope() {
    return b->hasAttribute("slope");
};

void mei::BeamrendMixIn::removeSlope() {
    b->removeAttribute("slope");
};

/* include <slopemixin> */
mei::BeamsecondaryMixIn::BeamsecondaryMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamsecondaryMixIn::~BeamsecondaryMixIn() {}
MeiAttribute* mei::BeamsecondaryMixIn::getBreaksec() {
    if (!b->hasAttribute("breaksec")) {
        return NULL;
    }
    return b->getAttribute("breaksec");
};

void mei::BeamsecondaryMixIn::setBreaksec(std::string _breaksec) {
    MeiAttribute *a = new MeiAttribute("breaksec", _breaksec);
    b->addAttribute(a);
};

bool mei::BeamsecondaryMixIn::hasBreaksec() {
    return b->hasAttribute("breaksec");
};

void mei::BeamsecondaryMixIn::removeBreaksec() {
    b->removeAttribute("breaksec");
};

/* include <breaksecmixin> */
mei::BeatRptLogMixIn::BeatRptLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeatRptLogMixIn::~BeatRptLogMixIn() {}
MeiAttribute* mei::BeatRptLogMixIn::getBeatDef() {
    if (!b->hasAttribute("beatDef")) {
        return NULL;
    }
    return b->getAttribute("beatDef");
};

void mei::BeatRptLogMixIn::setBeatDef(std::string _beatDef) {
    MeiAttribute *a = new MeiAttribute("beatDef", _beatDef);
    b->addAttribute(a);
};

bool mei::BeatRptLogMixIn::hasBeatDef() {
    return b->hasAttribute("beatDef");
};

void mei::BeatRptLogMixIn::removeBeatDef() {
    b->removeAttribute("beatDef");
};

/* include <beatDefmixin> */
mei::BeatRptVisMixIn::BeatRptVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeatRptVisMixIn::~BeatRptVisMixIn() {}
MeiAttribute* mei::BeatRptVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::BeatRptVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::BeatRptVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::BeatRptVisMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::BendGesMixIn::BendGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::BendGesMixIn::~BendGesMixIn() {}
MeiAttribute* mei::BendGesMixIn::getAmount() {
    if (!b->hasAttribute("amount")) {
        return NULL;
    }
    return b->getAttribute("amount");
};

void mei::BendGesMixIn::setAmount(std::string _amount) {
    MeiAttribute *a = new MeiAttribute("amount", _amount);
    b->addAttribute(a);
};

bool mei::BendGesMixIn::hasAmount() {
    return b->hasAttribute("amount");
};

void mei::BendGesMixIn::removeAmount() {
    b->removeAttribute("amount");
};

/* include <amountmixin> */
mei::CutoutMixIn::CutoutMixIn(MeiElement *b) {
    this->b = b;
};

mei::CutoutMixIn::~CutoutMixIn() {}
MeiAttribute* mei::CutoutMixIn::getCutout() {
    if (!b->hasAttribute("cutout")) {
        return NULL;
    }
    return b->getAttribute("cutout");
};

void mei::CutoutMixIn::setCutout(std::string _cutout) {
    MeiAttribute *a = new MeiAttribute("cutout", _cutout);
    b->addAttribute(a);
};

bool mei::CutoutMixIn::hasCutout() {
    return b->hasAttribute("cutout");
};

void mei::CutoutMixIn::removeCutout() {
    b->removeAttribute("cutout");
};

/* include <cutoutmixin> */
mei::ExpandableMixIn::ExpandableMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExpandableMixIn::~ExpandableMixIn() {}
MeiAttribute* mei::ExpandableMixIn::getExpand() {
    if (!b->hasAttribute("expand")) {
        return NULL;
    }
    return b->getAttribute("expand");
};

void mei::ExpandableMixIn::setExpand(std::string _expand) {
    MeiAttribute *a = new MeiAttribute("expand", _expand);
    b->addAttribute(a);
};

bool mei::ExpandableMixIn::hasExpand() {
    return b->hasAttribute("expand");
};

void mei::ExpandableMixIn::removeExpand() {
    b->removeAttribute("expand");
};

/* include <expandmixin> */
mei::FTremLogMixIn::FTremLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::FTremLogMixIn::~FTremLogMixIn() {}
MeiAttribute* mei::FTremLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::FTremLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::FTremLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::FTremLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::FermataVisMixIn::FermataVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::FermataVisMixIn::~FermataVisMixIn() {}
MeiAttribute* mei::FermataVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::FermataVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::FermataVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::FermataVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::FermataVisMixIn::getShape() {
    if (!b->hasAttribute("shape")) {
        return NULL;
    }
    return b->getAttribute("shape");
};

void mei::FermataVisMixIn::setShape(std::string _shape) {
    MeiAttribute *a = new MeiAttribute("shape", _shape);
    b->addAttribute(a);
};

bool mei::FermataVisMixIn::hasShape() {
    return b->hasAttribute("shape");
};

void mei::FermataVisMixIn::removeShape() {
    b->removeAttribute("shape");
};

/* include <shapemixin> */
mei::GracedMixIn::GracedMixIn(MeiElement *b) {
    this->b = b;
};

mei::GracedMixIn::~GracedMixIn() {}
MeiAttribute* mei::GracedMixIn::getGrace() {
    if (!b->hasAttribute("grace")) {
        return NULL;
    }
    return b->getAttribute("grace");
};

void mei::GracedMixIn::setGrace(std::string _grace) {
    MeiAttribute *a = new MeiAttribute("grace", _grace);
    b->addAttribute(a);
};

bool mei::GracedMixIn::hasGrace() {
    return b->hasAttribute("grace");
};

void mei::GracedMixIn::removeGrace() {
    b->removeAttribute("grace");
};
MeiAttribute* mei::GracedMixIn::getGraceTime() {
    if (!b->hasAttribute("grace.time")) {
        return NULL;
    }
    return b->getAttribute("grace.time");
};

void mei::GracedMixIn::setGraceTime(std::string _gracetime) {
    MeiAttribute *a = new MeiAttribute("grace.time", _gracetime);
    b->addAttribute(a);
};

bool mei::GracedMixIn::hasGraceTime() {
    return b->hasAttribute("grace.time");
};

void mei::GracedMixIn::removeGraceTime() {
    b->removeAttribute("grace.time");
};

/* include <grace.timemixin> */
mei::HairpinLogMixIn::HairpinLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::HairpinLogMixIn::~HairpinLogMixIn() {}
MeiAttribute* mei::HairpinLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::HairpinLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::HairpinLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::HairpinLogMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::HairpinLogMixIn::getNiente() {
    if (!b->hasAttribute("niente")) {
        return NULL;
    }
    return b->getAttribute("niente");
};

void mei::HairpinLogMixIn::setNiente(std::string _niente) {
    MeiAttribute *a = new MeiAttribute("niente", _niente);
    b->addAttribute(a);
};

bool mei::HairpinLogMixIn::hasNiente() {
    return b->hasAttribute("niente");
};

void mei::HairpinLogMixIn::removeNiente() {
    b->removeAttribute("niente");
};

/* include <nientemixin> */
mei::HairpinVisMixIn::HairpinVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::HairpinVisMixIn::~HairpinVisMixIn() {}
MeiAttribute* mei::HairpinVisMixIn::getOpening() {
    if (!b->hasAttribute("opening")) {
        return NULL;
    }
    return b->getAttribute("opening");
};

void mei::HairpinVisMixIn::setOpening(std::string _opening) {
    MeiAttribute *a = new MeiAttribute("opening", _opening);
    b->addAttribute(a);
};

bool mei::HairpinVisMixIn::hasOpening() {
    return b->hasAttribute("opening");
};

void mei::HairpinVisMixIn::removeOpening() {
    b->removeAttribute("opening");
};

/* include <openingmixin> */
mei::HarpPedalLogMixIn::HarpPedalLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarpPedalLogMixIn::~HarpPedalLogMixIn() {}
MeiAttribute* mei::HarpPedalLogMixIn::getC() {
    if (!b->hasAttribute("c")) {
        return NULL;
    }
    return b->getAttribute("c");
};

void mei::HarpPedalLogMixIn::setC(std::string _c) {
    MeiAttribute *a = new MeiAttribute("c", _c);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasC() {
    return b->hasAttribute("c");
};

void mei::HarpPedalLogMixIn::removeC() {
    b->removeAttribute("c");
};
MeiAttribute* mei::HarpPedalLogMixIn::getD() {
    if (!b->hasAttribute("d")) {
        return NULL;
    }
    return b->getAttribute("d");
};

void mei::HarpPedalLogMixIn::setD(std::string _d) {
    MeiAttribute *a = new MeiAttribute("d", _d);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasD() {
    return b->hasAttribute("d");
};

void mei::HarpPedalLogMixIn::removeD() {
    b->removeAttribute("d");
};
MeiAttribute* mei::HarpPedalLogMixIn::getE() {
    if (!b->hasAttribute("e")) {
        return NULL;
    }
    return b->getAttribute("e");
};

void mei::HarpPedalLogMixIn::setE(std::string _e) {
    MeiAttribute *a = new MeiAttribute("e", _e);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasE() {
    return b->hasAttribute("e");
};

void mei::HarpPedalLogMixIn::removeE() {
    b->removeAttribute("e");
};
MeiAttribute* mei::HarpPedalLogMixIn::getF() {
    if (!b->hasAttribute("f")) {
        return NULL;
    }
    return b->getAttribute("f");
};

void mei::HarpPedalLogMixIn::setF(std::string _f) {
    MeiAttribute *a = new MeiAttribute("f", _f);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasF() {
    return b->hasAttribute("f");
};

void mei::HarpPedalLogMixIn::removeF() {
    b->removeAttribute("f");
};
MeiAttribute* mei::HarpPedalLogMixIn::getG() {
    if (!b->hasAttribute("g")) {
        return NULL;
    }
    return b->getAttribute("g");
};

void mei::HarpPedalLogMixIn::setG(std::string _g) {
    MeiAttribute *a = new MeiAttribute("g", _g);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasG() {
    return b->hasAttribute("g");
};

void mei::HarpPedalLogMixIn::removeG() {
    b->removeAttribute("g");
};
MeiAttribute* mei::HarpPedalLogMixIn::getA() {
    if (!b->hasAttribute("a")) {
        return NULL;
    }
    return b->getAttribute("a");
};

void mei::HarpPedalLogMixIn::setA(std::string _a) {
    MeiAttribute *a = new MeiAttribute("a", _a);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasA() {
    return b->hasAttribute("a");
};

void mei::HarpPedalLogMixIn::removeA() {
    b->removeAttribute("a");
};
MeiAttribute* mei::HarpPedalLogMixIn::getB() {
    if (!b->hasAttribute("b")) {
        return NULL;
    }
    return b->getAttribute("b");
};

void mei::HarpPedalLogMixIn::setB(std::string _b) {
    MeiAttribute *a = new MeiAttribute("b", _b);
    b->addAttribute(a);
};

bool mei::HarpPedalLogMixIn::hasB() {
    return b->hasAttribute("b");
};

void mei::HarpPedalLogMixIn::removeB() {
    b->removeAttribute("b");
};

/* include <bmixin> */
mei::LvpresentMixIn::LvpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::LvpresentMixIn::~LvpresentMixIn() {}
MeiAttribute* mei::LvpresentMixIn::getLv() {
    if (!b->hasAttribute("lv")) {
        return NULL;
    }
    return b->getAttribute("lv");
};

void mei::LvpresentMixIn::setLv(std::string _lv) {
    MeiAttribute *a = new MeiAttribute("lv", _lv);
    b->addAttribute(a);
};

bool mei::LvpresentMixIn::hasLv() {
    return b->hasAttribute("lv");
};

void mei::LvpresentMixIn::removeLv() {
    b->removeAttribute("lv");
};

/* include <lvmixin> */
mei::MeterSigGrpLogMixIn::MeterSigGrpLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigGrpLogMixIn::~MeterSigGrpLogMixIn() {}
MeiAttribute* mei::MeterSigGrpLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::MeterSigGrpLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::MeterSigGrpLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::MeterSigGrpLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::MultiRestVisMixIn::MultiRestVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MultiRestVisMixIn::~MultiRestVisMixIn() {}
MeiAttribute* mei::MultiRestVisMixIn::getBlock() {
    if (!b->hasAttribute("block")) {
        return NULL;
    }
    return b->getAttribute("block");
};

void mei::MultiRestVisMixIn::setBlock(std::string _block) {
    MeiAttribute *a = new MeiAttribute("block", _block);
    b->addAttribute(a);
};

bool mei::MultiRestVisMixIn::hasBlock() {
    return b->hasAttribute("block");
};

void mei::MultiRestVisMixIn::removeBlock() {
    b->removeAttribute("block");
};

/* include <blockmixin> */
mei::NoteGesCmnMixIn::NoteGesCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteGesCmnMixIn::~NoteGesCmnMixIn() {}
MeiAttribute* mei::NoteGesCmnMixIn::getGliss() {
    if (!b->hasAttribute("gliss")) {
        return NULL;
    }
    return b->getAttribute("gliss");
};

void mei::NoteGesCmnMixIn::setGliss(std::string _gliss) {
    MeiAttribute *a = new MeiAttribute("gliss", _gliss);
    b->addAttribute(a);
};

bool mei::NoteGesCmnMixIn::hasGliss() {
    return b->hasAttribute("gliss");
};

void mei::NoteGesCmnMixIn::removeGliss() {
    b->removeAttribute("gliss");
};

/* include <glissmixin> */
mei::NumberedMixIn::NumberedMixIn(MeiElement *b) {
    this->b = b;
};

mei::NumberedMixIn::~NumberedMixIn() {}
MeiAttribute* mei::NumberedMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        return NULL;
    }
    return b->getAttribute("num");
};

void mei::NumberedMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::NumberedMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::NumberedMixIn::removeNum() {
    b->removeAttribute("num");
};

/* include <nummixin> */
mei::NumberplacementMixIn::NumberplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::NumberplacementMixIn::~NumberplacementMixIn() {}
MeiAttribute* mei::NumberplacementMixIn::getNumPlace() {
    if (!b->hasAttribute("num.place")) {
        return NULL;
    }
    return b->getAttribute("num.place");
};

void mei::NumberplacementMixIn::setNumPlace(std::string _numplace) {
    MeiAttribute *a = new MeiAttribute("num.place", _numplace);
    b->addAttribute(a);
};

bool mei::NumberplacementMixIn::hasNumPlace() {
    return b->hasAttribute("num.place");
};

void mei::NumberplacementMixIn::removeNumPlace() {
    b->removeAttribute("num.place");
};
MeiAttribute* mei::NumberplacementMixIn::getNumVisible() {
    if (!b->hasAttribute("num.visible")) {
        return NULL;
    }
    return b->getAttribute("num.visible");
};

void mei::NumberplacementMixIn::setNumVisible(std::string _numvisible) {
    MeiAttribute *a = new MeiAttribute("num.visible", _numvisible);
    b->addAttribute(a);
};

bool mei::NumberplacementMixIn::hasNumVisible() {
    return b->hasAttribute("num.visible");
};

void mei::NumberplacementMixIn::removeNumVisible() {
    b->removeAttribute("num.visible");
};

/* include <num.visiblemixin> */
mei::OctaveLogMixIn::OctaveLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctaveLogMixIn::~OctaveLogMixIn() {}
MeiAttribute* mei::OctaveLogMixIn::getColl() {
    if (!b->hasAttribute("coll")) {
        return NULL;
    }
    return b->getAttribute("coll");
};

void mei::OctaveLogMixIn::setColl(std::string _coll) {
    MeiAttribute *a = new MeiAttribute("coll", _coll);
    b->addAttribute(a);
};

bool mei::OctaveLogMixIn::hasColl() {
    return b->hasAttribute("coll");
};

void mei::OctaveLogMixIn::removeColl() {
    b->removeAttribute("coll");
};

/* include <collmixin> */
mei::PedalLogMixIn::PedalLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::PedalLogMixIn::~PedalLogMixIn() {}
MeiAttribute* mei::PedalLogMixIn::getDir() {
    if (!b->hasAttribute("dir")) {
        return NULL;
    }
    return b->getAttribute("dir");
};

void mei::PedalLogMixIn::setDir(std::string _dir) {
    MeiAttribute *a = new MeiAttribute("dir", _dir);
    b->addAttribute(a);
};

bool mei::PedalLogMixIn::hasDir() {
    return b->hasAttribute("dir");
};

void mei::PedalLogMixIn::removeDir() {
    b->removeAttribute("dir");
};

/* include <dirmixin> */
mei::PedalVisMixIn::PedalVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::PedalVisMixIn::~PedalVisMixIn() {}
MeiAttribute* mei::PedalVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::PedalVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::PedalVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::PedalVisMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::PianopedalsMixIn::PianopedalsMixIn(MeiElement *b) {
    this->b = b;
};

mei::PianopedalsMixIn::~PianopedalsMixIn() {}
MeiAttribute* mei::PianopedalsMixIn::getPedalStyle() {
    if (!b->hasAttribute("pedal.style")) {
        return NULL;
    }
    return b->getAttribute("pedal.style");
};

void mei::PianopedalsMixIn::setPedalStyle(std::string _pedalstyle) {
    MeiAttribute *a = new MeiAttribute("pedal.style", _pedalstyle);
    b->addAttribute(a);
};

bool mei::PianopedalsMixIn::hasPedalStyle() {
    return b->hasAttribute("pedal.style");
};

void mei::PianopedalsMixIn::removePedalStyle() {
    b->removeAttribute("pedal.style");
};

/* include <pedal.stylemixin> */
mei::RehearsalMixIn::RehearsalMixIn(MeiElement *b) {
    this->b = b;
};

mei::RehearsalMixIn::~RehearsalMixIn() {}
MeiAttribute* mei::RehearsalMixIn::getRehEnclose() {
    if (!b->hasAttribute("reh.enclose")) {
        return NULL;
    }
    return b->getAttribute("reh.enclose");
};

void mei::RehearsalMixIn::setRehEnclose(std::string _rehenclose) {
    MeiAttribute *a = new MeiAttribute("reh.enclose", _rehenclose);
    b->addAttribute(a);
};

bool mei::RehearsalMixIn::hasRehEnclose() {
    return b->hasAttribute("reh.enclose");
};

void mei::RehearsalMixIn::removeRehEnclose() {
    b->removeAttribute("reh.enclose");
};

/* include <reh.enclosemixin> */
mei::ScoreDefVisCmnMixIn::ScoreDefVisCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoreDefVisCmnMixIn::~ScoreDefVisCmnMixIn() {}
MeiAttribute* mei::ScoreDefVisCmnMixIn::getGridShow() {
    if (!b->hasAttribute("grid.show")) {
        return NULL;
    }
    return b->getAttribute("grid.show");
};

void mei::ScoreDefVisCmnMixIn::setGridShow(std::string _gridshow) {
    MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
    b->addAttribute(a);
};

bool mei::ScoreDefVisCmnMixIn::hasGridShow() {
    return b->hasAttribute("grid.show");
};

void mei::ScoreDefVisCmnMixIn::removeGridShow() {
    b->removeAttribute("grid.show");
};

/* include <grid.showmixin> */
mei::SlurrendMixIn::SlurrendMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlurrendMixIn::~SlurrendMixIn() {}
MeiAttribute* mei::SlurrendMixIn::getSlurLform() {
    if (!b->hasAttribute("slur.lform")) {
        return NULL;
    }
    return b->getAttribute("slur.lform");
};

void mei::SlurrendMixIn::setSlurLform(std::string _slurlform) {
    MeiAttribute *a = new MeiAttribute("slur.lform", _slurlform);
    b->addAttribute(a);
};

bool mei::SlurrendMixIn::hasSlurLform() {
    return b->hasAttribute("slur.lform");
};

void mei::SlurrendMixIn::removeSlurLform() {
    b->removeAttribute("slur.lform");
};
MeiAttribute* mei::SlurrendMixIn::getSlurLwidth() {
    if (!b->hasAttribute("slur.lwidth")) {
        return NULL;
    }
    return b->getAttribute("slur.lwidth");
};

void mei::SlurrendMixIn::setSlurLwidth(std::string _slurlwidth) {
    MeiAttribute *a = new MeiAttribute("slur.lwidth", _slurlwidth);
    b->addAttribute(a);
};

bool mei::SlurrendMixIn::hasSlurLwidth() {
    return b->hasAttribute("slur.lwidth");
};

void mei::SlurrendMixIn::removeSlurLwidth() {
    b->removeAttribute("slur.lwidth");
};

/* include <slur.lwidthmixin> */
mei::StemsCmnMixIn::StemsCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::StemsCmnMixIn::~StemsCmnMixIn() {}
MeiAttribute* mei::StemsCmnMixIn::getStemWith() {
    if (!b->hasAttribute("stem.with")) {
        return NULL;
    }
    return b->getAttribute("stem.with");
};

void mei::StemsCmnMixIn::setStemWith(std::string _stemwith) {
    MeiAttribute *a = new MeiAttribute("stem.with", _stemwith);
    b->addAttribute(a);
};

bool mei::StemsCmnMixIn::hasStemWith() {
    return b->hasAttribute("stem.with");
};

void mei::StemsCmnMixIn::removeStemWith() {
    b->removeAttribute("stem.with");
};

/* include <stem.withmixin> */
mei::TierendMixIn::TierendMixIn(MeiElement *b) {
    this->b = b;
};

mei::TierendMixIn::~TierendMixIn() {}
MeiAttribute* mei::TierendMixIn::getTieLform() {
    if (!b->hasAttribute("tie.lform")) {
        return NULL;
    }
    return b->getAttribute("tie.lform");
};

void mei::TierendMixIn::setTieLform(std::string _tielform) {
    MeiAttribute *a = new MeiAttribute("tie.lform", _tielform);
    b->addAttribute(a);
};

bool mei::TierendMixIn::hasTieLform() {
    return b->hasAttribute("tie.lform");
};

void mei::TierendMixIn::removeTieLform() {
    b->removeAttribute("tie.lform");
};
MeiAttribute* mei::TierendMixIn::getTieLwidth() {
    if (!b->hasAttribute("tie.lwidth")) {
        return NULL;
    }
    return b->getAttribute("tie.lwidth");
};

void mei::TierendMixIn::setTieLwidth(std::string _tielwidth) {
    MeiAttribute *a = new MeiAttribute("tie.lwidth", _tielwidth);
    b->addAttribute(a);
};

bool mei::TierendMixIn::hasTieLwidth() {
    return b->hasAttribute("tie.lwidth");
};

void mei::TierendMixIn::removeTieLwidth() {
    b->removeAttribute("tie.lwidth");
};

/* include <tie.lwidthmixin> */
mei::TremmeasuredMixIn::TremmeasuredMixIn(MeiElement *b) {
    this->b = b;
};

mei::TremmeasuredMixIn::~TremmeasuredMixIn() {}
MeiAttribute* mei::TremmeasuredMixIn::getMeasperf() {
    if (!b->hasAttribute("measperf")) {
        return NULL;
    }
    return b->getAttribute("measperf");
};

void mei::TremmeasuredMixIn::setMeasperf(std::string _measperf) {
    MeiAttribute *a = new MeiAttribute("measperf", _measperf);
    b->addAttribute(a);
};

bool mei::TremmeasuredMixIn::hasMeasperf() {
    return b->hasAttribute("measperf");
};

void mei::TremmeasuredMixIn::removeMeasperf() {
    b->removeAttribute("measperf");
};

/* include <measperfmixin> */
mei::TupletVisMixIn::TupletVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::TupletVisMixIn::~TupletVisMixIn() {}
MeiAttribute* mei::TupletVisMixIn::getBracketPlace() {
    if (!b->hasAttribute("bracket.place")) {
        return NULL;
    }
    return b->getAttribute("bracket.place");
};

void mei::TupletVisMixIn::setBracketPlace(std::string _bracketplace) {
    MeiAttribute *a = new MeiAttribute("bracket.place", _bracketplace);
    b->addAttribute(a);
};

bool mei::TupletVisMixIn::hasBracketPlace() {
    return b->hasAttribute("bracket.place");
};

void mei::TupletVisMixIn::removeBracketPlace() {
    b->removeAttribute("bracket.place");
};
MeiAttribute* mei::TupletVisMixIn::getBracketVisible() {
    if (!b->hasAttribute("bracket.visible")) {
        return NULL;
    }
    return b->getAttribute("bracket.visible");
};

void mei::TupletVisMixIn::setBracketVisible(std::string _bracketvisible) {
    MeiAttribute *a = new MeiAttribute("bracket.visible", _bracketvisible);
    b->addAttribute(a);
};

bool mei::TupletVisMixIn::hasBracketVisible() {
    return b->hasAttribute("bracket.visible");
};

void mei::TupletVisMixIn::removeBracketVisible() {
    b->removeAttribute("bracket.visible");
};
MeiAttribute* mei::TupletVisMixIn::getDurVisible() {
    if (!b->hasAttribute("dur.visible")) {
        return NULL;
    }
    return b->getAttribute("dur.visible");
};

void mei::TupletVisMixIn::setDurVisible(std::string _durvisible) {
    MeiAttribute *a = new MeiAttribute("dur.visible", _durvisible);
    b->addAttribute(a);
};

bool mei::TupletVisMixIn::hasDurVisible() {
    return b->hasAttribute("dur.visible");
};

void mei::TupletVisMixIn::removeDurVisible() {
    b->removeAttribute("dur.visible");
};
MeiAttribute* mei::TupletVisMixIn::getNumFormat() {
    if (!b->hasAttribute("num.format")) {
        return NULL;
    }
    return b->getAttribute("num.format");
};

void mei::TupletVisMixIn::setNumFormat(std::string _numformat) {
    MeiAttribute *a = new MeiAttribute("num.format", _numformat);
    b->addAttribute(a);
};

bool mei::TupletVisMixIn::hasNumFormat() {
    return b->hasAttribute("num.format");
};

void mei::TupletVisMixIn::removeNumFormat() {
    b->removeAttribute("num.format");
};

/* include <num.formatmixin> */


