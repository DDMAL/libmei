#include "cmnmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_arpegLogMixIn::Mei_arpegLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_arpegLogMixIn::~Mei_arpegLogMixIn() {}
MeiAttribute* mei::Mei_arpegLogMixIn::getOrder() {
    if (!b->hasAttribute("order")) {
        throw AttributeNotFoundException("order");
    }
    return b->getAttribute("order");
};

void mei::Mei_arpegLogMixIn::setOrder(std::string _order) {
    MeiAttribute *a = new MeiAttribute("order", _order);
    b->addAttribute(a);
};

bool mei::Mei_arpegLogMixIn::hasOrder() {
    return b->hasAttribute("order");
};

void mei::Mei_arpegLogMixIn::removeOrder() {
    b->removeAttribute("order");
};

/* include <ordermixin> */
mei::Mei_arpegVisMixIn::Mei_arpegVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_arpegVisMixIn::~Mei_arpegVisMixIn() {}
MeiAttribute* mei::Mei_arpegVisMixIn::getArrow() {
    if (!b->hasAttribute("arrow")) {
        throw AttributeNotFoundException("arrow");
    }
    return b->getAttribute("arrow");
};

void mei::Mei_arpegVisMixIn::setArrow(std::string _arrow) {
    MeiAttribute *a = new MeiAttribute("arrow", _arrow);
    b->addAttribute(a);
};

bool mei::Mei_arpegVisMixIn::hasArrow() {
    return b->hasAttribute("arrow");
};

void mei::Mei_arpegVisMixIn::removeArrow() {
    b->removeAttribute("arrow");
};

/* include <arrowmixin> */
mei::Mei_bTremLogMixIn::Mei_bTremLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_bTremLogMixIn::~Mei_bTremLogMixIn() {}
MeiAttribute* mei::Mei_bTremLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_bTremLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_bTremLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_bTremLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::Mei_beamedMixIn::Mei_beamedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_beamedMixIn::~Mei_beamedMixIn() {}
MeiAttribute* mei::Mei_beamedMixIn::getBeam() {
    if (!b->hasAttribute("beam")) {
        throw AttributeNotFoundException("beam");
    }
    return b->getAttribute("beam");
};

void mei::Mei_beamedMixIn::setBeam(std::string _beam) {
    MeiAttribute *a = new MeiAttribute("beam", _beam);
    b->addAttribute(a);
};

bool mei::Mei_beamedMixIn::hasBeam() {
    return b->hasAttribute("beam");
};

void mei::Mei_beamedMixIn::removeBeam() {
    b->removeAttribute("beam");
};

/* include <beammixin> */
mei::Mei_beamedwithMixIn::Mei_beamedwithMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_beamedwithMixIn::~Mei_beamedwithMixIn() {}
MeiAttribute* mei::Mei_beamedwithMixIn::getBeamWith() {
    if (!b->hasAttribute("beam.with")) {
        throw AttributeNotFoundException("beam.with");
    }
    return b->getAttribute("beam.with");
};

void mei::Mei_beamedwithMixIn::setBeamWith(std::string _beamwith) {
    MeiAttribute *a = new MeiAttribute("beam.with", _beamwith);
    b->addAttribute(a);
};

bool mei::Mei_beamedwithMixIn::hasBeamWith() {
    return b->hasAttribute("beam.with");
};

void mei::Mei_beamedwithMixIn::removeBeamWith() {
    b->removeAttribute("beam.with");
};

/* include <beam.withmixin> */
mei::Mei_beamingLogMixIn::Mei_beamingLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_beamingLogMixIn::~Mei_beamingLogMixIn() {}
MeiAttribute* mei::Mei_beamingLogMixIn::getBeamGroup() {
    if (!b->hasAttribute("beam.group")) {
        throw AttributeNotFoundException("beam.group");
    }
    return b->getAttribute("beam.group");
};

void mei::Mei_beamingLogMixIn::setBeamGroup(std::string _beamgroup) {
    MeiAttribute *a = new MeiAttribute("beam.group", _beamgroup);
    b->addAttribute(a);
};

bool mei::Mei_beamingLogMixIn::hasBeamGroup() {
    return b->hasAttribute("beam.group");
};

void mei::Mei_beamingLogMixIn::removeBeamGroup() {
    b->removeAttribute("beam.group");
};
MeiAttribute* mei::Mei_beamingLogMixIn::getBeamRests() {
    if (!b->hasAttribute("beam.rests")) {
        throw AttributeNotFoundException("beam.rests");
    }
    return b->getAttribute("beam.rests");
};

