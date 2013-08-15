#include "sharedmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_accidLogMixIn::Mei_accidLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_accidLogMixIn::~Mei_accidLogMixIn() {}
MeiAttribute* mei::Mei_accidLogMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return b->getAttribute("func");
};

void mei::Mei_accidLogMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::Mei_accidLogMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::Mei_accidLogMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::Mei_accidentalMixIn::Mei_accidentalMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_accidentalMixIn::~Mei_accidentalMixIn() {}
MeiAttribute* mei::Mei_accidentalMixIn::getAccid() {
    if (!b->hasAttribute("accid")) {
        throw AttributeNotFoundException("accid");
    }
    return b->getAttribute("accid");
};

void mei::Mei_accidentalMixIn::setAccid(std::string _accid) {
    MeiAttribute *a = new MeiAttribute("accid", _accid);
    b->addAttribute(a);
};

bool mei::Mei_accidentalMixIn::hasAccid() {
    return b->hasAttribute("accid");
};

void mei::Mei_accidentalMixIn::removeAccid() {
    b->removeAttribute("accid");
};

/* include <accidmixin> */
mei::Mei_accidentalPerformedMixIn::Mei_accidentalPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_accidentalPerformedMixIn::~Mei_accidentalPerformedMixIn() {}
MeiAttribute* mei::Mei_accidentalPerformedMixIn::getAccidGes() {
    if (!b->hasAttribute("accid.ges")) {
        throw AttributeNotFoundException("accid.ges");
    }
    return b->getAttribute("accid.ges");
};

void mei::Mei_accidentalPerformedMixIn::setAccidGes(std::string _accidges) {
    MeiAttribute *a = new MeiAttribute("accid.ges", _accidges);
    b->addAttribute(a);
};

bool mei::Mei_accidentalPerformedMixIn::hasAccidGes() {
    return b->hasAttribute("accid.ges");
};

void mei::Mei_accidentalPerformedMixIn::removeAccidGes() {
    b->removeAttribute("accid.ges");
};

/* include <accid.gesmixin> */
mei::Mei_altsymMixIn::Mei_altsymMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_altsymMixIn::~Mei_altsymMixIn() {}
MeiAttribute* mei::Mei_altsymMixIn::getAltsym() {
    if (!b->hasAttribute("altsym")) {
        throw AttributeNotFoundException("altsym");
    }
    return b->getAttribute("altsym");
};

void mei::Mei_altsymMixIn::setAltsym(std::string _altsym) {
    MeiAttribute *a = new MeiAttribute("altsym", _altsym);
    b->addAttribute(a);
};

bool mei::Mei_altsymMixIn::hasAltsym() {
    return b->hasAttribute("altsym");
};

void mei::Mei_altsymMixIn::removeAltsym() {
    b->removeAttribute("altsym");
};

/* include <altsymmixin> */
mei::Mei_articulationMixIn::Mei_articulationMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_articulationMixIn::~Mei_articulationMixIn() {}
MeiAttribute* mei::Mei_articulationMixIn::getArtic() {
    if (!b->hasAttribute("artic")) {
        throw AttributeNotFoundException("artic");
    }
    return b->getAttribute("artic");
};

void mei::Mei_articulationMixIn::setArtic(std::string _artic) {
    MeiAttribute *a = new MeiAttribute("artic", _artic);
    b->addAttribute(a);
};

bool mei::Mei_articulationMixIn::hasArtic() {
    return b->hasAttribute("artic");
};

void mei::Mei_articulationMixIn::removeArtic() {
    b->removeAttribute("artic");
};

/* include <articmixin> */
mei::Mei_articulationPerformedMixIn::Mei_articulationPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_articulationPerformedMixIn::~Mei_articulationPerformedMixIn() {}
MeiAttribute* mei::Mei_articulationPerformedMixIn::getArticGes() {
    if (!b->hasAttribute("artic.ges")) {
        throw AttributeNotFoundException("artic.ges");
    }
    return b->getAttribute("artic.ges");
};

void mei::Mei_articulationPerformedMixIn::setArticGes(std::string _articges) {
    MeiAttribute *a = new MeiAttribute("artic.ges", _articges);
    b->addAttribute(a);
};

bool mei::Mei_articulationPerformedMixIn::hasArticGes() {
    return b->hasAttribute("artic.ges");
};

void mei::Mei_articulationPerformedMixIn::removeArticGes() {
    b->removeAttribute("artic.ges");
};

/* include <artic.gesmixin> */
mei::Mei_augmentdotsMixIn::Mei_augmentdotsMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_augmentdotsMixIn::~Mei_augmentdotsMixIn() {}
MeiAttribute* mei::Mei_augmentdotsMixIn::getDots() {
    if (!b->hasAttribute("dots")) {
        throw AttributeNotFoundException("dots");
    }
    return b->getAttribute("dots");
};

void mei::Mei_augmentdotsMixIn::setDots(std::string _dots) {
    MeiAttribute *a = new MeiAttribute("dots", _dots);
    b->addAttribute(a);
};

bool mei::Mei_augmentdotsMixIn::hasDots() {
    return b->hasAttribute("dots");
};

void mei::Mei_augmentdotsMixIn::removeDots() {
    b->removeAttribute("dots");
};

/* include <dotsmixin> */
mei::Mei_authorizedMixIn::Mei_authorizedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_authorizedMixIn::~Mei_authorizedMixIn() {}
MeiAttribute* mei::Mei_authorizedMixIn::getAuthority() {
    if (!b->hasAttribute("authority")) {
        throw AttributeNotFoundException("authority");
    }
    return b->getAttribute("authority");
};

void mei::Mei_authorizedMixIn::setAuthority(std::string _authority) {
    MeiAttribute *a = new MeiAttribute("authority", _authority);
    b->addAttribute(a);
};

bool mei::Mei_authorizedMixIn::hasAuthority() {
    return b->hasAttribute("authority");
};

void mei::Mei_authorizedMixIn::removeAuthority() {
    b->removeAttribute("authority");
};
MeiAttribute* mei::Mei_authorizedMixIn::getAuthURI() {
    if (!b->hasAttribute("authURI")) {
        throw AttributeNotFoundException("authURI");
    }
    return b->getAttribute("authURI");
};

void mei::Mei_authorizedMixIn::setAuthURI(std::string _authURI) {
    MeiAttribute *a = new MeiAttribute("authURI", _authURI);
    b->addAttribute(a);
};

bool mei::Mei_authorizedMixIn::hasAuthURI() {
    return b->hasAttribute("authURI");
};

void mei::Mei_authorizedMixIn::removeAuthURI() {
    b->removeAttribute("authURI");
};

/* include <authURImixin> */
mei::Mei_barLineLogMixIn::Mei_barLineLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_barLineLogMixIn::~Mei_barLineLogMixIn() {}
MeiAttribute* mei::Mei_barLineLogMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::Mei_barLineLogMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::Mei_barLineLogMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::Mei_barLineLogMixIn::removeRend() {
    b->removeAttribute("rend");
};

/* include <rendmixin> */
mei::Mei_barplacementMixIn::Mei_barplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_barplacementMixIn::~Mei_barplacementMixIn() {}
MeiAttribute* mei::Mei_barplacementMixIn::getBarplace() {
    if (!b->hasAttribute("barplace")) {
        throw AttributeNotFoundException("barplace");
    }
    return b->getAttribute("barplace");
};

void mei::Mei_barplacementMixIn::setBarplace(std::string _barplace) {
    MeiAttribute *a = new MeiAttribute("barplace", _barplace);
    b->addAttribute(a);
};

bool mei::Mei_barplacementMixIn::hasBarplace() {
    return b->hasAttribute("barplace");
};

void mei::Mei_barplacementMixIn::removeBarplace() {
    b->removeAttribute("barplace");
};
MeiAttribute* mei::Mei_barplacementMixIn::getTaktplace() {
    if (!b->hasAttribute("taktplace")) {
        throw AttributeNotFoundException("taktplace");
    }
    return b->getAttribute("taktplace");
};

void mei::Mei_barplacementMixIn::setTaktplace(std::string _taktplace) {
    MeiAttribute *a = new MeiAttribute("taktplace", _taktplace);
    b->addAttribute(a);
};

bool mei::Mei_barplacementMixIn::hasTaktplace() {
    return b->hasAttribute("taktplace");
};

void mei::Mei_barplacementMixIn::removeTaktplace() {
    b->removeAttribute("taktplace");
};

/* include <taktplacemixin> */
mei::Mei_beamingVisMixIn::Mei_beamingVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_beamingVisMixIn::~Mei_beamingVisMixIn() {}
MeiAttribute* mei::Mei_beamingVisMixIn::getBeamRend() {
    if (!b->hasAttribute("beam.rend")) {
        throw AttributeNotFoundException("beam.rend");
    }
    return b->getAttribute("beam.rend");
};

void mei::Mei_beamingVisMixIn::setBeamRend(std::string _beamrend) {
    MeiAttribute *a = new MeiAttribute("beam.rend", _beamrend);
    b->addAttribute(a);
};

bool mei::Mei_beamingVisMixIn::hasBeamRend() {
    return b->hasAttribute("beam.rend");
};

void mei::Mei_beamingVisMixIn::removeBeamRend() {
    b->removeAttribute("beam.rend");
};
MeiAttribute* mei::Mei_beamingVisMixIn::getBeamSlope() {
    if (!b->hasAttribute("beam.slope")) {
        throw AttributeNotFoundException("beam.slope");
    }
    return b->getAttribute("beam.slope");
};

void mei::Mei_beamingVisMixIn::setBeamSlope(std::string _beamslope) {
    MeiAttribute *a = new MeiAttribute("beam.slope", _beamslope);
    b->addAttribute(a);
};

bool mei::Mei_beamingVisMixIn::hasBeamSlope() {
    return b->hasAttribute("beam.slope");
};

void mei::Mei_beamingVisMixIn::removeBeamSlope() {
    b->removeAttribute("beam.slope");
};

/* include <beam.slopemixin> */
mei::Mei_biblMixIn::Mei_biblMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_biblMixIn::~Mei_biblMixIn() {}
MeiAttribute* mei::Mei_biblMixIn::getAnalog() {
    if (!b->hasAttribute("analog")) {
        throw AttributeNotFoundException("analog");
    }
    return b->getAttribute("analog");
};

void mei::Mei_biblMixIn::setAnalog(std::string _analog) {
    MeiAttribute *a = new MeiAttribute("analog", _analog);
    b->addAttribute(a);
};

bool mei::Mei_biblMixIn::hasAnalog() {
    return b->hasAttribute("analog");
};

void mei::Mei_biblMixIn::removeAnalog() {
    b->removeAttribute("analog");
};

/* include <analogmixin> */
mei::Mei_calendaredMixIn::Mei_calendaredMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_calendaredMixIn::~Mei_calendaredMixIn() {}
MeiAttribute* mei::Mei_calendaredMixIn::getCalendar() {
    if (!b->hasAttribute("calendar")) {
        throw AttributeNotFoundException("calendar");
    }
    return b->getAttribute("calendar");
};

void mei::Mei_calendaredMixIn::setCalendar(std::string _calendar) {
    MeiAttribute *a = new MeiAttribute("calendar", _calendar);
    b->addAttribute(a);
};

bool mei::Mei_calendaredMixIn::hasCalendar() {
    return b->hasAttribute("calendar");
};

void mei::Mei_calendaredMixIn::removeCalendar() {
    b->removeAttribute("calendar");
};

/* include <calendarmixin> */
mei::Mei_canonicalMixIn::Mei_canonicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_canonicalMixIn::~Mei_canonicalMixIn() {}
MeiAttribute* mei::Mei_canonicalMixIn::getDbkey() {
    if (!b->hasAttribute("dbkey")) {
        throw AttributeNotFoundException("dbkey");
    }
    return b->getAttribute("dbkey");
};

void mei::Mei_canonicalMixIn::setDbkey(std::string _dbkey) {
    MeiAttribute *a = new MeiAttribute("dbkey", _dbkey);
    b->addAttribute(a);
};

bool mei::Mei_canonicalMixIn::hasDbkey() {
    return b->hasAttribute("dbkey");
};

void mei::Mei_canonicalMixIn::removeDbkey() {
    b->removeAttribute("dbkey");
};

/* include <dbkeymixin> */
mei::Mei_chordVisMixIn::Mei_chordVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_chordVisMixIn::~Mei_chordVisMixIn() {}
MeiAttribute* mei::Mei_chordVisMixIn::getCluster() {
    if (!b->hasAttribute("cluster")) {
        throw AttributeNotFoundException("cluster");
    }
    return b->getAttribute("cluster");
};

void mei::Mei_chordVisMixIn::setCluster(std::string _cluster) {
    MeiAttribute *a = new MeiAttribute("cluster", _cluster);
    b->addAttribute(a);
};

bool mei::Mei_chordVisMixIn::hasCluster() {
    return b->hasAttribute("cluster");
};

void mei::Mei_chordVisMixIn::removeCluster() {
    b->removeAttribute("cluster");
};

/* include <clustermixin> */
mei::Mei_clefLogMixIn::Mei_clefLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_clefLogMixIn::~Mei_clefLogMixIn() {}
MeiAttribute* mei::Mei_clefLogMixIn::getCautionary() {
    if (!b->hasAttribute("cautionary")) {
        throw AttributeNotFoundException("cautionary");
    }
    return b->getAttribute("cautionary");
};

void mei::Mei_clefLogMixIn::setCautionary(std::string _cautionary) {
    MeiAttribute *a = new MeiAttribute("cautionary", _cautionary);
    b->addAttribute(a);
};

bool mei::Mei_clefLogMixIn::hasCautionary() {
    return b->hasAttribute("cautionary");
};

void mei::Mei_clefLogMixIn::removeCautionary() {
    b->removeAttribute("cautionary");
};

/* include <cautionarymixin> */
mei::Mei_cleffingLogMixIn::Mei_cleffingLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_cleffingLogMixIn::~Mei_cleffingLogMixIn() {}
MeiAttribute* mei::Mei_cleffingLogMixIn::getClefShape() {
    if (!b->hasAttribute("clef.shape")) {
        throw AttributeNotFoundException("clef.shape");
    }
    return b->getAttribute("clef.shape");
};

void mei::Mei_cleffingLogMixIn::setClefShape(std::string _clefshape) {
    MeiAttribute *a = new MeiAttribute("clef.shape", _clefshape);
    b->addAttribute(a);
};

bool mei::Mei_cleffingLogMixIn::hasClefShape() {
    return b->hasAttribute("clef.shape");
};

void mei::Mei_cleffingLogMixIn::removeClefShape() {
    b->removeAttribute("clef.shape");
};
MeiAttribute* mei::Mei_cleffingLogMixIn::getClefLine() {
    if (!b->hasAttribute("clef.line")) {
        throw AttributeNotFoundException("clef.line");
    }
    return b->getAttribute("clef.line");
};

void mei::Mei_cleffingLogMixIn::setClefLine(std::string _clefline) {
    MeiAttribute *a = new MeiAttribute("clef.line", _clefline);
    b->addAttribute(a);
};

bool mei::Mei_cleffingLogMixIn::hasClefLine() {
    return b->hasAttribute("clef.line");
};

void mei::Mei_cleffingLogMixIn::removeClefLine() {
    b->removeAttribute("clef.line");
};
MeiAttribute* mei::Mei_cleffingLogMixIn::getClefDis() {
    if (!b->hasAttribute("clef.dis")) {
        throw AttributeNotFoundException("clef.dis");
    }
    return b->getAttribute("clef.dis");
};

void mei::Mei_cleffingLogMixIn::setClefDis(std::string _clefdis) {
    MeiAttribute *a = new MeiAttribute("clef.dis", _clefdis);
    b->addAttribute(a);
};

bool mei::Mei_cleffingLogMixIn::hasClefDis() {
    return b->hasAttribute("clef.dis");
};

void mei::Mei_cleffingLogMixIn::removeClefDis() {
    b->removeAttribute("clef.dis");
};
MeiAttribute* mei::Mei_cleffingLogMixIn::getClefDisPlace() {
    if (!b->hasAttribute("clef.dis.place")) {
        throw AttributeNotFoundException("clef.dis.place");
    }
    return b->getAttribute("clef.dis.place");
};

void mei::Mei_cleffingLogMixIn::setClefDisPlace(std::string _clefdisplace) {
    MeiAttribute *a = new MeiAttribute("clef.dis.place", _clefdisplace);
    b->addAttribute(a);
};

bool mei::Mei_cleffingLogMixIn::hasClefDisPlace() {
    return b->hasAttribute("clef.dis.place");
};

void mei::Mei_cleffingLogMixIn::removeClefDisPlace() {
    b->removeAttribute("clef.dis.place");
};

/* include <clef.dis.placemixin> */
mei::Mei_cleffingVisMixIn::Mei_cleffingVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_cleffingVisMixIn::~Mei_cleffingVisMixIn() {}
MeiAttribute* mei::Mei_cleffingVisMixIn::getClefColor() {
    if (!b->hasAttribute("clef.color")) {
        throw AttributeNotFoundException("clef.color");
    }
    return b->getAttribute("clef.color");
};

void mei::Mei_cleffingVisMixIn::setClefColor(std::string _clefcolor) {
    MeiAttribute *a = new MeiAttribute("clef.color", _clefcolor);
    b->addAttribute(a);
};

bool mei::Mei_cleffingVisMixIn::hasClefColor() {
    return b->hasAttribute("clef.color");
};

void mei::Mei_cleffingVisMixIn::removeClefColor() {
    b->removeAttribute("clef.color");
};
MeiAttribute* mei::Mei_cleffingVisMixIn::getClefVisible() {
    if (!b->hasAttribute("clef.visible")) {
        throw AttributeNotFoundException("clef.visible");
    }
    return b->getAttribute("clef.visible");
};

void mei::Mei_cleffingVisMixIn::setClefVisible(std::string _clefvisible) {
    MeiAttribute *a = new MeiAttribute("clef.visible", _clefvisible);
    b->addAttribute(a);
};

bool mei::Mei_cleffingVisMixIn::hasClefVisible() {
    return b->hasAttribute("clef.visible");
};

void mei::Mei_cleffingVisMixIn::removeClefVisible() {
    b->removeAttribute("clef.visible");
};

