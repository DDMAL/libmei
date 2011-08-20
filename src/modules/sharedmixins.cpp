#include "sharedmixins.h"

#include <string>
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;

mei::AccidLogMixIn::AccidLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidLogMixIn::~AccidLogMixIn() {}
MeiAttribute* mei::AccidLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return b->getAttribute("func");
};

void mei::AccidLogMixIn::setFunc(std::string _func) {
    if (!b->hasAttribute("func")) {
        MeiAttribute *a = new MeiAttribute("func", _func);
        b->addAttribute(a);
    }
};

bool mei::AccidLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::AccidLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

mei::AccidVisMixIn::AccidVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidVisMixIn::~AccidVisMixIn() {}
MeiAttribute* mei::AccidVisMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->getAttribute("place");
};

void mei::AccidVisMixIn::setPlace(std::string _place) {
    if (!b->hasAttribute("place")) {
        MeiAttribute *a = new MeiAttribute("place", _place);
        b->addAttribute(a);
    }
};

bool mei::AccidVisMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::AccidVisMixIn::removePlace() {
    b->removeAttribute("place");
};

mei::AccidentalMixIn::AccidentalMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidentalMixIn::~AccidentalMixIn() {}
MeiAttribute* mei::AccidentalMixIn::getAccid() {
    if (!b->hasAttribute("accid")) {
        throw AttributeNotFoundException("accid");
    }
    return b->getAttribute("accid");
};

void mei::AccidentalMixIn::setAccid(std::string _accid) {
    if (!b->hasAttribute("accid")) {
        MeiAttribute *a = new MeiAttribute("accid", _accid);
        b->addAttribute(a);
    }
};

bool mei::AccidentalMixIn::hasAccid() {
    return b->hasAttribute("accid");
};

void mei::AccidentalMixIn::removeAccid() {
    b->removeAttribute("accid");
};

mei::AccidentalPerformedMixIn::AccidentalPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidentalPerformedMixIn::~AccidentalPerformedMixIn() {}
MeiAttribute* mei::AccidentalPerformedMixIn::getAccidGes() {
    if (!b->hasAttribute("accid.ges")) {
        throw AttributeNotFoundException("accid.ges");
    }
    return b->getAttribute("accid.ges");
};

void mei::AccidentalPerformedMixIn::setAccidGes(std::string _accidges) {
    if (!b->hasAttribute("accid.ges")) {
        MeiAttribute *a = new MeiAttribute("accid.ges", _accidges);
        b->addAttribute(a);
    }
};

bool mei::AccidentalPerformedMixIn::hasAccidGes() {
    return b->hasAttribute("accid.ges");
};

void mei::AccidentalPerformedMixIn::removeAccidGes() {
    b->removeAttribute("accid.ges");
};

mei::AltsymMixIn::AltsymMixIn(MeiElement *b) {
    this->b = b;
};

mei::AltsymMixIn::~AltsymMixIn() {}
MeiAttribute* mei::AltsymMixIn::getAltsym() {
    if (!b->hasAttribute("altsym")) {
        throw AttributeNotFoundException("altsym");
    }
    return b->getAttribute("altsym");
};

void mei::AltsymMixIn::setAltsym(std::string _altsym) {
    if (!b->hasAttribute("altsym")) {
        MeiAttribute *a = new MeiAttribute("altsym", _altsym);
        b->addAttribute(a);
    }
};

bool mei::AltsymMixIn::hasAltsym() {
    return b->hasAttribute("altsym");
};

void mei::AltsymMixIn::removeAltsym() {
    b->removeAttribute("altsym");
};

mei::ArticulationMixIn::ArticulationMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArticulationMixIn::~ArticulationMixIn() {}
MeiAttribute* mei::ArticulationMixIn::getArtic() {
    if (!b->hasAttribute("artic")) {
        throw AttributeNotFoundException("artic");
    }
    return b->getAttribute("artic");
};

void mei::ArticulationMixIn::setArtic(std::string _artic) {
    if (!b->hasAttribute("artic")) {
        MeiAttribute *a = new MeiAttribute("artic", _artic);
        b->addAttribute(a);
    }
};

bool mei::ArticulationMixIn::hasArtic() {
    return b->hasAttribute("artic");
};

void mei::ArticulationMixIn::removeArtic() {
    b->removeAttribute("artic");
};

mei::ArticulationPerformedMixIn::ArticulationPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArticulationPerformedMixIn::~ArticulationPerformedMixIn() {}
MeiAttribute* mei::ArticulationPerformedMixIn::getArticGes() {
    if (!b->hasAttribute("artic.ges")) {
        throw AttributeNotFoundException("artic.ges");
    }
    return b->getAttribute("artic.ges");
};

void mei::ArticulationPerformedMixIn::setArticGes(std::string _articges) {
    if (!b->hasAttribute("artic.ges")) {
        MeiAttribute *a = new MeiAttribute("artic.ges", _articges);
        b->addAttribute(a);
    }
};

bool mei::ArticulationPerformedMixIn::hasArticGes() {
    return b->hasAttribute("artic.ges");
};

void mei::ArticulationPerformedMixIn::removeArticGes() {
    b->removeAttribute("artic.ges");
};

mei::AugmentdotsMixIn::AugmentdotsMixIn(MeiElement *b) {
    this->b = b;
};

mei::AugmentdotsMixIn::~AugmentdotsMixIn() {}
MeiAttribute* mei::AugmentdotsMixIn::getDots() {
    if (!b->hasAttribute("dots")) {
        throw AttributeNotFoundException("dots");
    }
    return b->getAttribute("dots");
};

void mei::AugmentdotsMixIn::setDots(std::string _dots) {
    if (!b->hasAttribute("dots")) {
        MeiAttribute *a = new MeiAttribute("dots", _dots);
        b->addAttribute(a);
    }
};

bool mei::AugmentdotsMixIn::hasDots() {
    return b->hasAttribute("dots");
};

void mei::AugmentdotsMixIn::removeDots() {
    b->removeAttribute("dots");
};

mei::AuthorizedMixIn::AuthorizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::AuthorizedMixIn::~AuthorizedMixIn() {}
MeiAttribute* mei::AuthorizedMixIn::getAuthority() {
    if (!b->hasAttribute("authority")) {
        throw AttributeNotFoundException("authority");
    }
    return b->getAttribute("authority");
};

void mei::AuthorizedMixIn::setAuthority(std::string _authority) {
    if (!b->hasAttribute("authority")) {
        MeiAttribute *a = new MeiAttribute("authority", _authority);
        b->addAttribute(a);
    }
};

bool mei::AuthorizedMixIn::hasAuthority() {
    return b->hasAttribute("authority");
};

void mei::AuthorizedMixIn::removeAuthority() {
    b->removeAttribute("authority");
};
MeiAttribute* mei::AuthorizedMixIn::getAuthuri() {
    if (!b->hasAttribute("authURI")) {
        throw AttributeNotFoundException("authURI");
    }
    return b->getAttribute("authURI");
};

void mei::AuthorizedMixIn::setAuthuri(std::string _authURI) {
    if (!b->hasAttribute("authURI")) {
        MeiAttribute *a = new MeiAttribute("authURI", _authURI);
        b->addAttribute(a);
    }
};

bool mei::AuthorizedMixIn::hasAuthuri() {
    return b->hasAttribute("authURI");
};

void mei::AuthorizedMixIn::removeAuthuri() {
    b->removeAttribute("authURI");
};

mei::BarlineLogMixIn::BarlineLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BarlineLogMixIn::~BarlineLogMixIn() {}
MeiAttribute* mei::BarlineLogMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::BarlineLogMixIn::setRend(std::string _rend) {
    if (!b->hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->addAttribute(a);
    }
};

bool mei::BarlineLogMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::BarlineLogMixIn::removeRend() {
    b->removeAttribute("rend");
};

mei::BarplacementMixIn::BarplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::BarplacementMixIn::~BarplacementMixIn() {}
MeiAttribute* mei::BarplacementMixIn::getBarplace() {
    if (!b->hasAttribute("barplace")) {
        throw AttributeNotFoundException("barplace");
    }
    return b->getAttribute("barplace");
};

void mei::BarplacementMixIn::setBarplace(std::string _barplace) {
    if (!b->hasAttribute("barplace")) {
        MeiAttribute *a = new MeiAttribute("barplace", _barplace);
        b->addAttribute(a);
    }
};

bool mei::BarplacementMixIn::hasBarplace() {
    return b->hasAttribute("barplace");
};

void mei::BarplacementMixIn::removeBarplace() {
    b->removeAttribute("barplace");
};
MeiAttribute* mei::BarplacementMixIn::getTaktplace() {
    if (!b->hasAttribute("taktplace")) {
        throw AttributeNotFoundException("taktplace");
    }
    return b->getAttribute("taktplace");
};

void mei::BarplacementMixIn::setTaktplace(std::string _taktplace) {
    if (!b->hasAttribute("taktplace")) {
        MeiAttribute *a = new MeiAttribute("taktplace", _taktplace);
        b->addAttribute(a);
    }
};

bool mei::BarplacementMixIn::hasTaktplace() {
    return b->hasAttribute("taktplace");
};

void mei::BarplacementMixIn::removeTaktplace() {
    b->removeAttribute("taktplace");
};

mei::BeamingVisMixIn::BeamingVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamingVisMixIn::~BeamingVisMixIn() {}
MeiAttribute* mei::BeamingVisMixIn::getBeamRend() {
    if (!b->hasAttribute("beam.rend")) {
        throw AttributeNotFoundException("beam.rend");
    }
    return b->getAttribute("beam.rend");
};

void mei::BeamingVisMixIn::setBeamRend(std::string _beamrend) {
    if (!b->hasAttribute("beam.rend")) {
        MeiAttribute *a = new MeiAttribute("beam.rend", _beamrend);
        b->addAttribute(a);
    }
};

bool mei::BeamingVisMixIn::hasBeamRend() {
    return b->hasAttribute("beam.rend");
};

void mei::BeamingVisMixIn::removeBeamRend() {
    b->removeAttribute("beam.rend");
};
MeiAttribute* mei::BeamingVisMixIn::getBeamSlope() {
    if (!b->hasAttribute("beam.slope")) {
        throw AttributeNotFoundException("beam.slope");
    }
    return b->getAttribute("beam.slope");
};

void mei::BeamingVisMixIn::setBeamSlope(std::string _beamslope) {
    if (!b->hasAttribute("beam.slope")) {
        MeiAttribute *a = new MeiAttribute("beam.slope", _beamslope);
        b->addAttribute(a);
    }
};

bool mei::BeamingVisMixIn::hasBeamSlope() {
    return b->hasAttribute("beam.slope");
};

void mei::BeamingVisMixIn::removeBeamSlope() {
    b->removeAttribute("beam.slope");
};

mei::BiblMixIn::BiblMixIn(MeiElement *b) {
    this->b = b;
};

mei::BiblMixIn::~BiblMixIn() {}
MeiAttribute* mei::BiblMixIn::getAnalog() {
    if (!b->hasAttribute("analog")) {
        throw AttributeNotFoundException("analog");
    }
    return b->getAttribute("analog");
};

void mei::BiblMixIn::setAnalog(std::string _analog) {
    if (!b->hasAttribute("analog")) {
        MeiAttribute *a = new MeiAttribute("analog", _analog);
        b->addAttribute(a);
    }
};

bool mei::BiblMixIn::hasAnalog() {
    return b->hasAttribute("analog");
};

void mei::BiblMixIn::removeAnalog() {
    b->removeAttribute("analog");
};

mei::CalendaredMixIn::CalendaredMixIn(MeiElement *b) {
    this->b = b;
};

mei::CalendaredMixIn::~CalendaredMixIn() {}
MeiAttribute* mei::CalendaredMixIn::getCalendar() {
    if (!b->hasAttribute("calendar")) {
        throw AttributeNotFoundException("calendar");
    }
    return b->getAttribute("calendar");
};

void mei::CalendaredMixIn::setCalendar(std::string _calendar) {
    if (!b->hasAttribute("calendar")) {
        MeiAttribute *a = new MeiAttribute("calendar", _calendar);
        b->addAttribute(a);
    }
};

bool mei::CalendaredMixIn::hasCalendar() {
    return b->hasAttribute("calendar");
};

void mei::CalendaredMixIn::removeCalendar() {
    b->removeAttribute("calendar");
};

mei::CanonicalMixIn::CanonicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::CanonicalMixIn::~CanonicalMixIn() {}
MeiAttribute* mei::CanonicalMixIn::getDbkey() {
    if (!b->hasAttribute("dbkey")) {
        throw AttributeNotFoundException("dbkey");
    }
    return b->getAttribute("dbkey");
};

void mei::CanonicalMixIn::setDbkey(std::string _dbkey) {
    if (!b->hasAttribute("dbkey")) {
        MeiAttribute *a = new MeiAttribute("dbkey", _dbkey);
        b->addAttribute(a);
    }
};

bool mei::CanonicalMixIn::hasDbkey() {
    return b->hasAttribute("dbkey");
};

void mei::CanonicalMixIn::removeDbkey() {
    b->removeAttribute("dbkey");
};

mei::ChordVisMixIn::ChordVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ChordVisMixIn::~ChordVisMixIn() {}
MeiAttribute* mei::ChordVisMixIn::getCluster() {
    if (!b->hasAttribute("cluster")) {
        throw AttributeNotFoundException("cluster");
    }
    return b->getAttribute("cluster");
};

void mei::ChordVisMixIn::setCluster(std::string _cluster) {
    if (!b->hasAttribute("cluster")) {
        MeiAttribute *a = new MeiAttribute("cluster", _cluster);
        b->addAttribute(a);
    }
};

bool mei::ChordVisMixIn::hasCluster() {
    return b->hasAttribute("cluster");
};

void mei::ChordVisMixIn::removeCluster() {
    b->removeAttribute("cluster");
};

mei::CleffingLogMixIn::CleffingLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::CleffingLogMixIn::~CleffingLogMixIn() {}
MeiAttribute* mei::CleffingLogMixIn::getClefShape() {
    if (!b->hasAttribute("clef.shape")) {
        throw AttributeNotFoundException("clef.shape");
    }
    return b->getAttribute("clef.shape");
};

void mei::CleffingLogMixIn::setClefShape(std::string _clefshape) {
    if (!b->hasAttribute("clef.shape")) {
        MeiAttribute *a = new MeiAttribute("clef.shape", _clefshape);
        b->addAttribute(a);
    }
};

bool mei::CleffingLogMixIn::hasClefShape() {
    return b->hasAttribute("clef.shape");
};

void mei::CleffingLogMixIn::removeClefShape() {
    b->removeAttribute("clef.shape");
};
MeiAttribute* mei::CleffingLogMixIn::getClefLine() {
    if (!b->hasAttribute("clef.line")) {
        throw AttributeNotFoundException("clef.line");
    }
    return b->getAttribute("clef.line");
};

void mei::CleffingLogMixIn::setClefLine(std::string _clefline) {
    if (!b->hasAttribute("clef.line")) {
        MeiAttribute *a = new MeiAttribute("clef.line", _clefline);
        b->addAttribute(a);
    }
};

bool mei::CleffingLogMixIn::hasClefLine() {
    return b->hasAttribute("clef.line");
};

void mei::CleffingLogMixIn::removeClefLine() {
    b->removeAttribute("clef.line");
};
MeiAttribute* mei::CleffingLogMixIn::getClefDis() {
    if (!b->hasAttribute("clef.dis")) {
        throw AttributeNotFoundException("clef.dis");
    }
    return b->getAttribute("clef.dis");
};

void mei::CleffingLogMixIn::setClefDis(std::string _clefdis) {
    if (!b->hasAttribute("clef.dis")) {
        MeiAttribute *a = new MeiAttribute("clef.dis", _clefdis);
        b->addAttribute(a);
    }
};

bool mei::CleffingLogMixIn::hasClefDis() {
    return b->hasAttribute("clef.dis");
};

void mei::CleffingLogMixIn::removeClefDis() {
    b->removeAttribute("clef.dis");
};
MeiAttribute* mei::CleffingLogMixIn::getClefDisPlace() {
    if (!b->hasAttribute("clef.dis.place")) {
        throw AttributeNotFoundException("clef.dis.place");
    }
    return b->getAttribute("clef.dis.place");
};

void mei::CleffingLogMixIn::setClefDisPlace(std::string _clefdisplace) {
    if (!b->hasAttribute("clef.dis.place")) {
        MeiAttribute *a = new MeiAttribute("clef.dis.place", _clefdisplace);
        b->addAttribute(a);
    }
};

bool mei::CleffingLogMixIn::hasClefDisPlace() {
    return b->hasAttribute("clef.dis.place");
};

void mei::CleffingLogMixIn::removeClefDisPlace() {
    b->removeAttribute("clef.dis.place");
};

mei::CleffingVisMixIn::CleffingVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::CleffingVisMixIn::~CleffingVisMixIn() {}
MeiAttribute* mei::CleffingVisMixIn::getClefColor() {
    if (!b->hasAttribute("clef.color")) {
        throw AttributeNotFoundException("clef.color");
    }
    return b->getAttribute("clef.color");
};

void mei::CleffingVisMixIn::setClefColor(std::string _clefcolor) {
    if (!b->hasAttribute("clef.color")) {
        MeiAttribute *a = new MeiAttribute("clef.color", _clefcolor);
        b->addAttribute(a);
    }
};

bool mei::CleffingVisMixIn::hasClefColor() {
    return b->hasAttribute("clef.color");
};

void mei::CleffingVisMixIn::removeClefColor() {
    b->removeAttribute("clef.color");
};
MeiAttribute* mei::CleffingVisMixIn::getClefVisible() {
    if (!b->hasAttribute("clef.visible")) {
        throw AttributeNotFoundException("clef.visible");
    }
    return b->getAttribute("clef.visible");
};

void mei::CleffingVisMixIn::setClefVisible(std::string _clefvisible) {
    if (!b->hasAttribute("clef.visible")) {
        MeiAttribute *a = new MeiAttribute("clef.visible", _clefvisible);
        b->addAttribute(a);
    }
};

