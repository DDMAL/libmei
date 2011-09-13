#include "cmnmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::ArpegLogMixIn::ArpegLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArpegLogMixIn::~ArpegLogMixIn() {}
MeiAttribute* mei::ArpegLogMixIn::getOrder() {
    if (!b->hasAttribute("order")) {
        throw AttributeNotFoundException("order");
    }
    return b->getAttribute("order");
};

void mei::ArpegLogMixIn::setOrder(std::string _order) {
    if (!b->hasAttribute("order")) {
        MeiAttribute *a = new MeiAttribute("order", _order);
        b->addAttribute(a);
    }
};

bool mei::ArpegLogMixIn::hasOrder() {
    return b->hasAttribute("order");
};

void mei::ArpegLogMixIn::removeOrder() {
    b->removeAttribute("order");
};

mei::ArpegVisMixIn::ArpegVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArpegVisMixIn::~ArpegVisMixIn() {}
MeiAttribute* mei::ArpegVisMixIn::getArrow() {
    if (!b->hasAttribute("arrow")) {
        throw AttributeNotFoundException("arrow");
    }
    return b->getAttribute("arrow");
};

void mei::ArpegVisMixIn::setArrow(std::string _arrow) {
    if (!b->hasAttribute("arrow")) {
        MeiAttribute *a = new MeiAttribute("arrow", _arrow);
        b->addAttribute(a);
    }
};

bool mei::ArpegVisMixIn::hasArrow() {
    return b->hasAttribute("arrow");
};

void mei::ArpegVisMixIn::removeArrow() {
    b->removeAttribute("arrow");
};

mei::BtremLogMixIn::BtremLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BtremLogMixIn::~BtremLogMixIn() {}
MeiAttribute* mei::BtremLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::BtremLogMixIn::setForm(std::string _form) {
    if (!b->hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->addAttribute(a);
    }
};

bool mei::BtremLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::BtremLogMixIn::removeForm() {
    b->removeAttribute("form");
};

mei::BeamedMixIn::BeamedMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamedMixIn::~BeamedMixIn() {}
MeiAttribute* mei::BeamedMixIn::getBeam() {
    if (!b->hasAttribute("beam")) {
        throw AttributeNotFoundException("beam");
    }
    return b->getAttribute("beam");
};

void mei::BeamedMixIn::setBeam(std::string _beam) {
    if (!b->hasAttribute("beam")) {
        MeiAttribute *a = new MeiAttribute("beam", _beam);
        b->addAttribute(a);
    }
};

bool mei::BeamedMixIn::hasBeam() {
    return b->hasAttribute("beam");
};

void mei::BeamedMixIn::removeBeam() {
    b->removeAttribute("beam");
};

mei::BeamedwithMixIn::BeamedwithMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamedwithMixIn::~BeamedwithMixIn() {}
MeiAttribute* mei::BeamedwithMixIn::getBeamWith() {
    if (!b->hasAttribute("beam.with")) {
        throw AttributeNotFoundException("beam.with");
    }
    return b->getAttribute("beam.with");
};

void mei::BeamedwithMixIn::setBeamWith(std::string _beamwith) {
    if (!b->hasAttribute("beam.with")) {
        MeiAttribute *a = new MeiAttribute("beam.with", _beamwith);
        b->addAttribute(a);
    }
};

bool mei::BeamedwithMixIn::hasBeamWith() {
    return b->hasAttribute("beam.with");
};

void mei::BeamedwithMixIn::removeBeamWith() {
    b->removeAttribute("beam.with");
};

mei::BeamingLogMixIn::BeamingLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamingLogMixIn::~BeamingLogMixIn() {}
MeiAttribute* mei::BeamingLogMixIn::getBeamGroup() {
    if (!b->hasAttribute("beam.group")) {
        throw AttributeNotFoundException("beam.group");
    }
    return b->getAttribute("beam.group");
};

void mei::BeamingLogMixIn::setBeamGroup(std::string _beamgroup) {
    if (!b->hasAttribute("beam.group")) {
        MeiAttribute *a = new MeiAttribute("beam.group", _beamgroup);
        b->addAttribute(a);
    }
};

bool mei::BeamingLogMixIn::hasBeamGroup() {
    return b->hasAttribute("beam.group");
};

