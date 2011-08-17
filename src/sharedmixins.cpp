

#include "sharedmixins.h"
using std::string;


AccidLogMixIn::AccidLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AccidLogMixIn::getFuncValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return b->m_Base.getAttributeValue("func");
};

MeiAttribute* AccidLogMixIn::getFunc() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return b->m_Base.getAttribute("func");
};

void AccidLogMixIn::setFunc(std::string _func) {
    if (!b->m_Base.hasAttribute("func")) {
        MeiAttribute *a = new MeiAttribute("func", _func);
        b->m_Base.addAttribute(a);
    }
};

bool AccidLogMixIn::hasFunc() {
    return b->m_Base.hasAttribute("func");
};

void AccidLogMixIn::removeFunc() {
    b->m_Base.removeAttribute("func");
};


AccidVisMixIn::AccidVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AccidVisMixIn::getPlaceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->m_Base.getAttributeValue("place");
};

MeiAttribute* AccidVisMixIn::getPlace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->m_Base.getAttribute("place");
};

void AccidVisMixIn::setPlace(std::string _place) {
    if (!b->m_Base.hasAttribute("place")) {
        MeiAttribute *a = new MeiAttribute("place", _place);
        b->m_Base.addAttribute(a);
    }
};

bool AccidVisMixIn::hasPlace() {
    return b->m_Base.hasAttribute("place");
};

void AccidVisMixIn::removePlace() {
    b->m_Base.removeAttribute("place");
};


AccidentalMixIn::AccidentalMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AccidentalMixIn::getAccidValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accid")) {
        throw AttributeNotFoundException("accid");
    }
    return b->m_Base.getAttributeValue("accid");
};

MeiAttribute* AccidentalMixIn::getAccid() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accid")) {
        throw AttributeNotFoundException("accid");
    }
    return b->m_Base.getAttribute("accid");
};

void AccidentalMixIn::setAccid(std::string _accid) {
    if (!b->m_Base.hasAttribute("accid")) {
        MeiAttribute *a = new MeiAttribute("accid", _accid);
        b->m_Base.addAttribute(a);
    }
};

bool AccidentalMixIn::hasAccid() {
    return b->m_Base.hasAttribute("accid");
};

void AccidentalMixIn::removeAccid() {
    b->m_Base.removeAttribute("accid");
};


AccidentalPerformedMixIn::AccidentalPerformedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AccidentalPerformedMixIn::getAccidGesValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accid.ges")) {
        throw AttributeNotFoundException("accid.ges");
    }
    return b->m_Base.getAttributeValue("accid.ges");
};

MeiAttribute* AccidentalPerformedMixIn::getAccidGes() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accid.ges")) {
        throw AttributeNotFoundException("accid.ges");
    }
    return b->m_Base.getAttribute("accid.ges");
};

void AccidentalPerformedMixIn::setAccidGes(std::string _accidges) {
    if (!b->m_Base.hasAttribute("accid.ges")) {
        MeiAttribute *a = new MeiAttribute("accid.ges", _accidges);
        b->m_Base.addAttribute(a);
    }
};

bool AccidentalPerformedMixIn::hasAccidGes() {
    return b->m_Base.hasAttribute("accid.ges");
};

void AccidentalPerformedMixIn::removeAccidGes() {
    b->m_Base.removeAttribute("accid.ges");
};


AltsymMixIn::AltsymMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AltsymMixIn::getAltsymValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("altsym")) {
        throw AttributeNotFoundException("altsym");
    }
    return b->m_Base.getAttributeValue("altsym");
};

MeiAttribute* AltsymMixIn::getAltsym() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("altsym")) {
        throw AttributeNotFoundException("altsym");
    }
    return b->m_Base.getAttribute("altsym");
};

void AltsymMixIn::setAltsym(std::string _altsym) {
    if (!b->m_Base.hasAttribute("altsym")) {
        MeiAttribute *a = new MeiAttribute("altsym", _altsym);
        b->m_Base.addAttribute(a);
    }
};

bool AltsymMixIn::hasAltsym() {
    return b->m_Base.hasAttribute("altsym");
};

void AltsymMixIn::removeAltsym() {
    b->m_Base.removeAttribute("altsym");
};


ArticulationMixIn::ArticulationMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ArticulationMixIn::getArticValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("artic")) {
        throw AttributeNotFoundException("artic");
    }
    return b->m_Base.getAttributeValue("artic");
};

MeiAttribute* ArticulationMixIn::getArtic() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("artic")) {
        throw AttributeNotFoundException("artic");
    }
    return b->m_Base.getAttribute("artic");
};

void ArticulationMixIn::setArtic(std::string _artic) {
    if (!b->m_Base.hasAttribute("artic")) {
        MeiAttribute *a = new MeiAttribute("artic", _artic);
        b->m_Base.addAttribute(a);
    }
};

bool ArticulationMixIn::hasArtic() {
    return b->m_Base.hasAttribute("artic");
};

void ArticulationMixIn::removeArtic() {
    b->m_Base.removeAttribute("artic");
};


ArticulationPerformedMixIn::ArticulationPerformedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ArticulationPerformedMixIn::getArticGesValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("artic.ges")) {
        throw AttributeNotFoundException("artic.ges");
    }
    return b->m_Base.getAttributeValue("artic.ges");
};

MeiAttribute* ArticulationPerformedMixIn::getArticGes() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("artic.ges")) {
        throw AttributeNotFoundException("artic.ges");
    }
    return b->m_Base.getAttribute("artic.ges");
};

void ArticulationPerformedMixIn::setArticGes(std::string _articges) {
    if (!b->m_Base.hasAttribute("artic.ges")) {
        MeiAttribute *a = new MeiAttribute("artic.ges", _articges);
        b->m_Base.addAttribute(a);
    }
};

bool ArticulationPerformedMixIn::hasArticGes() {
    return b->m_Base.hasAttribute("artic.ges");
};

void ArticulationPerformedMixIn::removeArticGes() {
    b->m_Base.removeAttribute("artic.ges");
};


AugmentdotsMixIn::AugmentdotsMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AugmentdotsMixIn::getDotsValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dots")) {
        throw AttributeNotFoundException("dots");
    }
    return b->m_Base.getAttributeValue("dots");
};

MeiAttribute* AugmentdotsMixIn::getDots() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dots")) {
        throw AttributeNotFoundException("dots");
    }
    return b->m_Base.getAttribute("dots");
};

void AugmentdotsMixIn::setDots(std::string _dots) {
    if (!b->m_Base.hasAttribute("dots")) {
        MeiAttribute *a = new MeiAttribute("dots", _dots);
        b->m_Base.addAttribute(a);
    }
};

bool AugmentdotsMixIn::hasDots() {
    return b->m_Base.hasAttribute("dots");
};

void AugmentdotsMixIn::removeDots() {
    b->m_Base.removeAttribute("dots");
};


AuthorizedMixIn::AuthorizedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string AuthorizedMixIn::getAuthorityValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authority")) {
        throw AttributeNotFoundException("authority");
    }
    return b->m_Base.getAttributeValue("authority");
};

MeiAttribute* AuthorizedMixIn::getAuthority() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authority")) {
        throw AttributeNotFoundException("authority");
    }
    return b->m_Base.getAttribute("authority");
};

void AuthorizedMixIn::setAuthority(std::string _authority) {
    if (!b->m_Base.hasAttribute("authority")) {
        MeiAttribute *a = new MeiAttribute("authority", _authority);
        b->m_Base.addAttribute(a);
    }
};

bool AuthorizedMixIn::hasAuthority() {
    return b->m_Base.hasAttribute("authority");
};

void AuthorizedMixIn::removeAuthority() {
    b->m_Base.removeAttribute("authority");
};

string AuthorizedMixIn::getAuthuriValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authURI")) {
        throw AttributeNotFoundException("authURI");
    }
    return b->m_Base.getAttributeValue("authURI");
};

MeiAttribute* AuthorizedMixIn::getAuthuri() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authURI")) {
        throw AttributeNotFoundException("authURI");
    }
    return b->m_Base.getAttribute("authURI");
};

void AuthorizedMixIn::setAuthuri(std::string _authURI) {
    if (!b->m_Base.hasAttribute("authURI")) {
        MeiAttribute *a = new MeiAttribute("authURI", _authURI);
        b->m_Base.addAttribute(a);
    }
};

bool AuthorizedMixIn::hasAuthuri() {
    return b->m_Base.hasAttribute("authURI");
};

void AuthorizedMixIn::removeAuthuri() {
    b->m_Base.removeAttribute("authURI");
};


BarlineLogMixIn::BarlineLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BarlineLogMixIn::getRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};

MeiAttribute* BarlineLogMixIn::getRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};

void BarlineLogMixIn::setRend(std::string _rend) {
    if (!b->m_Base.hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};

bool BarlineLogMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};

void BarlineLogMixIn::removeRend() {
    b->m_Base.removeAttribute("rend");
};


BarplacementMixIn::BarplacementMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BarplacementMixIn::getBarplaceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("barplace")) {
        throw AttributeNotFoundException("barplace");
    }
    return b->m_Base.getAttributeValue("barplace");
};

MeiAttribute* BarplacementMixIn::getBarplace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("barplace")) {
        throw AttributeNotFoundException("barplace");
    }
    return b->m_Base.getAttribute("barplace");
};

void BarplacementMixIn::setBarplace(std::string _barplace) {
    if (!b->m_Base.hasAttribute("barplace")) {
        MeiAttribute *a = new MeiAttribute("barplace", _barplace);
        b->m_Base.addAttribute(a);
    }
};

bool BarplacementMixIn::hasBarplace() {
    return b->m_Base.hasAttribute("barplace");
};

void BarplacementMixIn::removeBarplace() {
    b->m_Base.removeAttribute("barplace");
};

string BarplacementMixIn::getTaktplaceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("taktplace")) {
        throw AttributeNotFoundException("taktplace");
    }
    return b->m_Base.getAttributeValue("taktplace");
};

MeiAttribute* BarplacementMixIn::getTaktplace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("taktplace")) {
        throw AttributeNotFoundException("taktplace");
    }
    return b->m_Base.getAttribute("taktplace");
};

void BarplacementMixIn::setTaktplace(std::string _taktplace) {
    if (!b->m_Base.hasAttribute("taktplace")) {
        MeiAttribute *a = new MeiAttribute("taktplace", _taktplace);
        b->m_Base.addAttribute(a);
    }
};

bool BarplacementMixIn::hasTaktplace() {
    return b->m_Base.hasAttribute("taktplace");
};

void BarplacementMixIn::removeTaktplace() {
    b->m_Base.removeAttribute("taktplace");
};


BeamingVisMixIn::BeamingVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BeamingVisMixIn::getBeamRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.rend")) {
        throw AttributeNotFoundException("beam.rend");
    }
    return b->m_Base.getAttributeValue("beam.rend");
};

MeiAttribute* BeamingVisMixIn::getBeamRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.rend")) {
        throw AttributeNotFoundException("beam.rend");
    }
    return b->m_Base.getAttribute("beam.rend");
};

void BeamingVisMixIn::setBeamRend(std::string _beamrend) {
    if (!b->m_Base.hasAttribute("beam.rend")) {
        MeiAttribute *a = new MeiAttribute("beam.rend", _beamrend);
        b->m_Base.addAttribute(a);
    }
};

bool BeamingVisMixIn::hasBeamRend() {
    return b->m_Base.hasAttribute("beam.rend");
};

void BeamingVisMixIn::removeBeamRend() {
    b->m_Base.removeAttribute("beam.rend");
};

string BeamingVisMixIn::getBeamSlopeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.slope")) {
        throw AttributeNotFoundException("beam.slope");
    }
    return b->m_Base.getAttributeValue("beam.slope");
};

MeiAttribute* BeamingVisMixIn::getBeamSlope() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.slope")) {
        throw AttributeNotFoundException("beam.slope");
    }
    return b->m_Base.getAttribute("beam.slope");
};

void BeamingVisMixIn::setBeamSlope(std::string _beamslope) {
    if (!b->m_Base.hasAttribute("beam.slope")) {
        MeiAttribute *a = new MeiAttribute("beam.slope", _beamslope);
        b->m_Base.addAttribute(a);
    }
};

bool BeamingVisMixIn::hasBeamSlope() {
    return b->m_Base.hasAttribute("beam.slope");
};

void BeamingVisMixIn::removeBeamSlope() {
    b->m_Base.removeAttribute("beam.slope");
};


BiblMixIn::BiblMixIn(BaseMeiElement *b) {
    this->b = b;
};

string BiblMixIn::getAnalogValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("analog")) {
        throw AttributeNotFoundException("analog");
    }
    return b->m_Base.getAttributeValue("analog");
};

MeiAttribute* BiblMixIn::getAnalog() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("analog")) {
        throw AttributeNotFoundException("analog");
    }
    return b->m_Base.getAttribute("analog");
};

void BiblMixIn::setAnalog(std::string _analog) {
    if (!b->m_Base.hasAttribute("analog")) {
        MeiAttribute *a = new MeiAttribute("analog", _analog);
        b->m_Base.addAttribute(a);
    }
};

bool BiblMixIn::hasAnalog() {
    return b->m_Base.hasAttribute("analog");
};

void BiblMixIn::removeAnalog() {
    b->m_Base.removeAttribute("analog");
};


CalendaredMixIn::CalendaredMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CalendaredMixIn::getCalendarValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("calendar")) {
        throw AttributeNotFoundException("calendar");
    }
    return b->m_Base.getAttributeValue("calendar");
};

MeiAttribute* CalendaredMixIn::getCalendar() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("calendar")) {
        throw AttributeNotFoundException("calendar");
    }
    return b->m_Base.getAttribute("calendar");
};

void CalendaredMixIn::setCalendar(std::string _calendar) {
    if (!b->m_Base.hasAttribute("calendar")) {
        MeiAttribute *a = new MeiAttribute("calendar", _calendar);
        b->m_Base.addAttribute(a);
    }
};

bool CalendaredMixIn::hasCalendar() {
    return b->m_Base.hasAttribute("calendar");
};

void CalendaredMixIn::removeCalendar() {
    b->m_Base.removeAttribute("calendar");
};


CanonicalMixIn::CanonicalMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CanonicalMixIn::getDbkeyValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dbkey")) {
        throw AttributeNotFoundException("dbkey");
    }
    return b->m_Base.getAttributeValue("dbkey");
};

MeiAttribute* CanonicalMixIn::getDbkey() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dbkey")) {
        throw AttributeNotFoundException("dbkey");
    }
    return b->m_Base.getAttribute("dbkey");
};

void CanonicalMixIn::setDbkey(std::string _dbkey) {
    if (!b->m_Base.hasAttribute("dbkey")) {
        MeiAttribute *a = new MeiAttribute("dbkey", _dbkey);
        b->m_Base.addAttribute(a);
    }
};

bool CanonicalMixIn::hasDbkey() {
    return b->m_Base.hasAttribute("dbkey");
};

void CanonicalMixIn::removeDbkey() {
    b->m_Base.removeAttribute("dbkey");
};


ChordVisMixIn::ChordVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ChordVisMixIn::getClusterValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cluster")) {
        throw AttributeNotFoundException("cluster");
    }
    return b->m_Base.getAttributeValue("cluster");
};

MeiAttribute* ChordVisMixIn::getCluster() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cluster")) {
        throw AttributeNotFoundException("cluster");
    }
    return b->m_Base.getAttribute("cluster");
};

void ChordVisMixIn::setCluster(std::string _cluster) {
    if (!b->m_Base.hasAttribute("cluster")) {
        MeiAttribute *a = new MeiAttribute("cluster", _cluster);
        b->m_Base.addAttribute(a);
    }
};

bool ChordVisMixIn::hasCluster() {
    return b->m_Base.hasAttribute("cluster");
};

void ChordVisMixIn::removeCluster() {
    b->m_Base.removeAttribute("cluster");
};


CleffingLogMixIn::CleffingLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CleffingLogMixIn::getClefShapeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.shape")) {
        throw AttributeNotFoundException("clef.shape");
    }
    return b->m_Base.getAttributeValue("clef.shape");
};

MeiAttribute* CleffingLogMixIn::getClefShape() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.shape")) {
        throw AttributeNotFoundException("clef.shape");
    }
    return b->m_Base.getAttribute("clef.shape");
};

void CleffingLogMixIn::setClefShape(std::string _clefshape) {
    if (!b->m_Base.hasAttribute("clef.shape")) {
        MeiAttribute *a = new MeiAttribute("clef.shape", _clefshape);
        b->m_Base.addAttribute(a);
    }
};

bool CleffingLogMixIn::hasClefShape() {
    return b->m_Base.hasAttribute("clef.shape");
};

void CleffingLogMixIn::removeClefShape() {
    b->m_Base.removeAttribute("clef.shape");
};

string CleffingLogMixIn::getClefLineValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.line")) {
        throw AttributeNotFoundException("clef.line");
    }
    return b->m_Base.getAttributeValue("clef.line");
};

MeiAttribute* CleffingLogMixIn::getClefLine() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.line")) {
        throw AttributeNotFoundException("clef.line");
    }
    return b->m_Base.getAttribute("clef.line");
};

void CleffingLogMixIn::setClefLine(std::string _clefline) {
    if (!b->m_Base.hasAttribute("clef.line")) {
        MeiAttribute *a = new MeiAttribute("clef.line", _clefline);
        b->m_Base.addAttribute(a);
    }
};

bool CleffingLogMixIn::hasClefLine() {
    return b->m_Base.hasAttribute("clef.line");
};

void CleffingLogMixIn::removeClefLine() {
    b->m_Base.removeAttribute("clef.line");
};

string CleffingLogMixIn::getClefDisValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.dis")) {
        throw AttributeNotFoundException("clef.dis");
    }
    return b->m_Base.getAttributeValue("clef.dis");
};

MeiAttribute* CleffingLogMixIn::getClefDis() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.dis")) {
        throw AttributeNotFoundException("clef.dis");
    }
    return b->m_Base.getAttribute("clef.dis");
};

void CleffingLogMixIn::setClefDis(std::string _clefdis) {
    if (!b->m_Base.hasAttribute("clef.dis")) {
        MeiAttribute *a = new MeiAttribute("clef.dis", _clefdis);
        b->m_Base.addAttribute(a);
    }
};

bool CleffingLogMixIn::hasClefDis() {
    return b->m_Base.hasAttribute("clef.dis");
};

void CleffingLogMixIn::removeClefDis() {
    b->m_Base.removeAttribute("clef.dis");
};

string CleffingLogMixIn::getClefDisPlaceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.dis.place")) {
        throw AttributeNotFoundException("clef.dis.place");
    }
    return b->m_Base.getAttributeValue("clef.dis.place");
};

MeiAttribute* CleffingLogMixIn::getClefDisPlace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.dis.place")) {
        throw AttributeNotFoundException("clef.dis.place");
    }
    return b->m_Base.getAttribute("clef.dis.place");
};

void CleffingLogMixIn::setClefDisPlace(std::string _clefdisplace) {
    if (!b->m_Base.hasAttribute("clef.dis.place")) {
        MeiAttribute *a = new MeiAttribute("clef.dis.place", _clefdisplace);
        b->m_Base.addAttribute(a);
    }
};

bool CleffingLogMixIn::hasClefDisPlace() {
    return b->m_Base.hasAttribute("clef.dis.place");
};

void CleffingLogMixIn::removeClefDisPlace() {
    b->m_Base.removeAttribute("clef.dis.place");
};


CleffingVisMixIn::CleffingVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CleffingVisMixIn::getClefColorValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.color")) {
        throw AttributeNotFoundException("clef.color");
    }
    return b->m_Base.getAttributeValue("clef.color");
};

MeiAttribute* CleffingVisMixIn::getClefColor() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.color")) {
        throw AttributeNotFoundException("clef.color");
    }
    return b->m_Base.getAttribute("clef.color");
};

void CleffingVisMixIn::setClefColor(std::string _clefcolor) {
    if (!b->m_Base.hasAttribute("clef.color")) {
        MeiAttribute *a = new MeiAttribute("clef.color", _clefcolor);
        b->m_Base.addAttribute(a);
    }
};

bool CleffingVisMixIn::hasClefColor() {
    return b->m_Base.hasAttribute("clef.color");
};

void CleffingVisMixIn::removeClefColor() {
    b->m_Base.removeAttribute("clef.color");
};

string CleffingVisMixIn::getClefVisibleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.visible")) {
        throw AttributeNotFoundException("clef.visible");
    }
    return b->m_Base.getAttributeValue("clef.visible");
};

MeiAttribute* CleffingVisMixIn::getClefVisible() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.visible")) {
        throw AttributeNotFoundException("clef.visible");
    }
    return b->m_Base.getAttribute("clef.visible");
};

void CleffingVisMixIn::setClefVisible(std::string _clefvisible) {
    if (!b->m_Base.hasAttribute("clef.visible")) {
        MeiAttribute *a = new MeiAttribute("clef.visible", _clefvisible);
        b->m_Base.addAttribute(a);
    }
};

bool CleffingVisMixIn::hasClefVisible() {
    return b->m_Base.hasAttribute("clef.visible");
};

void CleffingVisMixIn::removeClefVisible() {
    b->m_Base.removeAttribute("clef.visible");
};