/* include <clef.visiblemixin> */
mei::Mei_clefshapeMixIn::Mei_clefshapeMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_clefshapeMixIn::~Mei_clefshapeMixIn() {}
MeiAttribute* mei::Mei_clefshapeMixIn::getShape() {
    if (!b->hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->getAttribute("shape");
};

void mei::Mei_clefshapeMixIn::setShape(std::string _shape) {
    MeiAttribute *a = new MeiAttribute("shape", _shape);
    b->addAttribute(a);
};

bool mei::Mei_clefshapeMixIn::hasShape() {
    return b->hasAttribute("shape");
};

void mei::Mei_clefshapeMixIn::removeShape() {
    b->removeAttribute("shape");
};

/* include <shapemixin> */
mei::Mei_colorMixIn::Mei_colorMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_colorMixIn::~Mei_colorMixIn() {}
MeiAttribute* mei::Mei_colorMixIn::getColor() {
    if (!b->hasAttribute("color")) {
        throw AttributeNotFoundException("color");
    }
    return b->getAttribute("color");
};

void mei::Mei_colorMixIn::setColor(std::string _color) {
    MeiAttribute *a = new MeiAttribute("color", _color);
    b->addAttribute(a);
};

bool mei::Mei_colorMixIn::hasColor() {
    return b->hasAttribute("color");
};

void mei::Mei_colorMixIn::removeColor() {
    b->removeAttribute("color");
};

/* include <colormixin> */
mei::Mei_colorationMixIn::Mei_colorationMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_colorationMixIn::~Mei_colorationMixIn() {}
MeiAttribute* mei::Mei_colorationMixIn::getColored() {
    if (!b->hasAttribute("colored")) {
        throw AttributeNotFoundException("colored");
    }
    return b->getAttribute("colored");
};

void mei::Mei_colorationMixIn::setColored(std::string _colored) {
    MeiAttribute *a = new MeiAttribute("colored", _colored);
    b->addAttribute(a);
};

bool mei::Mei_colorationMixIn::hasColored() {
    return b->hasAttribute("colored");
};

void mei::Mei_colorationMixIn::removeColored() {
    b->removeAttribute("colored");
};

/* include <coloredmixin> */
mei::Mei_commonMixIn::Mei_commonMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_commonMixIn::~Mei_commonMixIn() {}
MeiAttribute* mei::Mei_commonMixIn::getLabel() {
    if (!b->hasAttribute("label")) {
        throw AttributeNotFoundException("label");
    }
    return b->getAttribute("label");
};

void mei::Mei_commonMixIn::setLabel(std::string _label) {
    MeiAttribute *a = new MeiAttribute("label", _label);
    b->addAttribute(a);
};

bool mei::Mei_commonMixIn::hasLabel() {
    return b->hasAttribute("label");
};

void mei::Mei_commonMixIn::removeLabel() {
    b->removeAttribute("label");
};
MeiAttribute* mei::Mei_commonMixIn::getN() {
    if (!b->hasAttribute("n")) {
        throw AttributeNotFoundException("n");
    }
    return b->getAttribute("n");
};

void mei::Mei_commonMixIn::setN(std::string _n) {
    MeiAttribute *a = new MeiAttribute("n", _n);
    b->addAttribute(a);
};

bool mei::Mei_commonMixIn::hasN() {
    return b->hasAttribute("n");
};

void mei::Mei_commonMixIn::removeN() {
    b->removeAttribute("n");
};
MeiAttribute* mei::Mei_commonMixIn::getBase() {
    if (!b->hasAttribute("base")) {
        throw AttributeNotFoundException("base");
    }
    return b->getAttribute("base");
};

void mei::Mei_commonMixIn::setBase(std::string _base) {
    MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(s, "base", _base);
    b->addAttribute(a);
};

bool mei::Mei_commonMixIn::hasBase() {
    return b->hasAttribute("base");
};

void mei::Mei_commonMixIn::removeBase() {
    b->removeAttribute("base");
};

/* include <basemixin> */
mei::Mei_coordinatedMixIn::Mei_coordinatedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_coordinatedMixIn::~Mei_coordinatedMixIn() {}
MeiAttribute* mei::Mei_coordinatedMixIn::getUlx() {
    if (!b->hasAttribute("ulx")) {
        throw AttributeNotFoundException("ulx");
    }
    return b->getAttribute("ulx");
};

void mei::Mei_coordinatedMixIn::setUlx(std::string _ulx) {
    MeiAttribute *a = new MeiAttribute("ulx", _ulx);
    b->addAttribute(a);
};

bool mei::Mei_coordinatedMixIn::hasUlx() {
    return b->hasAttribute("ulx");
};

void mei::Mei_coordinatedMixIn::removeUlx() {
    b->removeAttribute("ulx");
};
MeiAttribute* mei::Mei_coordinatedMixIn::getUly() {
    if (!b->hasAttribute("uly")) {
        throw AttributeNotFoundException("uly");
    }
    return b->getAttribute("uly");
};

void mei::Mei_coordinatedMixIn::setUly(std::string _uly) {
    MeiAttribute *a = new MeiAttribute("uly", _uly);
    b->addAttribute(a);
};

bool mei::Mei_coordinatedMixIn::hasUly() {
    return b->hasAttribute("uly");
};

void mei::Mei_coordinatedMixIn::removeUly() {
    b->removeAttribute("uly");
};
MeiAttribute* mei::Mei_coordinatedMixIn::getLrx() {
    if (!b->hasAttribute("lrx")) {
        throw AttributeNotFoundException("lrx");
    }
    return b->getAttribute("lrx");
};

void mei::Mei_coordinatedMixIn::setLrx(std::string _lrx) {
    MeiAttribute *a = new MeiAttribute("lrx", _lrx);
    b->addAttribute(a);
};

bool mei::Mei_coordinatedMixIn::hasLrx() {
    return b->hasAttribute("lrx");
};

void mei::Mei_coordinatedMixIn::removeLrx() {
    b->removeAttribute("lrx");
};
MeiAttribute* mei::Mei_coordinatedMixIn::getLry() {
    if (!b->hasAttribute("lry")) {
        throw AttributeNotFoundException("lry");
    }
    return b->getAttribute("lry");
};

void mei::Mei_coordinatedMixIn::setLry(std::string _lry) {
    MeiAttribute *a = new MeiAttribute("lry", _lry);
    b->addAttribute(a);
};

bool mei::Mei_coordinatedMixIn::hasLry() {
    return b->hasAttribute("lry");
};

void mei::Mei_coordinatedMixIn::removeLry() {
    b->removeAttribute("lry");
};

/* include <lrymixin> */
mei::Mei_curvatureMixIn::Mei_curvatureMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_curvatureMixIn::~Mei_curvatureMixIn() {}
MeiAttribute* mei::Mei_curvatureMixIn::getBezier() {
    if (!b->hasAttribute("bezier")) {
        throw AttributeNotFoundException("bezier");
    }
    return b->getAttribute("bezier");
};

void mei::Mei_curvatureMixIn::setBezier(std::string _bezier) {
    MeiAttribute *a = new MeiAttribute("bezier", _bezier);
    b->addAttribute(a);
};

bool mei::Mei_curvatureMixIn::hasBezier() {
    return b->hasAttribute("bezier");
};

void mei::Mei_curvatureMixIn::removeBezier() {
    b->removeAttribute("bezier");
};
MeiAttribute* mei::Mei_curvatureMixIn::getBulge() {
    if (!b->hasAttribute("bulge")) {
        throw AttributeNotFoundException("bulge");
    }
    return b->getAttribute("bulge");
};

void mei::Mei_curvatureMixIn::setBulge(std::string _bulge) {
    MeiAttribute *a = new MeiAttribute("bulge", _bulge);
    b->addAttribute(a);
};

bool mei::Mei_curvatureMixIn::hasBulge() {
    return b->hasAttribute("bulge");
};

void mei::Mei_curvatureMixIn::removeBulge() {
    b->removeAttribute("bulge");
};
MeiAttribute* mei::Mei_curvatureMixIn::getCurvedir() {
    if (!b->hasAttribute("curvedir")) {
        throw AttributeNotFoundException("curvedir");
    }
    return b->getAttribute("curvedir");
};

void mei::Mei_curvatureMixIn::setCurvedir(std::string _curvedir) {
    MeiAttribute *a = new MeiAttribute("curvedir", _curvedir);
    b->addAttribute(a);
};

bool mei::Mei_curvatureMixIn::hasCurvedir() {
    return b->hasAttribute("curvedir");
};

void mei::Mei_curvatureMixIn::removeCurvedir() {
    b->removeAttribute("curvedir");
};

/* include <curvedirmixin> */
mei::Mei_curverendMixIn::Mei_curverendMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_curverendMixIn::~Mei_curverendMixIn() {}
MeiAttribute* mei::Mei_curverendMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::Mei_curverendMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::Mei_curverendMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::Mei_curverendMixIn::removeRend() {
    b->removeAttribute("rend");
};

/* include <rendmixin> */
mei::Mei_custosLogMixIn::Mei_custosLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_custosLogMixIn::~Mei_custosLogMixIn() {}
MeiAttribute* mei::Mei_custosLogMixIn::getTarget() {
    if (!b->hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return b->getAttribute("target");
};

void mei::Mei_custosLogMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    b->addAttribute(a);
};

bool mei::Mei_custosLogMixIn::hasTarget() {
    return b->hasAttribute("target");
};

void mei::Mei_custosLogMixIn::removeTarget() {
    b->removeAttribute("target");
};

/* include <targetmixin> */
mei::Mei_datableMixIn::Mei_datableMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_datableMixIn::~Mei_datableMixIn() {}
MeiAttribute* mei::Mei_datableMixIn::getEnddate() {
    if (!b->hasAttribute("enddate")) {
        throw AttributeNotFoundException("enddate");
    }
    return b->getAttribute("enddate");
};

void mei::Mei_datableMixIn::setEnddate(std::string _enddate) {
    MeiAttribute *a = new MeiAttribute("enddate", _enddate);
    b->addAttribute(a);
};

bool mei::Mei_datableMixIn::hasEnddate() {
    return b->hasAttribute("enddate");
};

void mei::Mei_datableMixIn::removeEnddate() {
    b->removeAttribute("enddate");
};
MeiAttribute* mei::Mei_datableMixIn::getIsodate() {
    if (!b->hasAttribute("isodate")) {
        throw AttributeNotFoundException("isodate");
    }
    return b->getAttribute("isodate");
};

void mei::Mei_datableMixIn::setIsodate(std::string _isodate) {
    MeiAttribute *a = new MeiAttribute("isodate", _isodate);
    b->addAttribute(a);
};

bool mei::Mei_datableMixIn::hasIsodate() {
    return b->hasAttribute("isodate");
};

void mei::Mei_datableMixIn::removeIsodate() {
    b->removeAttribute("isodate");
};
MeiAttribute* mei::Mei_datableMixIn::getNotafter() {
    if (!b->hasAttribute("notafter")) {
        throw AttributeNotFoundException("notafter");
    }
    return b->getAttribute("notafter");
};

void mei::Mei_datableMixIn::setNotafter(std::string _notafter) {
    MeiAttribute *a = new MeiAttribute("notafter", _notafter);
    b->addAttribute(a);
};

bool mei::Mei_datableMixIn::hasNotafter() {
    return b->hasAttribute("notafter");
};

void mei::Mei_datableMixIn::removeNotafter() {
    b->removeAttribute("notafter");
};
MeiAttribute* mei::Mei_datableMixIn::getNotbefore() {
    if (!b->hasAttribute("notbefore")) {
        throw AttributeNotFoundException("notbefore");
    }
    return b->getAttribute("notbefore");
};

void mei::Mei_datableMixIn::setNotbefore(std::string _notbefore) {
    MeiAttribute *a = new MeiAttribute("notbefore", _notbefore);
    b->addAttribute(a);
};

bool mei::Mei_datableMixIn::hasNotbefore() {
    return b->hasAttribute("notbefore");
};

void mei::Mei_datableMixIn::removeNotbefore() {
    b->removeAttribute("notbefore");
};
MeiAttribute* mei::Mei_datableMixIn::getStartdate() {
    if (!b->hasAttribute("startdate")) {
        throw AttributeNotFoundException("startdate");
    }
    return b->getAttribute("startdate");
};

void mei::Mei_datableMixIn::setStartdate(std::string _startdate) {
    MeiAttribute *a = new MeiAttribute("startdate", _startdate);
    b->addAttribute(a);
};

bool mei::Mei_datableMixIn::hasStartdate() {
    return b->hasAttribute("startdate");
};

void mei::Mei_datableMixIn::removeStartdate() {
    b->removeAttribute("startdate");
};

/* include <startdatemixin> */
mei::Mei_datapointingMixIn::Mei_datapointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_datapointingMixIn::~Mei_datapointingMixIn() {}
MeiAttribute* mei::Mei_datapointingMixIn::getData() {
    if (!b->hasAttribute("data")) {
        throw AttributeNotFoundException("data");
    }
    return b->getAttribute("data");
};

void mei::Mei_datapointingMixIn::setData(std::string _data) {
    MeiAttribute *a = new MeiAttribute("data", _data);
    b->addAttribute(a);
};

bool mei::Mei_datapointingMixIn::hasData() {
    return b->hasAttribute("data");
};

void mei::Mei_datapointingMixIn::removeData() {
    b->removeAttribute("data");
};

/* include <datamixin> */
mei::Mei_declaringMixIn::Mei_declaringMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_declaringMixIn::~Mei_declaringMixIn() {}
MeiAttribute* mei::Mei_declaringMixIn::getDecls() {
    if (!b->hasAttribute("decls")) {
        throw AttributeNotFoundException("decls");
    }
    return b->getAttribute("decls");
};

void mei::Mei_declaringMixIn::setDecls(std::string _decls) {
    MeiAttribute *a = new MeiAttribute("decls", _decls);
    b->addAttribute(a);
};

bool mei::Mei_declaringMixIn::hasDecls() {
    return b->hasAttribute("decls");
};

void mei::Mei_declaringMixIn::removeDecls() {
    b->removeAttribute("decls");
};

/* include <declsmixin> */
mei::Mei_distancesMixIn::Mei_distancesMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_distancesMixIn::~Mei_distancesMixIn() {}
MeiAttribute* mei::Mei_distancesMixIn::getDynamDist() {
    if (!b->hasAttribute("dynam.dist")) {
        throw AttributeNotFoundException("dynam.dist");
    }
    return b->getAttribute("dynam.dist");
};

void mei::Mei_distancesMixIn::setDynamDist(std::string _dynamdist) {
    MeiAttribute *a = new MeiAttribute("dynam.dist", _dynamdist);
    b->addAttribute(a);
};

bool mei::Mei_distancesMixIn::hasDynamDist() {
    return b->hasAttribute("dynam.dist");
};

void mei::Mei_distancesMixIn::removeDynamDist() {
    b->removeAttribute("dynam.dist");
};
MeiAttribute* mei::Mei_distancesMixIn::getHarmDist() {
    if (!b->hasAttribute("harm.dist")) {
        throw AttributeNotFoundException("harm.dist");
    }
    return b->getAttribute("harm.dist");
};

void mei::Mei_distancesMixIn::setHarmDist(std::string _harmdist) {
    MeiAttribute *a = new MeiAttribute("harm.dist", _harmdist);
    b->addAttribute(a);
};

bool mei::Mei_distancesMixIn::hasHarmDist() {
    return b->hasAttribute("harm.dist");
};

void mei::Mei_distancesMixIn::removeHarmDist() {
    b->removeAttribute("harm.dist");
};
MeiAttribute* mei::Mei_distancesMixIn::getTextDist() {
    if (!b->hasAttribute("text.dist")) {
        throw AttributeNotFoundException("text.dist");
    }
    return b->getAttribute("text.dist");
};

void mei::Mei_distancesMixIn::setTextDist(std::string _textdist) {
    MeiAttribute *a = new MeiAttribute("text.dist", _textdist);
    b->addAttribute(a);
};

bool mei::Mei_distancesMixIn::hasTextDist() {
    return b->hasAttribute("text.dist");
};

void mei::Mei_distancesMixIn::removeTextDist() {
    b->removeAttribute("text.dist");
};

/* include <text.distmixin> */
mei::Mei_dotLogMixIn::Mei_dotLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_dotLogMixIn::~Mei_dotLogMixIn() {}
MeiAttribute* mei::Mei_dotLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::Mei_dotLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::Mei_dotLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::Mei_dotLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::Mei_durationDefaultMixIn::Mei_durationDefaultMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_durationDefaultMixIn::~Mei_durationDefaultMixIn() {}
MeiAttribute* mei::Mei_durationDefaultMixIn::getDurDefault() {
    if (!b->hasAttribute("dur.default")) {
        throw AttributeNotFoundException("dur.default");
    }
    return b->getAttribute("dur.default");
};

void mei::Mei_durationDefaultMixIn::setDurDefault(std::string _durdefault) {
    MeiAttribute *a = new MeiAttribute("dur.default", _durdefault);
    b->addAttribute(a);
};

bool mei::Mei_durationDefaultMixIn::hasDurDefault() {
    return b->hasAttribute("dur.default");
};

void mei::Mei_durationDefaultMixIn::removeDurDefault() {
    b->removeAttribute("dur.default");
};

/* include <dur.defaultmixin> */
mei::Mei_durationMusicalMixIn::Mei_durationMusicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_durationMusicalMixIn::~Mei_durationMusicalMixIn() {}
MeiAttribute* mei::Mei_durationMusicalMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::Mei_durationMusicalMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::Mei_durationMusicalMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::Mei_durationMusicalMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::Mei_durationPerformedMixIn::Mei_durationPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_durationPerformedMixIn::~Mei_durationPerformedMixIn() {}
MeiAttribute* mei::Mei_durationPerformedMixIn::getDurGes() {
    if (!b->hasAttribute("dur.ges")) {
        throw AttributeNotFoundException("dur.ges");
    }
    return b->getAttribute("dur.ges");
};

void mei::Mei_durationPerformedMixIn::setDurGes(std::string _durges) {
    MeiAttribute *a = new MeiAttribute("dur.ges", _durges);
    b->addAttribute(a);
};

bool mei::Mei_durationPerformedMixIn::hasDurGes() {
    return b->hasAttribute("dur.ges");
};

void mei::Mei_durationPerformedMixIn::removeDurGes() {
    b->removeAttribute("dur.ges");
};

/* include <dur.gesmixin> */
mei::Mei_durationRatioMixIn::Mei_durationRatioMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_durationRatioMixIn::~Mei_durationRatioMixIn() {}
MeiAttribute* mei::Mei_durationRatioMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->getAttribute("num");
};