bool mei::CleffingVisMixIn::hasClefVisible() {
    return b->hasAttribute("clef.visible");
};

void mei::CleffingVisMixIn::removeClefVisible() {
    b->removeAttribute("clef.visible");
};

mei::ClefshapeMixIn::ClefshapeMixIn(MeiElement *b) {
    this->b = b;
};

mei::ClefshapeMixIn::~ClefshapeMixIn() {}
MeiAttribute* mei::ClefshapeMixIn::getShape() {
    if (!b->hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->getAttribute("shape");
};

void mei::ClefshapeMixIn::setShape(std::string _shape) {
    if (!b->hasAttribute("shape")) {
        MeiAttribute *a = new MeiAttribute("shape", _shape);
        b->addAttribute(a);
    }
};

bool mei::ClefshapeMixIn::hasShape() {
    return b->hasAttribute("shape");
};

void mei::ClefshapeMixIn::removeShape() {
    b->removeAttribute("shape");
};

mei::ColorMixIn::ColorMixIn(MeiElement *b) {
    this->b = b;
};

mei::ColorMixIn::~ColorMixIn() {}
MeiAttribute* mei::ColorMixIn::getColor() {
    if (!b->hasAttribute("color")) {
        throw AttributeNotFoundException("color");
    }
    return b->getAttribute("color");
};

void mei::ColorMixIn::setColor(std::string _color) {
    if (!b->hasAttribute("color")) {
        MeiAttribute *a = new MeiAttribute("color", _color);
        b->addAttribute(a);
    }
};

bool mei::ColorMixIn::hasColor() {
    return b->hasAttribute("color");
};

void mei::ColorMixIn::removeColor() {
    b->removeAttribute("color");
};

mei::ColorationMixIn::ColorationMixIn(MeiElement *b) {
    this->b = b;
};

mei::ColorationMixIn::~ColorationMixIn() {}
MeiAttribute* mei::ColorationMixIn::getColored() {
    if (!b->hasAttribute("colored")) {
        throw AttributeNotFoundException("colored");
    }
    return b->getAttribute("colored");
};

void mei::ColorationMixIn::setColored(std::string _colored) {
    if (!b->hasAttribute("colored")) {
        MeiAttribute *a = new MeiAttribute("colored", _colored);
        b->addAttribute(a);
    }
};

bool mei::ColorationMixIn::hasColored() {
    return b->hasAttribute("colored");
};

void mei::ColorationMixIn::removeColored() {
    b->removeAttribute("colored");
};

mei::CommonMixIn::CommonMixIn(MeiElement *b) {
    this->b = b;
};

mei::CommonMixIn::~CommonMixIn() {}
MeiAttribute* mei::CommonMixIn::getId() {
    if (!b->hasAttribute("id")) {
        throw AttributeNotFoundException("id");
    }
    return b->getAttribute("id");
};

void mei::CommonMixIn::setId(std::string _id) {
    if (!b->hasAttribute("id")) {
        MeiAttribute *a = new MeiAttribute("id", _id);
        b->addAttribute(a);
    }
};

bool mei::CommonMixIn::hasId() {
    return b->hasAttribute("id");
};

void mei::CommonMixIn::removeId() {
    b->removeAttribute("id");
};
MeiAttribute* mei::CommonMixIn::getLabel() {
    if (!b->hasAttribute("label")) {
        throw AttributeNotFoundException("label");
    }
    return b->getAttribute("label");
};

void mei::CommonMixIn::setLabel(std::string _label) {
    if (!b->hasAttribute("label")) {
        MeiAttribute *a = new MeiAttribute("label", _label);
        b->addAttribute(a);
    }
};

bool mei::CommonMixIn::hasLabel() {
    return b->hasAttribute("label");
};

void mei::CommonMixIn::removeLabel() {
    b->removeAttribute("label");
};
MeiAttribute* mei::CommonMixIn::getN() {
    if (!b->hasAttribute("n")) {
        throw AttributeNotFoundException("n");
    }
    return b->getAttribute("n");
};

void mei::CommonMixIn::setN(std::string _n) {
    if (!b->hasAttribute("n")) {
        MeiAttribute *a = new MeiAttribute("n", _n);
        b->addAttribute(a);
    }
};

bool mei::CommonMixIn::hasN() {
    return b->hasAttribute("n");
};

void mei::CommonMixIn::removeN() {
    b->removeAttribute("n");
};
MeiAttribute* mei::CommonMixIn::getBase() {
    if (!b->hasAttribute("base")) {
        throw AttributeNotFoundException("base");
    }
    return b->getAttribute("base");
};

void mei::CommonMixIn::setBase(std::string _base) {
    if (!b->hasAttribute("base")) {
        MeiAttribute *a = new MeiAttribute("base", _base);
        b->addAttribute(a);
    }
};

bool mei::CommonMixIn::hasBase() {
    return b->hasAttribute("base");
};

void mei::CommonMixIn::removeBase() {
    b->removeAttribute("base");
};

mei::CoordinatedMixIn::CoordinatedMixIn(MeiElement *b) {
    this->b = b;
};

mei::CoordinatedMixIn::~CoordinatedMixIn() {}
MeiAttribute* mei::CoordinatedMixIn::getUlx() {
    if (!b->hasAttribute("ulx")) {
        throw AttributeNotFoundException("ulx");
    }
    return b->getAttribute("ulx");
};

void mei::CoordinatedMixIn::setUlx(std::string _ulx) {
    if (!b->hasAttribute("ulx")) {
        MeiAttribute *a = new MeiAttribute("ulx", _ulx);
        b->addAttribute(a);
    }
};

bool mei::CoordinatedMixIn::hasUlx() {
    return b->hasAttribute("ulx");
};

void mei::CoordinatedMixIn::removeUlx() {
    b->removeAttribute("ulx");
};
MeiAttribute* mei::CoordinatedMixIn::getUly() {
    if (!b->hasAttribute("uly")) {
        throw AttributeNotFoundException("uly");
    }
    return b->getAttribute("uly");
};

void mei::CoordinatedMixIn::setUly(std::string _uly) {
    if (!b->hasAttribute("uly")) {
        MeiAttribute *a = new MeiAttribute("uly", _uly);
        b->addAttribute(a);
    }
};

bool mei::CoordinatedMixIn::hasUly() {
    return b->hasAttribute("uly");
};

void mei::CoordinatedMixIn::removeUly() {
    b->removeAttribute("uly");
};
MeiAttribute* mei::CoordinatedMixIn::getLrx() {
    if (!b->hasAttribute("lrx")) {
        throw AttributeNotFoundException("lrx");
    }
    return b->getAttribute("lrx");
};

void mei::CoordinatedMixIn::setLrx(std::string _lrx) {
    if (!b->hasAttribute("lrx")) {
        MeiAttribute *a = new MeiAttribute("lrx", _lrx);
        b->addAttribute(a);
    }
};

bool mei::CoordinatedMixIn::hasLrx() {
    return b->hasAttribute("lrx");
};

void mei::CoordinatedMixIn::removeLrx() {
    b->removeAttribute("lrx");
};
MeiAttribute* mei::CoordinatedMixIn::getLry() {
    if (!b->hasAttribute("lry")) {
        throw AttributeNotFoundException("lry");
    }
    return b->getAttribute("lry");
};

void mei::CoordinatedMixIn::setLry(std::string _lry) {
    if (!b->hasAttribute("lry")) {
        MeiAttribute *a = new MeiAttribute("lry", _lry);
        b->addAttribute(a);
    }
};

bool mei::CoordinatedMixIn::hasLry() {
    return b->hasAttribute("lry");
};

void mei::CoordinatedMixIn::removeLry() {
    b->removeAttribute("lry");
};

mei::CurvatureMixIn::CurvatureMixIn(MeiElement *b) {
    this->b = b;
};

mei::CurvatureMixIn::~CurvatureMixIn() {}
MeiAttribute* mei::CurvatureMixIn::getBezier() {
    if (!b->hasAttribute("bezier")) {
        throw AttributeNotFoundException("bezier");
    }
    return b->getAttribute("bezier");
};

void mei::CurvatureMixIn::setBezier(std::string _bezier) {
    if (!b->hasAttribute("bezier")) {
        MeiAttribute *a = new MeiAttribute("bezier", _bezier);
        b->addAttribute(a);
    }
};

bool mei::CurvatureMixIn::hasBezier() {
    return b->hasAttribute("bezier");
};

void mei::CurvatureMixIn::removeBezier() {
    b->removeAttribute("bezier");
};
MeiAttribute* mei::CurvatureMixIn::getBulge() {
    if (!b->hasAttribute("bulge")) {
        throw AttributeNotFoundException("bulge");
    }
    return b->getAttribute("bulge");
};

void mei::CurvatureMixIn::setBulge(std::string _bulge) {
    if (!b->hasAttribute("bulge")) {
        MeiAttribute *a = new MeiAttribute("bulge", _bulge);
        b->addAttribute(a);
    }
};

bool mei::CurvatureMixIn::hasBulge() {
    return b->hasAttribute("bulge");
};

void mei::CurvatureMixIn::removeBulge() {
    b->removeAttribute("bulge");
};
MeiAttribute* mei::CurvatureMixIn::getCurvedir() {
    if (!b->hasAttribute("curvedir")) {
        throw AttributeNotFoundException("curvedir");
    }
    return b->getAttribute("curvedir");
};

void mei::CurvatureMixIn::setCurvedir(std::string _curvedir) {
    if (!b->hasAttribute("curvedir")) {
        MeiAttribute *a = new MeiAttribute("curvedir", _curvedir);
        b->addAttribute(a);
    }
};

bool mei::CurvatureMixIn::hasCurvedir() {
    return b->hasAttribute("curvedir");
};

void mei::CurvatureMixIn::removeCurvedir() {
    b->removeAttribute("curvedir");
};

mei::CurverendMixIn::CurverendMixIn(MeiElement *b) {
    this->b = b;
};

mei::CurverendMixIn::~CurverendMixIn() {}
MeiAttribute* mei::CurverendMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::CurverendMixIn::setRend(std::string _rend) {
    if (!b->hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->addAttribute(a);
    }
};

bool mei::CurverendMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::CurverendMixIn::removeRend() {
    b->removeAttribute("rend");
};

mei::CustosLogMixIn::CustosLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::CustosLogMixIn::~CustosLogMixIn() {}
MeiAttribute* mei::CustosLogMixIn::getTarget() {
    if (!b->hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return b->getAttribute("target");
};

void mei::CustosLogMixIn::setTarget(std::string _target) {
    if (!b->hasAttribute("target")) {
        MeiAttribute *a = new MeiAttribute("target", _target);
        b->addAttribute(a);
    }
};

bool mei::CustosLogMixIn::hasTarget() {
    return b->hasAttribute("target");
};

void mei::CustosLogMixIn::removeTarget() {
    b->removeAttribute("target");
};

mei::DatableMixIn::DatableMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatableMixIn::~DatableMixIn() {}
MeiAttribute* mei::DatableMixIn::getEnddate() {
    if (!b->hasAttribute("enddate")) {
        throw AttributeNotFoundException("enddate");
    }
    return b->getAttribute("enddate");
};

void mei::DatableMixIn::setEnddate(std::string _enddate) {
    if (!b->hasAttribute("enddate")) {
        MeiAttribute *a = new MeiAttribute("enddate", _enddate);
        b->addAttribute(a);
    }
};

bool mei::DatableMixIn::hasEnddate() {
    return b->hasAttribute("enddate");
};

void mei::DatableMixIn::removeEnddate() {
    b->removeAttribute("enddate");
};
MeiAttribute* mei::DatableMixIn::getNotafter() {
    if (!b->hasAttribute("notafter")) {
        throw AttributeNotFoundException("notafter");
    }
    return b->getAttribute("notafter");
};

void mei::DatableMixIn::setNotafter(std::string _notafter) {
    if (!b->hasAttribute("notafter")) {
        MeiAttribute *a = new MeiAttribute("notafter", _notafter);
        b->addAttribute(a);
    }
};

bool mei::DatableMixIn::hasNotafter() {
    return b->hasAttribute("notafter");
};

void mei::DatableMixIn::removeNotafter() {
    b->removeAttribute("notafter");
};
MeiAttribute* mei::DatableMixIn::getNotbefore() {
    if (!b->hasAttribute("notbefore")) {
        throw AttributeNotFoundException("notbefore");
    }
    return b->getAttribute("notbefore");
};

void mei::DatableMixIn::setNotbefore(std::string _notbefore) {
    if (!b->hasAttribute("notbefore")) {
        MeiAttribute *a = new MeiAttribute("notbefore", _notbefore);
        b->addAttribute(a);
    }
};

bool mei::DatableMixIn::hasNotbefore() {
    return b->hasAttribute("notbefore");
};

void mei::DatableMixIn::removeNotbefore() {
    b->removeAttribute("notbefore");
};
MeiAttribute* mei::DatableMixIn::getStartdate() {
    if (!b->hasAttribute("startdate")) {
        throw AttributeNotFoundException("startdate");
    }
    return b->getAttribute("startdate");
};

void mei::DatableMixIn::setStartdate(std::string _startdate) {
    if (!b->hasAttribute("startdate")) {
        MeiAttribute *a = new MeiAttribute("startdate", _startdate);
        b->addAttribute(a);
    }
};

bool mei::DatableMixIn::hasStartdate() {
    return b->hasAttribute("startdate");
};

void mei::DatableMixIn::removeStartdate() {
    b->removeAttribute("startdate");
};

mei::DatapointingMixIn::DatapointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatapointingMixIn::~DatapointingMixIn() {}
MeiAttribute* mei::DatapointingMixIn::getData() {
    if (!b->hasAttribute("data")) {
        throw AttributeNotFoundException("data");
    }
    return b->getAttribute("data");
};

void mei::DatapointingMixIn::setData(std::string _data) {
    if (!b->hasAttribute("data")) {
        MeiAttribute *a = new MeiAttribute("data", _data);
        b->addAttribute(a);
    }
};

bool mei::DatapointingMixIn::hasData() {
    return b->hasAttribute("data");
};

void mei::DatapointingMixIn::removeData() {
    b->removeAttribute("data");
};

mei::DeclaringMixIn::DeclaringMixIn(MeiElement *b) {
    this->b = b;
};

mei::DeclaringMixIn::~DeclaringMixIn() {}
MeiAttribute* mei::DeclaringMixIn::getDecls() {
    if (!b->hasAttribute("decls")) {
        throw AttributeNotFoundException("decls");
    }
    return b->getAttribute("decls");
};

void mei::DeclaringMixIn::setDecls(std::string _decls) {
    if (!b->hasAttribute("decls")) {
        MeiAttribute *a = new MeiAttribute("decls", _decls);
        b->addAttribute(a);
    }
};

bool mei::DeclaringMixIn::hasDecls() {
    return b->hasAttribute("decls");
};

void mei::DeclaringMixIn::removeDecls() {
    b->removeAttribute("decls");
};

mei::DistancesMixIn::DistancesMixIn(MeiElement *b) {
    this->b = b;
};

mei::DistancesMixIn::~DistancesMixIn() {}
MeiAttribute* mei::DistancesMixIn::getDynamDist() {
    if (!b->hasAttribute("dynam.dist")) {
        throw AttributeNotFoundException("dynam.dist");
    }
    return b->getAttribute("dynam.dist");
};

void mei::DistancesMixIn::setDynamDist(std::string _dynamdist) {
    if (!b->hasAttribute("dynam.dist")) {
        MeiAttribute *a = new MeiAttribute("dynam.dist", _dynamdist);
        b->addAttribute(a);
    }
};

bool mei::DistancesMixIn::hasDynamDist() {
    return b->hasAttribute("dynam.dist");
};

void mei::DistancesMixIn::removeDynamDist() {
    b->removeAttribute("dynam.dist");
};
MeiAttribute* mei::DistancesMixIn::getHarmDist() {
    if (!b->hasAttribute("harm.dist")) {
        throw AttributeNotFoundException("harm.dist");
    }
    return b->getAttribute("harm.dist");
};

void mei::DistancesMixIn::setHarmDist(std::string _harmdist) {
    if (!b->hasAttribute("harm.dist")) {
        MeiAttribute *a = new MeiAttribute("harm.dist", _harmdist);
        b->addAttribute(a);
    }
};

bool mei::DistancesMixIn::hasHarmDist() {
    return b->hasAttribute("harm.dist");
};

void mei::DistancesMixIn::removeHarmDist() {
    b->removeAttribute("harm.dist");
};
MeiAttribute* mei::DistancesMixIn::getTextDist() {
    if (!b->hasAttribute("text.dist")) {
        throw AttributeNotFoundException("text.dist");
    }
    return b->getAttribute("text.dist");
};

void mei::DistancesMixIn::setTextDist(std::string _textdist) {
    if (!b->hasAttribute("text.dist")) {
        MeiAttribute *a = new MeiAttribute("text.dist", _textdist);
        b->addAttribute(a);
    }
};

bool mei::DistancesMixIn::hasTextDist() {
    return b->hasAttribute("text.dist");
};

void mei::DistancesMixIn::removeTextDist() {
    b->removeAttribute("text.dist");
};

mei::DotLogMixIn::DotLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::DotLogMixIn::~DotLogMixIn() {}
MeiAttribute* mei::DotLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::DotLogMixIn::setForm(std::string _form) {
    if (!b->hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->addAttribute(a);
    }
};

bool mei::DotLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::DotLogMixIn::removeForm() {
    b->removeAttribute("form");
};

mei::DurationDefaultMixIn::DurationDefaultMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationDefaultMixIn::~DurationDefaultMixIn() {}
MeiAttribute* mei::DurationDefaultMixIn::getDurDefault() {
    if (!b->hasAttribute("dur.default")) {
        throw AttributeNotFoundException("dur.default");
    }
    return b->getAttribute("dur.default");
};

void mei::DurationDefaultMixIn::setDurDefault(std::string _durdefault) {
    if (!b->hasAttribute("dur.default")) {
        MeiAttribute *a = new MeiAttribute("dur.default", _durdefault);
        b->addAttribute(a);
    }
};

bool mei::DurationDefaultMixIn::hasDurDefault() {
    return b->hasAttribute("dur.default");
};

void mei::DurationDefaultMixIn::removeDurDefault() {
    b->removeAttribute("dur.default");
};

mei::DurationMusicalMixIn::DurationMusicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationMusicalMixIn::~DurationMusicalMixIn() {}
MeiAttribute* mei::DurationMusicalMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::DurationMusicalMixIn::setDur(std::string _dur) {
    if (!b->hasAttribute("dur")) {
        MeiAttribute *a = new MeiAttribute("dur", _dur);
        b->addAttribute(a);
    }
};

bool mei::DurationMusicalMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::DurationMusicalMixIn::removeDur() {
    b->removeAttribute("dur");
};

mei::DurationPerformedMixIn::DurationPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationPerformedMixIn::~DurationPerformedMixIn() {}
MeiAttribute* mei::DurationPerformedMixIn::getDurGes() {
    if (!b->hasAttribute("dur.ges")) {
        throw AttributeNotFoundException("dur.ges");
    }
    return b->getAttribute("dur.ges");
};

void mei::DurationPerformedMixIn::setDurGes(std::string _durges) {
    if (!b->hasAttribute("dur.ges")) {
        MeiAttribute *a = new MeiAttribute("dur.ges", _durges);
        b->addAttribute(a);
    }
};

bool mei::DurationPerformedMixIn::hasDurGes() {
    return b->hasAttribute("dur.ges");
};

void mei::DurationPerformedMixIn::removeDurGes() {
    b->removeAttribute("dur.ges");
};

mei::DurationRatioMixIn::DurationRatioMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationRatioMixIn::~DurationRatioMixIn() {}
MeiAttribute* mei::DurationRatioMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->getAttribute("num");
};

void mei::DurationRatioMixIn::setNum(std::string _num) {
    if (!b->hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        b->addAttribute(a);
    }
};

bool mei::DurationRatioMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::DurationRatioMixIn::removeNum() {
    b->removeAttribute("num");
};
MeiAttribute* mei::DurationRatioMixIn::getNumbase() {
    if (!b->hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->getAttribute("numbase");
};

void mei::DurationRatioMixIn::setNumbase(std::string _numbase) {
    if (!b->hasAttribute("numbase")) {
        MeiAttribute *a = new MeiAttribute("numbase", _numbase);
        b->addAttribute(a);
    }
};

bool mei::DurationRatioMixIn::hasNumbase() {
    return b->hasAttribute("numbase");
};

void mei::DurationRatioMixIn::removeNumbase() {
    b->removeAttribute("numbase");
};

mei::DurationTimestampMixIn::DurationTimestampMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationTimestampMixIn::~DurationTimestampMixIn() {}
MeiAttribute* mei::DurationTimestampMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::DurationTimestampMixIn::setDur(std::string _dur) {
    if (!b->hasAttribute("dur")) {
        MeiAttribute *a = new MeiAttribute("dur", _dur);
        b->addAttribute(a);
    }
};

bool mei::DurationTimestampMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::DurationTimestampMixIn::removeDur() {
    b->removeAttribute("dur");
};

mei::EnclosingcharsMixIn::EnclosingcharsMixIn(MeiElement *b) {
    this->b = b;
};

mei::EnclosingcharsMixIn::~EnclosingcharsMixIn() {}
MeiAttribute* mei::EnclosingcharsMixIn::getEnclose() {
    if (!b->hasAttribute("enclose")) {
        throw AttributeNotFoundException("enclose");
    }
    return b->getAttribute("enclose");
};

void mei::EnclosingcharsMixIn::setEnclose(std::string _enclose) {
    if (!b->hasAttribute("enclose")) {
        MeiAttribute *a = new MeiAttribute("enclose", _enclose);
        b->addAttribute(a);
    }
};

bool mei::EnclosingcharsMixIn::hasEnclose() {
    return b->hasAttribute("enclose");
};

void mei::EnclosingcharsMixIn::removeEnclose() {
    b->removeAttribute("enclose");
};

mei::FermatapresentMixIn::FermatapresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::FermatapresentMixIn::~FermatapresentMixIn() {}
MeiAttribute* mei::FermatapresentMixIn::getFermata() {
    if (!b->hasAttribute("fermata")) {
        throw AttributeNotFoundException("fermata");
    }
    return b->getAttribute("fermata");
};

void mei::FermatapresentMixIn::setFermata(std::string _fermata) {
    if (!b->hasAttribute("fermata")) {
        MeiAttribute *a = new MeiAttribute("fermata", _fermata);
        b->addAttribute(a);
    }
};

bool mei::FermatapresentMixIn::hasFermata() {
    return b->hasAttribute("fermata");
};

void mei::FermatapresentMixIn::removeFermata() {
    b->removeAttribute("fermata");
};

mei::HandidentMixIn::HandidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::HandidentMixIn::~HandidentMixIn() {}
MeiAttribute* mei::HandidentMixIn::getHand() {
    if (!b->hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->getAttribute("hand");
};

void mei::HandidentMixIn::setHand(std::string _hand) {
    if (!b->hasAttribute("hand")) {
        MeiAttribute *a = new MeiAttribute("hand", _hand);
        b->addAttribute(a);
    }
};

bool mei::HandidentMixIn::hasHand() {
    return b->hasAttribute("hand");
};

void mei::HandidentMixIn::removeHand() {
    b->removeAttribute("hand");
};

mei::HorizontalalignMixIn::HorizontalalignMixIn(MeiElement *b) {
    this->b = b;
};

mei::HorizontalalignMixIn::~HorizontalalignMixIn() {}
MeiAttribute* mei::HorizontalalignMixIn::getHalign() {
    if (!b->hasAttribute("halign")) {
        throw AttributeNotFoundException("halign");
    }
    return b->getAttribute("halign");
};

void mei::HorizontalalignMixIn::setHalign(std::string _halign) {
    if (!b->hasAttribute("halign")) {
        MeiAttribute *a = new MeiAttribute("halign", _halign);
        b->addAttribute(a);
    }
};

bool mei::HorizontalalignMixIn::hasHalign() {
    return b->hasAttribute("halign");
};

void mei::HorizontalalignMixIn::removeHalign() {
    b->removeAttribute("halign");
};

mei::InstrumentidentMixIn::InstrumentidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::InstrumentidentMixIn::~InstrumentidentMixIn() {}
MeiAttribute* mei::InstrumentidentMixIn::getInstr() {
    if (!b->hasAttribute("instr")) {
        throw AttributeNotFoundException("instr");
    }
    return b->getAttribute("instr");
};

void mei::InstrumentidentMixIn::setInstr(std::string _instr) {
    if (!b->hasAttribute("instr")) {
        MeiAttribute *a = new MeiAttribute("instr", _instr);
        b->addAttribute(a);
    }
};

bool mei::InstrumentidentMixIn::hasInstr() {
    return b->hasAttribute("instr");
};

void mei::InstrumentidentMixIn::removeInstr() {
    b->removeAttribute("instr");
};

mei::InternetmediaMixIn::InternetmediaMixIn(MeiElement *b) {
    this->b = b;
};

mei::InternetmediaMixIn::~InternetmediaMixIn() {}
MeiAttribute* mei::InternetmediaMixIn::getMimetype() {
    if (!b->hasAttribute("mimetype")) {
        throw AttributeNotFoundException("mimetype");
    }
    return b->getAttribute("mimetype");
};

void mei::InternetmediaMixIn::setMimetype(std::string _mimetype) {
    if (!b->hasAttribute("mimetype")) {
        MeiAttribute *a = new MeiAttribute("mimetype", _mimetype);
        b->addAttribute(a);
    }
};

bool mei::InternetmediaMixIn::hasMimetype() {
    return b->hasAttribute("mimetype");
};

void mei::InternetmediaMixIn::removeMimetype() {
    b->removeAttribute("mimetype");
};

mei::JoinedMixIn::JoinedMixIn(MeiElement *b) {
    this->b = b;
};

mei::JoinedMixIn::~JoinedMixIn() {}
MeiAttribute* mei::JoinedMixIn::getJoin() {
    if (!b->hasAttribute("join")) {
        throw AttributeNotFoundException("join");
    }
    return b->getAttribute("join");
};

void mei::JoinedMixIn::setJoin(std::string _join) {
    if (!b->hasAttribute("join")) {
        MeiAttribute *a = new MeiAttribute("join", _join);
        b->addAttribute(a);
    }
};

bool mei::JoinedMixIn::hasJoin() {
    return b->hasAttribute("join");
};

void mei::JoinedMixIn::removeJoin() {
    b->removeAttribute("join");
};

mei::KeysigsLogMixIn::KeysigsLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeysigsLogMixIn::~KeysigsLogMixIn() {}
MeiAttribute* mei::KeysigsLogMixIn::getKeyAccid() {
    if (!b->hasAttribute("key.accid")) {
        throw AttributeNotFoundException("key.accid");
    }
    return b->getAttribute("key.accid");
};

void mei::KeysigsLogMixIn::setKeyAccid(std::string _keyaccid) {
    if (!b->hasAttribute("key.accid")) {
        MeiAttribute *a = new MeiAttribute("key.accid", _keyaccid);
        b->addAttribute(a);
    }
};

bool mei::KeysigsLogMixIn::hasKeyAccid() {
    return b->hasAttribute("key.accid");
};

void mei::KeysigsLogMixIn::removeKeyAccid() {
    b->removeAttribute("key.accid");
};
MeiAttribute* mei::KeysigsLogMixIn::getKeyMode() {
    if (!b->hasAttribute("key.mode")) {
        throw AttributeNotFoundException("key.mode");
    }
    return b->getAttribute("key.mode");
};

void mei::KeysigsLogMixIn::setKeyMode(std::string _keymode) {
    if (!b->hasAttribute("key.mode")) {
        MeiAttribute *a = new MeiAttribute("key.mode", _keymode);
        b->addAttribute(a);
    }
};

bool mei::KeysigsLogMixIn::hasKeyMode() {
    return b->hasAttribute("key.mode");
};

void mei::KeysigsLogMixIn::removeKeyMode() {
    b->removeAttribute("key.mode");
};
MeiAttribute* mei::KeysigsLogMixIn::getKeyPname() {
    if (!b->hasAttribute("key.pname")) {
        throw AttributeNotFoundException("key.pname");
    }
    return b->getAttribute("key.pname");
};

void mei::KeysigsLogMixIn::setKeyPname(std::string _keypname) {
    if (!b->hasAttribute("key.pname")) {
        MeiAttribute *a = new MeiAttribute("key.pname", _keypname);
        b->addAttribute(a);
    }
};

bool mei::KeysigsLogMixIn::hasKeyPname() {
    return b->hasAttribute("key.pname");
};

void mei::KeysigsLogMixIn::removeKeyPname() {
    b->removeAttribute("key.pname");
};
MeiAttribute* mei::KeysigsLogMixIn::getKeySig() {
    if (!b->hasAttribute("key.sig")) {
        throw AttributeNotFoundException("key.sig");
    }
    return b->getAttribute("key.sig");
};

void mei::KeysigsLogMixIn::setKeySig(std::string _keysig) {
    if (!b->hasAttribute("key.sig")) {
        MeiAttribute *a = new MeiAttribute("key.sig", _keysig);
        b->addAttribute(a);
    }
};

bool mei::KeysigsLogMixIn::hasKeySig() {
    return b->hasAttribute("key.sig");
};

void mei::KeysigsLogMixIn::removeKeySig() {
    b->removeAttribute("key.sig");
};
MeiAttribute* mei::KeysigsLogMixIn::getKeySigMixed() {
    if (!b->hasAttribute("key.sig.mixed")) {
        throw AttributeNotFoundException("key.sig.mixed");
    }
    return b->getAttribute("key.sig.mixed");
};

void mei::KeysigsLogMixIn::setKeySigMixed(std::string _keysigmixed) {
    if (!b->hasAttribute("key.sig.mixed")) {
        MeiAttribute *a = new MeiAttribute("key.sig.mixed", _keysigmixed);
        b->addAttribute(a);
    }
};

bool mei::KeysigsLogMixIn::hasKeySigMixed() {
    return b->hasAttribute("key.sig.mixed");
};

void mei::KeysigsLogMixIn::removeKeySigMixed() {
    b->removeAttribute("key.sig.mixed");
};

mei::KeysigsVisMixIn::KeysigsVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeysigsVisMixIn::~KeysigsVisMixIn() {}
MeiAttribute* mei::KeysigsVisMixIn::getKeySigShow() {
    if (!b->hasAttribute("key.sig.show")) {
        throw AttributeNotFoundException("key.sig.show");
    }
    return b->getAttribute("key.sig.show");
};

void mei::KeysigsVisMixIn::setKeySigShow(std::string _keysigshow) {
    if (!b->hasAttribute("key.sig.show")) {
        MeiAttribute *a = new MeiAttribute("key.sig.show", _keysigshow);
        b->addAttribute(a);
    }
};

bool mei::KeysigsVisMixIn::hasKeySigShow() {
    return b->hasAttribute("key.sig.show");
};

void mei::KeysigsVisMixIn::removeKeySigShow() {
    b->removeAttribute("key.sig.show");
};
MeiAttribute* mei::KeysigsVisMixIn::getKeySigShowchange() {
    if (!b->hasAttribute("key.sig.showchange")) {
        throw AttributeNotFoundException("key.sig.showchange");
    }
    return b->getAttribute("key.sig.showchange");
};

void mei::KeysigsVisMixIn::setKeySigShowchange(std::string _keysigshowchange) {
    if (!b->hasAttribute("key.sig.showchange")) {
        MeiAttribute *a = new MeiAttribute("key.sig.showchange", _keysigshowchange);
        b->addAttribute(a);
    }
};

bool mei::KeysigsVisMixIn::hasKeySigShowchange() {
    return b->hasAttribute("key.sig.showchange");
};

void mei::KeysigsVisMixIn::removeKeySigShowchange() {
    b->removeAttribute("key.sig.showchange");
};

mei::LabelsAddlMixIn::LabelsAddlMixIn(MeiElement *b) {
    this->b = b;
};

mei::LabelsAddlMixIn::~LabelsAddlMixIn() {}
MeiAttribute* mei::LabelsAddlMixIn::getLabelAbbr() {
    if (!b->hasAttribute("label.abbr")) {
        throw AttributeNotFoundException("label.abbr");
    }
    return b->getAttribute("label.abbr");
};

void mei::LabelsAddlMixIn::setLabelAbbr(std::string _labelabbr) {
    if (!b->hasAttribute("label.abbr")) {
        MeiAttribute *a = new MeiAttribute("label.abbr", _labelabbr);
        b->addAttribute(a);
    }
};

bool mei::LabelsAddlMixIn::hasLabelAbbr() {
    return b->hasAttribute("label.abbr");
};

void mei::LabelsAddlMixIn::removeLabelAbbr() {
    b->removeAttribute("label.abbr");
};

mei::LangMixIn::LangMixIn(MeiElement *b) {
    this->b = b;
};

mei::LangMixIn::~LangMixIn() {}
MeiAttribute* mei::LangMixIn::getLang() {
    if (!b->hasAttribute("lang")) {
        throw AttributeNotFoundException("lang");
    }
    return b->getAttribute("lang");
};

void mei::LangMixIn::setLang(std::string _lang) {
    if (!b->hasAttribute("lang")) {
        MeiAttribute *a = new MeiAttribute("lang", _lang);
        b->addAttribute(a);
    }
};

bool mei::LangMixIn::hasLang() {
    return b->hasAttribute("lang");
};

void mei::LangMixIn::removeLang() {
    b->removeAttribute("lang");
};

mei::LayeridentMixIn::LayeridentMixIn(MeiElement *b) {
    this->b = b;
};

mei::LayeridentMixIn::~LayeridentMixIn() {}
MeiAttribute* mei::LayeridentMixIn::getLayer() {
    if (!b->hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->getAttribute("layer");
};

void mei::LayeridentMixIn::setLayer(std::string _layer) {
    if (!b->hasAttribute("layer")) {
        MeiAttribute *a = new MeiAttribute("layer", _layer);
        b->addAttribute(a);
    }
};

bool mei::LayeridentMixIn::hasLayer() {
    return b->hasAttribute("layer");
};

void mei::LayeridentMixIn::removeLayer() {
    b->removeAttribute("layer");
};

mei::LinelocMixIn::LinelocMixIn(MeiElement *b) {
    this->b = b;
};

mei::LinelocMixIn::~LinelocMixIn() {}
MeiAttribute* mei::LinelocMixIn::getLine() {
    if (!b->hasAttribute("line")) {
        throw AttributeNotFoundException("line");
    }
    return b->getAttribute("line");
};

void mei::LinelocMixIn::setLine(std::string _line) {
    if (!b->hasAttribute("line")) {
        MeiAttribute *a = new MeiAttribute("line", _line);
        b->addAttribute(a);
    }
};

bool mei::LinelocMixIn::hasLine() {
    return b->hasAttribute("line");
};

void mei::LinelocMixIn::removeLine() {
    b->removeAttribute("line");
};

mei::LinerendMixIn::LinerendMixIn(MeiElement *b) {
    this->b = b;
};

mei::LinerendMixIn::~LinerendMixIn() {}
MeiAttribute* mei::LinerendMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::LinerendMixIn::setRend(std::string _rend) {
    if (!b->hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->addAttribute(a);
    }
};

bool mei::LinerendMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::LinerendMixIn::removeRend() {
    b->removeAttribute("rend");
};

mei::LyricstyleMixIn::LyricstyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::LyricstyleMixIn::~LyricstyleMixIn() {}
MeiAttribute* mei::LyricstyleMixIn::getLyricAlign() {
    if (!b->hasAttribute("lyric.align")) {
        throw AttributeNotFoundException("lyric.align");
    }
    return b->getAttribute("lyric.align");
};

void mei::LyricstyleMixIn::setLyricAlign(std::string _lyricalign) {
    if (!b->hasAttribute("lyric.align")) {
        MeiAttribute *a = new MeiAttribute("lyric.align", _lyricalign);
        b->addAttribute(a);
    }
};

bool mei::LyricstyleMixIn::hasLyricAlign() {
    return b->hasAttribute("lyric.align");
};

void mei::LyricstyleMixIn::removeLyricAlign() {
    b->removeAttribute("lyric.align");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricFam() {
    if (!b->hasAttribute("lyric.fam")) {
        throw AttributeNotFoundException("lyric.fam");
    }
    return b->getAttribute("lyric.fam");
};

void mei::LyricstyleMixIn::setLyricFam(std::string _lyricfam) {
    if (!b->hasAttribute("lyric.fam")) {
        MeiAttribute *a = new MeiAttribute("lyric.fam", _lyricfam);
        b->addAttribute(a);
    }
};

bool mei::LyricstyleMixIn::hasLyricFam() {
    return b->hasAttribute("lyric.fam");
};

void mei::LyricstyleMixIn::removeLyricFam() {
    b->removeAttribute("lyric.fam");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricName() {
    if (!b->hasAttribute("lyric.name")) {
        throw AttributeNotFoundException("lyric.name");
    }
    return b->getAttribute("lyric.name");
};

void mei::LyricstyleMixIn::setLyricName(std::string _lyricname) {
    if (!b->hasAttribute("lyric.name")) {
        MeiAttribute *a = new MeiAttribute("lyric.name", _lyricname);
        b->addAttribute(a);
    }
};

bool mei::LyricstyleMixIn::hasLyricName() {
    return b->hasAttribute("lyric.name");
};

void mei::LyricstyleMixIn::removeLyricName() {
    b->removeAttribute("lyric.name");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricSize() {
    if (!b->hasAttribute("lyric.size")) {
        throw AttributeNotFoundException("lyric.size");
    }
    return b->getAttribute("lyric.size");
};

void mei::LyricstyleMixIn::setLyricSize(std::string _lyricsize) {
    if (!b->hasAttribute("lyric.size")) {
        MeiAttribute *a = new MeiAttribute("lyric.size", _lyricsize);
        b->addAttribute(a);
    }
};

bool mei::LyricstyleMixIn::hasLyricSize() {
    return b->hasAttribute("lyric.size");
};

void mei::LyricstyleMixIn::removeLyricSize() {
    b->removeAttribute("lyric.size");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricStyle() {
    if (!b->hasAttribute("lyric.style")) {
        throw AttributeNotFoundException("lyric.style");
    }
    return b->getAttribute("lyric.style");
};

void mei::LyricstyleMixIn::setLyricStyle(std::string _lyricstyle) {
    if (!b->hasAttribute("lyric.style")) {
        MeiAttribute *a = new MeiAttribute("lyric.style", _lyricstyle);
        b->addAttribute(a);
    }
};

bool mei::LyricstyleMixIn::hasLyricStyle() {
    return b->hasAttribute("lyric.style");
};

void mei::LyricstyleMixIn::removeLyricStyle() {
    b->removeAttribute("lyric.style");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricWeight() {
    if (!b->hasAttribute("lyric.weight")) {
        throw AttributeNotFoundException("lyric.weight");
    }
    return b->getAttribute("lyric.weight");
};

void mei::LyricstyleMixIn::setLyricWeight(std::string _lyricweight) {
    if (!b->hasAttribute("lyric.weight")) {
        MeiAttribute *a = new MeiAttribute("lyric.weight", _lyricweight);
        b->addAttribute(a);
    }
};

bool mei::LyricstyleMixIn::hasLyricWeight() {
    return b->hasAttribute("lyric.weight");
};

void mei::LyricstyleMixIn::removeLyricWeight() {
    b->removeAttribute("lyric.weight");
};

mei::MeasureLogMixIn::MeasureLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasureLogMixIn::~MeasureLogMixIn() {}
MeiAttribute* mei::MeasureLogMixIn::getLeft() {
    if (!b->hasAttribute("left")) {
        throw AttributeNotFoundException("left");
    }
    return b->getAttribute("left");
};

void mei::MeasureLogMixIn::setLeft(std::string _left) {
    if (!b->hasAttribute("left")) {
        MeiAttribute *a = new MeiAttribute("left", _left);
        b->addAttribute(a);
    }
};

bool mei::MeasureLogMixIn::hasLeft() {
    return b->hasAttribute("left");
};

void mei::MeasureLogMixIn::removeLeft() {
    b->removeAttribute("left");
};
MeiAttribute* mei::MeasureLogMixIn::getRight() {
    if (!b->hasAttribute("right")) {
        throw AttributeNotFoundException("right");
    }
    return b->getAttribute("right");
};

void mei::MeasureLogMixIn::setRight(std::string _right) {
    if (!b->hasAttribute("right")) {
        MeiAttribute *a = new MeiAttribute("right", _right);
        b->addAttribute(a);
    }
};

bool mei::MeasureLogMixIn::hasRight() {
    return b->hasAttribute("right");
};

void mei::MeasureLogMixIn::removeRight() {
    b->removeAttribute("right");
};

mei::MeasurementMixIn::MeasurementMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasurementMixIn::~MeasurementMixIn() {}
MeiAttribute* mei::MeasurementMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->getAttribute("unit");
};

void mei::MeasurementMixIn::setUnit(std::string _unit) {
    if (!b->hasAttribute("unit")) {
        MeiAttribute *a = new MeiAttribute("unit", _unit);
        b->addAttribute(a);
    }
};

bool mei::MeasurementMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::MeasurementMixIn::removeUnit() {
    b->removeAttribute("unit");
};

mei::MediumMixIn::MediumMixIn(MeiElement *b) {
    this->b = b;
};

mei::MediumMixIn::~MediumMixIn() {}
MeiAttribute* mei::MediumMixIn::getMedium() {
    if (!b->hasAttribute("medium")) {
        throw AttributeNotFoundException("medium");
    }
    return b->getAttribute("medium");
};

void mei::MediumMixIn::setMedium(std::string _medium) {
    if (!b->hasAttribute("medium")) {
        MeiAttribute *a = new MeiAttribute("medium", _medium);
        b->addAttribute(a);
    }
};

bool mei::MediumMixIn::hasMedium() {
    return b->hasAttribute("medium");
};

void mei::MediumMixIn::removeMedium() {
    b->removeAttribute("medium");
};

mei::MeiversionMixIn::MeiversionMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeiversionMixIn::~MeiversionMixIn() {}
MeiAttribute* mei::MeiversionMixIn::getMeiversion() {
    if (!b->hasAttribute("meiversion")) {
        throw AttributeNotFoundException("meiversion");
    }
    return b->getAttribute("meiversion");
};

void mei::MeiversionMixIn::setMeiversion(std::string _meiversion) {
    if (!b->hasAttribute("meiversion")) {
        MeiAttribute *a = new MeiAttribute("meiversion", _meiversion);
        b->addAttribute(a);
    }
};

bool mei::MeiversionMixIn::hasMeiversion() {
    return b->hasAttribute("meiversion");
};

void mei::MeiversionMixIn::removeMeiversion() {
    b->removeAttribute("meiversion");
};

mei::MeterconformanceMixIn::MeterconformanceMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterconformanceMixIn::~MeterconformanceMixIn() {}
MeiAttribute* mei::MeterconformanceMixIn::getMetcon() {
    if (!b->hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->getAttribute("metcon");
};

void mei::MeterconformanceMixIn::setMetcon(std::string _metcon) {
    if (!b->hasAttribute("metcon")) {
        MeiAttribute *a = new MeiAttribute("metcon", _metcon);
        b->addAttribute(a);
    }
};

bool mei::MeterconformanceMixIn::hasMetcon() {
    return b->hasAttribute("metcon");
};

void mei::MeterconformanceMixIn::removeMetcon() {
    b->removeAttribute("metcon");
};

mei::MeterconformanceBarMixIn::MeterconformanceBarMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterconformanceBarMixIn::~MeterconformanceBarMixIn() {}
MeiAttribute* mei::MeterconformanceBarMixIn::getMetcon() {
    if (!b->hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->getAttribute("metcon");
};

void mei::MeterconformanceBarMixIn::setMetcon(std::string _metcon) {
    if (!b->hasAttribute("metcon")) {
        MeiAttribute *a = new MeiAttribute("metcon", _metcon);
        b->addAttribute(a);
    }
};

bool mei::MeterconformanceBarMixIn::hasMetcon() {
    return b->hasAttribute("metcon");
};

void mei::MeterconformanceBarMixIn::removeMetcon() {
    b->removeAttribute("metcon");
};
MeiAttribute* mei::MeterconformanceBarMixIn::getControl() {
    if (!b->hasAttribute("control")) {
        throw AttributeNotFoundException("control");
    }
    return b->getAttribute("control");
};

void mei::MeterconformanceBarMixIn::setControl(std::string _control) {
    if (!b->hasAttribute("control")) {
        MeiAttribute *a = new MeiAttribute("control", _control);
        b->addAttribute(a);
    }
};

bool mei::MeterconformanceBarMixIn::hasControl() {
    return b->hasAttribute("control");
};

void mei::MeterconformanceBarMixIn::removeControl() {
    b->removeAttribute("control");
};

mei::MetersLogMixIn::MetersLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MetersLogMixIn::~MetersLogMixIn() {}
MeiAttribute* mei::MetersLogMixIn::getMeterCount() {
    if (!b->hasAttribute("meter.count")) {
        throw AttributeNotFoundException("meter.count");
    }
    return b->getAttribute("meter.count");
};

void mei::MetersLogMixIn::setMeterCount(std::string _metercount) {
    if (!b->hasAttribute("meter.count")) {
        MeiAttribute *a = new MeiAttribute("meter.count", _metercount);
        b->addAttribute(a);
    }
};

bool mei::MetersLogMixIn::hasMeterCount() {
    return b->hasAttribute("meter.count");
};

void mei::MetersLogMixIn::removeMeterCount() {
    b->removeAttribute("meter.count");
};
MeiAttribute* mei::MetersLogMixIn::getMeterUnit() {
    if (!b->hasAttribute("meter.unit")) {
        throw AttributeNotFoundException("meter.unit");
    }
    return b->getAttribute("meter.unit");
};

void mei::MetersLogMixIn::setMeterUnit(std::string _meterunit) {
    if (!b->hasAttribute("meter.unit")) {
        MeiAttribute *a = new MeiAttribute("meter.unit", _meterunit);
        b->addAttribute(a);
    }
};

bool mei::MetersLogMixIn::hasMeterUnit() {
    return b->hasAttribute("meter.unit");
};

void mei::MetersLogMixIn::removeMeterUnit() {
    b->removeAttribute("meter.unit");
};

mei::MetersVisMixIn::MetersVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MetersVisMixIn::~MetersVisMixIn() {}
MeiAttribute* mei::MetersVisMixIn::getMeterRend() {
    if (!b->hasAttribute("meter.rend")) {
        throw AttributeNotFoundException("meter.rend");
    }
    return b->getAttribute("meter.rend");
};

void mei::MetersVisMixIn::setMeterRend(std::string _meterrend) {
    if (!b->hasAttribute("meter.rend")) {
        MeiAttribute *a = new MeiAttribute("meter.rend", _meterrend);
        b->addAttribute(a);
    }
};

bool mei::MetersVisMixIn::hasMeterRend() {
    return b->hasAttribute("meter.rend");
};

void mei::MetersVisMixIn::removeMeterRend() {
    b->removeAttribute("meter.rend");
};
MeiAttribute* mei::MetersVisMixIn::getMeterShowchange() {
    if (!b->hasAttribute("meter.showchange")) {
        throw AttributeNotFoundException("meter.showchange");
    }
    return b->getAttribute("meter.showchange");
};

void mei::MetersVisMixIn::setMeterShowchange(std::string _metershowchange) {
    if (!b->hasAttribute("meter.showchange")) {
        MeiAttribute *a = new MeiAttribute("meter.showchange", _metershowchange);
        b->addAttribute(a);
    }
};

bool mei::MetersVisMixIn::hasMeterShowchange() {
    return b->hasAttribute("meter.showchange");
};

void mei::MetersVisMixIn::removeMeterShowchange() {
    b->removeAttribute("meter.showchange");
};
MeiAttribute* mei::MetersVisMixIn::getMeterSym() {
    if (!b->hasAttribute("meter.sym")) {
        throw AttributeNotFoundException("meter.sym");
    }
    return b->getAttribute("meter.sym");
};

void mei::MetersVisMixIn::setMeterSym(std::string _metersym) {
    if (!b->hasAttribute("meter.sym")) {
        MeiAttribute *a = new MeiAttribute("meter.sym", _metersym);
        b->addAttribute(a);
    }
};

bool mei::MetersVisMixIn::hasMeterSym() {
    return b->hasAttribute("meter.sym");
};

void mei::MetersVisMixIn::removeMeterSym() {
    b->removeAttribute("meter.sym");
};

mei::MmtempoMixIn::MmtempoMixIn(MeiElement *b) {
    this->b = b;
};

mei::MmtempoMixIn::~MmtempoMixIn() {}
MeiAttribute* mei::MmtempoMixIn::getMm() {
    if (!b->hasAttribute("mm")) {
        throw AttributeNotFoundException("mm");
    }
    return b->getAttribute("mm");
};

void mei::MmtempoMixIn::setMm(std::string _mm) {
    if (!b->hasAttribute("mm")) {
        MeiAttribute *a = new MeiAttribute("mm", _mm);
        b->addAttribute(a);
    }
};

bool mei::MmtempoMixIn::hasMm() {
    return b->hasAttribute("mm");
};

void mei::MmtempoMixIn::removeMm() {
    b->removeAttribute("mm");
};

mei::MultinummeasuresMixIn::MultinummeasuresMixIn(MeiElement *b) {
    this->b = b;
};

mei::MultinummeasuresMixIn::~MultinummeasuresMixIn() {}
MeiAttribute* mei::MultinummeasuresMixIn::getMultiNumber() {
    if (!b->hasAttribute("multi.number")) {
        throw AttributeNotFoundException("multi.number");
    }
    return b->getAttribute("multi.number");
};

void mei::MultinummeasuresMixIn::setMultiNumber(std::string _multinumber) {
    if (!b->hasAttribute("multi.number")) {
        MeiAttribute *a = new MeiAttribute("multi.number", _multinumber);
        b->addAttribute(a);
    }
};

bool mei::MultinummeasuresMixIn::hasMultiNumber() {
    return b->hasAttribute("multi.number");
};

void mei::MultinummeasuresMixIn::removeMultiNumber() {
    b->removeAttribute("multi.number");
};

mei::NameMixIn::NameMixIn(MeiElement *b) {
    this->b = b;
};

mei::NameMixIn::~NameMixIn() {}
MeiAttribute* mei::NameMixIn::getNymref() {
    if (!b->hasAttribute("nymref")) {
        throw AttributeNotFoundException("nymref");
    }
    return b->getAttribute("nymref");
};

void mei::NameMixIn::setNymref(std::string _nymref) {
    if (!b->hasAttribute("nymref")) {
        MeiAttribute *a = new MeiAttribute("nymref", _nymref);
        b->addAttribute(a);
    }
};

bool mei::NameMixIn::hasNymref() {
    return b->hasAttribute("nymref");
};

void mei::NameMixIn::removeNymref() {
    b->removeAttribute("nymref");
};
MeiAttribute* mei::NameMixIn::getRole() {
    if (!b->hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->getAttribute("role");
};

void mei::NameMixIn::setRole(std::string _role) {
    if (!b->hasAttribute("role")) {
        MeiAttribute *a = new MeiAttribute("role", _role);
        b->addAttribute(a);
    }
};

bool mei::NameMixIn::hasRole() {
    return b->hasAttribute("role");
};

void mei::NameMixIn::removeRole() {
    b->removeAttribute("role");
};

mei::NoteGesMixIn::NoteGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteGesMixIn::~NoteGesMixIn() {}
MeiAttribute* mei::NoteGesMixIn::getOctGes() {
    if (!b->hasAttribute("oct.ges")) {
        throw AttributeNotFoundException("oct.ges");
    }
    return b->getAttribute("oct.ges");
};

void mei::NoteGesMixIn::setOctGes(std::string _octges) {
    if (!b->hasAttribute("oct.ges")) {
        MeiAttribute *a = new MeiAttribute("oct.ges", _octges);
        b->addAttribute(a);
    }
};

bool mei::NoteGesMixIn::hasOctGes() {
    return b->hasAttribute("oct.ges");
};

void mei::NoteGesMixIn::removeOctGes() {
    b->removeAttribute("oct.ges");
};
MeiAttribute* mei::NoteGesMixIn::getPnameGes() {
    if (!b->hasAttribute("pname.ges")) {
        throw AttributeNotFoundException("pname.ges");
    }
    return b->getAttribute("pname.ges");
};

void mei::NoteGesMixIn::setPnameGes(std::string _pnameges) {
    if (!b->hasAttribute("pname.ges")) {
        MeiAttribute *a = new MeiAttribute("pname.ges", _pnameges);
        b->addAttribute(a);
    }
};

bool mei::NoteGesMixIn::hasPnameGes() {
    return b->hasAttribute("pname.ges");
};

void mei::NoteGesMixIn::removePnameGes() {
    b->removeAttribute("pname.ges");
};
MeiAttribute* mei::NoteGesMixIn::getPnum() {
    if (!b->hasAttribute("pnum")) {
        throw AttributeNotFoundException("pnum");
    }
    return b->getAttribute("pnum");
};

void mei::NoteGesMixIn::setPnum(std::string _pnum) {
    if (!b->hasAttribute("pnum")) {
        MeiAttribute *a = new MeiAttribute("pnum", _pnum);
        b->addAttribute(a);
    }
};

bool mei::NoteGesMixIn::hasPnum() {
    return b->hasAttribute("pnum");
};

void mei::NoteGesMixIn::removePnum() {
    b->removeAttribute("pnum");
};

mei::NoteVisMixIn::NoteVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteVisMixIn::~NoteVisMixIn() {}
MeiAttribute* mei::NoteVisMixIn::getHeadshape() {
    if (!b->hasAttribute("headshape")) {
        throw AttributeNotFoundException("headshape");
    }
    return b->getAttribute("headshape");
};

void mei::NoteVisMixIn::setHeadshape(std::string _headshape) {
    if (!b->hasAttribute("headshape")) {
        MeiAttribute *a = new MeiAttribute("headshape", _headshape);
        b->addAttribute(a);
    }
};

bool mei::NoteVisMixIn::hasHeadshape() {
    return b->hasAttribute("headshape");
};

void mei::NoteVisMixIn::removeHeadshape() {
    b->removeAttribute("headshape");
};

mei::OctaveMixIn::OctaveMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctaveMixIn::~OctaveMixIn() {}
MeiAttribute* mei::OctaveMixIn::getOct() {
    if (!b->hasAttribute("oct")) {
        throw AttributeNotFoundException("oct");
    }
    return b->getAttribute("oct");
};

void mei::OctaveMixIn::setOct(std::string _oct) {
    if (!b->hasAttribute("oct")) {
        MeiAttribute *a = new MeiAttribute("oct", _oct);
        b->addAttribute(a);
    }
};

bool mei::OctaveMixIn::hasOct() {
    return b->hasAttribute("oct");
};

void mei::OctaveMixIn::removeOct() {
    b->removeAttribute("oct");
};

mei::OctavedefaultMixIn::OctavedefaultMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctavedefaultMixIn::~OctavedefaultMixIn() {}
MeiAttribute* mei::OctavedefaultMixIn::getOctaveDefault() {
    if (!b->hasAttribute("octave.default")) {
        throw AttributeNotFoundException("octave.default");
    }
    return b->getAttribute("octave.default");
};

void mei::OctavedefaultMixIn::setOctaveDefault(std::string _octavedefault) {
    if (!b->hasAttribute("octave.default")) {
        MeiAttribute *a = new MeiAttribute("octave.default", _octavedefault);
        b->addAttribute(a);
    }
};

bool mei::OctavedefaultMixIn::hasOctaveDefault() {
    return b->hasAttribute("octave.default");
};

void mei::OctavedefaultMixIn::removeOctaveDefault() {
    b->removeAttribute("octave.default");
};

mei::OctavedisplacementMixIn::OctavedisplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctavedisplacementMixIn::~OctavedisplacementMixIn() {}
MeiAttribute* mei::OctavedisplacementMixIn::getDis() {
    if (!b->hasAttribute("dis")) {
        throw AttributeNotFoundException("dis");
    }
    return b->getAttribute("dis");
};

void mei::OctavedisplacementMixIn::setDis(std::string _dis) {
    if (!b->hasAttribute("dis")) {
        MeiAttribute *a = new MeiAttribute("dis", _dis);
        b->addAttribute(a);
    }
};

bool mei::OctavedisplacementMixIn::hasDis() {
    return b->hasAttribute("dis");
};

void mei::OctavedisplacementMixIn::removeDis() {
    b->removeAttribute("dis");
};
MeiAttribute* mei::OctavedisplacementMixIn::getDisPlace() {
    if (!b->hasAttribute("dis.place")) {
        throw AttributeNotFoundException("dis.place");
    }
    return b->getAttribute("dis.place");
};

void mei::OctavedisplacementMixIn::setDisPlace(std::string _displace) {
    if (!b->hasAttribute("dis.place")) {
        MeiAttribute *a = new MeiAttribute("dis.place", _displace);
        b->addAttribute(a);
    }
};

bool mei::OctavedisplacementMixIn::hasDisPlace() {
    return b->hasAttribute("dis.place");
};

void mei::OctavedisplacementMixIn::removeDisPlace() {
    b->removeAttribute("dis.place");
};

mei::OnelinestaffMixIn::OnelinestaffMixIn(MeiElement *b) {
    this->b = b;
};

mei::OnelinestaffMixIn::~OnelinestaffMixIn() {}
MeiAttribute* mei::OnelinestaffMixIn::getOntheline() {
    if (!b->hasAttribute("ontheline")) {
        throw AttributeNotFoundException("ontheline");
    }
    return b->getAttribute("ontheline");
};

void mei::OnelinestaffMixIn::setOntheline(std::string _ontheline) {
    if (!b->hasAttribute("ontheline")) {
        MeiAttribute *a = new MeiAttribute("ontheline", _ontheline);
        b->addAttribute(a);
    }
};

bool mei::OnelinestaffMixIn::hasOntheline() {
    return b->hasAttribute("ontheline");
};

void mei::OnelinestaffMixIn::removeOntheline() {
    b->removeAttribute("ontheline");
};

mei::PadLogMixIn::PadLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::PadLogMixIn::~PadLogMixIn() {}
MeiAttribute* mei::PadLogMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->getAttribute("num");
};

void mei::PadLogMixIn::setNum(std::string _num) {
    if (!b->hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        b->addAttribute(a);
    }
};

bool mei::PadLogMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::PadLogMixIn::removeNum() {
    b->removeAttribute("num");
};

mei::PbVisMixIn::PbVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::PbVisMixIn::~PbVisMixIn() {}
MeiAttribute* mei::PbVisMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return b->getAttribute("func");
};

void mei::PbVisMixIn::setFunc(std::string _func) {
    if (!b->hasAttribute("func")) {
        MeiAttribute *a = new MeiAttribute("func", _func);
        b->addAttribute(a);
    }
};

bool mei::PbVisMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::PbVisMixIn::removeFunc() {
    b->removeAttribute("func");
};

mei::PitchMixIn::PitchMixIn(MeiElement *b) {
    this->b = b;
};

mei::PitchMixIn::~PitchMixIn() {}
MeiAttribute* mei::PitchMixIn::getPname() {
    if (!b->hasAttribute("pname")) {
        throw AttributeNotFoundException("pname");
    }
    return b->getAttribute("pname");
};

void mei::PitchMixIn::setPname(std::string _pname) {
    if (!b->hasAttribute("pname")) {
        MeiAttribute *a = new MeiAttribute("pname", _pname);
        b->addAttribute(a);
    }
};

bool mei::PitchMixIn::hasPname() {
    return b->hasAttribute("pname");
};

void mei::PitchMixIn::removePname() {
    b->removeAttribute("pname");
};

mei::PlacementMixIn::PlacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::PlacementMixIn::~PlacementMixIn() {}
MeiAttribute* mei::PlacementMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->getAttribute("place");
};

void mei::PlacementMixIn::setPlace(std::string _place) {
    if (!b->hasAttribute("place")) {
        MeiAttribute *a = new MeiAttribute("place", _place);
        b->addAttribute(a);
    }
};

bool mei::PlacementMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::PlacementMixIn::removePlace() {
    b->removeAttribute("place");
};

mei::PointingMixIn::PointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::PointingMixIn::~PointingMixIn() {}
MeiAttribute* mei::PointingMixIn::getActuate() {
    if (!b->hasAttribute("actuate")) {
        throw AttributeNotFoundException("actuate");
    }
    return b->getAttribute("actuate");
};

void mei::PointingMixIn::setActuate(std::string _actuate) {
    if (!b->hasAttribute("actuate")) {
        MeiAttribute *a = new MeiAttribute("actuate", _actuate);
        b->addAttribute(a);
    }
};

bool mei::PointingMixIn::hasActuate() {
    return b->hasAttribute("actuate");
};

void mei::PointingMixIn::removeActuate() {
    b->removeAttribute("actuate");
};
MeiAttribute* mei::PointingMixIn::getRole() {
    if (!b->hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->getAttribute("role");
};

void mei::PointingMixIn::setRole(std::string _role) {
    if (!b->hasAttribute("role")) {
        MeiAttribute *a = new MeiAttribute("role", _role);
        b->addAttribute(a);
    }
};

bool mei::PointingMixIn::hasRole() {
    return b->hasAttribute("role");
};

void mei::PointingMixIn::removeRole() {
    b->removeAttribute("role");
};
MeiAttribute* mei::PointingMixIn::getShow() {
    if (!b->hasAttribute("show")) {
        throw AttributeNotFoundException("show");
    }
    return b->getAttribute("show");
};

void mei::PointingMixIn::setShow(std::string _show) {
    if (!b->hasAttribute("show")) {
        MeiAttribute *a = new MeiAttribute("show", _show);
        b->addAttribute(a);
    }
};

bool mei::PointingMixIn::hasShow() {
    return b->hasAttribute("show");
};

void mei::PointingMixIn::removeShow() {
    b->removeAttribute("show");
};
MeiAttribute* mei::PointingMixIn::getTargettype() {
    if (!b->hasAttribute("targettype")) {
        throw AttributeNotFoundException("targettype");
    }
    return b->getAttribute("targettype");
};

void mei::PointingMixIn::setTargettype(std::string _targettype) {
    if (!b->hasAttribute("targettype")) {
        MeiAttribute *a = new MeiAttribute("targettype", _targettype);
        b->addAttribute(a);
    }
};

bool mei::PointingMixIn::hasTargettype() {
    return b->hasAttribute("targettype");
};

void mei::PointingMixIn::removeTargettype() {
    b->removeAttribute("targettype");
};
MeiAttribute* mei::PointingMixIn::getTitle() {
    if (!b->hasAttribute("title")) {
        throw AttributeNotFoundException("title");
    }
    return b->getAttribute("title");
};

void mei::PointingMixIn::setTitle(std::string _title) {
    if (!b->hasAttribute("title")) {
        MeiAttribute *a = new MeiAttribute("title", _title);
        b->addAttribute(a);
    }
};

bool mei::PointingMixIn::hasTitle() {
    return b->hasAttribute("title");
};

void mei::PointingMixIn::removeTitle() {
    b->removeAttribute("title");
};

mei::RegularizedMixIn::RegularizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::RegularizedMixIn::~RegularizedMixIn() {}
MeiAttribute* mei::RegularizedMixIn::getReg() {
    if (!b->hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return b->getAttribute("reg");
};

void mei::RegularizedMixIn::setReg(std::string _reg) {
    if (!b->hasAttribute("reg")) {
        MeiAttribute *a = new MeiAttribute("reg", _reg);
        b->addAttribute(a);
    }
};

bool mei::RegularizedMixIn::hasReg() {
    return b->hasAttribute("reg");
};

void mei::RegularizedMixIn::removeReg() {
    b->removeAttribute("reg");
};

mei::RelativesizeMixIn::RelativesizeMixIn(MeiElement *b) {
    this->b = b;
};

mei::RelativesizeMixIn::~RelativesizeMixIn() {}
MeiAttribute* mei::RelativesizeMixIn::getSize() {
    if (!b->hasAttribute("size")) {
        throw AttributeNotFoundException("size");
    }
    return b->getAttribute("size");
};

void mei::RelativesizeMixIn::setSize(std::string _size) {
    if (!b->hasAttribute("size")) {
        MeiAttribute *a = new MeiAttribute("size", _size);
        b->addAttribute(a);
    }
};

bool mei::RelativesizeMixIn::hasSize() {
    return b->hasAttribute("size");
};

void mei::RelativesizeMixIn::removeSize() {
    b->removeAttribute("size");
};

mei::ResponsibilityMixIn::ResponsibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::ResponsibilityMixIn::~ResponsibilityMixIn() {}
MeiAttribute* mei::ResponsibilityMixIn::getResp() {
    if (!b->hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->getAttribute("resp");
};

void mei::ResponsibilityMixIn::setResp(std::string _resp) {
    if (!b->hasAttribute("resp")) {
        MeiAttribute *a = new MeiAttribute("resp", _resp);
        b->addAttribute(a);
    }
};

bool mei::ResponsibilityMixIn::hasResp() {
    return b->hasAttribute("resp");
};

void mei::ResponsibilityMixIn::removeResp() {
    b->removeAttribute("resp");
};

mei::SbVisMixIn::SbVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SbVisMixIn::~SbVisMixIn() {}
MeiAttribute* mei::SbVisMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::SbVisMixIn::setRend(std::string _rend) {
    if (!b->hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->addAttribute(a);
    }
};

bool mei::SbVisMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::SbVisMixIn::removeRend() {
    b->removeAttribute("rend");
};

mei::ScalableMixIn::ScalableMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScalableMixIn::~ScalableMixIn() {}
MeiAttribute* mei::ScalableMixIn::getScale() {
    if (!b->hasAttribute("scale")) {
        throw AttributeNotFoundException("scale");
    }
    return b->getAttribute("scale");
};

void mei::ScalableMixIn::setScale(std::string _scale) {
    if (!b->hasAttribute("scale")) {
        MeiAttribute *a = new MeiAttribute("scale", _scale);
        b->addAttribute(a);
    }
};

bool mei::ScalableMixIn::hasScale() {
    return b->hasAttribute("scale");
};

void mei::ScalableMixIn::removeScale() {
    b->removeAttribute("scale");
};

mei::ScoredefGesMixIn::ScoredefGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoredefGesMixIn::~ScoredefGesMixIn() {}
MeiAttribute* mei::ScoredefGesMixIn::getTunePname() {
    if (!b->hasAttribute("tune.pname")) {
        throw AttributeNotFoundException("tune.pname");
    }
    return b->getAttribute("tune.pname");
};

void mei::ScoredefGesMixIn::setTunePname(std::string _tunepname) {
    if (!b->hasAttribute("tune.pname")) {
        MeiAttribute *a = new MeiAttribute("tune.pname", _tunepname);
        b->addAttribute(a);
    }
};

bool mei::ScoredefGesMixIn::hasTunePname() {
    return b->hasAttribute("tune.pname");
};

void mei::ScoredefGesMixIn::removeTunePname() {
    b->removeAttribute("tune.pname");
};
MeiAttribute* mei::ScoredefGesMixIn::getTuneHz() {
    if (!b->hasAttribute("tune.Hz")) {
        throw AttributeNotFoundException("tune.Hz");
    }
    return b->getAttribute("tune.Hz");
};

void mei::ScoredefGesMixIn::setTuneHz(std::string _tuneHz) {
    if (!b->hasAttribute("tune.Hz")) {
        MeiAttribute *a = new MeiAttribute("tune.Hz", _tuneHz);
        b->addAttribute(a);
    }
};

bool mei::ScoredefGesMixIn::hasTuneHz() {
    return b->hasAttribute("tune.Hz");
};

void mei::ScoredefGesMixIn::removeTuneHz() {
    b->removeAttribute("tune.Hz");
};
MeiAttribute* mei::ScoredefGesMixIn::getTuneTemper() {
    if (!b->hasAttribute("tune.temper")) {
        throw AttributeNotFoundException("tune.temper");
    }
    return b->getAttribute("tune.temper");
};

void mei::ScoredefGesMixIn::setTuneTemper(std::string _tunetemper) {
    if (!b->hasAttribute("tune.temper")) {
        MeiAttribute *a = new MeiAttribute("tune.temper", _tunetemper);
        b->addAttribute(a);
    }
};

bool mei::ScoredefGesMixIn::hasTuneTemper() {
    return b->hasAttribute("tune.temper");
};

void mei::ScoredefGesMixIn::removeTuneTemper() {
    b->removeAttribute("tune.temper");
};

mei::ScoredefVisMixIn::ScoredefVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoredefVisMixIn::~ScoredefVisMixIn() {}
MeiAttribute* mei::ScoredefVisMixIn::getEndingRend() {
    if (!b->hasAttribute("ending.rend")) {
        throw AttributeNotFoundException("ending.rend");
    }
    return b->getAttribute("ending.rend");
};

void mei::ScoredefVisMixIn::setEndingRend(std::string _endingrend) {
    if (!b->hasAttribute("ending.rend")) {
        MeiAttribute *a = new MeiAttribute("ending.rend", _endingrend);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasEndingRend() {
    return b->hasAttribute("ending.rend");
};

void mei::ScoredefVisMixIn::removeEndingRend() {
    b->removeAttribute("ending.rend");
};
MeiAttribute* mei::ScoredefVisMixIn::getMnumVisible() {
    if (!b->hasAttribute("mnum.visible")) {
        throw AttributeNotFoundException("mnum.visible");
    }
    return b->getAttribute("mnum.visible");
};

void mei::ScoredefVisMixIn::setMnumVisible(std::string _mnumvisible) {
    if (!b->hasAttribute("mnum.visible")) {
        MeiAttribute *a = new MeiAttribute("mnum.visible", _mnumvisible);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasMnumVisible() {
    return b->hasAttribute("mnum.visible");
};

void mei::ScoredefVisMixIn::removeMnumVisible() {
    b->removeAttribute("mnum.visible");
};
MeiAttribute* mei::ScoredefVisMixIn::getMusicName() {
    if (!b->hasAttribute("music.name")) {
        throw AttributeNotFoundException("music.name");
    }
    return b->getAttribute("music.name");
};

void mei::ScoredefVisMixIn::setMusicName(std::string _musicname) {
    if (!b->hasAttribute("music.name")) {
        MeiAttribute *a = new MeiAttribute("music.name", _musicname);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasMusicName() {
    return b->hasAttribute("music.name");
};

void mei::ScoredefVisMixIn::removeMusicName() {
    b->removeAttribute("music.name");
};
MeiAttribute* mei::ScoredefVisMixIn::getMusicSize() {
    if (!b->hasAttribute("music.size")) {
        throw AttributeNotFoundException("music.size");
    }
    return b->getAttribute("music.size");
};

void mei::ScoredefVisMixIn::setMusicSize(std::string _musicsize) {
    if (!b->hasAttribute("music.size")) {
        MeiAttribute *a = new MeiAttribute("music.size", _musicsize);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasMusicSize() {
    return b->hasAttribute("music.size");
};

void mei::ScoredefVisMixIn::removeMusicSize() {
    b->removeAttribute("music.size");
};
MeiAttribute* mei::ScoredefVisMixIn::getOptimize() {
    if (!b->hasAttribute("optimize")) {
        throw AttributeNotFoundException("optimize");
    }
    return b->getAttribute("optimize");
};

void mei::ScoredefVisMixIn::setOptimize(std::string _optimize) {
    if (!b->hasAttribute("optimize")) {
        MeiAttribute *a = new MeiAttribute("optimize", _optimize);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasOptimize() {
    return b->hasAttribute("optimize");
};

void mei::ScoredefVisMixIn::removeOptimize() {
    b->removeAttribute("optimize");
};
MeiAttribute* mei::ScoredefVisMixIn::getPageHeight() {
    if (!b->hasAttribute("page.height")) {
        throw AttributeNotFoundException("page.height");
    }
    return b->getAttribute("page.height");
};

void mei::ScoredefVisMixIn::setPageHeight(std::string _pageheight) {
    if (!b->hasAttribute("page.height")) {
        MeiAttribute *a = new MeiAttribute("page.height", _pageheight);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPageHeight() {
    return b->hasAttribute("page.height");
};

void mei::ScoredefVisMixIn::removePageHeight() {
    b->removeAttribute("page.height");
};
MeiAttribute* mei::ScoredefVisMixIn::getPageWidth() {
    if (!b->hasAttribute("page.width")) {
        throw AttributeNotFoundException("page.width");
    }
    return b->getAttribute("page.width");
};

void mei::ScoredefVisMixIn::setPageWidth(std::string _pagewidth) {
    if (!b->hasAttribute("page.width")) {
        MeiAttribute *a = new MeiAttribute("page.width", _pagewidth);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPageWidth() {
    return b->hasAttribute("page.width");
};

void mei::ScoredefVisMixIn::removePageWidth() {
    b->removeAttribute("page.width");
};
MeiAttribute* mei::ScoredefVisMixIn::getPageUnits() {
    if (!b->hasAttribute("page.units")) {
        throw AttributeNotFoundException("page.units");
    }
    return b->getAttribute("page.units");
};

void mei::ScoredefVisMixIn::setPageUnits(std::string _pageunits) {
    if (!b->hasAttribute("page.units")) {
        MeiAttribute *a = new MeiAttribute("page.units", _pageunits);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPageUnits() {
    return b->hasAttribute("page.units");
};

void mei::ScoredefVisMixIn::removePageUnits() {
    b->removeAttribute("page.units");
};
MeiAttribute* mei::ScoredefVisMixIn::getPageTopmar() {
    if (!b->hasAttribute("page.topmar")) {
        throw AttributeNotFoundException("page.topmar");
    }
    return b->getAttribute("page.topmar");
};

void mei::ScoredefVisMixIn::setPageTopmar(std::string _pagetopmar) {
    if (!b->hasAttribute("page.topmar")) {
        MeiAttribute *a = new MeiAttribute("page.topmar", _pagetopmar);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPageTopmar() {
    return b->hasAttribute("page.topmar");
};

void mei::ScoredefVisMixIn::removePageTopmar() {
    b->removeAttribute("page.topmar");
};
MeiAttribute* mei::ScoredefVisMixIn::getPageBotmar() {
    if (!b->hasAttribute("page.botmar")) {
        throw AttributeNotFoundException("page.botmar");
    }
    return b->getAttribute("page.botmar");
};

void mei::ScoredefVisMixIn::setPageBotmar(std::string _pagebotmar) {
    if (!b->hasAttribute("page.botmar")) {
        MeiAttribute *a = new MeiAttribute("page.botmar", _pagebotmar);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPageBotmar() {
    return b->hasAttribute("page.botmar");
};

void mei::ScoredefVisMixIn::removePageBotmar() {
    b->removeAttribute("page.botmar");
};
MeiAttribute* mei::ScoredefVisMixIn::getPageLeftmar() {
    if (!b->hasAttribute("page.leftmar")) {
        throw AttributeNotFoundException("page.leftmar");
    }
    return b->getAttribute("page.leftmar");
};

void mei::ScoredefVisMixIn::setPageLeftmar(std::string _pageleftmar) {
    if (!b->hasAttribute("page.leftmar")) {
        MeiAttribute *a = new MeiAttribute("page.leftmar", _pageleftmar);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPageLeftmar() {
    return b->hasAttribute("page.leftmar");
};

void mei::ScoredefVisMixIn::removePageLeftmar() {
    b->removeAttribute("page.leftmar");
};
MeiAttribute* mei::ScoredefVisMixIn::getPageRightmar() {
    if (!b->hasAttribute("page.rightmar")) {
        throw AttributeNotFoundException("page.rightmar");
    }
    return b->getAttribute("page.rightmar");
};

void mei::ScoredefVisMixIn::setPageRightmar(std::string _pagerightmar) {
    if (!b->hasAttribute("page.rightmar")) {
        MeiAttribute *a = new MeiAttribute("page.rightmar", _pagerightmar);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPageRightmar() {
    return b->hasAttribute("page.rightmar");
};

void mei::ScoredefVisMixIn::removePageRightmar() {
    b->removeAttribute("page.rightmar");
};
MeiAttribute* mei::ScoredefVisMixIn::getPagePanels() {
    if (!b->hasAttribute("page.panels")) {
        throw AttributeNotFoundException("page.panels");
    }
    return b->getAttribute("page.panels");
};

void mei::ScoredefVisMixIn::setPagePanels(std::string _pagepanels) {
    if (!b->hasAttribute("page.panels")) {
        MeiAttribute *a = new MeiAttribute("page.panels", _pagepanels);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPagePanels() {
    return b->hasAttribute("page.panels");
};

void mei::ScoredefVisMixIn::removePagePanels() {
    b->removeAttribute("page.panels");
};
MeiAttribute* mei::ScoredefVisMixIn::getPageScale() {
    if (!b->hasAttribute("page.scale")) {
        throw AttributeNotFoundException("page.scale");
    }
    return b->getAttribute("page.scale");
};

void mei::ScoredefVisMixIn::setPageScale(std::string _pagescale) {
    if (!b->hasAttribute("page.scale")) {
        MeiAttribute *a = new MeiAttribute("page.scale", _pagescale);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasPageScale() {
    return b->hasAttribute("page.scale");
};

void mei::ScoredefVisMixIn::removePageScale() {
    b->removeAttribute("page.scale");
};
MeiAttribute* mei::ScoredefVisMixIn::getSpacingPackexp() {
    if (!b->hasAttribute("spacing.packexp")) {
        throw AttributeNotFoundException("spacing.packexp");
    }
    return b->getAttribute("spacing.packexp");
};

void mei::ScoredefVisMixIn::setSpacingPackexp(std::string _spacingpackexp) {
    if (!b->hasAttribute("spacing.packexp")) {
        MeiAttribute *a = new MeiAttribute("spacing.packexp", _spacingpackexp);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasSpacingPackexp() {
    return b->hasAttribute("spacing.packexp");
};

void mei::ScoredefVisMixIn::removeSpacingPackexp() {
    b->removeAttribute("spacing.packexp");
};
MeiAttribute* mei::ScoredefVisMixIn::getSpacingPackfact() {
    if (!b->hasAttribute("spacing.packfact")) {
        throw AttributeNotFoundException("spacing.packfact");
    }
    return b->getAttribute("spacing.packfact");
};

void mei::ScoredefVisMixIn::setSpacingPackfact(std::string _spacingpackfact) {
    if (!b->hasAttribute("spacing.packfact")) {
        MeiAttribute *a = new MeiAttribute("spacing.packfact", _spacingpackfact);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasSpacingPackfact() {
    return b->hasAttribute("spacing.packfact");
};

void mei::ScoredefVisMixIn::removeSpacingPackfact() {
    b->removeAttribute("spacing.packfact");
};
MeiAttribute* mei::ScoredefVisMixIn::getSpacingStaff() {
    if (!b->hasAttribute("spacing.staff")) {
        throw AttributeNotFoundException("spacing.staff");
    }
    return b->getAttribute("spacing.staff");
};

void mei::ScoredefVisMixIn::setSpacingStaff(std::string _spacingstaff) {
    if (!b->hasAttribute("spacing.staff")) {
        MeiAttribute *a = new MeiAttribute("spacing.staff", _spacingstaff);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasSpacingStaff() {
    return b->hasAttribute("spacing.staff");
};

void mei::ScoredefVisMixIn::removeSpacingStaff() {
    b->removeAttribute("spacing.staff");
};
MeiAttribute* mei::ScoredefVisMixIn::getSpacingSystem() {
    if (!b->hasAttribute("spacing.system")) {
        throw AttributeNotFoundException("spacing.system");
    }
    return b->getAttribute("spacing.system");
};

void mei::ScoredefVisMixIn::setSpacingSystem(std::string _spacingsystem) {
    if (!b->hasAttribute("spacing.system")) {
        MeiAttribute *a = new MeiAttribute("spacing.system", _spacingsystem);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasSpacingSystem() {
    return b->hasAttribute("spacing.system");
};

void mei::ScoredefVisMixIn::removeSpacingSystem() {
    b->removeAttribute("spacing.system");
};
MeiAttribute* mei::ScoredefVisMixIn::getSystemLeftmar() {
    if (!b->hasAttribute("system.leftmar")) {
        throw AttributeNotFoundException("system.leftmar");
    }
    return b->getAttribute("system.leftmar");
};

void mei::ScoredefVisMixIn::setSystemLeftmar(std::string _systemleftmar) {
    if (!b->hasAttribute("system.leftmar")) {
        MeiAttribute *a = new MeiAttribute("system.leftmar", _systemleftmar);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasSystemLeftmar() {
    return b->hasAttribute("system.leftmar");
};

void mei::ScoredefVisMixIn::removeSystemLeftmar() {
    b->removeAttribute("system.leftmar");
};
MeiAttribute* mei::ScoredefVisMixIn::getSystemRightmar() {
    if (!b->hasAttribute("system.rightmar")) {
        throw AttributeNotFoundException("system.rightmar");
    }
    return b->getAttribute("system.rightmar");
};

void mei::ScoredefVisMixIn::setSystemRightmar(std::string _systemrightmar) {
    if (!b->hasAttribute("system.rightmar")) {
        MeiAttribute *a = new MeiAttribute("system.rightmar", _systemrightmar);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasSystemRightmar() {
    return b->hasAttribute("system.rightmar");
};

void mei::ScoredefVisMixIn::removeSystemRightmar() {
    b->removeAttribute("system.rightmar");
};
MeiAttribute* mei::ScoredefVisMixIn::getSystemTopmar() {
    if (!b->hasAttribute("system.topmar")) {
        throw AttributeNotFoundException("system.topmar");
    }
    return b->getAttribute("system.topmar");
};

void mei::ScoredefVisMixIn::setSystemTopmar(std::string _systemtopmar) {
    if (!b->hasAttribute("system.topmar")) {
        MeiAttribute *a = new MeiAttribute("system.topmar", _systemtopmar);
        b->addAttribute(a);
    }
};

bool mei::ScoredefVisMixIn::hasSystemTopmar() {
    return b->hasAttribute("system.topmar");
};

void mei::ScoredefVisMixIn::removeSystemTopmar() {
    b->removeAttribute("system.topmar");
};

mei::SectionVisMixIn::SectionVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SectionVisMixIn::~SectionVisMixIn() {}
MeiAttribute* mei::SectionVisMixIn::getRestart() {
    if (!b->hasAttribute("restart")) {
        throw AttributeNotFoundException("restart");
    }
    return b->getAttribute("restart");
};

void mei::SectionVisMixIn::setRestart(std::string _restart) {
    if (!b->hasAttribute("restart")) {
        MeiAttribute *a = new MeiAttribute("restart", _restart);
        b->addAttribute(a);
    }
};

bool mei::SectionVisMixIn::hasRestart() {
    return b->hasAttribute("restart");
};

void mei::SectionVisMixIn::removeRestart() {
    b->removeAttribute("restart");
};

mei::SequenceMixIn::SequenceMixIn(MeiElement *b) {
    this->b = b;
};

mei::SequenceMixIn::~SequenceMixIn() {}
MeiAttribute* mei::SequenceMixIn::getSeq() {
    if (!b->hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->getAttribute("seq");
};

void mei::SequenceMixIn::setSeq(std::string _seq) {
    if (!b->hasAttribute("seq")) {
        MeiAttribute *a = new MeiAttribute("seq", _seq);
        b->addAttribute(a);
    }
};

bool mei::SequenceMixIn::hasSeq() {
    return b->hasAttribute("seq");
};

void mei::SequenceMixIn::removeSeq() {
    b->removeAttribute("seq");
};

mei::SlashcountMixIn::SlashcountMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlashcountMixIn::~SlashcountMixIn() {}
MeiAttribute* mei::SlashcountMixIn::getSlash() {
    if (!b->hasAttribute("slash")) {
        throw AttributeNotFoundException("slash");
    }
    return b->getAttribute("slash");
};

void mei::SlashcountMixIn::setSlash(std::string _slash) {
    if (!b->hasAttribute("slash")) {
        MeiAttribute *a = new MeiAttribute("slash", _slash);
        b->addAttribute(a);
    }
};

bool mei::SlashcountMixIn::hasSlash() {
    return b->hasAttribute("slash");
};

void mei::SlashcountMixIn::removeSlash() {
    b->removeAttribute("slash");
};

mei::SlurpresentMixIn::SlurpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlurpresentMixIn::~SlurpresentMixIn() {}
MeiAttribute* mei::SlurpresentMixIn::getSlur() {
    if (!b->hasAttribute("slur")) {
        throw AttributeNotFoundException("slur");
    }
    return b->getAttribute("slur");
};

void mei::SlurpresentMixIn::setSlur(std::string _slur) {
    if (!b->hasAttribute("slur")) {
        MeiAttribute *a = new MeiAttribute("slur", _slur);
        b->addAttribute(a);
    }
};

bool mei::SlurpresentMixIn::hasSlur() {
    return b->hasAttribute("slur");
};

void mei::SlurpresentMixIn::removeSlur() {
    b->removeAttribute("slur");
};

mei::SpaceVisMixIn::SpaceVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SpaceVisMixIn::~SpaceVisMixIn() {}
MeiAttribute* mei::SpaceVisMixIn::getCompressable() {
    if (!b->hasAttribute("compressable")) {
        throw AttributeNotFoundException("compressable");
    }
    return b->getAttribute("compressable");
};

void mei::SpaceVisMixIn::setCompressable(std::string _compressable) {
    if (!b->hasAttribute("compressable")) {
        MeiAttribute *a = new MeiAttribute("compressable", _compressable);
        b->addAttribute(a);
    }
};

bool mei::SpaceVisMixIn::hasCompressable() {
    return b->hasAttribute("compressable");
};

void mei::SpaceVisMixIn::removeCompressable() {
    b->removeAttribute("compressable");
};

mei::StaffdefVisMixIn::StaffdefVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffdefVisMixIn::~StaffdefVisMixIn() {}
MeiAttribute* mei::StaffdefVisMixIn::getGridShow() {
    if (!b->hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return b->getAttribute("grid.show");
};

void mei::StaffdefVisMixIn::setGridShow(std::string _gridshow) {
    if (!b->hasAttribute("grid.show")) {
        MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
        b->addAttribute(a);
    }
};

bool mei::StaffdefVisMixIn::hasGridShow() {
    return b->hasAttribute("grid.show");
};

void mei::StaffdefVisMixIn::removeGridShow() {
    b->removeAttribute("grid.show");
};
MeiAttribute* mei::StaffdefVisMixIn::getLayerscheme() {
    if (!b->hasAttribute("layerscheme")) {
        throw AttributeNotFoundException("layerscheme");
    }
    return b->getAttribute("layerscheme");
};

void mei::StaffdefVisMixIn::setLayerscheme(std::string _layerscheme) {
    if (!b->hasAttribute("layerscheme")) {
        MeiAttribute *a = new MeiAttribute("layerscheme", _layerscheme);
        b->addAttribute(a);
    }
};

bool mei::StaffdefVisMixIn::hasLayerscheme() {
    return b->hasAttribute("layerscheme");
};

void mei::StaffdefVisMixIn::removeLayerscheme() {
    b->removeAttribute("layerscheme");
};
MeiAttribute* mei::StaffdefVisMixIn::getLines() {
    if (!b->hasAttribute("lines")) {
        throw AttributeNotFoundException("lines");
    }
    return b->getAttribute("lines");
};

void mei::StaffdefVisMixIn::setLines(std::string _lines) {
    if (!b->hasAttribute("lines")) {
        MeiAttribute *a = new MeiAttribute("lines", _lines);
        b->addAttribute(a);
    }
};

bool mei::StaffdefVisMixIn::hasLines() {
    return b->hasAttribute("lines");
};

void mei::StaffdefVisMixIn::removeLines() {
    b->removeAttribute("lines");
};
MeiAttribute* mei::StaffdefVisMixIn::getLinesColor() {
    if (!b->hasAttribute("lines.color")) {
        throw AttributeNotFoundException("lines.color");
    }
    return b->getAttribute("lines.color");
};

void mei::StaffdefVisMixIn::setLinesColor(std::string _linescolor) {
    if (!b->hasAttribute("lines.color")) {
        MeiAttribute *a = new MeiAttribute("lines.color", _linescolor);
        b->addAttribute(a);
    }
};

bool mei::StaffdefVisMixIn::hasLinesColor() {
    return b->hasAttribute("lines.color");
};

void mei::StaffdefVisMixIn::removeLinesColor() {
    b->removeAttribute("lines.color");
};
MeiAttribute* mei::StaffdefVisMixIn::getLinesVisible() {
    if (!b->hasAttribute("lines.visible")) {
        throw AttributeNotFoundException("lines.visible");
    }
    return b->getAttribute("lines.visible");
};

void mei::StaffdefVisMixIn::setLinesVisible(std::string _linesvisible) {
    if (!b->hasAttribute("lines.visible")) {
        MeiAttribute *a = new MeiAttribute("lines.visible", _linesvisible);
        b->addAttribute(a);
    }
};

bool mei::StaffdefVisMixIn::hasLinesVisible() {
    return b->hasAttribute("lines.visible");
};

void mei::StaffdefVisMixIn::removeLinesVisible() {
    b->removeAttribute("lines.visible");
};
MeiAttribute* mei::StaffdefVisMixIn::getSpacing() {
    if (!b->hasAttribute("spacing")) {
        throw AttributeNotFoundException("spacing");
    }
    return b->getAttribute("spacing");
};

void mei::StaffdefVisMixIn::setSpacing(std::string _spacing) {
    if (!b->hasAttribute("spacing")) {
        MeiAttribute *a = new MeiAttribute("spacing", _spacing);
        b->addAttribute(a);
    }
};

bool mei::StaffdefVisMixIn::hasSpacing() {
    return b->hasAttribute("spacing");
};

void mei::StaffdefVisMixIn::removeSpacing() {
    b->removeAttribute("spacing");
};

mei::StaffgrpVisMixIn::StaffgrpVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffgrpVisMixIn::~StaffgrpVisMixIn() {}
MeiAttribute* mei::StaffgrpVisMixIn::getBarthru() {
    if (!b->hasAttribute("barthru")) {
        throw AttributeNotFoundException("barthru");
    }
    return b->getAttribute("barthru");
};

void mei::StaffgrpVisMixIn::setBarthru(std::string _barthru) {
    if (!b->hasAttribute("barthru")) {
        MeiAttribute *a = new MeiAttribute("barthru", _barthru);
        b->addAttribute(a);
    }
};

bool mei::StaffgrpVisMixIn::hasBarthru() {
    return b->hasAttribute("barthru");
};

void mei::StaffgrpVisMixIn::removeBarthru() {
    b->removeAttribute("barthru");
};

mei::StaffgroupingsymMixIn::StaffgroupingsymMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffgroupingsymMixIn::~StaffgroupingsymMixIn() {}
MeiAttribute* mei::StaffgroupingsymMixIn::getSymbol() {
    if (!b->hasAttribute("symbol")) {
        throw AttributeNotFoundException("symbol");
    }
    return b->getAttribute("symbol");
};

void mei::StaffgroupingsymMixIn::setSymbol(std::string _symbol) {
    if (!b->hasAttribute("symbol")) {
        MeiAttribute *a = new MeiAttribute("symbol", _symbol);
        b->addAttribute(a);
    }
};

bool mei::StaffgroupingsymMixIn::hasSymbol() {
    return b->hasAttribute("symbol");
};

void mei::StaffgroupingsymMixIn::removeSymbol() {
    b->removeAttribute("symbol");
};

mei::StaffidentMixIn::StaffidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffidentMixIn::~StaffidentMixIn() {}
MeiAttribute* mei::StaffidentMixIn::getStaff() {
    if (!b->hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->getAttribute("staff");
};

void mei::StaffidentMixIn::setStaff(std::string _staff) {
    if (!b->hasAttribute("staff")) {
        MeiAttribute *a = new MeiAttribute("staff", _staff);
        b->addAttribute(a);
    }
};

bool mei::StaffidentMixIn::hasStaff() {
    return b->hasAttribute("staff");
};

void mei::StaffidentMixIn::removeStaff() {
    b->removeAttribute("staff");
};

mei::StafflocMixIn::StafflocMixIn(MeiElement *b) {
    this->b = b;
};

mei::StafflocMixIn::~StafflocMixIn() {}
MeiAttribute* mei::StafflocMixIn::getLoc() {
    if (!b->hasAttribute("loc")) {
        throw AttributeNotFoundException("loc");
    }
    return b->getAttribute("loc");
};

void mei::StafflocMixIn::setLoc(std::string _loc) {
    if (!b->hasAttribute("loc")) {
        MeiAttribute *a = new MeiAttribute("loc", _loc);
        b->addAttribute(a);
    }
};

bool mei::StafflocMixIn::hasLoc() {
    return b->hasAttribute("loc");
};

void mei::StafflocMixIn::removeLoc() {
    b->removeAttribute("loc");
};

mei::StartendidMixIn::StartendidMixIn(MeiElement *b) {
    this->b = b;
};

mei::StartendidMixIn::~StartendidMixIn() {}
MeiAttribute* mei::StartendidMixIn::getEndid() {
    if (!b->hasAttribute("endid")) {
        throw AttributeNotFoundException("endid");
    }
    return b->getAttribute("endid");
};

void mei::StartendidMixIn::setEndid(std::string _endid) {
    if (!b->hasAttribute("endid")) {
        MeiAttribute *a = new MeiAttribute("endid", _endid);
        b->addAttribute(a);
    }
};

bool mei::StartendidMixIn::hasEndid() {
    return b->hasAttribute("endid");
};

void mei::StartendidMixIn::removeEndid() {
    b->removeAttribute("endid");
};

mei::StartidMixIn::StartidMixIn(MeiElement *b) {
    this->b = b;
};

mei::StartidMixIn::~StartidMixIn() {}
MeiAttribute* mei::StartidMixIn::getStartid() {
    if (!b->hasAttribute("startid")) {
        throw AttributeNotFoundException("startid");
    }
    return b->getAttribute("startid");
};

void mei::StartidMixIn::setStartid(std::string _startid) {
    if (!b->hasAttribute("startid")) {
        MeiAttribute *a = new MeiAttribute("startid", _startid);
        b->addAttribute(a);
    }
};

bool mei::StartidMixIn::hasStartid() {
    return b->hasAttribute("startid");
};

void mei::StartidMixIn::removeStartid() {
    b->removeAttribute("startid");
};

mei::StemmedMixIn::StemmedMixIn(MeiElement *b) {
    this->b = b;
};

mei::StemmedMixIn::~StemmedMixIn() {}
MeiAttribute* mei::StemmedMixIn::getStemDir() {
    if (!b->hasAttribute("stem.dir")) {
        throw AttributeNotFoundException("stem.dir");
    }
    return b->getAttribute("stem.dir");
};

void mei::StemmedMixIn::setStemDir(std::string _stemdir) {
    if (!b->hasAttribute("stem.dir")) {
        MeiAttribute *a = new MeiAttribute("stem.dir", _stemdir);
        b->addAttribute(a);
    }
};

bool mei::StemmedMixIn::hasStemDir() {
    return b->hasAttribute("stem.dir");
};

void mei::StemmedMixIn::removeStemDir() {
    b->removeAttribute("stem.dir");
};
MeiAttribute* mei::StemmedMixIn::getStemLen() {
    if (!b->hasAttribute("stem.len")) {
        throw AttributeNotFoundException("stem.len");
    }
    return b->getAttribute("stem.len");
};

void mei::StemmedMixIn::setStemLen(std::string _stemlen) {
    if (!b->hasAttribute("stem.len")) {
        MeiAttribute *a = new MeiAttribute("stem.len", _stemlen);
        b->addAttribute(a);
    }
};

bool mei::StemmedMixIn::hasStemLen() {
    return b->hasAttribute("stem.len");
};

void mei::StemmedMixIn::removeStemLen() {
    b->removeAttribute("stem.len");
};
MeiAttribute* mei::StemmedMixIn::getStemPos() {
    if (!b->hasAttribute("stem.pos")) {
        throw AttributeNotFoundException("stem.pos");
    }
    return b->getAttribute("stem.pos");
};

void mei::StemmedMixIn::setStemPos(std::string _stempos) {
    if (!b->hasAttribute("stem.pos")) {
        MeiAttribute *a = new MeiAttribute("stem.pos", _stempos);
        b->addAttribute(a);
    }
};

bool mei::StemmedMixIn::hasStemPos() {
    return b->hasAttribute("stem.pos");
};

void mei::StemmedMixIn::removeStemPos() {
    b->removeAttribute("stem.pos");
};
MeiAttribute* mei::StemmedMixIn::getStemX() {
    if (!b->hasAttribute("stem.x")) {
        throw AttributeNotFoundException("stem.x");
    }
    return b->getAttribute("stem.x");
};

void mei::StemmedMixIn::setStemX(std::string _stemx) {
    if (!b->hasAttribute("stem.x")) {
        MeiAttribute *a = new MeiAttribute("stem.x", _stemx);
        b->addAttribute(a);
    }
};

bool mei::StemmedMixIn::hasStemX() {
    return b->hasAttribute("stem.x");
};

void mei::StemmedMixIn::removeStemX() {
    b->removeAttribute("stem.x");
};
MeiAttribute* mei::StemmedMixIn::getStemY() {
    if (!b->hasAttribute("stem.y")) {
        throw AttributeNotFoundException("stem.y");
    }
    return b->getAttribute("stem.y");
};

void mei::StemmedMixIn::setStemY(std::string _stemy) {
    if (!b->hasAttribute("stem.y")) {
        MeiAttribute *a = new MeiAttribute("stem.y", _stemy);
        b->addAttribute(a);
    }
};

bool mei::StemmedMixIn::hasStemY() {
    return b->hasAttribute("stem.y");
};

void mei::StemmedMixIn::removeStemY() {
    b->removeAttribute("stem.y");
};

mei::SylLogMixIn::SylLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::SylLogMixIn::~SylLogMixIn() {}
MeiAttribute* mei::SylLogMixIn::getCon() {
    if (!b->hasAttribute("con")) {
        throw AttributeNotFoundException("con");
    }
    return b->getAttribute("con");
};

void mei::SylLogMixIn::setCon(std::string _con) {
    if (!b->hasAttribute("con")) {
        MeiAttribute *a = new MeiAttribute("con", _con);
        b->addAttribute(a);
    }
};

bool mei::SylLogMixIn::hasCon() {
    return b->hasAttribute("con");
};

void mei::SylLogMixIn::removeCon() {
    b->removeAttribute("con");
};
MeiAttribute* mei::SylLogMixIn::getWordpos() {
    if (!b->hasAttribute("wordpos")) {
        throw AttributeNotFoundException("wordpos");
    }
    return b->getAttribute("wordpos");
};

void mei::SylLogMixIn::setWordpos(std::string _wordpos) {
    if (!b->hasAttribute("wordpos")) {
        MeiAttribute *a = new MeiAttribute("wordpos", _wordpos);
        b->addAttribute(a);
    }
};

bool mei::SylLogMixIn::hasWordpos() {
    return b->hasAttribute("wordpos");
};

void mei::SylLogMixIn::removeWordpos() {
    b->removeAttribute("wordpos");
};

mei::SyltextMixIn::SyltextMixIn(MeiElement *b) {
    this->b = b;
};

mei::SyltextMixIn::~SyltextMixIn() {}
MeiAttribute* mei::SyltextMixIn::getSyl() {
    if (!b->hasAttribute("syl")) {
        throw AttributeNotFoundException("syl");
    }
    return b->getAttribute("syl");
};

void mei::SyltextMixIn::setSyl(std::string _syl) {
    if (!b->hasAttribute("syl")) {
        MeiAttribute *a = new MeiAttribute("syl", _syl);
        b->addAttribute(a);
    }
};

bool mei::SyltextMixIn::hasSyl() {
    return b->hasAttribute("syl");
};

void mei::SyltextMixIn::removeSyl() {
    b->removeAttribute("syl");
};

mei::TargetsMixIn::TargetsMixIn(MeiElement *b) {
    this->b = b;
};

mei::TargetsMixIn::~TargetsMixIn() {}
MeiAttribute* mei::TargetsMixIn::getPlist() {
    if (!b->hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->getAttribute("plist");
};

void mei::TargetsMixIn::setPlist(std::string _plist) {
    if (!b->hasAttribute("plist")) {
        MeiAttribute *a = new MeiAttribute("plist", _plist);
        b->addAttribute(a);
    }
};

bool mei::TargetsMixIn::hasPlist() {
    return b->hasAttribute("plist");
};

void mei::TargetsMixIn::removePlist() {
    b->removeAttribute("plist");
};
MeiAttribute* mei::TargetsMixIn::getEvaluate() {
    if (!b->hasAttribute("evaluate")) {
        throw AttributeNotFoundException("evaluate");
    }
    return b->getAttribute("evaluate");
};

void mei::TargetsMixIn::setEvaluate(std::string _evaluate) {
    if (!b->hasAttribute("evaluate")) {
        MeiAttribute *a = new MeiAttribute("evaluate", _evaluate);
        b->addAttribute(a);
    }
};

bool mei::TargetsMixIn::hasEvaluate() {
    return b->hasAttribute("evaluate");
};

void mei::TargetsMixIn::removeEvaluate() {
    b->removeAttribute("evaluate");
};

mei::TextstyleMixIn::TextstyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::TextstyleMixIn::~TextstyleMixIn() {}
MeiAttribute* mei::TextstyleMixIn::getTextFam() {
    if (!b->hasAttribute("text.fam")) {
        throw AttributeNotFoundException("text.fam");
    }
    return b->getAttribute("text.fam");
};

void mei::TextstyleMixIn::setTextFam(std::string _textfam) {
    if (!b->hasAttribute("text.fam")) {
        MeiAttribute *a = new MeiAttribute("text.fam", _textfam);
        b->addAttribute(a);
    }
};

bool mei::TextstyleMixIn::hasTextFam() {
    return b->hasAttribute("text.fam");
};

void mei::TextstyleMixIn::removeTextFam() {
    b->removeAttribute("text.fam");
};
MeiAttribute* mei::TextstyleMixIn::getTextName() {
    if (!b->hasAttribute("text.name")) {
        throw AttributeNotFoundException("text.name");
    }
    return b->getAttribute("text.name");
};

void mei::TextstyleMixIn::setTextName(std::string _textname) {
    if (!b->hasAttribute("text.name")) {
        MeiAttribute *a = new MeiAttribute("text.name", _textname);
        b->addAttribute(a);
    }
};

bool mei::TextstyleMixIn::hasTextName() {
    return b->hasAttribute("text.name");
};

void mei::TextstyleMixIn::removeTextName() {
    b->removeAttribute("text.name");
};
MeiAttribute* mei::TextstyleMixIn::getTextSize() {
    if (!b->hasAttribute("text.size")) {
        throw AttributeNotFoundException("text.size");
    }
    return b->getAttribute("text.size");
};

void mei::TextstyleMixIn::setTextSize(std::string _textsize) {
    if (!b->hasAttribute("text.size")) {
        MeiAttribute *a = new MeiAttribute("text.size", _textsize);
        b->addAttribute(a);
    }
};

bool mei::TextstyleMixIn::hasTextSize() {
    return b->hasAttribute("text.size");
};

void mei::TextstyleMixIn::removeTextSize() {
    b->removeAttribute("text.size");
};
MeiAttribute* mei::TextstyleMixIn::getTextStyle() {
    if (!b->hasAttribute("text.style")) {
        throw AttributeNotFoundException("text.style");
    }
    return b->getAttribute("text.style");
};

void mei::TextstyleMixIn::setTextStyle(std::string _textstyle) {
    if (!b->hasAttribute("text.style")) {
        MeiAttribute *a = new MeiAttribute("text.style", _textstyle);
        b->addAttribute(a);
    }
};

bool mei::TextstyleMixIn::hasTextStyle() {
    return b->hasAttribute("text.style");
};

void mei::TextstyleMixIn::removeTextStyle() {
    b->removeAttribute("text.style");
};
MeiAttribute* mei::TextstyleMixIn::getTextWeight() {
    if (!b->hasAttribute("text.weight")) {
        throw AttributeNotFoundException("text.weight");
    }
    return b->getAttribute("text.weight");
};

void mei::TextstyleMixIn::setTextWeight(std::string _textweight) {
    if (!b->hasAttribute("text.weight")) {
        MeiAttribute *a = new MeiAttribute("text.weight", _textweight);
        b->addAttribute(a);
    }
};

bool mei::TextstyleMixIn::hasTextWeight() {
    return b->hasAttribute("text.weight");
};

void mei::TextstyleMixIn::removeTextWeight() {
    b->removeAttribute("text.weight");
};

mei::TiepresentMixIn::TiepresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::TiepresentMixIn::~TiepresentMixIn() {}
MeiAttribute* mei::TiepresentMixIn::getTie() {
    if (!b->hasAttribute("tie")) {
        throw AttributeNotFoundException("tie");
    }
    return b->getAttribute("tie");
};

void mei::TiepresentMixIn::setTie(std::string _tie) {
    if (!b->hasAttribute("tie")) {
        MeiAttribute *a = new MeiAttribute("tie", _tie);
        b->addAttribute(a);
    }
};

bool mei::TiepresentMixIn::hasTie() {
    return b->hasAttribute("tie");
};

void mei::TiepresentMixIn::removeTie() {
    b->removeAttribute("tie");
};

mei::TimestampMusicalMixIn::TimestampMusicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimestampMusicalMixIn::~TimestampMusicalMixIn() {}
MeiAttribute* mei::TimestampMusicalMixIn::getTstamp() {
    if (!b->hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->getAttribute("tstamp");
};

void mei::TimestampMusicalMixIn::setTstamp(std::string _tstamp) {
    if (!b->hasAttribute("tstamp")) {
        MeiAttribute *a = new MeiAttribute("tstamp", _tstamp);
        b->addAttribute(a);
    }
};

bool mei::TimestampMusicalMixIn::hasTstamp() {
    return b->hasAttribute("tstamp");
};

void mei::TimestampMusicalMixIn::removeTstamp() {
    b->removeAttribute("tstamp");
};

mei::TimestampPerformedMixIn::TimestampPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimestampPerformedMixIn::~TimestampPerformedMixIn() {}
MeiAttribute* mei::TimestampPerformedMixIn::getTstampGes() {
    if (!b->hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->getAttribute("tstamp.ges");
};

void mei::TimestampPerformedMixIn::setTstampGes(std::string _tstampges) {
    if (!b->hasAttribute("tstamp.ges")) {
        MeiAttribute *a = new MeiAttribute("tstamp.ges", _tstampges);
        b->addAttribute(a);
    }
};

bool mei::TimestampPerformedMixIn::hasTstampGes() {
    return b->hasAttribute("tstamp.ges");
};

void mei::TimestampPerformedMixIn::removeTstampGes() {
    b->removeAttribute("tstamp.ges");
};
MeiAttribute* mei::TimestampPerformedMixIn::getTstampReal() {
    if (!b->hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->getAttribute("tstamp.real");
};

void mei::TimestampPerformedMixIn::setTstampReal(std::string _tstampreal) {
    if (!b->hasAttribute("tstamp.real")) {
        MeiAttribute *a = new MeiAttribute("tstamp.real", _tstampreal);
        b->addAttribute(a);
    }
};

bool mei::TimestampPerformedMixIn::hasTstampReal() {
    return b->hasAttribute("tstamp.real");
};

void mei::TimestampPerformedMixIn::removeTstampReal() {
    b->removeAttribute("tstamp.real");
};

mei::TranspositionMixIn::TranspositionMixIn(MeiElement *b) {
    this->b = b;
};

mei::TranspositionMixIn::~TranspositionMixIn() {}
MeiAttribute* mei::TranspositionMixIn::getTransDiat() {
    if (!b->hasAttribute("trans.diat")) {
        throw AttributeNotFoundException("trans.diat");
    }
    return b->getAttribute("trans.diat");
};

void mei::TranspositionMixIn::setTransDiat(std::string _transdiat) {
    if (!b->hasAttribute("trans.diat")) {
        MeiAttribute *a = new MeiAttribute("trans.diat", _transdiat);
        b->addAttribute(a);
    }
};

bool mei::TranspositionMixIn::hasTransDiat() {
    return b->hasAttribute("trans.diat");
};

void mei::TranspositionMixIn::removeTransDiat() {
    b->removeAttribute("trans.diat");
};
MeiAttribute* mei::TranspositionMixIn::getTransSemi() {
    if (!b->hasAttribute("trans.semi")) {
        throw AttributeNotFoundException("trans.semi");
    }
    return b->getAttribute("trans.semi");
};

void mei::TranspositionMixIn::setTransSemi(std::string _transsemi) {
    if (!b->hasAttribute("trans.semi")) {
        MeiAttribute *a = new MeiAttribute("trans.semi", _transsemi);
        b->addAttribute(a);
    }
};

bool mei::TranspositionMixIn::hasTransSemi() {
    return b->hasAttribute("trans.semi");
};

void mei::TranspositionMixIn::removeTransSemi() {
    b->removeAttribute("trans.semi");
};

mei::TupletpresentMixIn::TupletpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::TupletpresentMixIn::~TupletpresentMixIn() {}
MeiAttribute* mei::TupletpresentMixIn::getTuplet() {
    if (!b->hasAttribute("tuplet")) {
        throw AttributeNotFoundException("tuplet");
    }
    return b->getAttribute("tuplet");
};

void mei::TupletpresentMixIn::setTuplet(std::string _tuplet) {
    if (!b->hasAttribute("tuplet")) {
        MeiAttribute *a = new MeiAttribute("tuplet", _tuplet);
        b->addAttribute(a);
    }
};

bool mei::TupletpresentMixIn::hasTuplet() {
    return b->hasAttribute("tuplet");
};

void mei::TupletpresentMixIn::removeTuplet() {
    b->removeAttribute("tuplet");
};

mei::TypedMixIn::TypedMixIn(MeiElement *b) {
    this->b = b;
};

mei::TypedMixIn::~TypedMixIn() {}
MeiAttribute* mei::TypedMixIn::getType() {
    if (!b->hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->getAttribute("type");
};

void mei::TypedMixIn::setType(std::string _type) {
    if (!b->hasAttribute("type")) {
        MeiAttribute *a = new MeiAttribute("type", _type);
        b->addAttribute(a);
    }
};

bool mei::TypedMixIn::hasType() {
    return b->hasAttribute("type");
};

void mei::TypedMixIn::removeType() {
    b->removeAttribute("type");
};
MeiAttribute* mei::TypedMixIn::getSubtype() {
    if (!b->hasAttribute("subtype")) {
        throw AttributeNotFoundException("subtype");
    }
    return b->getAttribute("subtype");
};

void mei::TypedMixIn::setSubtype(std::string _subtype) {
    if (!b->hasAttribute("subtype")) {
        MeiAttribute *a = new MeiAttribute("subtype", _subtype);
        b->addAttribute(a);
    }
};

bool mei::TypedMixIn::hasSubtype() {
    return b->hasAttribute("subtype");
};

void mei::TypedMixIn::removeSubtype() {
    b->removeAttribute("subtype");
};

mei::TypographyMixIn::TypographyMixIn(MeiElement *b) {
    this->b = b;
};

mei::TypographyMixIn::~TypographyMixIn() {}
MeiAttribute* mei::TypographyMixIn::getFontfam() {
    if (!b->hasAttribute("fontfam")) {
        throw AttributeNotFoundException("fontfam");
    }
    return b->getAttribute("fontfam");
};

void mei::TypographyMixIn::setFontfam(std::string _fontfam) {
    if (!b->hasAttribute("fontfam")) {
        MeiAttribute *a = new MeiAttribute("fontfam", _fontfam);
        b->addAttribute(a);
    }
};

bool mei::TypographyMixIn::hasFontfam() {
    return b->hasAttribute("fontfam");
};

void mei::TypographyMixIn::removeFontfam() {
    b->removeAttribute("fontfam");
};
MeiAttribute* mei::TypographyMixIn::getFontname() {
    if (!b->hasAttribute("fontname")) {
        throw AttributeNotFoundException("fontname");
    }
    return b->getAttribute("fontname");
};

void mei::TypographyMixIn::setFontname(std::string _fontname) {
    if (!b->hasAttribute("fontname")) {
        MeiAttribute *a = new MeiAttribute("fontname", _fontname);
        b->addAttribute(a);
    }
};

bool mei::TypographyMixIn::hasFontname() {
    return b->hasAttribute("fontname");
};

void mei::TypographyMixIn::removeFontname() {
    b->removeAttribute("fontname");
};
MeiAttribute* mei::TypographyMixIn::getFontsize() {
    if (!b->hasAttribute("fontsize")) {
        throw AttributeNotFoundException("fontsize");
    }
    return b->getAttribute("fontsize");
};

void mei::TypographyMixIn::setFontsize(std::string _fontsize) {
    if (!b->hasAttribute("fontsize")) {
        MeiAttribute *a = new MeiAttribute("fontsize", _fontsize);
        b->addAttribute(a);
    }
};

bool mei::TypographyMixIn::hasFontsize() {
    return b->hasAttribute("fontsize");
};

void mei::TypographyMixIn::removeFontsize() {
    b->removeAttribute("fontsize");
};
MeiAttribute* mei::TypographyMixIn::getFontstyle() {
    if (!b->hasAttribute("fontstyle")) {
        throw AttributeNotFoundException("fontstyle");
    }
    return b->getAttribute("fontstyle");
};

void mei::TypographyMixIn::setFontstyle(std::string _fontstyle) {
    if (!b->hasAttribute("fontstyle")) {
        MeiAttribute *a = new MeiAttribute("fontstyle", _fontstyle);
        b->addAttribute(a);
    }
};

bool mei::TypographyMixIn::hasFontstyle() {
    return b->hasAttribute("fontstyle");
};

void mei::TypographyMixIn::removeFontstyle() {
    b->removeAttribute("fontstyle");
};
MeiAttribute* mei::TypographyMixIn::getFontweight() {
    if (!b->hasAttribute("fontweight")) {
        throw AttributeNotFoundException("fontweight");
    }
    return b->getAttribute("fontweight");
};

void mei::TypographyMixIn::setFontweight(std::string _fontweight) {
    if (!b->hasAttribute("fontweight")) {
        MeiAttribute *a = new MeiAttribute("fontweight", _fontweight);
        b->addAttribute(a);
    }
};

bool mei::TypographyMixIn::hasFontweight() {
    return b->hasAttribute("fontweight");
};

void mei::TypographyMixIn::removeFontweight() {
    b->removeAttribute("fontweight");
};

mei::VisibilityMixIn::VisibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisibilityMixIn::~VisibilityMixIn() {}
MeiAttribute* mei::VisibilityMixIn::getVisible() {
    if (!b->hasAttribute("visible")) {
        throw AttributeNotFoundException("visible");
    }
    return b->getAttribute("visible");
};

void mei::VisibilityMixIn::setVisible(std::string _visible) {
    if (!b->hasAttribute("visible")) {
        MeiAttribute *a = new MeiAttribute("visible", _visible);
        b->addAttribute(a);
    }
};

bool mei::VisibilityMixIn::hasVisible() {
    return b->hasAttribute("visible");
};

void mei::VisibilityMixIn::removeVisible() {
    b->removeAttribute("visible");
};

mei::VisualoffsetHoMixIn::VisualoffsetHoMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualoffsetHoMixIn::~VisualoffsetHoMixIn() {}
MeiAttribute* mei::VisualoffsetHoMixIn::getHo() {
    if (!b->hasAttribute("ho")) {
        throw AttributeNotFoundException("ho");
    }
    return b->getAttribute("ho");
};

void mei::VisualoffsetHoMixIn::setHo(std::string _ho) {
    if (!b->hasAttribute("ho")) {
        MeiAttribute *a = new MeiAttribute("ho", _ho);
        b->addAttribute(a);
    }
};

bool mei::VisualoffsetHoMixIn::hasHo() {
    return b->hasAttribute("ho");
};

void mei::VisualoffsetHoMixIn::removeHo() {
    b->removeAttribute("ho");
};

mei::VisualoffsetToMixIn::VisualoffsetToMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualoffsetToMixIn::~VisualoffsetToMixIn() {}
MeiAttribute* mei::VisualoffsetToMixIn::getTo() {
    if (!b->hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->getAttribute("to");
};

void mei::VisualoffsetToMixIn::setTo(std::string _to) {
    if (!b->hasAttribute("to")) {
        MeiAttribute *a = new MeiAttribute("to", _to);
        b->addAttribute(a);
    }
};

bool mei::VisualoffsetToMixIn::hasTo() {
    return b->hasAttribute("to");
};

void mei::VisualoffsetToMixIn::removeTo() {
    b->removeAttribute("to");
};

mei::VisualoffsetVoMixIn::VisualoffsetVoMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualoffsetVoMixIn::~VisualoffsetVoMixIn() {}
MeiAttribute* mei::VisualoffsetVoMixIn::getVo() {
    if (!b->hasAttribute("vo")) {
        throw AttributeNotFoundException("vo");
    }
    return b->getAttribute("vo");
};

void mei::VisualoffsetVoMixIn::setVo(std::string _vo) {
    if (!b->hasAttribute("vo")) {
        MeiAttribute *a = new MeiAttribute("vo", _vo);
        b->addAttribute(a);
    }
};

bool mei::VisualoffsetVoMixIn::hasVo() {
    return b->hasAttribute("vo");
};

void mei::VisualoffsetVoMixIn::removeVo() {
    b->removeAttribute("vo");
};

mei::Visualoffset2HoMixIn::Visualoffset2HoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Visualoffset2HoMixIn::~Visualoffset2HoMixIn() {}
MeiAttribute* mei::Visualoffset2HoMixIn::getStartho() {
    if (!b->hasAttribute("startho")) {
        throw AttributeNotFoundException("startho");
    }
    return b->getAttribute("startho");
};

void mei::Visualoffset2HoMixIn::setStartho(std::string _startho) {
    if (!b->hasAttribute("startho")) {
        MeiAttribute *a = new MeiAttribute("startho", _startho);
        b->addAttribute(a);
    }
};

bool mei::Visualoffset2HoMixIn::hasStartho() {
    return b->hasAttribute("startho");
};

void mei::Visualoffset2HoMixIn::removeStartho() {
    b->removeAttribute("startho");
};
MeiAttribute* mei::Visualoffset2HoMixIn::getEndho() {
    if (!b->hasAttribute("endho")) {
        throw AttributeNotFoundException("endho");
    }
    return b->getAttribute("endho");
};

void mei::Visualoffset2HoMixIn::setEndho(std::string _endho) {
    if (!b->hasAttribute("endho")) {
        MeiAttribute *a = new MeiAttribute("endho", _endho);
        b->addAttribute(a);
    }
};

bool mei::Visualoffset2HoMixIn::hasEndho() {
    return b->hasAttribute("endho");
};

void mei::Visualoffset2HoMixIn::removeEndho() {
    b->removeAttribute("endho");
};

mei::Visualoffset2ToMixIn::Visualoffset2ToMixIn(MeiElement *b) {
    this->b = b;
};

mei::Visualoffset2ToMixIn::~Visualoffset2ToMixIn() {}
MeiAttribute* mei::Visualoffset2ToMixIn::getStartto() {
    if (!b->hasAttribute("startto")) {
        throw AttributeNotFoundException("startto");
    }
    return b->getAttribute("startto");
};

void mei::Visualoffset2ToMixIn::setStartto(std::string _startto) {
    if (!b->hasAttribute("startto")) {
        MeiAttribute *a = new MeiAttribute("startto", _startto);
        b->addAttribute(a);
    }
};

bool mei::Visualoffset2ToMixIn::hasStartto() {
    return b->hasAttribute("startto");
};

void mei::Visualoffset2ToMixIn::removeStartto() {
    b->removeAttribute("startto");
};
MeiAttribute* mei::Visualoffset2ToMixIn::getEndto() {
    if (!b->hasAttribute("endto")) {
        throw AttributeNotFoundException("endto");
    }
    return b->getAttribute("endto");
};

void mei::Visualoffset2ToMixIn::setEndto(std::string _endto) {
    if (!b->hasAttribute("endto")) {
        MeiAttribute *a = new MeiAttribute("endto", _endto);
        b->addAttribute(a);
    }
};

bool mei::Visualoffset2ToMixIn::hasEndto() {
    return b->hasAttribute("endto");
};

void mei::Visualoffset2ToMixIn::removeEndto() {
    b->removeAttribute("endto");
};

mei::Visualoffset2VoMixIn::Visualoffset2VoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Visualoffset2VoMixIn::~Visualoffset2VoMixIn() {}
MeiAttribute* mei::Visualoffset2VoMixIn::getStartvo() {
    if (!b->hasAttribute("startvo")) {
        throw AttributeNotFoundException("startvo");
    }
    return b->getAttribute("startvo");
};

void mei::Visualoffset2VoMixIn::setStartvo(std::string _startvo) {
    if (!b->hasAttribute("startvo")) {
        MeiAttribute *a = new MeiAttribute("startvo", _startvo);
        b->addAttribute(a);
    }
};

bool mei::Visualoffset2VoMixIn::hasStartvo() {
    return b->hasAttribute("startvo");
};

void mei::Visualoffset2VoMixIn::removeStartvo() {
    b->removeAttribute("startvo");
};
MeiAttribute* mei::Visualoffset2VoMixIn::getEndvo() {
    if (!b->hasAttribute("endvo")) {
        throw AttributeNotFoundException("endvo");
    }
    return b->getAttribute("endvo");
};

void mei::Visualoffset2VoMixIn::setEndvo(std::string _endvo) {
    if (!b->hasAttribute("endvo")) {
        MeiAttribute *a = new MeiAttribute("endvo", _endvo);
        b->addAttribute(a);
    }
};

bool mei::Visualoffset2VoMixIn::hasEndvo() {
    return b->hasAttribute("endvo");
};

void mei::Visualoffset2VoMixIn::removeEndvo() {
    b->removeAttribute("endvo");
};

mei::WidthMixIn::WidthMixIn(MeiElement *b) {
    this->b = b;
};

mei::WidthMixIn::~WidthMixIn() {}
MeiAttribute* mei::WidthMixIn::getWidth() {
    if (!b->hasAttribute("width")) {
        throw AttributeNotFoundException("width");
    }
    return b->getAttribute("width");
};

void mei::WidthMixIn::setWidth(std::string _width) {
    if (!b->hasAttribute("width")) {
        MeiAttribute *a = new MeiAttribute("width", _width);
        b->addAttribute(a);
    }
};

bool mei::WidthMixIn::hasWidth() {
    return b->hasAttribute("width");
};

void mei::WidthMixIn::removeWidth() {
    b->removeAttribute("width");
};

mei::XyMixIn::XyMixIn(MeiElement *b) {
    this->b = b;
};

mei::XyMixIn::~XyMixIn() {}
MeiAttribute* mei::XyMixIn::getX() {
    if (!b->hasAttribute("x")) {
        throw AttributeNotFoundException("x");
    }
    return b->getAttribute("x");
};

void mei::XyMixIn::setX(std::string _x) {
    if (!b->hasAttribute("x")) {
        MeiAttribute *a = new MeiAttribute("x", _x);
        b->addAttribute(a);
    }
};

bool mei::XyMixIn::hasX() {
    return b->hasAttribute("x");
};

void mei::XyMixIn::removeX() {
    b->removeAttribute("x");
};
MeiAttribute* mei::XyMixIn::getY() {
    if (!b->hasAttribute("y")) {
        throw AttributeNotFoundException("y");
    }
    return b->getAttribute("y");
};

void mei::XyMixIn::setY(std::string _y) {
    if (!b->hasAttribute("y")) {
        MeiAttribute *a = new MeiAttribute("y", _y);
        b->addAttribute(a);
    }
};

bool mei::XyMixIn::hasY() {
    return b->hasAttribute("y");
};

void mei::XyMixIn::removeY() {
    b->removeAttribute("y");
};

mei::Xy2MixIn::Xy2MixIn(MeiElement *b) {
    this->b = b;
};

mei::Xy2MixIn::~Xy2MixIn() {}
MeiAttribute* mei::Xy2MixIn::getX2() {
    if (!b->hasAttribute("x2")) {
        throw AttributeNotFoundException("x2");
    }
    return b->getAttribute("x2");
};

void mei::Xy2MixIn::setX2(std::string _x2) {
    if (!b->hasAttribute("x2")) {
        MeiAttribute *a = new MeiAttribute("x2", _x2);
        b->addAttribute(a);
    }
};

bool mei::Xy2MixIn::hasX2() {
    return b->hasAttribute("x2");
};

void mei::Xy2MixIn::removeX2() {
    b->removeAttribute("x2");
};
MeiAttribute* mei::Xy2MixIn::getY2() {
    if (!b->hasAttribute("y2")) {
        throw AttributeNotFoundException("y2");
    }
    return b->getAttribute("y2");
};

void mei::Xy2MixIn::setY2(std::string _y2) {
    if (!b->hasAttribute("y2")) {
        MeiAttribute *a = new MeiAttribute("y2", _y2);
        b->addAttribute(a);
    }
};

bool mei::Xy2MixIn::hasY2() {
    return b->hasAttribute("y2");
};

void mei::Xy2MixIn::removeY2() {
    b->removeAttribute("y2");
};