ClefshapeMixIn::ClefshapeMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ClefshapeMixIn::getShapeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->m_Base.getAttributeValue("shape");
};

MeiAttribute* ClefshapeMixIn::getShape() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->m_Base.getAttribute("shape");
};

void ClefshapeMixIn::setShape(std::string _shape) {
    if (!b->m_Base.hasAttribute("shape")) {
        MeiAttribute *a = new MeiAttribute("shape", _shape);
        b->m_Base.addAttribute(a);
    }
};

bool ClefshapeMixIn::hasShape() {
    return b->m_Base.hasAttribute("shape");
};

void ClefshapeMixIn::removeShape() {
    b->m_Base.removeAttribute("shape");
};


ColorMixIn::ColorMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ColorMixIn::getColorValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("color")) {
        throw AttributeNotFoundException("color");
    }
    return b->m_Base.getAttributeValue("color");
};

MeiAttribute* ColorMixIn::getColor() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("color")) {
        throw AttributeNotFoundException("color");
    }
    return b->m_Base.getAttribute("color");
};

void ColorMixIn::setColor(std::string _color) {
    if (!b->m_Base.hasAttribute("color")) {
        MeiAttribute *a = new MeiAttribute("color", _color);
        b->m_Base.addAttribute(a);
    }
};

bool ColorMixIn::hasColor() {
    return b->m_Base.hasAttribute("color");
};

void ColorMixIn::removeColor() {
    b->m_Base.removeAttribute("color");
};


ColorationMixIn::ColorationMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ColorationMixIn::getColoredValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("colored")) {
        throw AttributeNotFoundException("colored");
    }
    return b->m_Base.getAttributeValue("colored");
};

MeiAttribute* ColorationMixIn::getColored() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("colored")) {
        throw AttributeNotFoundException("colored");
    }
    return b->m_Base.getAttribute("colored");
};

void ColorationMixIn::setColored(std::string _colored) {
    if (!b->m_Base.hasAttribute("colored")) {
        MeiAttribute *a = new MeiAttribute("colored", _colored);
        b->m_Base.addAttribute(a);
    }
};

bool ColorationMixIn::hasColored() {
    return b->m_Base.hasAttribute("colored");
};

void ColorationMixIn::removeColored() {
    b->m_Base.removeAttribute("colored");
};


CommonMixIn::CommonMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CommonMixIn::getIdValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("id")) {
        throw AttributeNotFoundException("id");
    }
    return b->m_Base.getAttributeValue("id");
};

MeiAttribute* CommonMixIn::getId() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("id")) {
        throw AttributeNotFoundException("id");
    }
    return b->m_Base.getAttribute("id");
};

void CommonMixIn::setId(std::string _id) {
    if (!b->m_Base.hasAttribute("id")) {
        MeiAttribute *a = new MeiAttribute("id", _id);
        b->m_Base.addAttribute(a);
    }
};

bool CommonMixIn::hasId() {
    return b->m_Base.hasAttribute("id");
};

void CommonMixIn::removeId() {
    b->m_Base.removeAttribute("id");
};

string CommonMixIn::getLabelValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("label")) {
        throw AttributeNotFoundException("label");
    }
    return b->m_Base.getAttributeValue("label");
};

MeiAttribute* CommonMixIn::getLabel() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("label")) {
        throw AttributeNotFoundException("label");
    }
    return b->m_Base.getAttribute("label");
};

void CommonMixIn::setLabel(std::string _label) {
    if (!b->m_Base.hasAttribute("label")) {
        MeiAttribute *a = new MeiAttribute("label", _label);
        b->m_Base.addAttribute(a);
    }
};

bool CommonMixIn::hasLabel() {
    return b->m_Base.hasAttribute("label");
};

void CommonMixIn::removeLabel() {
    b->m_Base.removeAttribute("label");
};

string CommonMixIn::getNValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("n")) {
        throw AttributeNotFoundException("n");
    }
    return b->m_Base.getAttributeValue("n");
};

MeiAttribute* CommonMixIn::getN() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("n")) {
        throw AttributeNotFoundException("n");
    }
    return b->m_Base.getAttribute("n");
};

void CommonMixIn::setN(std::string _n) {
    if (!b->m_Base.hasAttribute("n")) {
        MeiAttribute *a = new MeiAttribute("n", _n);
        b->m_Base.addAttribute(a);
    }
};

bool CommonMixIn::hasN() {
    return b->m_Base.hasAttribute("n");
};

void CommonMixIn::removeN() {
    b->m_Base.removeAttribute("n");
};

string CommonMixIn::getBaseValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("base")) {
        throw AttributeNotFoundException("base");
    }
    return b->m_Base.getAttributeValue("base");
};

MeiAttribute* CommonMixIn::getBase() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("base")) {
        throw AttributeNotFoundException("base");
    }
    return b->m_Base.getAttribute("base");
};

void CommonMixIn::setBase(std::string _base) {
    if (!b->m_Base.hasAttribute("base")) {
        MeiAttribute *a = new MeiAttribute("base", _base);
        b->m_Base.addAttribute(a);
    }
};

bool CommonMixIn::hasBase() {
    return b->m_Base.hasAttribute("base");
};

void CommonMixIn::removeBase() {
    b->m_Base.removeAttribute("base");
};


CoordinatedMixIn::CoordinatedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CoordinatedMixIn::getUlxValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ulx")) {
        throw AttributeNotFoundException("ulx");
    }
    return b->m_Base.getAttributeValue("ulx");
};

MeiAttribute* CoordinatedMixIn::getUlx() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ulx")) {
        throw AttributeNotFoundException("ulx");
    }
    return b->m_Base.getAttribute("ulx");
};

void CoordinatedMixIn::setUlx(std::string _ulx) {
    if (!b->m_Base.hasAttribute("ulx")) {
        MeiAttribute *a = new MeiAttribute("ulx", _ulx);
        b->m_Base.addAttribute(a);
    }
};

bool CoordinatedMixIn::hasUlx() {
    return b->m_Base.hasAttribute("ulx");
};

void CoordinatedMixIn::removeUlx() {
    b->m_Base.removeAttribute("ulx");
};

string CoordinatedMixIn::getUlyValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("uly")) {
        throw AttributeNotFoundException("uly");
    }
    return b->m_Base.getAttributeValue("uly");
};

MeiAttribute* CoordinatedMixIn::getUly() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("uly")) {
        throw AttributeNotFoundException("uly");
    }
    return b->m_Base.getAttribute("uly");
};

void CoordinatedMixIn::setUly(std::string _uly) {
    if (!b->m_Base.hasAttribute("uly")) {
        MeiAttribute *a = new MeiAttribute("uly", _uly);
        b->m_Base.addAttribute(a);
    }
};

bool CoordinatedMixIn::hasUly() {
    return b->m_Base.hasAttribute("uly");
};

void CoordinatedMixIn::removeUly() {
    b->m_Base.removeAttribute("uly");
};

string CoordinatedMixIn::getLrxValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lrx")) {
        throw AttributeNotFoundException("lrx");
    }
    return b->m_Base.getAttributeValue("lrx");
};

MeiAttribute* CoordinatedMixIn::getLrx() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lrx")) {
        throw AttributeNotFoundException("lrx");
    }
    return b->m_Base.getAttribute("lrx");
};

void CoordinatedMixIn::setLrx(std::string _lrx) {
    if (!b->m_Base.hasAttribute("lrx")) {
        MeiAttribute *a = new MeiAttribute("lrx", _lrx);
        b->m_Base.addAttribute(a);
    }
};

bool CoordinatedMixIn::hasLrx() {
    return b->m_Base.hasAttribute("lrx");
};

void CoordinatedMixIn::removeLrx() {
    b->m_Base.removeAttribute("lrx");
};

string CoordinatedMixIn::getLryValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lry")) {
        throw AttributeNotFoundException("lry");
    }
    return b->m_Base.getAttributeValue("lry");
};

MeiAttribute* CoordinatedMixIn::getLry() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lry")) {
        throw AttributeNotFoundException("lry");
    }
    return b->m_Base.getAttribute("lry");
};

void CoordinatedMixIn::setLry(std::string _lry) {
    if (!b->m_Base.hasAttribute("lry")) {
        MeiAttribute *a = new MeiAttribute("lry", _lry);
        b->m_Base.addAttribute(a);
    }
};

bool CoordinatedMixIn::hasLry() {
    return b->m_Base.hasAttribute("lry");
};

void CoordinatedMixIn::removeLry() {
    b->m_Base.removeAttribute("lry");
};


CurvatureMixIn::CurvatureMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CurvatureMixIn::getBezierValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bezier")) {
        throw AttributeNotFoundException("bezier");
    }
    return b->m_Base.getAttributeValue("bezier");
};

MeiAttribute* CurvatureMixIn::getBezier() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bezier")) {
        throw AttributeNotFoundException("bezier");
    }
    return b->m_Base.getAttribute("bezier");
};

void CurvatureMixIn::setBezier(std::string _bezier) {
    if (!b->m_Base.hasAttribute("bezier")) {
        MeiAttribute *a = new MeiAttribute("bezier", _bezier);
        b->m_Base.addAttribute(a);
    }
};

bool CurvatureMixIn::hasBezier() {
    return b->m_Base.hasAttribute("bezier");
};

void CurvatureMixIn::removeBezier() {
    b->m_Base.removeAttribute("bezier");
};

string CurvatureMixIn::getBulgeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bulge")) {
        throw AttributeNotFoundException("bulge");
    }
    return b->m_Base.getAttributeValue("bulge");
};

MeiAttribute* CurvatureMixIn::getBulge() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bulge")) {
        throw AttributeNotFoundException("bulge");
    }
    return b->m_Base.getAttribute("bulge");
};

void CurvatureMixIn::setBulge(std::string _bulge) {
    if (!b->m_Base.hasAttribute("bulge")) {
        MeiAttribute *a = new MeiAttribute("bulge", _bulge);
        b->m_Base.addAttribute(a);
    }
};

bool CurvatureMixIn::hasBulge() {
    return b->m_Base.hasAttribute("bulge");
};

void CurvatureMixIn::removeBulge() {
    b->m_Base.removeAttribute("bulge");
};

string CurvatureMixIn::getCurvedirValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("curvedir")) {
        throw AttributeNotFoundException("curvedir");
    }
    return b->m_Base.getAttributeValue("curvedir");
};

MeiAttribute* CurvatureMixIn::getCurvedir() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("curvedir")) {
        throw AttributeNotFoundException("curvedir");
    }
    return b->m_Base.getAttribute("curvedir");
};

void CurvatureMixIn::setCurvedir(std::string _curvedir) {
    if (!b->m_Base.hasAttribute("curvedir")) {
        MeiAttribute *a = new MeiAttribute("curvedir", _curvedir);
        b->m_Base.addAttribute(a);
    }
};

bool CurvatureMixIn::hasCurvedir() {
    return b->m_Base.hasAttribute("curvedir");
};

void CurvatureMixIn::removeCurvedir() {
    b->m_Base.removeAttribute("curvedir");
};


CurverendMixIn::CurverendMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CurverendMixIn::getRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};

MeiAttribute* CurverendMixIn::getRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};

void CurverendMixIn::setRend(std::string _rend) {
    if (!b->m_Base.hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};

bool CurverendMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};

void CurverendMixIn::removeRend() {
    b->m_Base.removeAttribute("rend");
};


CustosLogMixIn::CustosLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string CustosLogMixIn::getTargetValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return b->m_Base.getAttributeValue("target");
};

MeiAttribute* CustosLogMixIn::getTarget() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return b->m_Base.getAttribute("target");
};

void CustosLogMixIn::setTarget(std::string _target) {
    if (!b->m_Base.hasAttribute("target")) {
        MeiAttribute *a = new MeiAttribute("target", _target);
        b->m_Base.addAttribute(a);
    }
};

bool CustosLogMixIn::hasTarget() {
    return b->m_Base.hasAttribute("target");
};

void CustosLogMixIn::removeTarget() {
    b->m_Base.removeAttribute("target");
};


DatableMixIn::DatableMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DatableMixIn::getEnddateValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("enddate")) {
        throw AttributeNotFoundException("enddate");
    }
    return b->m_Base.getAttributeValue("enddate");
};

MeiAttribute* DatableMixIn::getEnddate() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("enddate")) {
        throw AttributeNotFoundException("enddate");
    }
    return b->m_Base.getAttribute("enddate");
};

void DatableMixIn::setEnddate(std::string _enddate) {
    if (!b->m_Base.hasAttribute("enddate")) {
        MeiAttribute *a = new MeiAttribute("enddate", _enddate);
        b->m_Base.addAttribute(a);
    }
};

bool DatableMixIn::hasEnddate() {
    return b->m_Base.hasAttribute("enddate");
};

void DatableMixIn::removeEnddate() {
    b->m_Base.removeAttribute("enddate");
};

string DatableMixIn::getNotafterValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("notafter")) {
        throw AttributeNotFoundException("notafter");
    }
    return b->m_Base.getAttributeValue("notafter");
};

MeiAttribute* DatableMixIn::getNotafter() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("notafter")) {
        throw AttributeNotFoundException("notafter");
    }
    return b->m_Base.getAttribute("notafter");
};

void DatableMixIn::setNotafter(std::string _notafter) {
    if (!b->m_Base.hasAttribute("notafter")) {
        MeiAttribute *a = new MeiAttribute("notafter", _notafter);
        b->m_Base.addAttribute(a);
    }
};

bool DatableMixIn::hasNotafter() {
    return b->m_Base.hasAttribute("notafter");
};

void DatableMixIn::removeNotafter() {
    b->m_Base.removeAttribute("notafter");
};

string DatableMixIn::getNotbeforeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("notbefore")) {
        throw AttributeNotFoundException("notbefore");
    }
    return b->m_Base.getAttributeValue("notbefore");
};

MeiAttribute* DatableMixIn::getNotbefore() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("notbefore")) {
        throw AttributeNotFoundException("notbefore");
    }
    return b->m_Base.getAttribute("notbefore");
};

void DatableMixIn::setNotbefore(std::string _notbefore) {
    if (!b->m_Base.hasAttribute("notbefore")) {
        MeiAttribute *a = new MeiAttribute("notbefore", _notbefore);
        b->m_Base.addAttribute(a);
    }
};

bool DatableMixIn::hasNotbefore() {
    return b->m_Base.hasAttribute("notbefore");
};

void DatableMixIn::removeNotbefore() {
    b->m_Base.removeAttribute("notbefore");
};

string DatableMixIn::getStartdateValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startdate")) {
        throw AttributeNotFoundException("startdate");
    }
    return b->m_Base.getAttributeValue("startdate");
};

MeiAttribute* DatableMixIn::getStartdate() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startdate")) {
        throw AttributeNotFoundException("startdate");
    }
    return b->m_Base.getAttribute("startdate");
};

void DatableMixIn::setStartdate(std::string _startdate) {
    if (!b->m_Base.hasAttribute("startdate")) {
        MeiAttribute *a = new MeiAttribute("startdate", _startdate);
        b->m_Base.addAttribute(a);
    }
};

bool DatableMixIn::hasStartdate() {
    return b->m_Base.hasAttribute("startdate");
};

void DatableMixIn::removeStartdate() {
    b->m_Base.removeAttribute("startdate");
};


DatapointingMixIn::DatapointingMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DatapointingMixIn::getDataValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("data")) {
        throw AttributeNotFoundException("data");
    }
    return b->m_Base.getAttributeValue("data");
};

MeiAttribute* DatapointingMixIn::getData() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("data")) {
        throw AttributeNotFoundException("data");
    }
    return b->m_Base.getAttribute("data");
};

void DatapointingMixIn::setData(std::string _data) {
    if (!b->m_Base.hasAttribute("data")) {
        MeiAttribute *a = new MeiAttribute("data", _data);
        b->m_Base.addAttribute(a);
    }
};

bool DatapointingMixIn::hasData() {
    return b->m_Base.hasAttribute("data");
};

void DatapointingMixIn::removeData() {
    b->m_Base.removeAttribute("data");
};


DeclaringMixIn::DeclaringMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DeclaringMixIn::getDeclsValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("decls")) {
        throw AttributeNotFoundException("decls");
    }
    return b->m_Base.getAttributeValue("decls");
};

MeiAttribute* DeclaringMixIn::getDecls() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("decls")) {
        throw AttributeNotFoundException("decls");
    }
    return b->m_Base.getAttribute("decls");
};

void DeclaringMixIn::setDecls(std::string _decls) {
    if (!b->m_Base.hasAttribute("decls")) {
        MeiAttribute *a = new MeiAttribute("decls", _decls);
        b->m_Base.addAttribute(a);
    }
};

bool DeclaringMixIn::hasDecls() {
    return b->m_Base.hasAttribute("decls");
};

void DeclaringMixIn::removeDecls() {
    b->m_Base.removeAttribute("decls");
};


DistancesMixIn::DistancesMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DistancesMixIn::getDynamDistValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dynam.dist")) {
        throw AttributeNotFoundException("dynam.dist");
    }
    return b->m_Base.getAttributeValue("dynam.dist");
};

MeiAttribute* DistancesMixIn::getDynamDist() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dynam.dist")) {
        throw AttributeNotFoundException("dynam.dist");
    }
    return b->m_Base.getAttribute("dynam.dist");
};

void DistancesMixIn::setDynamDist(std::string _dynamdist) {
    if (!b->m_Base.hasAttribute("dynam.dist")) {
        MeiAttribute *a = new MeiAttribute("dynam.dist", _dynamdist);
        b->m_Base.addAttribute(a);
    }
};

bool DistancesMixIn::hasDynamDist() {
    return b->m_Base.hasAttribute("dynam.dist");
};

void DistancesMixIn::removeDynamDist() {
    b->m_Base.removeAttribute("dynam.dist");
};

string DistancesMixIn::getHarmDistValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("harm.dist")) {
        throw AttributeNotFoundException("harm.dist");
    }
    return b->m_Base.getAttributeValue("harm.dist");
};

MeiAttribute* DistancesMixIn::getHarmDist() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("harm.dist")) {
        throw AttributeNotFoundException("harm.dist");
    }
    return b->m_Base.getAttribute("harm.dist");
};

void DistancesMixIn::setHarmDist(std::string _harmdist) {
    if (!b->m_Base.hasAttribute("harm.dist")) {
        MeiAttribute *a = new MeiAttribute("harm.dist", _harmdist);
        b->m_Base.addAttribute(a);
    }
};

bool DistancesMixIn::hasHarmDist() {
    return b->m_Base.hasAttribute("harm.dist");
};

void DistancesMixIn::removeHarmDist() {
    b->m_Base.removeAttribute("harm.dist");
};

string DistancesMixIn::getTextDistValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.dist")) {
        throw AttributeNotFoundException("text.dist");
    }
    return b->m_Base.getAttributeValue("text.dist");
};

MeiAttribute* DistancesMixIn::getTextDist() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.dist")) {
        throw AttributeNotFoundException("text.dist");
    }
    return b->m_Base.getAttribute("text.dist");
};

void DistancesMixIn::setTextDist(std::string _textdist) {
    if (!b->m_Base.hasAttribute("text.dist")) {
        MeiAttribute *a = new MeiAttribute("text.dist", _textdist);
        b->m_Base.addAttribute(a);
    }
};

bool DistancesMixIn::hasTextDist() {
    return b->m_Base.hasAttribute("text.dist");
};

void DistancesMixIn::removeTextDist() {
    b->m_Base.removeAttribute("text.dist");
};


DotLogMixIn::DotLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DotLogMixIn::getFormValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttributeValue("form");
};

MeiAttribute* DotLogMixIn::getForm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->m_Base.getAttribute("form");
};

void DotLogMixIn::setForm(std::string _form) {
    if (!b->m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->m_Base.addAttribute(a);
    }
};

bool DotLogMixIn::hasForm() {
    return b->m_Base.hasAttribute("form");
};

void DotLogMixIn::removeForm() {
    b->m_Base.removeAttribute("form");
};


DurationDefaultMixIn::DurationDefaultMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DurationDefaultMixIn::getDurDefaultValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.default")) {
        throw AttributeNotFoundException("dur.default");
    }
    return b->m_Base.getAttributeValue("dur.default");
};

MeiAttribute* DurationDefaultMixIn::getDurDefault() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.default")) {
        throw AttributeNotFoundException("dur.default");
    }
    return b->m_Base.getAttribute("dur.default");
};

void DurationDefaultMixIn::setDurDefault(std::string _durdefault) {
    if (!b->m_Base.hasAttribute("dur.default")) {
        MeiAttribute *a = new MeiAttribute("dur.default", _durdefault);
        b->m_Base.addAttribute(a);
    }
};

bool DurationDefaultMixIn::hasDurDefault() {
    return b->m_Base.hasAttribute("dur.default");
};

void DurationDefaultMixIn::removeDurDefault() {
    b->m_Base.removeAttribute("dur.default");
};


DurationMusicalMixIn::DurationMusicalMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DurationMusicalMixIn::getDurValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttributeValue("dur");
};

MeiAttribute* DurationMusicalMixIn::getDur() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttribute("dur");
};

void DurationMusicalMixIn::setDur(std::string _dur) {
    if (!b->m_Base.hasAttribute("dur")) {
        MeiAttribute *a = new MeiAttribute("dur", _dur);
        b->m_Base.addAttribute(a);
    }
};