void mei::Mei_beamingLogMixIn::setBeamRests(std::string _beamrests) {
    MeiAttribute *a = new MeiAttribute("beam.rests", _beamrests);
    b->addAttribute(a);
};

bool mei::Mei_beamingLogMixIn::hasBeamRests() {
    return b->hasAttribute("beam.rests");
};

void mei::Mei_beamingLogMixIn::removeBeamRests() {
    b->removeAttribute("beam.rests");
};

/* include <beam.restsmixin> */
mei::Mei_beamrendMixIn::Mei_beamrendMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_beamrendMixIn::~Mei_beamrendMixIn() {}
MeiAttribute* mei::Mei_beamrendMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::Mei_beamrendMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::Mei_beamrendMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::Mei_beamrendMixIn::removeRend() {
    b->removeAttribute("rend");
};
MeiAttribute* mei::Mei_beamrendMixIn::getSlope() {
    if (!b->hasAttribute("slope")) {
        throw AttributeNotFoundException("slope");
    }
    return b->getAttribute("slope");
};

void mei::Mei_beamrendMixIn::setSlope(std::string _slope) {
    MeiAttribute *a = new MeiAttribute("slope", _slope);
    b->addAttribute(a);
};

bool mei::Mei_beamrendMixIn::hasSlope() {
    return b->hasAttribute("slope");
};

void mei::Mei_beamrendMixIn::removeSlope() {
    b->removeAttribute("slope");
};

/* include <slopemixin> */
mei::Mei_beamsecondaryMixIn::Mei_beamsecondaryMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_beamsecondaryMixIn::~Mei_beamsecondaryMixIn() {}
MeiAttribute* mei::Mei_beamsecondaryMixIn::getBreaksec() {
    if (!b->hasAttribute("breaksec")) {
        throw AttributeNotFoundException("breaksec");
    }
    return b->getAttribute("breaksec");
};

void mei::Mei_beamsecondaryMixIn::setBreaksec(std::string _breaksec) {
    MeiAttribute *a = new MeiAttribute("breaksec", _breaksec);
    b->addAttribute(a);
};

bool mei::Mei_beamsecondaryMixIn::hasBreaksec() {
    return b->hasAttribute("breaksec");
};

void mei::Mei_beamsecondaryMixIn::removeBreaksec() {
    b->removeAttribute("breaksec");
};

/* include <breaksecmixin> */
mei::Mei_beatRptVisMixIn::Mei_beatRptVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_beatRptVisMixIn::~Mei_beatRptVisMixIn() {}
MeiAttribute* mei::Mei_beatRptVisMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::Mei_beatRptVisMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::Mei_beatRptVisMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::Mei_beatRptVisMixIn::removeRend() {
    b->removeAttribute("rend");
};

/* include <rendmixin> */
mei::Mei_bendGesMixIn::Mei_bendGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_bendGesMixIn::~Mei_bendGesMixIn() {}
MeiAttribute* mei::Mei_bendGesMixIn::getAmount() {
    if (!b->hasAttribute("amount")) {
        throw AttributeNotFoundException("amount");
    }
    return b->getAttribute("amount");
};

void mei::Mei_bendGesMixIn::setAmount(std::string _amount) {
    MeiAttribute *a = new MeiAttribute("amount", _amount);
    b->addAttribute(a);
};

bool mei::Mei_bendGesMixIn::hasAmount() {
    return b->hasAttribute("amount");
};

void mei::Mei_bendGesMixIn::removeAmount() {
    b->removeAttribute("amount");
};

/* include <amountmixin> */
mei::Mei_cutoutMixIn::Mei_cutoutMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_cutoutMixIn::~Mei_cutoutMixIn() {}
MeiAttribute* mei::Mei_cutoutMixIn::getCutout() {
    if (!b->hasAttribute("cutout")) {
        throw AttributeNotFoundException("cutout");
    }
    return b->getAttribute("cutout");
};

void mei::Mei_cutoutMixIn::setCutout(std::string _cutout) {
    MeiAttribute *a = new MeiAttribute("cutout", _cutout);
    b->addAttribute(a);
};

bool mei::Mei_cutoutMixIn::hasCutout() {
    return b->hasAttribute("cutout");
};

void mei::Mei_cutoutMixIn::removeCutout() {
    b->removeAttribute("cutout");
};