void mei::BeamingLogMixIn::removeBeamGroup() {
    b->removeAttribute("beam.group");
};
MeiAttribute* mei::BeamingLogMixIn::getBeamRests() {
    if (!b->hasAttribute("beam.rests")) {
        throw AttributeNotFoundException("beam.rests");
    }
    return b->getAttribute("beam.rests");
};

void mei::BeamingLogMixIn::setBeamRests(std::string _beamrests) {
    if (!b->hasAttribute("beam.rests")) {
        MeiAttribute *a = new MeiAttribute("beam.rests", _beamrests);
        b->addAttribute(a);
    }
};

bool mei::BeamingLogMixIn::hasBeamRests() {
    return b->hasAttribute("beam.rests");
};

void mei::BeamingLogMixIn::removeBeamRests() {
    b->removeAttribute("beam.rests");
};

mei::BeamrendMixIn::BeamrendMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamrendMixIn::~BeamrendMixIn() {}
MeiAttribute* mei::BeamrendMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::BeamrendMixIn::setRend(std::string _rend) {
    if (!b->hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->addAttribute(a);
    }
};

bool mei::BeamrendMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::BeamrendMixIn::removeRend() {
    b->removeAttribute("rend");
};
MeiAttribute* mei::BeamrendMixIn::getSlope() {
    if (!b->hasAttribute("slope")) {
        throw AttributeNotFoundException("slope");
    }
    return b->getAttribute("slope");
};

void mei::BeamrendMixIn::setSlope(std::string _slope) {
    if (!b->hasAttribute("slope")) {
        MeiAttribute *a = new MeiAttribute("slope", _slope);
        b->addAttribute(a);
    }
};

bool mei::BeamrendMixIn::hasSlope() {
    return b->hasAttribute("slope");
};

void mei::BeamrendMixIn::removeSlope() {
    b->removeAttribute("slope");
};

mei::BeamsecondaryMixIn::BeamsecondaryMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamsecondaryMixIn::~BeamsecondaryMixIn() {}
MeiAttribute* mei::BeamsecondaryMixIn::getBreaksec() {
    if (!b->hasAttribute("breaksec")) {
        throw AttributeNotFoundException("breaksec");
    }
    return b->getAttribute("breaksec");
};

void mei::BeamsecondaryMixIn::setBreaksec(std::string _breaksec) {
    if (!b->hasAttribute("breaksec")) {
        MeiAttribute *a = new MeiAttribute("breaksec", _breaksec);
        b->addAttribute(a);
    }
};

bool mei::BeamsecondaryMixIn::hasBreaksec() {
    return b->hasAttribute("breaksec");
};

void mei::BeamsecondaryMixIn::removeBreaksec() {
    b->removeAttribute("breaksec");
};

mei::BeatrptVisMixIn::BeatrptVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeatrptVisMixIn::~BeatrptVisMixIn() {}
MeiAttribute* mei::BeatrptVisMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::BeatrptVisMixIn::setRend(std::string _rend) {
    if (!b->hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->addAttribute(a);
    }
};

bool mei::BeatrptVisMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::BeatrptVisMixIn::removeRend() {
    b->removeAttribute("rend");
};

mei::BendGesMixIn::BendGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::BendGesMixIn::~BendGesMixIn() {}
MeiAttribute* mei::BendGesMixIn::getAmount() {
    if (!b->hasAttribute("amount")) {
        throw AttributeNotFoundException("amount");
    }
    return b->getAttribute("amount");
};

void mei::BendGesMixIn::setAmount(std::string _amount) {
    if (!b->hasAttribute("amount")) {
        MeiAttribute *a = new MeiAttribute("amount", _amount);
        b->addAttribute(a);
    }
};

bool mei::BendGesMixIn::hasAmount() {
    return b->hasAttribute("amount");
};

void mei::BendGesMixIn::removeAmount() {
    b->removeAttribute("amount");
};

mei::CutoutMixIn::CutoutMixIn(MeiElement *b) {
    this->b = b;
};

mei::CutoutMixIn::~CutoutMixIn() {}
MeiAttribute* mei::CutoutMixIn::getCutout() {
    if (!b->hasAttribute("cutout")) {
        throw AttributeNotFoundException("cutout");
    }
    return b->getAttribute("cutout");
};

void mei::CutoutMixIn::setCutout(std::string _cutout) {
    if (!b->hasAttribute("cutout")) {
        MeiAttribute *a = new MeiAttribute("cutout", _cutout);
        b->addAttribute(a);
    }
};