bool DurationMusicalMixIn::hasDur() {
    return b->m_Base.hasAttribute("dur");
};

void DurationMusicalMixIn::removeDur() {
    b->m_Base.removeAttribute("dur");
};


DurationPerformedMixIn::DurationPerformedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DurationPerformedMixIn::getDurGesValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.ges")) {
        throw AttributeNotFoundException("dur.ges");
    }
    return b->m_Base.getAttributeValue("dur.ges");
};

MeiAttribute* DurationPerformedMixIn::getDurGes() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.ges")) {
        throw AttributeNotFoundException("dur.ges");
    }
    return b->m_Base.getAttribute("dur.ges");
};

void DurationPerformedMixIn::setDurGes(std::string _durges) {
    if (!b->m_Base.hasAttribute("dur.ges")) {
        MeiAttribute *a = new MeiAttribute("dur.ges", _durges);
        b->m_Base.addAttribute(a);
    }
};

bool DurationPerformedMixIn::hasDurGes() {
    return b->m_Base.hasAttribute("dur.ges");
};

void DurationPerformedMixIn::removeDurGes() {
    b->m_Base.removeAttribute("dur.ges");
};


DurationRatioMixIn::DurationRatioMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DurationRatioMixIn::getNumValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};

MeiAttribute* DurationRatioMixIn::getNum() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};

void DurationRatioMixIn::setNum(std::string _num) {
    if (!b->m_Base.hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};

bool DurationRatioMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};

void DurationRatioMixIn::removeNum() {
    b->m_Base.removeAttribute("num");
};

string DurationRatioMixIn::getNumbaseValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->m_Base.getAttributeValue("numbase");
};

MeiAttribute* DurationRatioMixIn::getNumbase() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->m_Base.getAttribute("numbase");
};

void DurationRatioMixIn::setNumbase(std::string _numbase) {
    if (!b->m_Base.hasAttribute("numbase")) {
        MeiAttribute *a = new MeiAttribute("numbase", _numbase);
        b->m_Base.addAttribute(a);
    }
};

bool DurationRatioMixIn::hasNumbase() {
    return b->m_Base.hasAttribute("numbase");
};

void DurationRatioMixIn::removeNumbase() {
    b->m_Base.removeAttribute("numbase");
};


DurationTimestampMixIn::DurationTimestampMixIn(BaseMeiElement *b) {
    this->b = b;
};

string DurationTimestampMixIn::getDurValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttributeValue("dur");
};

MeiAttribute* DurationTimestampMixIn::getDur() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttribute("dur");
};

void DurationTimestampMixIn::setDur(std::string _dur) {
    if (!b->m_Base.hasAttribute("dur")) {
        MeiAttribute *a = new MeiAttribute("dur", _dur);
        b->m_Base.addAttribute(a);
    }
};

bool DurationTimestampMixIn::hasDur() {
    return b->m_Base.hasAttribute("dur");
};

void DurationTimestampMixIn::removeDur() {
    b->m_Base.removeAttribute("dur");
};


EnclosingcharsMixIn::EnclosingcharsMixIn(BaseMeiElement *b) {
    this->b = b;
};

string EnclosingcharsMixIn::getEncloseValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("enclose")) {
        throw AttributeNotFoundException("enclose");
    }
    return b->m_Base.getAttributeValue("enclose");
};

MeiAttribute* EnclosingcharsMixIn::getEnclose() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("enclose")) {
        throw AttributeNotFoundException("enclose");
    }
    return b->m_Base.getAttribute("enclose");
};

void EnclosingcharsMixIn::setEnclose(std::string _enclose) {
    if (!b->m_Base.hasAttribute("enclose")) {
        MeiAttribute *a = new MeiAttribute("enclose", _enclose);
        b->m_Base.addAttribute(a);
    }
};

bool EnclosingcharsMixIn::hasEnclose() {
    return b->m_Base.hasAttribute("enclose");
};

void EnclosingcharsMixIn::removeEnclose() {
    b->m_Base.removeAttribute("enclose");
};


FermatapresentMixIn::FermatapresentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string FermatapresentMixIn::getFermataValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fermata")) {
        throw AttributeNotFoundException("fermata");
    }
    return b->m_Base.getAttributeValue("fermata");
};

MeiAttribute* FermatapresentMixIn::getFermata() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fermata")) {
        throw AttributeNotFoundException("fermata");
    }
    return b->m_Base.getAttribute("fermata");
};

void FermatapresentMixIn::setFermata(std::string _fermata) {
    if (!b->m_Base.hasAttribute("fermata")) {
        MeiAttribute *a = new MeiAttribute("fermata", _fermata);
        b->m_Base.addAttribute(a);
    }
};

bool FermatapresentMixIn::hasFermata() {
    return b->m_Base.hasAttribute("fermata");
};

void FermatapresentMixIn::removeFermata() {
    b->m_Base.removeAttribute("fermata");
};


HandidentMixIn::HandidentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string HandidentMixIn::getHandValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->m_Base.getAttributeValue("hand");
};

MeiAttribute* HandidentMixIn::getHand() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->m_Base.getAttribute("hand");
};

void HandidentMixIn::setHand(std::string _hand) {
    if (!b->m_Base.hasAttribute("hand")) {
        MeiAttribute *a = new MeiAttribute("hand", _hand);
        b->m_Base.addAttribute(a);
    }
};

bool HandidentMixIn::hasHand() {
    return b->m_Base.hasAttribute("hand");
};

void HandidentMixIn::removeHand() {
    b->m_Base.removeAttribute("hand");
};


HorizontalalignMixIn::HorizontalalignMixIn(BaseMeiElement *b) {
    this->b = b;
};

string HorizontalalignMixIn::getHalignValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("halign")) {
        throw AttributeNotFoundException("halign");
    }
    return b->m_Base.getAttributeValue("halign");
};

MeiAttribute* HorizontalalignMixIn::getHalign() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("halign")) {
        throw AttributeNotFoundException("halign");
    }
    return b->m_Base.getAttribute("halign");
};

void HorizontalalignMixIn::setHalign(std::string _halign) {
    if (!b->m_Base.hasAttribute("halign")) {
        MeiAttribute *a = new MeiAttribute("halign", _halign);
        b->m_Base.addAttribute(a);
    }
};

bool HorizontalalignMixIn::hasHalign() {
    return b->m_Base.hasAttribute("halign");
};

void HorizontalalignMixIn::removeHalign() {
    b->m_Base.removeAttribute("halign");
};


InstrumentidentMixIn::InstrumentidentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string InstrumentidentMixIn::getInstrValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("instr")) {
        throw AttributeNotFoundException("instr");
    }
    return b->m_Base.getAttributeValue("instr");
};

MeiAttribute* InstrumentidentMixIn::getInstr() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("instr")) {
        throw AttributeNotFoundException("instr");
    }
    return b->m_Base.getAttribute("instr");
};

void InstrumentidentMixIn::setInstr(std::string _instr) {
    if (!b->m_Base.hasAttribute("instr")) {
        MeiAttribute *a = new MeiAttribute("instr", _instr);
        b->m_Base.addAttribute(a);
    }
};

bool InstrumentidentMixIn::hasInstr() {
    return b->m_Base.hasAttribute("instr");
};

void InstrumentidentMixIn::removeInstr() {
    b->m_Base.removeAttribute("instr");
};


InternetmediaMixIn::InternetmediaMixIn(BaseMeiElement *b) {
    this->b = b;
};

string InternetmediaMixIn::getMimetypeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mimetype")) {
        throw AttributeNotFoundException("mimetype");
    }
    return b->m_Base.getAttributeValue("mimetype");
};

MeiAttribute* InternetmediaMixIn::getMimetype() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mimetype")) {
        throw AttributeNotFoundException("mimetype");
    }
    return b->m_Base.getAttribute("mimetype");
};

void InternetmediaMixIn::setMimetype(std::string _mimetype) {
    if (!b->m_Base.hasAttribute("mimetype")) {
        MeiAttribute *a = new MeiAttribute("mimetype", _mimetype);
        b->m_Base.addAttribute(a);
    }
};

bool InternetmediaMixIn::hasMimetype() {
    return b->m_Base.hasAttribute("mimetype");
};

void InternetmediaMixIn::removeMimetype() {
    b->m_Base.removeAttribute("mimetype");
};


JoinedMixIn::JoinedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string JoinedMixIn::getJoinValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("join")) {
        throw AttributeNotFoundException("join");
    }
    return b->m_Base.getAttributeValue("join");
};

MeiAttribute* JoinedMixIn::getJoin() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("join")) {
        throw AttributeNotFoundException("join");
    }
    return b->m_Base.getAttribute("join");
};

void JoinedMixIn::setJoin(std::string _join) {
    if (!b->m_Base.hasAttribute("join")) {
        MeiAttribute *a = new MeiAttribute("join", _join);
        b->m_Base.addAttribute(a);
    }
};

bool JoinedMixIn::hasJoin() {
    return b->m_Base.hasAttribute("join");
};

void JoinedMixIn::removeJoin() {
    b->m_Base.removeAttribute("join");
};


KeysigsLogMixIn::KeysigsLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string KeysigsLogMixIn::getKeyAccidValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.accid")) {
        throw AttributeNotFoundException("key.accid");
    }
    return b->m_Base.getAttributeValue("key.accid");
};

MeiAttribute* KeysigsLogMixIn::getKeyAccid() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.accid")) {
        throw AttributeNotFoundException("key.accid");
    }
    return b->m_Base.getAttribute("key.accid");
};

void KeysigsLogMixIn::setKeyAccid(std::string _keyaccid) {
    if (!b->m_Base.hasAttribute("key.accid")) {
        MeiAttribute *a = new MeiAttribute("key.accid", _keyaccid);
        b->m_Base.addAttribute(a);
    }
};

bool KeysigsLogMixIn::hasKeyAccid() {
    return b->m_Base.hasAttribute("key.accid");
};

void KeysigsLogMixIn::removeKeyAccid() {
    b->m_Base.removeAttribute("key.accid");
};

string KeysigsLogMixIn::getKeyModeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.mode")) {
        throw AttributeNotFoundException("key.mode");
    }
    return b->m_Base.getAttributeValue("key.mode");
};

MeiAttribute* KeysigsLogMixIn::getKeyMode() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.mode")) {
        throw AttributeNotFoundException("key.mode");
    }
    return b->m_Base.getAttribute("key.mode");
};

void KeysigsLogMixIn::setKeyMode(std::string _keymode) {
    if (!b->m_Base.hasAttribute("key.mode")) {
        MeiAttribute *a = new MeiAttribute("key.mode", _keymode);
        b->m_Base.addAttribute(a);
    }
};

bool KeysigsLogMixIn::hasKeyMode() {
    return b->m_Base.hasAttribute("key.mode");
};

void KeysigsLogMixIn::removeKeyMode() {
    b->m_Base.removeAttribute("key.mode");
};

string KeysigsLogMixIn::getKeyPnameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.pname")) {
        throw AttributeNotFoundException("key.pname");
    }
    return b->m_Base.getAttributeValue("key.pname");
};

MeiAttribute* KeysigsLogMixIn::getKeyPname() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.pname")) {
        throw AttributeNotFoundException("key.pname");
    }
    return b->m_Base.getAttribute("key.pname");
};

void KeysigsLogMixIn::setKeyPname(std::string _keypname) {
    if (!b->m_Base.hasAttribute("key.pname")) {
        MeiAttribute *a = new MeiAttribute("key.pname", _keypname);
        b->m_Base.addAttribute(a);
    }
};

bool KeysigsLogMixIn::hasKeyPname() {
    return b->m_Base.hasAttribute("key.pname");
};

void KeysigsLogMixIn::removeKeyPname() {
    b->m_Base.removeAttribute("key.pname");
};

string KeysigsLogMixIn::getKeySigValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig")) {
        throw AttributeNotFoundException("key.sig");
    }
    return b->m_Base.getAttributeValue("key.sig");
};

MeiAttribute* KeysigsLogMixIn::getKeySig() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig")) {
        throw AttributeNotFoundException("key.sig");
    }
    return b->m_Base.getAttribute("key.sig");
};

void KeysigsLogMixIn::setKeySig(std::string _keysig) {
    if (!b->m_Base.hasAttribute("key.sig")) {
        MeiAttribute *a = new MeiAttribute("key.sig", _keysig);
        b->m_Base.addAttribute(a);
    }
};

bool KeysigsLogMixIn::hasKeySig() {
    return b->m_Base.hasAttribute("key.sig");
};

void KeysigsLogMixIn::removeKeySig() {
    b->m_Base.removeAttribute("key.sig");
};

string KeysigsLogMixIn::getKeySigMixedValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.mixed")) {
        throw AttributeNotFoundException("key.sig.mixed");
    }
    return b->m_Base.getAttributeValue("key.sig.mixed");
};

MeiAttribute* KeysigsLogMixIn::getKeySigMixed() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.mixed")) {
        throw AttributeNotFoundException("key.sig.mixed");
    }
    return b->m_Base.getAttribute("key.sig.mixed");
};

void KeysigsLogMixIn::setKeySigMixed(std::string _keysigmixed) {
    if (!b->m_Base.hasAttribute("key.sig.mixed")) {
        MeiAttribute *a = new MeiAttribute("key.sig.mixed", _keysigmixed);
        b->m_Base.addAttribute(a);
    }
};

bool KeysigsLogMixIn::hasKeySigMixed() {
    return b->m_Base.hasAttribute("key.sig.mixed");
};

void KeysigsLogMixIn::removeKeySigMixed() {
    b->m_Base.removeAttribute("key.sig.mixed");
};


KeysigsVisMixIn::KeysigsVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string KeysigsVisMixIn::getKeySigShowValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.show")) {
        throw AttributeNotFoundException("key.sig.show");
    }
    return b->m_Base.getAttributeValue("key.sig.show");
};

MeiAttribute* KeysigsVisMixIn::getKeySigShow() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.show")) {
        throw AttributeNotFoundException("key.sig.show");
    }
    return b->m_Base.getAttribute("key.sig.show");
};

void KeysigsVisMixIn::setKeySigShow(std::string _keysigshow) {
    if (!b->m_Base.hasAttribute("key.sig.show")) {
        MeiAttribute *a = new MeiAttribute("key.sig.show", _keysigshow);
        b->m_Base.addAttribute(a);
    }
};

bool KeysigsVisMixIn::hasKeySigShow() {
    return b->m_Base.hasAttribute("key.sig.show");
};

void KeysigsVisMixIn::removeKeySigShow() {
    b->m_Base.removeAttribute("key.sig.show");
};

string KeysigsVisMixIn::getKeySigShowchangeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.showchange")) {
        throw AttributeNotFoundException("key.sig.showchange");
    }
    return b->m_Base.getAttributeValue("key.sig.showchange");
};

MeiAttribute* KeysigsVisMixIn::getKeySigShowchange() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.showchange")) {
        throw AttributeNotFoundException("key.sig.showchange");
    }
    return b->m_Base.getAttribute("key.sig.showchange");
};

void KeysigsVisMixIn::setKeySigShowchange(std::string _keysigshowchange) {
    if (!b->m_Base.hasAttribute("key.sig.showchange")) {
        MeiAttribute *a = new MeiAttribute("key.sig.showchange", _keysigshowchange);
        b->m_Base.addAttribute(a);
    }
};

bool KeysigsVisMixIn::hasKeySigShowchange() {
    return b->m_Base.hasAttribute("key.sig.showchange");
};

void KeysigsVisMixIn::removeKeySigShowchange() {
    b->m_Base.removeAttribute("key.sig.showchange");
};


LabelsAddlMixIn::LabelsAddlMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LabelsAddlMixIn::getLabelAbbrValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("label.abbr")) {
        throw AttributeNotFoundException("label.abbr");
    }
    return b->m_Base.getAttributeValue("label.abbr");
};

MeiAttribute* LabelsAddlMixIn::getLabelAbbr() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("label.abbr")) {
        throw AttributeNotFoundException("label.abbr");
    }
    return b->m_Base.getAttribute("label.abbr");
};

void LabelsAddlMixIn::setLabelAbbr(std::string _labelabbr) {
    if (!b->m_Base.hasAttribute("label.abbr")) {
        MeiAttribute *a = new MeiAttribute("label.abbr", _labelabbr);
        b->m_Base.addAttribute(a);
    }
};

bool LabelsAddlMixIn::hasLabelAbbr() {
    return b->m_Base.hasAttribute("label.abbr");
};

void LabelsAddlMixIn::removeLabelAbbr() {
    b->m_Base.removeAttribute("label.abbr");
};


LangMixIn::LangMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LangMixIn::getLangValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lang")) {
        throw AttributeNotFoundException("lang");
    }
    return b->m_Base.getAttributeValue("lang");
};

MeiAttribute* LangMixIn::getLang() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lang")) {
        throw AttributeNotFoundException("lang");
    }
    return b->m_Base.getAttribute("lang");
};

void LangMixIn::setLang(std::string _lang) {
    if (!b->m_Base.hasAttribute("lang")) {
        MeiAttribute *a = new MeiAttribute("lang", _lang);
        b->m_Base.addAttribute(a);
    }
};

bool LangMixIn::hasLang() {
    return b->m_Base.hasAttribute("lang");
};

void LangMixIn::removeLang() {
    b->m_Base.removeAttribute("lang");
};


LayeridentMixIn::LayeridentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LayeridentMixIn::getLayerValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttributeValue("layer");
};

MeiAttribute* LayeridentMixIn::getLayer() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttribute("layer");
};

void LayeridentMixIn::setLayer(std::string _layer) {
    if (!b->m_Base.hasAttribute("layer")) {
        MeiAttribute *a = new MeiAttribute("layer", _layer);
        b->m_Base.addAttribute(a);
    }
};

bool LayeridentMixIn::hasLayer() {
    return b->m_Base.hasAttribute("layer");
};

void LayeridentMixIn::removeLayer() {
    b->m_Base.removeAttribute("layer");
};


LinelocMixIn::LinelocMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LinelocMixIn::getLineValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("line")) {
        throw AttributeNotFoundException("line");
    }
    return b->m_Base.getAttributeValue("line");
};

MeiAttribute* LinelocMixIn::getLine() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("line")) {
        throw AttributeNotFoundException("line");
    }
    return b->m_Base.getAttribute("line");
};

void LinelocMixIn::setLine(std::string _line) {
    if (!b->m_Base.hasAttribute("line")) {
        MeiAttribute *a = new MeiAttribute("line", _line);
        b->m_Base.addAttribute(a);
    }
};

bool LinelocMixIn::hasLine() {
    return b->m_Base.hasAttribute("line");
};

void LinelocMixIn::removeLine() {
    b->m_Base.removeAttribute("line");
};


LinerendMixIn::LinerendMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LinerendMixIn::getRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};

MeiAttribute* LinerendMixIn::getRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};

void LinerendMixIn::setRend(std::string _rend) {
    if (!b->m_Base.hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};

bool LinerendMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};

void LinerendMixIn::removeRend() {
    b->m_Base.removeAttribute("rend");
};


LinkCommonMixIn::LinkCommonMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LinkCommonMixIn::getActuateValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("actuate")) {
        throw AttributeNotFoundException("actuate");
    }
    return b->m_Base.getAttributeValue("actuate");
};

MeiAttribute* LinkCommonMixIn::getActuate() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("actuate")) {
        throw AttributeNotFoundException("actuate");
    }
    return b->m_Base.getAttribute("actuate");
};

void LinkCommonMixIn::setActuate(std::string _actuate) {
    if (!b->m_Base.hasAttribute("actuate")) {
        MeiAttribute *a = new MeiAttribute("actuate", _actuate);
        b->m_Base.addAttribute(a);
    }
};

bool LinkCommonMixIn::hasActuate() {
    return b->m_Base.hasAttribute("actuate");
};

void LinkCommonMixIn::removeActuate() {
    b->m_Base.removeAttribute("actuate");
};

string LinkCommonMixIn::getRoleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->m_Base.getAttributeValue("role");
};

MeiAttribute* LinkCommonMixIn::getRole() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->m_Base.getAttribute("role");
};

void LinkCommonMixIn::setRole(std::string _role) {
    if (!b->m_Base.hasAttribute("role")) {
        MeiAttribute *a = new MeiAttribute("role", _role);
        b->m_Base.addAttribute(a);
    }
};

bool LinkCommonMixIn::hasRole() {
    return b->m_Base.hasAttribute("role");
};

void LinkCommonMixIn::removeRole() {
    b->m_Base.removeAttribute("role");
};

string LinkCommonMixIn::getShowValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("show")) {
        throw AttributeNotFoundException("show");
    }
    return b->m_Base.getAttributeValue("show");
};

MeiAttribute* LinkCommonMixIn::getShow() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("show")) {
        throw AttributeNotFoundException("show");
    }
    return b->m_Base.getAttribute("show");
};

void LinkCommonMixIn::setShow(std::string _show) {
    if (!b->m_Base.hasAttribute("show")) {
        MeiAttribute *a = new MeiAttribute("show", _show);
        b->m_Base.addAttribute(a);
    }
};

bool LinkCommonMixIn::hasShow() {
    return b->m_Base.hasAttribute("show");
};

