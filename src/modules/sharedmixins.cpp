#include "sharedmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AccidLogMixIn::AccidLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidLogMixIn::~AccidLogMixIn() {}
MeiAttribute* mei::AccidLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::AccidLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::AccidLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::AccidLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::AccidentalMixIn::AccidentalMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidentalMixIn::~AccidentalMixIn() {}
MeiAttribute* mei::AccidentalMixIn::getAccid() {
    if (!b->hasAttribute("accid")) {
        return NULL;
    }
    return b->getAttribute("accid");
};

void mei::AccidentalMixIn::setAccid(std::string _accid) {
    MeiAttribute *a = new MeiAttribute("accid", _accid);
    b->addAttribute(a);
};

bool mei::AccidentalMixIn::hasAccid() {
    return b->hasAttribute("accid");
};

void mei::AccidentalMixIn::removeAccid() {
    b->removeAttribute("accid");
};

/* include <accidmixin> */
mei::AccidentalPerformedMixIn::AccidentalPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::AccidentalPerformedMixIn::~AccidentalPerformedMixIn() {}
MeiAttribute* mei::AccidentalPerformedMixIn::getAccidGes() {
    if (!b->hasAttribute("accid.ges")) {
        return NULL;
    }
    return b->getAttribute("accid.ges");
};

void mei::AccidentalPerformedMixIn::setAccidGes(std::string _accidges) {
    MeiAttribute *a = new MeiAttribute("accid.ges", _accidges);
    b->addAttribute(a);
};

bool mei::AccidentalPerformedMixIn::hasAccidGes() {
    return b->hasAttribute("accid.ges");
};

void mei::AccidentalPerformedMixIn::removeAccidGes() {
    b->removeAttribute("accid.ges");
};

/* include <accid.gesmixin> */
mei::ArticulationMixIn::ArticulationMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArticulationMixIn::~ArticulationMixIn() {}
MeiAttribute* mei::ArticulationMixIn::getArtic() {
    if (!b->hasAttribute("artic")) {
        return NULL;
    }
    return b->getAttribute("artic");
};

void mei::ArticulationMixIn::setArtic(std::string _artic) {
    MeiAttribute *a = new MeiAttribute("artic", _artic);
    b->addAttribute(a);
};

bool mei::ArticulationMixIn::hasArtic() {
    return b->hasAttribute("artic");
};

void mei::ArticulationMixIn::removeArtic() {
    b->removeAttribute("artic");
};

/* include <articmixin> */
mei::ArticulationPerformedMixIn::ArticulationPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::ArticulationPerformedMixIn::~ArticulationPerformedMixIn() {}
MeiAttribute* mei::ArticulationPerformedMixIn::getArticGes() {
    if (!b->hasAttribute("artic.ges")) {
        return NULL;
    }
    return b->getAttribute("artic.ges");
};

void mei::ArticulationPerformedMixIn::setArticGes(std::string _articges) {
    MeiAttribute *a = new MeiAttribute("artic.ges", _articges);
    b->addAttribute(a);
};

bool mei::ArticulationPerformedMixIn::hasArticGes() {
    return b->hasAttribute("artic.ges");
};

void mei::ArticulationPerformedMixIn::removeArticGes() {
    b->removeAttribute("artic.ges");
};

/* include <artic.gesmixin> */
mei::AugmentdotsMixIn::AugmentdotsMixIn(MeiElement *b) {
    this->b = b;
};

mei::AugmentdotsMixIn::~AugmentdotsMixIn() {}
MeiAttribute* mei::AugmentdotsMixIn::getDots() {
    if (!b->hasAttribute("dots")) {
        return NULL;
    }
    return b->getAttribute("dots");
};

void mei::AugmentdotsMixIn::setDots(std::string _dots) {
    MeiAttribute *a = new MeiAttribute("dots", _dots);
    b->addAttribute(a);
};

bool mei::AugmentdotsMixIn::hasDots() {
    return b->hasAttribute("dots");
};

void mei::AugmentdotsMixIn::removeDots() {
    b->removeAttribute("dots");
};

/* include <dotsmixin> */
mei::AuthorizedMixIn::AuthorizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::AuthorizedMixIn::~AuthorizedMixIn() {}
MeiAttribute* mei::AuthorizedMixIn::getAuthority() {
    if (!b->hasAttribute("authority")) {
        return NULL;
    }
    return b->getAttribute("authority");
};

void mei::AuthorizedMixIn::setAuthority(std::string _authority) {
    MeiAttribute *a = new MeiAttribute("authority", _authority);
    b->addAttribute(a);
};

bool mei::AuthorizedMixIn::hasAuthority() {
    return b->hasAttribute("authority");
};

void mei::AuthorizedMixIn::removeAuthority() {
    b->removeAttribute("authority");
};
MeiAttribute* mei::AuthorizedMixIn::getAuthURI() {
    if (!b->hasAttribute("authURI")) {
        return NULL;
    }
    return b->getAttribute("authURI");
};

void mei::AuthorizedMixIn::setAuthURI(std::string _authURI) {
    MeiAttribute *a = new MeiAttribute("authURI", _authURI);
    b->addAttribute(a);
};

bool mei::AuthorizedMixIn::hasAuthURI() {
    return b->hasAttribute("authURI");
};

void mei::AuthorizedMixIn::removeAuthURI() {
    b->removeAttribute("authURI");
};

/* include <authURImixin> */
mei::BarLineLogMixIn::BarLineLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::BarLineLogMixIn::~BarLineLogMixIn() {}
MeiAttribute* mei::BarLineLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::BarLineLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::BarLineLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::BarLineLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::BarplacementMixIn::BarplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::BarplacementMixIn::~BarplacementMixIn() {}
MeiAttribute* mei::BarplacementMixIn::getBarplace() {
    if (!b->hasAttribute("barplace")) {
        return NULL;
    }
    return b->getAttribute("barplace");
};

void mei::BarplacementMixIn::setBarplace(std::string _barplace) {
    MeiAttribute *a = new MeiAttribute("barplace", _barplace);
    b->addAttribute(a);
};

bool mei::BarplacementMixIn::hasBarplace() {
    return b->hasAttribute("barplace");
};

void mei::BarplacementMixIn::removeBarplace() {
    b->removeAttribute("barplace");
};
MeiAttribute* mei::BarplacementMixIn::getTaktplace() {
    if (!b->hasAttribute("taktplace")) {
        return NULL;
    }
    return b->getAttribute("taktplace");
};

void mei::BarplacementMixIn::setTaktplace(std::string _taktplace) {
    MeiAttribute *a = new MeiAttribute("taktplace", _taktplace);
    b->addAttribute(a);
};

bool mei::BarplacementMixIn::hasTaktplace() {
    return b->hasAttribute("taktplace");
};

void mei::BarplacementMixIn::removeTaktplace() {
    b->removeAttribute("taktplace");
};

/* include <taktplacemixin> */
mei::BeamingVisMixIn::BeamingVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::BeamingVisMixIn::~BeamingVisMixIn() {}
MeiAttribute* mei::BeamingVisMixIn::getBeamColor() {
    if (!b->hasAttribute("beam.color")) {
        return NULL;
    }
    return b->getAttribute("beam.color");
};

void mei::BeamingVisMixIn::setBeamColor(std::string _beamcolor) {
    MeiAttribute *a = new MeiAttribute("beam.color", _beamcolor);
    b->addAttribute(a);
};

bool mei::BeamingVisMixIn::hasBeamColor() {
    return b->hasAttribute("beam.color");
};

void mei::BeamingVisMixIn::removeBeamColor() {
    b->removeAttribute("beam.color");
};
MeiAttribute* mei::BeamingVisMixIn::getBeamRend() {
    if (!b->hasAttribute("beam.rend")) {
        return NULL;
    }
    return b->getAttribute("beam.rend");
};

void mei::BeamingVisMixIn::setBeamRend(std::string _beamrend) {
    MeiAttribute *a = new MeiAttribute("beam.rend", _beamrend);
    b->addAttribute(a);
};

bool mei::BeamingVisMixIn::hasBeamRend() {
    return b->hasAttribute("beam.rend");
};

void mei::BeamingVisMixIn::removeBeamRend() {
    b->removeAttribute("beam.rend");
};
MeiAttribute* mei::BeamingVisMixIn::getBeamSlope() {
    if (!b->hasAttribute("beam.slope")) {
        return NULL;
    }
    return b->getAttribute("beam.slope");
};

void mei::BeamingVisMixIn::setBeamSlope(std::string _beamslope) {
    MeiAttribute *a = new MeiAttribute("beam.slope", _beamslope);
    b->addAttribute(a);
};

bool mei::BeamingVisMixIn::hasBeamSlope() {
    return b->hasAttribute("beam.slope");
};

void mei::BeamingVisMixIn::removeBeamSlope() {
    b->removeAttribute("beam.slope");
};

/* include <beam.slopemixin> */
mei::BiblMixIn::BiblMixIn(MeiElement *b) {
    this->b = b;
};

mei::BiblMixIn::~BiblMixIn() {}
MeiAttribute* mei::BiblMixIn::getAnalog() {
    if (!b->hasAttribute("analog")) {
        return NULL;
    }
    return b->getAttribute("analog");
};

void mei::BiblMixIn::setAnalog(std::string _analog) {
    MeiAttribute *a = new MeiAttribute("analog", _analog);
    b->addAttribute(a);
};

bool mei::BiblMixIn::hasAnalog() {
    return b->hasAttribute("analog");
};

void mei::BiblMixIn::removeAnalog() {
    b->removeAttribute("analog");
};

/* include <analogmixin> */
mei::CalendaredMixIn::CalendaredMixIn(MeiElement *b) {
    this->b = b;
};

mei::CalendaredMixIn::~CalendaredMixIn() {}
MeiAttribute* mei::CalendaredMixIn::getCalendar() {
    if (!b->hasAttribute("calendar")) {
        return NULL;
    }
    return b->getAttribute("calendar");
};

void mei::CalendaredMixIn::setCalendar(std::string _calendar) {
    MeiAttribute *a = new MeiAttribute("calendar", _calendar);
    b->addAttribute(a);
};

bool mei::CalendaredMixIn::hasCalendar() {
    return b->hasAttribute("calendar");
};

void mei::CalendaredMixIn::removeCalendar() {
    b->removeAttribute("calendar");
};

/* include <calendarmixin> */
mei::CanonicalMixIn::CanonicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::CanonicalMixIn::~CanonicalMixIn() {}
MeiAttribute* mei::CanonicalMixIn::getCodedval() {
    if (!b->hasAttribute("codedval")) {
        return NULL;
    }
    return b->getAttribute("codedval");
};

void mei::CanonicalMixIn::setCodedval(std::string _codedval) {
    MeiAttribute *a = new MeiAttribute("codedval", _codedval);
    b->addAttribute(a);
};

bool mei::CanonicalMixIn::hasCodedval() {
    return b->hasAttribute("codedval");
};

void mei::CanonicalMixIn::removeCodedval() {
    b->removeAttribute("codedval");
};

/* include <codedvalmixin> */
mei::ChordVisMixIn::ChordVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ChordVisMixIn::~ChordVisMixIn() {}
MeiAttribute* mei::ChordVisMixIn::getCluster() {
    if (!b->hasAttribute("cluster")) {
        return NULL;
    }
    return b->getAttribute("cluster");
};

void mei::ChordVisMixIn::setCluster(std::string _cluster) {
    MeiAttribute *a = new MeiAttribute("cluster", _cluster);
    b->addAttribute(a);
};

bool mei::ChordVisMixIn::hasCluster() {
    return b->hasAttribute("cluster");
};

void mei::ChordVisMixIn::removeCluster() {
    b->removeAttribute("cluster");
};

/* include <clustermixin> */
mei::ClasscodeidentMixIn::ClasscodeidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::ClasscodeidentMixIn::~ClasscodeidentMixIn() {}
MeiAttribute* mei::ClasscodeidentMixIn::getClasscode() {
    if (!b->hasAttribute("classcode")) {
        return NULL;
    }
    return b->getAttribute("classcode");
};

void mei::ClasscodeidentMixIn::setClasscode(std::string _classcode) {
    MeiAttribute *a = new MeiAttribute("classcode", _classcode);
    b->addAttribute(a);
};

bool mei::ClasscodeidentMixIn::hasClasscode() {
    return b->hasAttribute("classcode");
};

void mei::ClasscodeidentMixIn::removeClasscode() {
    b->removeAttribute("classcode");
};

/* include <classcodemixin> */
mei::ClefLogMixIn::ClefLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::ClefLogMixIn::~ClefLogMixIn() {}
MeiAttribute* mei::ClefLogMixIn::getCautionary() {
    if (!b->hasAttribute("cautionary")) {
        return NULL;
    }
    return b->getAttribute("cautionary");
};

void mei::ClefLogMixIn::setCautionary(std::string _cautionary) {
    MeiAttribute *a = new MeiAttribute("cautionary", _cautionary);
    b->addAttribute(a);
};

bool mei::ClefLogMixIn::hasCautionary() {
    return b->hasAttribute("cautionary");
};

void mei::ClefLogMixIn::removeCautionary() {
    b->removeAttribute("cautionary");
};

/* include <cautionarymixin> */
mei::CleffingLogMixIn::CleffingLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::CleffingLogMixIn::~CleffingLogMixIn() {}
MeiAttribute* mei::CleffingLogMixIn::getClefShape() {
    if (!b->hasAttribute("clef.shape")) {
        return NULL;
    }
    return b->getAttribute("clef.shape");
};

void mei::CleffingLogMixIn::setClefShape(std::string _clefshape) {
    MeiAttribute *a = new MeiAttribute("clef.shape", _clefshape);
    b->addAttribute(a);
};

bool mei::CleffingLogMixIn::hasClefShape() {
    return b->hasAttribute("clef.shape");
};

void mei::CleffingLogMixIn::removeClefShape() {
    b->removeAttribute("clef.shape");
};
MeiAttribute* mei::CleffingLogMixIn::getClefLine() {
    if (!b->hasAttribute("clef.line")) {
        return NULL;
    }
    return b->getAttribute("clef.line");
};

void mei::CleffingLogMixIn::setClefLine(std::string _clefline) {
    MeiAttribute *a = new MeiAttribute("clef.line", _clefline);
    b->addAttribute(a);
};

bool mei::CleffingLogMixIn::hasClefLine() {
    return b->hasAttribute("clef.line");
};

void mei::CleffingLogMixIn::removeClefLine() {
    b->removeAttribute("clef.line");
};
MeiAttribute* mei::CleffingLogMixIn::getClefDis() {
    if (!b->hasAttribute("clef.dis")) {
        return NULL;
    }
    return b->getAttribute("clef.dis");
};

void mei::CleffingLogMixIn::setClefDis(std::string _clefdis) {
    MeiAttribute *a = new MeiAttribute("clef.dis", _clefdis);
    b->addAttribute(a);
};

bool mei::CleffingLogMixIn::hasClefDis() {
    return b->hasAttribute("clef.dis");
};

void mei::CleffingLogMixIn::removeClefDis() {
    b->removeAttribute("clef.dis");
};
MeiAttribute* mei::CleffingLogMixIn::getClefDisPlace() {
    if (!b->hasAttribute("clef.dis.place")) {
        return NULL;
    }
    return b->getAttribute("clef.dis.place");
};

void mei::CleffingLogMixIn::setClefDisPlace(std::string _clefdisplace) {
    MeiAttribute *a = new MeiAttribute("clef.dis.place", _clefdisplace);
    b->addAttribute(a);
};

bool mei::CleffingLogMixIn::hasClefDisPlace() {
    return b->hasAttribute("clef.dis.place");
};

void mei::CleffingLogMixIn::removeClefDisPlace() {
    b->removeAttribute("clef.dis.place");
};

/* include <clef.dis.placemixin> */
mei::CleffingVisMixIn::CleffingVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::CleffingVisMixIn::~CleffingVisMixIn() {}
MeiAttribute* mei::CleffingVisMixIn::getClefColor() {
    if (!b->hasAttribute("clef.color")) {
        return NULL;
    }
    return b->getAttribute("clef.color");
};

void mei::CleffingVisMixIn::setClefColor(std::string _clefcolor) {
    MeiAttribute *a = new MeiAttribute("clef.color", _clefcolor);
    b->addAttribute(a);
};

bool mei::CleffingVisMixIn::hasClefColor() {
    return b->hasAttribute("clef.color");
};

void mei::CleffingVisMixIn::removeClefColor() {
    b->removeAttribute("clef.color");
};
MeiAttribute* mei::CleffingVisMixIn::getClefVisible() {
    if (!b->hasAttribute("clef.visible")) {
        return NULL;
    }
    return b->getAttribute("clef.visible");
};

void mei::CleffingVisMixIn::setClefVisible(std::string _clefvisible) {
    MeiAttribute *a = new MeiAttribute("clef.visible", _clefvisible);
    b->addAttribute(a);
};

bool mei::CleffingVisMixIn::hasClefVisible() {
    return b->hasAttribute("clef.visible");
};

void mei::CleffingVisMixIn::removeClefVisible() {
    b->removeAttribute("clef.visible");
};

/* include <clef.visiblemixin> */
mei::ClefshapeMixIn::ClefshapeMixIn(MeiElement *b) {
    this->b = b;
};

mei::ClefshapeMixIn::~ClefshapeMixIn() {}
MeiAttribute* mei::ClefshapeMixIn::getShape() {
    if (!b->hasAttribute("shape")) {
        return NULL;
    }
    return b->getAttribute("shape");
};

void mei::ClefshapeMixIn::setShape(std::string _shape) {
    MeiAttribute *a = new MeiAttribute("shape", _shape);
    b->addAttribute(a);
};

bool mei::ClefshapeMixIn::hasShape() {
    return b->hasAttribute("shape");
};

void mei::ClefshapeMixIn::removeShape() {
    b->removeAttribute("shape");
};

/* include <shapemixin> */
mei::ColorMixIn::ColorMixIn(MeiElement *b) {
    this->b = b;
};

mei::ColorMixIn::~ColorMixIn() {}
MeiAttribute* mei::ColorMixIn::getColor() {
    if (!b->hasAttribute("color")) {
        return NULL;
    }
    return b->getAttribute("color");
};

void mei::ColorMixIn::setColor(std::string _color) {
    MeiAttribute *a = new MeiAttribute("color", _color);
    b->addAttribute(a);
};

bool mei::ColorMixIn::hasColor() {
    return b->hasAttribute("color");
};

void mei::ColorMixIn::removeColor() {
    b->removeAttribute("color");
};

/* include <colormixin> */
mei::ColorationMixIn::ColorationMixIn(MeiElement *b) {
    this->b = b;
};

mei::ColorationMixIn::~ColorationMixIn() {}
MeiAttribute* mei::ColorationMixIn::getColored() {
    if (!b->hasAttribute("colored")) {
        return NULL;
    }
    return b->getAttribute("colored");
};

void mei::ColorationMixIn::setColored(std::string _colored) {
    MeiAttribute *a = new MeiAttribute("colored", _colored);
    b->addAttribute(a);
};

bool mei::ColorationMixIn::hasColored() {
    return b->hasAttribute("colored");
};

void mei::ColorationMixIn::removeColored() {
    b->removeAttribute("colored");
};

/* include <coloredmixin> */
mei::CommonMixIn::CommonMixIn(MeiElement *b) {
    this->b = b;
};

mei::CommonMixIn::~CommonMixIn() {}
MeiAttribute* mei::CommonMixIn::getN() {
    if (!b->hasAttribute("n")) {
        return NULL;
    }
    return b->getAttribute("n");
};

void mei::CommonMixIn::setN(std::string _n) {
    MeiAttribute *a = new MeiAttribute("n", _n);
    b->addAttribute(a);
};

bool mei::CommonMixIn::hasN() {
    return b->hasAttribute("n");
};

void mei::CommonMixIn::removeN() {
    b->removeAttribute("n");
};

/* include <nmixin> */
mei::CommonPartMixIn::CommonPartMixIn(MeiElement *b) {
    this->b = b;
};

mei::CommonPartMixIn::~CommonPartMixIn() {}
MeiAttribute* mei::CommonPartMixIn::getLabel() {
    if (!b->hasAttribute("label")) {
        return NULL;
    }
    return b->getAttribute("label");
};

void mei::CommonPartMixIn::setLabel(std::string _label) {
    MeiAttribute *a = new MeiAttribute("label", _label);
    b->addAttribute(a);
};

bool mei::CommonPartMixIn::hasLabel() {
    return b->hasAttribute("label");
};

void mei::CommonPartMixIn::removeLabel() {
    b->removeAttribute("label");
};
MeiAttribute* mei::CommonPartMixIn::getBase() {
    if (!b->hasAttribute("xml:base")) {
        return NULL;
    }
    return b->getAttribute("xml:base");
};

void mei::CommonPartMixIn::setBase(std::string _base) {
    MeiAttribute *a = new MeiAttribute("xml:base", _base);
    b->addAttribute(a);
};