bool mei::CutoutMixIn::hasCutout() {
    return b->hasAttribute("cutout");
};

void mei::CutoutMixIn::removeCutout() {
    b->removeAttribute("cutout");
};

mei::ExpandableMixIn::ExpandableMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExpandableMixIn::~ExpandableMixIn() {}
MeiAttribute* mei::ExpandableMixIn::getExpand() {
    if (!b->hasAttribute("expand")) {
        throw AttributeNotFoundException("expand");
    }
    return b->getAttribute("expand");
};

void mei::ExpandableMixIn::setExpand(std::string _expand) {
    if (!b->hasAttribute("expand")) {
        MeiAttribute *a = new MeiAttribute("expand", _expand);
        b->addAttribute(a);
    }
};

bool mei::ExpandableMixIn::hasExpand() {
    return b->hasAttribute("expand");
};

void mei::ExpandableMixIn::removeExpand() {
    b->removeAttribute("expand");
};

mei::FtremGesMixIn::FtremGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::FtremGesMixIn::~FtremGesMixIn() {}
MeiAttribute* mei::FtremGesMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::FtremGesMixIn::setForm(std::string _form) {
    if (!b->hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->addAttribute(a);
    }
};

bool mei::FtremGesMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::FtremGesMixIn::removeForm() {
    b->removeAttribute("form");
};

mei::FermataVisMixIn::FermataVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::FermataVisMixIn::~FermataVisMixIn() {}
MeiAttribute* mei::FermataVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::FermataVisMixIn::setForm(std::string _form) {
    if (!b->hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->addAttribute(a);
    }
};