void LinkCommonMixIn::removeShow() {
    b->m_Base.removeAttribute("show");
};

string LinkCommonMixIn::getTargettypeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("targettype")) {
        throw AttributeNotFoundException("targettype");
    }
    return b->m_Base.getAttributeValue("targettype");
};

MeiAttribute* LinkCommonMixIn::getTargettype() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("targettype")) {
        throw AttributeNotFoundException("targettype");
    }
    return b->m_Base.getAttribute("targettype");
};

void LinkCommonMixIn::setTargettype(std::string _targettype) {
    if (!b->m_Base.hasAttribute("targettype")) {
        MeiAttribute *a = new MeiAttribute("targettype", _targettype);
        b->m_Base.addAttribute(a);
    }
};

bool LinkCommonMixIn::hasTargettype() {
    return b->m_Base.hasAttribute("targettype");
};

void LinkCommonMixIn::removeTargettype() {
    b->m_Base.removeAttribute("targettype");
};

string LinkCommonMixIn::getTitleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("title")) {
        throw AttributeNotFoundException("title");
    }
    return b->m_Base.getAttributeValue("title");
};

MeiAttribute* LinkCommonMixIn::getTitle() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("title")) {
        throw AttributeNotFoundException("title");
    }
    return b->m_Base.getAttribute("title");
};

void LinkCommonMixIn::setTitle(std::string _title) {
    if (!b->m_Base.hasAttribute("title")) {
        MeiAttribute *a = new MeiAttribute("title", _title);
        b->m_Base.addAttribute(a);
    }
};

bool LinkCommonMixIn::hasTitle() {
    return b->m_Base.hasAttribute("title");
};

void LinkCommonMixIn::removeTitle() {
    b->m_Base.removeAttribute("title");
};


LinkExternalMixIn::LinkExternalMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LinkExternalMixIn::getHrefValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("href")) {
        throw AttributeNotFoundException("href");
    }
    return b->m_Base.getAttributeValue("href");
};

MeiAttribute* LinkExternalMixIn::getHref() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("href")) {
        throw AttributeNotFoundException("href");
    }
    return b->m_Base.getAttribute("href");
};

void LinkExternalMixIn::setHref(std::string _href) {
    if (!b->m_Base.hasAttribute("href")) {
        MeiAttribute *a = new MeiAttribute("href", _href);
        b->m_Base.addAttribute(a);
    }
};

bool LinkExternalMixIn::hasHref() {
    return b->m_Base.hasAttribute("href");
};

void LinkExternalMixIn::removeHref() {
    b->m_Base.removeAttribute("href");
};


LyricstyleMixIn::LyricstyleMixIn(BaseMeiElement *b) {
    this->b = b;
};

string LyricstyleMixIn::getLyricAlignValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.align")) {
        throw AttributeNotFoundException("lyric.align");
    }
    return b->m_Base.getAttributeValue("lyric.align");
};

MeiAttribute* LyricstyleMixIn::getLyricAlign() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.align")) {
        throw AttributeNotFoundException("lyric.align");
    }
    return b->m_Base.getAttribute("lyric.align");
};

void LyricstyleMixIn::setLyricAlign(std::string _lyricalign) {
    if (!b->m_Base.hasAttribute("lyric.align")) {
        MeiAttribute *a = new MeiAttribute("lyric.align", _lyricalign);
        b->m_Base.addAttribute(a);
    }
};

bool LyricstyleMixIn::hasLyricAlign() {
    return b->m_Base.hasAttribute("lyric.align");
};

void LyricstyleMixIn::removeLyricAlign() {
    b->m_Base.removeAttribute("lyric.align");
};

string LyricstyleMixIn::getLyricFamValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.fam")) {
        throw AttributeNotFoundException("lyric.fam");
    }
    return b->m_Base.getAttributeValue("lyric.fam");
};

MeiAttribute* LyricstyleMixIn::getLyricFam() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.fam")) {
        throw AttributeNotFoundException("lyric.fam");
    }
    return b->m_Base.getAttribute("lyric.fam");
};

void LyricstyleMixIn::setLyricFam(std::string _lyricfam) {
    if (!b->m_Base.hasAttribute("lyric.fam")) {
        MeiAttribute *a = new MeiAttribute("lyric.fam", _lyricfam);
        b->m_Base.addAttribute(a);
    }
};

bool LyricstyleMixIn::hasLyricFam() {
    return b->m_Base.hasAttribute("lyric.fam");
};

void LyricstyleMixIn::removeLyricFam() {
    b->m_Base.removeAttribute("lyric.fam");
};

string LyricstyleMixIn::getLyricNameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.name")) {
        throw AttributeNotFoundException("lyric.name");
    }
    return b->m_Base.getAttributeValue("lyric.name");
};

MeiAttribute* LyricstyleMixIn::getLyricName() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.name")) {
        throw AttributeNotFoundException("lyric.name");
    }
    return b->m_Base.getAttribute("lyric.name");
};

void LyricstyleMixIn::setLyricName(std::string _lyricname) {
    if (!b->m_Base.hasAttribute("lyric.name")) {
        MeiAttribute *a = new MeiAttribute("lyric.name", _lyricname);
        b->m_Base.addAttribute(a);
    }
};

bool LyricstyleMixIn::hasLyricName() {
    return b->m_Base.hasAttribute("lyric.name");
};

void LyricstyleMixIn::removeLyricName() {
    b->m_Base.removeAttribute("lyric.name");
};

string LyricstyleMixIn::getLyricSizeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.size")) {
        throw AttributeNotFoundException("lyric.size");
    }
    return b->m_Base.getAttributeValue("lyric.size");
};

MeiAttribute* LyricstyleMixIn::getLyricSize() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.size")) {
        throw AttributeNotFoundException("lyric.size");
    }
    return b->m_Base.getAttribute("lyric.size");
};

void LyricstyleMixIn::setLyricSize(std::string _lyricsize) {
    if (!b->m_Base.hasAttribute("lyric.size")) {
        MeiAttribute *a = new MeiAttribute("lyric.size", _lyricsize);
        b->m_Base.addAttribute(a);
    }
};

bool LyricstyleMixIn::hasLyricSize() {
    return b->m_Base.hasAttribute("lyric.size");
};

void LyricstyleMixIn::removeLyricSize() {
    b->m_Base.removeAttribute("lyric.size");
};

string LyricstyleMixIn::getLyricStyleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.style")) {
        throw AttributeNotFoundException("lyric.style");
    }
    return b->m_Base.getAttributeValue("lyric.style");
};

MeiAttribute* LyricstyleMixIn::getLyricStyle() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.style")) {
        throw AttributeNotFoundException("lyric.style");
    }
    return b->m_Base.getAttribute("lyric.style");
};

void LyricstyleMixIn::setLyricStyle(std::string _lyricstyle) {
    if (!b->m_Base.hasAttribute("lyric.style")) {
        MeiAttribute *a = new MeiAttribute("lyric.style", _lyricstyle);
        b->m_Base.addAttribute(a);
    }
};

bool LyricstyleMixIn::hasLyricStyle() {
    return b->m_Base.hasAttribute("lyric.style");
};

void LyricstyleMixIn::removeLyricStyle() {
    b->m_Base.removeAttribute("lyric.style");
};

string LyricstyleMixIn::getLyricWeightValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.weight")) {
        throw AttributeNotFoundException("lyric.weight");
    }
    return b->m_Base.getAttributeValue("lyric.weight");
};

MeiAttribute* LyricstyleMixIn::getLyricWeight() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.weight")) {
        throw AttributeNotFoundException("lyric.weight");
    }
    return b->m_Base.getAttribute("lyric.weight");
};

void LyricstyleMixIn::setLyricWeight(std::string _lyricweight) {
    if (!b->m_Base.hasAttribute("lyric.weight")) {
        MeiAttribute *a = new MeiAttribute("lyric.weight", _lyricweight);
        b->m_Base.addAttribute(a);
    }
};

bool LyricstyleMixIn::hasLyricWeight() {
    return b->m_Base.hasAttribute("lyric.weight");
};

void LyricstyleMixIn::removeLyricWeight() {
    b->m_Base.removeAttribute("lyric.weight");
};


MeasureLogMixIn::MeasureLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MeasureLogMixIn::getLeftValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("left")) {
        throw AttributeNotFoundException("left");
    }
    return b->m_Base.getAttributeValue("left");
};

MeiAttribute* MeasureLogMixIn::getLeft() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("left")) {
        throw AttributeNotFoundException("left");
    }
    return b->m_Base.getAttribute("left");
};

void MeasureLogMixIn::setLeft(std::string _left) {
    if (!b->m_Base.hasAttribute("left")) {
        MeiAttribute *a = new MeiAttribute("left", _left);
        b->m_Base.addAttribute(a);
    }
};

bool MeasureLogMixIn::hasLeft() {
    return b->m_Base.hasAttribute("left");
};

void MeasureLogMixIn::removeLeft() {
    b->m_Base.removeAttribute("left");
};

string MeasureLogMixIn::getRightValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("right")) {
        throw AttributeNotFoundException("right");
    }
    return b->m_Base.getAttributeValue("right");
};

MeiAttribute* MeasureLogMixIn::getRight() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("right")) {
        throw AttributeNotFoundException("right");
    }
    return b->m_Base.getAttribute("right");
};

void MeasureLogMixIn::setRight(std::string _right) {
    if (!b->m_Base.hasAttribute("right")) {
        MeiAttribute *a = new MeiAttribute("right", _right);
        b->m_Base.addAttribute(a);
    }
};

bool MeasureLogMixIn::hasRight() {
    return b->m_Base.hasAttribute("right");
};

void MeasureLogMixIn::removeRight() {
    b->m_Base.removeAttribute("right");
};


MeasurementMixIn::MeasurementMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MeasurementMixIn::getUnitValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->m_Base.getAttributeValue("unit");
};

MeiAttribute* MeasurementMixIn::getUnit() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->m_Base.getAttribute("unit");
};

void MeasurementMixIn::setUnit(std::string _unit) {
    if (!b->m_Base.hasAttribute("unit")) {
        MeiAttribute *a = new MeiAttribute("unit", _unit);
        b->m_Base.addAttribute(a);
    }
};

bool MeasurementMixIn::hasUnit() {
    return b->m_Base.hasAttribute("unit");
};

void MeasurementMixIn::removeUnit() {
    b->m_Base.removeAttribute("unit");
};


MediumMixIn::MediumMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MediumMixIn::getMediumValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("medium")) {
        throw AttributeNotFoundException("medium");
    }
    return b->m_Base.getAttributeValue("medium");
};

MeiAttribute* MediumMixIn::getMedium() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("medium")) {
        throw AttributeNotFoundException("medium");
    }
    return b->m_Base.getAttribute("medium");
};

void MediumMixIn::setMedium(std::string _medium) {
    if (!b->m_Base.hasAttribute("medium")) {
        MeiAttribute *a = new MeiAttribute("medium", _medium);
        b->m_Base.addAttribute(a);
    }
};

bool MediumMixIn::hasMedium() {
    return b->m_Base.hasAttribute("medium");
};

void MediumMixIn::removeMedium() {
    b->m_Base.removeAttribute("medium");
};


MeiversionMixIn::MeiversionMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MeiversionMixIn::getMeiversionValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meiversion")) {
        throw AttributeNotFoundException("meiversion");
    }
    return b->m_Base.getAttributeValue("meiversion");
};

MeiAttribute* MeiversionMixIn::getMeiversion() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meiversion")) {
        throw AttributeNotFoundException("meiversion");
    }
    return b->m_Base.getAttribute("meiversion");
};

void MeiversionMixIn::setMeiversion(std::string _meiversion) {
    if (!b->m_Base.hasAttribute("meiversion")) {
        MeiAttribute *a = new MeiAttribute("meiversion", _meiversion);
        b->m_Base.addAttribute(a);
    }
};

bool MeiversionMixIn::hasMeiversion() {
    return b->m_Base.hasAttribute("meiversion");
};

void MeiversionMixIn::removeMeiversion() {
    b->m_Base.removeAttribute("meiversion");
};


MeterconformanceMixIn::MeterconformanceMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MeterconformanceMixIn::getMetconValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->m_Base.getAttributeValue("metcon");
};

MeiAttribute* MeterconformanceMixIn::getMetcon() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->m_Base.getAttribute("metcon");
};

void MeterconformanceMixIn::setMetcon(std::string _metcon) {
    if (!b->m_Base.hasAttribute("metcon")) {
        MeiAttribute *a = new MeiAttribute("metcon", _metcon);
        b->m_Base.addAttribute(a);
    }
};

bool MeterconformanceMixIn::hasMetcon() {
    return b->m_Base.hasAttribute("metcon");
};

void MeterconformanceMixIn::removeMetcon() {
    b->m_Base.removeAttribute("metcon");
};


MeterconformanceBarMixIn::MeterconformanceBarMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MeterconformanceBarMixIn::getMetconValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->m_Base.getAttributeValue("metcon");
};

MeiAttribute* MeterconformanceBarMixIn::getMetcon() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->m_Base.getAttribute("metcon");
};

void MeterconformanceBarMixIn::setMetcon(std::string _metcon) {
    if (!b->m_Base.hasAttribute("metcon")) {
        MeiAttribute *a = new MeiAttribute("metcon", _metcon);
        b->m_Base.addAttribute(a);
    }
};

bool MeterconformanceBarMixIn::hasMetcon() {
    return b->m_Base.hasAttribute("metcon");
};

void MeterconformanceBarMixIn::removeMetcon() {
    b->m_Base.removeAttribute("metcon");
};

string MeterconformanceBarMixIn::getControlValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("control")) {
        throw AttributeNotFoundException("control");
    }
    return b->m_Base.getAttributeValue("control");
};

MeiAttribute* MeterconformanceBarMixIn::getControl() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("control")) {
        throw AttributeNotFoundException("control");
    }
    return b->m_Base.getAttribute("control");
};

void MeterconformanceBarMixIn::setControl(std::string _control) {
    if (!b->m_Base.hasAttribute("control")) {
        MeiAttribute *a = new MeiAttribute("control", _control);
        b->m_Base.addAttribute(a);
    }
};

bool MeterconformanceBarMixIn::hasControl() {
    return b->m_Base.hasAttribute("control");
};

void MeterconformanceBarMixIn::removeControl() {
    b->m_Base.removeAttribute("control");
};


MetersLogMixIn::MetersLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MetersLogMixIn::getMeterCountValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.count")) {
        throw AttributeNotFoundException("meter.count");
    }
    return b->m_Base.getAttributeValue("meter.count");
};

MeiAttribute* MetersLogMixIn::getMeterCount() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.count")) {
        throw AttributeNotFoundException("meter.count");
    }
    return b->m_Base.getAttribute("meter.count");
};

void MetersLogMixIn::setMeterCount(std::string _metercount) {
    if (!b->m_Base.hasAttribute("meter.count")) {
        MeiAttribute *a = new MeiAttribute("meter.count", _metercount);
        b->m_Base.addAttribute(a);
    }
};

bool MetersLogMixIn::hasMeterCount() {
    return b->m_Base.hasAttribute("meter.count");
};

void MetersLogMixIn::removeMeterCount() {
    b->m_Base.removeAttribute("meter.count");
};

string MetersLogMixIn::getMeterUnitValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.unit")) {
        throw AttributeNotFoundException("meter.unit");
    }
    return b->m_Base.getAttributeValue("meter.unit");
};

MeiAttribute* MetersLogMixIn::getMeterUnit() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.unit")) {
        throw AttributeNotFoundException("meter.unit");
    }
    return b->m_Base.getAttribute("meter.unit");
};

void MetersLogMixIn::setMeterUnit(std::string _meterunit) {
    if (!b->m_Base.hasAttribute("meter.unit")) {
        MeiAttribute *a = new MeiAttribute("meter.unit", _meterunit);
        b->m_Base.addAttribute(a);
    }
};

bool MetersLogMixIn::hasMeterUnit() {
    return b->m_Base.hasAttribute("meter.unit");
};

void MetersLogMixIn::removeMeterUnit() {
    b->m_Base.removeAttribute("meter.unit");
};


MetersVisMixIn::MetersVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MetersVisMixIn::getMeterRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.rend")) {
        throw AttributeNotFoundException("meter.rend");
    }
    return b->m_Base.getAttributeValue("meter.rend");
};

MeiAttribute* MetersVisMixIn::getMeterRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.rend")) {
        throw AttributeNotFoundException("meter.rend");
    }
    return b->m_Base.getAttribute("meter.rend");
};

void MetersVisMixIn::setMeterRend(std::string _meterrend) {
    if (!b->m_Base.hasAttribute("meter.rend")) {
        MeiAttribute *a = new MeiAttribute("meter.rend", _meterrend);
        b->m_Base.addAttribute(a);
    }
};

bool MetersVisMixIn::hasMeterRend() {
    return b->m_Base.hasAttribute("meter.rend");
};

void MetersVisMixIn::removeMeterRend() {
    b->m_Base.removeAttribute("meter.rend");
};

string MetersVisMixIn::getMeterShowchangeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.showchange")) {
        throw AttributeNotFoundException("meter.showchange");
    }
    return b->m_Base.getAttributeValue("meter.showchange");
};

MeiAttribute* MetersVisMixIn::getMeterShowchange() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.showchange")) {
        throw AttributeNotFoundException("meter.showchange");
    }
    return b->m_Base.getAttribute("meter.showchange");
};

void MetersVisMixIn::setMeterShowchange(std::string _metershowchange) {
    if (!b->m_Base.hasAttribute("meter.showchange")) {
        MeiAttribute *a = new MeiAttribute("meter.showchange", _metershowchange);
        b->m_Base.addAttribute(a);
    }
};

bool MetersVisMixIn::hasMeterShowchange() {
    return b->m_Base.hasAttribute("meter.showchange");
};

void MetersVisMixIn::removeMeterShowchange() {
    b->m_Base.removeAttribute("meter.showchange");
};

string MetersVisMixIn::getMeterSymValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.sym")) {
        throw AttributeNotFoundException("meter.sym");
    }
    return b->m_Base.getAttributeValue("meter.sym");
};

MeiAttribute* MetersVisMixIn::getMeterSym() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.sym")) {
        throw AttributeNotFoundException("meter.sym");
    }
    return b->m_Base.getAttribute("meter.sym");
};

void MetersVisMixIn::setMeterSym(std::string _metersym) {
    if (!b->m_Base.hasAttribute("meter.sym")) {
        MeiAttribute *a = new MeiAttribute("meter.sym", _metersym);
        b->m_Base.addAttribute(a);
    }
};

bool MetersVisMixIn::hasMeterSym() {
    return b->m_Base.hasAttribute("meter.sym");
};

void MetersVisMixIn::removeMeterSym() {
    b->m_Base.removeAttribute("meter.sym");
};


MmtempoMixIn::MmtempoMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MmtempoMixIn::getMmValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mm")) {
        throw AttributeNotFoundException("mm");
    }
    return b->m_Base.getAttributeValue("mm");
};

MeiAttribute* MmtempoMixIn::getMm() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mm")) {
        throw AttributeNotFoundException("mm");
    }
    return b->m_Base.getAttribute("mm");
};

void MmtempoMixIn::setMm(std::string _mm) {
    if (!b->m_Base.hasAttribute("mm")) {
        MeiAttribute *a = new MeiAttribute("mm", _mm);
        b->m_Base.addAttribute(a);
    }
};

bool MmtempoMixIn::hasMm() {
    return b->m_Base.hasAttribute("mm");
};

void MmtempoMixIn::removeMm() {
    b->m_Base.removeAttribute("mm");
};


MultinummeasuresMixIn::MultinummeasuresMixIn(BaseMeiElement *b) {
    this->b = b;
};

string MultinummeasuresMixIn::getMultiNumberValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("multi.number")) {
        throw AttributeNotFoundException("multi.number");
    }
    return b->m_Base.getAttributeValue("multi.number");
};

MeiAttribute* MultinummeasuresMixIn::getMultiNumber() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("multi.number")) {
        throw AttributeNotFoundException("multi.number");
    }
    return b->m_Base.getAttribute("multi.number");
};

void MultinummeasuresMixIn::setMultiNumber(std::string _multinumber) {
    if (!b->m_Base.hasAttribute("multi.number")) {
        MeiAttribute *a = new MeiAttribute("multi.number", _multinumber);
        b->m_Base.addAttribute(a);
    }
};

bool MultinummeasuresMixIn::hasMultiNumber() {
    return b->m_Base.hasAttribute("multi.number");
};

void MultinummeasuresMixIn::removeMultiNumber() {
    b->m_Base.removeAttribute("multi.number");
};


NameMixIn::NameMixIn(BaseMeiElement *b) {
    this->b = b;
};

string NameMixIn::getNymrefValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("nymref")) {
        throw AttributeNotFoundException("nymref");
    }
    return b->m_Base.getAttributeValue("nymref");
};

MeiAttribute* NameMixIn::getNymref() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("nymref")) {
        throw AttributeNotFoundException("nymref");
    }
    return b->m_Base.getAttribute("nymref");
};

void NameMixIn::setNymref(std::string _nymref) {
    if (!b->m_Base.hasAttribute("nymref")) {
        MeiAttribute *a = new MeiAttribute("nymref", _nymref);
        b->m_Base.addAttribute(a);
    }
};