bool mei::CommonPartMixIn::hasBase() {
    return b->hasAttribute("xml:base");
};

void mei::CommonPartMixIn::removeBase() {
    b->removeAttribute("xml:base");
};

/* include <basemixin> */
mei::CoordinatedMixIn::CoordinatedMixIn(MeiElement *b) {
    this->b = b;
};

mei::CoordinatedMixIn::~CoordinatedMixIn() {}
MeiAttribute* mei::CoordinatedMixIn::getUlx() {
    if (!b->hasAttribute("ulx")) {
        return NULL;
    }
    return b->getAttribute("ulx");
};

void mei::CoordinatedMixIn::setUlx(std::string _ulx) {
    MeiAttribute *a = new MeiAttribute("ulx", _ulx);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasUlx() {
    return b->hasAttribute("ulx");
};

void mei::CoordinatedMixIn::removeUlx() {
    b->removeAttribute("ulx");
};
MeiAttribute* mei::CoordinatedMixIn::getUly() {
    if (!b->hasAttribute("uly")) {
        return NULL;
    }
    return b->getAttribute("uly");
};

void mei::CoordinatedMixIn::setUly(std::string _uly) {
    MeiAttribute *a = new MeiAttribute("uly", _uly);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasUly() {
    return b->hasAttribute("uly");
};

void mei::CoordinatedMixIn::removeUly() {
    b->removeAttribute("uly");
};
MeiAttribute* mei::CoordinatedMixIn::getLrx() {
    if (!b->hasAttribute("lrx")) {
        return NULL;
    }
    return b->getAttribute("lrx");
};

void mei::CoordinatedMixIn::setLrx(std::string _lrx) {
    MeiAttribute *a = new MeiAttribute("lrx", _lrx);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasLrx() {
    return b->hasAttribute("lrx");
};

void mei::CoordinatedMixIn::removeLrx() {
    b->removeAttribute("lrx");
};
MeiAttribute* mei::CoordinatedMixIn::getLry() {
    if (!b->hasAttribute("lry")) {
        return NULL;
    }
    return b->getAttribute("lry");
};

void mei::CoordinatedMixIn::setLry(std::string _lry) {
    MeiAttribute *a = new MeiAttribute("lry", _lry);
    b->addAttribute(a);
};

bool mei::CoordinatedMixIn::hasLry() {
    return b->hasAttribute("lry");
};

void mei::CoordinatedMixIn::removeLry() {
    b->removeAttribute("lry");
};

/* include <lrymixin> */
mei::CurvatureMixIn::CurvatureMixIn(MeiElement *b) {
    this->b = b;
};

mei::CurvatureMixIn::~CurvatureMixIn() {}
MeiAttribute* mei::CurvatureMixIn::getBezier() {
    if (!b->hasAttribute("bezier")) {
        return NULL;
    }
    return b->getAttribute("bezier");
};

void mei::CurvatureMixIn::setBezier(std::string _bezier) {
    MeiAttribute *a = new MeiAttribute("bezier", _bezier);
    b->addAttribute(a);
};

bool mei::CurvatureMixIn::hasBezier() {
    return b->hasAttribute("bezier");
};

void mei::CurvatureMixIn::removeBezier() {
    b->removeAttribute("bezier");
};
MeiAttribute* mei::CurvatureMixIn::getBulge() {
    if (!b->hasAttribute("bulge")) {
        return NULL;
    }
    return b->getAttribute("bulge");
};

void mei::CurvatureMixIn::setBulge(std::string _bulge) {
    MeiAttribute *a = new MeiAttribute("bulge", _bulge);
    b->addAttribute(a);
};

bool mei::CurvatureMixIn::hasBulge() {
    return b->hasAttribute("bulge");
};

void mei::CurvatureMixIn::removeBulge() {
    b->removeAttribute("bulge");
};
MeiAttribute* mei::CurvatureMixIn::getCurvedir() {
    if (!b->hasAttribute("curvedir")) {
        return NULL;
    }
    return b->getAttribute("curvedir");
};

void mei::CurvatureMixIn::setCurvedir(std::string _curvedir) {
    MeiAttribute *a = new MeiAttribute("curvedir", _curvedir);
    b->addAttribute(a);
};

bool mei::CurvatureMixIn::hasCurvedir() {
    return b->hasAttribute("curvedir");
};

void mei::CurvatureMixIn::removeCurvedir() {
    b->removeAttribute("curvedir");
};

/* include <curvedirmixin> */
mei::CurverendMixIn::CurverendMixIn(MeiElement *b) {
    this->b = b;
};

mei::CurverendMixIn::~CurverendMixIn() {}
MeiAttribute* mei::CurverendMixIn::getLform() {
    if (!b->hasAttribute("lform")) {
        return NULL;
    }
    return b->getAttribute("lform");
};

void mei::CurverendMixIn::setLform(std::string _lform) {
    MeiAttribute *a = new MeiAttribute("lform", _lform);
    b->addAttribute(a);
};

bool mei::CurverendMixIn::hasLform() {
    return b->hasAttribute("lform");
};

void mei::CurverendMixIn::removeLform() {
    b->removeAttribute("lform");
};
MeiAttribute* mei::CurverendMixIn::getLwidth() {
    if (!b->hasAttribute("lwidth")) {
        return NULL;
    }
    return b->getAttribute("lwidth");
};

void mei::CurverendMixIn::setLwidth(std::string _lwidth) {
    MeiAttribute *a = new MeiAttribute("lwidth", _lwidth);
    b->addAttribute(a);
};

bool mei::CurverendMixIn::hasLwidth() {
    return b->hasAttribute("lwidth");
};

void mei::CurverendMixIn::removeLwidth() {
    b->removeAttribute("lwidth");
};

/* include <lwidthmixin> */
mei::CustosLogMixIn::CustosLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::CustosLogMixIn::~CustosLogMixIn() {}
MeiAttribute* mei::CustosLogMixIn::getTarget() {
    if (!b->hasAttribute("target")) {
        return NULL;
    }
    return b->getAttribute("target");
};

void mei::CustosLogMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    b->addAttribute(a);
};

bool mei::CustosLogMixIn::hasTarget() {
    return b->hasAttribute("target");
};

void mei::CustosLogMixIn::removeTarget() {
    b->removeAttribute("target");
};

/* include <targetmixin> */
mei::DatableMixIn::DatableMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatableMixIn::~DatableMixIn() {}
MeiAttribute* mei::DatableMixIn::getEnddate() {
    if (!b->hasAttribute("enddate")) {
        return NULL;
    }
    return b->getAttribute("enddate");
};

void mei::DatableMixIn::setEnddate(std::string _enddate) {
    MeiAttribute *a = new MeiAttribute("enddate", _enddate);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasEnddate() {
    return b->hasAttribute("enddate");
};

void mei::DatableMixIn::removeEnddate() {
    b->removeAttribute("enddate");
};
MeiAttribute* mei::DatableMixIn::getIsodate() {
    if (!b->hasAttribute("isodate")) {
        return NULL;
    }
    return b->getAttribute("isodate");
};

void mei::DatableMixIn::setIsodate(std::string _isodate) {
    MeiAttribute *a = new MeiAttribute("isodate", _isodate);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasIsodate() {
    return b->hasAttribute("isodate");
};

void mei::DatableMixIn::removeIsodate() {
    b->removeAttribute("isodate");
};
MeiAttribute* mei::DatableMixIn::getNotafter() {
    if (!b->hasAttribute("notafter")) {
        return NULL;
    }
    return b->getAttribute("notafter");
};

void mei::DatableMixIn::setNotafter(std::string _notafter) {
    MeiAttribute *a = new MeiAttribute("notafter", _notafter);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasNotafter() {
    return b->hasAttribute("notafter");
};

void mei::DatableMixIn::removeNotafter() {
    b->removeAttribute("notafter");
};
MeiAttribute* mei::DatableMixIn::getNotbefore() {
    if (!b->hasAttribute("notbefore")) {
        return NULL;
    }
    return b->getAttribute("notbefore");
};

void mei::DatableMixIn::setNotbefore(std::string _notbefore) {
    MeiAttribute *a = new MeiAttribute("notbefore", _notbefore);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasNotbefore() {
    return b->hasAttribute("notbefore");
};

void mei::DatableMixIn::removeNotbefore() {
    b->removeAttribute("notbefore");
};
MeiAttribute* mei::DatableMixIn::getStartdate() {
    if (!b->hasAttribute("startdate")) {
        return NULL;
    }
    return b->getAttribute("startdate");
};

void mei::DatableMixIn::setStartdate(std::string _startdate) {
    MeiAttribute *a = new MeiAttribute("startdate", _startdate);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasStartdate() {
    return b->hasAttribute("startdate");
};

void mei::DatableMixIn::removeStartdate() {
    b->removeAttribute("startdate");
};

/* include <startdatemixin> */
mei::DatapointingMixIn::DatapointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatapointingMixIn::~DatapointingMixIn() {}
MeiAttribute* mei::DatapointingMixIn::getData() {
    if (!b->hasAttribute("data")) {
        return NULL;
    }
    return b->getAttribute("data");
};

void mei::DatapointingMixIn::setData(std::string _data) {
    MeiAttribute *a = new MeiAttribute("data", _data);
    b->addAttribute(a);
};

bool mei::DatapointingMixIn::hasData() {
    return b->hasAttribute("data");
};

void mei::DatapointingMixIn::removeData() {
    b->removeAttribute("data");
};

/* include <datamixin> */
mei::DeclaringMixIn::DeclaringMixIn(MeiElement *b) {
    this->b = b;
};

mei::DeclaringMixIn::~DeclaringMixIn() {}
MeiAttribute* mei::DeclaringMixIn::getDecls() {
    if (!b->hasAttribute("decls")) {
        return NULL;
    }
    return b->getAttribute("decls");
};

void mei::DeclaringMixIn::setDecls(std::string _decls) {
    MeiAttribute *a = new MeiAttribute("decls", _decls);
    b->addAttribute(a);
};

bool mei::DeclaringMixIn::hasDecls() {
    return b->hasAttribute("decls");
};

void mei::DeclaringMixIn::removeDecls() {
    b->removeAttribute("decls");
};

/* include <declsmixin> */
mei::DistancesMixIn::DistancesMixIn(MeiElement *b) {
    this->b = b;
};

mei::DistancesMixIn::~DistancesMixIn() {}
MeiAttribute* mei::DistancesMixIn::getDynamDist() {
    if (!b->hasAttribute("dynam.dist")) {
        return NULL;
    }
    return b->getAttribute("dynam.dist");
};

void mei::DistancesMixIn::setDynamDist(std::string _dynamdist) {
    MeiAttribute *a = new MeiAttribute("dynam.dist", _dynamdist);
    b->addAttribute(a);
};

bool mei::DistancesMixIn::hasDynamDist() {
    return b->hasAttribute("dynam.dist");
};

void mei::DistancesMixIn::removeDynamDist() {
    b->removeAttribute("dynam.dist");
};
MeiAttribute* mei::DistancesMixIn::getHarmDist() {
    if (!b->hasAttribute("harm.dist")) {
        return NULL;
    }
    return b->getAttribute("harm.dist");
};

void mei::DistancesMixIn::setHarmDist(std::string _harmdist) {
    MeiAttribute *a = new MeiAttribute("harm.dist", _harmdist);
    b->addAttribute(a);
};

bool mei::DistancesMixIn::hasHarmDist() {
    return b->hasAttribute("harm.dist");
};

void mei::DistancesMixIn::removeHarmDist() {
    b->removeAttribute("harm.dist");
};
MeiAttribute* mei::DistancesMixIn::getTextDist() {
    if (!b->hasAttribute("text.dist")) {
        return NULL;
    }
    return b->getAttribute("text.dist");
};

void mei::DistancesMixIn::setTextDist(std::string _textdist) {
    MeiAttribute *a = new MeiAttribute("text.dist", _textdist);
    b->addAttribute(a);
};

bool mei::DistancesMixIn::hasTextDist() {
    return b->hasAttribute("text.dist");
};

void mei::DistancesMixIn::removeTextDist() {
    b->removeAttribute("text.dist");
};

/* include <text.distmixin> */
mei::DotLogMixIn::DotLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::DotLogMixIn::~DotLogMixIn() {}
MeiAttribute* mei::DotLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::DotLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::DotLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::DotLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::DurationAdditiveMixIn::DurationAdditiveMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationAdditiveMixIn::~DurationAdditiveMixIn() {}
MeiAttribute* mei::DurationAdditiveMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        return NULL;
    }
    return b->getAttribute("dur");
};

void mei::DurationAdditiveMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::DurationAdditiveMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::DurationAdditiveMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::DurationDefaultMixIn::DurationDefaultMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationDefaultMixIn::~DurationDefaultMixIn() {}
MeiAttribute* mei::DurationDefaultMixIn::getDurDefault() {
    if (!b->hasAttribute("dur.default")) {
        return NULL;
    }
    return b->getAttribute("dur.default");
};

void mei::DurationDefaultMixIn::setDurDefault(std::string _durdefault) {
    MeiAttribute *a = new MeiAttribute("dur.default", _durdefault);
    b->addAttribute(a);
};

bool mei::DurationDefaultMixIn::hasDurDefault() {
    return b->hasAttribute("dur.default");
};

void mei::DurationDefaultMixIn::removeDurDefault() {
    b->removeAttribute("dur.default");
};
MeiAttribute* mei::DurationDefaultMixIn::getNumDefault() {
    if (!b->hasAttribute("num.default")) {
        return NULL;
    }
    return b->getAttribute("num.default");
};

void mei::DurationDefaultMixIn::setNumDefault(std::string _numdefault) {
    MeiAttribute *a = new MeiAttribute("num.default", _numdefault);
    b->addAttribute(a);
};

bool mei::DurationDefaultMixIn::hasNumDefault() {
    return b->hasAttribute("num.default");
};

void mei::DurationDefaultMixIn::removeNumDefault() {
    b->removeAttribute("num.default");
};
MeiAttribute* mei::DurationDefaultMixIn::getNumbaseDefault() {
    if (!b->hasAttribute("numbase.default")) {
        return NULL;
    }
    return b->getAttribute("numbase.default");
};

void mei::DurationDefaultMixIn::setNumbaseDefault(std::string _numbasedefault) {
    MeiAttribute *a = new MeiAttribute("numbase.default", _numbasedefault);
    b->addAttribute(a);
};

bool mei::DurationDefaultMixIn::hasNumbaseDefault() {
    return b->hasAttribute("numbase.default");
};

void mei::DurationDefaultMixIn::removeNumbaseDefault() {
    b->removeAttribute("numbase.default");
};

/* include <numbase.defaultmixin> */
mei::DurationMusicalMixIn::DurationMusicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationMusicalMixIn::~DurationMusicalMixIn() {}
MeiAttribute* mei::DurationMusicalMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        return NULL;
    }
    return b->getAttribute("dur");
};

void mei::DurationMusicalMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::DurationMusicalMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::DurationMusicalMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::DurationPerformedMixIn::DurationPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationPerformedMixIn::~DurationPerformedMixIn() {}
MeiAttribute* mei::DurationPerformedMixIn::getDurGes() {
    if (!b->hasAttribute("dur.ges")) {
        return NULL;
    }
    return b->getAttribute("dur.ges");
};

void mei::DurationPerformedMixIn::setDurGes(std::string _durges) {
    MeiAttribute *a = new MeiAttribute("dur.ges", _durges);
    b->addAttribute(a);
};

bool mei::DurationPerformedMixIn::hasDurGes() {
    return b->hasAttribute("dur.ges");
};

void mei::DurationPerformedMixIn::removeDurGes() {
    b->removeAttribute("dur.ges");
};

/* include <dur.gesmixin> */
mei::DurationRatioMixIn::DurationRatioMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationRatioMixIn::~DurationRatioMixIn() {}
MeiAttribute* mei::DurationRatioMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        return NULL;
    }
    return b->getAttribute("num");
};

void mei::DurationRatioMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::DurationRatioMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::DurationRatioMixIn::removeNum() {
    b->removeAttribute("num");
};
MeiAttribute* mei::DurationRatioMixIn::getNumbase() {
    if (!b->hasAttribute("numbase")) {
        return NULL;
    }
    return b->getAttribute("numbase");
};

void mei::DurationRatioMixIn::setNumbase(std::string _numbase) {
    MeiAttribute *a = new MeiAttribute("numbase", _numbase);
    b->addAttribute(a);
};

bool mei::DurationRatioMixIn::hasNumbase() {
    return b->hasAttribute("numbase");
};

void mei::DurationRatioMixIn::removeNumbase() {
    b->removeAttribute("numbase");
};

/* include <numbasemixin> */
mei::EnclosingcharsMixIn::EnclosingcharsMixIn(MeiElement *b) {
    this->b = b;
};

mei::EnclosingcharsMixIn::~EnclosingcharsMixIn() {}
MeiAttribute* mei::EnclosingcharsMixIn::getEnclose() {
    if (!b->hasAttribute("enclose")) {
        return NULL;
    }
    return b->getAttribute("enclose");
};

void mei::EnclosingcharsMixIn::setEnclose(std::string _enclose) {
    MeiAttribute *a = new MeiAttribute("enclose", _enclose);
    b->addAttribute(a);
};

bool mei::EnclosingcharsMixIn::hasEnclose() {
    return b->hasAttribute("enclose");
};

void mei::EnclosingcharsMixIn::removeEnclose() {
    b->removeAttribute("enclose");
};

/* include <enclosemixin> */
mei::EndingsMixIn::EndingsMixIn(MeiElement *b) {
    this->b = b;
};

mei::EndingsMixIn::~EndingsMixIn() {}
MeiAttribute* mei::EndingsMixIn::getEndingRend() {
    if (!b->hasAttribute("ending.rend")) {
        return NULL;
    }
    return b->getAttribute("ending.rend");
};

void mei::EndingsMixIn::setEndingRend(std::string _endingrend) {
    MeiAttribute *a = new MeiAttribute("ending.rend", _endingrend);
    b->addAttribute(a);
};

bool mei::EndingsMixIn::hasEndingRend() {
    return b->hasAttribute("ending.rend");
};

void mei::EndingsMixIn::removeEndingRend() {
    b->removeAttribute("ending.rend");
};

/* include <ending.rendmixin> */
mei::ExtenderMixIn::ExtenderMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExtenderMixIn::~ExtenderMixIn() {}
MeiAttribute* mei::ExtenderMixIn::getExtender() {
    if (!b->hasAttribute("extender")) {
        return NULL;
    }
    return b->getAttribute("extender");
};

void mei::ExtenderMixIn::setExtender(std::string _extender) {
    MeiAttribute *a = new MeiAttribute("extender", _extender);
    b->addAttribute(a);
};

bool mei::ExtenderMixIn::hasExtender() {
    return b->hasAttribute("extender");
};

void mei::ExtenderMixIn::removeExtender() {
    b->removeAttribute("extender");
};

/* include <extendermixin> */
mei::FermatapresentMixIn::FermatapresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::FermatapresentMixIn::~FermatapresentMixIn() {}
MeiAttribute* mei::FermatapresentMixIn::getFermata() {
    if (!b->hasAttribute("fermata")) {
        return NULL;
    }
    return b->getAttribute("fermata");
};

void mei::FermatapresentMixIn::setFermata(std::string _fermata) {
    MeiAttribute *a = new MeiAttribute("fermata", _fermata);
    b->addAttribute(a);
};

bool mei::FermatapresentMixIn::hasFermata() {
    return b->hasAttribute("fermata");
};

void mei::FermatapresentMixIn::removeFermata() {
    b->removeAttribute("fermata");
};

/* include <fermatamixin> */
mei::FilingMixIn::FilingMixIn(MeiElement *b) {
    this->b = b;
};

mei::FilingMixIn::~FilingMixIn() {}
MeiAttribute* mei::FilingMixIn::getNonfiling() {
    if (!b->hasAttribute("nonfiling")) {
        return NULL;
    }
    return b->getAttribute("nonfiling");
};

void mei::FilingMixIn::setNonfiling(std::string _nonfiling) {
    MeiAttribute *a = new MeiAttribute("nonfiling", _nonfiling);
    b->addAttribute(a);
};

bool mei::FilingMixIn::hasNonfiling() {
    return b->hasAttribute("nonfiling");
};

void mei::FilingMixIn::removeNonfiling() {
    b->removeAttribute("nonfiling");
};

/* include <nonfilingmixin> */
mei::GrpSymLogMixIn::GrpSymLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::GrpSymLogMixIn::~GrpSymLogMixIn() {}
MeiAttribute* mei::GrpSymLogMixIn::getLevel() {
    if (!b->hasAttribute("level")) {
        return NULL;
    }
    return b->getAttribute("level");
};

void mei::GrpSymLogMixIn::setLevel(std::string _level) {
    MeiAttribute *a = new MeiAttribute("level", _level);
    b->addAttribute(a);
};

bool mei::GrpSymLogMixIn::hasLevel() {
    return b->hasAttribute("level");
};

void mei::GrpSymLogMixIn::removeLevel() {
    b->removeAttribute("level");
};

/* include <levelmixin> */
mei::HandidentMixIn::HandidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::HandidentMixIn::~HandidentMixIn() {}
MeiAttribute* mei::HandidentMixIn::getHand() {
    if (!b->hasAttribute("hand")) {
        return NULL;
    }
    return b->getAttribute("hand");
};

void mei::HandidentMixIn::setHand(std::string _hand) {
    MeiAttribute *a = new MeiAttribute("hand", _hand);
    b->addAttribute(a);
};

bool mei::HandidentMixIn::hasHand() {
    return b->hasAttribute("hand");
};

void mei::HandidentMixIn::removeHand() {
    b->removeAttribute("hand");
};

/* include <handmixin> */
mei::HeightMixIn::HeightMixIn(MeiElement *b) {
    this->b = b;
};

mei::HeightMixIn::~HeightMixIn() {}
MeiAttribute* mei::HeightMixIn::getHeight() {
    if (!b->hasAttribute("height")) {
        return NULL;
    }
    return b->getAttribute("height");
};

void mei::HeightMixIn::setHeight(std::string _height) {
    MeiAttribute *a = new MeiAttribute("height", _height);
    b->addAttribute(a);
};

bool mei::HeightMixIn::hasHeight() {
    return b->hasAttribute("height");
};

void mei::HeightMixIn::removeHeight() {
    b->removeAttribute("height");
};

/* include <heightmixin> */
mei::HorizontalalignMixIn::HorizontalalignMixIn(MeiElement *b) {
    this->b = b;
};

mei::HorizontalalignMixIn::~HorizontalalignMixIn() {}
MeiAttribute* mei::HorizontalalignMixIn::getHalign() {
    if (!b->hasAttribute("halign")) {
        return NULL;
    }
    return b->getAttribute("halign");
};

void mei::HorizontalalignMixIn::setHalign(std::string _halign) {
    MeiAttribute *a = new MeiAttribute("halign", _halign);
    b->addAttribute(a);
};

bool mei::HorizontalalignMixIn::hasHalign() {
    return b->hasAttribute("halign");
};

void mei::HorizontalalignMixIn::removeHalign() {
    b->removeAttribute("halign");
};

/* include <halignmixin> */
mei::InstrumentidentMixIn::InstrumentidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::InstrumentidentMixIn::~InstrumentidentMixIn() {}
MeiAttribute* mei::InstrumentidentMixIn::getInstr() {
    if (!b->hasAttribute("instr")) {
        return NULL;
    }
    return b->getAttribute("instr");
};

void mei::InstrumentidentMixIn::setInstr(std::string _instr) {
    MeiAttribute *a = new MeiAttribute("instr", _instr);
    b->addAttribute(a);
};

bool mei::InstrumentidentMixIn::hasInstr() {
    return b->hasAttribute("instr");
};

void mei::InstrumentidentMixIn::removeInstr() {
    b->removeAttribute("instr");
};

/* include <instrmixin> */
mei::InternetmediaMixIn::InternetmediaMixIn(MeiElement *b) {
    this->b = b;
};

mei::InternetmediaMixIn::~InternetmediaMixIn() {}
MeiAttribute* mei::InternetmediaMixIn::getMimetype() {
    if (!b->hasAttribute("mimetype")) {
        return NULL;
    }
    return b->getAttribute("mimetype");
};

void mei::InternetmediaMixIn::setMimetype(std::string _mimetype) {
    MeiAttribute *a = new MeiAttribute("mimetype", _mimetype);
    b->addAttribute(a);
};

bool mei::InternetmediaMixIn::hasMimetype() {
    return b->hasAttribute("mimetype");
};

void mei::InternetmediaMixIn::removeMimetype() {
    b->removeAttribute("mimetype");
};

/* include <mimetypemixin> */
mei::JoinedMixIn::JoinedMixIn(MeiElement *b) {
    this->b = b;
};

mei::JoinedMixIn::~JoinedMixIn() {}
MeiAttribute* mei::JoinedMixIn::getJoin() {
    if (!b->hasAttribute("join")) {
        return NULL;
    }
    return b->getAttribute("join");
};

void mei::JoinedMixIn::setJoin(std::string _join) {
    MeiAttribute *a = new MeiAttribute("join", _join);
    b->addAttribute(a);
};

bool mei::JoinedMixIn::hasJoin() {
    return b->hasAttribute("join");
};

void mei::JoinedMixIn::removeJoin() {
    b->removeAttribute("join");
};

/* include <joinmixin> */
mei::KeySigLogMixIn::KeySigLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigLogMixIn::~KeySigLogMixIn() {}
MeiAttribute* mei::KeySigLogMixIn::getSig() {
    if (!b->hasAttribute("sig")) {
        return NULL;
    }
    return b->getAttribute("sig");
};

void mei::KeySigLogMixIn::setSig(std::string _sig) {
    MeiAttribute *a = new MeiAttribute("sig", _sig);
    b->addAttribute(a);
};

bool mei::KeySigLogMixIn::hasSig() {
    return b->hasAttribute("sig");
};

void mei::KeySigLogMixIn::removeSig() {
    b->removeAttribute("sig");
};
MeiAttribute* mei::KeySigLogMixIn::getSigMixed() {
    if (!b->hasAttribute("sig.mixed")) {
        return NULL;
    }
    return b->getAttribute("sig.mixed");
};

void mei::KeySigLogMixIn::setSigMixed(std::string _sigmixed) {
    MeiAttribute *a = new MeiAttribute("sig.mixed", _sigmixed);
    b->addAttribute(a);
};

bool mei::KeySigLogMixIn::hasSigMixed() {
    return b->hasAttribute("sig.mixed");
};

void mei::KeySigLogMixIn::removeSigMixed() {
    b->removeAttribute("sig.mixed");
};
MeiAttribute* mei::KeySigLogMixIn::getMode() {
    if (!b->hasAttribute("mode")) {
        return NULL;
    }
    return b->getAttribute("mode");
};

void mei::KeySigLogMixIn::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    b->addAttribute(a);
};