void mei::Mei_durationRatioMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::Mei_durationRatioMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::Mei_durationRatioMixIn::removeNum() {
    b->removeAttribute("num");
};
MeiAttribute* mei::Mei_durationRatioMixIn::getNumbase() {
    if (!b->hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->getAttribute("numbase");
};

void mei::Mei_durationRatioMixIn::setNumbase(std::string _numbase) {
    MeiAttribute *a = new MeiAttribute("numbase", _numbase);
    b->addAttribute(a);
};

bool mei::Mei_durationRatioMixIn::hasNumbase() {
    return b->hasAttribute("numbase");
};

void mei::Mei_durationRatioMixIn::removeNumbase() {
    b->removeAttribute("numbase");
};

/* include <numbasemixin> */
mei::Mei_durationTimestampMixIn::Mei_durationTimestampMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_durationTimestampMixIn::~Mei_durationTimestampMixIn() {}
MeiAttribute* mei::Mei_durationTimestampMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::Mei_durationTimestampMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::Mei_durationTimestampMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::Mei_durationTimestampMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::Mei_enclosingcharsMixIn::Mei_enclosingcharsMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_enclosingcharsMixIn::~Mei_enclosingcharsMixIn() {}
MeiAttribute* mei::Mei_enclosingcharsMixIn::getEnclose() {
    if (!b->hasAttribute("enclose")) {
        throw AttributeNotFoundException("enclose");
    }
    return b->getAttribute("enclose");
};

void mei::Mei_enclosingcharsMixIn::setEnclose(std::string _enclose) {
    MeiAttribute *a = new MeiAttribute("enclose", _enclose);
    b->addAttribute(a);
};

bool mei::Mei_enclosingcharsMixIn::hasEnclose() {
    return b->hasAttribute("enclose");
};

void mei::Mei_enclosingcharsMixIn::removeEnclose() {
    b->removeAttribute("enclose");
};

/* include <enclosemixin> */
mei::Mei_fermatapresentMixIn::Mei_fermatapresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_fermatapresentMixIn::~Mei_fermatapresentMixIn() {}
MeiAttribute* mei::Mei_fermatapresentMixIn::getFermata() {
    if (!b->hasAttribute("fermata")) {
        throw AttributeNotFoundException("fermata");
    }
    return b->getAttribute("fermata");
};

void mei::Mei_fermatapresentMixIn::setFermata(std::string _fermata) {
    MeiAttribute *a = new MeiAttribute("fermata", _fermata);
    b->addAttribute(a);
};

bool mei::Mei_fermatapresentMixIn::hasFermata() {
    return b->hasAttribute("fermata");
};

void mei::Mei_fermatapresentMixIn::removeFermata() {
    b->removeAttribute("fermata");
};

/* include <fermatamixin> */
mei::Mei_handidentMixIn::Mei_handidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_handidentMixIn::~Mei_handidentMixIn() {}
MeiAttribute* mei::Mei_handidentMixIn::getHand() {
    if (!b->hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->getAttribute("hand");
};

void mei::Mei_handidentMixIn::setHand(std::string _hand) {
    MeiAttribute *a = new MeiAttribute("hand", _hand);
    b->addAttribute(a);
};

bool mei::Mei_handidentMixIn::hasHand() {
    return b->hasAttribute("hand");
};

void mei::Mei_handidentMixIn::removeHand() {
    b->removeAttribute("hand");
};

/* include <handmixin> */
mei::Mei_horizontalalignMixIn::Mei_horizontalalignMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_horizontalalignMixIn::~Mei_horizontalalignMixIn() {}
MeiAttribute* mei::Mei_horizontalalignMixIn::getHalign() {
    if (!b->hasAttribute("halign")) {
        throw AttributeNotFoundException("halign");
    }
    return b->getAttribute("halign");
};

void mei::Mei_horizontalalignMixIn::setHalign(std::string _halign) {
    MeiAttribute *a = new MeiAttribute("halign", _halign);
    b->addAttribute(a);
};

bool mei::Mei_horizontalalignMixIn::hasHalign() {
    return b->hasAttribute("halign");
};

void mei::Mei_horizontalalignMixIn::removeHalign() {
    b->removeAttribute("halign");
};

/* include <halignmixin> */
mei::Mei_idMixIn::Mei_idMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_idMixIn::~Mei_idMixIn() {}
MeiAttribute* mei::Mei_idMixIn::getId() {
    if (!b->hasAttribute("id")) {
        throw AttributeNotFoundException("id");
    }
    return b->getAttribute("id");
};

void mei::Mei_idMixIn::setId(std::string _id) {
    MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(s, "id", _id);
    b->addAttribute(a);
};

bool mei::Mei_idMixIn::hasId() {
    return b->hasAttribute("id");
};

void mei::Mei_idMixIn::removeId() {
    b->removeAttribute("id");
};

/* include <idmixin> */
mei::Mei_instrumentidentMixIn::Mei_instrumentidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_instrumentidentMixIn::~Mei_instrumentidentMixIn() {}
MeiAttribute* mei::Mei_instrumentidentMixIn::getInstr() {
    if (!b->hasAttribute("instr")) {
        throw AttributeNotFoundException("instr");
    }
    return b->getAttribute("instr");
};

void mei::Mei_instrumentidentMixIn::setInstr(std::string _instr) {
    MeiAttribute *a = new MeiAttribute("instr", _instr);
    b->addAttribute(a);
};

bool mei::Mei_instrumentidentMixIn::hasInstr() {
    return b->hasAttribute("instr");
};

void mei::Mei_instrumentidentMixIn::removeInstr() {
    b->removeAttribute("instr");
};

/* include <instrmixin> */
mei::Mei_internetmediaMixIn::Mei_internetmediaMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_internetmediaMixIn::~Mei_internetmediaMixIn() {}
MeiAttribute* mei::Mei_internetmediaMixIn::getMimetype() {
    if (!b->hasAttribute("mimetype")) {
        throw AttributeNotFoundException("mimetype");
    }
    return b->getAttribute("mimetype");
};

void mei::Mei_internetmediaMixIn::setMimetype(std::string _mimetype) {
    MeiAttribute *a = new MeiAttribute("mimetype", _mimetype);
    b->addAttribute(a);
};

bool mei::Mei_internetmediaMixIn::hasMimetype() {
    return b->hasAttribute("mimetype");
};

void mei::Mei_internetmediaMixIn::removeMimetype() {
    b->removeAttribute("mimetype");
};

/* include <mimetypemixin> */
mei::Mei_joinedMixIn::Mei_joinedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_joinedMixIn::~Mei_joinedMixIn() {}
MeiAttribute* mei::Mei_joinedMixIn::getJoin() {
    if (!b->hasAttribute("join")) {
        throw AttributeNotFoundException("join");
    }
    return b->getAttribute("join");
};

void mei::Mei_joinedMixIn::setJoin(std::string _join) {
    MeiAttribute *a = new MeiAttribute("join", _join);
    b->addAttribute(a);
};

bool mei::Mei_joinedMixIn::hasJoin() {
    return b->hasAttribute("join");
};

void mei::Mei_joinedMixIn::removeJoin() {
    b->removeAttribute("join");
};

/* include <joinmixin> */
mei::Mei_keySigLogMixIn::Mei_keySigLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_keySigLogMixIn::~Mei_keySigLogMixIn() {}
MeiAttribute* mei::Mei_keySigLogMixIn::getMode() {
    if (!b->hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return b->getAttribute("mode");
};

void mei::Mei_keySigLogMixIn::setMode(std::string _mode) {
    MeiAttribute *a = new MeiAttribute("mode", _mode);
    b->addAttribute(a);
};

bool mei::Mei_keySigLogMixIn::hasMode() {
    return b->hasAttribute("mode");
};

void mei::Mei_keySigLogMixIn::removeMode() {
    b->removeAttribute("mode");
};

/* include <modemixin> */
mei::Mei_keySigDefaultLogMixIn::Mei_keySigDefaultLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_keySigDefaultLogMixIn::~Mei_keySigDefaultLogMixIn() {}
MeiAttribute* mei::Mei_keySigDefaultLogMixIn::getKeyAccid() {
    if (!b->hasAttribute("key.accid")) {
        throw AttributeNotFoundException("key.accid");
    }
    return b->getAttribute("key.accid");
};

void mei::Mei_keySigDefaultLogMixIn::setKeyAccid(std::string _keyaccid) {
    MeiAttribute *a = new MeiAttribute("key.accid", _keyaccid);
    b->addAttribute(a);
};

bool mei::Mei_keySigDefaultLogMixIn::hasKeyAccid() {
    return b->hasAttribute("key.accid");
};

void mei::Mei_keySigDefaultLogMixIn::removeKeyAccid() {
    b->removeAttribute("key.accid");
};
MeiAttribute* mei::Mei_keySigDefaultLogMixIn::getKeyMode() {
    if (!b->hasAttribute("key.mode")) {
        throw AttributeNotFoundException("key.mode");
    }
    return b->getAttribute("key.mode");
};

void mei::Mei_keySigDefaultLogMixIn::setKeyMode(std::string _keymode) {
    MeiAttribute *a = new MeiAttribute("key.mode", _keymode);
    b->addAttribute(a);
};

bool mei::Mei_keySigDefaultLogMixIn::hasKeyMode() {
    return b->hasAttribute("key.mode");
};

void mei::Mei_keySigDefaultLogMixIn::removeKeyMode() {
    b->removeAttribute("key.mode");
};
MeiAttribute* mei::Mei_keySigDefaultLogMixIn::getKeyPname() {
    if (!b->hasAttribute("key.pname")) {
        throw AttributeNotFoundException("key.pname");
    }
    return b->getAttribute("key.pname");
};

void mei::Mei_keySigDefaultLogMixIn::setKeyPname(std::string _keypname) {
    MeiAttribute *a = new MeiAttribute("key.pname", _keypname);
    b->addAttribute(a);
};

bool mei::Mei_keySigDefaultLogMixIn::hasKeyPname() {
    return b->hasAttribute("key.pname");
};

void mei::Mei_keySigDefaultLogMixIn::removeKeyPname() {
    b->removeAttribute("key.pname");
};
MeiAttribute* mei::Mei_keySigDefaultLogMixIn::getKeySig() {
    if (!b->hasAttribute("key.sig")) {
        throw AttributeNotFoundException("key.sig");
    }
    return b->getAttribute("key.sig");
};

void mei::Mei_keySigDefaultLogMixIn::setKeySig(std::string _keysig) {
    MeiAttribute *a = new MeiAttribute("key.sig", _keysig);
    b->addAttribute(a);
};

bool mei::Mei_keySigDefaultLogMixIn::hasKeySig() {
    return b->hasAttribute("key.sig");
};

void mei::Mei_keySigDefaultLogMixIn::removeKeySig() {
    b->removeAttribute("key.sig");
};
MeiAttribute* mei::Mei_keySigDefaultLogMixIn::getKeySigMixed() {
    if (!b->hasAttribute("key.sig.mixed")) {
        throw AttributeNotFoundException("key.sig.mixed");
    }
    return b->getAttribute("key.sig.mixed");
};

void mei::Mei_keySigDefaultLogMixIn::setKeySigMixed(std::string _keysigmixed) {
    MeiAttribute *a = new MeiAttribute("key.sig.mixed", _keysigmixed);
    b->addAttribute(a);
};

bool mei::Mei_keySigDefaultLogMixIn::hasKeySigMixed() {
    return b->hasAttribute("key.sig.mixed");
};

void mei::Mei_keySigDefaultLogMixIn::removeKeySigMixed() {
    b->removeAttribute("key.sig.mixed");
};

/* include <key.sig.mixedmixin> */
mei::Mei_keySigDefaultVisMixIn::Mei_keySigDefaultVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_keySigDefaultVisMixIn::~Mei_keySigDefaultVisMixIn() {}
MeiAttribute* mei::Mei_keySigDefaultVisMixIn::getKeySigShow() {
    if (!b->hasAttribute("key.sig.show")) {
        throw AttributeNotFoundException("key.sig.show");
    }
    return b->getAttribute("key.sig.show");
};

void mei::Mei_keySigDefaultVisMixIn::setKeySigShow(std::string _keysigshow) {
    MeiAttribute *a = new MeiAttribute("key.sig.show", _keysigshow);
    b->addAttribute(a);
};

bool mei::Mei_keySigDefaultVisMixIn::hasKeySigShow() {
    return b->hasAttribute("key.sig.show");
};

void mei::Mei_keySigDefaultVisMixIn::removeKeySigShow() {
    b->removeAttribute("key.sig.show");
};
MeiAttribute* mei::Mei_keySigDefaultVisMixIn::getKeySigShowchange() {
    if (!b->hasAttribute("key.sig.showchange")) {
        throw AttributeNotFoundException("key.sig.showchange");
    }
    return b->getAttribute("key.sig.showchange");
};

void mei::Mei_keySigDefaultVisMixIn::setKeySigShowchange(std::string _keysigshowchange) {
    MeiAttribute *a = new MeiAttribute("key.sig.showchange", _keysigshowchange);
    b->addAttribute(a);
};

bool mei::Mei_keySigDefaultVisMixIn::hasKeySigShowchange() {
    return b->hasAttribute("key.sig.showchange");
};

void mei::Mei_keySigDefaultVisMixIn::removeKeySigShowchange() {
    b->removeAttribute("key.sig.showchange");
};

/* include <key.sig.showchangemixin> */
mei::Mei_labelsAddlMixIn::Mei_labelsAddlMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_labelsAddlMixIn::~Mei_labelsAddlMixIn() {}
MeiAttribute* mei::Mei_labelsAddlMixIn::getLabelAbbr() {
    if (!b->hasAttribute("label.abbr")) {
        throw AttributeNotFoundException("label.abbr");
    }
    return b->getAttribute("label.abbr");
};

void mei::Mei_labelsAddlMixIn::setLabelAbbr(std::string _labelabbr) {
    MeiAttribute *a = new MeiAttribute("label.abbr", _labelabbr);
    b->addAttribute(a);
};

bool mei::Mei_labelsAddlMixIn::hasLabelAbbr() {
    return b->hasAttribute("label.abbr");
};

void mei::Mei_labelsAddlMixIn::removeLabelAbbr() {
    b->removeAttribute("label.abbr");
};

/* include <label.abbrmixin> */
mei::Mei_langMixIn::Mei_langMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_langMixIn::~Mei_langMixIn() {}
MeiAttribute* mei::Mei_langMixIn::getLang() {
    if (!b->hasAttribute("lang")) {
        throw AttributeNotFoundException("lang");
    }
    return b->getAttribute("lang");
};

void mei::Mei_langMixIn::setLang(std::string _lang) {
    MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(s, "lang", _lang);
    b->addAttribute(a);
};

bool mei::Mei_langMixIn::hasLang() {
    return b->hasAttribute("lang");
};

void mei::Mei_langMixIn::removeLang() {
    b->removeAttribute("lang");
};

/* include <langmixin> */
mei::Mei_layerLogMixIn::Mei_layerLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_layerLogMixIn::~Mei_layerLogMixIn() {}
MeiAttribute* mei::Mei_layerLogMixIn::getDef() {
    if (!b->hasAttribute("def")) {
        throw AttributeNotFoundException("def");
    }
    return b->getAttribute("def");
};

void mei::Mei_layerLogMixIn::setDef(std::string _def) {
    MeiAttribute *a = new MeiAttribute("def", _def);
    b->addAttribute(a);
};

bool mei::Mei_layerLogMixIn::hasDef() {
    return b->hasAttribute("def");
};

void mei::Mei_layerLogMixIn::removeDef() {
    b->removeAttribute("def");
};

/* include <defmixin> */
mei::Mei_layeridentMixIn::Mei_layeridentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_layeridentMixIn::~Mei_layeridentMixIn() {}
MeiAttribute* mei::Mei_layeridentMixIn::getLayer() {
    if (!b->hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->getAttribute("layer");
};

void mei::Mei_layeridentMixIn::setLayer(std::string _layer) {
    MeiAttribute *a = new MeiAttribute("layer", _layer);
    b->addAttribute(a);
};

bool mei::Mei_layeridentMixIn::hasLayer() {
    return b->hasAttribute("layer");
};

void mei::Mei_layeridentMixIn::removeLayer() {
    b->removeAttribute("layer");
};

/* include <layermixin> */
mei::Mei_linelocMixIn::Mei_linelocMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_linelocMixIn::~Mei_linelocMixIn() {}
MeiAttribute* mei::Mei_linelocMixIn::getLine() {
    if (!b->hasAttribute("line")) {
        throw AttributeNotFoundException("line");
    }
    return b->getAttribute("line");
};

void mei::Mei_linelocMixIn::setLine(std::string _line) {
    MeiAttribute *a = new MeiAttribute("line", _line);
    b->addAttribute(a);
};

bool mei::Mei_linelocMixIn::hasLine() {
    return b->hasAttribute("line");
};

void mei::Mei_linelocMixIn::removeLine() {
    b->removeAttribute("line");
};

/* include <linemixin> */
mei::Mei_linerendMixIn::Mei_linerendMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_linerendMixIn::~Mei_linerendMixIn() {}
MeiAttribute* mei::Mei_linerendMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::Mei_linerendMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::Mei_linerendMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::Mei_linerendMixIn::removeRend() {
    b->removeAttribute("rend");
};

/* include <rendmixin> */
mei::Mei_lyricstyleMixIn::Mei_lyricstyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_lyricstyleMixIn::~Mei_lyricstyleMixIn() {}
MeiAttribute* mei::Mei_lyricstyleMixIn::getLyricAlign() {
    if (!b->hasAttribute("lyric.align")) {
        throw AttributeNotFoundException("lyric.align");
    }
    return b->getAttribute("lyric.align");
};

void mei::Mei_lyricstyleMixIn::setLyricAlign(std::string _lyricalign) {
    MeiAttribute *a = new MeiAttribute("lyric.align", _lyricalign);
    b->addAttribute(a);
};

bool mei::Mei_lyricstyleMixIn::hasLyricAlign() {
    return b->hasAttribute("lyric.align");
};

void mei::Mei_lyricstyleMixIn::removeLyricAlign() {
    b->removeAttribute("lyric.align");
};
MeiAttribute* mei::Mei_lyricstyleMixIn::getLyricFam() {
    if (!b->hasAttribute("lyric.fam")) {
        throw AttributeNotFoundException("lyric.fam");
    }
    return b->getAttribute("lyric.fam");
};

void mei::Mei_lyricstyleMixIn::setLyricFam(std::string _lyricfam) {
    MeiAttribute *a = new MeiAttribute("lyric.fam", _lyricfam);
    b->addAttribute(a);
};

bool mei::Mei_lyricstyleMixIn::hasLyricFam() {
    return b->hasAttribute("lyric.fam");
};

void mei::Mei_lyricstyleMixIn::removeLyricFam() {
    b->removeAttribute("lyric.fam");
};
MeiAttribute* mei::Mei_lyricstyleMixIn::getLyricName() {
    if (!b->hasAttribute("lyric.name")) {
        throw AttributeNotFoundException("lyric.name");
    }
    return b->getAttribute("lyric.name");
};

void mei::Mei_lyricstyleMixIn::setLyricName(std::string _lyricname) {
    MeiAttribute *a = new MeiAttribute("lyric.name", _lyricname);
    b->addAttribute(a);
};

bool mei::Mei_lyricstyleMixIn::hasLyricName() {
    return b->hasAttribute("lyric.name");
};

void mei::Mei_lyricstyleMixIn::removeLyricName() {
    b->removeAttribute("lyric.name");
};
MeiAttribute* mei::Mei_lyricstyleMixIn::getLyricSize() {
    if (!b->hasAttribute("lyric.size")) {
        throw AttributeNotFoundException("lyric.size");
    }
    return b->getAttribute("lyric.size");
};

void mei::Mei_lyricstyleMixIn::setLyricSize(std::string _lyricsize) {
    MeiAttribute *a = new MeiAttribute("lyric.size", _lyricsize);
    b->addAttribute(a);
};

bool mei::Mei_lyricstyleMixIn::hasLyricSize() {
    return b->hasAttribute("lyric.size");
};

void mei::Mei_lyricstyleMixIn::removeLyricSize() {
    b->removeAttribute("lyric.size");
};
MeiAttribute* mei::Mei_lyricstyleMixIn::getLyricStyle() {
    if (!b->hasAttribute("lyric.style")) {
        throw AttributeNotFoundException("lyric.style");
    }
    return b->getAttribute("lyric.style");
};

void mei::Mei_lyricstyleMixIn::setLyricStyle(std::string _lyricstyle) {
    MeiAttribute *a = new MeiAttribute("lyric.style", _lyricstyle);
    b->addAttribute(a);
};

bool mei::Mei_lyricstyleMixIn::hasLyricStyle() {
    return b->hasAttribute("lyric.style");
};

void mei::Mei_lyricstyleMixIn::removeLyricStyle() {
    b->removeAttribute("lyric.style");
};
MeiAttribute* mei::Mei_lyricstyleMixIn::getLyricWeight() {
    if (!b->hasAttribute("lyric.weight")) {
        throw AttributeNotFoundException("lyric.weight");
    }
    return b->getAttribute("lyric.weight");
};

void mei::Mei_lyricstyleMixIn::setLyricWeight(std::string _lyricweight) {
    MeiAttribute *a = new MeiAttribute("lyric.weight", _lyricweight);
    b->addAttribute(a);
};

bool mei::Mei_lyricstyleMixIn::hasLyricWeight() {
    return b->hasAttribute("lyric.weight");
};

void mei::Mei_lyricstyleMixIn::removeLyricWeight() {
    b->removeAttribute("lyric.weight");
};

/* include <lyric.weightmixin> */
mei::Mei_measureLogMixIn::Mei_measureLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_measureLogMixIn::~Mei_measureLogMixIn() {}
MeiAttribute* mei::Mei_measureLogMixIn::getLeft() {
    if (!b->hasAttribute("left")) {
        throw AttributeNotFoundException("left");
    }
    return b->getAttribute("left");
};

void mei::Mei_measureLogMixIn::setLeft(std::string _left) {
    MeiAttribute *a = new MeiAttribute("left", _left);
    b->addAttribute(a);
};

bool mei::Mei_measureLogMixIn::hasLeft() {
    return b->hasAttribute("left");
};

void mei::Mei_measureLogMixIn::removeLeft() {
    b->removeAttribute("left");
};
MeiAttribute* mei::Mei_measureLogMixIn::getRight() {
    if (!b->hasAttribute("right")) {
        throw AttributeNotFoundException("right");
    }
    return b->getAttribute("right");
};

void mei::Mei_measureLogMixIn::setRight(std::string _right) {
    MeiAttribute *a = new MeiAttribute("right", _right);
    b->addAttribute(a);
};

bool mei::Mei_measureLogMixIn::hasRight() {
    return b->hasAttribute("right");
};

void mei::Mei_measureLogMixIn::removeRight() {
    b->removeAttribute("right");
};

/* include <rightmixin> */
mei::Mei_measurementMixIn::Mei_measurementMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_measurementMixIn::~Mei_measurementMixIn() {}
MeiAttribute* mei::Mei_measurementMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->getAttribute("unit");
};

void mei::Mei_measurementMixIn::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::Mei_measurementMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::Mei_measurementMixIn::removeUnit() {
    b->removeAttribute("unit");
};

/* include <unitmixin> */
mei::Mei_mediaboundsMixIn::Mei_mediaboundsMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_mediaboundsMixIn::~Mei_mediaboundsMixIn() {}
MeiAttribute* mei::Mei_mediaboundsMixIn::getBegin() {
    if (!b->hasAttribute("begin")) {
        throw AttributeNotFoundException("begin");
    }
    return b->getAttribute("begin");
};

void mei::Mei_mediaboundsMixIn::setBegin(std::string _begin) {
    MeiAttribute *a = new MeiAttribute("begin", _begin);
    b->addAttribute(a);
};

bool mei::Mei_mediaboundsMixIn::hasBegin() {
    return b->hasAttribute("begin");
};

void mei::Mei_mediaboundsMixIn::removeBegin() {
    b->removeAttribute("begin");
};
MeiAttribute* mei::Mei_mediaboundsMixIn::getEnd() {
    if (!b->hasAttribute("end")) {
        throw AttributeNotFoundException("end");
    }
    return b->getAttribute("end");
};

void mei::Mei_mediaboundsMixIn::setEnd(std::string _end) {
    MeiAttribute *a = new MeiAttribute("end", _end);
    b->addAttribute(a);
};

bool mei::Mei_mediaboundsMixIn::hasEnd() {
    return b->hasAttribute("end");
};

void mei::Mei_mediaboundsMixIn::removeEnd() {
    b->removeAttribute("end");
};
MeiAttribute* mei::Mei_mediaboundsMixIn::getBetype() {
    if (!b->hasAttribute("betype")) {
        throw AttributeNotFoundException("betype");
    }
    return b->getAttribute("betype");
};

void mei::Mei_mediaboundsMixIn::setBetype(std::string _betype) {
    MeiAttribute *a = new MeiAttribute("betype", _betype);
    b->addAttribute(a);
};

bool mei::Mei_mediaboundsMixIn::hasBetype() {
    return b->hasAttribute("betype");
};

void mei::Mei_mediaboundsMixIn::removeBetype() {
    b->removeAttribute("betype");
};

/* include <betypemixin> */
mei::Mei_mediumMixIn::Mei_mediumMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_mediumMixIn::~Mei_mediumMixIn() {}
MeiAttribute* mei::Mei_mediumMixIn::getMedium() {
    if (!b->hasAttribute("medium")) {
        throw AttributeNotFoundException("medium");
    }
    return b->getAttribute("medium");
};

void mei::Mei_mediumMixIn::setMedium(std::string _medium) {
    MeiAttribute *a = new MeiAttribute("medium", _medium);
    b->addAttribute(a);
};

bool mei::Mei_mediumMixIn::hasMedium() {
    return b->hasAttribute("medium");
};

void mei::Mei_mediumMixIn::removeMedium() {
    b->removeAttribute("medium");
};

/* include <mediummixin> */
mei::Mei_meiversionMixIn::Mei_meiversionMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_meiversionMixIn::~Mei_meiversionMixIn() {}
MeiAttribute* mei::Mei_meiversionMixIn::getMeiversion() {
    if (!b->hasAttribute("meiversion")) {
        throw AttributeNotFoundException("meiversion");
    }
    return b->getAttribute("meiversion");
};

void mei::Mei_meiversionMixIn::setMeiversion(std::string _meiversion) {
    MeiAttribute *a = new MeiAttribute("meiversion", _meiversion);
    b->addAttribute(a);
};

bool mei::Mei_meiversionMixIn::hasMeiversion() {
    return b->hasAttribute("meiversion");
};

void mei::Mei_meiversionMixIn::removeMeiversion() {
    b->removeAttribute("meiversion");
};

/* include <meiversionmixin> */
mei::Mei_mensurLogMixIn::Mei_mensurLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_mensurLogMixIn::~Mei_mensurLogMixIn() {}
MeiAttribute* mei::Mei_mensurLogMixIn::getDot() {
    if (!b->hasAttribute("dot")) {
        throw AttributeNotFoundException("dot");
    }
    return b->getAttribute("dot");
};

void mei::Mei_mensurLogMixIn::setDot(std::string _dot) {
    MeiAttribute *a = new MeiAttribute("dot", _dot);
    b->addAttribute(a);
};

bool mei::Mei_mensurLogMixIn::hasDot() {
    return b->hasAttribute("dot");
};

void mei::Mei_mensurLogMixIn::removeDot() {
    b->removeAttribute("dot");
};
MeiAttribute* mei::Mei_mensurLogMixIn::getModusmaior() {
    if (!b->hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->getAttribute("modusmaior");
};

void mei::Mei_mensurLogMixIn::setModusmaior(std::string _modusmaior) {
    MeiAttribute *a = new MeiAttribute("modusmaior", _modusmaior);
    b->addAttribute(a);
};

bool mei::Mei_mensurLogMixIn::hasModusmaior() {
    return b->hasAttribute("modusmaior");
};

void mei::Mei_mensurLogMixIn::removeModusmaior() {
    b->removeAttribute("modusmaior");
};
MeiAttribute* mei::Mei_mensurLogMixIn::getModusminor() {
    if (!b->hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->getAttribute("modusminor");
};

void mei::Mei_mensurLogMixIn::setModusminor(std::string _modusminor) {
    MeiAttribute *a = new MeiAttribute("modusminor", _modusminor);
    b->addAttribute(a);
};

bool mei::Mei_mensurLogMixIn::hasModusminor() {
    return b->hasAttribute("modusminor");
};

void mei::Mei_mensurLogMixIn::removeModusminor() {
    b->removeAttribute("modusminor");
};
MeiAttribute* mei::Mei_mensurLogMixIn::getProlatio() {
    if (!b->hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->getAttribute("prolatio");
};

void mei::Mei_mensurLogMixIn::setProlatio(std::string _prolatio) {
    MeiAttribute *a = new MeiAttribute("prolatio", _prolatio);
    b->addAttribute(a);
};

bool mei::Mei_mensurLogMixIn::hasProlatio() {
    return b->hasAttribute("prolatio");
};

void mei::Mei_mensurLogMixIn::removeProlatio() {
    b->removeAttribute("prolatio");
};
MeiAttribute* mei::Mei_mensurLogMixIn::getSign() {
    if (!b->hasAttribute("sign")) {
        throw AttributeNotFoundException("sign");
    }
    return b->getAttribute("sign");
};

void mei::Mei_mensurLogMixIn::setSign(std::string _sign) {
    MeiAttribute *a = new MeiAttribute("sign", _sign);
    b->addAttribute(a);
};

bool mei::Mei_mensurLogMixIn::hasSign() {
    return b->hasAttribute("sign");
};

void mei::Mei_mensurLogMixIn::removeSign() {
    b->removeAttribute("sign");
};
MeiAttribute* mei::Mei_mensurLogMixIn::getTempus() {
    if (!b->hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->getAttribute("tempus");
};

void mei::Mei_mensurLogMixIn::setTempus(std::string _tempus) {
    MeiAttribute *a = new MeiAttribute("tempus", _tempus);
    b->addAttribute(a);
};

bool mei::Mei_mensurLogMixIn::hasTempus() {
    return b->hasAttribute("tempus");
};

void mei::Mei_mensurLogMixIn::removeTempus() {
    b->removeAttribute("tempus");
};

/* include <tempusmixin> */
mei::Mei_meterSigLogMixIn::Mei_meterSigLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_meterSigLogMixIn::~Mei_meterSigLogMixIn() {}
MeiAttribute* mei::Mei_meterSigLogMixIn::getCount() {
    if (!b->hasAttribute("count")) {
        throw AttributeNotFoundException("count");
    }
    return b->getAttribute("count");
};

void mei::Mei_meterSigLogMixIn::setCount(std::string _count) {
    MeiAttribute *a = new MeiAttribute("count", _count);
    b->addAttribute(a);
};

bool mei::Mei_meterSigLogMixIn::hasCount() {
    return b->hasAttribute("count");
};

void mei::Mei_meterSigLogMixIn::removeCount() {
    b->removeAttribute("count");
};
MeiAttribute* mei::Mei_meterSigLogMixIn::getSym() {
    if (!b->hasAttribute("sym")) {
        throw AttributeNotFoundException("sym");
    }
    return b->getAttribute("sym");
};

void mei::Mei_meterSigLogMixIn::setSym(std::string _sym) {
    MeiAttribute *a = new MeiAttribute("sym", _sym);
    b->addAttribute(a);
};

bool mei::Mei_meterSigLogMixIn::hasSym() {
    return b->hasAttribute("sym");
};

void mei::Mei_meterSigLogMixIn::removeSym() {
    b->removeAttribute("sym");
};
MeiAttribute* mei::Mei_meterSigLogMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->getAttribute("unit");
};

void mei::Mei_meterSigLogMixIn::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::Mei_meterSigLogMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::Mei_meterSigLogMixIn::removeUnit() {
    b->removeAttribute("unit");
};

/* include <unitmixin> */
mei::Mei_meterSigVisMixIn::Mei_meterSigVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_meterSigVisMixIn::~Mei_meterSigVisMixIn() {}
MeiAttribute* mei::Mei_meterSigVisMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::Mei_meterSigVisMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::Mei_meterSigVisMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::Mei_meterSigVisMixIn::removeRend() {
    b->removeAttribute("rend");
};

/* include <rendmixin> */
mei::Mei_meterSigDefaultLogMixIn::Mei_meterSigDefaultLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_meterSigDefaultLogMixIn::~Mei_meterSigDefaultLogMixIn() {}
MeiAttribute* mei::Mei_meterSigDefaultLogMixIn::getMeterCount() {
    if (!b->hasAttribute("meter.count")) {
        throw AttributeNotFoundException("meter.count");
    }
    return b->getAttribute("meter.count");
};

void mei::Mei_meterSigDefaultLogMixIn::setMeterCount(std::string _metercount) {
    MeiAttribute *a = new MeiAttribute("meter.count", _metercount);
    b->addAttribute(a);
};

bool mei::Mei_meterSigDefaultLogMixIn::hasMeterCount() {
    return b->hasAttribute("meter.count");
};

void mei::Mei_meterSigDefaultLogMixIn::removeMeterCount() {
    b->removeAttribute("meter.count");
};
MeiAttribute* mei::Mei_meterSigDefaultLogMixIn::getMeterUnit() {
    if (!b->hasAttribute("meter.unit")) {
        throw AttributeNotFoundException("meter.unit");
    }
    return b->getAttribute("meter.unit");
};

void mei::Mei_meterSigDefaultLogMixIn::setMeterUnit(std::string _meterunit) {
    MeiAttribute *a = new MeiAttribute("meter.unit", _meterunit);
    b->addAttribute(a);
};

bool mei::Mei_meterSigDefaultLogMixIn::hasMeterUnit() {
    return b->hasAttribute("meter.unit");
};

void mei::Mei_meterSigDefaultLogMixIn::removeMeterUnit() {
    b->removeAttribute("meter.unit");
};

/* include <meter.unitmixin> */
mei::Mei_meterSigDefaultVisMixIn::Mei_meterSigDefaultVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_meterSigDefaultVisMixIn::~Mei_meterSigDefaultVisMixIn() {}
MeiAttribute* mei::Mei_meterSigDefaultVisMixIn::getMeterRend() {
    if (!b->hasAttribute("meter.rend")) {
        throw AttributeNotFoundException("meter.rend");
    }
    return b->getAttribute("meter.rend");
};

void mei::Mei_meterSigDefaultVisMixIn::setMeterRend(std::string _meterrend) {
    MeiAttribute *a = new MeiAttribute("meter.rend", _meterrend);
    b->addAttribute(a);
};

bool mei::Mei_meterSigDefaultVisMixIn::hasMeterRend() {
    return b->hasAttribute("meter.rend");
};

void mei::Mei_meterSigDefaultVisMixIn::removeMeterRend() {
    b->removeAttribute("meter.rend");
};
MeiAttribute* mei::Mei_meterSigDefaultVisMixIn::getMeterShowchange() {
    if (!b->hasAttribute("meter.showchange")) {
        throw AttributeNotFoundException("meter.showchange");
    }
    return b->getAttribute("meter.showchange");
};

void mei::Mei_meterSigDefaultVisMixIn::setMeterShowchange(std::string _metershowchange) {
    MeiAttribute *a = new MeiAttribute("meter.showchange", _metershowchange);
    b->addAttribute(a);
};

bool mei::Mei_meterSigDefaultVisMixIn::hasMeterShowchange() {
    return b->hasAttribute("meter.showchange");
};

void mei::Mei_meterSigDefaultVisMixIn::removeMeterShowchange() {
    b->removeAttribute("meter.showchange");
};
MeiAttribute* mei::Mei_meterSigDefaultVisMixIn::getMeterSym() {
    if (!b->hasAttribute("meter.sym")) {
        throw AttributeNotFoundException("meter.sym");
    }
    return b->getAttribute("meter.sym");
};

void mei::Mei_meterSigDefaultVisMixIn::setMeterSym(std::string _metersym) {
    MeiAttribute *a = new MeiAttribute("meter.sym", _metersym);
    b->addAttribute(a);
};

bool mei::Mei_meterSigDefaultVisMixIn::hasMeterSym() {
    return b->hasAttribute("meter.sym");
};

void mei::Mei_meterSigDefaultVisMixIn::removeMeterSym() {
    b->removeAttribute("meter.sym");
};

/* include <meter.symmixin> */
mei::Mei_meterconformanceMixIn::Mei_meterconformanceMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_meterconformanceMixIn::~Mei_meterconformanceMixIn() {}
MeiAttribute* mei::Mei_meterconformanceMixIn::getMetcon() {
    if (!b->hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->getAttribute("metcon");
};

void mei::Mei_meterconformanceMixIn::setMetcon(std::string _metcon) {
    MeiAttribute *a = new MeiAttribute("metcon", _metcon);
    b->addAttribute(a);
};

bool mei::Mei_meterconformanceMixIn::hasMetcon() {
    return b->hasAttribute("metcon");
};

void mei::Mei_meterconformanceMixIn::removeMetcon() {
    b->removeAttribute("metcon");
};

/* include <metconmixin> */
mei::Mei_meterconformanceBarMixIn::Mei_meterconformanceBarMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_meterconformanceBarMixIn::~Mei_meterconformanceBarMixIn() {}
MeiAttribute* mei::Mei_meterconformanceBarMixIn::getMetcon() {
    if (!b->hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->getAttribute("metcon");
};

void mei::Mei_meterconformanceBarMixIn::setMetcon(std::string _metcon) {
    MeiAttribute *a = new MeiAttribute("metcon", _metcon);
    b->addAttribute(a);
};

bool mei::Mei_meterconformanceBarMixIn::hasMetcon() {
    return b->hasAttribute("metcon");
};

void mei::Mei_meterconformanceBarMixIn::removeMetcon() {
    b->removeAttribute("metcon");
};
MeiAttribute* mei::Mei_meterconformanceBarMixIn::getControl() {
    if (!b->hasAttribute("control")) {
        throw AttributeNotFoundException("control");
    }
    return b->getAttribute("control");
};

void mei::Mei_meterconformanceBarMixIn::setControl(std::string _control) {
    MeiAttribute *a = new MeiAttribute("control", _control);
    b->addAttribute(a);
};

bool mei::Mei_meterconformanceBarMixIn::hasControl() {
    return b->hasAttribute("control");
};

void mei::Mei_meterconformanceBarMixIn::removeControl() {
    b->removeAttribute("control");
};

/* include <controlmixin> */
mei::Mei_mmtempoMixIn::Mei_mmtempoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_mmtempoMixIn::~Mei_mmtempoMixIn() {}
MeiAttribute* mei::Mei_mmtempoMixIn::getMm() {
    if (!b->hasAttribute("mm")) {
        throw AttributeNotFoundException("mm");
    }
    return b->getAttribute("mm");
};

void mei::Mei_mmtempoMixIn::setMm(std::string _mm) {
    MeiAttribute *a = new MeiAttribute("mm", _mm);
    b->addAttribute(a);
};

bool mei::Mei_mmtempoMixIn::hasMm() {
    return b->hasAttribute("mm");
};

void mei::Mei_mmtempoMixIn::removeMm() {
    b->removeAttribute("mm");
};

/* include <mmmixin> */
mei::Mei_multinummeasuresMixIn::Mei_multinummeasuresMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_multinummeasuresMixIn::~Mei_multinummeasuresMixIn() {}
MeiAttribute* mei::Mei_multinummeasuresMixIn::getMultiNumber() {
    if (!b->hasAttribute("multi.number")) {
        throw AttributeNotFoundException("multi.number");
    }
    return b->getAttribute("multi.number");
};

void mei::Mei_multinummeasuresMixIn::setMultiNumber(std::string _multinumber) {
    MeiAttribute *a = new MeiAttribute("multi.number", _multinumber);
    b->addAttribute(a);
};

bool mei::Mei_multinummeasuresMixIn::hasMultiNumber() {
    return b->hasAttribute("multi.number");
};

void mei::Mei_multinummeasuresMixIn::removeMultiNumber() {
    b->removeAttribute("multi.number");
};

/* include <multi.numbermixin> */
mei::Mei_nameMixIn::Mei_nameMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_nameMixIn::~Mei_nameMixIn() {}
MeiAttribute* mei::Mei_nameMixIn::getNymref() {
    if (!b->hasAttribute("nymref")) {
        throw AttributeNotFoundException("nymref");
    }
    return b->getAttribute("nymref");
};

void mei::Mei_nameMixIn::setNymref(std::string _nymref) {
    MeiAttribute *a = new MeiAttribute("nymref", _nymref);
    b->addAttribute(a);
};

bool mei::Mei_nameMixIn::hasNymref() {
    return b->hasAttribute("nymref");
};

void mei::Mei_nameMixIn::removeNymref() {
    b->removeAttribute("nymref");
};
MeiAttribute* mei::Mei_nameMixIn::getRole() {
    if (!b->hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->getAttribute("role");
};

void mei::Mei_nameMixIn::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    b->addAttribute(a);
};

bool mei::Mei_nameMixIn::hasRole() {
    return b->hasAttribute("role");
};

void mei::Mei_nameMixIn::removeRole() {
    b->removeAttribute("role");
};

/* include <rolemixin> */
mei::Mei_noteGesMixIn::Mei_noteGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_noteGesMixIn::~Mei_noteGesMixIn() {}
MeiAttribute* mei::Mei_noteGesMixIn::getOctGes() {
    if (!b->hasAttribute("oct.ges")) {
        throw AttributeNotFoundException("oct.ges");
    }
    return b->getAttribute("oct.ges");
};

void mei::Mei_noteGesMixIn::setOctGes(std::string _octges) {
    MeiAttribute *a = new MeiAttribute("oct.ges", _octges);
    b->addAttribute(a);
};

bool mei::Mei_noteGesMixIn::hasOctGes() {
    return b->hasAttribute("oct.ges");
};

void mei::Mei_noteGesMixIn::removeOctGes() {
    b->removeAttribute("oct.ges");
};
MeiAttribute* mei::Mei_noteGesMixIn::getPnameGes() {
    if (!b->hasAttribute("pname.ges")) {
        throw AttributeNotFoundException("pname.ges");
    }
    return b->getAttribute("pname.ges");
};

void mei::Mei_noteGesMixIn::setPnameGes(std::string _pnameges) {
    MeiAttribute *a = new MeiAttribute("pname.ges", _pnameges);
    b->addAttribute(a);
};

bool mei::Mei_noteGesMixIn::hasPnameGes() {
    return b->hasAttribute("pname.ges");
};

void mei::Mei_noteGesMixIn::removePnameGes() {
    b->removeAttribute("pname.ges");
};
MeiAttribute* mei::Mei_noteGesMixIn::getPnum() {
    if (!b->hasAttribute("pnum")) {
        throw AttributeNotFoundException("pnum");
    }
    return b->getAttribute("pnum");
};

void mei::Mei_noteGesMixIn::setPnum(std::string _pnum) {
    MeiAttribute *a = new MeiAttribute("pnum", _pnum);
    b->addAttribute(a);
};

bool mei::Mei_noteGesMixIn::hasPnum() {
    return b->hasAttribute("pnum");
};

void mei::Mei_noteGesMixIn::removePnum() {
    b->removeAttribute("pnum");
};

/* include <pnummixin> */
mei::Mei_noteVisMixIn::Mei_noteVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_noteVisMixIn::~Mei_noteVisMixIn() {}
MeiAttribute* mei::Mei_noteVisMixIn::getHeadshape() {
    if (!b->hasAttribute("headshape")) {
        throw AttributeNotFoundException("headshape");
    }
    return b->getAttribute("headshape");
};

void mei::Mei_noteVisMixIn::setHeadshape(std::string _headshape) {
    MeiAttribute *a = new MeiAttribute("headshape", _headshape);
    b->addAttribute(a);
};

bool mei::Mei_noteVisMixIn::hasHeadshape() {
    return b->hasAttribute("headshape");
};

void mei::Mei_noteVisMixIn::removeHeadshape() {
    b->removeAttribute("headshape");
};

/* include <headshapemixin> */
mei::Mei_octaveMixIn::Mei_octaveMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_octaveMixIn::~Mei_octaveMixIn() {}
MeiAttribute* mei::Mei_octaveMixIn::getOct() {
    if (!b->hasAttribute("oct")) {
        throw AttributeNotFoundException("oct");
    }
    return b->getAttribute("oct");
};

void mei::Mei_octaveMixIn::setOct(std::string _oct) {
    MeiAttribute *a = new MeiAttribute("oct", _oct);
    b->addAttribute(a);
};

bool mei::Mei_octaveMixIn::hasOct() {
    return b->hasAttribute("oct");
};

void mei::Mei_octaveMixIn::removeOct() {
    b->removeAttribute("oct");
};

/* include <octmixin> */
mei::Mei_octavedefaultMixIn::Mei_octavedefaultMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_octavedefaultMixIn::~Mei_octavedefaultMixIn() {}
MeiAttribute* mei::Mei_octavedefaultMixIn::getOctaveDefault() {
    if (!b->hasAttribute("octave.default")) {
        throw AttributeNotFoundException("octave.default");
    }
    return b->getAttribute("octave.default");
};

void mei::Mei_octavedefaultMixIn::setOctaveDefault(std::string _octavedefault) {
    MeiAttribute *a = new MeiAttribute("octave.default", _octavedefault);
    b->addAttribute(a);
};

bool mei::Mei_octavedefaultMixIn::hasOctaveDefault() {
    return b->hasAttribute("octave.default");
};

void mei::Mei_octavedefaultMixIn::removeOctaveDefault() {
    b->removeAttribute("octave.default");
};

/* include <octave.defaultmixin> */
mei::Mei_octavedisplacementMixIn::Mei_octavedisplacementMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_octavedisplacementMixIn::~Mei_octavedisplacementMixIn() {}
MeiAttribute* mei::Mei_octavedisplacementMixIn::getDis() {
    if (!b->hasAttribute("dis")) {
        throw AttributeNotFoundException("dis");
    }
    return b->getAttribute("dis");
};

void mei::Mei_octavedisplacementMixIn::setDis(std::string _dis) {
    MeiAttribute *a = new MeiAttribute("dis", _dis);
    b->addAttribute(a);
};

bool mei::Mei_octavedisplacementMixIn::hasDis() {
    return b->hasAttribute("dis");
};

void mei::Mei_octavedisplacementMixIn::removeDis() {
    b->removeAttribute("dis");
};
MeiAttribute* mei::Mei_octavedisplacementMixIn::getDisPlace() {
    if (!b->hasAttribute("dis.place")) {
        throw AttributeNotFoundException("dis.place");
    }
    return b->getAttribute("dis.place");
};

void mei::Mei_octavedisplacementMixIn::setDisPlace(std::string _displace) {
    MeiAttribute *a = new MeiAttribute("dis.place", _displace);
    b->addAttribute(a);
};

bool mei::Mei_octavedisplacementMixIn::hasDisPlace() {
    return b->hasAttribute("dis.place");
};

void mei::Mei_octavedisplacementMixIn::removeDisPlace() {
    b->removeAttribute("dis.place");
};

/* include <dis.placemixin> */
mei::Mei_onelinestaffMixIn::Mei_onelinestaffMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_onelinestaffMixIn::~Mei_onelinestaffMixIn() {}
MeiAttribute* mei::Mei_onelinestaffMixIn::getOntheline() {
    if (!b->hasAttribute("ontheline")) {
        throw AttributeNotFoundException("ontheline");
    }
    return b->getAttribute("ontheline");
};

void mei::Mei_onelinestaffMixIn::setOntheline(std::string _ontheline) {
    MeiAttribute *a = new MeiAttribute("ontheline", _ontheline);
    b->addAttribute(a);
};

bool mei::Mei_onelinestaffMixIn::hasOntheline() {
    return b->hasAttribute("ontheline");
};

void mei::Mei_onelinestaffMixIn::removeOntheline() {
    b->removeAttribute("ontheline");
};

/* include <onthelinemixin> */
mei::Mei_padLogMixIn::Mei_padLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_padLogMixIn::~Mei_padLogMixIn() {}
MeiAttribute* mei::Mei_padLogMixIn::getNum() {
    if (!b->hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->getAttribute("num");
};

void mei::Mei_padLogMixIn::setNum(std::string _num) {
    MeiAttribute *a = new MeiAttribute("num", _num);
    b->addAttribute(a);
};

bool mei::Mei_padLogMixIn::hasNum() {
    return b->hasAttribute("num");
};

void mei::Mei_padLogMixIn::removeNum() {
    b->removeAttribute("num");
};

/* include <nummixin> */
mei::Mei_pbVisMixIn::Mei_pbVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_pbVisMixIn::~Mei_pbVisMixIn() {}
MeiAttribute* mei::Mei_pbVisMixIn::getFunc() {
    if (!b->hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return b->getAttribute("func");
};

void mei::Mei_pbVisMixIn::setFunc(std::string _func) {
    MeiAttribute *a = new MeiAttribute("func", _func);
    b->addAttribute(a);
};

bool mei::Mei_pbVisMixIn::hasFunc() {
    return b->hasAttribute("func");
};

void mei::Mei_pbVisMixIn::removeFunc() {
    b->removeAttribute("func");
};

/* include <funcmixin> */
mei::Mei_pitchMixIn::Mei_pitchMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_pitchMixIn::~Mei_pitchMixIn() {}
MeiAttribute* mei::Mei_pitchMixIn::getPname() {
    if (!b->hasAttribute("pname")) {
        throw AttributeNotFoundException("pname");
    }
    return b->getAttribute("pname");
};

void mei::Mei_pitchMixIn::setPname(std::string _pname) {
    MeiAttribute *a = new MeiAttribute("pname", _pname);
    b->addAttribute(a);
};

bool mei::Mei_pitchMixIn::hasPname() {
    return b->hasAttribute("pname");
};

void mei::Mei_pitchMixIn::removePname() {
    b->removeAttribute("pname");
};

/* include <pnamemixin> */
mei::Mei_placementMixIn::Mei_placementMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_placementMixIn::~Mei_placementMixIn() {}
MeiAttribute* mei::Mei_placementMixIn::getPlace() {
    if (!b->hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->getAttribute("place");
};

void mei::Mei_placementMixIn::setPlace(std::string _place) {
    MeiAttribute *a = new MeiAttribute("place", _place);
    b->addAttribute(a);
};

bool mei::Mei_placementMixIn::hasPlace() {
    return b->hasAttribute("place");
};

void mei::Mei_placementMixIn::removePlace() {
    b->removeAttribute("place");
};

/* include <placemixin> */
mei::Mei_plistMixIn::Mei_plistMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_plistMixIn::~Mei_plistMixIn() {}
MeiAttribute* mei::Mei_plistMixIn::getPlist() {
    if (!b->hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->getAttribute("plist");
};

void mei::Mei_plistMixIn::setPlist(std::string _plist) {
    MeiAttribute *a = new MeiAttribute("plist", _plist);
    b->addAttribute(a);
};

bool mei::Mei_plistMixIn::hasPlist() {
    return b->hasAttribute("plist");
};

void mei::Mei_plistMixIn::removePlist() {
    b->removeAttribute("plist");
};
MeiAttribute* mei::Mei_plistMixIn::getEvaluate() {
    if (!b->hasAttribute("evaluate")) {
        throw AttributeNotFoundException("evaluate");
    }
    return b->getAttribute("evaluate");
};

void mei::Mei_plistMixIn::setEvaluate(std::string _evaluate) {
    MeiAttribute *a = new MeiAttribute("evaluate", _evaluate);
    b->addAttribute(a);
};

bool mei::Mei_plistMixIn::hasEvaluate() {
    return b->hasAttribute("evaluate");
};

void mei::Mei_plistMixIn::removeEvaluate() {
    b->removeAttribute("evaluate");
};

/* include <evaluatemixin> */
mei::Mei_pointingMixIn::Mei_pointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_pointingMixIn::~Mei_pointingMixIn() {}
MeiAttribute* mei::Mei_pointingMixIn::getActuate() {
    if (!b->hasAttribute("actuate")) {
        throw AttributeNotFoundException("actuate");
    }
    return b->getAttribute("actuate");
};

void mei::Mei_pointingMixIn::setActuate(std::string _actuate) {
    MeiNamespace *s = new MeiNamespace("xlink", "http://www.w3.org/1999/xlink");
    MeiAttribute *a = new MeiAttribute(s, "actuate", _actuate);
    b->addAttribute(a);
};

bool mei::Mei_pointingMixIn::hasActuate() {
    return b->hasAttribute("actuate");
};

void mei::Mei_pointingMixIn::removeActuate() {
    b->removeAttribute("actuate");
};
MeiAttribute* mei::Mei_pointingMixIn::getRole() {
    if (!b->hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->getAttribute("role");
};

void mei::Mei_pointingMixIn::setRole(std::string _role) {
    MeiNamespace *s = new MeiNamespace("xlink", "http://www.w3.org/1999/xlink");
    MeiAttribute *a = new MeiAttribute(s, "role", _role);
    b->addAttribute(a);
};

bool mei::Mei_pointingMixIn::hasRole() {
    return b->hasAttribute("role");
};

void mei::Mei_pointingMixIn::removeRole() {
    b->removeAttribute("role");
};
MeiAttribute* mei::Mei_pointingMixIn::getShow() {
    if (!b->hasAttribute("show")) {
        throw AttributeNotFoundException("show");
    }
    return b->getAttribute("show");
};

void mei::Mei_pointingMixIn::setShow(std::string _show) {
    MeiNamespace *s = new MeiNamespace("xlink", "http://www.w3.org/1999/xlink");
    MeiAttribute *a = new MeiAttribute(s, "show", _show);
    b->addAttribute(a);
};

bool mei::Mei_pointingMixIn::hasShow() {
    return b->hasAttribute("show");
};

void mei::Mei_pointingMixIn::removeShow() {
    b->removeAttribute("show");
};
MeiAttribute* mei::Mei_pointingMixIn::getTarget() {
    if (!b->hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return b->getAttribute("target");
};

void mei::Mei_pointingMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    b->addAttribute(a);
};

bool mei::Mei_pointingMixIn::hasTarget() {
    return b->hasAttribute("target");
};

void mei::Mei_pointingMixIn::removeTarget() {
    b->removeAttribute("target");
};
MeiAttribute* mei::Mei_pointingMixIn::getTargettype() {
    if (!b->hasAttribute("targettype")) {
        throw AttributeNotFoundException("targettype");
    }
    return b->getAttribute("targettype");
};

void mei::Mei_pointingMixIn::setTargettype(std::string _targettype) {
    MeiAttribute *a = new MeiAttribute("targettype", _targettype);
    b->addAttribute(a);
};

bool mei::Mei_pointingMixIn::hasTargettype() {
    return b->hasAttribute("targettype");
};

void mei::Mei_pointingMixIn::removeTargettype() {
    b->removeAttribute("targettype");
};
MeiAttribute* mei::Mei_pointingMixIn::getTitle() {
    if (!b->hasAttribute("title")) {
        throw AttributeNotFoundException("title");
    }
    return b->getAttribute("title");
};

void mei::Mei_pointingMixIn::setTitle(std::string _title) {
    MeiNamespace *s = new MeiNamespace("xlink", "http://www.w3.org/1999/xlink");
    MeiAttribute *a = new MeiAttribute(s, "title", _title);
    b->addAttribute(a);
};

bool mei::Mei_pointingMixIn::hasTitle() {
    return b->hasAttribute("title");
};

void mei::Mei_pointingMixIn::removeTitle() {
    b->removeAttribute("title");
};

/* include <titlemixin> */
mei::Mei_relativesizeMixIn::Mei_relativesizeMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_relativesizeMixIn::~Mei_relativesizeMixIn() {}
MeiAttribute* mei::Mei_relativesizeMixIn::getSize() {
    if (!b->hasAttribute("size")) {
        throw AttributeNotFoundException("size");
    }
    return b->getAttribute("size");
};

void mei::Mei_relativesizeMixIn::setSize(std::string _size) {
    MeiAttribute *a = new MeiAttribute("size", _size);
    b->addAttribute(a);
};

bool mei::Mei_relativesizeMixIn::hasSize() {
    return b->hasAttribute("size");
};

void mei::Mei_relativesizeMixIn::removeSize() {
    b->removeAttribute("size");
};

/* include <sizemixin> */
mei::Mei_responsibilityMixIn::Mei_responsibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_responsibilityMixIn::~Mei_responsibilityMixIn() {}
MeiAttribute* mei::Mei_responsibilityMixIn::getResp() {
    if (!b->hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->getAttribute("resp");
};

void mei::Mei_responsibilityMixIn::setResp(std::string _resp) {
    MeiAttribute *a = new MeiAttribute("resp", _resp);
    b->addAttribute(a);
};

bool mei::Mei_responsibilityMixIn::hasResp() {
    return b->hasAttribute("resp");
};

void mei::Mei_responsibilityMixIn::removeResp() {
    b->removeAttribute("resp");
};

/* include <respmixin> */
mei::Mei_sbVisMixIn::Mei_sbVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_sbVisMixIn::~Mei_sbVisMixIn() {}
MeiAttribute* mei::Mei_sbVisMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::Mei_sbVisMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::Mei_sbVisMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::Mei_sbVisMixIn::removeRend() {
    b->removeAttribute("rend");
};

/* include <rendmixin> */
mei::Mei_scalableMixIn::Mei_scalableMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_scalableMixIn::~Mei_scalableMixIn() {}
MeiAttribute* mei::Mei_scalableMixIn::getScale() {
    if (!b->hasAttribute("scale")) {
        throw AttributeNotFoundException("scale");
    }
    return b->getAttribute("scale");
};

void mei::Mei_scalableMixIn::setScale(std::string _scale) {
    MeiAttribute *a = new MeiAttribute("scale", _scale);
    b->addAttribute(a);
};

bool mei::Mei_scalableMixIn::hasScale() {
    return b->hasAttribute("scale");
};

void mei::Mei_scalableMixIn::removeScale() {
    b->removeAttribute("scale");
};

/* include <scalemixin> */
mei::Mei_scoreDefGesMixIn::Mei_scoreDefGesMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_scoreDefGesMixIn::~Mei_scoreDefGesMixIn() {}
MeiAttribute* mei::Mei_scoreDefGesMixIn::getTunePname() {
    if (!b->hasAttribute("tune.pname")) {
        throw AttributeNotFoundException("tune.pname");
    }
    return b->getAttribute("tune.pname");
};

void mei::Mei_scoreDefGesMixIn::setTunePname(std::string _tunepname) {
    MeiAttribute *a = new MeiAttribute("tune.pname", _tunepname);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefGesMixIn::hasTunePname() {
    return b->hasAttribute("tune.pname");
};

void mei::Mei_scoreDefGesMixIn::removeTunePname() {
    b->removeAttribute("tune.pname");
};
MeiAttribute* mei::Mei_scoreDefGesMixIn::getTuneHz() {
    if (!b->hasAttribute("tune.Hz")) {
        throw AttributeNotFoundException("tune.Hz");
    }
    return b->getAttribute("tune.Hz");
};

void mei::Mei_scoreDefGesMixIn::setTuneHz(std::string _tuneHz) {
    MeiAttribute *a = new MeiAttribute("tune.Hz", _tuneHz);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefGesMixIn::hasTuneHz() {
    return b->hasAttribute("tune.Hz");
};

void mei::Mei_scoreDefGesMixIn::removeTuneHz() {
    b->removeAttribute("tune.Hz");
};
MeiAttribute* mei::Mei_scoreDefGesMixIn::getTuneTemper() {
    if (!b->hasAttribute("tune.temper")) {
        throw AttributeNotFoundException("tune.temper");
    }
    return b->getAttribute("tune.temper");
};

void mei::Mei_scoreDefGesMixIn::setTuneTemper(std::string _tunetemper) {
    MeiAttribute *a = new MeiAttribute("tune.temper", _tunetemper);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefGesMixIn::hasTuneTemper() {
    return b->hasAttribute("tune.temper");
};

void mei::Mei_scoreDefGesMixIn::removeTuneTemper() {
    b->removeAttribute("tune.temper");
};

/* include <tune.tempermixin> */
mei::Mei_scoreDefVisMixIn::Mei_scoreDefVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_scoreDefVisMixIn::~Mei_scoreDefVisMixIn() {}
MeiAttribute* mei::Mei_scoreDefVisMixIn::getEndingRend() {
    if (!b->hasAttribute("ending.rend")) {
        throw AttributeNotFoundException("ending.rend");
    }
    return b->getAttribute("ending.rend");
};

void mei::Mei_scoreDefVisMixIn::setEndingRend(std::string _endingrend) {
    MeiAttribute *a = new MeiAttribute("ending.rend", _endingrend);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasEndingRend() {
    return b->hasAttribute("ending.rend");
};

void mei::Mei_scoreDefVisMixIn::removeEndingRend() {
    b->removeAttribute("ending.rend");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getMnumVisible() {
    if (!b->hasAttribute("mnum.visible")) {
        throw AttributeNotFoundException("mnum.visible");
    }
    return b->getAttribute("mnum.visible");
};

void mei::Mei_scoreDefVisMixIn::setMnumVisible(std::string _mnumvisible) {
    MeiAttribute *a = new MeiAttribute("mnum.visible", _mnumvisible);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasMnumVisible() {
    return b->hasAttribute("mnum.visible");
};

void mei::Mei_scoreDefVisMixIn::removeMnumVisible() {
    b->removeAttribute("mnum.visible");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getMusicName() {
    if (!b->hasAttribute("music.name")) {
        throw AttributeNotFoundException("music.name");
    }
    return b->getAttribute("music.name");
};

void mei::Mei_scoreDefVisMixIn::setMusicName(std::string _musicname) {
    MeiAttribute *a = new MeiAttribute("music.name", _musicname);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasMusicName() {
    return b->hasAttribute("music.name");
};

void mei::Mei_scoreDefVisMixIn::removeMusicName() {
    b->removeAttribute("music.name");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getMusicSize() {
    if (!b->hasAttribute("music.size")) {
        throw AttributeNotFoundException("music.size");
    }
    return b->getAttribute("music.size");
};

void mei::Mei_scoreDefVisMixIn::setMusicSize(std::string _musicsize) {
    MeiAttribute *a = new MeiAttribute("music.size", _musicsize);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasMusicSize() {
    return b->hasAttribute("music.size");
};

void mei::Mei_scoreDefVisMixIn::removeMusicSize() {
    b->removeAttribute("music.size");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getOptimize() {
    if (!b->hasAttribute("optimize")) {
        throw AttributeNotFoundException("optimize");
    }
    return b->getAttribute("optimize");
};

void mei::Mei_scoreDefVisMixIn::setOptimize(std::string _optimize) {
    MeiAttribute *a = new MeiAttribute("optimize", _optimize);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasOptimize() {
    return b->hasAttribute("optimize");
};

void mei::Mei_scoreDefVisMixIn::removeOptimize() {
    b->removeAttribute("optimize");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPageHeight() {
    if (!b->hasAttribute("page.height")) {
        throw AttributeNotFoundException("page.height");
    }
    return b->getAttribute("page.height");
};

void mei::Mei_scoreDefVisMixIn::setPageHeight(std::string _pageheight) {
    MeiAttribute *a = new MeiAttribute("page.height", _pageheight);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPageHeight() {
    return b->hasAttribute("page.height");
};

void mei::Mei_scoreDefVisMixIn::removePageHeight() {
    b->removeAttribute("page.height");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPageWidth() {
    if (!b->hasAttribute("page.width")) {
        throw AttributeNotFoundException("page.width");
    }
    return b->getAttribute("page.width");
};

void mei::Mei_scoreDefVisMixIn::setPageWidth(std::string _pagewidth) {
    MeiAttribute *a = new MeiAttribute("page.width", _pagewidth);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPageWidth() {
    return b->hasAttribute("page.width");
};

void mei::Mei_scoreDefVisMixIn::removePageWidth() {
    b->removeAttribute("page.width");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPageUnits() {
    if (!b->hasAttribute("page.units")) {
        throw AttributeNotFoundException("page.units");
    }
    return b->getAttribute("page.units");
};

void mei::Mei_scoreDefVisMixIn::setPageUnits(std::string _pageunits) {
    MeiAttribute *a = new MeiAttribute("page.units", _pageunits);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPageUnits() {
    return b->hasAttribute("page.units");
};

void mei::Mei_scoreDefVisMixIn::removePageUnits() {
    b->removeAttribute("page.units");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPageTopmar() {
    if (!b->hasAttribute("page.topmar")) {
        throw AttributeNotFoundException("page.topmar");
    }
    return b->getAttribute("page.topmar");
};

void mei::Mei_scoreDefVisMixIn::setPageTopmar(std::string _pagetopmar) {
    MeiAttribute *a = new MeiAttribute("page.topmar", _pagetopmar);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPageTopmar() {
    return b->hasAttribute("page.topmar");
};

void mei::Mei_scoreDefVisMixIn::removePageTopmar() {
    b->removeAttribute("page.topmar");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPageBotmar() {
    if (!b->hasAttribute("page.botmar")) {
        throw AttributeNotFoundException("page.botmar");
    }
    return b->getAttribute("page.botmar");
};

void mei::Mei_scoreDefVisMixIn::setPageBotmar(std::string _pagebotmar) {
    MeiAttribute *a = new MeiAttribute("page.botmar", _pagebotmar);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPageBotmar() {
    return b->hasAttribute("page.botmar");
};

void mei::Mei_scoreDefVisMixIn::removePageBotmar() {
    b->removeAttribute("page.botmar");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPageLeftmar() {
    if (!b->hasAttribute("page.leftmar")) {
        throw AttributeNotFoundException("page.leftmar");
    }
    return b->getAttribute("page.leftmar");
};

void mei::Mei_scoreDefVisMixIn::setPageLeftmar(std::string _pageleftmar) {
    MeiAttribute *a = new MeiAttribute("page.leftmar", _pageleftmar);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPageLeftmar() {
    return b->hasAttribute("page.leftmar");
};

void mei::Mei_scoreDefVisMixIn::removePageLeftmar() {
    b->removeAttribute("page.leftmar");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPageRightmar() {
    if (!b->hasAttribute("page.rightmar")) {
        throw AttributeNotFoundException("page.rightmar");
    }
    return b->getAttribute("page.rightmar");
};

void mei::Mei_scoreDefVisMixIn::setPageRightmar(std::string _pagerightmar) {
    MeiAttribute *a = new MeiAttribute("page.rightmar", _pagerightmar);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPageRightmar() {
    return b->hasAttribute("page.rightmar");
};

void mei::Mei_scoreDefVisMixIn::removePageRightmar() {
    b->removeAttribute("page.rightmar");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPagePanels() {
    if (!b->hasAttribute("page.panels")) {
        throw AttributeNotFoundException("page.panels");
    }
    return b->getAttribute("page.panels");
};

void mei::Mei_scoreDefVisMixIn::setPagePanels(std::string _pagepanels) {
    MeiAttribute *a = new MeiAttribute("page.panels", _pagepanels);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPagePanels() {
    return b->hasAttribute("page.panels");
};

void mei::Mei_scoreDefVisMixIn::removePagePanels() {
    b->removeAttribute("page.panels");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getPageScale() {
    if (!b->hasAttribute("page.scale")) {
        throw AttributeNotFoundException("page.scale");
    }
    return b->getAttribute("page.scale");
};

void mei::Mei_scoreDefVisMixIn::setPageScale(std::string _pagescale) {
    MeiAttribute *a = new MeiAttribute("page.scale", _pagescale);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasPageScale() {
    return b->hasAttribute("page.scale");
};

void mei::Mei_scoreDefVisMixIn::removePageScale() {
    b->removeAttribute("page.scale");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getSpacingPackexp() {
    if (!b->hasAttribute("spacing.packexp")) {
        throw AttributeNotFoundException("spacing.packexp");
    }
    return b->getAttribute("spacing.packexp");
};

void mei::Mei_scoreDefVisMixIn::setSpacingPackexp(std::string _spacingpackexp) {
    MeiAttribute *a = new MeiAttribute("spacing.packexp", _spacingpackexp);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasSpacingPackexp() {
    return b->hasAttribute("spacing.packexp");
};

void mei::Mei_scoreDefVisMixIn::removeSpacingPackexp() {
    b->removeAttribute("spacing.packexp");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getSpacingPackfact() {
    if (!b->hasAttribute("spacing.packfact")) {
        throw AttributeNotFoundException("spacing.packfact");
    }
    return b->getAttribute("spacing.packfact");
};

void mei::Mei_scoreDefVisMixIn::setSpacingPackfact(std::string _spacingpackfact) {
    MeiAttribute *a = new MeiAttribute("spacing.packfact", _spacingpackfact);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasSpacingPackfact() {
    return b->hasAttribute("spacing.packfact");
};

void mei::Mei_scoreDefVisMixIn::removeSpacingPackfact() {
    b->removeAttribute("spacing.packfact");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getSpacingStaff() {
    if (!b->hasAttribute("spacing.staff")) {
        throw AttributeNotFoundException("spacing.staff");
    }
    return b->getAttribute("spacing.staff");
};

void mei::Mei_scoreDefVisMixIn::setSpacingStaff(std::string _spacingstaff) {
    MeiAttribute *a = new MeiAttribute("spacing.staff", _spacingstaff);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasSpacingStaff() {
    return b->hasAttribute("spacing.staff");
};

void mei::Mei_scoreDefVisMixIn::removeSpacingStaff() {
    b->removeAttribute("spacing.staff");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getSpacingSystem() {
    if (!b->hasAttribute("spacing.system")) {
        throw AttributeNotFoundException("spacing.system");
    }
    return b->getAttribute("spacing.system");
};

void mei::Mei_scoreDefVisMixIn::setSpacingSystem(std::string _spacingsystem) {
    MeiAttribute *a = new MeiAttribute("spacing.system", _spacingsystem);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasSpacingSystem() {
    return b->hasAttribute("spacing.system");
};

void mei::Mei_scoreDefVisMixIn::removeSpacingSystem() {
    b->removeAttribute("spacing.system");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getSystemLeftmar() {
    if (!b->hasAttribute("system.leftmar")) {
        throw AttributeNotFoundException("system.leftmar");
    }
    return b->getAttribute("system.leftmar");
};

void mei::Mei_scoreDefVisMixIn::setSystemLeftmar(std::string _systemleftmar) {
    MeiAttribute *a = new MeiAttribute("system.leftmar", _systemleftmar);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasSystemLeftmar() {
    return b->hasAttribute("system.leftmar");
};

void mei::Mei_scoreDefVisMixIn::removeSystemLeftmar() {
    b->removeAttribute("system.leftmar");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getSystemRightmar() {
    if (!b->hasAttribute("system.rightmar")) {
        throw AttributeNotFoundException("system.rightmar");
    }
    return b->getAttribute("system.rightmar");
};

void mei::Mei_scoreDefVisMixIn::setSystemRightmar(std::string _systemrightmar) {
    MeiAttribute *a = new MeiAttribute("system.rightmar", _systemrightmar);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasSystemRightmar() {
    return b->hasAttribute("system.rightmar");
};

void mei::Mei_scoreDefVisMixIn::removeSystemRightmar() {
    b->removeAttribute("system.rightmar");
};
MeiAttribute* mei::Mei_scoreDefVisMixIn::getSystemTopmar() {
    if (!b->hasAttribute("system.topmar")) {
        throw AttributeNotFoundException("system.topmar");
    }
    return b->getAttribute("system.topmar");
};

void mei::Mei_scoreDefVisMixIn::setSystemTopmar(std::string _systemtopmar) {
    MeiAttribute *a = new MeiAttribute("system.topmar", _systemtopmar);
    b->addAttribute(a);
};

bool mei::Mei_scoreDefVisMixIn::hasSystemTopmar() {
    return b->hasAttribute("system.topmar");
};

void mei::Mei_scoreDefVisMixIn::removeSystemTopmar() {
    b->removeAttribute("system.topmar");
};

/* include <system.topmarmixin> */
mei::Mei_sectionVisMixIn::Mei_sectionVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_sectionVisMixIn::~Mei_sectionVisMixIn() {}
MeiAttribute* mei::Mei_sectionVisMixIn::getRestart() {
    if (!b->hasAttribute("restart")) {
        throw AttributeNotFoundException("restart");
    }
    return b->getAttribute("restart");
};

void mei::Mei_sectionVisMixIn::setRestart(std::string _restart) {
    MeiAttribute *a = new MeiAttribute("restart", _restart);
    b->addAttribute(a);
};

bool mei::Mei_sectionVisMixIn::hasRestart() {
    return b->hasAttribute("restart");
};

void mei::Mei_sectionVisMixIn::removeRestart() {
    b->removeAttribute("restart");
};

/* include <restartmixin> */
mei::Mei_sequenceMixIn::Mei_sequenceMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_sequenceMixIn::~Mei_sequenceMixIn() {}
MeiAttribute* mei::Mei_sequenceMixIn::getSeq() {
    if (!b->hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->getAttribute("seq");
};

void mei::Mei_sequenceMixIn::setSeq(std::string _seq) {
    MeiAttribute *a = new MeiAttribute("seq", _seq);
    b->addAttribute(a);
};

bool mei::Mei_sequenceMixIn::hasSeq() {
    return b->hasAttribute("seq");
};

void mei::Mei_sequenceMixIn::removeSeq() {
    b->removeAttribute("seq");
};

/* include <seqmixin> */
mei::Mei_slashcountMixIn::Mei_slashcountMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_slashcountMixIn::~Mei_slashcountMixIn() {}
MeiAttribute* mei::Mei_slashcountMixIn::getSlash() {
    if (!b->hasAttribute("slash")) {
        throw AttributeNotFoundException("slash");
    }
    return b->getAttribute("slash");
};

void mei::Mei_slashcountMixIn::setSlash(std::string _slash) {
    MeiAttribute *a = new MeiAttribute("slash", _slash);
    b->addAttribute(a);
};

bool mei::Mei_slashcountMixIn::hasSlash() {
    return b->hasAttribute("slash");
};

void mei::Mei_slashcountMixIn::removeSlash() {
    b->removeAttribute("slash");
};

/* include <slashmixin> */
mei::Mei_slurpresentMixIn::Mei_slurpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_slurpresentMixIn::~Mei_slurpresentMixIn() {}
MeiAttribute* mei::Mei_slurpresentMixIn::getSlur() {
    if (!b->hasAttribute("slur")) {
        throw AttributeNotFoundException("slur");
    }
    return b->getAttribute("slur");
};

void mei::Mei_slurpresentMixIn::setSlur(std::string _slur) {
    MeiAttribute *a = new MeiAttribute("slur", _slur);
    b->addAttribute(a);
};

bool mei::Mei_slurpresentMixIn::hasSlur() {
    return b->hasAttribute("slur");
};

void mei::Mei_slurpresentMixIn::removeSlur() {
    b->removeAttribute("slur");
};

/* include <slurmixin> */
mei::Mei_spaceVisMixIn::Mei_spaceVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_spaceVisMixIn::~Mei_spaceVisMixIn() {}
MeiAttribute* mei::Mei_spaceVisMixIn::getCompressable() {
    if (!b->hasAttribute("compressable")) {
        throw AttributeNotFoundException("compressable");
    }
    return b->getAttribute("compressable");
};

void mei::Mei_spaceVisMixIn::setCompressable(std::string _compressable) {
    MeiAttribute *a = new MeiAttribute("compressable", _compressable);
    b->addAttribute(a);
};

bool mei::Mei_spaceVisMixIn::hasCompressable() {
    return b->hasAttribute("compressable");
};

void mei::Mei_spaceVisMixIn::removeCompressable() {
    b->removeAttribute("compressable");
};

/* include <compressablemixin> */
mei::Mei_staffLogMixIn::Mei_staffLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_staffLogMixIn::~Mei_staffLogMixIn() {}
MeiAttribute* mei::Mei_staffLogMixIn::getDef() {
    if (!b->hasAttribute("def")) {
        throw AttributeNotFoundException("def");
    }
    return b->getAttribute("def");
};

void mei::Mei_staffLogMixIn::setDef(std::string _def) {
    MeiAttribute *a = new MeiAttribute("def", _def);
    b->addAttribute(a);
};

bool mei::Mei_staffLogMixIn::hasDef() {
    return b->hasAttribute("def");
};

void mei::Mei_staffLogMixIn::removeDef() {
    b->removeAttribute("def");
};

/* include <defmixin> */
mei::Mei_staffDefVisMixIn::Mei_staffDefVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_staffDefVisMixIn::~Mei_staffDefVisMixIn() {}
MeiAttribute* mei::Mei_staffDefVisMixIn::getGridShow() {
    if (!b->hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return b->getAttribute("grid.show");
};

void mei::Mei_staffDefVisMixIn::setGridShow(std::string _gridshow) {
    MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
    b->addAttribute(a);
};

bool mei::Mei_staffDefVisMixIn::hasGridShow() {
    return b->hasAttribute("grid.show");
};

void mei::Mei_staffDefVisMixIn::removeGridShow() {
    b->removeAttribute("grid.show");
};
MeiAttribute* mei::Mei_staffDefVisMixIn::getLayerscheme() {
    if (!b->hasAttribute("layerscheme")) {
        throw AttributeNotFoundException("layerscheme");
    }
    return b->getAttribute("layerscheme");
};

void mei::Mei_staffDefVisMixIn::setLayerscheme(std::string _layerscheme) {
    MeiAttribute *a = new MeiAttribute("layerscheme", _layerscheme);
    b->addAttribute(a);
};

bool mei::Mei_staffDefVisMixIn::hasLayerscheme() {
    return b->hasAttribute("layerscheme");
};

void mei::Mei_staffDefVisMixIn::removeLayerscheme() {
    b->removeAttribute("layerscheme");
};
MeiAttribute* mei::Mei_staffDefVisMixIn::getLines() {
    if (!b->hasAttribute("lines")) {
        throw AttributeNotFoundException("lines");
    }
    return b->getAttribute("lines");
};

void mei::Mei_staffDefVisMixIn::setLines(std::string _lines) {
    MeiAttribute *a = new MeiAttribute("lines", _lines);
    b->addAttribute(a);
};

bool mei::Mei_staffDefVisMixIn::hasLines() {
    return b->hasAttribute("lines");
};

void mei::Mei_staffDefVisMixIn::removeLines() {
    b->removeAttribute("lines");
};
MeiAttribute* mei::Mei_staffDefVisMixIn::getLinesColor() {
    if (!b->hasAttribute("lines.color")) {
        throw AttributeNotFoundException("lines.color");
    }
    return b->getAttribute("lines.color");
};

void mei::Mei_staffDefVisMixIn::setLinesColor(std::string _linescolor) {
    MeiAttribute *a = new MeiAttribute("lines.color", _linescolor);
    b->addAttribute(a);
};

bool mei::Mei_staffDefVisMixIn::hasLinesColor() {
    return b->hasAttribute("lines.color");
};

void mei::Mei_staffDefVisMixIn::removeLinesColor() {
    b->removeAttribute("lines.color");
};
MeiAttribute* mei::Mei_staffDefVisMixIn::getLinesVisible() {
    if (!b->hasAttribute("lines.visible")) {
        throw AttributeNotFoundException("lines.visible");
    }
    return b->getAttribute("lines.visible");
};

void mei::Mei_staffDefVisMixIn::setLinesVisible(std::string _linesvisible) {
    MeiAttribute *a = new MeiAttribute("lines.visible", _linesvisible);
    b->addAttribute(a);
};

bool mei::Mei_staffDefVisMixIn::hasLinesVisible() {
    return b->hasAttribute("lines.visible");
};

void mei::Mei_staffDefVisMixIn::removeLinesVisible() {
    b->removeAttribute("lines.visible");
};
MeiAttribute* mei::Mei_staffDefVisMixIn::getSpacing() {
    if (!b->hasAttribute("spacing")) {
        throw AttributeNotFoundException("spacing");
    }
    return b->getAttribute("spacing");
};

void mei::Mei_staffDefVisMixIn::setSpacing(std::string _spacing) {
    MeiAttribute *a = new MeiAttribute("spacing", _spacing);
    b->addAttribute(a);
};

bool mei::Mei_staffDefVisMixIn::hasSpacing() {
    return b->hasAttribute("spacing");
};

void mei::Mei_staffDefVisMixIn::removeSpacing() {
    b->removeAttribute("spacing");
};

/* include <spacingmixin> */
mei::Mei_staffGrpVisMixIn::Mei_staffGrpVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_staffGrpVisMixIn::~Mei_staffGrpVisMixIn() {}
MeiAttribute* mei::Mei_staffGrpVisMixIn::getBarthru() {
    if (!b->hasAttribute("barthru")) {
        throw AttributeNotFoundException("barthru");
    }
    return b->getAttribute("barthru");
};

void mei::Mei_staffGrpVisMixIn::setBarthru(std::string _barthru) {
    MeiAttribute *a = new MeiAttribute("barthru", _barthru);
    b->addAttribute(a);
};

bool mei::Mei_staffGrpVisMixIn::hasBarthru() {
    return b->hasAttribute("barthru");
};

void mei::Mei_staffGrpVisMixIn::removeBarthru() {
    b->removeAttribute("barthru");
};

/* include <barthrumixin> */
mei::Mei_staffgroupingsymMixIn::Mei_staffgroupingsymMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_staffgroupingsymMixIn::~Mei_staffgroupingsymMixIn() {}
MeiAttribute* mei::Mei_staffgroupingsymMixIn::getSymbol() {
    if (!b->hasAttribute("symbol")) {
        throw AttributeNotFoundException("symbol");
    }
    return b->getAttribute("symbol");
};

void mei::Mei_staffgroupingsymMixIn::setSymbol(std::string _symbol) {
    MeiAttribute *a = new MeiAttribute("symbol", _symbol);
    b->addAttribute(a);
};

bool mei::Mei_staffgroupingsymMixIn::hasSymbol() {
    return b->hasAttribute("symbol");
};

void mei::Mei_staffgroupingsymMixIn::removeSymbol() {
    b->removeAttribute("symbol");
};

/* include <symbolmixin> */
mei::Mei_staffidentMixIn::Mei_staffidentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_staffidentMixIn::~Mei_staffidentMixIn() {}
MeiAttribute* mei::Mei_staffidentMixIn::getStaff() {
    if (!b->hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->getAttribute("staff");
};

void mei::Mei_staffidentMixIn::setStaff(std::string _staff) {
    MeiAttribute *a = new MeiAttribute("staff", _staff);
    b->addAttribute(a);
};

bool mei::Mei_staffidentMixIn::hasStaff() {
    return b->hasAttribute("staff");
};

void mei::Mei_staffidentMixIn::removeStaff() {
    b->removeAttribute("staff");
};

/* include <staffmixin> */
mei::Mei_stafflocMixIn::Mei_stafflocMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_stafflocMixIn::~Mei_stafflocMixIn() {}
MeiAttribute* mei::Mei_stafflocMixIn::getLoc() {
    if (!b->hasAttribute("loc")) {
        throw AttributeNotFoundException("loc");
    }
    return b->getAttribute("loc");
};

void mei::Mei_stafflocMixIn::setLoc(std::string _loc) {
    MeiAttribute *a = new MeiAttribute("loc", _loc);
    b->addAttribute(a);
};

bool mei::Mei_stafflocMixIn::hasLoc() {
    return b->hasAttribute("loc");
};

void mei::Mei_stafflocMixIn::removeLoc() {
    b->removeAttribute("loc");
};

/* include <locmixin> */
mei::Mei_startendidMixIn::Mei_startendidMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_startendidMixIn::~Mei_startendidMixIn() {}
MeiAttribute* mei::Mei_startendidMixIn::getEndid() {
    if (!b->hasAttribute("endid")) {
        throw AttributeNotFoundException("endid");
    }
    return b->getAttribute("endid");
};

void mei::Mei_startendidMixIn::setEndid(std::string _endid) {
    MeiAttribute *a = new MeiAttribute("endid", _endid);
    b->addAttribute(a);
};

bool mei::Mei_startendidMixIn::hasEndid() {
    return b->hasAttribute("endid");
};

void mei::Mei_startendidMixIn::removeEndid() {
    b->removeAttribute("endid");
};

/* include <endidmixin> */
mei::Mei_startidMixIn::Mei_startidMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_startidMixIn::~Mei_startidMixIn() {}
MeiAttribute* mei::Mei_startidMixIn::getStartid() {
    if (!b->hasAttribute("startid")) {
        throw AttributeNotFoundException("startid");
    }
    return b->getAttribute("startid");
};

void mei::Mei_startidMixIn::setStartid(std::string _startid) {
    MeiAttribute *a = new MeiAttribute("startid", _startid);
    b->addAttribute(a);
};

bool mei::Mei_startidMixIn::hasStartid() {
    return b->hasAttribute("startid");
};

void mei::Mei_startidMixIn::removeStartid() {
    b->removeAttribute("startid");
};

/* include <startidmixin> */
mei::Mei_stemmedMixIn::Mei_stemmedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_stemmedMixIn::~Mei_stemmedMixIn() {}
MeiAttribute* mei::Mei_stemmedMixIn::getStemDir() {
    if (!b->hasAttribute("stem.dir")) {
        throw AttributeNotFoundException("stem.dir");
    }
    return b->getAttribute("stem.dir");
};

void mei::Mei_stemmedMixIn::setStemDir(std::string _stemdir) {
    MeiAttribute *a = new MeiAttribute("stem.dir", _stemdir);
    b->addAttribute(a);
};

bool mei::Mei_stemmedMixIn::hasStemDir() {
    return b->hasAttribute("stem.dir");
};

void mei::Mei_stemmedMixIn::removeStemDir() {
    b->removeAttribute("stem.dir");
};
MeiAttribute* mei::Mei_stemmedMixIn::getStemLen() {
    if (!b->hasAttribute("stem.len")) {
        throw AttributeNotFoundException("stem.len");
    }
    return b->getAttribute("stem.len");
};

void mei::Mei_stemmedMixIn::setStemLen(std::string _stemlen) {
    MeiAttribute *a = new MeiAttribute("stem.len", _stemlen);
    b->addAttribute(a);
};

bool mei::Mei_stemmedMixIn::hasStemLen() {
    return b->hasAttribute("stem.len");
};

void mei::Mei_stemmedMixIn::removeStemLen() {
    b->removeAttribute("stem.len");
};
MeiAttribute* mei::Mei_stemmedMixIn::getStemPos() {
    if (!b->hasAttribute("stem.pos")) {
        throw AttributeNotFoundException("stem.pos");
    }
    return b->getAttribute("stem.pos");
};

void mei::Mei_stemmedMixIn::setStemPos(std::string _stempos) {
    MeiAttribute *a = new MeiAttribute("stem.pos", _stempos);
    b->addAttribute(a);
};

bool mei::Mei_stemmedMixIn::hasStemPos() {
    return b->hasAttribute("stem.pos");
};

void mei::Mei_stemmedMixIn::removeStemPos() {
    b->removeAttribute("stem.pos");
};
MeiAttribute* mei::Mei_stemmedMixIn::getStemX() {
    if (!b->hasAttribute("stem.x")) {
        throw AttributeNotFoundException("stem.x");
    }
    return b->getAttribute("stem.x");
};

void mei::Mei_stemmedMixIn::setStemX(std::string _stemx) {
    MeiAttribute *a = new MeiAttribute("stem.x", _stemx);
    b->addAttribute(a);
};

bool mei::Mei_stemmedMixIn::hasStemX() {
    return b->hasAttribute("stem.x");
};

void mei::Mei_stemmedMixIn::removeStemX() {
    b->removeAttribute("stem.x");
};
MeiAttribute* mei::Mei_stemmedMixIn::getStemY() {
    if (!b->hasAttribute("stem.y")) {
        throw AttributeNotFoundException("stem.y");
    }
    return b->getAttribute("stem.y");
};

void mei::Mei_stemmedMixIn::setStemY(std::string _stemy) {
    MeiAttribute *a = new MeiAttribute("stem.y", _stemy);
    b->addAttribute(a);
};

bool mei::Mei_stemmedMixIn::hasStemY() {
    return b->hasAttribute("stem.y");
};

void mei::Mei_stemmedMixIn::removeStemY() {
    b->removeAttribute("stem.y");
};

/* include <stem.ymixin> */
mei::Mei_sylLogMixIn::Mei_sylLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_sylLogMixIn::~Mei_sylLogMixIn() {}
MeiAttribute* mei::Mei_sylLogMixIn::getCon() {
    if (!b->hasAttribute("con")) {
        throw AttributeNotFoundException("con");
    }
    return b->getAttribute("con");
};

void mei::Mei_sylLogMixIn::setCon(std::string _con) {
    MeiAttribute *a = new MeiAttribute("con", _con);
    b->addAttribute(a);
};

bool mei::Mei_sylLogMixIn::hasCon() {
    return b->hasAttribute("con");
};

void mei::Mei_sylLogMixIn::removeCon() {
    b->removeAttribute("con");
};
MeiAttribute* mei::Mei_sylLogMixIn::getWordpos() {
    if (!b->hasAttribute("wordpos")) {
        throw AttributeNotFoundException("wordpos");
    }
    return b->getAttribute("wordpos");
};

void mei::Mei_sylLogMixIn::setWordpos(std::string _wordpos) {
    MeiAttribute *a = new MeiAttribute("wordpos", _wordpos);
    b->addAttribute(a);
};

bool mei::Mei_sylLogMixIn::hasWordpos() {
    return b->hasAttribute("wordpos");
};

void mei::Mei_sylLogMixIn::removeWordpos() {
    b->removeAttribute("wordpos");
};

/* include <wordposmixin> */
mei::Mei_syltextMixIn::Mei_syltextMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_syltextMixIn::~Mei_syltextMixIn() {}
MeiAttribute* mei::Mei_syltextMixIn::getSyl() {
    if (!b->hasAttribute("syl")) {
        throw AttributeNotFoundException("syl");
    }
    return b->getAttribute("syl");
};

void mei::Mei_syltextMixIn::setSyl(std::string _syl) {
    MeiAttribute *a = new MeiAttribute("syl", _syl);
    b->addAttribute(a);
};

bool mei::Mei_syltextMixIn::hasSyl() {
    return b->hasAttribute("syl");
};

void mei::Mei_syltextMixIn::removeSyl() {
    b->removeAttribute("syl");
};

/* include <sylmixin> */
mei::Mei_textstyleMixIn::Mei_textstyleMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_textstyleMixIn::~Mei_textstyleMixIn() {}
MeiAttribute* mei::Mei_textstyleMixIn::getTextFam() {
    if (!b->hasAttribute("text.fam")) {
        throw AttributeNotFoundException("text.fam");
    }
    return b->getAttribute("text.fam");
};

void mei::Mei_textstyleMixIn::setTextFam(std::string _textfam) {
    MeiAttribute *a = new MeiAttribute("text.fam", _textfam);
    b->addAttribute(a);
};

bool mei::Mei_textstyleMixIn::hasTextFam() {
    return b->hasAttribute("text.fam");
};

void mei::Mei_textstyleMixIn::removeTextFam() {
    b->removeAttribute("text.fam");
};
MeiAttribute* mei::Mei_textstyleMixIn::getTextName() {
    if (!b->hasAttribute("text.name")) {
        throw AttributeNotFoundException("text.name");
    }
    return b->getAttribute("text.name");
};

void mei::Mei_textstyleMixIn::setTextName(std::string _textname) {
    MeiAttribute *a = new MeiAttribute("text.name", _textname);
    b->addAttribute(a);
};

bool mei::Mei_textstyleMixIn::hasTextName() {
    return b->hasAttribute("text.name");
};

void mei::Mei_textstyleMixIn::removeTextName() {
    b->removeAttribute("text.name");
};
MeiAttribute* mei::Mei_textstyleMixIn::getTextSize() {
    if (!b->hasAttribute("text.size")) {
        throw AttributeNotFoundException("text.size");
    }
    return b->getAttribute("text.size");
};

void mei::Mei_textstyleMixIn::setTextSize(std::string _textsize) {
    MeiAttribute *a = new MeiAttribute("text.size", _textsize);
    b->addAttribute(a);
};

bool mei::Mei_textstyleMixIn::hasTextSize() {
    return b->hasAttribute("text.size");
};

void mei::Mei_textstyleMixIn::removeTextSize() {
    b->removeAttribute("text.size");
};
MeiAttribute* mei::Mei_textstyleMixIn::getTextStyle() {
    if (!b->hasAttribute("text.style")) {
        throw AttributeNotFoundException("text.style");
    }
    return b->getAttribute("text.style");
};

void mei::Mei_textstyleMixIn::setTextStyle(std::string _textstyle) {
    MeiAttribute *a = new MeiAttribute("text.style", _textstyle);
    b->addAttribute(a);
};

bool mei::Mei_textstyleMixIn::hasTextStyle() {
    return b->hasAttribute("text.style");
};

void mei::Mei_textstyleMixIn::removeTextStyle() {
    b->removeAttribute("text.style");
};
MeiAttribute* mei::Mei_textstyleMixIn::getTextWeight() {
    if (!b->hasAttribute("text.weight")) {
        throw AttributeNotFoundException("text.weight");
    }
    return b->getAttribute("text.weight");
};

void mei::Mei_textstyleMixIn::setTextWeight(std::string _textweight) {
    MeiAttribute *a = new MeiAttribute("text.weight", _textweight);
    b->addAttribute(a);
};

bool mei::Mei_textstyleMixIn::hasTextWeight() {
    return b->hasAttribute("text.weight");
};

void mei::Mei_textstyleMixIn::removeTextWeight() {
    b->removeAttribute("text.weight");
};

/* include <text.weightmixin> */
mei::Mei_tiepresentMixIn::Mei_tiepresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_tiepresentMixIn::~Mei_tiepresentMixIn() {}
MeiAttribute* mei::Mei_tiepresentMixIn::getTie() {
    if (!b->hasAttribute("tie")) {
        throw AttributeNotFoundException("tie");
    }
    return b->getAttribute("tie");
};

void mei::Mei_tiepresentMixIn::setTie(std::string _tie) {
    MeiAttribute *a = new MeiAttribute("tie", _tie);
    b->addAttribute(a);
};

bool mei::Mei_tiepresentMixIn::hasTie() {
    return b->hasAttribute("tie");
};

void mei::Mei_tiepresentMixIn::removeTie() {
    b->removeAttribute("tie");
};

/* include <tiemixin> */
mei::Mei_timestampMusicalMixIn::Mei_timestampMusicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_timestampMusicalMixIn::~Mei_timestampMusicalMixIn() {}
MeiAttribute* mei::Mei_timestampMusicalMixIn::getTstamp() {
    if (!b->hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->getAttribute("tstamp");
};

void mei::Mei_timestampMusicalMixIn::setTstamp(std::string _tstamp) {
    MeiAttribute *a = new MeiAttribute("tstamp", _tstamp);
    b->addAttribute(a);
};

bool mei::Mei_timestampMusicalMixIn::hasTstamp() {
    return b->hasAttribute("tstamp");
};

void mei::Mei_timestampMusicalMixIn::removeTstamp() {
    b->removeAttribute("tstamp");
};

/* include <tstampmixin> */
mei::Mei_timestampPerformedMixIn::Mei_timestampPerformedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_timestampPerformedMixIn::~Mei_timestampPerformedMixIn() {}
MeiAttribute* mei::Mei_timestampPerformedMixIn::getTstampGes() {
    if (!b->hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->getAttribute("tstamp.ges");
};

void mei::Mei_timestampPerformedMixIn::setTstampGes(std::string _tstampges) {
    MeiAttribute *a = new MeiAttribute("tstamp.ges", _tstampges);
    b->addAttribute(a);
};

bool mei::Mei_timestampPerformedMixIn::hasTstampGes() {
    return b->hasAttribute("tstamp.ges");
};

void mei::Mei_timestampPerformedMixIn::removeTstampGes() {
    b->removeAttribute("tstamp.ges");
};
MeiAttribute* mei::Mei_timestampPerformedMixIn::getTstampReal() {
    if (!b->hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->getAttribute("tstamp.real");
};

void mei::Mei_timestampPerformedMixIn::setTstampReal(std::string _tstampreal) {
    MeiAttribute *a = new MeiAttribute("tstamp.real", _tstampreal);
    b->addAttribute(a);
};

bool mei::Mei_timestampPerformedMixIn::hasTstampReal() {
    return b->hasAttribute("tstamp.real");
};

void mei::Mei_timestampPerformedMixIn::removeTstampReal() {
    b->removeAttribute("tstamp.real");
};

/* include <tstamp.realmixin> */
mei::Mei_transpositionMixIn::Mei_transpositionMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_transpositionMixIn::~Mei_transpositionMixIn() {}
MeiAttribute* mei::Mei_transpositionMixIn::getTransDiat() {
    if (!b->hasAttribute("trans.diat")) {
        throw AttributeNotFoundException("trans.diat");
    }
    return b->getAttribute("trans.diat");
};

void mei::Mei_transpositionMixIn::setTransDiat(std::string _transdiat) {
    MeiAttribute *a = new MeiAttribute("trans.diat", _transdiat);
    b->addAttribute(a);
};

bool mei::Mei_transpositionMixIn::hasTransDiat() {
    return b->hasAttribute("trans.diat");
};

void mei::Mei_transpositionMixIn::removeTransDiat() {
    b->removeAttribute("trans.diat");
};
MeiAttribute* mei::Mei_transpositionMixIn::getTransSemi() {
    if (!b->hasAttribute("trans.semi")) {
        throw AttributeNotFoundException("trans.semi");
    }
    return b->getAttribute("trans.semi");
};

void mei::Mei_transpositionMixIn::setTransSemi(std::string _transsemi) {
    MeiAttribute *a = new MeiAttribute("trans.semi", _transsemi);
    b->addAttribute(a);
};

bool mei::Mei_transpositionMixIn::hasTransSemi() {
    return b->hasAttribute("trans.semi");
};

void mei::Mei_transpositionMixIn::removeTransSemi() {
    b->removeAttribute("trans.semi");
};

/* include <trans.semimixin> */
mei::Mei_tupletpresentMixIn::Mei_tupletpresentMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_tupletpresentMixIn::~Mei_tupletpresentMixIn() {}
MeiAttribute* mei::Mei_tupletpresentMixIn::getTuplet() {
    if (!b->hasAttribute("tuplet")) {
        throw AttributeNotFoundException("tuplet");
    }
    return b->getAttribute("tuplet");
};

void mei::Mei_tupletpresentMixIn::setTuplet(std::string _tuplet) {
    MeiAttribute *a = new MeiAttribute("tuplet", _tuplet);
    b->addAttribute(a);
};

bool mei::Mei_tupletpresentMixIn::hasTuplet() {
    return b->hasAttribute("tuplet");
};

void mei::Mei_tupletpresentMixIn::removeTuplet() {
    b->removeAttribute("tuplet");
};

/* include <tupletmixin> */
mei::Mei_typedMixIn::Mei_typedMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_typedMixIn::~Mei_typedMixIn() {}
MeiAttribute* mei::Mei_typedMixIn::getType() {
    if (!b->hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->getAttribute("type");
};

void mei::Mei_typedMixIn::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    b->addAttribute(a);
};

bool mei::Mei_typedMixIn::hasType() {
    return b->hasAttribute("type");
};

void mei::Mei_typedMixIn::removeType() {
    b->removeAttribute("type");
};
MeiAttribute* mei::Mei_typedMixIn::getSubtype() {
    if (!b->hasAttribute("subtype")) {
        throw AttributeNotFoundException("subtype");
    }
    return b->getAttribute("subtype");
};

void mei::Mei_typedMixIn::setSubtype(std::string _subtype) {
    MeiAttribute *a = new MeiAttribute("subtype", _subtype);
    b->addAttribute(a);
};

bool mei::Mei_typedMixIn::hasSubtype() {
    return b->hasAttribute("subtype");
};

void mei::Mei_typedMixIn::removeSubtype() {
    b->removeAttribute("subtype");
};

/* include <subtypemixin> */
mei::Mei_typographyMixIn::Mei_typographyMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_typographyMixIn::~Mei_typographyMixIn() {}
MeiAttribute* mei::Mei_typographyMixIn::getFontfam() {
    if (!b->hasAttribute("fontfam")) {
        throw AttributeNotFoundException("fontfam");
    }
    return b->getAttribute("fontfam");
};

void mei::Mei_typographyMixIn::setFontfam(std::string _fontfam) {
    MeiAttribute *a = new MeiAttribute("fontfam", _fontfam);
    b->addAttribute(a);
};

bool mei::Mei_typographyMixIn::hasFontfam() {
    return b->hasAttribute("fontfam");
};

void mei::Mei_typographyMixIn::removeFontfam() {
    b->removeAttribute("fontfam");
};
MeiAttribute* mei::Mei_typographyMixIn::getFontname() {
    if (!b->hasAttribute("fontname")) {
        throw AttributeNotFoundException("fontname");
    }
    return b->getAttribute("fontname");
};

void mei::Mei_typographyMixIn::setFontname(std::string _fontname) {
    MeiAttribute *a = new MeiAttribute("fontname", _fontname);
    b->addAttribute(a);
};

bool mei::Mei_typographyMixIn::hasFontname() {
    return b->hasAttribute("fontname");
};

void mei::Mei_typographyMixIn::removeFontname() {
    b->removeAttribute("fontname");
};
MeiAttribute* mei::Mei_typographyMixIn::getFontsize() {
    if (!b->hasAttribute("fontsize")) {
        throw AttributeNotFoundException("fontsize");
    }
    return b->getAttribute("fontsize");
};

void mei::Mei_typographyMixIn::setFontsize(std::string _fontsize) {
    MeiAttribute *a = new MeiAttribute("fontsize", _fontsize);
    b->addAttribute(a);
};

bool mei::Mei_typographyMixIn::hasFontsize() {
    return b->hasAttribute("fontsize");
};

void mei::Mei_typographyMixIn::removeFontsize() {
    b->removeAttribute("fontsize");
};
MeiAttribute* mei::Mei_typographyMixIn::getFontstyle() {
    if (!b->hasAttribute("fontstyle")) {
        throw AttributeNotFoundException("fontstyle");
    }
    return b->getAttribute("fontstyle");
};

void mei::Mei_typographyMixIn::setFontstyle(std::string _fontstyle) {
    MeiAttribute *a = new MeiAttribute("fontstyle", _fontstyle);
    b->addAttribute(a);
};

bool mei::Mei_typographyMixIn::hasFontstyle() {
    return b->hasAttribute("fontstyle");
};

void mei::Mei_typographyMixIn::removeFontstyle() {
    b->removeAttribute("fontstyle");
};
MeiAttribute* mei::Mei_typographyMixIn::getFontweight() {
    if (!b->hasAttribute("fontweight")) {
        throw AttributeNotFoundException("fontweight");
    }
    return b->getAttribute("fontweight");
};

void mei::Mei_typographyMixIn::setFontweight(std::string _fontweight) {
    MeiAttribute *a = new MeiAttribute("fontweight", _fontweight);
    b->addAttribute(a);
};

bool mei::Mei_typographyMixIn::hasFontweight() {
    return b->hasAttribute("fontweight");
};

void mei::Mei_typographyMixIn::removeFontweight() {
    b->removeAttribute("fontweight");
};

/* include <fontweightmixin> */
mei::Mei_visibilityMixIn::Mei_visibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_visibilityMixIn::~Mei_visibilityMixIn() {}
MeiAttribute* mei::Mei_visibilityMixIn::getVisible() {
    if (!b->hasAttribute("visible")) {
        throw AttributeNotFoundException("visible");
    }
    return b->getAttribute("visible");
};

void mei::Mei_visibilityMixIn::setVisible(std::string _visible) {
    MeiAttribute *a = new MeiAttribute("visible", _visible);
    b->addAttribute(a);
};

bool mei::Mei_visibilityMixIn::hasVisible() {
    return b->hasAttribute("visible");
};

void mei::Mei_visibilityMixIn::removeVisible() {
    b->removeAttribute("visible");
};

/* include <visiblemixin> */
mei::Mei_visualoffsetHoMixIn::Mei_visualoffsetHoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_visualoffsetHoMixIn::~Mei_visualoffsetHoMixIn() {}
MeiAttribute* mei::Mei_visualoffsetHoMixIn::getHo() {
    if (!b->hasAttribute("ho")) {
        throw AttributeNotFoundException("ho");
    }
    return b->getAttribute("ho");
};

void mei::Mei_visualoffsetHoMixIn::setHo(std::string _ho) {
    MeiAttribute *a = new MeiAttribute("ho", _ho);
    b->addAttribute(a);
};

bool mei::Mei_visualoffsetHoMixIn::hasHo() {
    return b->hasAttribute("ho");
};

void mei::Mei_visualoffsetHoMixIn::removeHo() {
    b->removeAttribute("ho");
};

/* include <homixin> */
mei::Mei_visualoffsetToMixIn::Mei_visualoffsetToMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_visualoffsetToMixIn::~Mei_visualoffsetToMixIn() {}
MeiAttribute* mei::Mei_visualoffsetToMixIn::getTo() {
    if (!b->hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->getAttribute("to");
};

void mei::Mei_visualoffsetToMixIn::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    b->addAttribute(a);
};

bool mei::Mei_visualoffsetToMixIn::hasTo() {
    return b->hasAttribute("to");
};

void mei::Mei_visualoffsetToMixIn::removeTo() {
    b->removeAttribute("to");
};

/* include <tomixin> */
mei::Mei_visualoffsetVoMixIn::Mei_visualoffsetVoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_visualoffsetVoMixIn::~Mei_visualoffsetVoMixIn() {}
MeiAttribute* mei::Mei_visualoffsetVoMixIn::getVo() {
    if (!b->hasAttribute("vo")) {
        throw AttributeNotFoundException("vo");
    }
    return b->getAttribute("vo");
};

void mei::Mei_visualoffsetVoMixIn::setVo(std::string _vo) {
    MeiAttribute *a = new MeiAttribute("vo", _vo);
    b->addAttribute(a);
};

bool mei::Mei_visualoffsetVoMixIn::hasVo() {
    return b->hasAttribute("vo");
};

void mei::Mei_visualoffsetVoMixIn::removeVo() {
    b->removeAttribute("vo");
};

/* include <vomixin> */
mei::Mei_visualoffset2HoMixIn::Mei_visualoffset2HoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_visualoffset2HoMixIn::~Mei_visualoffset2HoMixIn() {}
MeiAttribute* mei::Mei_visualoffset2HoMixIn::getStartho() {
    if (!b->hasAttribute("startho")) {
        throw AttributeNotFoundException("startho");
    }
    return b->getAttribute("startho");
};

void mei::Mei_visualoffset2HoMixIn::setStartho(std::string _startho) {
    MeiAttribute *a = new MeiAttribute("startho", _startho);
    b->addAttribute(a);
};

bool mei::Mei_visualoffset2HoMixIn::hasStartho() {
    return b->hasAttribute("startho");
};

void mei::Mei_visualoffset2HoMixIn::removeStartho() {
    b->removeAttribute("startho");
};
MeiAttribute* mei::Mei_visualoffset2HoMixIn::getEndho() {
    if (!b->hasAttribute("endho")) {
        throw AttributeNotFoundException("endho");
    }
    return b->getAttribute("endho");
};

void mei::Mei_visualoffset2HoMixIn::setEndho(std::string _endho) {
    MeiAttribute *a = new MeiAttribute("endho", _endho);
    b->addAttribute(a);
};

bool mei::Mei_visualoffset2HoMixIn::hasEndho() {
    return b->hasAttribute("endho");
};

void mei::Mei_visualoffset2HoMixIn::removeEndho() {
    b->removeAttribute("endho");
};

/* include <endhomixin> */
mei::Mei_visualoffset2ToMixIn::Mei_visualoffset2ToMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_visualoffset2ToMixIn::~Mei_visualoffset2ToMixIn() {}
MeiAttribute* mei::Mei_visualoffset2ToMixIn::getStartto() {
    if (!b->hasAttribute("startto")) {
        throw AttributeNotFoundException("startto");
    }
    return b->getAttribute("startto");
};

void mei::Mei_visualoffset2ToMixIn::setStartto(std::string _startto) {
    MeiAttribute *a = new MeiAttribute("startto", _startto);
    b->addAttribute(a);
};

bool mei::Mei_visualoffset2ToMixIn::hasStartto() {
    return b->hasAttribute("startto");
};

void mei::Mei_visualoffset2ToMixIn::removeStartto() {
    b->removeAttribute("startto");
};
MeiAttribute* mei::Mei_visualoffset2ToMixIn::getEndto() {
    if (!b->hasAttribute("endto")) {
        throw AttributeNotFoundException("endto");
    }
    return b->getAttribute("endto");
};

void mei::Mei_visualoffset2ToMixIn::setEndto(std::string _endto) {
    MeiAttribute *a = new MeiAttribute("endto", _endto);
    b->addAttribute(a);
};

bool mei::Mei_visualoffset2ToMixIn::hasEndto() {
    return b->hasAttribute("endto");
};

void mei::Mei_visualoffset2ToMixIn::removeEndto() {
    b->removeAttribute("endto");
};

/* include <endtomixin> */
mei::Mei_visualoffset2VoMixIn::Mei_visualoffset2VoMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_visualoffset2VoMixIn::~Mei_visualoffset2VoMixIn() {}
MeiAttribute* mei::Mei_visualoffset2VoMixIn::getStartvo() {
    if (!b->hasAttribute("startvo")) {
        throw AttributeNotFoundException("startvo");
    }
    return b->getAttribute("startvo");
};

void mei::Mei_visualoffset2VoMixIn::setStartvo(std::string _startvo) {
    MeiAttribute *a = new MeiAttribute("startvo", _startvo);
    b->addAttribute(a);
};

bool mei::Mei_visualoffset2VoMixIn::hasStartvo() {
    return b->hasAttribute("startvo");
};

void mei::Mei_visualoffset2VoMixIn::removeStartvo() {
    b->removeAttribute("startvo");
};
MeiAttribute* mei::Mei_visualoffset2VoMixIn::getEndvo() {
    if (!b->hasAttribute("endvo")) {
        throw AttributeNotFoundException("endvo");
    }
    return b->getAttribute("endvo");
};

void mei::Mei_visualoffset2VoMixIn::setEndvo(std::string _endvo) {
    MeiAttribute *a = new MeiAttribute("endvo", _endvo);
    b->addAttribute(a);
};

bool mei::Mei_visualoffset2VoMixIn::hasEndvo() {
    return b->hasAttribute("endvo");
};

void mei::Mei_visualoffset2VoMixIn::removeEndvo() {
    b->removeAttribute("endvo");
};

/* include <endvomixin> */
mei::Mei_widthMixIn::Mei_widthMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_widthMixIn::~Mei_widthMixIn() {}
MeiAttribute* mei::Mei_widthMixIn::getWidth() {
    if (!b->hasAttribute("width")) {
        throw AttributeNotFoundException("width");
    }
    return b->getAttribute("width");
};

void mei::Mei_widthMixIn::setWidth(std::string _width) {
    MeiAttribute *a = new MeiAttribute("width", _width);
    b->addAttribute(a);
};

bool mei::Mei_widthMixIn::hasWidth() {
    return b->hasAttribute("width");
};

void mei::Mei_widthMixIn::removeWidth() {
    b->removeAttribute("width");
};

/* include <widthmixin> */
mei::Mei_xyMixIn::Mei_xyMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_xyMixIn::~Mei_xyMixIn() {}
MeiAttribute* mei::Mei_xyMixIn::getX() {
    if (!b->hasAttribute("x")) {
        throw AttributeNotFoundException("x");
    }
    return b->getAttribute("x");
};

void mei::Mei_xyMixIn::setX(std::string _x) {
    MeiAttribute *a = new MeiAttribute("x", _x);
    b->addAttribute(a);
};

bool mei::Mei_xyMixIn::hasX() {
    return b->hasAttribute("x");
};

void mei::Mei_xyMixIn::removeX() {
    b->removeAttribute("x");
};
MeiAttribute* mei::Mei_xyMixIn::getY() {
    if (!b->hasAttribute("y")) {
        throw AttributeNotFoundException("y");
    }
    return b->getAttribute("y");
};

void mei::Mei_xyMixIn::setY(std::string _y) {
    MeiAttribute *a = new MeiAttribute("y", _y);
    b->addAttribute(a);
};

bool mei::Mei_xyMixIn::hasY() {
    return b->hasAttribute("y");
};

void mei::Mei_xyMixIn::removeY() {
    b->removeAttribute("y");
};

/* include <ymixin> */
mei::Mei_xy2MixIn::Mei_xy2MixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_xy2MixIn::~Mei_xy2MixIn() {}
MeiAttribute* mei::Mei_xy2MixIn::getX2() {
    if (!b->hasAttribute("x2")) {
        throw AttributeNotFoundException("x2");
    }
    return b->getAttribute("x2");
};

void mei::Mei_xy2MixIn::setX2(std::string _x2) {
    MeiAttribute *a = new MeiAttribute("x2", _x2);
    b->addAttribute(a);
};

bool mei::Mei_xy2MixIn::hasX2() {
    return b->hasAttribute("x2");
};

void mei::Mei_xy2MixIn::removeX2() {
    b->removeAttribute("x2");
};
MeiAttribute* mei::Mei_xy2MixIn::getY2() {
    if (!b->hasAttribute("y2")) {
        throw AttributeNotFoundException("y2");
    }
    return b->getAttribute("y2");
};

void mei::Mei_xy2MixIn::setY2(std::string _y2) {
    MeiAttribute *a = new MeiAttribute("y2", _y2);
    b->addAttribute(a);
};

bool mei::Mei_xy2MixIn::hasY2() {
    return b->hasAttribute("y2");
};

void mei::Mei_xy2MixIn::removeY2() {
    b->removeAttribute("y2");
};

/* include <y2mixin> */