bool NameMixIn::hasNymref() {
    return b->m_Base.hasAttribute("nymref");
};

void NameMixIn::removeNymref() {
    b->m_Base.removeAttribute("nymref");
};

string NameMixIn::getRoleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->m_Base.getAttributeValue("role");
};

MeiAttribute* NameMixIn::getRole() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->m_Base.getAttribute("role");
};

void NameMixIn::setRole(std::string _role) {
    if (!b->m_Base.hasAttribute("role")) {
        MeiAttribute *a = new MeiAttribute("role", _role);
        b->m_Base.addAttribute(a);
    }
};

bool NameMixIn::hasRole() {
    return b->m_Base.hasAttribute("role");
};

void NameMixIn::removeRole() {
    b->m_Base.removeAttribute("role");
};


NoteGesMixIn::NoteGesMixIn(BaseMeiElement *b) {
    this->b = b;
};

string NoteGesMixIn::getOctGesValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("oct.ges")) {
        throw AttributeNotFoundException("oct.ges");
    }
    return b->m_Base.getAttributeValue("oct.ges");
};

MeiAttribute* NoteGesMixIn::getOctGes() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("oct.ges")) {
        throw AttributeNotFoundException("oct.ges");
    }
    return b->m_Base.getAttribute("oct.ges");
};

void NoteGesMixIn::setOctGes(std::string _octges) {
    if (!b->m_Base.hasAttribute("oct.ges")) {
        MeiAttribute *a = new MeiAttribute("oct.ges", _octges);
        b->m_Base.addAttribute(a);
    }
};

bool NoteGesMixIn::hasOctGes() {
    return b->m_Base.hasAttribute("oct.ges");
};

void NoteGesMixIn::removeOctGes() {
    b->m_Base.removeAttribute("oct.ges");
};

string NoteGesMixIn::getPnameGesValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pname.ges")) {
        throw AttributeNotFoundException("pname.ges");
    }
    return b->m_Base.getAttributeValue("pname.ges");
};

MeiAttribute* NoteGesMixIn::getPnameGes() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pname.ges")) {
        throw AttributeNotFoundException("pname.ges");
    }
    return b->m_Base.getAttribute("pname.ges");
};

void NoteGesMixIn::setPnameGes(std::string _pnameges) {
    if (!b->m_Base.hasAttribute("pname.ges")) {
        MeiAttribute *a = new MeiAttribute("pname.ges", _pnameges);
        b->m_Base.addAttribute(a);
    }
};

bool NoteGesMixIn::hasPnameGes() {
    return b->m_Base.hasAttribute("pname.ges");
};

void NoteGesMixIn::removePnameGes() {
    b->m_Base.removeAttribute("pname.ges");
};

string NoteGesMixIn::getPnumValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pnum")) {
        throw AttributeNotFoundException("pnum");
    }
    return b->m_Base.getAttributeValue("pnum");
};

MeiAttribute* NoteGesMixIn::getPnum() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pnum")) {
        throw AttributeNotFoundException("pnum");
    }
    return b->m_Base.getAttribute("pnum");
};

void NoteGesMixIn::setPnum(std::string _pnum) {
    if (!b->m_Base.hasAttribute("pnum")) {
        MeiAttribute *a = new MeiAttribute("pnum", _pnum);
        b->m_Base.addAttribute(a);
    }
};

bool NoteGesMixIn::hasPnum() {
    return b->m_Base.hasAttribute("pnum");
};

void NoteGesMixIn::removePnum() {
    b->m_Base.removeAttribute("pnum");
};


NoteVisMixIn::NoteVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string NoteVisMixIn::getHeadshapeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("headshape")) {
        throw AttributeNotFoundException("headshape");
    }
    return b->m_Base.getAttributeValue("headshape");
};

MeiAttribute* NoteVisMixIn::getHeadshape() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("headshape")) {
        throw AttributeNotFoundException("headshape");
    }
    return b->m_Base.getAttribute("headshape");
};

void NoteVisMixIn::setHeadshape(std::string _headshape) {
    if (!b->m_Base.hasAttribute("headshape")) {
        MeiAttribute *a = new MeiAttribute("headshape", _headshape);
        b->m_Base.addAttribute(a);
    }
};

bool NoteVisMixIn::hasHeadshape() {
    return b->m_Base.hasAttribute("headshape");
};

void NoteVisMixIn::removeHeadshape() {
    b->m_Base.removeAttribute("headshape");
};


OctaveMixIn::OctaveMixIn(BaseMeiElement *b) {
    this->b = b;
};

string OctaveMixIn::getOctValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("oct")) {
        throw AttributeNotFoundException("oct");
    }
    return b->m_Base.getAttributeValue("oct");
};

MeiAttribute* OctaveMixIn::getOct() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("oct")) {
        throw AttributeNotFoundException("oct");
    }
    return b->m_Base.getAttribute("oct");
};

void OctaveMixIn::setOct(std::string _oct) {
    if (!b->m_Base.hasAttribute("oct")) {
        MeiAttribute *a = new MeiAttribute("oct", _oct);
        b->m_Base.addAttribute(a);
    }
};

bool OctaveMixIn::hasOct() {
    return b->m_Base.hasAttribute("oct");
};

void OctaveMixIn::removeOct() {
    b->m_Base.removeAttribute("oct");
};


OctavedefaultMixIn::OctavedefaultMixIn(BaseMeiElement *b) {
    this->b = b;
};

string OctavedefaultMixIn::getOctaveDefaultValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("octave.default")) {
        throw AttributeNotFoundException("octave.default");
    }
    return b->m_Base.getAttributeValue("octave.default");
};

MeiAttribute* OctavedefaultMixIn::getOctaveDefault() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("octave.default")) {
        throw AttributeNotFoundException("octave.default");
    }
    return b->m_Base.getAttribute("octave.default");
};

void OctavedefaultMixIn::setOctaveDefault(std::string _octavedefault) {
    if (!b->m_Base.hasAttribute("octave.default")) {
        MeiAttribute *a = new MeiAttribute("octave.default", _octavedefault);
        b->m_Base.addAttribute(a);
    }
};

bool OctavedefaultMixIn::hasOctaveDefault() {
    return b->m_Base.hasAttribute("octave.default");
};

void OctavedefaultMixIn::removeOctaveDefault() {
    b->m_Base.removeAttribute("octave.default");
};


OctavedisplacementMixIn::OctavedisplacementMixIn(BaseMeiElement *b) {
    this->b = b;
};

string OctavedisplacementMixIn::getDisValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dis")) {
        throw AttributeNotFoundException("dis");
    }
    return b->m_Base.getAttributeValue("dis");
};

MeiAttribute* OctavedisplacementMixIn::getDis() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dis")) {
        throw AttributeNotFoundException("dis");
    }
    return b->m_Base.getAttribute("dis");
};

void OctavedisplacementMixIn::setDis(std::string _dis) {
    if (!b->m_Base.hasAttribute("dis")) {
        MeiAttribute *a = new MeiAttribute("dis", _dis);
        b->m_Base.addAttribute(a);
    }
};

bool OctavedisplacementMixIn::hasDis() {
    return b->m_Base.hasAttribute("dis");
};

void OctavedisplacementMixIn::removeDis() {
    b->m_Base.removeAttribute("dis");
};

string OctavedisplacementMixIn::getDisPlaceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dis.place")) {
        throw AttributeNotFoundException("dis.place");
    }
    return b->m_Base.getAttributeValue("dis.place");
};

MeiAttribute* OctavedisplacementMixIn::getDisPlace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dis.place")) {
        throw AttributeNotFoundException("dis.place");
    }
    return b->m_Base.getAttribute("dis.place");
};

void OctavedisplacementMixIn::setDisPlace(std::string _displace) {
    if (!b->m_Base.hasAttribute("dis.place")) {
        MeiAttribute *a = new MeiAttribute("dis.place", _displace);
        b->m_Base.addAttribute(a);
    }
};

bool OctavedisplacementMixIn::hasDisPlace() {
    return b->m_Base.hasAttribute("dis.place");
};

void OctavedisplacementMixIn::removeDisPlace() {
    b->m_Base.removeAttribute("dis.place");
};


OnelinestaffMixIn::OnelinestaffMixIn(BaseMeiElement *b) {
    this->b = b;
};

string OnelinestaffMixIn::getOnthelineValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ontheline")) {
        throw AttributeNotFoundException("ontheline");
    }
    return b->m_Base.getAttributeValue("ontheline");
};

MeiAttribute* OnelinestaffMixIn::getOntheline() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ontheline")) {
        throw AttributeNotFoundException("ontheline");
    }
    return b->m_Base.getAttribute("ontheline");
};

void OnelinestaffMixIn::setOntheline(std::string _ontheline) {
    if (!b->m_Base.hasAttribute("ontheline")) {
        MeiAttribute *a = new MeiAttribute("ontheline", _ontheline);
        b->m_Base.addAttribute(a);
    }
};

bool OnelinestaffMixIn::hasOntheline() {
    return b->m_Base.hasAttribute("ontheline");
};

void OnelinestaffMixIn::removeOntheline() {
    b->m_Base.removeAttribute("ontheline");
};


PadLogMixIn::PadLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string PadLogMixIn::getNumValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};

MeiAttribute* PadLogMixIn::getNum() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};

void PadLogMixIn::setNum(std::string _num) {
    if (!b->m_Base.hasAttribute("num")) {
        MeiAttribute *a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};

bool PadLogMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};

void PadLogMixIn::removeNum() {
    b->m_Base.removeAttribute("num");
};


ParticipantidentMixIn::ParticipantidentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ParticipantidentMixIn::getPlistValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->m_Base.getAttributeValue("plist");
};

MeiAttribute* ParticipantidentMixIn::getPlist() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->m_Base.getAttribute("plist");
};

void ParticipantidentMixIn::setPlist(std::string _plist) {
    if (!b->m_Base.hasAttribute("plist")) {
        MeiAttribute *a = new MeiAttribute("plist", _plist);
        b->m_Base.addAttribute(a);
    }
};

bool ParticipantidentMixIn::hasPlist() {
    return b->m_Base.hasAttribute("plist");
};

void ParticipantidentMixIn::removePlist() {
    b->m_Base.removeAttribute("plist");
};


PbVisMixIn::PbVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string PbVisMixIn::getFuncValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return b->m_Base.getAttributeValue("func");
};

MeiAttribute* PbVisMixIn::getFunc() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("func")) {
        throw AttributeNotFoundException("func");
    }
    return b->m_Base.getAttribute("func");
};

void PbVisMixIn::setFunc(std::string _func) {
    if (!b->m_Base.hasAttribute("func")) {
        MeiAttribute *a = new MeiAttribute("func", _func);
        b->m_Base.addAttribute(a);
    }
};

bool PbVisMixIn::hasFunc() {
    return b->m_Base.hasAttribute("func");
};

void PbVisMixIn::removeFunc() {
    b->m_Base.removeAttribute("func");
};


PitchMixIn::PitchMixIn(BaseMeiElement *b) {
    this->b = b;
};

string PitchMixIn::getPnameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pname")) {
        throw AttributeNotFoundException("pname");
    }
    return b->m_Base.getAttributeValue("pname");
};

MeiAttribute* PitchMixIn::getPname() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pname")) {
        throw AttributeNotFoundException("pname");
    }
    return b->m_Base.getAttribute("pname");
};

void PitchMixIn::setPname(std::string _pname) {
    if (!b->m_Base.hasAttribute("pname")) {
        MeiAttribute *a = new MeiAttribute("pname", _pname);
        b->m_Base.addAttribute(a);
    }
};

bool PitchMixIn::hasPname() {
    return b->m_Base.hasAttribute("pname");
};

void PitchMixIn::removePname() {
    b->m_Base.removeAttribute("pname");
};


PlacementMixIn::PlacementMixIn(BaseMeiElement *b) {
    this->b = b;
};

string PlacementMixIn::getPlaceValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->m_Base.getAttributeValue("place");
};

MeiAttribute* PlacementMixIn::getPlace() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->m_Base.getAttribute("place");
};

void PlacementMixIn::setPlace(std::string _place) {
    if (!b->m_Base.hasAttribute("place")) {
        MeiAttribute *a = new MeiAttribute("place", _place);
        b->m_Base.addAttribute(a);
    }
};

bool PlacementMixIn::hasPlace() {
    return b->m_Base.hasAttribute("place");
};

void PlacementMixIn::removePlace() {
    b->m_Base.removeAttribute("place");
};


RegularizedMixIn::RegularizedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string RegularizedMixIn::getRegValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return b->m_Base.getAttributeValue("reg");
};

MeiAttribute* RegularizedMixIn::getReg() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reg")) {
        throw AttributeNotFoundException("reg");
    }
    return b->m_Base.getAttribute("reg");
};

void RegularizedMixIn::setReg(std::string _reg) {
    if (!b->m_Base.hasAttribute("reg")) {
        MeiAttribute *a = new MeiAttribute("reg", _reg);
        b->m_Base.addAttribute(a);
    }
};

bool RegularizedMixIn::hasReg() {
    return b->m_Base.hasAttribute("reg");
};

void RegularizedMixIn::removeReg() {
    b->m_Base.removeAttribute("reg");
};


RelativesizeMixIn::RelativesizeMixIn(BaseMeiElement *b) {
    this->b = b;
};

string RelativesizeMixIn::getSizeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("size")) {
        throw AttributeNotFoundException("size");
    }
    return b->m_Base.getAttributeValue("size");
};

MeiAttribute* RelativesizeMixIn::getSize() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("size")) {
        throw AttributeNotFoundException("size");
    }
    return b->m_Base.getAttribute("size");
};

void RelativesizeMixIn::setSize(std::string _size) {
    if (!b->m_Base.hasAttribute("size")) {
        MeiAttribute *a = new MeiAttribute("size", _size);
        b->m_Base.addAttribute(a);
    }
};

bool RelativesizeMixIn::hasSize() {
    return b->m_Base.hasAttribute("size");
};

void RelativesizeMixIn::removeSize() {
    b->m_Base.removeAttribute("size");
};


ResponsibilityMixIn::ResponsibilityMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ResponsibilityMixIn::getRespValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->m_Base.getAttributeValue("resp");
};

MeiAttribute* ResponsibilityMixIn::getResp() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->m_Base.getAttribute("resp");
};

void ResponsibilityMixIn::setResp(std::string _resp) {
    if (!b->m_Base.hasAttribute("resp")) {
        MeiAttribute *a = new MeiAttribute("resp", _resp);
        b->m_Base.addAttribute(a);
    }
};

bool ResponsibilityMixIn::hasResp() {
    return b->m_Base.hasAttribute("resp");
};

void ResponsibilityMixIn::removeResp() {
    b->m_Base.removeAttribute("resp");
};


SbVisMixIn::SbVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SbVisMixIn::getRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};

MeiAttribute* SbVisMixIn::getRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};

void SbVisMixIn::setRend(std::string _rend) {
    if (!b->m_Base.hasAttribute("rend")) {
        MeiAttribute *a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};

bool SbVisMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};

void SbVisMixIn::removeRend() {
    b->m_Base.removeAttribute("rend");
};


ScalableMixIn::ScalableMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ScalableMixIn::getScaleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("scale")) {
        throw AttributeNotFoundException("scale");
    }
    return b->m_Base.getAttributeValue("scale");
};

MeiAttribute* ScalableMixIn::getScale() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("scale")) {
        throw AttributeNotFoundException("scale");
    }
    return b->m_Base.getAttribute("scale");
};

void ScalableMixIn::setScale(std::string _scale) {
    if (!b->m_Base.hasAttribute("scale")) {
        MeiAttribute *a = new MeiAttribute("scale", _scale);
        b->m_Base.addAttribute(a);
    }
};

bool ScalableMixIn::hasScale() {
    return b->m_Base.hasAttribute("scale");
};

void ScalableMixIn::removeScale() {
    b->m_Base.removeAttribute("scale");
};


ScoredefGesMixIn::ScoredefGesMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ScoredefGesMixIn::getTunePnameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tune.pname")) {
        throw AttributeNotFoundException("tune.pname");
    }
    return b->m_Base.getAttributeValue("tune.pname");
};

MeiAttribute* ScoredefGesMixIn::getTunePname() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tune.pname")) {
        throw AttributeNotFoundException("tune.pname");
    }
    return b->m_Base.getAttribute("tune.pname");
};

void ScoredefGesMixIn::setTunePname(std::string _tunepname) {
    if (!b->m_Base.hasAttribute("tune.pname")) {
        MeiAttribute *a = new MeiAttribute("tune.pname", _tunepname);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefGesMixIn::hasTunePname() {
    return b->m_Base.hasAttribute("tune.pname");
};

void ScoredefGesMixIn::removeTunePname() {
    b->m_Base.removeAttribute("tune.pname");
};

string ScoredefGesMixIn::getTuneHzValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tune.Hz")) {
        throw AttributeNotFoundException("tune.Hz");
    }
    return b->m_Base.getAttributeValue("tune.Hz");
};

MeiAttribute* ScoredefGesMixIn::getTuneHz() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tune.Hz")) {
        throw AttributeNotFoundException("tune.Hz");
    }
    return b->m_Base.getAttribute("tune.Hz");
};

void ScoredefGesMixIn::setTuneHz(std::string _tuneHz) {
    if (!b->m_Base.hasAttribute("tune.Hz")) {
        MeiAttribute *a = new MeiAttribute("tune.Hz", _tuneHz);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefGesMixIn::hasTuneHz() {
    return b->m_Base.hasAttribute("tune.Hz");
};

void ScoredefGesMixIn::removeTuneHz() {
    b->m_Base.removeAttribute("tune.Hz");
};

string ScoredefGesMixIn::getTuneTemperValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tune.temper")) {
        throw AttributeNotFoundException("tune.temper");
    }
    return b->m_Base.getAttributeValue("tune.temper");
};

MeiAttribute* ScoredefGesMixIn::getTuneTemper() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tune.temper")) {
        throw AttributeNotFoundException("tune.temper");
    }
    return b->m_Base.getAttribute("tune.temper");
};

void ScoredefGesMixIn::setTuneTemper(std::string _tunetemper) {
    if (!b->m_Base.hasAttribute("tune.temper")) {
        MeiAttribute *a = new MeiAttribute("tune.temper", _tunetemper);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefGesMixIn::hasTuneTemper() {
    return b->m_Base.hasAttribute("tune.temper");
};

void ScoredefGesMixIn::removeTuneTemper() {
    b->m_Base.removeAttribute("tune.temper");
};


ScoredefVisMixIn::ScoredefVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string ScoredefVisMixIn::getEndingRendValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ending.rend")) {
        throw AttributeNotFoundException("ending.rend");
    }
    return b->m_Base.getAttributeValue("ending.rend");
};

MeiAttribute* ScoredefVisMixIn::getEndingRend() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ending.rend")) {
        throw AttributeNotFoundException("ending.rend");
    }
    return b->m_Base.getAttribute("ending.rend");
};

void ScoredefVisMixIn::setEndingRend(std::string _endingrend) {
    if (!b->m_Base.hasAttribute("ending.rend")) {
        MeiAttribute *a = new MeiAttribute("ending.rend", _endingrend);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasEndingRend() {
    return b->m_Base.hasAttribute("ending.rend");
};

void ScoredefVisMixIn::removeEndingRend() {
    b->m_Base.removeAttribute("ending.rend");
};

string ScoredefVisMixIn::getMnumVisibleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mnum.visible")) {
        throw AttributeNotFoundException("mnum.visible");
    }
    return b->m_Base.getAttributeValue("mnum.visible");
};

MeiAttribute* ScoredefVisMixIn::getMnumVisible() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mnum.visible")) {
        throw AttributeNotFoundException("mnum.visible");
    }
    return b->m_Base.getAttribute("mnum.visible");
};

void ScoredefVisMixIn::setMnumVisible(std::string _mnumvisible) {
    if (!b->m_Base.hasAttribute("mnum.visible")) {
        MeiAttribute *a = new MeiAttribute("mnum.visible", _mnumvisible);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasMnumVisible() {
    return b->m_Base.hasAttribute("mnum.visible");
};

void ScoredefVisMixIn::removeMnumVisible() {
    b->m_Base.removeAttribute("mnum.visible");
};

string ScoredefVisMixIn::getMusicNameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("music.name")) {
        throw AttributeNotFoundException("music.name");
    }
    return b->m_Base.getAttributeValue("music.name");
};

MeiAttribute* ScoredefVisMixIn::getMusicName() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("music.name")) {
        throw AttributeNotFoundException("music.name");
    }
    return b->m_Base.getAttribute("music.name");
};

void ScoredefVisMixIn::setMusicName(std::string _musicname) {
    if (!b->m_Base.hasAttribute("music.name")) {
        MeiAttribute *a = new MeiAttribute("music.name", _musicname);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasMusicName() {
    return b->m_Base.hasAttribute("music.name");
};

void ScoredefVisMixIn::removeMusicName() {
    b->m_Base.removeAttribute("music.name");
};

string ScoredefVisMixIn::getMusicSizeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("music.size")) {
        throw AttributeNotFoundException("music.size");
    }
    return b->m_Base.getAttributeValue("music.size");
};

MeiAttribute* ScoredefVisMixIn::getMusicSize() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("music.size")) {
        throw AttributeNotFoundException("music.size");
    }
    return b->m_Base.getAttribute("music.size");
};