bool mei::FermataVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::FermataVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::FermataVisMixIn::getShape() {
    if (!b->hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->getAttribute("shape");
};

void mei::FermataVisMixIn::setShape(std::string _shape) {
    if (!b->hasAttribute("shape")) {
        MeiAttribute *a = new MeiAttribute("shape", _shape);
        b->addAttribute(a);
    }
};

bool mei::FermataVisMixIn::hasShape() {
    return b->hasAttribute("shape");
};

void mei::FermataVisMixIn::removeShape() {
    b->removeAttribute("shape");
};

mei::GlissVisMixIn::GlissVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::GlissVisMixIn::~GlissVisMixIn() {}
MeiAttribute* mei::GlissVisMixIn::getText() {
    if (!b->hasAttribute("text")) {
        throw AttributeNotFoundException("text");
    }
    return b->getAttribute("text");
};

void mei::GlissVisMixIn::setText(std::string _text) {
    if (!b->hasAttribute("text")) {
        MeiAttribute *a = new MeiAttribute("text", _text);
        b->addAttribute(a);
    }
};

bool mei::GlissVisMixIn::hasText() {
    return b->hasAttribute("text");
};

void mei::GlissVisMixIn::removeText() {
    b->removeAttribute("text");
};

mei::GracedMixIn::GracedMixIn(MeiElement *b) {
    this->b = b;
};

mei::GracedMixIn::~GracedMixIn() {}
MeiAttribute* mei::GracedMixIn::getGrace() {
    if (!b->hasAttribute("grace")) {
        throw AttributeNotFoundException("grace");
    }
    return b->getAttribute("grace");
};

void mei::GracedMixIn::setGrace(std::string _grace) {
    if (!b->hasAttribute("grace")) {
        MeiAttribute *a = new MeiAttribute("grace", _grace);
        b->addAttribute(a);
    }
};

bool mei::GracedMixIn::hasGrace() {
    return b->hasAttribute("grace");
};

void mei::GracedMixIn::removeGrace() {
    b->removeAttribute("grace");
};
MeiAttribute* mei::GracedMixIn::getGraceTime() {
    if (!b->hasAttribute("grace.time")) {
        throw AttributeNotFoundException("grace.time");
    }
    return b->getAttribute("grace.time");
};

void mei::GracedMixIn::setGraceTime(std::string _gracetime) {
    if (!b->hasAttribute("grace.time")) {
        MeiAttribute *a = new MeiAttribute("grace.time", _gracetime);
        b->addAttribute(a);
    }
};

bool mei::GracedMixIn::hasGraceTime() {
    return b->hasAttribute("grace.time");
};

void mei::GracedMixIn::removeGraceTime() {
    b->removeAttribute("grace.time");
};

mei::HairpinLogMixIn::HairpinLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::HairpinLogMixIn::~HairpinLogMixIn() {}
MeiAttribute* mei::HairpinLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::HairpinLogMixIn::setForm(std::string _form) {
    if (!b->hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->addAttribute(a);
    }
};

bool mei::HairpinLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::HairpinLogMixIn::removeForm() {
    b->removeAttribute("form");
};

mei::HairpinVisMixIn::HairpinVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::HairpinVisMixIn::~HairpinVisMixIn() {}
MeiAttribute* mei::HairpinVisMixIn::getOpening() {
    if (!b->hasAttribute("opening")) {
        throw AttributeNotFoundException("opening");
    }
    return b->getAttribute("opening");
};

void mei::HairpinVisMixIn::setOpening(std::string _opening) {
    if (!b->hasAttribute("opening")) {
        MeiAttribute *a = new MeiAttribute("opening", _opening);
        b->addAttribute(a);
    }
};

bool mei::HairpinVisMixIn::hasOpening() {
    return b->hasAttribute("opening");
};

void mei::HairpinVisMixIn::removeOpening() {
    b->removeAttribute("opening");
};

mei::HarppedalLogMixIn::HarppedalLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarppedalLogMixIn::~HarppedalLogMixIn() {}
MeiAttribute* mei::HarppedalLogMixIn::getC() {
    if (!b->hasAttribute("c")) {
        throw AttributeNotFoundException("c");
    }
    return b->getAttribute("c");
};

void mei::HarppedalLogMixIn::setC(std::string _c) {
    if (!b->hasAttribute("c")) {
        MeiAttribute *a = new MeiAttribute("c", _c);
        b->addAttribute(a);
    }
};

bool mei::HarppedalLogMixIn::hasC() {
    return b->hasAttribute("c");
};

void mei::HarppedalLogMixIn::removeC() {
    b->removeAttribute("c");
};
MeiAttribute* mei::HarppedalLogMixIn::getD() {
    if (!b->hasAttribute("d")) {
        throw AttributeNotFoundException("d");
    }
    return b->getAttribute("d");
};

void mei::HarppedalLogMixIn::setD(std::string _d) {
    if (!b->hasAttribute("d")) {
        MeiAttribute *a = new MeiAttribute("d", _d);
        b->addAttribute(a);
    }
};

bool mei::HarppedalLogMixIn::hasD() {
    return b->hasAttribute("d");
};

void mei::HarppedalLogMixIn::removeD() {
    b->removeAttribute("d");
};
MeiAttribute* mei::HarppedalLogMixIn::getE() {
    if (!b->hasAttribute("e")) {
        throw AttributeNotFoundException("e");
    }
    return b->getAttribute("e");
};

void mei::HarppedalLogMixIn::setE(std::string _e) {
    if (!b->hasAttribute("e")) {
        MeiAttribute *a = new MeiAttribute("e", _e);
        b->addAttribute(a);
    }
};

bool mei::HarppedalLogMixIn::hasE() {
    return b->hasAttribute("e");
};

void mei::HarppedalLogMixIn::removeE() {
    b->removeAttribute("e");
};
MeiAttribute* mei::HarppedalLogMixIn::getF() {
    if (!b->hasAttribute("f")) {
        throw AttributeNotFoundException("f");
    }
    return b->getAttribute("f");
};

void mei::HarppedalLogMixIn::setF(std::string _f) {
    if (!b->hasAttribute("f")) {
        MeiAttribute *a = new MeiAttribute("f", _f);
        b->addAttribute(a);
    }
};

bool mei::HarppedalLogMixIn::hasF() {
    return b->hasAttribute("f");
};

void mei::HarppedalLogMixIn::removeF() {
    b->removeAttribute("f");
};
MeiAttribute* mei::HarppedalLogMixIn::getG() {
    if (!b->hasAttribute("g")) {
        throw AttributeNotFoundException("g");
    }
    return b->getAttribute("g");
};

void mei::HarppedalLogMixIn::setG(std::string _g) {
    if (!b->hasAttribute("g")) {
        MeiAttribute *a = new MeiAttribute("g", _g);
        b->addAttribute(a);
    }
};

bool mei::HarppedalLogMixIn::hasG() {
    return b->hasAttribute("g");
};

void mei::HarppedalLogMixIn::removeG() {
    b->removeAttribute("g");
};
MeiAttribute* mei::HarppedalLogMixIn::getA() {
    if (!b->hasAttribute("a")) {
        throw AttributeNotFoundException("a");
    }
    return b->getAttribute("a");
};

void mei::HarppedalLogMixIn::setA(std::string _a) {
    if (!b->hasAttribute("a")) {
        MeiAttribute *a = new MeiAttribute("a", _a);
        b->addAttribute(a);
    }
};

bool mei::HarppedalLogMixIn::hasA() {
    return b->hasAttribute("a");
};

void mei::HarppedalLogMixIn::removeA() {
    b->removeAttribute("a");
};
MeiAttribute* mei::HarppedalLogMixIn::getB() {
    if (!b->hasAttribute("b")) {
        throw AttributeNotFoundException("b");
    }
    return b->getAttribute("b");
};

void mei::HarppedalLogMixIn::setB(std::string _b) {
    if (!b->hasAttribute("b")) {
        MeiAttribute *a = new MeiAttribute("b", _b);
        b->addAttribute(a);
    }
};

bool mei::HarppedalLogMixIn::hasB() {
    return b->hasAttribute("b");
};

void mei::HarppedalLogMixIn::removeB() {
    b->removeAttribute("b");
};

mei::LvpresentMixIn::LvpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::LvpresentMixIn::~LvpresentMixIn() {}
MeiAttribute* mei::LvpresentMixIn::getLv() {
    if (!b->hasAttribute("lv")) {
        throw AttributeNotFoundException("lv");
    }
    return b->getAttribute("lv");
};

void mei::LvpresentMixIn::setLv(std::string _lv) {
    if (!b->hasAttribute("lv")) {
        MeiAttribute *a = new MeiAttribute("lv", _lv);
        b->addAttribute(a);
    }
};

bool mei::LvpresentMixIn::hasLv() {
    return b->hasAttribute("lv");
};

void mei::LvpresentMixIn::removeLv() {
    b->removeAttribute("lv");
};

mei::MultirestVisMixIn::MultirestVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MultirestVisMixIn::~MultirestVisMixIn() {}
MeiAttribute* mei::MultirestVisMixIn::getBlock() {
    if (!b->hasAttribute("block")) {
        throw AttributeNotFoundException("block");
    }
    return b->getAttribute("block");
};

void mei::MultirestVisMixIn::setBlock(std::string _block) {
    if (!b->hasAttribute("block")) {
        MeiAttribute *a = new MeiAttribute("block", _block);
        b->addAttribute(a);
    }
};

bool mei::MultirestVisMixIn::hasBlock() {
    return b->hasAttribute("block");
};

void mei::MultirestVisMixIn::removeBlock() {
    b->removeAttribute("block");
};

mei::NoteGesCmnMixIn::NoteGesCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteGesCmnMixIn::~NoteGesCmnMixIn() {}
MeiAttribute* mei::NoteGesCmnMixIn::getGliss() {
    if (!b->hasAttribute("gliss")) {
        throw AttributeNotFoundException("gliss");
    }
    return b->getAttribute("gliss");
};

void mei::NoteGesCmnMixIn::setGliss(std::string _gliss) {
    if (!b->hasAttribute("gliss")) {
        MeiAttribute *a = new MeiAttribute("gliss", _gliss);
        b->addAttribute(a);
    }
};

bool mei::NoteGesCmnMixIn::hasGliss() {
    return b->hasAttribute("gliss");
};

void mei::NoteGesCmnMixIn::removeGliss() {
    b->removeAttribute("gliss");
};

mei::NumberedMixIn::NumberedMixIn(MeiElement *b) {
    this->b = b;
};

mei::NumberedMixIn::~NumberedMixIn() {}
MeiAttribute* mei::NumberedMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->getAttribute("num");
};