/* include <cutoutmixin> */
mei::Mei_expandableMixIn::Mei_expandableMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_expandableMixIn::~Mei_expandableMixIn() {}
MeiAttribute* mei::Mei_expandableMixIn::getExpand() {
    if (!b->hasAttribute("expand")) {
        throw AttributeNotFoundException("expand");
    }
    return b->getAttribute("expand");
};

void mei::Mei_expandableMixIn::setExpand(std::string _expand) {
    MeiAttribute *a = new MeiAttribute("expand", _expand);
    b->addAttribute(a);
};

bool mei::Mei_expandableMixIn::hasExpand() {
    return b->hasAttribute("expand");
};

void mei::Mei_expandableMixIn::removeExpand() {
    b->removeAttribute("expand");
};

/* include <expandmixin> */
mei::Mei_fTremLogMixIn::Mei_fTremLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_fTremLogMixIn::~Mei_fTremLogMixIn() {}
MeiAttribute* mei::Mei_fTremLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_fTremLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_fTremLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_fTremLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::Mei_fermataVisMixIn::Mei_fermataVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_fermataVisMixIn::~Mei_fermataVisMixIn() {}
MeiAttribute* mei::Mei_fermataVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_fermataVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_fermataVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_fermataVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::Mei_fermataVisMixIn::getShape() {
    if (!b->hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->getAttribute("shape");
};

void mei::Mei_fermataVisMixIn::setShape(std::string _shape) {
    MeiAttribute *a = new MeiAttribute("shape", _shape);
    b->addAttribute(a);
};

bool mei::Mei_fermataVisMixIn::hasShape() {
    return b->hasAttribute("shape");
};

void mei::Mei_fermataVisMixIn::removeShape() {
    b->removeAttribute("shape");
};

/* include <shapemixin> */
mei::Mei_glissVisMixIn::Mei_glissVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_glissVisMixIn::~Mei_glissVisMixIn() {}
MeiAttribute* mei::Mei_glissVisMixIn::getText() {
    if (!b->hasAttribute("text")) {
        throw AttributeNotFoundException("text");
    }
    return b->getAttribute("text");
};

void mei::Mei_glissVisMixIn::setText(std::string _text) {
    MeiAttribute *a = new MeiAttribute("text", _text);
    b->addAttribute(a);
};

bool mei::Mei_glissVisMixIn::hasText() {
    return b->hasAttribute("text");
};

void mei::Mei_glissVisMixIn::removeText() {
    b->removeAttribute("text");
};

/* include <textmixin> */
mei::Mei_gracedMixIn::Mei_gracedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_gracedMixIn::~Mei_gracedMixIn() {}
MeiAttribute* mei::Mei_gracedMixIn::getGrace() {
    if (!b->hasAttribute("grace")) {
        throw AttributeNotFoundException("grace");
    }
    return b->getAttribute("grace");
};

void mei::Mei_gracedMixIn::setGrace(std::string _grace) {
    MeiAttribute *a = new MeiAttribute("grace", _grace);
    b->addAttribute(a);
};

bool mei::Mei_gracedMixIn::hasGrace() {
    return b->hasAttribute("grace");
};

void mei::Mei_gracedMixIn::removeGrace() {
    b->removeAttribute("grace");
};
MeiAttribute* mei::Mei_gracedMixIn::getGraceTime() {
    if (!b->hasAttribute("grace.time")) {
        throw AttributeNotFoundException("grace.time");
    }
    return b->getAttribute("grace.time");
};

void mei::Mei_gracedMixIn::setGraceTime(std::string _gracetime) {
    MeiAttribute *a = new MeiAttribute("grace.time", _gracetime);
    b->addAttribute(a);
};

bool mei::Mei_gracedMixIn::hasGraceTime() {
    return b->hasAttribute("grace.time");
};

void mei::Mei_gracedMixIn::removeGraceTime() {
    b->removeAttribute("grace.time");
};

/* include <grace.timemixin> */
mei::Mei_hairpinLogMixIn::Mei_hairpinLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_hairpinLogMixIn::~Mei_hairpinLogMixIn() {}
MeiAttribute* mei::Mei_hairpinLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_hairpinLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_hairpinLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_hairpinLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::Mei_hairpinVisMixIn::Mei_hairpinVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_hairpinVisMixIn::~Mei_hairpinVisMixIn() {}
MeiAttribute* mei::Mei_hairpinVisMixIn::getOpening() {
    if (!b->hasAttribute("opening")) {
        throw AttributeNotFoundException("opening");
    }
    return b->getAttribute("opening");
};

void mei::Mei_hairpinVisMixIn::setOpening(std::string _opening) {
    MeiAttribute *a = new MeiAttribute("opening", _opening);
    b->addAttribute(a);
};

bool mei::Mei_hairpinVisMixIn::hasOpening() {
    return b->hasAttribute("opening");
};

void mei::Mei_hairpinVisMixIn::removeOpening() {
    b->removeAttribute("opening");
};

/* include <openingmixin> */
mei::Mei_harpPedalLogMixIn::Mei_harpPedalLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_harpPedalLogMixIn::~Mei_harpPedalLogMixIn() {}
MeiAttribute* mei::Mei_harpPedalLogMixIn::getC() {
    if (!b->hasAttribute("c")) {
        throw AttributeNotFoundException("c");
    }
    return b->getAttribute("c");
};

void mei::Mei_harpPedalLogMixIn::setC(std::string _c) {
    MeiAttribute *a = new MeiAttribute("c", _c);
    b->addAttribute(a);
};

bool mei::Mei_harpPedalLogMixIn::hasC() {
    return b->hasAttribute("c");
};

void mei::Mei_harpPedalLogMixIn::removeC() {
    b->removeAttribute("c");
};
MeiAttribute* mei::Mei_harpPedalLogMixIn::getD() {
    if (!b->hasAttribute("d")) {
        throw AttributeNotFoundException("d");
    }
    return b->getAttribute("d");
};

void mei::Mei_harpPedalLogMixIn::setD(std::string _d) {
    MeiAttribute *a = new MeiAttribute("d", _d);
    b->addAttribute(a);
};

bool mei::Mei_harpPedalLogMixIn::hasD() {
    return b->hasAttribute("d");
};

void mei::Mei_harpPedalLogMixIn::removeD() {
    b->removeAttribute("d");
};
MeiAttribute* mei::Mei_harpPedalLogMixIn::getE() {
    if (!b->hasAttribute("e")) {
        throw AttributeNotFoundException("e");
    }
    return b->getAttribute("e");
};

void mei::Mei_harpPedalLogMixIn::setE(std::string _e) {
    MeiAttribute *a = new MeiAttribute("e", _e);
    b->addAttribute(a);
};

bool mei::Mei_harpPedalLogMixIn::hasE() {
    return b->hasAttribute("e");
};

void mei::Mei_harpPedalLogMixIn::removeE() {
    b->removeAttribute("e");
};
MeiAttribute* mei::Mei_harpPedalLogMixIn::getF() {
    if (!b->hasAttribute("f")) {
        throw AttributeNotFoundException("f");
    }
    return b->getAttribute("f");
};

void mei::Mei_harpPedalLogMixIn::setF(std::string _f) {
    MeiAttribute *a = new MeiAttribute("f", _f);
    b->addAttribute(a);
};

bool mei::Mei_harpPedalLogMixIn::hasF() {
    return b->hasAttribute("f");
};

void mei::Mei_harpPedalLogMixIn::removeF() {
    b->removeAttribute("f");
};
MeiAttribute* mei::Mei_harpPedalLogMixIn::getG() {
    if (!b->hasAttribute("g")) {
        throw AttributeNotFoundException("g");
    }
    return b->getAttribute("g");
};

void mei::Mei_harpPedalLogMixIn::setG(std::string _g) {
    MeiAttribute *a = new MeiAttribute("g", _g);
    b->addAttribute(a);
};

bool mei::Mei_harpPedalLogMixIn::hasG() {
    return b->hasAttribute("g");
};

void mei::Mei_harpPedalLogMixIn::removeG() {
    b->removeAttribute("g");
};
MeiAttribute* mei::Mei_harpPedalLogMixIn::getA() {
    if (!b->hasAttribute("a")) {
        throw AttributeNotFoundException("a");
    }
    return b->getAttribute("a");
};

void mei::Mei_harpPedalLogMixIn::setA(std::string _a) {
    MeiAttribute *a = new MeiAttribute("a", _a);
    b->addAttribute(a);
};

bool mei::Mei_harpPedalLogMixIn::hasA() {
    return b->hasAttribute("a");
};

void mei::Mei_harpPedalLogMixIn::removeA() {
    b->removeAttribute("a");
};
MeiAttribute* mei::Mei_harpPedalLogMixIn::getB() {
    if (!b->hasAttribute("b")) {
        throw AttributeNotFoundException("b");
    }
    return b->getAttribute("b");
};

void mei::Mei_harpPedalLogMixIn::setB(std::string _b) {
    MeiAttribute *a = new MeiAttribute("b", _b);
    b->addAttribute(a);
};

bool mei::Mei_harpPedalLogMixIn::hasB() {
    return b->hasAttribute("b");
};

void mei::Mei_harpPedalLogMixIn::removeB() {
    b->removeAttribute("b");
};

/* include <bmixin> */
mei::Mei_lvpresentMixIn::Mei_lvpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_lvpresentMixIn::~Mei_lvpresentMixIn() {}
MeiAttribute* mei::Mei_lvpresentMixIn::getLv() {
    if (!b->hasAttribute("lv")) {
        throw AttributeNotFoundException("lv");
    }
    return b->getAttribute("lv");
};

void mei::Mei_lvpresentMixIn::setLv(std::string _lv) {
    MeiAttribute *a = new MeiAttribute("lv", _lv);
    b->addAttribute(a);
};

bool mei::Mei_lvpresentMixIn::hasLv() {
    return b->hasAttribute("lv");
};

void mei::Mei_lvpresentMixIn::removeLv() {
    b->removeAttribute("lv");
};

/* include <lvmixin> */
mei::Mei_multiRestVisMixIn::Mei_multiRestVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_multiRestVisMixIn::~Mei_multiRestVisMixIn() {}
MeiAttribute* mei::Mei_multiRestVisMixIn::getBlock() {
    if (!b->hasAttribute("block")) {
        throw AttributeNotFoundException("block");
    }
    return b->getAttribute("block");
};

void mei::Mei_multiRestVisMixIn::setBlock(std::string _block) {
    MeiAttribute *a = new MeiAttribute("block", _block);
    b->addAttribute(a);
};

bool mei::Mei_multiRestVisMixIn::hasBlock() {
    return b->hasAttribute("block");
};

void mei::Mei_multiRestVisMixIn::removeBlock() {
    b->removeAttribute("block");
};

/* include <blockmixin> */
mei::Mei_noteGesCmnMixIn::Mei_noteGesCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_noteGesCmnMixIn::~Mei_noteGesCmnMixIn() {}
MeiAttribute* mei::Mei_noteGesCmnMixIn::getGliss() {
    if (!b->hasAttribute("gliss")) {
        throw AttributeNotFoundException("gliss");
    }
    return b->getAttribute("gliss");
};

void mei::Mei_noteGesCmnMixIn::setGliss(std::string _gliss) {
    MeiAttribute *a = new MeiAttribute("gliss", _gliss);
    b->addAttribute(a);
};

bool mei::Mei_noteGesCmnMixIn::hasGliss() {
    return b->hasAttribute("gliss");
};

void mei::Mei_noteGesCmnMixIn::removeGliss() {
    b->removeAttribute("gliss");
};

/* include <glissmixin> */
mei::Mei_numberedMixIn::Mei_numberedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_numberedMixIn::~Mei_numberedMixIn() {}
MeiAttribute* mei::Mei_numberedMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->getAttribute("num");
};