void ScoredefVisMixIn::setMusicSize(std::string _musicsize) {
    if (!b->m_Base.hasAttribute("music.size")) {
        MeiAttribute *a = new MeiAttribute("music.size", _musicsize);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasMusicSize() {
    return b->m_Base.hasAttribute("music.size");
};

void ScoredefVisMixIn::removeMusicSize() {
    b->m_Base.removeAttribute("music.size");
};

string ScoredefVisMixIn::getOptimizeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("optimize")) {
        throw AttributeNotFoundException("optimize");
    }
    return b->m_Base.getAttributeValue("optimize");
};

MeiAttribute* ScoredefVisMixIn::getOptimize() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("optimize")) {
        throw AttributeNotFoundException("optimize");
    }
    return b->m_Base.getAttribute("optimize");
};

void ScoredefVisMixIn::setOptimize(std::string _optimize) {
    if (!b->m_Base.hasAttribute("optimize")) {
        MeiAttribute *a = new MeiAttribute("optimize", _optimize);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasOptimize() {
    return b->m_Base.hasAttribute("optimize");
};

void ScoredefVisMixIn::removeOptimize() {
    b->m_Base.removeAttribute("optimize");
};

string ScoredefVisMixIn::getPageHeightValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.height")) {
        throw AttributeNotFoundException("page.height");
    }
    return b->m_Base.getAttributeValue("page.height");
};

MeiAttribute* ScoredefVisMixIn::getPageHeight() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.height")) {
        throw AttributeNotFoundException("page.height");
    }
    return b->m_Base.getAttribute("page.height");
};

void ScoredefVisMixIn::setPageHeight(std::string _pageheight) {
    if (!b->m_Base.hasAttribute("page.height")) {
        MeiAttribute *a = new MeiAttribute("page.height", _pageheight);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPageHeight() {
    return b->m_Base.hasAttribute("page.height");
};

void ScoredefVisMixIn::removePageHeight() {
    b->m_Base.removeAttribute("page.height");
};

string ScoredefVisMixIn::getPageWidthValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.width")) {
        throw AttributeNotFoundException("page.width");
    }
    return b->m_Base.getAttributeValue("page.width");
};

MeiAttribute* ScoredefVisMixIn::getPageWidth() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.width")) {
        throw AttributeNotFoundException("page.width");
    }
    return b->m_Base.getAttribute("page.width");
};

void ScoredefVisMixIn::setPageWidth(std::string _pagewidth) {
    if (!b->m_Base.hasAttribute("page.width")) {
        MeiAttribute *a = new MeiAttribute("page.width", _pagewidth);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPageWidth() {
    return b->m_Base.hasAttribute("page.width");
};

void ScoredefVisMixIn::removePageWidth() {
    b->m_Base.removeAttribute("page.width");
};

string ScoredefVisMixIn::getPageUnitsValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.units")) {
        throw AttributeNotFoundException("page.units");
    }
    return b->m_Base.getAttributeValue("page.units");
};

MeiAttribute* ScoredefVisMixIn::getPageUnits() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.units")) {
        throw AttributeNotFoundException("page.units");
    }
    return b->m_Base.getAttribute("page.units");
};

void ScoredefVisMixIn::setPageUnits(std::string _pageunits) {
    if (!b->m_Base.hasAttribute("page.units")) {
        MeiAttribute *a = new MeiAttribute("page.units", _pageunits);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPageUnits() {
    return b->m_Base.hasAttribute("page.units");
};

void ScoredefVisMixIn::removePageUnits() {
    b->m_Base.removeAttribute("page.units");
};

string ScoredefVisMixIn::getPageTopmarValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.topmar")) {
        throw AttributeNotFoundException("page.topmar");
    }
    return b->m_Base.getAttributeValue("page.topmar");
};

MeiAttribute* ScoredefVisMixIn::getPageTopmar() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.topmar")) {
        throw AttributeNotFoundException("page.topmar");
    }
    return b->m_Base.getAttribute("page.topmar");
};

void ScoredefVisMixIn::setPageTopmar(std::string _pagetopmar) {
    if (!b->m_Base.hasAttribute("page.topmar")) {
        MeiAttribute *a = new MeiAttribute("page.topmar", _pagetopmar);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPageTopmar() {
    return b->m_Base.hasAttribute("page.topmar");
};

void ScoredefVisMixIn::removePageTopmar() {
    b->m_Base.removeAttribute("page.topmar");
};

string ScoredefVisMixIn::getPageBotmarValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.botmar")) {
        throw AttributeNotFoundException("page.botmar");
    }
    return b->m_Base.getAttributeValue("page.botmar");
};

MeiAttribute* ScoredefVisMixIn::getPageBotmar() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.botmar")) {
        throw AttributeNotFoundException("page.botmar");
    }
    return b->m_Base.getAttribute("page.botmar");
};

void ScoredefVisMixIn::setPageBotmar(std::string _pagebotmar) {
    if (!b->m_Base.hasAttribute("page.botmar")) {
        MeiAttribute *a = new MeiAttribute("page.botmar", _pagebotmar);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPageBotmar() {
    return b->m_Base.hasAttribute("page.botmar");
};

void ScoredefVisMixIn::removePageBotmar() {
    b->m_Base.removeAttribute("page.botmar");
};

string ScoredefVisMixIn::getPageLeftmarValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.leftmar")) {
        throw AttributeNotFoundException("page.leftmar");
    }
    return b->m_Base.getAttributeValue("page.leftmar");
};

MeiAttribute* ScoredefVisMixIn::getPageLeftmar() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.leftmar")) {
        throw AttributeNotFoundException("page.leftmar");
    }
    return b->m_Base.getAttribute("page.leftmar");
};

void ScoredefVisMixIn::setPageLeftmar(std::string _pageleftmar) {
    if (!b->m_Base.hasAttribute("page.leftmar")) {
        MeiAttribute *a = new MeiAttribute("page.leftmar", _pageleftmar);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPageLeftmar() {
    return b->m_Base.hasAttribute("page.leftmar");
};

void ScoredefVisMixIn::removePageLeftmar() {
    b->m_Base.removeAttribute("page.leftmar");
};

string ScoredefVisMixIn::getPageRightmarValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.rightmar")) {
        throw AttributeNotFoundException("page.rightmar");
    }
    return b->m_Base.getAttributeValue("page.rightmar");
};

MeiAttribute* ScoredefVisMixIn::getPageRightmar() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.rightmar")) {
        throw AttributeNotFoundException("page.rightmar");
    }
    return b->m_Base.getAttribute("page.rightmar");
};

void ScoredefVisMixIn::setPageRightmar(std::string _pagerightmar) {
    if (!b->m_Base.hasAttribute("page.rightmar")) {
        MeiAttribute *a = new MeiAttribute("page.rightmar", _pagerightmar);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPageRightmar() {
    return b->m_Base.hasAttribute("page.rightmar");
};

void ScoredefVisMixIn::removePageRightmar() {
    b->m_Base.removeAttribute("page.rightmar");
};

string ScoredefVisMixIn::getPagePanelsValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.panels")) {
        throw AttributeNotFoundException("page.panels");
    }
    return b->m_Base.getAttributeValue("page.panels");
};

MeiAttribute* ScoredefVisMixIn::getPagePanels() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.panels")) {
        throw AttributeNotFoundException("page.panels");
    }
    return b->m_Base.getAttribute("page.panels");
};

void ScoredefVisMixIn::setPagePanels(std::string _pagepanels) {
    if (!b->m_Base.hasAttribute("page.panels")) {
        MeiAttribute *a = new MeiAttribute("page.panels", _pagepanels);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPagePanels() {
    return b->m_Base.hasAttribute("page.panels");
};

void ScoredefVisMixIn::removePagePanels() {
    b->m_Base.removeAttribute("page.panels");
};

string ScoredefVisMixIn::getPageScaleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.scale")) {
        throw AttributeNotFoundException("page.scale");
    }
    return b->m_Base.getAttributeValue("page.scale");
};

MeiAttribute* ScoredefVisMixIn::getPageScale() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("page.scale")) {
        throw AttributeNotFoundException("page.scale");
    }
    return b->m_Base.getAttribute("page.scale");
};

void ScoredefVisMixIn::setPageScale(std::string _pagescale) {
    if (!b->m_Base.hasAttribute("page.scale")) {
        MeiAttribute *a = new MeiAttribute("page.scale", _pagescale);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasPageScale() {
    return b->m_Base.hasAttribute("page.scale");
};

void ScoredefVisMixIn::removePageScale() {
    b->m_Base.removeAttribute("page.scale");
};

string ScoredefVisMixIn::getSpacingPackexpValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing.packexp")) {
        throw AttributeNotFoundException("spacing.packexp");
    }
    return b->m_Base.getAttributeValue("spacing.packexp");
};

MeiAttribute* ScoredefVisMixIn::getSpacingPackexp() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing.packexp")) {
        throw AttributeNotFoundException("spacing.packexp");
    }
    return b->m_Base.getAttribute("spacing.packexp");
};

void ScoredefVisMixIn::setSpacingPackexp(std::string _spacingpackexp) {
    if (!b->m_Base.hasAttribute("spacing.packexp")) {
        MeiAttribute *a = new MeiAttribute("spacing.packexp", _spacingpackexp);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasSpacingPackexp() {
    return b->m_Base.hasAttribute("spacing.packexp");
};

void ScoredefVisMixIn::removeSpacingPackexp() {
    b->m_Base.removeAttribute("spacing.packexp");
};

string ScoredefVisMixIn::getSpacingPackfactValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing.packfact")) {
        throw AttributeNotFoundException("spacing.packfact");
    }
    return b->m_Base.getAttributeValue("spacing.packfact");
};

MeiAttribute* ScoredefVisMixIn::getSpacingPackfact() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing.packfact")) {
        throw AttributeNotFoundException("spacing.packfact");
    }
    return b->m_Base.getAttribute("spacing.packfact");
};

void ScoredefVisMixIn::setSpacingPackfact(std::string _spacingpackfact) {
    if (!b->m_Base.hasAttribute("spacing.packfact")) {
        MeiAttribute *a = new MeiAttribute("spacing.packfact", _spacingpackfact);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasSpacingPackfact() {
    return b->m_Base.hasAttribute("spacing.packfact");
};

void ScoredefVisMixIn::removeSpacingPackfact() {
    b->m_Base.removeAttribute("spacing.packfact");
};

string ScoredefVisMixIn::getSpacingStaffValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing.staff")) {
        throw AttributeNotFoundException("spacing.staff");
    }
    return b->m_Base.getAttributeValue("spacing.staff");
};

MeiAttribute* ScoredefVisMixIn::getSpacingStaff() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing.staff")) {
        throw AttributeNotFoundException("spacing.staff");
    }
    return b->m_Base.getAttribute("spacing.staff");
};

void ScoredefVisMixIn::setSpacingStaff(std::string _spacingstaff) {
    if (!b->m_Base.hasAttribute("spacing.staff")) {
        MeiAttribute *a = new MeiAttribute("spacing.staff", _spacingstaff);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasSpacingStaff() {
    return b->m_Base.hasAttribute("spacing.staff");
};

void ScoredefVisMixIn::removeSpacingStaff() {
    b->m_Base.removeAttribute("spacing.staff");
};

string ScoredefVisMixIn::getSpacingSystemValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing.system")) {
        throw AttributeNotFoundException("spacing.system");
    }
    return b->m_Base.getAttributeValue("spacing.system");
};

MeiAttribute* ScoredefVisMixIn::getSpacingSystem() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing.system")) {
        throw AttributeNotFoundException("spacing.system");
    }
    return b->m_Base.getAttribute("spacing.system");
};

void ScoredefVisMixIn::setSpacingSystem(std::string _spacingsystem) {
    if (!b->m_Base.hasAttribute("spacing.system")) {
        MeiAttribute *a = new MeiAttribute("spacing.system", _spacingsystem);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasSpacingSystem() {
    return b->m_Base.hasAttribute("spacing.system");
};

void ScoredefVisMixIn::removeSpacingSystem() {
    b->m_Base.removeAttribute("spacing.system");
};

string ScoredefVisMixIn::getSystemLeftmarValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("system.leftmar")) {
        throw AttributeNotFoundException("system.leftmar");
    }
    return b->m_Base.getAttributeValue("system.leftmar");
};

MeiAttribute* ScoredefVisMixIn::getSystemLeftmar() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("system.leftmar")) {
        throw AttributeNotFoundException("system.leftmar");
    }
    return b->m_Base.getAttribute("system.leftmar");
};

void ScoredefVisMixIn::setSystemLeftmar(std::string _systemleftmar) {
    if (!b->m_Base.hasAttribute("system.leftmar")) {
        MeiAttribute *a = new MeiAttribute("system.leftmar", _systemleftmar);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasSystemLeftmar() {
    return b->m_Base.hasAttribute("system.leftmar");
};

void ScoredefVisMixIn::removeSystemLeftmar() {
    b->m_Base.removeAttribute("system.leftmar");
};

string ScoredefVisMixIn::getSystemRightmarValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("system.rightmar")) {
        throw AttributeNotFoundException("system.rightmar");
    }
    return b->m_Base.getAttributeValue("system.rightmar");
};

MeiAttribute* ScoredefVisMixIn::getSystemRightmar() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("system.rightmar")) {
        throw AttributeNotFoundException("system.rightmar");
    }
    return b->m_Base.getAttribute("system.rightmar");
};

void ScoredefVisMixIn::setSystemRightmar(std::string _systemrightmar) {
    if (!b->m_Base.hasAttribute("system.rightmar")) {
        MeiAttribute *a = new MeiAttribute("system.rightmar", _systemrightmar);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasSystemRightmar() {
    return b->m_Base.hasAttribute("system.rightmar");
};

void ScoredefVisMixIn::removeSystemRightmar() {
    b->m_Base.removeAttribute("system.rightmar");
};

string ScoredefVisMixIn::getSystemTopmarValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("system.topmar")) {
        throw AttributeNotFoundException("system.topmar");
    }
    return b->m_Base.getAttributeValue("system.topmar");
};

MeiAttribute* ScoredefVisMixIn::getSystemTopmar() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("system.topmar")) {
        throw AttributeNotFoundException("system.topmar");
    }
    return b->m_Base.getAttribute("system.topmar");
};

void ScoredefVisMixIn::setSystemTopmar(std::string _systemtopmar) {
    if (!b->m_Base.hasAttribute("system.topmar")) {
        MeiAttribute *a = new MeiAttribute("system.topmar", _systemtopmar);
        b->m_Base.addAttribute(a);
    }
};

bool ScoredefVisMixIn::hasSystemTopmar() {
    return b->m_Base.hasAttribute("system.topmar");
};

void ScoredefVisMixIn::removeSystemTopmar() {
    b->m_Base.removeAttribute("system.topmar");
};


SectionVisMixIn::SectionVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SectionVisMixIn::getRestartValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("restart")) {
        throw AttributeNotFoundException("restart");
    }
    return b->m_Base.getAttributeValue("restart");
};

MeiAttribute* SectionVisMixIn::getRestart() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("restart")) {
        throw AttributeNotFoundException("restart");
    }
    return b->m_Base.getAttribute("restart");
};

void SectionVisMixIn::setRestart(std::string _restart) {
    if (!b->m_Base.hasAttribute("restart")) {
        MeiAttribute *a = new MeiAttribute("restart", _restart);
        b->m_Base.addAttribute(a);
    }
};

bool SectionVisMixIn::hasRestart() {
    return b->m_Base.hasAttribute("restart");
};

void SectionVisMixIn::removeRestart() {
    b->m_Base.removeAttribute("restart");
};


SequenceMixIn::SequenceMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SequenceMixIn::getSeqValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->m_Base.getAttributeValue("seq");
};

MeiAttribute* SequenceMixIn::getSeq() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->m_Base.getAttribute("seq");
};

void SequenceMixIn::setSeq(std::string _seq) {
    if (!b->m_Base.hasAttribute("seq")) {
        MeiAttribute *a = new MeiAttribute("seq", _seq);
        b->m_Base.addAttribute(a);
    }
};

bool SequenceMixIn::hasSeq() {
    return b->m_Base.hasAttribute("seq");
};

void SequenceMixIn::removeSeq() {
    b->m_Base.removeAttribute("seq");
};


SlashcountMixIn::SlashcountMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SlashcountMixIn::getSlashValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slash")) {
        throw AttributeNotFoundException("slash");
    }
    return b->m_Base.getAttributeValue("slash");
};

MeiAttribute* SlashcountMixIn::getSlash() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slash")) {
        throw AttributeNotFoundException("slash");
    }
    return b->m_Base.getAttribute("slash");
};

void SlashcountMixIn::setSlash(std::string _slash) {
    if (!b->m_Base.hasAttribute("slash")) {
        MeiAttribute *a = new MeiAttribute("slash", _slash);
        b->m_Base.addAttribute(a);
    }
};

bool SlashcountMixIn::hasSlash() {
    return b->m_Base.hasAttribute("slash");
};

void SlashcountMixIn::removeSlash() {
    b->m_Base.removeAttribute("slash");
};


SlurpresentMixIn::SlurpresentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SlurpresentMixIn::getSlurValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slur")) {
        throw AttributeNotFoundException("slur");
    }
    return b->m_Base.getAttributeValue("slur");
};

MeiAttribute* SlurpresentMixIn::getSlur() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slur")) {
        throw AttributeNotFoundException("slur");
    }
    return b->m_Base.getAttribute("slur");
};

void SlurpresentMixIn::setSlur(std::string _slur) {
    if (!b->m_Base.hasAttribute("slur")) {
        MeiAttribute *a = new MeiAttribute("slur", _slur);
        b->m_Base.addAttribute(a);
    }
};

bool SlurpresentMixIn::hasSlur() {
    return b->m_Base.hasAttribute("slur");
};

void SlurpresentMixIn::removeSlur() {
    b->m_Base.removeAttribute("slur");
};


SpaceVisMixIn::SpaceVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SpaceVisMixIn::getCompressableValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("compressable")) {
        throw AttributeNotFoundException("compressable");
    }
    return b->m_Base.getAttributeValue("compressable");
};

MeiAttribute* SpaceVisMixIn::getCompressable() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("compressable")) {
        throw AttributeNotFoundException("compressable");
    }
    return b->m_Base.getAttribute("compressable");
};

void SpaceVisMixIn::setCompressable(std::string _compressable) {
    if (!b->m_Base.hasAttribute("compressable")) {
        MeiAttribute *a = new MeiAttribute("compressable", _compressable);
        b->m_Base.addAttribute(a);
    }
};

bool SpaceVisMixIn::hasCompressable() {
    return b->m_Base.hasAttribute("compressable");
};

void SpaceVisMixIn::removeCompressable() {
    b->m_Base.removeAttribute("compressable");
};


StaffdefVisMixIn::StaffdefVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StaffdefVisMixIn::getGridShowValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return b->m_Base.getAttributeValue("grid.show");
};

MeiAttribute* StaffdefVisMixIn::getGridShow() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grid.show")) {
        throw AttributeNotFoundException("grid.show");
    }
    return b->m_Base.getAttribute("grid.show");
};

void StaffdefVisMixIn::setGridShow(std::string _gridshow) {
    if (!b->m_Base.hasAttribute("grid.show")) {
        MeiAttribute *a = new MeiAttribute("grid.show", _gridshow);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefVisMixIn::hasGridShow() {
    return b->m_Base.hasAttribute("grid.show");
};

void StaffdefVisMixIn::removeGridShow() {
    b->m_Base.removeAttribute("grid.show");
};

string StaffdefVisMixIn::getLayerschemeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layerscheme")) {
        throw AttributeNotFoundException("layerscheme");
    }
    return b->m_Base.getAttributeValue("layerscheme");
};

MeiAttribute* StaffdefVisMixIn::getLayerscheme() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layerscheme")) {
        throw AttributeNotFoundException("layerscheme");
    }
    return b->m_Base.getAttribute("layerscheme");
};

void StaffdefVisMixIn::setLayerscheme(std::string _layerscheme) {
    if (!b->m_Base.hasAttribute("layerscheme")) {
        MeiAttribute *a = new MeiAttribute("layerscheme", _layerscheme);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefVisMixIn::hasLayerscheme() {
    return b->m_Base.hasAttribute("layerscheme");
};

void StaffdefVisMixIn::removeLayerscheme() {
    b->m_Base.removeAttribute("layerscheme");
};

string StaffdefVisMixIn::getLinesValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lines")) {
        throw AttributeNotFoundException("lines");
    }
    return b->m_Base.getAttributeValue("lines");
};

MeiAttribute* StaffdefVisMixIn::getLines() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lines")) {
        throw AttributeNotFoundException("lines");
    }
    return b->m_Base.getAttribute("lines");
};

void StaffdefVisMixIn::setLines(std::string _lines) {
    if (!b->m_Base.hasAttribute("lines")) {
        MeiAttribute *a = new MeiAttribute("lines", _lines);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefVisMixIn::hasLines() {
    return b->m_Base.hasAttribute("lines");
};

void StaffdefVisMixIn::removeLines() {
    b->m_Base.removeAttribute("lines");
};

string StaffdefVisMixIn::getLinesColorValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lines.color")) {
        throw AttributeNotFoundException("lines.color");
    }
    return b->m_Base.getAttributeValue("lines.color");
};