void mei::NumberedMixIn::setNum(std::string _num) {
    if (!b->hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        b->addAttribute(a);
    }
};

bool mei::NumberedMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::NumberedMixIn::removeNum() {
    b->removeAttribute("num");
};

mei::NumberplacementMixIn::NumberplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::NumberplacementMixIn::~NumberplacementMixIn() {}
MeiAttribute* mei::NumberplacementMixIn::getNumPlace() {
    if (!b->hasAttribute("num.place")) {
        throw AttributeNotFoundException("num.place");
    }
    return b->getAttribute("num.place");
};

void mei::NumberplacementMixIn::setNumPlace(std::string _numplace) {
    if (!b->hasAttribute("num.place")) {
        MeiAttribute *a = new MeiAttribute("num.place", _numplace);
        b->addAttribute(a);
    }
};

bool mei::NumberplacementMixIn::hasNumPlace() {
    return b->hasAttribute("num.place");
};

void mei::NumberplacementMixIn::removeNumPlace() {
    b->removeAttribute("num.place");
};
MeiAttribute* mei::NumberplacementMixIn::getNumVisible() {
    if (!b->hasAttribute("num.visible")) {
        throw AttributeNotFoundException("num.visible");
    }
    return b->getAttribute("num.visible");
};

void mei::NumberplacementMixIn::setNumVisible(std::string _numvisible) {
    if (!b->hasAttribute("num.visible")) {
        MeiAttribute *a = new MeiAttribute("num.visible", _numvisible);
        b->addAttribute(a);
    }
};