void mei::Mei_numberedMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::Mei_numberedMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::Mei_numberedMixIn::removeNum() {
    b->removeAttribute("num");
};

/* include <nummixin> */
mei::Mei_numberplacementMixIn::Mei_numberplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_numberplacementMixIn::~Mei_numberplacementMixIn() {}
MeiAttribute* mei::Mei_numberplacementMixIn::getNumPlace() {
    if (!b->hasAttribute("num.place")) {
        throw AttributeNotFoundException("num.place");
    }
    return b->getAttribute("num.place");
};

void mei::Mei_numberplacementMixIn::setNumPlace(std::string _numplace) {
    MeiAttribute *a = new MeiAttribute("num.place", _numplace);
    b->addAttribute(a);
};

bool mei::Mei_numberplacementMixIn::hasNumPlace() {
    return b->hasAttribute("num.place");
};

void mei::Mei_numberplacementMixIn::removeNumPlace() {
    b->removeAttribute("num.place");
};
MeiAttribute* mei::Mei_numberplacementMixIn::getNumVisible() {
    if (!b->hasAttribute("num.visible")) {
        throw AttributeNotFoundException("num.visible");
    }
    return b->getAttribute("num.visible");
};

void mei::Mei_numberplacementMixIn::setNumVisible(std::string _numvisible) {
    MeiAttribute *a = new MeiAttribute("num.visible", _numvisible);
    b->addAttribute(a);
};