MeiAttribute* StaffdefVisMixIn::getLinesColor() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lines.color")) {
        throw AttributeNotFoundException("lines.color");
    }
    return b->m_Base.getAttribute("lines.color");
};

void StaffdefVisMixIn::setLinesColor(std::string _linescolor) {
    if (!b->m_Base.hasAttribute("lines.color")) {
        MeiAttribute *a = new MeiAttribute("lines.color", _linescolor);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefVisMixIn::hasLinesColor() {
    return b->m_Base.hasAttribute("lines.color");
};

void StaffdefVisMixIn::removeLinesColor() {
    b->m_Base.removeAttribute("lines.color");
};

string StaffdefVisMixIn::getLinesVisibleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lines.visible")) {
        throw AttributeNotFoundException("lines.visible");
    }
    return b->m_Base.getAttributeValue("lines.visible");
};

MeiAttribute* StaffdefVisMixIn::getLinesVisible() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lines.visible")) {
        throw AttributeNotFoundException("lines.visible");
    }
    return b->m_Base.getAttribute("lines.visible");
};

void StaffdefVisMixIn::setLinesVisible(std::string _linesvisible) {
    if (!b->m_Base.hasAttribute("lines.visible")) {
        MeiAttribute *a = new MeiAttribute("lines.visible", _linesvisible);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefVisMixIn::hasLinesVisible() {
    return b->m_Base.hasAttribute("lines.visible");
};

void StaffdefVisMixIn::removeLinesVisible() {
    b->m_Base.removeAttribute("lines.visible");
};

string StaffdefVisMixIn::getSpacingValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing")) {
        throw AttributeNotFoundException("spacing");
    }
    return b->m_Base.getAttributeValue("spacing");
};

MeiAttribute* StaffdefVisMixIn::getSpacing() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("spacing")) {
        throw AttributeNotFoundException("spacing");
    }
    return b->m_Base.getAttribute("spacing");
};

void StaffdefVisMixIn::setSpacing(std::string _spacing) {
    if (!b->m_Base.hasAttribute("spacing")) {
        MeiAttribute *a = new MeiAttribute("spacing", _spacing);
        b->m_Base.addAttribute(a);
    }
};

bool StaffdefVisMixIn::hasSpacing() {
    return b->m_Base.hasAttribute("spacing");
};

void StaffdefVisMixIn::removeSpacing() {
    b->m_Base.removeAttribute("spacing");
};


StaffgrpVisMixIn::StaffgrpVisMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StaffgrpVisMixIn::getBarthruValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("barthru")) {
        throw AttributeNotFoundException("barthru");
    }
    return b->m_Base.getAttributeValue("barthru");
};

MeiAttribute* StaffgrpVisMixIn::getBarthru() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("barthru")) {
        throw AttributeNotFoundException("barthru");
    }
    return b->m_Base.getAttribute("barthru");
};

void StaffgrpVisMixIn::setBarthru(std::string _barthru) {
    if (!b->m_Base.hasAttribute("barthru")) {
        MeiAttribute *a = new MeiAttribute("barthru", _barthru);
        b->m_Base.addAttribute(a);
    }
};

bool StaffgrpVisMixIn::hasBarthru() {
    return b->m_Base.hasAttribute("barthru");
};

void StaffgrpVisMixIn::removeBarthru() {
    b->m_Base.removeAttribute("barthru");
};


StaffgroupingsymMixIn::StaffgroupingsymMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StaffgroupingsymMixIn::getSymbolValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("symbol")) {
        throw AttributeNotFoundException("symbol");
    }
    return b->m_Base.getAttributeValue("symbol");
};

MeiAttribute* StaffgroupingsymMixIn::getSymbol() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("symbol")) {
        throw AttributeNotFoundException("symbol");
    }
    return b->m_Base.getAttribute("symbol");
};

void StaffgroupingsymMixIn::setSymbol(std::string _symbol) {
    if (!b->m_Base.hasAttribute("symbol")) {
        MeiAttribute *a = new MeiAttribute("symbol", _symbol);
        b->m_Base.addAttribute(a);
    }
};

bool StaffgroupingsymMixIn::hasSymbol() {
    return b->m_Base.hasAttribute("symbol");
};

void StaffgroupingsymMixIn::removeSymbol() {
    b->m_Base.removeAttribute("symbol");
};


StaffidentMixIn::StaffidentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StaffidentMixIn::getStaffValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttributeValue("staff");
};

MeiAttribute* StaffidentMixIn::getStaff() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttribute("staff");
};

void StaffidentMixIn::setStaff(std::string _staff) {
    if (!b->m_Base.hasAttribute("staff")) {
        MeiAttribute *a = new MeiAttribute("staff", _staff);
        b->m_Base.addAttribute(a);
    }
};

bool StaffidentMixIn::hasStaff() {
    return b->m_Base.hasAttribute("staff");
};

void StaffidentMixIn::removeStaff() {
    b->m_Base.removeAttribute("staff");
};


StafflocMixIn::StafflocMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StafflocMixIn::getLocValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("loc")) {
        throw AttributeNotFoundException("loc");
    }
    return b->m_Base.getAttributeValue("loc");
};

MeiAttribute* StafflocMixIn::getLoc() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("loc")) {
        throw AttributeNotFoundException("loc");
    }
    return b->m_Base.getAttribute("loc");
};

void StafflocMixIn::setLoc(std::string _loc) {
    if (!b->m_Base.hasAttribute("loc")) {
        MeiAttribute *a = new MeiAttribute("loc", _loc);
        b->m_Base.addAttribute(a);
    }
};

bool StafflocMixIn::hasLoc() {
    return b->m_Base.hasAttribute("loc");
};

void StafflocMixIn::removeLoc() {
    b->m_Base.removeAttribute("loc");
};


StartendidMixIn::StartendidMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StartendidMixIn::getEndidValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endid")) {
        throw AttributeNotFoundException("endid");
    }
    return b->m_Base.getAttributeValue("endid");
};

MeiAttribute* StartendidMixIn::getEndid() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endid")) {
        throw AttributeNotFoundException("endid");
    }
    return b->m_Base.getAttribute("endid");
};

void StartendidMixIn::setEndid(std::string _endid) {
    if (!b->m_Base.hasAttribute("endid")) {
        MeiAttribute *a = new MeiAttribute("endid", _endid);
        b->m_Base.addAttribute(a);
    }
};

bool StartendidMixIn::hasEndid() {
    return b->m_Base.hasAttribute("endid");
};

void StartendidMixIn::removeEndid() {
    b->m_Base.removeAttribute("endid");
};


StartidMixIn::StartidMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StartidMixIn::getStartidValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startid")) {
        throw AttributeNotFoundException("startid");
    }
    return b->m_Base.getAttributeValue("startid");
};

MeiAttribute* StartidMixIn::getStartid() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startid")) {
        throw AttributeNotFoundException("startid");
    }
    return b->m_Base.getAttribute("startid");
};

void StartidMixIn::setStartid(std::string _startid) {
    if (!b->m_Base.hasAttribute("startid")) {
        MeiAttribute *a = new MeiAttribute("startid", _startid);
        b->m_Base.addAttribute(a);
    }
};

bool StartidMixIn::hasStartid() {
    return b->m_Base.hasAttribute("startid");
};

void StartidMixIn::removeStartid() {
    b->m_Base.removeAttribute("startid");
};


StemmedMixIn::StemmedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string StemmedMixIn::getStemDirValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.dir")) {
        throw AttributeNotFoundException("stem.dir");
    }
    return b->m_Base.getAttributeValue("stem.dir");
};

MeiAttribute* StemmedMixIn::getStemDir() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.dir")) {
        throw AttributeNotFoundException("stem.dir");
    }
    return b->m_Base.getAttribute("stem.dir");
};

void StemmedMixIn::setStemDir(std::string _stemdir) {
    if (!b->m_Base.hasAttribute("stem.dir")) {
        MeiAttribute *a = new MeiAttribute("stem.dir", _stemdir);
        b->m_Base.addAttribute(a);
    }
};

bool StemmedMixIn::hasStemDir() {
    return b->m_Base.hasAttribute("stem.dir");
};

void StemmedMixIn::removeStemDir() {
    b->m_Base.removeAttribute("stem.dir");
};

string StemmedMixIn::getStemLenValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.len")) {
        throw AttributeNotFoundException("stem.len");
    }
    return b->m_Base.getAttributeValue("stem.len");
};

MeiAttribute* StemmedMixIn::getStemLen() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.len")) {
        throw AttributeNotFoundException("stem.len");
    }
    return b->m_Base.getAttribute("stem.len");
};

void StemmedMixIn::setStemLen(std::string _stemlen) {
    if (!b->m_Base.hasAttribute("stem.len")) {
        MeiAttribute *a = new MeiAttribute("stem.len", _stemlen);
        b->m_Base.addAttribute(a);
    }
};

bool StemmedMixIn::hasStemLen() {
    return b->m_Base.hasAttribute("stem.len");
};

void StemmedMixIn::removeStemLen() {
    b->m_Base.removeAttribute("stem.len");
};

string StemmedMixIn::getStemPosValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.pos")) {
        throw AttributeNotFoundException("stem.pos");
    }
    return b->m_Base.getAttributeValue("stem.pos");
};

MeiAttribute* StemmedMixIn::getStemPos() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.pos")) {
        throw AttributeNotFoundException("stem.pos");
    }
    return b->m_Base.getAttribute("stem.pos");
};

void StemmedMixIn::setStemPos(std::string _stempos) {
    if (!b->m_Base.hasAttribute("stem.pos")) {
        MeiAttribute *a = new MeiAttribute("stem.pos", _stempos);
        b->m_Base.addAttribute(a);
    }
};

bool StemmedMixIn::hasStemPos() {
    return b->m_Base.hasAttribute("stem.pos");
};

void StemmedMixIn::removeStemPos() {
    b->m_Base.removeAttribute("stem.pos");
};

string StemmedMixIn::getStemXValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.x")) {
        throw AttributeNotFoundException("stem.x");
    }
    return b->m_Base.getAttributeValue("stem.x");
};

MeiAttribute* StemmedMixIn::getStemX() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.x")) {
        throw AttributeNotFoundException("stem.x");
    }
    return b->m_Base.getAttribute("stem.x");
};

void StemmedMixIn::setStemX(std::string _stemx) {
    if (!b->m_Base.hasAttribute("stem.x")) {
        MeiAttribute *a = new MeiAttribute("stem.x", _stemx);
        b->m_Base.addAttribute(a);
    }
};

bool StemmedMixIn::hasStemX() {
    return b->m_Base.hasAttribute("stem.x");
};

void StemmedMixIn::removeStemX() {
    b->m_Base.removeAttribute("stem.x");
};

string StemmedMixIn::getStemYValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.y")) {
        throw AttributeNotFoundException("stem.y");
    }
    return b->m_Base.getAttributeValue("stem.y");
};

MeiAttribute* StemmedMixIn::getStemY() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.y")) {
        throw AttributeNotFoundException("stem.y");
    }
    return b->m_Base.getAttribute("stem.y");
};

void StemmedMixIn::setStemY(std::string _stemy) {
    if (!b->m_Base.hasAttribute("stem.y")) {
        MeiAttribute *a = new MeiAttribute("stem.y", _stemy);
        b->m_Base.addAttribute(a);
    }
};

bool StemmedMixIn::hasStemY() {
    return b->m_Base.hasAttribute("stem.y");
};

void StemmedMixIn::removeStemY() {
    b->m_Base.removeAttribute("stem.y");
};


SylLogMixIn::SylLogMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SylLogMixIn::getConValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("con")) {
        throw AttributeNotFoundException("con");
    }
    return b->m_Base.getAttributeValue("con");
};

MeiAttribute* SylLogMixIn::getCon() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("con")) {
        throw AttributeNotFoundException("con");
    }
    return b->m_Base.getAttribute("con");
};

void SylLogMixIn::setCon(std::string _con) {
    if (!b->m_Base.hasAttribute("con")) {
        MeiAttribute *a = new MeiAttribute("con", _con);
        b->m_Base.addAttribute(a);
    }
};

bool SylLogMixIn::hasCon() {
    return b->m_Base.hasAttribute("con");
};

void SylLogMixIn::removeCon() {
    b->m_Base.removeAttribute("con");
};

string SylLogMixIn::getWordposValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("wordpos")) {
        throw AttributeNotFoundException("wordpos");
    }
    return b->m_Base.getAttributeValue("wordpos");
};

MeiAttribute* SylLogMixIn::getWordpos() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("wordpos")) {
        throw AttributeNotFoundException("wordpos");
    }
    return b->m_Base.getAttribute("wordpos");
};

void SylLogMixIn::setWordpos(std::string _wordpos) {
    if (!b->m_Base.hasAttribute("wordpos")) {
        MeiAttribute *a = new MeiAttribute("wordpos", _wordpos);
        b->m_Base.addAttribute(a);
    }
};

bool SylLogMixIn::hasWordpos() {
    return b->m_Base.hasAttribute("wordpos");
};

void SylLogMixIn::removeWordpos() {
    b->m_Base.removeAttribute("wordpos");
};


SyltextMixIn::SyltextMixIn(BaseMeiElement *b) {
    this->b = b;
};

string SyltextMixIn::getSylValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("syl")) {
        throw AttributeNotFoundException("syl");
    }
    return b->m_Base.getAttributeValue("syl");
};

MeiAttribute* SyltextMixIn::getSyl() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("syl")) {
        throw AttributeNotFoundException("syl");
    }
    return b->m_Base.getAttribute("syl");
};

void SyltextMixIn::setSyl(std::string _syl) {
    if (!b->m_Base.hasAttribute("syl")) {
        MeiAttribute *a = new MeiAttribute("syl", _syl);
        b->m_Base.addAttribute(a);
    }
};

bool SyltextMixIn::hasSyl() {
    return b->m_Base.hasAttribute("syl");
};

void SyltextMixIn::removeSyl() {
    b->m_Base.removeAttribute("syl");
};


TextstyleMixIn::TextstyleMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TextstyleMixIn::getTextFamValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.fam")) {
        throw AttributeNotFoundException("text.fam");
    }
    return b->m_Base.getAttributeValue("text.fam");
};

MeiAttribute* TextstyleMixIn::getTextFam() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.fam")) {
        throw AttributeNotFoundException("text.fam");
    }
    return b->m_Base.getAttribute("text.fam");
};

void TextstyleMixIn::setTextFam(std::string _textfam) {
    if (!b->m_Base.hasAttribute("text.fam")) {
        MeiAttribute *a = new MeiAttribute("text.fam", _textfam);
        b->m_Base.addAttribute(a);
    }
};

bool TextstyleMixIn::hasTextFam() {
    return b->m_Base.hasAttribute("text.fam");
};

void TextstyleMixIn::removeTextFam() {
    b->m_Base.removeAttribute("text.fam");
};

string TextstyleMixIn::getTextNameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.name")) {
        throw AttributeNotFoundException("text.name");
    }
    return b->m_Base.getAttributeValue("text.name");
};

MeiAttribute* TextstyleMixIn::getTextName() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.name")) {
        throw AttributeNotFoundException("text.name");
    }
    return b->m_Base.getAttribute("text.name");
};

void TextstyleMixIn::setTextName(std::string _textname) {
    if (!b->m_Base.hasAttribute("text.name")) {
        MeiAttribute *a = new MeiAttribute("text.name", _textname);
        b->m_Base.addAttribute(a);
    }
};

bool TextstyleMixIn::hasTextName() {
    return b->m_Base.hasAttribute("text.name");
};

void TextstyleMixIn::removeTextName() {
    b->m_Base.removeAttribute("text.name");
};

string TextstyleMixIn::getTextSizeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.size")) {
        throw AttributeNotFoundException("text.size");
    }
    return b->m_Base.getAttributeValue("text.size");
};

MeiAttribute* TextstyleMixIn::getTextSize() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.size")) {
        throw AttributeNotFoundException("text.size");
    }
    return b->m_Base.getAttribute("text.size");
};

void TextstyleMixIn::setTextSize(std::string _textsize) {
    if (!b->m_Base.hasAttribute("text.size")) {
        MeiAttribute *a = new MeiAttribute("text.size", _textsize);
        b->m_Base.addAttribute(a);
    }
};

bool TextstyleMixIn::hasTextSize() {
    return b->m_Base.hasAttribute("text.size");
};

void TextstyleMixIn::removeTextSize() {
    b->m_Base.removeAttribute("text.size");
};

string TextstyleMixIn::getTextStyleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.style")) {
        throw AttributeNotFoundException("text.style");
    }
    return b->m_Base.getAttributeValue("text.style");
};

MeiAttribute* TextstyleMixIn::getTextStyle() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.style")) {
        throw AttributeNotFoundException("text.style");
    }
    return b->m_Base.getAttribute("text.style");
};

void TextstyleMixIn::setTextStyle(std::string _textstyle) {
    if (!b->m_Base.hasAttribute("text.style")) {
        MeiAttribute *a = new MeiAttribute("text.style", _textstyle);
        b->m_Base.addAttribute(a);
    }
};

bool TextstyleMixIn::hasTextStyle() {
    return b->m_Base.hasAttribute("text.style");
};

void TextstyleMixIn::removeTextStyle() {
    b->m_Base.removeAttribute("text.style");
};

string TextstyleMixIn::getTextWeightValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.weight")) {
        throw AttributeNotFoundException("text.weight");
    }
    return b->m_Base.getAttributeValue("text.weight");
};

MeiAttribute* TextstyleMixIn::getTextWeight() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.weight")) {
        throw AttributeNotFoundException("text.weight");
    }
    return b->m_Base.getAttribute("text.weight");
};

void TextstyleMixIn::setTextWeight(std::string _textweight) {
    if (!b->m_Base.hasAttribute("text.weight")) {
        MeiAttribute *a = new MeiAttribute("text.weight", _textweight);
        b->m_Base.addAttribute(a);
    }
};

bool TextstyleMixIn::hasTextWeight() {
    return b->m_Base.hasAttribute("text.weight");
};

void TextstyleMixIn::removeTextWeight() {
    b->m_Base.removeAttribute("text.weight");
};


TiepresentMixIn::TiepresentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TiepresentMixIn::getTieValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tie")) {
        throw AttributeNotFoundException("tie");
    }
    return b->m_Base.getAttributeValue("tie");
};

MeiAttribute* TiepresentMixIn::getTie() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tie")) {
        throw AttributeNotFoundException("tie");
    }
    return b->m_Base.getAttribute("tie");
};

void TiepresentMixIn::setTie(std::string _tie) {
    if (!b->m_Base.hasAttribute("tie")) {
        MeiAttribute *a = new MeiAttribute("tie", _tie);
        b->m_Base.addAttribute(a);
    }
};

bool TiepresentMixIn::hasTie() {
    return b->m_Base.hasAttribute("tie");
};

void TiepresentMixIn::removeTie() {
    b->m_Base.removeAttribute("tie");
};


TimestampMusicalMixIn::TimestampMusicalMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TimestampMusicalMixIn::getTstampValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttributeValue("tstamp");
};

MeiAttribute* TimestampMusicalMixIn::getTstamp() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttribute("tstamp");
};

void TimestampMusicalMixIn::setTstamp(std::string _tstamp) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        MeiAttribute *a = new MeiAttribute("tstamp", _tstamp);
        b->m_Base.addAttribute(a);
    }
};

bool TimestampMusicalMixIn::hasTstamp() {
    return b->m_Base.hasAttribute("tstamp");
};

void TimestampMusicalMixIn::removeTstamp() {
    b->m_Base.removeAttribute("tstamp");
};


TimestampPerformedMixIn::TimestampPerformedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TimestampPerformedMixIn::getTstampGesValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->m_Base.getAttributeValue("tstamp.ges");
};

MeiAttribute* TimestampPerformedMixIn::getTstampGes() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->m_Base.getAttribute("tstamp.ges");
};

void TimestampPerformedMixIn::setTstampGes(std::string _tstampges) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        MeiAttribute *a = new MeiAttribute("tstamp.ges", _tstampges);
        b->m_Base.addAttribute(a);
    }
};

bool TimestampPerformedMixIn::hasTstampGes() {
    return b->m_Base.hasAttribute("tstamp.ges");
};

void TimestampPerformedMixIn::removeTstampGes() {
    b->m_Base.removeAttribute("tstamp.ges");
};

string TimestampPerformedMixIn::getTstampRealValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->m_Base.getAttributeValue("tstamp.real");
};

MeiAttribute* TimestampPerformedMixIn::getTstampReal() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->m_Base.getAttribute("tstamp.real");
};

void TimestampPerformedMixIn::setTstampReal(std::string _tstampreal) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        MeiAttribute *a = new MeiAttribute("tstamp.real", _tstampreal);
        b->m_Base.addAttribute(a);
    }
};

bool TimestampPerformedMixIn::hasTstampReal() {
    return b->m_Base.hasAttribute("tstamp.real");
};

void TimestampPerformedMixIn::removeTstampReal() {
    b->m_Base.removeAttribute("tstamp.real");
};