bool mei::NumberplacementMixIn::hasNumVisible() {
    return b->hasAttribute("num.visible");
};

void mei::NumberplacementMixIn::removeNumVisible() {
    b->removeAttribute("num.visible");
};

mei::OctaveLogMixIn::OctaveLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctaveLogMixIn::~OctaveLogMixIn() {}
MeiAttribute* mei::OctaveLogMixIn::getColl() {
    if (!b->hasAttribute("coll")) {
        throw AttributeNotFoundException("coll");
    }
    return b->getAttribute("coll");
};

void mei::OctaveLogMixIn::setColl(std::string _coll) {
    if (!b->hasAttribute("coll")) {
        MeiAttribute *a = new MeiAttribute("coll", _coll);
        b->addAttribute(a);
    }
};

bool mei::OctaveLogMixIn::hasColl() {
    return b->hasAttribute("coll");
};

void mei::OctaveLogMixIn::removeColl() {
    b->removeAttribute("coll");
};

mei::PedalLogMixIn::PedalLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::PedalLogMixIn::~PedalLogMixIn() {}
MeiAttribute* mei::PedalLogMixIn::getDir() {
    if (!b->hasAttribute("dir")) {
        throw AttributeNotFoundException("dir");
    }
    return b->getAttribute("dir");
};

void mei::PedalLogMixIn::setDir(std::string _dir) {
    if (!b->hasAttribute("dir")) {
        MeiAttribute *a = new MeiAttribute("dir", _dir);
        b->addAttribute(a);
    }
};

bool mei::PedalLogMixIn::hasDir() {
    return b->hasAttribute("dir");
};

void mei::PedalLogMixIn::removeDir() {
    b->removeAttribute("dir");
};

mei::PedalVisMixIn::PedalVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::PedalVisMixIn::~PedalVisMixIn() {}
MeiAttribute* mei::PedalVisMixIn::getStyle() {
    if (!b->hasAttribute("style")) {
        throw AttributeNotFoundException("style");
    }
    return b->getAttribute("style");
};

void mei::PedalVisMixIn::setStyle(std::string _style) {
    if (!b->hasAttribute("style")) {
        MeiAttribute *a = new MeiAttribute("style", _style);
        b->addAttribute(a);
    }
};

bool mei::PedalVisMixIn::hasStyle() {
    return b->hasAttribute("style");
};

void mei::PedalVisMixIn::removeStyle() {
    b->removeAttribute("style");
};

mei::PianopedalsMixIn::PianopedalsMixIn(MeiElement *b) {
    this->b = b;
};

mei::PianopedalsMixIn::~PianopedalsMixIn() {}
MeiAttribute* mei::PianopedalsMixIn::getPedalStyle() {
    if (!b->hasAttribute("pedal.style")) {
        throw AttributeNotFoundException("pedal.style");
    }
    return b->getAttribute("pedal.style");
};

void mei::PianopedalsMixIn::setPedalStyle(std::string _pedalstyle) {
    if (!b->hasAttribute("pedal.style")) {
        MeiAttribute *a = new MeiAttribute("pedal.style", _pedalstyle);
        b->addAttribute(a);
    }
};

bool mei::PianopedalsMixIn::hasPedalStyle() {
    return b->hasAttribute("pedal.style");
};

void mei::PianopedalsMixIn::removePedalStyle() {
    b->removeAttribute("pedal.style");
};

mei::RehearsalMixIn::RehearsalMixIn(MeiElement *b) {
    this->b = b;
};