bool mei::KeySigLogMixIn::hasMode() {
    return b->hasAttribute("mode");
};

void mei::KeySigLogMixIn::removeMode() {
    b->removeAttribute("mode");
};

/* include <modemixin> */
mei::KeySigVisMixIn::KeySigVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigVisMixIn::~KeySigVisMixIn() {}
MeiAttribute* mei::KeySigVisMixIn::getSigShowchange() {
    if (!b->hasAttribute("sig.showchange")) {
        return NULL;
    }
    return b->getAttribute("sig.showchange");
};

void mei::KeySigVisMixIn::setSigShowchange(std::string _sigshowchange) {
    MeiAttribute *a = new MeiAttribute("sig.showchange", _sigshowchange);
    b->addAttribute(a);
};

bool mei::KeySigVisMixIn::hasSigShowchange() {
    return b->hasAttribute("sig.showchange");
};

void mei::KeySigVisMixIn::removeSigShowchange() {
    b->removeAttribute("sig.showchange");
};

/* include <sig.showchangemixin> */
mei::KeySigDefaultLogMixIn::KeySigDefaultLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigDefaultLogMixIn::~KeySigDefaultLogMixIn() {}
MeiAttribute* mei::KeySigDefaultLogMixIn::getKeyAccid() {
    if (!b->hasAttribute("key.accid")) {
        return NULL;
    }
    return b->getAttribute("key.accid");
};

void mei::KeySigDefaultLogMixIn::setKeyAccid(std::string _keyaccid) {
    MeiAttribute *a = new MeiAttribute("key.accid", _keyaccid);
    b->addAttribute(a);
};

bool mei::KeySigDefaultLogMixIn::hasKeyAccid() {
    return b->hasAttribute("key.accid");
};

void mei::KeySigDefaultLogMixIn::removeKeyAccid() {
    b->removeAttribute("key.accid");
};
MeiAttribute* mei::KeySigDefaultLogMixIn::getKeyMode() {
    if (!b->hasAttribute("key.mode")) {
        return NULL;
    }
    return b->getAttribute("key.mode");
};

void mei::KeySigDefaultLogMixIn::setKeyMode(std::string _keymode) {
    MeiAttribute *a = new MeiAttribute("key.mode", _keymode);
    b->addAttribute(a);
};

bool mei::KeySigDefaultLogMixIn::hasKeyMode() {
    return b->hasAttribute("key.mode");
};

void mei::KeySigDefaultLogMixIn::removeKeyMode() {
    b->removeAttribute("key.mode");
};
MeiAttribute* mei::KeySigDefaultLogMixIn::getKeyPname() {
    if (!b->hasAttribute("key.pname")) {
        return NULL;
    }
    return b->getAttribute("key.pname");
};

void mei::KeySigDefaultLogMixIn::setKeyPname(std::string _keypname) {
    MeiAttribute *a = new MeiAttribute("key.pname", _keypname);
    b->addAttribute(a);
};

bool mei::KeySigDefaultLogMixIn::hasKeyPname() {
    return b->hasAttribute("key.pname");
};

void mei::KeySigDefaultLogMixIn::removeKeyPname() {
    b->removeAttribute("key.pname");
};
MeiAttribute* mei::KeySigDefaultLogMixIn::getKeySig() {
    if (!b->hasAttribute("key.sig")) {
        return NULL;
    }
    return b->getAttribute("key.sig");
};

void mei::KeySigDefaultLogMixIn::setKeySig(std::string _keysig) {
    MeiAttribute *a = new MeiAttribute("key.sig", _keysig);
    b->addAttribute(a);
};

bool mei::KeySigDefaultLogMixIn::hasKeySig() {
    return b->hasAttribute("key.sig");
};

void mei::KeySigDefaultLogMixIn::removeKeySig() {
    b->removeAttribute("key.sig");
};
MeiAttribute* mei::KeySigDefaultLogMixIn::getKeySigMixed() {
    if (!b->hasAttribute("key.sig.mixed")) {
        return NULL;
    }
    return b->getAttribute("key.sig.mixed");
};

void mei::KeySigDefaultLogMixIn::setKeySigMixed(std::string _keysigmixed) {
    MeiAttribute *a = new MeiAttribute("key.sig.mixed", _keysigmixed);
    b->addAttribute(a);
};

bool mei::KeySigDefaultLogMixIn::hasKeySigMixed() {
    return b->hasAttribute("key.sig.mixed");
};

void mei::KeySigDefaultLogMixIn::removeKeySigMixed() {
    b->removeAttribute("key.sig.mixed");
};

/* include <key.sig.mixedmixin> */
mei::KeySigDefaultVisMixIn::KeySigDefaultVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::KeySigDefaultVisMixIn::~KeySigDefaultVisMixIn() {}
MeiAttribute* mei::KeySigDefaultVisMixIn::getKeySigShow() {
    if (!b->hasAttribute("key.sig.show")) {
        return NULL;
    }
    return b->getAttribute("key.sig.show");
};

void mei::KeySigDefaultVisMixIn::setKeySigShow(std::string _keysigshow) {
    MeiAttribute *a = new MeiAttribute("key.sig.show", _keysigshow);
    b->addAttribute(a);
};

bool mei::KeySigDefaultVisMixIn::hasKeySigShow() {
    return b->hasAttribute("key.sig.show");
};

void mei::KeySigDefaultVisMixIn::removeKeySigShow() {
    b->removeAttribute("key.sig.show");
};
MeiAttribute* mei::KeySigDefaultVisMixIn::getKeySigShowchange() {
    if (!b->hasAttribute("key.sig.showchange")) {
        return NULL;
    }
    return b->getAttribute("key.sig.showchange");
};

void mei::KeySigDefaultVisMixIn::setKeySigShowchange(std::string _keysigshowchange) {
    MeiAttribute *a = new MeiAttribute("key.sig.showchange", _keysigshowchange);
    b->addAttribute(a);
};

bool mei::KeySigDefaultVisMixIn::hasKeySigShowchange() {
    return b->hasAttribute("key.sig.showchange");
};

void mei::KeySigDefaultVisMixIn::removeKeySigShowchange() {
    b->removeAttribute("key.sig.showchange");
};

/* include <key.sig.showchangemixin> */
mei::LabelsAddlMixIn::LabelsAddlMixIn(MeiElement *b) {
    this->b = b;
};

mei::LabelsAddlMixIn::~LabelsAddlMixIn() {}
MeiAttribute* mei::LabelsAddlMixIn::getLabelAbbr() {
    if (!b->hasAttribute("label.abbr")) {
        return NULL;
    }
    return b->getAttribute("label.abbr");
};

void mei::LabelsAddlMixIn::setLabelAbbr(std::string _labelabbr) {
    MeiAttribute *a = new MeiAttribute("label.abbr", _labelabbr);
    b->addAttribute(a);
};

bool mei::LabelsAddlMixIn::hasLabelAbbr() {
    return b->hasAttribute("label.abbr");
};

void mei::LabelsAddlMixIn::removeLabelAbbr() {
    b->removeAttribute("label.abbr");
};

/* include <label.abbrmixin> */
mei::LangMixIn::LangMixIn(MeiElement *b) {
    this->b = b;
};

mei::LangMixIn::~LangMixIn() {}
MeiAttribute* mei::LangMixIn::getLang() {
    if (!b->hasAttribute("xml:lang")) {
        return NULL;
    }
    return b->getAttribute("xml:lang");
};

void mei::LangMixIn::setLang(std::string _lang) {
    MeiAttribute *a = new MeiAttribute("xml:lang", _lang);
    b->addAttribute(a);
};

bool mei::LangMixIn::hasLang() {
    return b->hasAttribute("xml:lang");
};

void mei::LangMixIn::removeLang() {
    b->removeAttribute("xml:lang");
};
MeiAttribute* mei::LangMixIn::getTranslit() {
    if (!b->hasAttribute("xml:translit")) {
        return NULL;
    }
    return b->getAttribute("xml:translit");
};

void mei::LangMixIn::setTranslit(std::string _translit) {
    MeiAttribute *a = new MeiAttribute("xml:translit", _translit);
    b->addAttribute(a);
};

bool mei::LangMixIn::hasTranslit() {
    return b->hasAttribute("xml:translit");
};

void mei::LangMixIn::removeTranslit() {
    b->removeAttribute("xml:translit");
};

/* include <translitmixin> */
mei::LayerLogMixIn::LayerLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::LayerLogMixIn::~LayerLogMixIn() {}
MeiAttribute* mei::LayerLogMixIn::getDef() {
    if (!b->hasAttribute("def")) {
        return NULL;
    }
    return b->getAttribute("def");
};

void mei::LayerLogMixIn::setDef(std::string _def) {
    MeiAttribute *a = new MeiAttribute("def", _def);
    b->addAttribute(a);
};

bool mei::LayerLogMixIn::hasDef() {
    return b->hasAttribute("def");
};

void mei::LayerLogMixIn::removeDef() {
    b->removeAttribute("def");
};

/* include <defmixin> */
mei::LayeridentMixIn::LayeridentMixIn(MeiElement *b) {
    this->b = b;
};

mei::LayeridentMixIn::~LayeridentMixIn() {}
MeiAttribute* mei::LayeridentMixIn::getLayer() {
    if (!b->hasAttribute("layer")) {
        return NULL;
    }
    return b->getAttribute("layer");
};

void mei::LayeridentMixIn::setLayer(std::string _layer) {
    MeiAttribute *a = new MeiAttribute("layer", _layer);
    b->addAttribute(a);
};

bool mei::LayeridentMixIn::hasLayer() {
    return b->hasAttribute("layer");
};

void mei::LayeridentMixIn::removeLayer() {
    b->removeAttribute("layer");
};

/* include <layermixin> */
mei::LineVisMixIn::LineVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::LineVisMixIn::~LineVisMixIn() {}
MeiAttribute* mei::LineVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::LineVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::LineVisMixIn::removeForm() {
    b->removeAttribute("form");
};
MeiAttribute* mei::LineVisMixIn::getWidth() {
    if (!b->hasAttribute("width")) {
        return NULL;
    }
    return b->getAttribute("width");
};