TranspositionMixIn::TranspositionMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TranspositionMixIn::getTransDiatValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("trans.diat")) {
        throw AttributeNotFoundException("trans.diat");
    }
    return b->m_Base.getAttributeValue("trans.diat");
};

MeiAttribute* TranspositionMixIn::getTransDiat() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("trans.diat")) {
        throw AttributeNotFoundException("trans.diat");
    }
    return b->m_Base.getAttribute("trans.diat");
};

void TranspositionMixIn::setTransDiat(std::string _transdiat) {
    if (!b->m_Base.hasAttribute("trans.diat")) {
        MeiAttribute *a = new MeiAttribute("trans.diat", _transdiat);
        b->m_Base.addAttribute(a);
    }
};

bool TranspositionMixIn::hasTransDiat() {
    return b->m_Base.hasAttribute("trans.diat");
};

void TranspositionMixIn::removeTransDiat() {
    b->m_Base.removeAttribute("trans.diat");
};

string TranspositionMixIn::getTransSemiValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("trans.semi")) {
        throw AttributeNotFoundException("trans.semi");
    }
    return b->m_Base.getAttributeValue("trans.semi");
};

MeiAttribute* TranspositionMixIn::getTransSemi() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("trans.semi")) {
        throw AttributeNotFoundException("trans.semi");
    }
    return b->m_Base.getAttribute("trans.semi");
};

void TranspositionMixIn::setTransSemi(std::string _transsemi) {
    if (!b->m_Base.hasAttribute("trans.semi")) {
        MeiAttribute *a = new MeiAttribute("trans.semi", _transsemi);
        b->m_Base.addAttribute(a);
    }
};

bool TranspositionMixIn::hasTransSemi() {
    return b->m_Base.hasAttribute("trans.semi");
};

void TranspositionMixIn::removeTransSemi() {
    b->m_Base.removeAttribute("trans.semi");
};


TupletpresentMixIn::TupletpresentMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TupletpresentMixIn::getTupletValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tuplet")) {
        throw AttributeNotFoundException("tuplet");
    }
    return b->m_Base.getAttributeValue("tuplet");
};

MeiAttribute* TupletpresentMixIn::getTuplet() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tuplet")) {
        throw AttributeNotFoundException("tuplet");
    }
    return b->m_Base.getAttribute("tuplet");
};

void TupletpresentMixIn::setTuplet(std::string _tuplet) {
    if (!b->m_Base.hasAttribute("tuplet")) {
        MeiAttribute *a = new MeiAttribute("tuplet", _tuplet);
        b->m_Base.addAttribute(a);
    }
};

bool TupletpresentMixIn::hasTuplet() {
    return b->m_Base.hasAttribute("tuplet");
};

void TupletpresentMixIn::removeTuplet() {
    b->m_Base.removeAttribute("tuplet");
};


TypedMixIn::TypedMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TypedMixIn::getTypeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->m_Base.getAttributeValue("type");
};

MeiAttribute* TypedMixIn::getType() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->m_Base.getAttribute("type");
};

void TypedMixIn::setType(std::string _type) {
    if (!b->m_Base.hasAttribute("type")) {
        MeiAttribute *a = new MeiAttribute("type", _type);
        b->m_Base.addAttribute(a);
    }
};

bool TypedMixIn::hasType() {
    return b->m_Base.hasAttribute("type");
};

void TypedMixIn::removeType() {
    b->m_Base.removeAttribute("type");
};

string TypedMixIn::getSubtypeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("subtype")) {
        throw AttributeNotFoundException("subtype");
    }
    return b->m_Base.getAttributeValue("subtype");
};

MeiAttribute* TypedMixIn::getSubtype() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("subtype")) {
        throw AttributeNotFoundException("subtype");
    }
    return b->m_Base.getAttribute("subtype");
};

void TypedMixIn::setSubtype(std::string _subtype) {
    if (!b->m_Base.hasAttribute("subtype")) {
        MeiAttribute *a = new MeiAttribute("subtype", _subtype);
        b->m_Base.addAttribute(a);
    }
};

bool TypedMixIn::hasSubtype() {
    return b->m_Base.hasAttribute("subtype");
};

void TypedMixIn::removeSubtype() {
    b->m_Base.removeAttribute("subtype");
};


TypographyMixIn::TypographyMixIn(BaseMeiElement *b) {
    this->b = b;
};

string TypographyMixIn::getFontfamValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontfam")) {
        throw AttributeNotFoundException("fontfam");
    }
    return b->m_Base.getAttributeValue("fontfam");
};

MeiAttribute* TypographyMixIn::getFontfam() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontfam")) {
        throw AttributeNotFoundException("fontfam");
    }
    return b->m_Base.getAttribute("fontfam");
};

void TypographyMixIn::setFontfam(std::string _fontfam) {
    if (!b->m_Base.hasAttribute("fontfam")) {
        MeiAttribute *a = new MeiAttribute("fontfam", _fontfam);
        b->m_Base.addAttribute(a);
    }
};

bool TypographyMixIn::hasFontfam() {
    return b->m_Base.hasAttribute("fontfam");
};

void TypographyMixIn::removeFontfam() {
    b->m_Base.removeAttribute("fontfam");
};

string TypographyMixIn::getFontnameValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontname")) {
        throw AttributeNotFoundException("fontname");
    }
    return b->m_Base.getAttributeValue("fontname");
};

MeiAttribute* TypographyMixIn::getFontname() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontname")) {
        throw AttributeNotFoundException("fontname");
    }
    return b->m_Base.getAttribute("fontname");
};

void TypographyMixIn::setFontname(std::string _fontname) {
    if (!b->m_Base.hasAttribute("fontname")) {
        MeiAttribute *a = new MeiAttribute("fontname", _fontname);
        b->m_Base.addAttribute(a);
    }
};

bool TypographyMixIn::hasFontname() {
    return b->m_Base.hasAttribute("fontname");
};

void TypographyMixIn::removeFontname() {
    b->m_Base.removeAttribute("fontname");
};

string TypographyMixIn::getFontsizeValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontsize")) {
        throw AttributeNotFoundException("fontsize");
    }
    return b->m_Base.getAttributeValue("fontsize");
};

MeiAttribute* TypographyMixIn::getFontsize() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontsize")) {
        throw AttributeNotFoundException("fontsize");
    }
    return b->m_Base.getAttribute("fontsize");
};

void TypographyMixIn::setFontsize(std::string _fontsize) {
    if (!b->m_Base.hasAttribute("fontsize")) {
        MeiAttribute *a = new MeiAttribute("fontsize", _fontsize);
        b->m_Base.addAttribute(a);
    }
};

bool TypographyMixIn::hasFontsize() {
    return b->m_Base.hasAttribute("fontsize");
};

void TypographyMixIn::removeFontsize() {
    b->m_Base.removeAttribute("fontsize");
};

string TypographyMixIn::getFontstyleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontstyle")) {
        throw AttributeNotFoundException("fontstyle");
    }
    return b->m_Base.getAttributeValue("fontstyle");
};

MeiAttribute* TypographyMixIn::getFontstyle() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontstyle")) {
        throw AttributeNotFoundException("fontstyle");
    }
    return b->m_Base.getAttribute("fontstyle");
};

void TypographyMixIn::setFontstyle(std::string _fontstyle) {
    if (!b->m_Base.hasAttribute("fontstyle")) {
        MeiAttribute *a = new MeiAttribute("fontstyle", _fontstyle);
        b->m_Base.addAttribute(a);
    }
};

bool TypographyMixIn::hasFontstyle() {
    return b->m_Base.hasAttribute("fontstyle");
};

void TypographyMixIn::removeFontstyle() {
    b->m_Base.removeAttribute("fontstyle");
};

string TypographyMixIn::getFontweightValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontweight")) {
        throw AttributeNotFoundException("fontweight");
    }
    return b->m_Base.getAttributeValue("fontweight");
};

MeiAttribute* TypographyMixIn::getFontweight() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontweight")) {
        throw AttributeNotFoundException("fontweight");
    }
    return b->m_Base.getAttribute("fontweight");
};

void TypographyMixIn::setFontweight(std::string _fontweight) {
    if (!b->m_Base.hasAttribute("fontweight")) {
        MeiAttribute *a = new MeiAttribute("fontweight", _fontweight);
        b->m_Base.addAttribute(a);
    }
};

bool TypographyMixIn::hasFontweight() {
    return b->m_Base.hasAttribute("fontweight");
};

void TypographyMixIn::removeFontweight() {
    b->m_Base.removeAttribute("fontweight");
};


VisibilityMixIn::VisibilityMixIn(BaseMeiElement *b) {
    this->b = b;
};

string VisibilityMixIn::getVisibleValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("visible")) {
        throw AttributeNotFoundException("visible");
    }
    return b->m_Base.getAttributeValue("visible");
};

MeiAttribute* VisibilityMixIn::getVisible() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("visible")) {
        throw AttributeNotFoundException("visible");
    }
    return b->m_Base.getAttribute("visible");
};

void VisibilityMixIn::setVisible(std::string _visible) {
    if (!b->m_Base.hasAttribute("visible")) {
        MeiAttribute *a = new MeiAttribute("visible", _visible);
        b->m_Base.addAttribute(a);
    }
};

bool VisibilityMixIn::hasVisible() {
    return b->m_Base.hasAttribute("visible");
};

void VisibilityMixIn::removeVisible() {
    b->m_Base.removeAttribute("visible");
};


VisualoffsetHoMixIn::VisualoffsetHoMixIn(BaseMeiElement *b) {
    this->b = b;
};

string VisualoffsetHoMixIn::getHoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ho")) {
        throw AttributeNotFoundException("ho");
    }
    return b->m_Base.getAttributeValue("ho");
};

MeiAttribute* VisualoffsetHoMixIn::getHo() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ho")) {
        throw AttributeNotFoundException("ho");
    }
    return b->m_Base.getAttribute("ho");
};

void VisualoffsetHoMixIn::setHo(std::string _ho) {
    if (!b->m_Base.hasAttribute("ho")) {
        MeiAttribute *a = new MeiAttribute("ho", _ho);
        b->m_Base.addAttribute(a);
    }
};

bool VisualoffsetHoMixIn::hasHo() {
    return b->m_Base.hasAttribute("ho");
};

void VisualoffsetHoMixIn::removeHo() {
    b->m_Base.removeAttribute("ho");
};


VisualoffsetToMixIn::VisualoffsetToMixIn(BaseMeiElement *b) {
    this->b = b;
};

string VisualoffsetToMixIn::getToValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->m_Base.getAttributeValue("to");
};

MeiAttribute* VisualoffsetToMixIn::getTo() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->m_Base.getAttribute("to");
};

void VisualoffsetToMixIn::setTo(std::string _to) {
    if (!b->m_Base.hasAttribute("to")) {
        MeiAttribute *a = new MeiAttribute("to", _to);
        b->m_Base.addAttribute(a);
    }
};

bool VisualoffsetToMixIn::hasTo() {
    return b->m_Base.hasAttribute("to");
};

void VisualoffsetToMixIn::removeTo() {
    b->m_Base.removeAttribute("to");
};


VisualoffsetVoMixIn::VisualoffsetVoMixIn(BaseMeiElement *b) {
    this->b = b;
};

string VisualoffsetVoMixIn::getVoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("vo")) {
        throw AttributeNotFoundException("vo");
    }
    return b->m_Base.getAttributeValue("vo");
};

MeiAttribute* VisualoffsetVoMixIn::getVo() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("vo")) {
        throw AttributeNotFoundException("vo");
    }
    return b->m_Base.getAttribute("vo");
};

void VisualoffsetVoMixIn::setVo(std::string _vo) {
    if (!b->m_Base.hasAttribute("vo")) {
        MeiAttribute *a = new MeiAttribute("vo", _vo);
        b->m_Base.addAttribute(a);
    }
};

bool VisualoffsetVoMixIn::hasVo() {
    return b->m_Base.hasAttribute("vo");
};

void VisualoffsetVoMixIn::removeVo() {
    b->m_Base.removeAttribute("vo");
};


Visualoffset2HoMixIn::Visualoffset2HoMixIn(BaseMeiElement *b) {
    this->b = b;
};

string Visualoffset2HoMixIn::getStarthoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startho")) {
        throw AttributeNotFoundException("startho");
    }
    return b->m_Base.getAttributeValue("startho");
};

MeiAttribute* Visualoffset2HoMixIn::getStartho() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startho")) {
        throw AttributeNotFoundException("startho");
    }
    return b->m_Base.getAttribute("startho");
};

void Visualoffset2HoMixIn::setStartho(std::string _startho) {
    if (!b->m_Base.hasAttribute("startho")) {
        MeiAttribute *a = new MeiAttribute("startho", _startho);
        b->m_Base.addAttribute(a);
    }
};

bool Visualoffset2HoMixIn::hasStartho() {
    return b->m_Base.hasAttribute("startho");
};

void Visualoffset2HoMixIn::removeStartho() {
    b->m_Base.removeAttribute("startho");
};

string Visualoffset2HoMixIn::getEndhoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endho")) {
        throw AttributeNotFoundException("endho");
    }
    return b->m_Base.getAttributeValue("endho");
};

MeiAttribute* Visualoffset2HoMixIn::getEndho() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endho")) {
        throw AttributeNotFoundException("endho");
    }
    return b->m_Base.getAttribute("endho");
};

void Visualoffset2HoMixIn::setEndho(std::string _endho) {
    if (!b->m_Base.hasAttribute("endho")) {
        MeiAttribute *a = new MeiAttribute("endho", _endho);
        b->m_Base.addAttribute(a);
    }
};

bool Visualoffset2HoMixIn::hasEndho() {
    return b->m_Base.hasAttribute("endho");
};

void Visualoffset2HoMixIn::removeEndho() {
    b->m_Base.removeAttribute("endho");
};


Visualoffset2ToMixIn::Visualoffset2ToMixIn(BaseMeiElement *b) {
    this->b = b;
};

string Visualoffset2ToMixIn::getStarttoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startto")) {
        throw AttributeNotFoundException("startto");
    }
    return b->m_Base.getAttributeValue("startto");
};

MeiAttribute* Visualoffset2ToMixIn::getStartto() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startto")) {
        throw AttributeNotFoundException("startto");
    }
    return b->m_Base.getAttribute("startto");
};

void Visualoffset2ToMixIn::setStartto(std::string _startto) {
    if (!b->m_Base.hasAttribute("startto")) {
        MeiAttribute *a = new MeiAttribute("startto", _startto);
        b->m_Base.addAttribute(a);
    }
};

bool Visualoffset2ToMixIn::hasStartto() {
    return b->m_Base.hasAttribute("startto");
};

void Visualoffset2ToMixIn::removeStartto() {
    b->m_Base.removeAttribute("startto");
};

string Visualoffset2ToMixIn::getEndtoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endto")) {
        throw AttributeNotFoundException("endto");
    }
    return b->m_Base.getAttributeValue("endto");
};

MeiAttribute* Visualoffset2ToMixIn::getEndto() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endto")) {
        throw AttributeNotFoundException("endto");
    }
    return b->m_Base.getAttribute("endto");
};

void Visualoffset2ToMixIn::setEndto(std::string _endto) {
    if (!b->m_Base.hasAttribute("endto")) {
        MeiAttribute *a = new MeiAttribute("endto", _endto);
        b->m_Base.addAttribute(a);
    }
};

bool Visualoffset2ToMixIn::hasEndto() {
    return b->m_Base.hasAttribute("endto");
};

void Visualoffset2ToMixIn::removeEndto() {
    b->m_Base.removeAttribute("endto");
};


Visualoffset2VoMixIn::Visualoffset2VoMixIn(BaseMeiElement *b) {
    this->b = b;
};

string Visualoffset2VoMixIn::getStartvoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startvo")) {
        throw AttributeNotFoundException("startvo");
    }
    return b->m_Base.getAttributeValue("startvo");
};

MeiAttribute* Visualoffset2VoMixIn::getStartvo() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startvo")) {
        throw AttributeNotFoundException("startvo");
    }
    return b->m_Base.getAttribute("startvo");
};

void Visualoffset2VoMixIn::setStartvo(std::string _startvo) {
    if (!b->m_Base.hasAttribute("startvo")) {
        MeiAttribute *a = new MeiAttribute("startvo", _startvo);
        b->m_Base.addAttribute(a);
    }
};

bool Visualoffset2VoMixIn::hasStartvo() {
    return b->m_Base.hasAttribute("startvo");
};

void Visualoffset2VoMixIn::removeStartvo() {
    b->m_Base.removeAttribute("startvo");
};

string Visualoffset2VoMixIn::getEndvoValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endvo")) {
        throw AttributeNotFoundException("endvo");
    }
    return b->m_Base.getAttributeValue("endvo");
};

MeiAttribute* Visualoffset2VoMixIn::getEndvo() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endvo")) {
        throw AttributeNotFoundException("endvo");
    }
    return b->m_Base.getAttribute("endvo");
};

void Visualoffset2VoMixIn::setEndvo(std::string _endvo) {
    if (!b->m_Base.hasAttribute("endvo")) {
        MeiAttribute *a = new MeiAttribute("endvo", _endvo);
        b->m_Base.addAttribute(a);
    }
};

bool Visualoffset2VoMixIn::hasEndvo() {
    return b->m_Base.hasAttribute("endvo");
};

void Visualoffset2VoMixIn::removeEndvo() {
    b->m_Base.removeAttribute("endvo");
};


WidthMixIn::WidthMixIn(BaseMeiElement *b) {
    this->b = b;
};

string WidthMixIn::getWidthValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("width")) {
        throw AttributeNotFoundException("width");
    }
    return b->m_Base.getAttributeValue("width");
};

MeiAttribute* WidthMixIn::getWidth() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("width")) {
        throw AttributeNotFoundException("width");
    }
    return b->m_Base.getAttribute("width");
};

void WidthMixIn::setWidth(std::string _width) {
    if (!b->m_Base.hasAttribute("width")) {
        MeiAttribute *a = new MeiAttribute("width", _width);
        b->m_Base.addAttribute(a);
    }
};

bool WidthMixIn::hasWidth() {
    return b->m_Base.hasAttribute("width");
};

void WidthMixIn::removeWidth() {
    b->m_Base.removeAttribute("width");
};


XyMixIn::XyMixIn(BaseMeiElement *b) {
    this->b = b;
};

string XyMixIn::getXValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("x")) {
        throw AttributeNotFoundException("x");
    }
    return b->m_Base.getAttributeValue("x");
};

MeiAttribute* XyMixIn::getX() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("x")) {
        throw AttributeNotFoundException("x");
    }
    return b->m_Base.getAttribute("x");
};

void XyMixIn::setX(std::string _x) {
    if (!b->m_Base.hasAttribute("x")) {
        MeiAttribute *a = new MeiAttribute("x", _x);
        b->m_Base.addAttribute(a);
    }
};

bool XyMixIn::hasX() {
    return b->m_Base.hasAttribute("x");
};

void XyMixIn::removeX() {
    b->m_Base.removeAttribute("x");
};

string XyMixIn::getYValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("y")) {
        throw AttributeNotFoundException("y");
    }
    return b->m_Base.getAttributeValue("y");
};

MeiAttribute* XyMixIn::getY() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("y")) {
        throw AttributeNotFoundException("y");
    }
    return b->m_Base.getAttribute("y");
};

void XyMixIn::setY(std::string _y) {
    if (!b->m_Base.hasAttribute("y")) {
        MeiAttribute *a = new MeiAttribute("y", _y);
        b->m_Base.addAttribute(a);
    }
};

bool XyMixIn::hasY() {
    return b->m_Base.hasAttribute("y");
};

void XyMixIn::removeY() {
    b->m_Base.removeAttribute("y");
};


Xy2MixIn::Xy2MixIn(BaseMeiElement *b) {
    this->b = b;
};

string Xy2MixIn::getX2Value() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("x2")) {
        throw AttributeNotFoundException("x2");
    }
    return b->m_Base.getAttributeValue("x2");
};

MeiAttribute* Xy2MixIn::getX2() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("x2")) {
        throw AttributeNotFoundException("x2");
    }
    return b->m_Base.getAttribute("x2");
};

void Xy2MixIn::setX2(std::string _x2) {
    if (!b->m_Base.hasAttribute("x2")) {
        MeiAttribute *a = new MeiAttribute("x2", _x2);
        b->m_Base.addAttribute(a);
    }
};

bool Xy2MixIn::hasX2() {
    return b->m_Base.hasAttribute("x2");
};

void Xy2MixIn::removeX2() {
    b->m_Base.removeAttribute("x2");
};

string Xy2MixIn::getY2Value() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("y2")) {
        throw AttributeNotFoundException("y2");
    }
    return b->m_Base.getAttributeValue("y2");
};

MeiAttribute* Xy2MixIn::getY2() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("y2")) {
        throw AttributeNotFoundException("y2");
    }
    return b->m_Base.getAttribute("y2");
};

void Xy2MixIn::setY2(std::string _y2) {
    if (!b->m_Base.hasAttribute("y2")) {
        MeiAttribute *a = new MeiAttribute("y2", _y2);
        b->m_Base.addAttribute(a);
    }
};

bool Xy2MixIn::hasY2() {
    return b->m_Base.hasAttribute("y2");
};

void Xy2MixIn::removeY2() {
    b->m_Base.removeAttribute("y2");
};