mei::RehearsalMixIn::~RehearsalMixIn() {}
MeiAttribute* mei::RehearsalMixIn::getRehEnclose() {
    if (!b->hasAttribute("reh.enclose")) {
        throw AttributeNotFoundException("reh.enclose");
    }
    return b->getAttribute("reh.enclose");
};

void mei::RehearsalMixIn::setRehEnclose(std::string _rehenclose) {
    if (!b->hasAttribute("reh.enclose")) {
        MeiAttribute *a = new MeiAttribute("reh.enclose", _rehenclose);
        b->addAttribute(a);
    }
};

bool mei::RehearsalMixIn::hasRehEnclose() {
    return b->hasAttribute("reh.enclose");
};

void mei::RehearsalMixIn::removeRehEnclose() {
    b->removeAttribute("reh.enclose");
};

mei::ScoredefVisCmnMixIn::ScoredefVisCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoredefVisCmnMixIn::~ScoredefVisCmnMixIn() {}
MeiAttribute* mei::ScoredefVisCmnMixIn::getGridShow() {
    if (!b->hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return b->getAttribute("grid.show");
};

void mei::ScoredefVisCmnMixIn::setGridShow(std::string _gridshow) {
    if (!b->hasAttribute("grid.show")) {
        MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisCmnMixIn::hasGridShow() {
    return b->hasAttribute("grid.show");
};

void mei::ScoredefVisCmnMixIn::removeGridShow() {
    b->removeAttribute("grid.show");
};

mei::SlurrendMixIn::SlurrendMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlurrendMixIn::~SlurrendMixIn() {}
MeiAttribute* mei::SlurrendMixIn::getSlurRend() {
    if (!b->hasAttribute("slur.rend")) {
        throw AttributeNotFoundException("slur.rend");
    }
    return b->getAttribute("slur.rend");
};

void mei::SlurrendMixIn::setSlurRend(std::string _slurrend) {
    if (!b->hasAttribute("slur.rend")) {
        MeiAttribute *a = new MeiAttribute("slur.rend", _slurrend);
        b->addAttribute(a);
    }
};

bool mei::SlurrendMixIn::hasSlurRend() {
    return b->hasAttribute("slur.rend");
};

void mei::SlurrendMixIn::removeSlurRend() {
    b->removeAttribute("slur.rend");
};

mei::StemmedCmnMixIn::StemmedCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::StemmedCmnMixIn::~StemmedCmnMixIn() {}
MeiAttribute* mei::StemmedCmnMixIn::getStemMod() {
    if (!b->hasAttribute("stem.mod")) {
        throw AttributeNotFoundException("stem.mod");
    }
    return b->getAttribute("stem.mod");
};

void mei::StemmedCmnMixIn::setStemMod(std::string _stemmod) {
    if (!b->hasAttribute("stem.mod")) {
        MeiAttribute *a = new MeiAttribute("stem.mod", _stemmod);
        b->addAttribute(a);
    }
};

bool mei::StemmedCmnMixIn::hasStemMod() {
    return b->hasAttribute("stem.mod");
};

void mei::StemmedCmnMixIn::removeStemMod() {
    b->removeAttribute("stem.mod");
};
MeiAttribute* mei::StemmedCmnMixIn::getStemWith() {
    if (!b->hasAttribute("stem.with")) {
        throw AttributeNotFoundException("stem.with");
    }
    return b->getAttribute("stem.with");
};

void mei::StemmedCmnMixIn::setStemWith(std::string _stemwith) {
    if (!b->hasAttribute("stem.with")) {
        MeiAttribute *a = new MeiAttribute("stem.with", _stemwith);
        b->addAttribute(a);
    }
};

bool mei::StemmedCmnMixIn::hasStemWith() {
    return b->hasAttribute("stem.with");
};

void mei::StemmedCmnMixIn::removeStemWith() {
    b->removeAttribute("stem.with");
};

mei::TierendMixIn::TierendMixIn(MeiElement *b) {
    this->b = b;
};

mei::TierendMixIn::~TierendMixIn() {}
MeiAttribute* mei::TierendMixIn::getTieRend() {
    if (!b->hasAttribute("tie.rend")) {
        throw AttributeNotFoundException("tie.rend");
    }
    return b->getAttribute("tie.rend");
};

void mei::TierendMixIn::setTieRend(std::string _tierend) {
    if (!b->hasAttribute("tie.rend")) {
        MeiAttribute *a = new MeiAttribute("tie.rend", _tierend);
        b->addAttribute(a);
    }
};

bool mei::TierendMixIn::hasTieRend() {
    return b->hasAttribute("tie.rend");
};

void mei::TierendMixIn::removeTieRend() {
    b->removeAttribute("tie.rend");
};

mei::TupletLogMixIn::TupletLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::TupletLogMixIn::~TupletLogMixIn() {}
MeiAttribute* mei::TupletLogMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::TupletLogMixIn::setDur(std::string _dur) {
    if (!b->hasAttribute("dur")) {
        MeiAttribute *a = new MeiAttribute("dur", _dur);
        b->addAttribute(a);
    }
};

bool mei::TupletLogMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::TupletLogMixIn::removeDur() {
    b->removeAttribute("dur");
};

mei::TupletVisMixIn::TupletVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::TupletVisMixIn::~TupletVisMixIn() {}
MeiAttribute* mei::TupletVisMixIn::getBracketPlace() {
    if (!b->hasAttribute("bracket.place")) {
        throw AttributeNotFoundException("bracket.place");
    }
    return b->getAttribute("bracket.place");
};

void mei::TupletVisMixIn::setBracketPlace(std::string _bracketplace) {
    if (!b->hasAttribute("bracket.place")) {
        MeiAttribute *a = new MeiAttribute("bracket.place", _bracketplace);
        b->addAttribute(a);
    }
};

bool mei::TupletVisMixIn::hasBracketPlace() {
    return b->hasAttribute("bracket.place");
};

void mei::TupletVisMixIn::removeBracketPlace() {
    b->removeAttribute("bracket.place");
};
MeiAttribute* mei::TupletVisMixIn::getBracketVisible() {
    if (!b->hasAttribute("bracket.visible")) {
        throw AttributeNotFoundException("bracket.visible");
    }
    return b->getAttribute("bracket.visible");
};

void mei::TupletVisMixIn::setBracketVisible(std::string _bracketvisible) {
    if (!b->hasAttribute("bracket.visible")) {
        MeiAttribute *a = new MeiAttribute("bracket.visible", _bracketvisible);
        b->addAttribute(a);
    }
};

bool mei::TupletVisMixIn::hasBracketVisible() {
    return b->hasAttribute("bracket.visible");
};

void mei::TupletVisMixIn::removeBracketVisible() {
    b->removeAttribute("bracket.visible");
};
MeiAttribute* mei::TupletVisMixIn::getDurVisible() {
    if (!b->hasAttribute("dur.visible")) {
        throw AttributeNotFoundException("dur.visible");
    }
    return b->getAttribute("dur.visible");
};

void mei::TupletVisMixIn::setDurVisible(std::string _durvisible) {
    if (!b->hasAttribute("dur.visible")) {
        MeiAttribute *a = new MeiAttribute("dur.visible", _durvisible);
        b->addAttribute(a);
    }
};

bool mei::TupletVisMixIn::hasDurVisible() {
    return b->hasAttribute("dur.visible");
};

void mei::TupletVisMixIn::removeDurVisible() {
    b->removeAttribute("dur.visible");
};
MeiAttribute* mei::TupletVisMixIn::getNumFormat() {
    if (!b->hasAttribute("num.format")) {
        throw AttributeNotFoundException("num.format");
    }
    return b->getAttribute("num.format");
};

void mei::TupletVisMixIn::setNumFormat(std::string _numformat) {
    if (!b->hasAttribute("num.format")) {
        MeiAttribute *a = new MeiAttribute("num.format", _numformat);
        b->addAttribute(a);
    }
};

bool mei::TupletVisMixIn::hasNumFormat() {
    return b->hasAttribute("num.format");
};

void mei::TupletVisMixIn::removeNumFormat() {
    b->removeAttribute("num.format");
};

mei::TupletspanLogMixIn::TupletspanLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::TupletspanLogMixIn::~TupletspanLogMixIn() {}
MeiAttribute* mei::TupletspanLogMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::TupletspanLogMixIn::setDur(std::string _dur) {
    if (!b->hasAttribute("dur")) {
        MeiAttribute *a = new MeiAttribute("dur", _dur);
        b->addAttribute(a);
    }
};

bool mei::TupletspanLogMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::TupletspanLogMixIn::removeDur() {
    b->removeAttribute("dur");
};