bool mei::Mei_numberplacementMixIn::hasNumVisible() {
    return b->hasAttribute("num.visible");
};

void mei::Mei_numberplacementMixIn::removeNumVisible() {
    b->removeAttribute("num.visible");
};

/* include <num.visiblemixin> */
mei::Mei_octaveLogMixIn::Mei_octaveLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_octaveLogMixIn::~Mei_octaveLogMixIn() {}
MeiAttribute* mei::Mei_octaveLogMixIn::getColl() {
    if (!b->hasAttribute("coll")) {
        throw AttributeNotFoundException("coll");
    }
    return b->getAttribute("coll");
};

void mei::Mei_octaveLogMixIn::setColl(std::string _coll) {
    MeiAttribute *a = new MeiAttribute("coll", _coll);
    b->addAttribute(a);
};

bool mei::Mei_octaveLogMixIn::hasColl() {
    return b->hasAttribute("coll");
};

void mei::Mei_octaveLogMixIn::removeColl() {
    b->removeAttribute("coll");
};

/* include <collmixin> */
mei::Mei_pedalLogMixIn::Mei_pedalLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_pedalLogMixIn::~Mei_pedalLogMixIn() {}
MeiAttribute* mei::Mei_pedalLogMixIn::getDir() {
    if (!b->hasAttribute("dir")) {
        throw AttributeNotFoundException("dir");
    }
    return b->getAttribute("dir");
};