void mei::LineVisMixIn::setWidth(std::string _width) {
    MeiAttribute *a = new MeiAttribute("width", _width);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasWidth() {
    return b->hasAttribute("width");
};

void mei::LineVisMixIn::removeWidth() {
    b->removeAttribute("width");
};
MeiAttribute* mei::LineVisMixIn::getEndsym() {
    if (!b->hasAttribute("endsym")) {
        return NULL;
    }
    return b->getAttribute("endsym");
};

void mei::LineVisMixIn::setEndsym(std::string _endsym) {
    MeiAttribute *a = new MeiAttribute("endsym", _endsym);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasEndsym() {
    return b->hasAttribute("endsym");
};

void mei::LineVisMixIn::removeEndsym() {
    b->removeAttribute("endsym");
};
MeiAttribute* mei::LineVisMixIn::getEndsymsize() {
    if (!b->hasAttribute("endsymsize")) {
        return NULL;
    }
    return b->getAttribute("endsymsize");
};

void mei::LineVisMixIn::setEndsymsize(std::string _endsymsize) {
    MeiAttribute *a = new MeiAttribute("endsymsize", _endsymsize);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasEndsymsize() {
    return b->hasAttribute("endsymsize");
};

void mei::LineVisMixIn::removeEndsymsize() {
    b->removeAttribute("endsymsize");
};
MeiAttribute* mei::LineVisMixIn::getStartsym() {
    if (!b->hasAttribute("startsym")) {
        return NULL;
    }
    return b->getAttribute("startsym");
};

void mei::LineVisMixIn::setStartsym(std::string _startsym) {
    MeiAttribute *a = new MeiAttribute("startsym", _startsym);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasStartsym() {
    return b->hasAttribute("startsym");
};

void mei::LineVisMixIn::removeStartsym() {
    b->removeAttribute("startsym");
};
MeiAttribute* mei::LineVisMixIn::getStartsymsize() {
    if (!b->hasAttribute("startsymsize")) {
        return NULL;
    }
    return b->getAttribute("startsymsize");
};

void mei::LineVisMixIn::setStartsymsize(std::string _startsymsize) {
    MeiAttribute *a = new MeiAttribute("startsymsize", _startsymsize);
    b->addAttribute(a);
};

bool mei::LineVisMixIn::hasStartsymsize() {
    return b->hasAttribute("startsymsize");
};

void mei::LineVisMixIn::removeStartsymsize() {
    b->removeAttribute("startsymsize");
};

/* include <startsymsizemixin> */
mei::LinelocMixIn::LinelocMixIn(MeiElement *b) {
    this->b = b;
};

mei::LinelocMixIn::~LinelocMixIn() {}
MeiAttribute* mei::LinelocMixIn::getLine() {
    if (!b->hasAttribute("line")) {
        return NULL;
    }
    return b->getAttribute("line");
};

void mei::LinelocMixIn::setLine(std::string _line) {
    MeiAttribute *a = new MeiAttribute("line", _line);
    b->addAttribute(a);
};

bool mei::LinelocMixIn::hasLine() {
    return b->hasAttribute("line");
};

void mei::LinelocMixIn::removeLine() {
    b->removeAttribute("line");
};

/* include <linemixin> */
mei::LinerendMixIn::LinerendMixIn(MeiElement *b) {
    this->b = b;
};

mei::LinerendMixIn::~LinerendMixIn() {}
MeiAttribute* mei::LinerendMixIn::getLendsym() {
    if (!b->hasAttribute("lendsym")) {
        return NULL;
    }
    return b->getAttribute("lendsym");
};

void mei::LinerendMixIn::setLendsym(std::string _lendsym) {
    MeiAttribute *a = new MeiAttribute("lendsym", _lendsym);
    b->addAttribute(a);
};

bool mei::LinerendMixIn::hasLendsym() {
    return b->hasAttribute("lendsym");
};

void mei::LinerendMixIn::removeLendsym() {
    b->removeAttribute("lendsym");
};
MeiAttribute* mei::LinerendMixIn::getLendsymsize() {
    if (!b->hasAttribute("lendsymsize")) {
        return NULL;
    }
    return b->getAttribute("lendsymsize");
};

void mei::LinerendMixIn::setLendsymsize(std::string _lendsymsize) {
    MeiAttribute *a = new MeiAttribute("lendsymsize", _lendsymsize);
    b->addAttribute(a);
};

bool mei::LinerendMixIn::hasLendsymsize() {
    return b->hasAttribute("lendsymsize");
};

void mei::LinerendMixIn::removeLendsymsize() {
    b->removeAttribute("lendsymsize");
};
MeiAttribute* mei::LinerendMixIn::getLstartsym() {
    if (!b->hasAttribute("lstartsym")) {
        return NULL;
    }
    return b->getAttribute("lstartsym");
};

void mei::LinerendMixIn::setLstartsym(std::string _lstartsym) {
    MeiAttribute *a = new MeiAttribute("lstartsym", _lstartsym);
    b->addAttribute(a);
};

bool mei::LinerendMixIn::hasLstartsym() {
    return b->hasAttribute("lstartsym");
};

void mei::LinerendMixIn::removeLstartsym() {
    b->removeAttribute("lstartsym");
};
MeiAttribute* mei::LinerendMixIn::getLstartsymsize() {
    if (!b->hasAttribute("lstartsymsize")) {
        return NULL;
    }
    return b->getAttribute("lstartsymsize");
};

void mei::LinerendMixIn::setLstartsymsize(std::string _lstartsymsize) {
    MeiAttribute *a = new MeiAttribute("lstartsymsize", _lstartsymsize);
    b->addAttribute(a);
};

bool mei::LinerendMixIn::hasLstartsymsize() {
    return b->hasAttribute("lstartsymsize");
};

void mei::LinerendMixIn::removeLstartsymsize() {
    b->removeAttribute("lstartsymsize");
};

/* include <lstartsymsizemixin> */
mei::LinerendBaseMixIn::LinerendBaseMixIn(MeiElement *b) {
    this->b = b;
};

mei::LinerendBaseMixIn::~LinerendBaseMixIn() {}
MeiAttribute* mei::LinerendBaseMixIn::getLform() {
    if (!b->hasAttribute("lform")) {
        return NULL;
    }
    return b->getAttribute("lform");
};

void mei::LinerendBaseMixIn::setLform(std::string _lform) {
    MeiAttribute *a = new MeiAttribute("lform", _lform);
    b->addAttribute(a);
};

bool mei::LinerendBaseMixIn::hasLform() {
    return b->hasAttribute("lform");
};

void mei::LinerendBaseMixIn::removeLform() {
    b->removeAttribute("lform");
};
MeiAttribute* mei::LinerendBaseMixIn::getLwidth() {
    if (!b->hasAttribute("lwidth")) {
        return NULL;
    }
    return b->getAttribute("lwidth");
};

void mei::LinerendBaseMixIn::setLwidth(std::string _lwidth) {
    MeiAttribute *a = new MeiAttribute("lwidth", _lwidth);
    b->addAttribute(a);
};

bool mei::LinerendBaseMixIn::hasLwidth() {
    return b->hasAttribute("lwidth");
};

void mei::LinerendBaseMixIn::removeLwidth() {
    b->removeAttribute("lwidth");
};

/* include <lwidthmixin> */
mei::LyricstyleMixIn::LyricstyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::LyricstyleMixIn::~LyricstyleMixIn() {}
MeiAttribute* mei::LyricstyleMixIn::getLyricAlign() {
    if (!b->hasAttribute("lyric.align")) {
        return NULL;
    }
    return b->getAttribute("lyric.align");
};

void mei::LyricstyleMixIn::setLyricAlign(std::string _lyricalign) {
    MeiAttribute *a = new MeiAttribute("lyric.align", _lyricalign);
    b->addAttribute(a);
};

bool mei::LyricstyleMixIn::hasLyricAlign() {
    return b->hasAttribute("lyric.align");
};

void mei::LyricstyleMixIn::removeLyricAlign() {
    b->removeAttribute("lyric.align");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricFam() {
    if (!b->hasAttribute("lyric.fam")) {
        return NULL;
    }
    return b->getAttribute("lyric.fam");
};

void mei::LyricstyleMixIn::setLyricFam(std::string _lyricfam) {
    MeiAttribute *a = new MeiAttribute("lyric.fam", _lyricfam);
    b->addAttribute(a);
};

bool mei::LyricstyleMixIn::hasLyricFam() {
    return b->hasAttribute("lyric.fam");
};

void mei::LyricstyleMixIn::removeLyricFam() {
    b->removeAttribute("lyric.fam");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricName() {
    if (!b->hasAttribute("lyric.name")) {
        return NULL;
    }
    return b->getAttribute("lyric.name");
};

void mei::LyricstyleMixIn::setLyricName(std::string _lyricname) {
    MeiAttribute *a = new MeiAttribute("lyric.name", _lyricname);
    b->addAttribute(a);
};

bool mei::LyricstyleMixIn::hasLyricName() {
    return b->hasAttribute("lyric.name");
};

void mei::LyricstyleMixIn::removeLyricName() {
    b->removeAttribute("lyric.name");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricSize() {
    if (!b->hasAttribute("lyric.size")) {
        return NULL;
    }
    return b->getAttribute("lyric.size");
};

void mei::LyricstyleMixIn::setLyricSize(std::string _lyricsize) {
    MeiAttribute *a = new MeiAttribute("lyric.size", _lyricsize);
    b->addAttribute(a);
};

bool mei::LyricstyleMixIn::hasLyricSize() {
    return b->hasAttribute("lyric.size");
};

void mei::LyricstyleMixIn::removeLyricSize() {
    b->removeAttribute("lyric.size");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricStyle() {
    if (!b->hasAttribute("lyric.style")) {
        return NULL;
    }
    return b->getAttribute("lyric.style");
};

void mei::LyricstyleMixIn::setLyricStyle(std::string _lyricstyle) {
    MeiAttribute *a = new MeiAttribute("lyric.style", _lyricstyle);
    b->addAttribute(a);
};

bool mei::LyricstyleMixIn::hasLyricStyle() {
    return b->hasAttribute("lyric.style");
};

void mei::LyricstyleMixIn::removeLyricStyle() {
    b->removeAttribute("lyric.style");
};
MeiAttribute* mei::LyricstyleMixIn::getLyricWeight() {
    if (!b->hasAttribute("lyric.weight")) {
        return NULL;
    }
    return b->getAttribute("lyric.weight");
};

void mei::LyricstyleMixIn::setLyricWeight(std::string _lyricweight) {
    MeiAttribute *a = new MeiAttribute("lyric.weight", _lyricweight);
    b->addAttribute(a);
};

bool mei::LyricstyleMixIn::hasLyricWeight() {
    return b->hasAttribute("lyric.weight");
};

void mei::LyricstyleMixIn::removeLyricWeight() {
    b->removeAttribute("lyric.weight");
};

/* include <lyric.weightmixin> */
mei::MeasureLogMixIn::MeasureLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasureLogMixIn::~MeasureLogMixIn() {}
MeiAttribute* mei::MeasureLogMixIn::getLeft() {
    if (!b->hasAttribute("left")) {
        return NULL;
    }
    return b->getAttribute("left");
};

void mei::MeasureLogMixIn::setLeft(std::string _left) {
    MeiAttribute *a = new MeiAttribute("left", _left);
    b->addAttribute(a);
};

bool mei::MeasureLogMixIn::hasLeft() {
    return b->hasAttribute("left");
};

void mei::MeasureLogMixIn::removeLeft() {
    b->removeAttribute("left");
};
MeiAttribute* mei::MeasureLogMixIn::getRight() {
    if (!b->hasAttribute("right")) {
        return NULL;
    }
    return b->getAttribute("right");
};

void mei::MeasureLogMixIn::setRight(std::string _right) {
    MeiAttribute *a = new MeiAttribute("right", _right);
    b->addAttribute(a);
};

bool mei::MeasureLogMixIn::hasRight() {
    return b->hasAttribute("right");
};

void mei::MeasureLogMixIn::removeRight() {
    b->removeAttribute("right");
};

/* include <rightmixin> */
mei::MeasurementMixIn::MeasurementMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasurementMixIn::~MeasurementMixIn() {}
MeiAttribute* mei::MeasurementMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        return NULL;
    }
    return b->getAttribute("unit");
};

void mei::MeasurementMixIn::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::MeasurementMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::MeasurementMixIn::removeUnit() {
    b->removeAttribute("unit");
};

/* include <unitmixin> */
mei::MeasurenumbersMixIn::MeasurenumbersMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeasurenumbersMixIn::~MeasurenumbersMixIn() {}
MeiAttribute* mei::MeasurenumbersMixIn::getMnumVisible() {
    if (!b->hasAttribute("mnum.visible")) {
        return NULL;
    }
    return b->getAttribute("mnum.visible");
};

void mei::MeasurenumbersMixIn::setMnumVisible(std::string _mnumvisible) {
    MeiAttribute *a = new MeiAttribute("mnum.visible", _mnumvisible);
    b->addAttribute(a);
};

bool mei::MeasurenumbersMixIn::hasMnumVisible() {
    return b->hasAttribute("mnum.visible");
};

void mei::MeasurenumbersMixIn::removeMnumVisible() {
    b->removeAttribute("mnum.visible");
};

/* include <mnum.visiblemixin> */
mei::MediaboundsMixIn::MediaboundsMixIn(MeiElement *b) {
    this->b = b;
};

mei::MediaboundsMixIn::~MediaboundsMixIn() {}
MeiAttribute* mei::MediaboundsMixIn::getBegin() {
    if (!b->hasAttribute("begin")) {
        return NULL;
    }
    return b->getAttribute("begin");
};

void mei::MediaboundsMixIn::setBegin(std::string _begin) {
    MeiAttribute *a = new MeiAttribute("begin", _begin);
    b->addAttribute(a);
};

bool mei::MediaboundsMixIn::hasBegin() {
    return b->hasAttribute("begin");
};

void mei::MediaboundsMixIn::removeBegin() {
    b->removeAttribute("begin");
};
MeiAttribute* mei::MediaboundsMixIn::getEnd() {
    if (!b->hasAttribute("end")) {
        return NULL;
    }
    return b->getAttribute("end");
};

void mei::MediaboundsMixIn::setEnd(std::string _end) {
    MeiAttribute *a = new MeiAttribute("end", _end);
    b->addAttribute(a);
};

bool mei::MediaboundsMixIn::hasEnd() {
    return b->hasAttribute("end");
};

void mei::MediaboundsMixIn::removeEnd() {
    b->removeAttribute("end");
};
MeiAttribute* mei::MediaboundsMixIn::getBetype() {
    if (!b->hasAttribute("betype")) {
        return NULL;
    }
    return b->getAttribute("betype");
};

void mei::MediaboundsMixIn::setBetype(std::string _betype) {
    MeiAttribute *a = new MeiAttribute("betype", _betype);
    b->addAttribute(a);
};

bool mei::MediaboundsMixIn::hasBetype() {
    return b->hasAttribute("betype");
};

void mei::MediaboundsMixIn::removeBetype() {
    b->removeAttribute("betype");
};

/* include <betypemixin> */
mei::MediumMixIn::MediumMixIn(MeiElement *b) {
    this->b = b;
};

mei::MediumMixIn::~MediumMixIn() {}
MeiAttribute* mei::MediumMixIn::getMedium() {
    if (!b->hasAttribute("medium")) {
        return NULL;
    }
    return b->getAttribute("medium");
};

void mei::MediumMixIn::setMedium(std::string _medium) {
    MeiAttribute *a = new MeiAttribute("medium", _medium);
    b->addAttribute(a);
};

bool mei::MediumMixIn::hasMedium() {
    return b->hasAttribute("medium");
};

void mei::MediumMixIn::removeMedium() {
    b->removeAttribute("medium");
};

/* include <mediummixin> */
mei::MeiversionMixIn::MeiversionMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeiversionMixIn::~MeiversionMixIn() {}
MeiAttribute* mei::MeiversionMixIn::getMeiversion() {
    if (!b->hasAttribute("meiversion")) {
        return NULL;
    }
    return b->getAttribute("meiversion");
};

void mei::MeiversionMixIn::setMeiversion(std::string _meiversion) {
    MeiAttribute *a = new MeiAttribute("meiversion", _meiversion);
    b->addAttribute(a);
};

bool mei::MeiversionMixIn::hasMeiversion() {
    return b->hasAttribute("meiversion");
};

void mei::MeiversionMixIn::removeMeiversion() {
    b->removeAttribute("meiversion");
};

/* include <meiversionmixin> */
mei::MensurLogMixIn::MensurLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensurLogMixIn::~MensurLogMixIn() {}
MeiAttribute* mei::MensurLogMixIn::getDot() {
    if (!b->hasAttribute("dot")) {
        return NULL;
    }
    return b->getAttribute("dot");
};

void mei::MensurLogMixIn::setDot(std::string _dot) {
    MeiAttribute *a = new MeiAttribute("dot", _dot);
    b->addAttribute(a);
};

bool mei::MensurLogMixIn::hasDot() {
    return b->hasAttribute("dot");
};

void mei::MensurLogMixIn::removeDot() {
    b->removeAttribute("dot");
};
MeiAttribute* mei::MensurLogMixIn::getSign() {
    if (!b->hasAttribute("sign")) {
        return NULL;
    }
    return b->getAttribute("sign");
};

void mei::MensurLogMixIn::setSign(std::string _sign) {
    MeiAttribute *a = new MeiAttribute("sign", _sign);
    b->addAttribute(a);
};

bool mei::MensurLogMixIn::hasSign() {
    return b->hasAttribute("sign");
};

void mei::MensurLogMixIn::removeSign() {
    b->removeAttribute("sign");
};

/* include <signmixin> */
mei::MeterSigLogMixIn::MeterSigLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigLogMixIn::~MeterSigLogMixIn() {}
MeiAttribute* mei::MeterSigLogMixIn::getCount() {
    if (!b->hasAttribute("count")) {
        return NULL;
    }
    return b->getAttribute("count");
};

void mei::MeterSigLogMixIn::setCount(std::string _count) {
    MeiAttribute *a = new MeiAttribute("count", _count);
    b->addAttribute(a);
};

bool mei::MeterSigLogMixIn::hasCount() {
    return b->hasAttribute("count");
};

void mei::MeterSigLogMixIn::removeCount() {
    b->removeAttribute("count");
};
MeiAttribute* mei::MeterSigLogMixIn::getSym() {
    if (!b->hasAttribute("sym")) {
        return NULL;
    }
    return b->getAttribute("sym");
};

void mei::MeterSigLogMixIn::setSym(std::string _sym) {
    MeiAttribute *a = new MeiAttribute("sym", _sym);
    b->addAttribute(a);
};

bool mei::MeterSigLogMixIn::hasSym() {
    return b->hasAttribute("sym");
};

void mei::MeterSigLogMixIn::removeSym() {
    b->removeAttribute("sym");
};
MeiAttribute* mei::MeterSigLogMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        return NULL;
    }
    return b->getAttribute("unit");
};

void mei::MeterSigLogMixIn::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::MeterSigLogMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::MeterSigLogMixIn::removeUnit() {
    b->removeAttribute("unit");
};

/* include <unitmixin> */
mei::MeterSigVisMixIn::MeterSigVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigVisMixIn::~MeterSigVisMixIn() {}
MeiAttribute* mei::MeterSigVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::MeterSigVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::MeterSigVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::MeterSigVisMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::MeterSigDefaultLogMixIn::MeterSigDefaultLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigDefaultLogMixIn::~MeterSigDefaultLogMixIn() {}
MeiAttribute* mei::MeterSigDefaultLogMixIn::getMeterCount() {
    if (!b->hasAttribute("meter.count")) {
        return NULL;
    }
    return b->getAttribute("meter.count");
};

void mei::MeterSigDefaultLogMixIn::setMeterCount(std::string _metercount) {
    MeiAttribute *a = new MeiAttribute("meter.count", _metercount);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultLogMixIn::hasMeterCount() {
    return b->hasAttribute("meter.count");
};

void mei::MeterSigDefaultLogMixIn::removeMeterCount() {
    b->removeAttribute("meter.count");
};
MeiAttribute* mei::MeterSigDefaultLogMixIn::getMeterUnit() {
    if (!b->hasAttribute("meter.unit")) {
        return NULL;
    }
    return b->getAttribute("meter.unit");
};

void mei::MeterSigDefaultLogMixIn::setMeterUnit(std::string _meterunit) {
    MeiAttribute *a = new MeiAttribute("meter.unit", _meterunit);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultLogMixIn::hasMeterUnit() {
    return b->hasAttribute("meter.unit");
};

void mei::MeterSigDefaultLogMixIn::removeMeterUnit() {
    b->removeAttribute("meter.unit");
};

/* include <meter.unitmixin> */
mei::MeterSigDefaultVisMixIn::MeterSigDefaultVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterSigDefaultVisMixIn::~MeterSigDefaultVisMixIn() {}
MeiAttribute* mei::MeterSigDefaultVisMixIn::getMeterRend() {
    if (!b->hasAttribute("meter.rend")) {
        return NULL;
    }
    return b->getAttribute("meter.rend");
};

void mei::MeterSigDefaultVisMixIn::setMeterRend(std::string _meterrend) {
    MeiAttribute *a = new MeiAttribute("meter.rend", _meterrend);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultVisMixIn::hasMeterRend() {
    return b->hasAttribute("meter.rend");
};

void mei::MeterSigDefaultVisMixIn::removeMeterRend() {
    b->removeAttribute("meter.rend");
};
MeiAttribute* mei::MeterSigDefaultVisMixIn::getMeterShowchange() {
    if (!b->hasAttribute("meter.showchange")) {
        return NULL;
    }
    return b->getAttribute("meter.showchange");
};

void mei::MeterSigDefaultVisMixIn::setMeterShowchange(std::string _metershowchange) {
    MeiAttribute *a = new MeiAttribute("meter.showchange", _metershowchange);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultVisMixIn::hasMeterShowchange() {
    return b->hasAttribute("meter.showchange");
};

void mei::MeterSigDefaultVisMixIn::removeMeterShowchange() {
    b->removeAttribute("meter.showchange");
};
MeiAttribute* mei::MeterSigDefaultVisMixIn::getMeterSym() {
    if (!b->hasAttribute("meter.sym")) {
        return NULL;
    }
    return b->getAttribute("meter.sym");
};

void mei::MeterSigDefaultVisMixIn::setMeterSym(std::string _metersym) {
    MeiAttribute *a = new MeiAttribute("meter.sym", _metersym);
    b->addAttribute(a);
};

bool mei::MeterSigDefaultVisMixIn::hasMeterSym() {
    return b->hasAttribute("meter.sym");
};

void mei::MeterSigDefaultVisMixIn::removeMeterSym() {
    b->removeAttribute("meter.sym");
};

/* include <meter.symmixin> */
mei::MeterconformanceMixIn::MeterconformanceMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterconformanceMixIn::~MeterconformanceMixIn() {}
MeiAttribute* mei::MeterconformanceMixIn::getMetcon() {
    if (!b->hasAttribute("metcon")) {
        return NULL;
    }
    return b->getAttribute("metcon");
};

void mei::MeterconformanceMixIn::setMetcon(std::string _metcon) {
    MeiAttribute *a = new MeiAttribute("metcon", _metcon);
    b->addAttribute(a);
};

bool mei::MeterconformanceMixIn::hasMetcon() {
    return b->hasAttribute("metcon");
};

void mei::MeterconformanceMixIn::removeMetcon() {
    b->removeAttribute("metcon");
};

/* include <metconmixin> */
mei::MeterconformanceBarMixIn::MeterconformanceBarMixIn(MeiElement *b) {
    this->b = b;
};

mei::MeterconformanceBarMixIn::~MeterconformanceBarMixIn() {}
MeiAttribute* mei::MeterconformanceBarMixIn::getMetcon() {
    if (!b->hasAttribute("metcon")) {
        return NULL;
    }
    return b->getAttribute("metcon");
};

void mei::MeterconformanceBarMixIn::setMetcon(std::string _metcon) {
    MeiAttribute *a = new MeiAttribute("metcon", _metcon);
    b->addAttribute(a);
};

bool mei::MeterconformanceBarMixIn::hasMetcon() {
    return b->hasAttribute("metcon");
};

void mei::MeterconformanceBarMixIn::removeMetcon() {
    b->removeAttribute("metcon");
};
MeiAttribute* mei::MeterconformanceBarMixIn::getControl() {
    if (!b->hasAttribute("control")) {
        return NULL;
    }
    return b->getAttribute("control");
};

void mei::MeterconformanceBarMixIn::setControl(std::string _control) {
    MeiAttribute *a = new MeiAttribute("control", _control);
    b->addAttribute(a);
};

bool mei::MeterconformanceBarMixIn::hasControl() {
    return b->hasAttribute("control");
};

void mei::MeterconformanceBarMixIn::removeControl() {
    b->removeAttribute("control");
};

/* include <controlmixin> */
mei::MmtempoMixIn::MmtempoMixIn(MeiElement *b) {
    this->b = b;
};

mei::MmtempoMixIn::~MmtempoMixIn() {}
MeiAttribute* mei::MmtempoMixIn::getMm() {
    if (!b->hasAttribute("mm")) {
        return NULL;
    }
    return b->getAttribute("mm");
};

void mei::MmtempoMixIn::setMm(std::string _mm) {
    MeiAttribute *a = new MeiAttribute("mm", _mm);
    b->addAttribute(a);
};

bool mei::MmtempoMixIn::hasMm() {
    return b->hasAttribute("mm");
};

void mei::MmtempoMixIn::removeMm() {
    b->removeAttribute("mm");
};
MeiAttribute* mei::MmtempoMixIn::getMmUnit() {
    if (!b->hasAttribute("mm.unit")) {
        return NULL;
    }
    return b->getAttribute("mm.unit");
};

void mei::MmtempoMixIn::setMmUnit(std::string _mmunit) {
    MeiAttribute *a = new MeiAttribute("mm.unit", _mmunit);
    b->addAttribute(a);
};

bool mei::MmtempoMixIn::hasMmUnit() {
    return b->hasAttribute("mm.unit");
};

void mei::MmtempoMixIn::removeMmUnit() {
    b->removeAttribute("mm.unit");
};
MeiAttribute* mei::MmtempoMixIn::getMmDots() {
    if (!b->hasAttribute("mm.dots")) {
        return NULL;
    }
    return b->getAttribute("mm.dots");
};

void mei::MmtempoMixIn::setMmDots(std::string _mmdots) {
    MeiAttribute *a = new MeiAttribute("mm.dots", _mmdots);
    b->addAttribute(a);
};

bool mei::MmtempoMixIn::hasMmDots() {
    return b->hasAttribute("mm.dots");
};

void mei::MmtempoMixIn::removeMmDots() {
    b->removeAttribute("mm.dots");
};

/* include <mm.dotsmixin> */
mei::MultinummeasuresMixIn::MultinummeasuresMixIn(MeiElement *b) {
    this->b = b;
};

mei::MultinummeasuresMixIn::~MultinummeasuresMixIn() {}
MeiAttribute* mei::MultinummeasuresMixIn::getMultiNumber() {
    if (!b->hasAttribute("multi.number")) {
        return NULL;
    }
    return b->getAttribute("multi.number");
};

void mei::MultinummeasuresMixIn::setMultiNumber(std::string _multinumber) {
    MeiAttribute *a = new MeiAttribute("multi.number", _multinumber);
    b->addAttribute(a);
};

bool mei::MultinummeasuresMixIn::hasMultiNumber() {
    return b->hasAttribute("multi.number");
};

void mei::MultinummeasuresMixIn::removeMultiNumber() {
    b->removeAttribute("multi.number");
};

/* include <multi.numbermixin> */
mei::NameMixIn::NameMixIn(MeiElement *b) {
    this->b = b;
};

mei::NameMixIn::~NameMixIn() {}
MeiAttribute* mei::NameMixIn::getNymref() {
    if (!b->hasAttribute("nymref")) {
        return NULL;
    }
    return b->getAttribute("nymref");
};

void mei::NameMixIn::setNymref(std::string _nymref) {
    MeiAttribute *a = new MeiAttribute("nymref", _nymref);
    b->addAttribute(a);
};

bool mei::NameMixIn::hasNymref() {
    return b->hasAttribute("nymref");
};

void mei::NameMixIn::removeNymref() {
    b->removeAttribute("nymref");
};
MeiAttribute* mei::NameMixIn::getRole() {
    if (!b->hasAttribute("role")) {
        return NULL;
    }
    return b->getAttribute("role");
};

void mei::NameMixIn::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    b->addAttribute(a);
};

bool mei::NameMixIn::hasRole() {
    return b->hasAttribute("role");
};

void mei::NameMixIn::removeRole() {
    b->removeAttribute("role");
};

/* include <rolemixin> */
mei::NotationstyleMixIn::NotationstyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::NotationstyleMixIn::~NotationstyleMixIn() {}
MeiAttribute* mei::NotationstyleMixIn::getMusicName() {
    if (!b->hasAttribute("music.name")) {
        return NULL;
    }
    return b->getAttribute("music.name");
};

void mei::NotationstyleMixIn::setMusicName(std::string _musicname) {
    MeiAttribute *a = new MeiAttribute("music.name", _musicname);
    b->addAttribute(a);
};

bool mei::NotationstyleMixIn::hasMusicName() {
    return b->hasAttribute("music.name");
};

void mei::NotationstyleMixIn::removeMusicName() {
    b->removeAttribute("music.name");
};
MeiAttribute* mei::NotationstyleMixIn::getMusicSize() {
    if (!b->hasAttribute("music.size")) {
        return NULL;
    }
    return b->getAttribute("music.size");
};

void mei::NotationstyleMixIn::setMusicSize(std::string _musicsize) {
    MeiAttribute *a = new MeiAttribute("music.size", _musicsize);
    b->addAttribute(a);
};

bool mei::NotationstyleMixIn::hasMusicSize() {
    return b->hasAttribute("music.size");
};

void mei::NotationstyleMixIn::removeMusicSize() {
    b->removeAttribute("music.size");
};

/* include <music.sizemixin> */
mei::NoteGesMixIn::NoteGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteGesMixIn::~NoteGesMixIn() {}
MeiAttribute* mei::NoteGesMixIn::getOctGes() {
    if (!b->hasAttribute("oct.ges")) {
        return NULL;
    }
    return b->getAttribute("oct.ges");
};

void mei::NoteGesMixIn::setOctGes(std::string _octges) {
    MeiAttribute *a = new MeiAttribute("oct.ges", _octges);
    b->addAttribute(a);
};

bool mei::NoteGesMixIn::hasOctGes() {
    return b->hasAttribute("oct.ges");
};

void mei::NoteGesMixIn::removeOctGes() {
    b->removeAttribute("oct.ges");
};
MeiAttribute* mei::NoteGesMixIn::getPnameGes() {
    if (!b->hasAttribute("pname.ges")) {
        return NULL;
    }
    return b->getAttribute("pname.ges");
};

void mei::NoteGesMixIn::setPnameGes(std::string _pnameges) {
    MeiAttribute *a = new MeiAttribute("pname.ges", _pnameges);
    b->addAttribute(a);
};

bool mei::NoteGesMixIn::hasPnameGes() {
    return b->hasAttribute("pname.ges");
};

void mei::NoteGesMixIn::removePnameGes() {
    b->removeAttribute("pname.ges");
};
MeiAttribute* mei::NoteGesMixIn::getPnum() {
    if (!b->hasAttribute("pnum")) {
        return NULL;
    }
    return b->getAttribute("pnum");
};

void mei::NoteGesMixIn::setPnum(std::string _pnum) {
    MeiAttribute *a = new MeiAttribute("pnum", _pnum);
    b->addAttribute(a);
};

bool mei::NoteGesMixIn::hasPnum() {
    return b->hasAttribute("pnum");
};

void mei::NoteGesMixIn::removePnum() {
    b->removeAttribute("pnum");
};

/* include <pnummixin> */
mei::NoteheadsMixIn::NoteheadsMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteheadsMixIn::~NoteheadsMixIn() {}
MeiAttribute* mei::NoteheadsMixIn::getHeadColor() {
    if (!b->hasAttribute("head.color")) {
        return NULL;
    }
    return b->getAttribute("head.color");
};

void mei::NoteheadsMixIn::setHeadColor(std::string _headcolor) {
    MeiAttribute *a = new MeiAttribute("head.color", _headcolor);
    b->addAttribute(a);
};

bool mei::NoteheadsMixIn::hasHeadColor() {
    return b->hasAttribute("head.color");
};

void mei::NoteheadsMixIn::removeHeadColor() {
    b->removeAttribute("head.color");
};
MeiAttribute* mei::NoteheadsMixIn::getHeadFill() {
    if (!b->hasAttribute("head.fill")) {
        return NULL;
    }
    return b->getAttribute("head.fill");
};

void mei::NoteheadsMixIn::setHeadFill(std::string _headfill) {
    MeiAttribute *a = new MeiAttribute("head.fill", _headfill);
    b->addAttribute(a);
};

bool mei::NoteheadsMixIn::hasHeadFill() {
    return b->hasAttribute("head.fill");
};

void mei::NoteheadsMixIn::removeHeadFill() {
    b->removeAttribute("head.fill");
};
MeiAttribute* mei::NoteheadsMixIn::getHeadFillcolor() {
    if (!b->hasAttribute("head.fillcolor")) {
        return NULL;
    }
    return b->getAttribute("head.fillcolor");
};

void mei::NoteheadsMixIn::setHeadFillcolor(std::string _headfillcolor) {
    MeiAttribute *a = new MeiAttribute("head.fillcolor", _headfillcolor);
    b->addAttribute(a);
};

bool mei::NoteheadsMixIn::hasHeadFillcolor() {
    return b->hasAttribute("head.fillcolor");
};

void mei::NoteheadsMixIn::removeHeadFillcolor() {
    b->removeAttribute("head.fillcolor");
};
MeiAttribute* mei::NoteheadsMixIn::getHeadMod() {
    if (!b->hasAttribute("head.mod")) {
        return NULL;
    }
    return b->getAttribute("head.mod");
};

void mei::NoteheadsMixIn::setHeadMod(std::string _headmod) {
    MeiAttribute *a = new MeiAttribute("head.mod", _headmod);
    b->addAttribute(a);
};

bool mei::NoteheadsMixIn::hasHeadMod() {
    return b->hasAttribute("head.mod");
};

void mei::NoteheadsMixIn::removeHeadMod() {
    b->removeAttribute("head.mod");
};
MeiAttribute* mei::NoteheadsMixIn::getHeadRotation() {
    if (!b->hasAttribute("head.rotation")) {
        return NULL;
    }
    return b->getAttribute("head.rotation");
};

void mei::NoteheadsMixIn::setHeadRotation(std::string _headrotation) {
    MeiAttribute *a = new MeiAttribute("head.rotation", _headrotation);
    b->addAttribute(a);
};

bool mei::NoteheadsMixIn::hasHeadRotation() {
    return b->hasAttribute("head.rotation");
};

void mei::NoteheadsMixIn::removeHeadRotation() {
    b->removeAttribute("head.rotation");
};
MeiAttribute* mei::NoteheadsMixIn::getHeadShape() {
    if (!b->hasAttribute("head.shape")) {
        return NULL;
    }
    return b->getAttribute("head.shape");
};

void mei::NoteheadsMixIn::setHeadShape(std::string _headshape) {
    MeiAttribute *a = new MeiAttribute("head.shape", _headshape);
    b->addAttribute(a);
};

bool mei::NoteheadsMixIn::hasHeadShape() {
    return b->hasAttribute("head.shape");
};

void mei::NoteheadsMixIn::removeHeadShape() {
    b->removeAttribute("head.shape");
};
MeiAttribute* mei::NoteheadsMixIn::getHeadVisible() {
    if (!b->hasAttribute("head.visible")) {
        return NULL;
    }
    return b->getAttribute("head.visible");
};

void mei::NoteheadsMixIn::setHeadVisible(std::string _headvisible) {
    MeiAttribute *a = new MeiAttribute("head.visible", _headvisible);
    b->addAttribute(a);
};

bool mei::NoteheadsMixIn::hasHeadVisible() {
    return b->hasAttribute("head.visible");
};

void mei::NoteheadsMixIn::removeHeadVisible() {
    b->removeAttribute("head.visible");
};

/* include <head.visiblemixin> */
mei::OctaveMixIn::OctaveMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctaveMixIn::~OctaveMixIn() {}
MeiAttribute* mei::OctaveMixIn::getOct() {
    if (!b->hasAttribute("oct")) {
        return NULL;
    }
    return b->getAttribute("oct");
};

void mei::OctaveMixIn::setOct(std::string _oct) {
    MeiAttribute *a = new MeiAttribute("oct", _oct);
    b->addAttribute(a);
};

bool mei::OctaveMixIn::hasOct() {
    return b->hasAttribute("oct");
};

void mei::OctaveMixIn::removeOct() {
    b->removeAttribute("oct");
};

/* include <octmixin> */
mei::OctavedefaultMixIn::OctavedefaultMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctavedefaultMixIn::~OctavedefaultMixIn() {}
MeiAttribute* mei::OctavedefaultMixIn::getOctaveDefault() {
    if (!b->hasAttribute("octave.default")) {
        return NULL;
    }
    return b->getAttribute("octave.default");
};

void mei::OctavedefaultMixIn::setOctaveDefault(std::string _octavedefault) {
    MeiAttribute *a = new MeiAttribute("octave.default", _octavedefault);
    b->addAttribute(a);
};

bool mei::OctavedefaultMixIn::hasOctaveDefault() {
    return b->hasAttribute("octave.default");
};

void mei::OctavedefaultMixIn::removeOctaveDefault() {
    b->removeAttribute("octave.default");
};

/* include <octave.defaultmixin> */
mei::OctavedisplacementMixIn::OctavedisplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::OctavedisplacementMixIn::~OctavedisplacementMixIn() {}
MeiAttribute* mei::OctavedisplacementMixIn::getDis() {
    if (!b->hasAttribute("dis")) {
        return NULL;
    }
    return b->getAttribute("dis");
};

void mei::OctavedisplacementMixIn::setDis(std::string _dis) {
    MeiAttribute *a = new MeiAttribute("dis", _dis);
    b->addAttribute(a);
};

bool mei::OctavedisplacementMixIn::hasDis() {
    return b->hasAttribute("dis");
};

void mei::OctavedisplacementMixIn::removeDis() {
    b->removeAttribute("dis");
};
MeiAttribute* mei::OctavedisplacementMixIn::getDisPlace() {
    if (!b->hasAttribute("dis.place")) {
        return NULL;
    }
    return b->getAttribute("dis.place");
};

void mei::OctavedisplacementMixIn::setDisPlace(std::string _displace) {
    MeiAttribute *a = new MeiAttribute("dis.place", _displace);
    b->addAttribute(a);
};

bool mei::OctavedisplacementMixIn::hasDisPlace() {
    return b->hasAttribute("dis.place");
};

void mei::OctavedisplacementMixIn::removeDisPlace() {
    b->removeAttribute("dis.place");
};

/* include <dis.placemixin> */
mei::OnelinestaffMixIn::OnelinestaffMixIn(MeiElement *b) {
    this->b = b;
};

mei::OnelinestaffMixIn::~OnelinestaffMixIn() {}
MeiAttribute* mei::OnelinestaffMixIn::getOntheline() {
    if (!b->hasAttribute("ontheline")) {
        return NULL;
    }
    return b->getAttribute("ontheline");
};

void mei::OnelinestaffMixIn::setOntheline(std::string _ontheline) {
    MeiAttribute *a = new MeiAttribute("ontheline", _ontheline);
    b->addAttribute(a);
};

bool mei::OnelinestaffMixIn::hasOntheline() {
    return b->hasAttribute("ontheline");
};

void mei::OnelinestaffMixIn::removeOntheline() {
    b->removeAttribute("ontheline");
};

/* include <onthelinemixin> */
mei::OptimizationMixIn::OptimizationMixIn(MeiElement *b) {
    this->b = b;
};

mei::OptimizationMixIn::~OptimizationMixIn() {}
MeiAttribute* mei::OptimizationMixIn::getOptimize() {
    if (!b->hasAttribute("optimize")) {
        return NULL;
    }
    return b->getAttribute("optimize");
};

void mei::OptimizationMixIn::setOptimize(std::string _optimize) {
    MeiAttribute *a = new MeiAttribute("optimize", _optimize);
    b->addAttribute(a);
};

bool mei::OptimizationMixIn::hasOptimize() {
    return b->hasAttribute("optimize");
};

void mei::OptimizationMixIn::removeOptimize() {
    b->removeAttribute("optimize");
};

/* include <optimizemixin> */
mei::OriginLayeridentMixIn::OriginLayeridentMixIn(MeiElement *b) {
    this->b = b;
};

mei::OriginLayeridentMixIn::~OriginLayeridentMixIn() {}
MeiAttribute* mei::OriginLayeridentMixIn::getOriginLayer() {
    if (!b->hasAttribute("origin.layer")) {
        return NULL;
    }
    return b->getAttribute("origin.layer");
};

void mei::OriginLayeridentMixIn::setOriginLayer(std::string _originlayer) {
    MeiAttribute *a = new MeiAttribute("origin.layer", _originlayer);
    b->addAttribute(a);
};

bool mei::OriginLayeridentMixIn::hasOriginLayer() {
    return b->hasAttribute("origin.layer");
};

void mei::OriginLayeridentMixIn::removeOriginLayer() {
    b->removeAttribute("origin.layer");
};

/* include <origin.layermixin> */
mei::OriginStaffidentMixIn::OriginStaffidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::OriginStaffidentMixIn::~OriginStaffidentMixIn() {}
MeiAttribute* mei::OriginStaffidentMixIn::getOriginStaff() {
    if (!b->hasAttribute("origin.staff")) {
        return NULL;
    }
    return b->getAttribute("origin.staff");
};

void mei::OriginStaffidentMixIn::setOriginStaff(std::string _originstaff) {
    MeiAttribute *a = new MeiAttribute("origin.staff", _originstaff);
    b->addAttribute(a);
};

bool mei::OriginStaffidentMixIn::hasOriginStaff() {
    return b->hasAttribute("origin.staff");
};

void mei::OriginStaffidentMixIn::removeOriginStaff() {
    b->removeAttribute("origin.staff");
};

/* include <origin.staffmixin> */
mei::OriginStartendidMixIn::OriginStartendidMixIn(MeiElement *b) {
    this->b = b;
};

mei::OriginStartendidMixIn::~OriginStartendidMixIn() {}
MeiAttribute* mei::OriginStartendidMixIn::getOriginStartid() {
    if (!b->hasAttribute("origin.startid")) {
        return NULL;
    }
    return b->getAttribute("origin.startid");
};

void mei::OriginStartendidMixIn::setOriginStartid(std::string _originstartid) {
    MeiAttribute *a = new MeiAttribute("origin.startid", _originstartid);
    b->addAttribute(a);
};

bool mei::OriginStartendidMixIn::hasOriginStartid() {
    return b->hasAttribute("origin.startid");
};

void mei::OriginStartendidMixIn::removeOriginStartid() {
    b->removeAttribute("origin.startid");
};
MeiAttribute* mei::OriginStartendidMixIn::getOriginEndid() {
    if (!b->hasAttribute("origin.endid")) {
        return NULL;
    }
    return b->getAttribute("origin.endid");
};

void mei::OriginStartendidMixIn::setOriginEndid(std::string _originendid) {
    MeiAttribute *a = new MeiAttribute("origin.endid", _originendid);
    b->addAttribute(a);
};

bool mei::OriginStartendidMixIn::hasOriginEndid() {
    return b->hasAttribute("origin.endid");
};

void mei::OriginStartendidMixIn::removeOriginEndid() {
    b->removeAttribute("origin.endid");
};

/* include <origin.endidmixin> */
mei::OriginTimestampMusicalMixIn::OriginTimestampMusicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::OriginTimestampMusicalMixIn::~OriginTimestampMusicalMixIn() {}
MeiAttribute* mei::OriginTimestampMusicalMixIn::getOriginTstamp() {
    if (!b->hasAttribute("origin.tstamp")) {
        return NULL;
    }
    return b->getAttribute("origin.tstamp");
};

void mei::OriginTimestampMusicalMixIn::setOriginTstamp(std::string _origintstamp) {
    MeiAttribute *a = new MeiAttribute("origin.tstamp", _origintstamp);
    b->addAttribute(a);
};

bool mei::OriginTimestampMusicalMixIn::hasOriginTstamp() {
    return b->hasAttribute("origin.tstamp");
};

void mei::OriginTimestampMusicalMixIn::removeOriginTstamp() {
    b->removeAttribute("origin.tstamp");
};
MeiAttribute* mei::OriginTimestampMusicalMixIn::getOriginTstamp2() {
    if (!b->hasAttribute("origin.tstamp2")) {
        return NULL;
    }
    return b->getAttribute("origin.tstamp2");
};

void mei::OriginTimestampMusicalMixIn::setOriginTstamp2(std::string _origintstamp2) {
    MeiAttribute *a = new MeiAttribute("origin.tstamp2", _origintstamp2);
    b->addAttribute(a);
};

bool mei::OriginTimestampMusicalMixIn::hasOriginTstamp2() {
    return b->hasAttribute("origin.tstamp2");
};

void mei::OriginTimestampMusicalMixIn::removeOriginTstamp2() {
    b->removeAttribute("origin.tstamp2");
};

/* include <origin.tstamp2mixin> */
mei::PadLogMixIn::PadLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::PadLogMixIn::~PadLogMixIn() {}
MeiAttribute* mei::PadLogMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        return NULL;
    }
    return b->getAttribute("num");
};

void mei::PadLogMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::PadLogMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::PadLogMixIn::removeNum() {
    b->removeAttribute("num");
};

/* include <nummixin> */
mei::PagesMixIn::PagesMixIn(MeiElement *b) {
    this->b = b;
};

mei::PagesMixIn::~PagesMixIn() {}
MeiAttribute* mei::PagesMixIn::getPageHeight() {
    if (!b->hasAttribute("page.height")) {
        return NULL;
    }
    return b->getAttribute("page.height");
};

void mei::PagesMixIn::setPageHeight(std::string _pageheight) {
    MeiAttribute *a = new MeiAttribute("page.height", _pageheight);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageHeight() {
    return b->hasAttribute("page.height");
};

void mei::PagesMixIn::removePageHeight() {
    b->removeAttribute("page.height");
};
MeiAttribute* mei::PagesMixIn::getPageWidth() {
    if (!b->hasAttribute("page.width")) {
        return NULL;
    }
    return b->getAttribute("page.width");
};

void mei::PagesMixIn::setPageWidth(std::string _pagewidth) {
    MeiAttribute *a = new MeiAttribute("page.width", _pagewidth);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageWidth() {
    return b->hasAttribute("page.width");
};

void mei::PagesMixIn::removePageWidth() {
    b->removeAttribute("page.width");
};
MeiAttribute* mei::PagesMixIn::getPageTopmar() {
    if (!b->hasAttribute("page.topmar")) {
        return NULL;
    }
    return b->getAttribute("page.topmar");
};

void mei::PagesMixIn::setPageTopmar(std::string _pagetopmar) {
    MeiAttribute *a = new MeiAttribute("page.topmar", _pagetopmar);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageTopmar() {
    return b->hasAttribute("page.topmar");
};

void mei::PagesMixIn::removePageTopmar() {
    b->removeAttribute("page.topmar");
};
MeiAttribute* mei::PagesMixIn::getPageBotmar() {
    if (!b->hasAttribute("page.botmar")) {
        return NULL;
    }
    return b->getAttribute("page.botmar");
};

void mei::PagesMixIn::setPageBotmar(std::string _pagebotmar) {
    MeiAttribute *a = new MeiAttribute("page.botmar", _pagebotmar);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageBotmar() {
    return b->hasAttribute("page.botmar");
};

void mei::PagesMixIn::removePageBotmar() {
    b->removeAttribute("page.botmar");
};
MeiAttribute* mei::PagesMixIn::getPageLeftmar() {
    if (!b->hasAttribute("page.leftmar")) {
        return NULL;
    }
    return b->getAttribute("page.leftmar");
};

void mei::PagesMixIn::setPageLeftmar(std::string _pageleftmar) {
    MeiAttribute *a = new MeiAttribute("page.leftmar", _pageleftmar);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageLeftmar() {
    return b->hasAttribute("page.leftmar");
};

void mei::PagesMixIn::removePageLeftmar() {
    b->removeAttribute("page.leftmar");
};
MeiAttribute* mei::PagesMixIn::getPageRightmar() {
    if (!b->hasAttribute("page.rightmar")) {
        return NULL;
    }
    return b->getAttribute("page.rightmar");
};

void mei::PagesMixIn::setPageRightmar(std::string _pagerightmar) {
    MeiAttribute *a = new MeiAttribute("page.rightmar", _pagerightmar);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageRightmar() {
    return b->hasAttribute("page.rightmar");
};

void mei::PagesMixIn::removePageRightmar() {
    b->removeAttribute("page.rightmar");
};
MeiAttribute* mei::PagesMixIn::getPagePanels() {
    if (!b->hasAttribute("page.panels")) {
        return NULL;
    }
    return b->getAttribute("page.panels");
};

void mei::PagesMixIn::setPagePanels(std::string _pagepanels) {
    MeiAttribute *a = new MeiAttribute("page.panels", _pagepanels);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPagePanels() {
    return b->hasAttribute("page.panels");
};

void mei::PagesMixIn::removePagePanels() {
    b->removeAttribute("page.panels");
};
MeiAttribute* mei::PagesMixIn::getPageScale() {
    if (!b->hasAttribute("page.scale")) {
        return NULL;
    }
    return b->getAttribute("page.scale");
};

void mei::PagesMixIn::setPageScale(std::string _pagescale) {
    MeiAttribute *a = new MeiAttribute("page.scale", _pagescale);
    b->addAttribute(a);
};

bool mei::PagesMixIn::hasPageScale() {
    return b->hasAttribute("page.scale");
};

void mei::PagesMixIn::removePageScale() {
    b->removeAttribute("page.scale");
};

/* include <page.scalemixin> */
mei::PbVisMixIn::PbVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::PbVisMixIn::~PbVisMixIn() {}
MeiAttribute* mei::PbVisMixIn::getFolium() {
    if (!b->hasAttribute("folium")) {
        return NULL;
    }
    return b->getAttribute("folium");
};

void mei::PbVisMixIn::setFolium(std::string _folium) {
    MeiAttribute *a = new MeiAttribute("folium", _folium);
    b->addAttribute(a);
};

bool mei::PbVisMixIn::hasFolium() {
    return b->hasAttribute("folium");
};

void mei::PbVisMixIn::removeFolium() {
    b->removeAttribute("folium");
};

/* include <foliummixin> */
mei::PitchMixIn::PitchMixIn(MeiElement *b) {
    this->b = b;
};

mei::PitchMixIn::~PitchMixIn() {}
MeiAttribute* mei::PitchMixIn::getPname() {
    if (!b->hasAttribute("pname")) {
        return NULL;
    }
    return b->getAttribute("pname");
};

void mei::PitchMixIn::setPname(std::string _pname) {
    MeiAttribute *a = new MeiAttribute("pname", _pname);
    b->addAttribute(a);
};

bool mei::PitchMixIn::hasPname() {
    return b->hasAttribute("pname");
};

void mei::PitchMixIn::removePname() {
    b->removeAttribute("pname");
};

/* include <pnamemixin> */
mei::PlacementMixIn::PlacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::PlacementMixIn::~PlacementMixIn() {}
MeiAttribute* mei::PlacementMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        return NULL;
    }
    return b->getAttribute("place");
};

void mei::PlacementMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::PlacementMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::PlacementMixIn::removePlace() {
    b->removeAttribute("place");
};

/* include <placemixin> */
mei::PlistMixIn::PlistMixIn(MeiElement *b) {
    this->b = b;
};

mei::PlistMixIn::~PlistMixIn() {}
MeiAttribute* mei::PlistMixIn::getPlist() {
    if (!b->hasAttribute("plist")) {
        return NULL;
    }
    return b->getAttribute("plist");
};

void mei::PlistMixIn::setPlist(std::string _plist) {
    MeiAttribute *a = new MeiAttribute("plist", _plist);
    b->addAttribute(a);
};

bool mei::PlistMixIn::hasPlist() {
    return b->hasAttribute("plist");
};

void mei::PlistMixIn::removePlist() {
    b->removeAttribute("plist");
};

/* include <plistmixin> */
mei::PointingMixIn::PointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::PointingMixIn::~PointingMixIn() {}
MeiAttribute* mei::PointingMixIn::getActuate() {
    if (!b->hasAttribute("xlink:actuate")) {
        return NULL;
    }
    return b->getAttribute("xlink:actuate");
};

void mei::PointingMixIn::setActuate(std::string _actuate) {
    MeiAttribute *a = new MeiAttribute("xlink:actuate", _actuate);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasActuate() {
    return b->hasAttribute("xlink:actuate");
};

void mei::PointingMixIn::removeActuate() {
    b->removeAttribute("xlink:actuate");
};
MeiAttribute* mei::PointingMixIn::getRole() {
    if (!b->hasAttribute("xlink:role")) {
        return NULL;
    }
    return b->getAttribute("xlink:role");
};

void mei::PointingMixIn::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("xlink:role", _role);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasRole() {
    return b->hasAttribute("xlink:role");
};

void mei::PointingMixIn::removeRole() {
    b->removeAttribute("xlink:role");
};
MeiAttribute* mei::PointingMixIn::getShow() {
    if (!b->hasAttribute("xlink:show")) {
        return NULL;
    }
    return b->getAttribute("xlink:show");
};

void mei::PointingMixIn::setShow(std::string _show) {
    MeiAttribute *a = new MeiAttribute("xlink:show", _show);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasShow() {
    return b->hasAttribute("xlink:show");
};

void mei::PointingMixIn::removeShow() {
    b->removeAttribute("xlink:show");
};
MeiAttribute* mei::PointingMixIn::getTarget() {
    if (!b->hasAttribute("xlink:target")) {
        return NULL;
    }
    return b->getAttribute("xlink:target");
};

void mei::PointingMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("xlink:target", _target);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasTarget() {
    return b->hasAttribute("xlink:target");
};

void mei::PointingMixIn::removeTarget() {
    b->removeAttribute("xlink:target");
};
MeiAttribute* mei::PointingMixIn::getTargettype() {
    if (!b->hasAttribute("xlink:targettype")) {
        return NULL;
    }
    return b->getAttribute("xlink:targettype");
};

void mei::PointingMixIn::setTargettype(std::string _targettype) {
    MeiAttribute *a = new MeiAttribute("xlink:targettype", _targettype);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasTargettype() {
    return b->hasAttribute("xlink:targettype");
};

void mei::PointingMixIn::removeTargettype() {
    b->removeAttribute("xlink:targettype");
};

/* include <targettypemixin> */
mei::QuantityMixIn::QuantityMixIn(MeiElement *b) {
    this->b = b;
};

mei::QuantityMixIn::~QuantityMixIn() {}
MeiAttribute* mei::QuantityMixIn::getQuantity() {
    if (!b->hasAttribute("quantity")) {
        return NULL;
    }
    return b->getAttribute("quantity");
};

void mei::QuantityMixIn::setQuantity(std::string _quantity) {
    MeiAttribute *a = new MeiAttribute("quantity", _quantity);
    b->addAttribute(a);
};

bool mei::QuantityMixIn::hasQuantity() {
    return b->hasAttribute("quantity");
};

void mei::QuantityMixIn::removeQuantity() {
    b->removeAttribute("quantity");
};

/* include <quantitymixin> */
mei::RelativesizeMixIn::RelativesizeMixIn(MeiElement *b) {
    this->b = b;
};

mei::RelativesizeMixIn::~RelativesizeMixIn() {}
MeiAttribute* mei::RelativesizeMixIn::getSize() {
    if (!b->hasAttribute("size")) {
        return NULL;
    }
    return b->getAttribute("size");
};

void mei::RelativesizeMixIn::setSize(std::string _size) {
    MeiAttribute *a = new MeiAttribute("size", _size);
    b->addAttribute(a);
};

bool mei::RelativesizeMixIn::hasSize() {
    return b->hasAttribute("size");
};

void mei::RelativesizeMixIn::removeSize() {
    b->removeAttribute("size");
};

/* include <sizemixin> */
mei::ResponsibilityMixIn::ResponsibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::ResponsibilityMixIn::~ResponsibilityMixIn() {}
MeiAttribute* mei::ResponsibilityMixIn::getResp() {
    if (!b->hasAttribute("resp")) {
        return NULL;
    }
    return b->getAttribute("resp");
};

void mei::ResponsibilityMixIn::setResp(std::string _resp) {
    MeiAttribute *a = new MeiAttribute("resp", _resp);
    b->addAttribute(a);
};

bool mei::ResponsibilityMixIn::hasResp() {
    return b->hasAttribute("resp");
};

void mei::ResponsibilityMixIn::removeResp() {
    b->removeAttribute("resp");
};

/* include <respmixin> */
mei::SbVisMixIn::SbVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SbVisMixIn::~SbVisMixIn() {}
MeiAttribute* mei::SbVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::SbVisMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::SbVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::SbVisMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::ScalableMixIn::ScalableMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScalableMixIn::~ScalableMixIn() {}
MeiAttribute* mei::ScalableMixIn::getScale() {
    if (!b->hasAttribute("scale")) {
        return NULL;
    }
    return b->getAttribute("scale");
};

void mei::ScalableMixIn::setScale(std::string _scale) {
    MeiAttribute *a = new MeiAttribute("scale", _scale);
    b->addAttribute(a);
};

bool mei::ScalableMixIn::hasScale() {
    return b->hasAttribute("scale");
};

void mei::ScalableMixIn::removeScale() {
    b->removeAttribute("scale");
};

/* include <scalemixin> */
mei::ScoreDefGesMixIn::ScoreDefGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoreDefGesMixIn::~ScoreDefGesMixIn() {}
MeiAttribute* mei::ScoreDefGesMixIn::getTunePname() {
    if (!b->hasAttribute("tune.pname")) {
        return NULL;
    }
    return b->getAttribute("tune.pname");
};

void mei::ScoreDefGesMixIn::setTunePname(std::string _tunepname) {
    MeiAttribute *a = new MeiAttribute("tune.pname", _tunepname);
    b->addAttribute(a);
};

bool mei::ScoreDefGesMixIn::hasTunePname() {
    return b->hasAttribute("tune.pname");
};

void mei::ScoreDefGesMixIn::removeTunePname() {
    b->removeAttribute("tune.pname");
};
MeiAttribute* mei::ScoreDefGesMixIn::getTuneHz() {
    if (!b->hasAttribute("tune.Hz")) {
        return NULL;
    }
    return b->getAttribute("tune.Hz");
};

void mei::ScoreDefGesMixIn::setTuneHz(std::string _tuneHz) {
    MeiAttribute *a = new MeiAttribute("tune.Hz", _tuneHz);
    b->addAttribute(a);
};

bool mei::ScoreDefGesMixIn::hasTuneHz() {
    return b->hasAttribute("tune.Hz");
};

void mei::ScoreDefGesMixIn::removeTuneHz() {
    b->removeAttribute("tune.Hz");
};
MeiAttribute* mei::ScoreDefGesMixIn::getTuneTemper() {
    if (!b->hasAttribute("tune.temper")) {
        return NULL;
    }
    return b->getAttribute("tune.temper");
};

void mei::ScoreDefGesMixIn::setTuneTemper(std::string _tunetemper) {
    MeiAttribute *a = new MeiAttribute("tune.temper", _tunetemper);
    b->addAttribute(a);
};

bool mei::ScoreDefGesMixIn::hasTuneTemper() {
    return b->hasAttribute("tune.temper");
};

void mei::ScoreDefGesMixIn::removeTuneTemper() {
    b->removeAttribute("tune.temper");
};

/* include <tune.tempermixin> */
mei::ScoreDefVisMixIn::ScoreDefVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScoreDefVisMixIn::~ScoreDefVisMixIn() {}
MeiAttribute* mei::ScoreDefVisMixIn::getVuHeight() {
    if (!b->hasAttribute("vu.height")) {
        return NULL;
    }
    return b->getAttribute("vu.height");
};

void mei::ScoreDefVisMixIn::setVuHeight(std::string _vuheight) {
    MeiAttribute *a = new MeiAttribute("vu.height", _vuheight);
    b->addAttribute(a);
};

bool mei::ScoreDefVisMixIn::hasVuHeight() {
    return b->hasAttribute("vu.height");
};

void mei::ScoreDefVisMixIn::removeVuHeight() {
    b->removeAttribute("vu.height");
};

/* include <vu.heightmixin> */
mei::SectionVisMixIn::SectionVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SectionVisMixIn::~SectionVisMixIn() {}
MeiAttribute* mei::SectionVisMixIn::getRestart() {
    if (!b->hasAttribute("restart")) {
        return NULL;
    }
    return b->getAttribute("restart");
};

void mei::SectionVisMixIn::setRestart(std::string _restart) {
    MeiAttribute *a = new MeiAttribute("restart", _restart);
    b->addAttribute(a);
};

bool mei::SectionVisMixIn::hasRestart() {
    return b->hasAttribute("restart");
};

void mei::SectionVisMixIn::removeRestart() {
    b->removeAttribute("restart");
};

/* include <restartmixin> */
mei::SequenceMixIn::SequenceMixIn(MeiElement *b) {
    this->b = b;
};

mei::SequenceMixIn::~SequenceMixIn() {}
MeiAttribute* mei::SequenceMixIn::getSeq() {
    if (!b->hasAttribute("seq")) {
        return NULL;
    }
    return b->getAttribute("seq");
};

void mei::SequenceMixIn::setSeq(std::string _seq) {
    MeiAttribute *a = new MeiAttribute("seq", _seq);
    b->addAttribute(a);
};

bool mei::SequenceMixIn::hasSeq() {
    return b->hasAttribute("seq");
};

void mei::SequenceMixIn::removeSeq() {
    b->removeAttribute("seq");
};

/* include <seqmixin> */
mei::SlashcountMixIn::SlashcountMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlashcountMixIn::~SlashcountMixIn() {}
MeiAttribute* mei::SlashcountMixIn::getSlash() {
    if (!b->hasAttribute("slash")) {
        return NULL;
    }
    return b->getAttribute("slash");
};

void mei::SlashcountMixIn::setSlash(std::string _slash) {
    MeiAttribute *a = new MeiAttribute("slash", _slash);
    b->addAttribute(a);
};

bool mei::SlashcountMixIn::hasSlash() {
    return b->hasAttribute("slash");
};

void mei::SlashcountMixIn::removeSlash() {
    b->removeAttribute("slash");
};

/* include <slashmixin> */
mei::SlurpresentMixIn::SlurpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::SlurpresentMixIn::~SlurpresentMixIn() {}
MeiAttribute* mei::SlurpresentMixIn::getSlur() {
    if (!b->hasAttribute("slur")) {
        return NULL;
    }
    return b->getAttribute("slur");
};

void mei::SlurpresentMixIn::setSlur(std::string _slur) {
    MeiAttribute *a = new MeiAttribute("slur", _slur);
    b->addAttribute(a);
};

bool mei::SlurpresentMixIn::hasSlur() {
    return b->hasAttribute("slur");
};

void mei::SlurpresentMixIn::removeSlur() {
    b->removeAttribute("slur");
};

/* include <slurmixin> */
mei::SpaceVisMixIn::SpaceVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::SpaceVisMixIn::~SpaceVisMixIn() {}
MeiAttribute* mei::SpaceVisMixIn::getCompressable() {
    if (!b->hasAttribute("compressable")) {
        return NULL;
    }
    return b->getAttribute("compressable");
};

void mei::SpaceVisMixIn::setCompressable(std::string _compressable) {
    MeiAttribute *a = new MeiAttribute("compressable", _compressable);
    b->addAttribute(a);
};

bool mei::SpaceVisMixIn::hasCompressable() {
    return b->hasAttribute("compressable");
};

void mei::SpaceVisMixIn::removeCompressable() {
    b->removeAttribute("compressable");
};

/* include <compressablemixin> */
mei::SpacingMixIn::SpacingMixIn(MeiElement *b) {
    this->b = b;
};

mei::SpacingMixIn::~SpacingMixIn() {}
MeiAttribute* mei::SpacingMixIn::getSpacingPackexp() {
    if (!b->hasAttribute("spacing.packexp")) {
        return NULL;
    }
    return b->getAttribute("spacing.packexp");
};

void mei::SpacingMixIn::setSpacingPackexp(std::string _spacingpackexp) {
    MeiAttribute *a = new MeiAttribute("spacing.packexp", _spacingpackexp);
    b->addAttribute(a);
};

bool mei::SpacingMixIn::hasSpacingPackexp() {
    return b->hasAttribute("spacing.packexp");
};

void mei::SpacingMixIn::removeSpacingPackexp() {
    b->removeAttribute("spacing.packexp");
};
MeiAttribute* mei::SpacingMixIn::getSpacingPackfact() {
    if (!b->hasAttribute("spacing.packfact")) {
        return NULL;
    }
    return b->getAttribute("spacing.packfact");
};

void mei::SpacingMixIn::setSpacingPackfact(std::string _spacingpackfact) {
    MeiAttribute *a = new MeiAttribute("spacing.packfact", _spacingpackfact);
    b->addAttribute(a);
};

bool mei::SpacingMixIn::hasSpacingPackfact() {
    return b->hasAttribute("spacing.packfact");
};

void mei::SpacingMixIn::removeSpacingPackfact() {
    b->removeAttribute("spacing.packfact");
};
MeiAttribute* mei::SpacingMixIn::getSpacingStaff() {
    if (!b->hasAttribute("spacing.staff")) {
        return NULL;
    }
    return b->getAttribute("spacing.staff");
};

void mei::SpacingMixIn::setSpacingStaff(std::string _spacingstaff) {
    MeiAttribute *a = new MeiAttribute("spacing.staff", _spacingstaff);
    b->addAttribute(a);
};

bool mei::SpacingMixIn::hasSpacingStaff() {
    return b->hasAttribute("spacing.staff");
};

void mei::SpacingMixIn::removeSpacingStaff() {
    b->removeAttribute("spacing.staff");
};
MeiAttribute* mei::SpacingMixIn::getSpacingSystem() {
    if (!b->hasAttribute("spacing.system")) {
        return NULL;
    }
    return b->getAttribute("spacing.system");
};

void mei::SpacingMixIn::setSpacingSystem(std::string _spacingsystem) {
    MeiAttribute *a = new MeiAttribute("spacing.system", _spacingsystem);
    b->addAttribute(a);
};

bool mei::SpacingMixIn::hasSpacingSystem() {
    return b->hasAttribute("spacing.system");
};

void mei::SpacingMixIn::removeSpacingSystem() {
    b->removeAttribute("spacing.system");
};

/* include <spacing.systemmixin> */
mei::StaffLogMixIn::StaffLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffLogMixIn::~StaffLogMixIn() {}
MeiAttribute* mei::StaffLogMixIn::getDef() {
    if (!b->hasAttribute("def")) {
        return NULL;
    }
    return b->getAttribute("def");
};

void mei::StaffLogMixIn::setDef(std::string _def) {
    MeiAttribute *a = new MeiAttribute("def", _def);
    b->addAttribute(a);
};

bool mei::StaffLogMixIn::hasDef() {
    return b->hasAttribute("def");
};

void mei::StaffLogMixIn::removeDef() {
    b->removeAttribute("def");
};

/* include <defmixin> */
mei::StaffDefVisMixIn::StaffDefVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffDefVisMixIn::~StaffDefVisMixIn() {}
MeiAttribute* mei::StaffDefVisMixIn::getGridShow() {
    if (!b->hasAttribute("grid.show")) {
        return NULL;
    }
    return b->getAttribute("grid.show");
};

void mei::StaffDefVisMixIn::setGridShow(std::string _gridshow) {
    MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasGridShow() {
    return b->hasAttribute("grid.show");
};

void mei::StaffDefVisMixIn::removeGridShow() {
    b->removeAttribute("grid.show");
};
MeiAttribute* mei::StaffDefVisMixIn::getLayerscheme() {
    if (!b->hasAttribute("layerscheme")) {
        return NULL;
    }
    return b->getAttribute("layerscheme");
};

void mei::StaffDefVisMixIn::setLayerscheme(std::string _layerscheme) {
    MeiAttribute *a = new MeiAttribute("layerscheme", _layerscheme);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasLayerscheme() {
    return b->hasAttribute("layerscheme");
};

void mei::StaffDefVisMixIn::removeLayerscheme() {
    b->removeAttribute("layerscheme");
};
MeiAttribute* mei::StaffDefVisMixIn::getLines() {
    if (!b->hasAttribute("lines")) {
        return NULL;
    }
    return b->getAttribute("lines");
};

void mei::StaffDefVisMixIn::setLines(std::string _lines) {
    MeiAttribute *a = new MeiAttribute("lines", _lines);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasLines() {
    return b->hasAttribute("lines");
};

void mei::StaffDefVisMixIn::removeLines() {
    b->removeAttribute("lines");
};
MeiAttribute* mei::StaffDefVisMixIn::getLinesColor() {
    if (!b->hasAttribute("lines.color")) {
        return NULL;
    }
    return b->getAttribute("lines.color");
};

void mei::StaffDefVisMixIn::setLinesColor(std::string _linescolor) {
    MeiAttribute *a = new MeiAttribute("lines.color", _linescolor);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasLinesColor() {
    return b->hasAttribute("lines.color");
};

void mei::StaffDefVisMixIn::removeLinesColor() {
    b->removeAttribute("lines.color");
};
MeiAttribute* mei::StaffDefVisMixIn::getLinesVisible() {
    if (!b->hasAttribute("lines.visible")) {
        return NULL;
    }
    return b->getAttribute("lines.visible");
};

void mei::StaffDefVisMixIn::setLinesVisible(std::string _linesvisible) {
    MeiAttribute *a = new MeiAttribute("lines.visible", _linesvisible);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasLinesVisible() {
    return b->hasAttribute("lines.visible");
};

void mei::StaffDefVisMixIn::removeLinesVisible() {
    b->removeAttribute("lines.visible");
};
MeiAttribute* mei::StaffDefVisMixIn::getSpacing() {
    if (!b->hasAttribute("spacing")) {
        return NULL;
    }
    return b->getAttribute("spacing");
};

void mei::StaffDefVisMixIn::setSpacing(std::string _spacing) {
    MeiAttribute *a = new MeiAttribute("spacing", _spacing);
    b->addAttribute(a);
};

bool mei::StaffDefVisMixIn::hasSpacing() {
    return b->hasAttribute("spacing");
};

void mei::StaffDefVisMixIn::removeSpacing() {
    b->removeAttribute("spacing");
};

/* include <spacingmixin> */
mei::StaffGrpVisMixIn::StaffGrpVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffGrpVisMixIn::~StaffGrpVisMixIn() {}
MeiAttribute* mei::StaffGrpVisMixIn::getBarthru() {
    if (!b->hasAttribute("barthru")) {
        return NULL;
    }
    return b->getAttribute("barthru");
};

void mei::StaffGrpVisMixIn::setBarthru(std::string _barthru) {
    MeiAttribute *a = new MeiAttribute("barthru", _barthru);
    b->addAttribute(a);
};

bool mei::StaffGrpVisMixIn::hasBarthru() {
    return b->hasAttribute("barthru");
};

void mei::StaffGrpVisMixIn::removeBarthru() {
    b->removeAttribute("barthru");
};

/* include <barthrumixin> */
mei::StaffgroupingsymMixIn::StaffgroupingsymMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffgroupingsymMixIn::~StaffgroupingsymMixIn() {}
MeiAttribute* mei::StaffgroupingsymMixIn::getSymbol() {
    if (!b->hasAttribute("symbol")) {
        return NULL;
    }
    return b->getAttribute("symbol");
};

void mei::StaffgroupingsymMixIn::setSymbol(std::string _symbol) {
    MeiAttribute *a = new MeiAttribute("symbol", _symbol);
    b->addAttribute(a);
};

bool mei::StaffgroupingsymMixIn::hasSymbol() {
    return b->hasAttribute("symbol");
};

void mei::StaffgroupingsymMixIn::removeSymbol() {
    b->removeAttribute("symbol");
};

/* include <symbolmixin> */
mei::StaffidentMixIn::StaffidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::StaffidentMixIn::~StaffidentMixIn() {}
MeiAttribute* mei::StaffidentMixIn::getStaff() {
    if (!b->hasAttribute("staff")) {
        return NULL;
    }
    return b->getAttribute("staff");
};

void mei::StaffidentMixIn::setStaff(std::string _staff) {
    MeiAttribute *a = new MeiAttribute("staff", _staff);
    b->addAttribute(a);
};

bool mei::StaffidentMixIn::hasStaff() {
    return b->hasAttribute("staff");
};

void mei::StaffidentMixIn::removeStaff() {
    b->removeAttribute("staff");
};

/* include <staffmixin> */
mei::StafflocMixIn::StafflocMixIn(MeiElement *b) {
    this->b = b;
};

mei::StafflocMixIn::~StafflocMixIn() {}
MeiAttribute* mei::StafflocMixIn::getLoc() {
    if (!b->hasAttribute("loc")) {
        return NULL;
    }
    return b->getAttribute("loc");
};

void mei::StafflocMixIn::setLoc(std::string _loc) {
    MeiAttribute *a = new MeiAttribute("loc", _loc);
    b->addAttribute(a);
};

bool mei::StafflocMixIn::hasLoc() {
    return b->hasAttribute("loc");
};

void mei::StafflocMixIn::removeLoc() {
    b->removeAttribute("loc");
};

/* include <locmixin> */
mei::StafflocPitchedMixIn::StafflocPitchedMixIn(MeiElement *b) {
    this->b = b;
};

mei::StafflocPitchedMixIn::~StafflocPitchedMixIn() {}
MeiAttribute* mei::StafflocPitchedMixIn::getPloc() {
    if (!b->hasAttribute("ploc")) {
        return NULL;
    }
    return b->getAttribute("ploc");
};

void mei::StafflocPitchedMixIn::setPloc(std::string _ploc) {
    MeiAttribute *a = new MeiAttribute("ploc", _ploc);
    b->addAttribute(a);
};

bool mei::StafflocPitchedMixIn::hasPloc() {
    return b->hasAttribute("ploc");
};

void mei::StafflocPitchedMixIn::removePloc() {
    b->removeAttribute("ploc");
};
MeiAttribute* mei::StafflocPitchedMixIn::getOloc() {
    if (!b->hasAttribute("oloc")) {
        return NULL;
    }
    return b->getAttribute("oloc");
};

void mei::StafflocPitchedMixIn::setOloc(std::string _oloc) {
    MeiAttribute *a = new MeiAttribute("oloc", _oloc);
    b->addAttribute(a);
};

bool mei::StafflocPitchedMixIn::hasOloc() {
    return b->hasAttribute("oloc");
};

void mei::StafflocPitchedMixIn::removeOloc() {
    b->removeAttribute("oloc");
};

/* include <olocmixin> */
mei::StartendidMixIn::StartendidMixIn(MeiElement *b) {
    this->b = b;
};

mei::StartendidMixIn::~StartendidMixIn() {}
MeiAttribute* mei::StartendidMixIn::getEndid() {
    if (!b->hasAttribute("endid")) {
        return NULL;
    }
    return b->getAttribute("endid");
};

void mei::StartendidMixIn::setEndid(std::string _endid) {
    MeiAttribute *a = new MeiAttribute("endid", _endid);
    b->addAttribute(a);
};

bool mei::StartendidMixIn::hasEndid() {
    return b->hasAttribute("endid");
};

void mei::StartendidMixIn::removeEndid() {
    b->removeAttribute("endid");
};

/* include <endidmixin> */
mei::StartidMixIn::StartidMixIn(MeiElement *b) {
    this->b = b;
};

mei::StartidMixIn::~StartidMixIn() {}
MeiAttribute* mei::StartidMixIn::getStartid() {
    if (!b->hasAttribute("startid")) {
        return NULL;
    }
    return b->getAttribute("startid");
};

void mei::StartidMixIn::setStartid(std::string _startid) {
    MeiAttribute *a = new MeiAttribute("startid", _startid);
    b->addAttribute(a);
};

bool mei::StartidMixIn::hasStartid() {
    return b->hasAttribute("startid");
};

void mei::StartidMixIn::removeStartid() {
    b->removeAttribute("startid");
};

/* include <startidmixin> */
mei::StemsMixIn::StemsMixIn(MeiElement *b) {
    this->b = b;
};

mei::StemsMixIn::~StemsMixIn() {}
MeiAttribute* mei::StemsMixIn::getStemDir() {
    if (!b->hasAttribute("stem.dir")) {
        return NULL;
    }
    return b->getAttribute("stem.dir");
};

void mei::StemsMixIn::setStemDir(std::string _stemdir) {
    MeiAttribute *a = new MeiAttribute("stem.dir", _stemdir);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemDir() {
    return b->hasAttribute("stem.dir");
};

void mei::StemsMixIn::removeStemDir() {
    b->removeAttribute("stem.dir");
};
MeiAttribute* mei::StemsMixIn::getStemLen() {
    if (!b->hasAttribute("stem.len")) {
        return NULL;
    }
    return b->getAttribute("stem.len");
};

void mei::StemsMixIn::setStemLen(std::string _stemlen) {
    MeiAttribute *a = new MeiAttribute("stem.len", _stemlen);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemLen() {
    return b->hasAttribute("stem.len");
};

void mei::StemsMixIn::removeStemLen() {
    b->removeAttribute("stem.len");
};
MeiAttribute* mei::StemsMixIn::getStemMod() {
    if (!b->hasAttribute("stem.mod")) {
        return NULL;
    }
    return b->getAttribute("stem.mod");
};

void mei::StemsMixIn::setStemMod(std::string _stemmod) {
    MeiAttribute *a = new MeiAttribute("stem.mod", _stemmod);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemMod() {
    return b->hasAttribute("stem.mod");
};

void mei::StemsMixIn::removeStemMod() {
    b->removeAttribute("stem.mod");
};
MeiAttribute* mei::StemsMixIn::getStemPos() {
    if (!b->hasAttribute("stem.pos")) {
        return NULL;
    }
    return b->getAttribute("stem.pos");
};

void mei::StemsMixIn::setStemPos(std::string _stempos) {
    MeiAttribute *a = new MeiAttribute("stem.pos", _stempos);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemPos() {
    return b->hasAttribute("stem.pos");
};

void mei::StemsMixIn::removeStemPos() {
    b->removeAttribute("stem.pos");
};
MeiAttribute* mei::StemsMixIn::getStemX() {
    if (!b->hasAttribute("stem.x")) {
        return NULL;
    }
    return b->getAttribute("stem.x");
};

void mei::StemsMixIn::setStemX(std::string _stemx) {
    MeiAttribute *a = new MeiAttribute("stem.x", _stemx);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemX() {
    return b->hasAttribute("stem.x");
};

void mei::StemsMixIn::removeStemX() {
    b->removeAttribute("stem.x");
};
MeiAttribute* mei::StemsMixIn::getStemY() {
    if (!b->hasAttribute("stem.y")) {
        return NULL;
    }
    return b->getAttribute("stem.y");
};

void mei::StemsMixIn::setStemY(std::string _stemy) {
    MeiAttribute *a = new MeiAttribute("stem.y", _stemy);
    b->addAttribute(a);
};

bool mei::StemsMixIn::hasStemY() {
    return b->hasAttribute("stem.y");
};

void mei::StemsMixIn::removeStemY() {
    b->removeAttribute("stem.y");
};

/* include <stem.ymixin> */
mei::SylLogMixIn::SylLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::SylLogMixIn::~SylLogMixIn() {}
MeiAttribute* mei::SylLogMixIn::getCon() {
    if (!b->hasAttribute("con")) {
        return NULL;
    }
    return b->getAttribute("con");
};

void mei::SylLogMixIn::setCon(std::string _con) {
    MeiAttribute *a = new MeiAttribute("con", _con);
    b->addAttribute(a);
};

bool mei::SylLogMixIn::hasCon() {
    return b->hasAttribute("con");
};

void mei::SylLogMixIn::removeCon() {
    b->removeAttribute("con");
};
MeiAttribute* mei::SylLogMixIn::getWordpos() {
    if (!b->hasAttribute("wordpos")) {
        return NULL;
    }
    return b->getAttribute("wordpos");
};

void mei::SylLogMixIn::setWordpos(std::string _wordpos) {
    MeiAttribute *a = new MeiAttribute("wordpos", _wordpos);
    b->addAttribute(a);
};

bool mei::SylLogMixIn::hasWordpos() {
    return b->hasAttribute("wordpos");
};

void mei::SylLogMixIn::removeWordpos() {
    b->removeAttribute("wordpos");
};

/* include <wordposmixin> */
mei::SyltextMixIn::SyltextMixIn(MeiElement *b) {
    this->b = b;
};

mei::SyltextMixIn::~SyltextMixIn() {}
MeiAttribute* mei::SyltextMixIn::getSyl() {
    if (!b->hasAttribute("syl")) {
        return NULL;
    }
    return b->getAttribute("syl");
};

void mei::SyltextMixIn::setSyl(std::string _syl) {
    MeiAttribute *a = new MeiAttribute("syl", _syl);
    b->addAttribute(a);
};

bool mei::SyltextMixIn::hasSyl() {
    return b->hasAttribute("syl");
};

void mei::SyltextMixIn::removeSyl() {
    b->removeAttribute("syl");
};

/* include <sylmixin> */
mei::SystemsMixIn::SystemsMixIn(MeiElement *b) {
    this->b = b;
};

mei::SystemsMixIn::~SystemsMixIn() {}
MeiAttribute* mei::SystemsMixIn::getSystemLeftline() {
    if (!b->hasAttribute("system.leftline")) {
        return NULL;
    }
    return b->getAttribute("system.leftline");
};

void mei::SystemsMixIn::setSystemLeftline(std::string _systemleftline) {
    MeiAttribute *a = new MeiAttribute("system.leftline", _systemleftline);
    b->addAttribute(a);
};

bool mei::SystemsMixIn::hasSystemLeftline() {
    return b->hasAttribute("system.leftline");
};

void mei::SystemsMixIn::removeSystemLeftline() {
    b->removeAttribute("system.leftline");
};
MeiAttribute* mei::SystemsMixIn::getSystemLeftmar() {
    if (!b->hasAttribute("system.leftmar")) {
        return NULL;
    }
    return b->getAttribute("system.leftmar");
};

void mei::SystemsMixIn::setSystemLeftmar(std::string _systemleftmar) {
    MeiAttribute *a = new MeiAttribute("system.leftmar", _systemleftmar);
    b->addAttribute(a);
};

bool mei::SystemsMixIn::hasSystemLeftmar() {
    return b->hasAttribute("system.leftmar");
};

void mei::SystemsMixIn::removeSystemLeftmar() {
    b->removeAttribute("system.leftmar");
};
MeiAttribute* mei::SystemsMixIn::getSystemRightmar() {
    if (!b->hasAttribute("system.rightmar")) {
        return NULL;
    }
    return b->getAttribute("system.rightmar");
};

void mei::SystemsMixIn::setSystemRightmar(std::string _systemrightmar) {
    MeiAttribute *a = new MeiAttribute("system.rightmar", _systemrightmar);
    b->addAttribute(a);
};

bool mei::SystemsMixIn::hasSystemRightmar() {
    return b->hasAttribute("system.rightmar");
};

void mei::SystemsMixIn::removeSystemRightmar() {
    b->removeAttribute("system.rightmar");
};
MeiAttribute* mei::SystemsMixIn::getSystemTopmar() {
    if (!b->hasAttribute("system.topmar")) {
        return NULL;
    }
    return b->getAttribute("system.topmar");
};

void mei::SystemsMixIn::setSystemTopmar(std::string _systemtopmar) {
    MeiAttribute *a = new MeiAttribute("system.topmar", _systemtopmar);
    b->addAttribute(a);
};

bool mei::SystemsMixIn::hasSystemTopmar() {
    return b->hasAttribute("system.topmar");
};

void mei::SystemsMixIn::removeSystemTopmar() {
    b->removeAttribute("system.topmar");
};

/* include <system.topmarmixin> */
mei::TargetevalMixIn::TargetevalMixIn(MeiElement *b) {
    this->b = b;
};

mei::TargetevalMixIn::~TargetevalMixIn() {}
MeiAttribute* mei::TargetevalMixIn::getEvaluate() {
    if (!b->hasAttribute("evaluate")) {
        return NULL;
    }
    return b->getAttribute("evaluate");
};

void mei::TargetevalMixIn::setEvaluate(std::string _evaluate) {
    MeiAttribute *a = new MeiAttribute("evaluate", _evaluate);
    b->addAttribute(a);
};

bool mei::TargetevalMixIn::hasEvaluate() {
    return b->hasAttribute("evaluate");
};

void mei::TargetevalMixIn::removeEvaluate() {
    b->removeAttribute("evaluate");
};

/* include <evaluatemixin> */
mei::TempoLogMixIn::TempoLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::TempoLogMixIn::~TempoLogMixIn() {}
MeiAttribute* mei::TempoLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        return NULL;
    }
    return b->getAttribute("func");
};

void mei::TempoLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::TempoLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::TempoLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::TextstyleMixIn::TextstyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::TextstyleMixIn::~TextstyleMixIn() {}
MeiAttribute* mei::TextstyleMixIn::getTextFam() {
    if (!b->hasAttribute("text.fam")) {
        return NULL;
    }
    return b->getAttribute("text.fam");
};

void mei::TextstyleMixIn::setTextFam(std::string _textfam) {
    MeiAttribute *a = new MeiAttribute("text.fam", _textfam);
    b->addAttribute(a);
};

bool mei::TextstyleMixIn::hasTextFam() {
    return b->hasAttribute("text.fam");
};

void mei::TextstyleMixIn::removeTextFam() {
    b->removeAttribute("text.fam");
};
MeiAttribute* mei::TextstyleMixIn::getTextName() {
    if (!b->hasAttribute("text.name")) {
        return NULL;
    }
    return b->getAttribute("text.name");
};

void mei::TextstyleMixIn::setTextName(std::string _textname) {
    MeiAttribute *a = new MeiAttribute("text.name", _textname);
    b->addAttribute(a);
};

bool mei::TextstyleMixIn::hasTextName() {
    return b->hasAttribute("text.name");
};

void mei::TextstyleMixIn::removeTextName() {
    b->removeAttribute("text.name");
};
MeiAttribute* mei::TextstyleMixIn::getTextSize() {
    if (!b->hasAttribute("text.size")) {
        return NULL;
    }
    return b->getAttribute("text.size");
};

void mei::TextstyleMixIn::setTextSize(std::string _textsize) {
    MeiAttribute *a = new MeiAttribute("text.size", _textsize);
    b->addAttribute(a);
};

bool mei::TextstyleMixIn::hasTextSize() {
    return b->hasAttribute("text.size");
};

void mei::TextstyleMixIn::removeTextSize() {
    b->removeAttribute("text.size");
};
MeiAttribute* mei::TextstyleMixIn::getTextStyle() {
    if (!b->hasAttribute("text.style")) {
        return NULL;
    }
    return b->getAttribute("text.style");
};

void mei::TextstyleMixIn::setTextStyle(std::string _textstyle) {
    MeiAttribute *a = new MeiAttribute("text.style", _textstyle);
    b->addAttribute(a);
};

bool mei::TextstyleMixIn::hasTextStyle() {
    return b->hasAttribute("text.style");
};

void mei::TextstyleMixIn::removeTextStyle() {
    b->removeAttribute("text.style");
};
MeiAttribute* mei::TextstyleMixIn::getTextWeight() {
    if (!b->hasAttribute("text.weight")) {
        return NULL;
    }
    return b->getAttribute("text.weight");
};

void mei::TextstyleMixIn::setTextWeight(std::string _textweight) {
    MeiAttribute *a = new MeiAttribute("text.weight", _textweight);
    b->addAttribute(a);
};

bool mei::TextstyleMixIn::hasTextWeight() {
    return b->hasAttribute("text.weight");
};

void mei::TextstyleMixIn::removeTextWeight() {
    b->removeAttribute("text.weight");
};

/* include <text.weightmixin> */
mei::TiepresentMixIn::TiepresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::TiepresentMixIn::~TiepresentMixIn() {}
MeiAttribute* mei::TiepresentMixIn::getTie() {
    if (!b->hasAttribute("tie")) {
        return NULL;
    }
    return b->getAttribute("tie");
};

void mei::TiepresentMixIn::setTie(std::string _tie) {
    MeiAttribute *a = new MeiAttribute("tie", _tie);
    b->addAttribute(a);
};

bool mei::TiepresentMixIn::hasTie() {
    return b->hasAttribute("tie");
};

void mei::TiepresentMixIn::removeTie() {
    b->removeAttribute("tie");
};

/* include <tiemixin> */
mei::TimestampMusicalMixIn::TimestampMusicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimestampMusicalMixIn::~TimestampMusicalMixIn() {}
MeiAttribute* mei::TimestampMusicalMixIn::getTstamp() {
    if (!b->hasAttribute("tstamp")) {
        return NULL;
    }
    return b->getAttribute("tstamp");
};

void mei::TimestampMusicalMixIn::setTstamp(std::string _tstamp) {
    MeiAttribute *a = new MeiAttribute("tstamp", _tstamp);
    b->addAttribute(a);
};

bool mei::TimestampMusicalMixIn::hasTstamp() {
    return b->hasAttribute("tstamp");
};

void mei::TimestampMusicalMixIn::removeTstamp() {
    b->removeAttribute("tstamp");
};

/* include <tstampmixin> */
mei::TimestampPerformedMixIn::TimestampPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimestampPerformedMixIn::~TimestampPerformedMixIn() {}
MeiAttribute* mei::TimestampPerformedMixIn::getTstampGes() {
    if (!b->hasAttribute("tstamp.ges")) {
        return NULL;
    }
    return b->getAttribute("tstamp.ges");
};

void mei::TimestampPerformedMixIn::setTstampGes(std::string _tstampges) {
    MeiAttribute *a = new MeiAttribute("tstamp.ges", _tstampges);
    b->addAttribute(a);
};

bool mei::TimestampPerformedMixIn::hasTstampGes() {
    return b->hasAttribute("tstamp.ges");
};

void mei::TimestampPerformedMixIn::removeTstampGes() {
    b->removeAttribute("tstamp.ges");
};
MeiAttribute* mei::TimestampPerformedMixIn::getTstampReal() {
    if (!b->hasAttribute("tstamp.real")) {
        return NULL;
    }
    return b->getAttribute("tstamp.real");
};

void mei::TimestampPerformedMixIn::setTstampReal(std::string _tstampreal) {
    MeiAttribute *a = new MeiAttribute("tstamp.real", _tstampreal);
    b->addAttribute(a);
};

bool mei::TimestampPerformedMixIn::hasTstampReal() {
    return b->hasAttribute("tstamp.real");
};

void mei::TimestampPerformedMixIn::removeTstampReal() {
    b->removeAttribute("tstamp.real");
};

/* include <tstamp.realmixin> */
mei::Timestamp2MusicalMixIn::Timestamp2MusicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::Timestamp2MusicalMixIn::~Timestamp2MusicalMixIn() {}
MeiAttribute* mei::Timestamp2MusicalMixIn::getTstamp2() {
    if (!b->hasAttribute("tstamp2")) {
        return NULL;
    }
    return b->getAttribute("tstamp2");
};

void mei::Timestamp2MusicalMixIn::setTstamp2(std::string _tstamp2) {
    MeiAttribute *a = new MeiAttribute("tstamp2", _tstamp2);
    b->addAttribute(a);
};

bool mei::Timestamp2MusicalMixIn::hasTstamp2() {
    return b->hasAttribute("tstamp2");
};

void mei::Timestamp2MusicalMixIn::removeTstamp2() {
    b->removeAttribute("tstamp2");
};

/* include <tstamp2mixin> */
mei::TranspositionMixIn::TranspositionMixIn(MeiElement *b) {
    this->b = b;
};

mei::TranspositionMixIn::~TranspositionMixIn() {}
MeiAttribute* mei::TranspositionMixIn::getTransDiat() {
    if (!b->hasAttribute("trans.diat")) {
        return NULL;
    }
    return b->getAttribute("trans.diat");
};

void mei::TranspositionMixIn::setTransDiat(std::string _transdiat) {
    MeiAttribute *a = new MeiAttribute("trans.diat", _transdiat);
    b->addAttribute(a);
};

bool mei::TranspositionMixIn::hasTransDiat() {
    return b->hasAttribute("trans.diat");
};

void mei::TranspositionMixIn::removeTransDiat() {
    b->removeAttribute("trans.diat");
};
MeiAttribute* mei::TranspositionMixIn::getTransSemi() {
    if (!b->hasAttribute("trans.semi")) {
        return NULL;
    }
    return b->getAttribute("trans.semi");
};

void mei::TranspositionMixIn::setTransSemi(std::string _transsemi) {
    MeiAttribute *a = new MeiAttribute("trans.semi", _transsemi);
    b->addAttribute(a);
};

bool mei::TranspositionMixIn::hasTransSemi() {
    return b->hasAttribute("trans.semi");
};

void mei::TranspositionMixIn::removeTransSemi() {
    b->removeAttribute("trans.semi");
};

/* include <trans.semimixin> */
mei::TupletpresentMixIn::TupletpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::TupletpresentMixIn::~TupletpresentMixIn() {}
MeiAttribute* mei::TupletpresentMixIn::getTuplet() {
    if (!b->hasAttribute("tuplet")) {
        return NULL;
    }
    return b->getAttribute("tuplet");
};

void mei::TupletpresentMixIn::setTuplet(std::string _tuplet) {
    MeiAttribute *a = new MeiAttribute("tuplet", _tuplet);
    b->addAttribute(a);
};

bool mei::TupletpresentMixIn::hasTuplet() {
    return b->hasAttribute("tuplet");
};

void mei::TupletpresentMixIn::removeTuplet() {
    b->removeAttribute("tuplet");
};

/* include <tupletmixin> */
mei::TypedMixIn::TypedMixIn(MeiElement *b) {
    this->b = b;
};

mei::TypedMixIn::~TypedMixIn() {}
MeiAttribute* mei::TypedMixIn::getType() {
    if (!b->hasAttribute("type")) {
        return NULL;
    }
    return b->getAttribute("type");
};

void mei::TypedMixIn::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    b->addAttribute(a);
};

bool mei::TypedMixIn::hasType() {
    return b->hasAttribute("type");
};

void mei::TypedMixIn::removeType() {
    b->removeAttribute("type");
};
MeiAttribute* mei::TypedMixIn::getSubtype() {
    if (!b->hasAttribute("subtype")) {
        return NULL;
    }
    return b->getAttribute("subtype");
};

void mei::TypedMixIn::setSubtype(std::string _subtype) {
    MeiAttribute *a = new MeiAttribute("subtype", _subtype);
    b->addAttribute(a);
};

bool mei::TypedMixIn::hasSubtype() {
    return b->hasAttribute("subtype");
};

void mei::TypedMixIn::removeSubtype() {
    b->removeAttribute("subtype");
};

/* include <subtypemixin> */
mei::TypographyMixIn::TypographyMixIn(MeiElement *b) {
    this->b = b;
};

mei::TypographyMixIn::~TypographyMixIn() {}
MeiAttribute* mei::TypographyMixIn::getFontfam() {
    if (!b->hasAttribute("fontfam")) {
        return NULL;
    }
    return b->getAttribute("fontfam");
};

void mei::TypographyMixIn::setFontfam(std::string _fontfam) {
    MeiAttribute *a = new MeiAttribute("fontfam", _fontfam);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontfam() {
    return b->hasAttribute("fontfam");
};

void mei::TypographyMixIn::removeFontfam() {
    b->removeAttribute("fontfam");
};
MeiAttribute* mei::TypographyMixIn::getFontname() {
    if (!b->hasAttribute("fontname")) {
        return NULL;
    }
    return b->getAttribute("fontname");
};

void mei::TypographyMixIn::setFontname(std::string _fontname) {
    MeiAttribute *a = new MeiAttribute("fontname", _fontname);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontname() {
    return b->hasAttribute("fontname");
};

void mei::TypographyMixIn::removeFontname() {
    b->removeAttribute("fontname");
};
MeiAttribute* mei::TypographyMixIn::getFontsize() {
    if (!b->hasAttribute("fontsize")) {
        return NULL;
    }
    return b->getAttribute("fontsize");
};

void mei::TypographyMixIn::setFontsize(std::string _fontsize) {
    MeiAttribute *a = new MeiAttribute("fontsize", _fontsize);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontsize() {
    return b->hasAttribute("fontsize");
};

void mei::TypographyMixIn::removeFontsize() {
    b->removeAttribute("fontsize");
};
MeiAttribute* mei::TypographyMixIn::getFontstyle() {
    if (!b->hasAttribute("fontstyle")) {
        return NULL;
    }
    return b->getAttribute("fontstyle");
};

void mei::TypographyMixIn::setFontstyle(std::string _fontstyle) {
    MeiAttribute *a = new MeiAttribute("fontstyle", _fontstyle);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontstyle() {
    return b->hasAttribute("fontstyle");
};

void mei::TypographyMixIn::removeFontstyle() {
    b->removeAttribute("fontstyle");
};
MeiAttribute* mei::TypographyMixIn::getFontweight() {
    if (!b->hasAttribute("fontweight")) {
        return NULL;
    }
    return b->getAttribute("fontweight");
};

void mei::TypographyMixIn::setFontweight(std::string _fontweight) {
    MeiAttribute *a = new MeiAttribute("fontweight", _fontweight);
    b->addAttribute(a);
};

bool mei::TypographyMixIn::hasFontweight() {
    return b->hasAttribute("fontweight");
};

void mei::TypographyMixIn::removeFontweight() {
    b->removeAttribute("fontweight");
};

/* include <fontweightmixin> */
mei::VisibilityMixIn::VisibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisibilityMixIn::~VisibilityMixIn() {}
MeiAttribute* mei::VisibilityMixIn::getVisible() {
    if (!b->hasAttribute("visible")) {
        return NULL;
    }
    return b->getAttribute("visible");
};

void mei::VisibilityMixIn::setVisible(std::string _visible) {
    MeiAttribute *a = new MeiAttribute("visible", _visible);
    b->addAttribute(a);
};

bool mei::VisibilityMixIn::hasVisible() {
    return b->hasAttribute("visible");
};

void mei::VisibilityMixIn::removeVisible() {
    b->removeAttribute("visible");
};

/* include <visiblemixin> */
mei::VisualoffsetHoMixIn::VisualoffsetHoMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualoffsetHoMixIn::~VisualoffsetHoMixIn() {}
MeiAttribute* mei::VisualoffsetHoMixIn::getHo() {
    if (!b->hasAttribute("ho")) {
        return NULL;
    }
    return b->getAttribute("ho");
};

void mei::VisualoffsetHoMixIn::setHo(std::string _ho) {
    MeiAttribute *a = new MeiAttribute("ho", _ho);
    b->addAttribute(a);
};

bool mei::VisualoffsetHoMixIn::hasHo() {
    return b->hasAttribute("ho");
};

void mei::VisualoffsetHoMixIn::removeHo() {
    b->removeAttribute("ho");
};

/* include <homixin> */
mei::VisualoffsetToMixIn::VisualoffsetToMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualoffsetToMixIn::~VisualoffsetToMixIn() {}
MeiAttribute* mei::VisualoffsetToMixIn::getTo() {
    if (!b->hasAttribute("to")) {
        return NULL;
    }
    return b->getAttribute("to");
};

void mei::VisualoffsetToMixIn::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    b->addAttribute(a);
};

bool mei::VisualoffsetToMixIn::hasTo() {
    return b->hasAttribute("to");
};

void mei::VisualoffsetToMixIn::removeTo() {
    b->removeAttribute("to");
};

/* include <tomixin> */
mei::VisualoffsetVoMixIn::VisualoffsetVoMixIn(MeiElement *b) {
    this->b = b;
};

mei::VisualoffsetVoMixIn::~VisualoffsetVoMixIn() {}
MeiAttribute* mei::VisualoffsetVoMixIn::getVo() {
    if (!b->hasAttribute("vo")) {
        return NULL;
    }
    return b->getAttribute("vo");
};

void mei::VisualoffsetVoMixIn::setVo(std::string _vo) {
    MeiAttribute *a = new MeiAttribute("vo", _vo);
    b->addAttribute(a);
};

bool mei::VisualoffsetVoMixIn::hasVo() {
    return b->hasAttribute("vo");
};

void mei::VisualoffsetVoMixIn::removeVo() {
    b->removeAttribute("vo");
};

/* include <vomixin> */
mei::Visualoffset2HoMixIn::Visualoffset2HoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Visualoffset2HoMixIn::~Visualoffset2HoMixIn() {}
MeiAttribute* mei::Visualoffset2HoMixIn::getStartho() {
    if (!b->hasAttribute("startho")) {
        return NULL;
    }
    return b->getAttribute("startho");
};

void mei::Visualoffset2HoMixIn::setStartho(std::string _startho) {
    MeiAttribute *a = new MeiAttribute("startho", _startho);
    b->addAttribute(a);
};

bool mei::Visualoffset2HoMixIn::hasStartho() {
    return b->hasAttribute("startho");
};

void mei::Visualoffset2HoMixIn::removeStartho() {
    b->removeAttribute("startho");
};
MeiAttribute* mei::Visualoffset2HoMixIn::getEndho() {
    if (!b->hasAttribute("endho")) {
        return NULL;
    }
    return b->getAttribute("endho");
};

void mei::Visualoffset2HoMixIn::setEndho(std::string _endho) {
    MeiAttribute *a = new MeiAttribute("endho", _endho);
    b->addAttribute(a);
};

bool mei::Visualoffset2HoMixIn::hasEndho() {
    return b->hasAttribute("endho");
};

void mei::Visualoffset2HoMixIn::removeEndho() {
    b->removeAttribute("endho");
};

/* include <endhomixin> */
mei::Visualoffset2ToMixIn::Visualoffset2ToMixIn(MeiElement *b) {
    this->b = b;
};

mei::Visualoffset2ToMixIn::~Visualoffset2ToMixIn() {}
MeiAttribute* mei::Visualoffset2ToMixIn::getStartto() {
    if (!b->hasAttribute("startto")) {
        return NULL;
    }
    return b->getAttribute("startto");
};

void mei::Visualoffset2ToMixIn::setStartto(std::string _startto) {
    MeiAttribute *a = new MeiAttribute("startto", _startto);
    b->addAttribute(a);
};

bool mei::Visualoffset2ToMixIn::hasStartto() {
    return b->hasAttribute("startto");
};

void mei::Visualoffset2ToMixIn::removeStartto() {
    b->removeAttribute("startto");
};
MeiAttribute* mei::Visualoffset2ToMixIn::getEndto() {
    if (!b->hasAttribute("endto")) {
        return NULL;
    }
    return b->getAttribute("endto");
};

void mei::Visualoffset2ToMixIn::setEndto(std::string _endto) {
    MeiAttribute *a = new MeiAttribute("endto", _endto);
    b->addAttribute(a);
};

bool mei::Visualoffset2ToMixIn::hasEndto() {
    return b->hasAttribute("endto");
};

void mei::Visualoffset2ToMixIn::removeEndto() {
    b->removeAttribute("endto");
};

/* include <endtomixin> */
mei::Visualoffset2VoMixIn::Visualoffset2VoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Visualoffset2VoMixIn::~Visualoffset2VoMixIn() {}
MeiAttribute* mei::Visualoffset2VoMixIn::getStartvo() {
    if (!b->hasAttribute("startvo")) {
        return NULL;
    }
    return b->getAttribute("startvo");
};

void mei::Visualoffset2VoMixIn::setStartvo(std::string _startvo) {
    MeiAttribute *a = new MeiAttribute("startvo", _startvo);
    b->addAttribute(a);
};

bool mei::Visualoffset2VoMixIn::hasStartvo() {
    return b->hasAttribute("startvo");
};

void mei::Visualoffset2VoMixIn::removeStartvo() {
    b->removeAttribute("startvo");
};
MeiAttribute* mei::Visualoffset2VoMixIn::getEndvo() {
    if (!b->hasAttribute("endvo")) {
        return NULL;
    }
    return b->getAttribute("endvo");
};

void mei::Visualoffset2VoMixIn::setEndvo(std::string _endvo) {
    MeiAttribute *a = new MeiAttribute("endvo", _endvo);
    b->addAttribute(a);
};

bool mei::Visualoffset2VoMixIn::hasEndvo() {
    return b->hasAttribute("endvo");
};

void mei::Visualoffset2VoMixIn::removeEndvo() {
    b->removeAttribute("endvo");
};

/* include <endvomixin> */
mei::WhitespaceMixIn::WhitespaceMixIn(MeiElement *b) {
    this->b = b;
};

mei::WhitespaceMixIn::~WhitespaceMixIn() {}
MeiAttribute* mei::WhitespaceMixIn::getSpace() {
    if (!b->hasAttribute("xml:space")) {
        return NULL;
    }
    return b->getAttribute("xml:space");
};

void mei::WhitespaceMixIn::setSpace(std::string _space) {
    MeiAttribute *a = new MeiAttribute("xml:space", _space);
    b->addAttribute(a);
};

bool mei::WhitespaceMixIn::hasSpace() {
    return b->hasAttribute("xml:space");
};

void mei::WhitespaceMixIn::removeSpace() {
    b->removeAttribute("xml:space");
};

/* include <spacemixin> */
mei::WidthMixIn::WidthMixIn(MeiElement *b) {
    this->b = b;
};

mei::WidthMixIn::~WidthMixIn() {}
MeiAttribute* mei::WidthMixIn::getWidth() {
    if (!b->hasAttribute("width")) {
        return NULL;
    }
    return b->getAttribute("width");
};

void mei::WidthMixIn::setWidth(std::string _width) {
    MeiAttribute *a = new MeiAttribute("width", _width);
    b->addAttribute(a);
};

bool mei::WidthMixIn::hasWidth() {
    return b->hasAttribute("width");
};

void mei::WidthMixIn::removeWidth() {
    b->removeAttribute("width");
};

/* include <widthmixin> */
mei::XyMixIn::XyMixIn(MeiElement *b) {
    this->b = b;
};

mei::XyMixIn::~XyMixIn() {}
MeiAttribute* mei::XyMixIn::getX() {
    if (!b->hasAttribute("x")) {
        return NULL;
    }
    return b->getAttribute("x");
};

void mei::XyMixIn::setX(std::string _x) {
    MeiAttribute *a = new MeiAttribute("x", _x);
    b->addAttribute(a);
};

bool mei::XyMixIn::hasX() {
    return b->hasAttribute("x");
};

void mei::XyMixIn::removeX() {
    b->removeAttribute("x");
};
MeiAttribute* mei::XyMixIn::getY() {
    if (!b->hasAttribute("y")) {
        return NULL;
    }
    return b->getAttribute("y");
};

void mei::XyMixIn::setY(std::string _y) {
    MeiAttribute *a = new MeiAttribute("y", _y);
    b->addAttribute(a);
};

bool mei::XyMixIn::hasY() {
    return b->hasAttribute("y");
};

void mei::XyMixIn::removeY() {
    b->removeAttribute("y");
};

/* include <ymixin> */
mei::Xy2MixIn::Xy2MixIn(MeiElement *b) {
    this->b = b;
};

mei::Xy2MixIn::~Xy2MixIn() {}
MeiAttribute* mei::Xy2MixIn::getX2() {
    if (!b->hasAttribute("x2")) {
        return NULL;
    }
    return b->getAttribute("x2");
};

void mei::Xy2MixIn::setX2(std::string _x2) {
    MeiAttribute *a = new MeiAttribute("x2", _x2);
    b->addAttribute(a);
};

bool mei::Xy2MixIn::hasX2() {
    return b->hasAttribute("x2");
};

void mei::Xy2MixIn::removeX2() {
    b->removeAttribute("x2");
};
MeiAttribute* mei::Xy2MixIn::getY2() {
    if (!b->hasAttribute("y2")) {
        return NULL;
    }
    return b->getAttribute("y2");
};

void mei::Xy2MixIn::setY2(std::string _y2) {
    MeiAttribute *a = new MeiAttribute("y2", _y2);
    b->addAttribute(a);
};

bool mei::Xy2MixIn::hasY2() {
    return b->hasAttribute("y2");
};

void mei::Xy2MixIn::removeY2() {
    b->removeAttribute("y2");
};

/* include <y2mixin> */