void mei::Mei_pedalLogMixIn::setDir(std::string _dir) {
    MeiAttribute *a = new MeiAttribute("dir", _dir);
    b->addAttribute(a);
};

bool mei::Mei_pedalLogMixIn::hasDir() {
    return b->hasAttribute("dir");
};

void mei::Mei_pedalLogMixIn::removeDir() {
    b->removeAttribute("dir");
};

/* include <dirmixin> */
mei::Mei_pedalVisMixIn::Mei_pedalVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_pedalVisMixIn::~Mei_pedalVisMixIn() {}
MeiAttribute* mei::Mei_pedalVisMixIn::getStyle() {
    if (!b->hasAttribute("style")) {
        throw AttributeNotFoundException("style");
    }
    return b->getAttribute("style");
};

void mei::Mei_pedalVisMixIn::setStyle(std::string _style) {
    MeiAttribute *a = new MeiAttribute("style", _style);
    b->addAttribute(a);
};

bool mei::Mei_pedalVisMixIn::hasStyle() {
    return b->hasAttribute("style");
};

void mei::Mei_pedalVisMixIn::removeStyle() {
    b->removeAttribute("style");
};

/* include <stylemixin> */
mei::Mei_pianopedalsMixIn::Mei_pianopedalsMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_pianopedalsMixIn::~Mei_pianopedalsMixIn() {}
MeiAttribute* mei::Mei_pianopedalsMixIn::getPedalStyle() {
    if (!b->hasAttribute("pedal.style")) {
        throw AttributeNotFoundException("pedal.style");
    }
    return b->getAttribute("pedal.style");
};

void mei::Mei_pianopedalsMixIn::setPedalStyle(std::string _pedalstyle) {
    MeiAttribute *a = new MeiAttribute("pedal.style", _pedalstyle);
    b->addAttribute(a);
};

bool mei::Mei_pianopedalsMixIn::hasPedalStyle() {
    return b->hasAttribute("pedal.style");
};

void mei::Mei_pianopedalsMixIn::removePedalStyle() {
    b->removeAttribute("pedal.style");
};

/* include <pedal.stylemixin> */
mei::Mei_rehearsalMixIn::Mei_rehearsalMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_rehearsalMixIn::~Mei_rehearsalMixIn() {}
MeiAttribute* mei::Mei_rehearsalMixIn::getRehEnclose() {
    if (!b->hasAttribute("reh.enclose")) {
        throw AttributeNotFoundException("reh.enclose");
    }
    return b->getAttribute("reh.enclose");
};

void mei::Mei_rehearsalMixIn::setRehEnclose(std::string _rehenclose) {
    MeiAttribute *a = new MeiAttribute("reh.enclose", _rehenclose);
    b->addAttribute(a);
};

bool mei::Mei_rehearsalMixIn::hasRehEnclose() {
    return b->hasAttribute("reh.enclose");
};

void mei::Mei_rehearsalMixIn::removeRehEnclose() {
    b->removeAttribute("reh.enclose");
};

/* include <reh.enclosemixin> */
mei::Mei_scoreDefVisCmnMixIn::Mei_scoreDefVisCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_scoreDefVisCmnMixIn::~Mei_scoreDefVisCmnMixIn() {}
MeiAttribute* mei::Mei_scoreDefVisCmnMixIn::getGridShow() {
    if (!b->hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return b->getAttribute("grid.show");
};

void mei::Mei_scoreDefVisCmnMixIn::setGridShow(std::string _gridshow) {
    MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisCmnMixIn::hasGridShow() {
    return b->hasAttribute("grid.show");
};

void mei::Mei_scoreDefVisCmnMixIn::removeGridShow() {
    b->removeAttribute("grid.show");
};

/* include <grid.showmixin> */
mei::Mei_slurrendMixIn::Mei_slurrendMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_slurrendMixIn::~Mei_slurrendMixIn() {}
MeiAttribute* mei::Mei_slurrendMixIn::getSlurRend() {
    if (!b->hasAttribute("slur.rend")) {
        throw AttributeNotFoundException("slur.rend");
    }
    return b->getAttribute("slur.rend");
};

void mei::Mei_slurrendMixIn::setSlurRend(std::string _slurrend) {
    MeiAttribute *a = new MeiAttribute("slur.rend", _slurrend);
    b->addAttribute(a);
};

bool mei::Mei_slurrendMixIn::hasSlurRend() {
    return b->hasAttribute("slur.rend");
};

void mei::Mei_slurrendMixIn::removeSlurRend() {
    b->removeAttribute("slur.rend");
};

/* include <slur.rendmixin> */
mei::Mei_stemmedCmnMixIn::Mei_stemmedCmnMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_stemmedCmnMixIn::~Mei_stemmedCmnMixIn() {}
MeiAttribute* mei::Mei_stemmedCmnMixIn::getStemMod() {
    if (!b->hasAttribute("stem.mod")) {
        throw AttributeNotFoundException("stem.mod");
    }
    return b->getAttribute("stem.mod");
};

void mei::Mei_stemmedCmnMixIn::setStemMod(std::string _stemmod) {
    MeiAttribute *a = new MeiAttribute("stem.mod", _stemmod);
    b->addAttribute(a);
};

bool mei::Mei_stemmedCmnMixIn::hasStemMod() {
    return b->hasAttribute("stem.mod");
};

void mei::Mei_stemmedCmnMixIn::removeStemMod() {
    b->removeAttribute("stem.mod");
};
MeiAttribute* mei::Mei_stemmedCmnMixIn::getStemWith() {
    if (!b->hasAttribute("stem.with")) {
        throw AttributeNotFoundException("stem.with");
    }
    return b->getAttribute("stem.with");
};

void mei::Mei_stemmedCmnMixIn::setStemWith(std::string _stemwith) {
    MeiAttribute *a = new MeiAttribute("stem.with", _stemwith);
    b->addAttribute(a);
};

bool mei::Mei_stemmedCmnMixIn::hasStemWith() {
    return b->hasAttribute("stem.with");
};

void mei::Mei_stemmedCmnMixIn::removeStemWith() {
    b->removeAttribute("stem.with");
};

/* include <stem.withmixin> */
mei::Mei_tierendMixIn::Mei_tierendMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_tierendMixIn::~Mei_tierendMixIn() {}
MeiAttribute* mei::Mei_tierendMixIn::getTieRend() {
    if (!b->hasAttribute("tie.rend")) {
        throw AttributeNotFoundException("tie.rend");
    }
    return b->getAttribute("tie.rend");
};

void mei::Mei_tierendMixIn::setTieRend(std::string _tierend) {
    MeiAttribute *a = new MeiAttribute("tie.rend", _tierend);
    b->addAttribute(a);
};

bool mei::Mei_tierendMixIn::hasTieRend() {
    return b->hasAttribute("tie.rend");
};

void mei::Mei_tierendMixIn::removeTieRend() {
    b->removeAttribute("tie.rend");
};

/* include <tie.rendmixin> */
mei::Mei_tremmeasuredMixIn::Mei_tremmeasuredMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_tremmeasuredMixIn::~Mei_tremmeasuredMixIn() {}
MeiAttribute* mei::Mei_tremmeasuredMixIn::getMeasperf() {
    if (!b->hasAttribute("measperf")) {
        throw AttributeNotFoundException("measperf");
    }
    return b->getAttribute("measperf");
};

void mei::Mei_tremmeasuredMixIn::setMeasperf(std::string _measperf) {
    MeiAttribute *a = new MeiAttribute("measperf", _measperf);
    b->addAttribute(a);
};

bool mei::Mei_tremmeasuredMixIn::hasMeasperf() {
    return b->hasAttribute("measperf");
};

void mei::Mei_tremmeasuredMixIn::removeMeasperf() {
    b->removeAttribute("measperf");
};

/* include <measperfmixin> */
mei::Mei_tupletLogMixIn::Mei_tupletLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_tupletLogMixIn::~Mei_tupletLogMixIn() {}
MeiAttribute* mei::Mei_tupletLogMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::Mei_tupletLogMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::Mei_tupletLogMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::Mei_tupletLogMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::Mei_tupletVisMixIn::Mei_tupletVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_tupletVisMixIn::~Mei_tupletVisMixIn() {}
MeiAttribute* mei::Mei_tupletVisMixIn::getBracketPlace() {
    if (!b->hasAttribute("bracket.place")) {
        throw AttributeNotFoundException("bracket.place");
    }
    return b->getAttribute("bracket.place");
};

void mei::Mei_tupletVisMixIn::setBracketPlace(std::string _bracketplace) {
    MeiAttribute *a = new MeiAttribute("bracket.place", _bracketplace);
    b->addAttribute(a);
};

bool mei::Mei_tupletVisMixIn::hasBracketPlace() {
    return b->hasAttribute("bracket.place");
};

void mei::Mei_tupletVisMixIn::removeBracketPlace() {
    b->removeAttribute("bracket.place");
};
MeiAttribute* mei::Mei_tupletVisMixIn::getBracketVisible() {
    if (!b->hasAttribute("bracket.visible")) {
        throw AttributeNotFoundException("bracket.visible");
    }
    return b->getAttribute("bracket.visible");
};

void mei::Mei_tupletVisMixIn::setBracketVisible(std::string _bracketvisible) {
    MeiAttribute *a = new MeiAttribute("bracket.visible", _bracketvisible);
    b->addAttribute(a);
};

bool mei::Mei_tupletVisMixIn::hasBracketVisible() {
    return b->hasAttribute("bracket.visible");
};

void mei::Mei_tupletVisMixIn::removeBracketVisible() {
    b->removeAttribute("bracket.visible");
};
MeiAttribute* mei::Mei_tupletVisMixIn::getDurVisible() {
    if (!b->hasAttribute("dur.visible")) {
        throw AttributeNotFoundException("dur.visible");
    }
    return b->getAttribute("dur.visible");
};

void mei::Mei_tupletVisMixIn::setDurVisible(std::string _durvisible) {
    MeiAttribute *a = new MeiAttribute("dur.visible", _durvisible);
    b->addAttribute(a);
};

bool mei::Mei_tupletVisMixIn::hasDurVisible() {
    return b->hasAttribute("dur.visible");
};

void mei::Mei_tupletVisMixIn::removeDurVisible() {
    b->removeAttribute("dur.visible");
};
MeiAttribute* mei::Mei_tupletVisMixIn::getNumFormat() {
    if (!b->hasAttribute("num.format")) {
        throw AttributeNotFoundException("num.format");
    }
    return b->getAttribute("num.format");
};

void mei::Mei_tupletVisMixIn::setNumFormat(std::string _numformat) {
    MeiAttribute *a = new MeiAttribute("num.format", _numformat);
    b->addAttribute(a);
};

bool mei::Mei_tupletVisMixIn::hasNumFormat() {
    return b->hasAttribute("num.format");
};

void mei::Mei_tupletVisMixIn::removeNumFormat() {
    b->removeAttribute("num.format");
};

/* include <num.formatmixin> */
mei::Mei_tupletSpanLogMixIn::Mei_tupletSpanLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_tupletSpanLogMixIn::~Mei_tupletSpanLogMixIn() {}
MeiAttribute* mei::Mei_tupletSpanLogMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::Mei_tupletSpanLogMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::Mei_tupletSpanLogMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::Mei_tupletSpanLogMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */


