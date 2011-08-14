#include "sharedmixins.h"
using namespace std;

AccidentalPerformedMixIn::AccidentalPerformedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string AccidentalPerformedMixIn::getAccidGesValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accid.ges")) {
        throw AttributeNotFoundException("accid.ges");
    }
    return b->m_Base.getAttributeValue("accid.ges");
};
            
MeiAttribute* AccidentalPerformedMixIn::getAccidGes() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accid.ges")) {
        throw AttributeNotFoundException("accid.ges");
    }
    return b->m_Base.getAttribute("accid.ges");
};
            
void AccidentalPerformedMixIn::setAccidGes(string _accidges) {
    if(!b->m_Base.hasAttribute("accid.ges")) {
        MeiAttribute * a = new MeiAttribute("accid.ges", _accidges);
        b->m_Base.addAttribute(a);
    }
};
            
bool AccidentalPerformedMixIn::hasAccidGes() {
    return b->m_Base.hasAttribute("accid.ges");
};
            
AltsymMixIn::AltsymMixIn(BaseMeiElement *b) {
    this->b = b;
};
string AltsymMixIn::getAltsymValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("altsym")) {
        throw AttributeNotFoundException("altsym");
    }
    return b->m_Base.getAttributeValue("altsym");
};
            
MeiAttribute* AltsymMixIn::getAltsym() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("altsym")) {
        throw AttributeNotFoundException("altsym");
    }
    return b->m_Base.getAttribute("altsym");
};
            
void AltsymMixIn::setAltsym(string _altsym) {
    if(!b->m_Base.hasAttribute("altsym")) {
        MeiAttribute * a = new MeiAttribute("altsym", _altsym);
        b->m_Base.addAttribute(a);
    }
};
            
bool AltsymMixIn::hasAltsym() {
    return b->m_Base.hasAttribute("altsym");
};
            
ArticulationPerformedMixIn::ArticulationPerformedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ArticulationPerformedMixIn::getArticGesValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("artic.ges")) {
        throw AttributeNotFoundException("artic.ges");
    }
    return b->m_Base.getAttributeValue("artic.ges");
};
            
MeiAttribute* ArticulationPerformedMixIn::getArticGes() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("artic.ges")) {
        throw AttributeNotFoundException("artic.ges");
    }
    return b->m_Base.getAttribute("artic.ges");
};
            
void ArticulationPerformedMixIn::setArticGes(string _articges) {
    if(!b->m_Base.hasAttribute("artic.ges")) {
        MeiAttribute * a = new MeiAttribute("artic.ges", _articges);
        b->m_Base.addAttribute(a);
    }
};
            
bool ArticulationPerformedMixIn::hasArticGes() {
    return b->m_Base.hasAttribute("artic.ges");
};
            
AugmentdotsMixIn::AugmentdotsMixIn(BaseMeiElement *b) {
    this->b = b;
};
string AugmentdotsMixIn::getDotsValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dots")) {
        throw AttributeNotFoundException("dots");
    }
    return b->m_Base.getAttributeValue("dots");
};
            
MeiAttribute* AugmentdotsMixIn::getDots() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dots")) {
        throw AttributeNotFoundException("dots");
    }
    return b->m_Base.getAttribute("dots");
};
            
void AugmentdotsMixIn::setDots(string _dots) {
    if(!b->m_Base.hasAttribute("dots")) {
        MeiAttribute * a = new MeiAttribute("dots", _dots);
        b->m_Base.addAttribute(a);
    }
};
            
bool AugmentdotsMixIn::hasDots() {
    return b->m_Base.hasAttribute("dots");
};
            
AuthorizedMixIn::AuthorizedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string AuthorizedMixIn::getAuthorityValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authority")) {
        throw AttributeNotFoundException("authority");
    }
    return b->m_Base.getAttributeValue("authority");
};
            
MeiAttribute* AuthorizedMixIn::getAuthority() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authority")) {
        throw AttributeNotFoundException("authority");
    }
    return b->m_Base.getAttribute("authority");
};
            
void AuthorizedMixIn::setAuthority(string _authority) {
    if(!b->m_Base.hasAttribute("authority")) {
        MeiAttribute * a = new MeiAttribute("authority", _authority);
        b->m_Base.addAttribute(a);
    }
};
            
bool AuthorizedMixIn::hasAuthority() {
    return b->m_Base.hasAttribute("authority");
};
            
string AuthorizedMixIn::getAuthuriValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authURI")) {
        throw AttributeNotFoundException("authURI");
    }
    return b->m_Base.getAttributeValue("authURI");
};
            
MeiAttribute* AuthorizedMixIn::getAuthuri() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authURI")) {
        throw AttributeNotFoundException("authURI");
    }
    return b->m_Base.getAttribute("authURI");
};
            
void AuthorizedMixIn::setAuthuri(string _authURI) {
    if(!b->m_Base.hasAttribute("authURI")) {
        MeiAttribute * a = new MeiAttribute("authURI", _authURI);
        b->m_Base.addAttribute(a);
    }
};
            
bool AuthorizedMixIn::hasAuthuri() {
    return b->m_Base.hasAttribute("authURI");
};
            
BarplacementMixIn::BarplacementMixIn(BaseMeiElement *b) {
    this->b = b;
};
string BarplacementMixIn::getBarplaceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("barplace")) {
        throw AttributeNotFoundException("barplace");
    }
    return b->m_Base.getAttributeValue("barplace");
};
            
MeiAttribute* BarplacementMixIn::getBarplace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("barplace")) {
        throw AttributeNotFoundException("barplace");
    }
    return b->m_Base.getAttribute("barplace");
};
            
void BarplacementMixIn::setBarplace(string _barplace) {
    if(!b->m_Base.hasAttribute("barplace")) {
        MeiAttribute * a = new MeiAttribute("barplace", _barplace);
        b->m_Base.addAttribute(a);
    }
};
            
bool BarplacementMixIn::hasBarplace() {
    return b->m_Base.hasAttribute("barplace");
};
            
string BarplacementMixIn::getTaktplaceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("taktplace")) {
        throw AttributeNotFoundException("taktplace");
    }
    return b->m_Base.getAttributeValue("taktplace");
};
            
MeiAttribute* BarplacementMixIn::getTaktplace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("taktplace")) {
        throw AttributeNotFoundException("taktplace");
    }
    return b->m_Base.getAttribute("taktplace");
};
            
void BarplacementMixIn::setTaktplace(string _taktplace) {
    if(!b->m_Base.hasAttribute("taktplace")) {
        MeiAttribute * a = new MeiAttribute("taktplace", _taktplace);
        b->m_Base.addAttribute(a);
    }
};
            
bool BarplacementMixIn::hasTaktplace() {
    return b->m_Base.hasAttribute("taktplace");
};
            
BeamingVisMixIn::BeamingVisMixIn(BaseMeiElement *b) {
    this->b = b;
};
string BeamingVisMixIn::getBeamRendValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.rend")) {
        throw AttributeNotFoundException("beam.rend");
    }
    return b->m_Base.getAttributeValue("beam.rend");
};
            
MeiAttribute* BeamingVisMixIn::getBeamRend() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.rend")) {
        throw AttributeNotFoundException("beam.rend");
    }
    return b->m_Base.getAttribute("beam.rend");
};
            
void BeamingVisMixIn::setBeamRend(string _beamrend) {
    if(!b->m_Base.hasAttribute("beam.rend")) {
        MeiAttribute * a = new MeiAttribute("beam.rend", _beamrend);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamingVisMixIn::hasBeamRend() {
    return b->m_Base.hasAttribute("beam.rend");
};
            
string BeamingVisMixIn::getBeamSlopeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.slope")) {
        throw AttributeNotFoundException("beam.slope");
    }
    return b->m_Base.getAttributeValue("beam.slope");
};
            
MeiAttribute* BeamingVisMixIn::getBeamSlope() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.slope")) {
        throw AttributeNotFoundException("beam.slope");
    }
    return b->m_Base.getAttribute("beam.slope");
};
            
void BeamingVisMixIn::setBeamSlope(string _beamslope) {
    if(!b->m_Base.hasAttribute("beam.slope")) {
        MeiAttribute * a = new MeiAttribute("beam.slope", _beamslope);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamingVisMixIn::hasBeamSlope() {
    return b->m_Base.hasAttribute("beam.slope");
};
            
BiblMixIn::BiblMixIn(BaseMeiElement *b) {
    this->b = b;
};
string BiblMixIn::getAnalogValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("analog")) {
        throw AttributeNotFoundException("analog");
    }
    return b->m_Base.getAttributeValue("analog");
};
            
MeiAttribute* BiblMixIn::getAnalog() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("analog")) {
        throw AttributeNotFoundException("analog");
    }
    return b->m_Base.getAttribute("analog");
};
            
void BiblMixIn::setAnalog(string _analog) {
    if(!b->m_Base.hasAttribute("analog")) {
        MeiAttribute * a = new MeiAttribute("analog", _analog);
        b->m_Base.addAttribute(a);
    }
};
            
bool BiblMixIn::hasAnalog() {
    return b->m_Base.hasAttribute("analog");
};
            
CalendaredMixIn::CalendaredMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CalendaredMixIn::getCalendarValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("calendar")) {
        throw AttributeNotFoundException("calendar");
    }
    return b->m_Base.getAttributeValue("calendar");
};
            
MeiAttribute* CalendaredMixIn::getCalendar() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("calendar")) {
        throw AttributeNotFoundException("calendar");
    }
    return b->m_Base.getAttribute("calendar");
};
            
void CalendaredMixIn::setCalendar(string _calendar) {
    if(!b->m_Base.hasAttribute("calendar")) {
        MeiAttribute * a = new MeiAttribute("calendar", _calendar);
        b->m_Base.addAttribute(a);
    }
};
            
bool CalendaredMixIn::hasCalendar() {
    return b->m_Base.hasAttribute("calendar");
};
            
CleffingLogMixIn::CleffingLogMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CleffingLogMixIn::getClefShapeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.shape")) {
        throw AttributeNotFoundException("clef.shape");
    }
    return b->m_Base.getAttributeValue("clef.shape");
};
            
MeiAttribute* CleffingLogMixIn::getClefShape() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.shape")) {
        throw AttributeNotFoundException("clef.shape");
    }
    return b->m_Base.getAttribute("clef.shape");
};
            
void CleffingLogMixIn::setClefShape(string _clefshape) {
    if(!b->m_Base.hasAttribute("clef.shape")) {
        MeiAttribute * a = new MeiAttribute("clef.shape", _clefshape);
        b->m_Base.addAttribute(a);
    }
};
            
bool CleffingLogMixIn::hasClefShape() {
    return b->m_Base.hasAttribute("clef.shape");
};
            
string CleffingLogMixIn::getClefLineValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.line")) {
        throw AttributeNotFoundException("clef.line");
    }
    return b->m_Base.getAttributeValue("clef.line");
};
            
MeiAttribute* CleffingLogMixIn::getClefLine() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.line")) {
        throw AttributeNotFoundException("clef.line");
    }
    return b->m_Base.getAttribute("clef.line");
};
            
void CleffingLogMixIn::setClefLine(string _clefline) {
    if(!b->m_Base.hasAttribute("clef.line")) {
        MeiAttribute * a = new MeiAttribute("clef.line", _clefline);
        b->m_Base.addAttribute(a);
    }
};
            
bool CleffingLogMixIn::hasClefLine() {
    return b->m_Base.hasAttribute("clef.line");
};
            
string CleffingLogMixIn::getClefDisValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.dis")) {
        throw AttributeNotFoundException("clef.dis");
    }
    return b->m_Base.getAttributeValue("clef.dis");
};
            
MeiAttribute* CleffingLogMixIn::getClefDis() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.dis")) {
        throw AttributeNotFoundException("clef.dis");
    }
    return b->m_Base.getAttribute("clef.dis");
};
            
void CleffingLogMixIn::setClefDis(string _clefdis) {
    if(!b->m_Base.hasAttribute("clef.dis")) {
        MeiAttribute * a = new MeiAttribute("clef.dis", _clefdis);
        b->m_Base.addAttribute(a);
    }
};
            
bool CleffingLogMixIn::hasClefDis() {
    return b->m_Base.hasAttribute("clef.dis");
};
            
string CleffingLogMixIn::getClefDisPlaceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.dis.place")) {
        throw AttributeNotFoundException("clef.dis.place");
    }
    return b->m_Base.getAttributeValue("clef.dis.place");
};
            
MeiAttribute* CleffingLogMixIn::getClefDisPlace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.dis.place")) {
        throw AttributeNotFoundException("clef.dis.place");
    }
    return b->m_Base.getAttribute("clef.dis.place");
};
            
void CleffingLogMixIn::setClefDisPlace(string _clefdisplace) {
    if(!b->m_Base.hasAttribute("clef.dis.place")) {
        MeiAttribute * a = new MeiAttribute("clef.dis.place", _clefdisplace);
        b->m_Base.addAttribute(a);
    }
};
            
bool CleffingLogMixIn::hasClefDisPlace() {
    return b->m_Base.hasAttribute("clef.dis.place");
};
            
CleffingVisMixIn::CleffingVisMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CleffingVisMixIn::getClefColorValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.color")) {
        throw AttributeNotFoundException("clef.color");
    }
    return b->m_Base.getAttributeValue("clef.color");
};
            
MeiAttribute* CleffingVisMixIn::getClefColor() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.color")) {
        throw AttributeNotFoundException("clef.color");
    }
    return b->m_Base.getAttribute("clef.color");
};
            
void CleffingVisMixIn::setClefColor(string _clefcolor) {
    if(!b->m_Base.hasAttribute("clef.color")) {
        MeiAttribute * a = new MeiAttribute("clef.color", _clefcolor);
        b->m_Base.addAttribute(a);
    }
};
            
bool CleffingVisMixIn::hasClefColor() {
    return b->m_Base.hasAttribute("clef.color");
};
            
string CleffingVisMixIn::getClefVisibleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.visible")) {
        throw AttributeNotFoundException("clef.visible");
    }
    return b->m_Base.getAttributeValue("clef.visible");
};
            
MeiAttribute* CleffingVisMixIn::getClefVisible() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("clef.visible")) {
        throw AttributeNotFoundException("clef.visible");
    }
    return b->m_Base.getAttribute("clef.visible");
};
            
void CleffingVisMixIn::setClefVisible(string _clefvisible) {
    if(!b->m_Base.hasAttribute("clef.visible")) {
        MeiAttribute * a = new MeiAttribute("clef.visible", _clefvisible);
        b->m_Base.addAttribute(a);
    }
};
            
bool CleffingVisMixIn::hasClefVisible() {
    return b->m_Base.hasAttribute("clef.visible");
};
            
ClefshapeMixIn::ClefshapeMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ClefshapeMixIn::getShapeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->m_Base.getAttributeValue("shape");
};
            
MeiAttribute* ClefshapeMixIn::getShape() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("shape")) {
        throw AttributeNotFoundException("shape");
    }
    return b->m_Base.getAttribute("shape");
};
            
void ClefshapeMixIn::setShape(string _shape) {
    if(!b->m_Base.hasAttribute("shape")) {
        MeiAttribute * a = new MeiAttribute("shape", _shape);
        b->m_Base.addAttribute(a);
    }
};
            
bool ClefshapeMixIn::hasShape() {
    return b->m_Base.hasAttribute("shape");
};
            
ColorMixIn::ColorMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ColorMixIn::getColorValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("color")) {
        throw AttributeNotFoundException("color");
    }
    return b->m_Base.getAttributeValue("color");
};
            
MeiAttribute* ColorMixIn::getColor() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("color")) {
        throw AttributeNotFoundException("color");
    }
    return b->m_Base.getAttribute("color");
};
            
void ColorMixIn::setColor(string _color) {
    if(!b->m_Base.hasAttribute("color")) {
        MeiAttribute * a = new MeiAttribute("color", _color);
        b->m_Base.addAttribute(a);
    }
};
            
bool ColorMixIn::hasColor() {
    return b->m_Base.hasAttribute("color");
};
            
CommonMixIn::CommonMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CommonMixIn::getIdValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("id")) {
        throw AttributeNotFoundException("id");
    }
    return b->m_Base.getAttributeValue("id");
};
            
MeiAttribute* CommonMixIn::getId() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("id")) {
        throw AttributeNotFoundException("id");
    }
    return b->m_Base.getAttribute("id");
};
            
void CommonMixIn::setId(string _id) {
    if(!b->m_Base.hasAttribute("id")) {
        MeiAttribute * a = new MeiAttribute("id", _id);
        b->m_Base.addAttribute(a);
    }
};
            
bool CommonMixIn::hasId() {
    return b->m_Base.hasAttribute("id");
};
            
string CommonMixIn::getLabelValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("label")) {
        throw AttributeNotFoundException("label");
    }
    return b->m_Base.getAttributeValue("label");
};
            
MeiAttribute* CommonMixIn::getLabel() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("label")) {
        throw AttributeNotFoundException("label");
    }
    return b->m_Base.getAttribute("label");
};
            
void CommonMixIn::setLabel(string _label) {
    if(!b->m_Base.hasAttribute("label")) {
        MeiAttribute * a = new MeiAttribute("label", _label);
        b->m_Base.addAttribute(a);
    }
};
            
bool CommonMixIn::hasLabel() {
    return b->m_Base.hasAttribute("label");
};
            
string CommonMixIn::getNValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("n")) {
        throw AttributeNotFoundException("n");
    }
    return b->m_Base.getAttributeValue("n");
};
            
MeiAttribute* CommonMixIn::getN() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("n")) {
        throw AttributeNotFoundException("n");
    }
    return b->m_Base.getAttribute("n");
};
            
void CommonMixIn::setN(string _n) {
    if(!b->m_Base.hasAttribute("n")) {
        MeiAttribute * a = new MeiAttribute("n", _n);
        b->m_Base.addAttribute(a);
    }
};
            
bool CommonMixIn::hasN() {
    return b->m_Base.hasAttribute("n");
};
            
string CommonMixIn::getBaseValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("base")) {
        throw AttributeNotFoundException("base");
    }
    return b->m_Base.getAttributeValue("base");
};
            
MeiAttribute* CommonMixIn::getBase() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("base")) {
        throw AttributeNotFoundException("base");
    }
    return b->m_Base.getAttribute("base");
};
            
void CommonMixIn::setBase(string _base) {
    if(!b->m_Base.hasAttribute("base")) {
        MeiAttribute * a = new MeiAttribute("base", _base);
        b->m_Base.addAttribute(a);
    }
};
            
bool CommonMixIn::hasBase() {
    return b->m_Base.hasAttribute("base");
};
            
CoordinatedMixIn::CoordinatedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CoordinatedMixIn::getUlxValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ulx")) {
        throw AttributeNotFoundException("ulx");
    }
    return b->m_Base.getAttributeValue("ulx");
};
            
MeiAttribute* CoordinatedMixIn::getUlx() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ulx")) {
        throw AttributeNotFoundException("ulx");
    }
    return b->m_Base.getAttribute("ulx");
};
            
void CoordinatedMixIn::setUlx(string _ulx) {
    if(!b->m_Base.hasAttribute("ulx")) {
        MeiAttribute * a = new MeiAttribute("ulx", _ulx);
        b->m_Base.addAttribute(a);
    }
};
            
bool CoordinatedMixIn::hasUlx() {
    return b->m_Base.hasAttribute("ulx");
};
            
string CoordinatedMixIn::getUlyValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("uly")) {
        throw AttributeNotFoundException("uly");
    }
    return b->m_Base.getAttributeValue("uly");
};
            
MeiAttribute* CoordinatedMixIn::getUly() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("uly")) {
        throw AttributeNotFoundException("uly");
    }
    return b->m_Base.getAttribute("uly");
};
            
void CoordinatedMixIn::setUly(string _uly) {
    if(!b->m_Base.hasAttribute("uly")) {
        MeiAttribute * a = new MeiAttribute("uly", _uly);
        b->m_Base.addAttribute(a);
    }
};
            
bool CoordinatedMixIn::hasUly() {
    return b->m_Base.hasAttribute("uly");
};
            
string CoordinatedMixIn::getLrxValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lrx")) {
        throw AttributeNotFoundException("lrx");
    }
    return b->m_Base.getAttributeValue("lrx");
};
            
MeiAttribute* CoordinatedMixIn::getLrx() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lrx")) {
        throw AttributeNotFoundException("lrx");
    }
    return b->m_Base.getAttribute("lrx");
};
            
void CoordinatedMixIn::setLrx(string _lrx) {
    if(!b->m_Base.hasAttribute("lrx")) {
        MeiAttribute * a = new MeiAttribute("lrx", _lrx);
        b->m_Base.addAttribute(a);
    }
};
            
bool CoordinatedMixIn::hasLrx() {
    return b->m_Base.hasAttribute("lrx");
};
            
string CoordinatedMixIn::getLryValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lry")) {
        throw AttributeNotFoundException("lry");
    }
    return b->m_Base.getAttributeValue("lry");
};
            
MeiAttribute* CoordinatedMixIn::getLry() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lry")) {
        throw AttributeNotFoundException("lry");
    }
    return b->m_Base.getAttribute("lry");
};
            
void CoordinatedMixIn::setLry(string _lry) {
    if(!b->m_Base.hasAttribute("lry")) {
        MeiAttribute * a = new MeiAttribute("lry", _lry);
        b->m_Base.addAttribute(a);
    }
};
            
bool CoordinatedMixIn::hasLry() {
    return b->m_Base.hasAttribute("lry");
};
            
CurvatureMixIn::CurvatureMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CurvatureMixIn::getBezierValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bezier")) {
        throw AttributeNotFoundException("bezier");
    }
    return b->m_Base.getAttributeValue("bezier");
};
            
MeiAttribute* CurvatureMixIn::getBezier() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bezier")) {
        throw AttributeNotFoundException("bezier");
    }
    return b->m_Base.getAttribute("bezier");
};
            
void CurvatureMixIn::setBezier(string _bezier) {
    if(!b->m_Base.hasAttribute("bezier")) {
        MeiAttribute * a = new MeiAttribute("bezier", _bezier);
        b->m_Base.addAttribute(a);
    }
};
            
bool CurvatureMixIn::hasBezier() {
    return b->m_Base.hasAttribute("bezier");
};
            
string CurvatureMixIn::getBulgeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bulge")) {
        throw AttributeNotFoundException("bulge");
    }
    return b->m_Base.getAttributeValue("bulge");
};
            
MeiAttribute* CurvatureMixIn::getBulge() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bulge")) {
        throw AttributeNotFoundException("bulge");
    }
    return b->m_Base.getAttribute("bulge");
};
            
void CurvatureMixIn::setBulge(string _bulge) {
    if(!b->m_Base.hasAttribute("bulge")) {
        MeiAttribute * a = new MeiAttribute("bulge", _bulge);
        b->m_Base.addAttribute(a);
    }
};
            
bool CurvatureMixIn::hasBulge() {
    return b->m_Base.hasAttribute("bulge");
};
            
string CurvatureMixIn::getCurvedirValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("curvedir")) {
        throw AttributeNotFoundException("curvedir");
    }
    return b->m_Base.getAttributeValue("curvedir");
};
            
MeiAttribute* CurvatureMixIn::getCurvedir() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("curvedir")) {
        throw AttributeNotFoundException("curvedir");
    }
    return b->m_Base.getAttribute("curvedir");
};
            
void CurvatureMixIn::setCurvedir(string _curvedir) {
    if(!b->m_Base.hasAttribute("curvedir")) {
        MeiAttribute * a = new MeiAttribute("curvedir", _curvedir);
        b->m_Base.addAttribute(a);
    }
};
            
bool CurvatureMixIn::hasCurvedir() {
    return b->m_Base.hasAttribute("curvedir");
};
            
CurverendMixIn::CurverendMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CurverendMixIn::getRendValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};
            
MeiAttribute* CurverendMixIn::getRend() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};
            
void CurverendMixIn::setRend(string _rend) {
    if(!b->m_Base.hasAttribute("rend")) {
        MeiAttribute * a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};
            
bool CurverendMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};
            
DatableMixIn::DatableMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DatableMixIn::getEnddateValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("enddate")) {
        throw AttributeNotFoundException("enddate");
    }
    return b->m_Base.getAttributeValue("enddate");
};
            
MeiAttribute* DatableMixIn::getEnddate() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("enddate")) {
        throw AttributeNotFoundException("enddate");
    }
    return b->m_Base.getAttribute("enddate");
};
            
void DatableMixIn::setEnddate(string _enddate) {
    if(!b->m_Base.hasAttribute("enddate")) {
        MeiAttribute * a = new MeiAttribute("enddate", _enddate);
        b->m_Base.addAttribute(a);
    }
};
            
bool DatableMixIn::hasEnddate() {
    return b->m_Base.hasAttribute("enddate");
};
            
string DatableMixIn::getNotafterValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("notafter")) {
        throw AttributeNotFoundException("notafter");
    }
    return b->m_Base.getAttributeValue("notafter");
};
            
MeiAttribute* DatableMixIn::getNotafter() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("notafter")) {
        throw AttributeNotFoundException("notafter");
    }
    return b->m_Base.getAttribute("notafter");
};
            
void DatableMixIn::setNotafter(string _notafter) {
    if(!b->m_Base.hasAttribute("notafter")) {
        MeiAttribute * a = new MeiAttribute("notafter", _notafter);
        b->m_Base.addAttribute(a);
    }
};
            
bool DatableMixIn::hasNotafter() {
    return b->m_Base.hasAttribute("notafter");
};
            
string DatableMixIn::getNotbeforeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("notbefore")) {
        throw AttributeNotFoundException("notbefore");
    }
    return b->m_Base.getAttributeValue("notbefore");
};
            
MeiAttribute* DatableMixIn::getNotbefore() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("notbefore")) {
        throw AttributeNotFoundException("notbefore");
    }
    return b->m_Base.getAttribute("notbefore");
};
            
void DatableMixIn::setNotbefore(string _notbefore) {
    if(!b->m_Base.hasAttribute("notbefore")) {
        MeiAttribute * a = new MeiAttribute("notbefore", _notbefore);
        b->m_Base.addAttribute(a);
    }
};
            
bool DatableMixIn::hasNotbefore() {
    return b->m_Base.hasAttribute("notbefore");
};
            
string DatableMixIn::getStartdateValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startdate")) {
        throw AttributeNotFoundException("startdate");
    }
    return b->m_Base.getAttributeValue("startdate");
};
            
MeiAttribute* DatableMixIn::getStartdate() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startdate")) {
        throw AttributeNotFoundException("startdate");
    }
    return b->m_Base.getAttribute("startdate");
};
            
void DatableMixIn::setStartdate(string _startdate) {
    if(!b->m_Base.hasAttribute("startdate")) {
        MeiAttribute * a = new MeiAttribute("startdate", _startdate);
        b->m_Base.addAttribute(a);
    }
};
            
bool DatableMixIn::hasStartdate() {
    return b->m_Base.hasAttribute("startdate");
};
            
DatapointingMixIn::DatapointingMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DatapointingMixIn::getDataValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("data")) {
        throw AttributeNotFoundException("data");
    }
    return b->m_Base.getAttributeValue("data");
};
            
MeiAttribute* DatapointingMixIn::getData() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("data")) {
        throw AttributeNotFoundException("data");
    }
    return b->m_Base.getAttribute("data");
};
            
void DatapointingMixIn::setData(string _data) {
    if(!b->m_Base.hasAttribute("data")) {
        MeiAttribute * a = new MeiAttribute("data", _data);
        b->m_Base.addAttribute(a);
    }
};
            
bool DatapointingMixIn::hasData() {
    return b->m_Base.hasAttribute("data");
};
            
DeclaringMixIn::DeclaringMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DeclaringMixIn::getDeclsValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("decls")) {
        throw AttributeNotFoundException("decls");
    }
    return b->m_Base.getAttributeValue("decls");
};
            
MeiAttribute* DeclaringMixIn::getDecls() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("decls")) {
        throw AttributeNotFoundException("decls");
    }
    return b->m_Base.getAttribute("decls");
};
            
void DeclaringMixIn::setDecls(string _decls) {
    if(!b->m_Base.hasAttribute("decls")) {
        MeiAttribute * a = new MeiAttribute("decls", _decls);
        b->m_Base.addAttribute(a);
    }
};
            
bool DeclaringMixIn::hasDecls() {
    return b->m_Base.hasAttribute("decls");
};
            
DistancesMixIn::DistancesMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DistancesMixIn::getDynamDistValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dynam.dist")) {
        throw AttributeNotFoundException("dynam.dist");
    }
    return b->m_Base.getAttributeValue("dynam.dist");
};
            
MeiAttribute* DistancesMixIn::getDynamDist() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dynam.dist")) {
        throw AttributeNotFoundException("dynam.dist");
    }
    return b->m_Base.getAttribute("dynam.dist");
};
            
void DistancesMixIn::setDynamDist(string _dynamdist) {
    if(!b->m_Base.hasAttribute("dynam.dist")) {
        MeiAttribute * a = new MeiAttribute("dynam.dist", _dynamdist);
        b->m_Base.addAttribute(a);
    }
};
            
bool DistancesMixIn::hasDynamDist() {
    return b->m_Base.hasAttribute("dynam.dist");
};
            
string DistancesMixIn::getHarmDistValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("harm.dist")) {
        throw AttributeNotFoundException("harm.dist");
    }
    return b->m_Base.getAttributeValue("harm.dist");
};
            
MeiAttribute* DistancesMixIn::getHarmDist() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("harm.dist")) {
        throw AttributeNotFoundException("harm.dist");
    }
    return b->m_Base.getAttribute("harm.dist");
};
            
void DistancesMixIn::setHarmDist(string _harmdist) {
    if(!b->m_Base.hasAttribute("harm.dist")) {
        MeiAttribute * a = new MeiAttribute("harm.dist", _harmdist);
        b->m_Base.addAttribute(a);
    }
};
            
bool DistancesMixIn::hasHarmDist() {
    return b->m_Base.hasAttribute("harm.dist");
};
            
string DistancesMixIn::getTextDistValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.dist")) {
        throw AttributeNotFoundException("text.dist");
    }
    return b->m_Base.getAttributeValue("text.dist");
};
            
MeiAttribute* DistancesMixIn::getTextDist() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.dist")) {
        throw AttributeNotFoundException("text.dist");
    }
    return b->m_Base.getAttribute("text.dist");
};
            
void DistancesMixIn::setTextDist(string _textdist) {
    if(!b->m_Base.hasAttribute("text.dist")) {
        MeiAttribute * a = new MeiAttribute("text.dist", _textdist);
        b->m_Base.addAttribute(a);
    }
};
            
bool DistancesMixIn::hasTextDist() {
    return b->m_Base.hasAttribute("text.dist");
};
            
DurationDefaultMixIn::DurationDefaultMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DurationDefaultMixIn::getDurDefaultValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.default")) {
        throw AttributeNotFoundException("dur.default");
    }
    return b->m_Base.getAttributeValue("dur.default");
};
            
MeiAttribute* DurationDefaultMixIn::getDurDefault() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.default")) {
        throw AttributeNotFoundException("dur.default");
    }
    return b->m_Base.getAttribute("dur.default");
};
            
void DurationDefaultMixIn::setDurDefault(string _durdefault) {
    if(!b->m_Base.hasAttribute("dur.default")) {
        MeiAttribute * a = new MeiAttribute("dur.default", _durdefault);
        b->m_Base.addAttribute(a);
    }
};
            
bool DurationDefaultMixIn::hasDurDefault() {
    return b->m_Base.hasAttribute("dur.default");
};
            
DurationMusicalMixIn::DurationMusicalMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DurationMusicalMixIn::getDurValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttributeValue("dur");
};
            
MeiAttribute* DurationMusicalMixIn::getDur() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttribute("dur");
};
            
void DurationMusicalMixIn::setDur(string _dur) {
    if(!b->m_Base.hasAttribute("dur")) {
        MeiAttribute * a = new MeiAttribute("dur", _dur);
        b->m_Base.addAttribute(a);
    }
};
            
bool DurationMusicalMixIn::hasDur() {
    return b->m_Base.hasAttribute("dur");
};
            
DurationPerformedMixIn::DurationPerformedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DurationPerformedMixIn::getDurGesValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.ges")) {
        throw AttributeNotFoundException("dur.ges");
    }
    return b->m_Base.getAttributeValue("dur.ges");
};
            
MeiAttribute* DurationPerformedMixIn::getDurGes() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.ges")) {
        throw AttributeNotFoundException("dur.ges");
    }
    return b->m_Base.getAttribute("dur.ges");
};
            
void DurationPerformedMixIn::setDurGes(string _durges) {
    if(!b->m_Base.hasAttribute("dur.ges")) {
        MeiAttribute * a = new MeiAttribute("dur.ges", _durges);
        b->m_Base.addAttribute(a);
    }
};
            
bool DurationPerformedMixIn::hasDurGes() {
    return b->m_Base.hasAttribute("dur.ges");
};
            
DurationRatioMixIn::DurationRatioMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DurationRatioMixIn::getNumValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};
            
MeiAttribute* DurationRatioMixIn::getNum() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};
            
void DurationRatioMixIn::setNum(string _num) {
    if(!b->m_Base.hasAttribute("num")) {
        MeiAttribute * a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};
            
bool DurationRatioMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};
            
string DurationRatioMixIn::getNumbaseValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->m_Base.getAttributeValue("numbase");
};
            
MeiAttribute* DurationRatioMixIn::getNumbase() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("numbase")) {
        throw AttributeNotFoundException("numbase");
    }
    return b->m_Base.getAttribute("numbase");
};
            
void DurationRatioMixIn::setNumbase(string _numbase) {
    if(!b->m_Base.hasAttribute("numbase")) {
        MeiAttribute * a = new MeiAttribute("numbase", _numbase);
        b->m_Base.addAttribute(a);
    }
};
            
bool DurationRatioMixIn::hasNumbase() {
    return b->m_Base.hasAttribute("numbase");
};
            
DurationTimestampMixIn::DurationTimestampMixIn(BaseMeiElement *b) {
    this->b = b;
};
string DurationTimestampMixIn::getDurValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttributeValue("dur");
};
            
MeiAttribute* DurationTimestampMixIn::getDur() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->m_Base.getAttribute("dur");
};
            
void DurationTimestampMixIn::setDur(string _dur) {
    if(!b->m_Base.hasAttribute("dur")) {
        MeiAttribute * a = new MeiAttribute("dur", _dur);
        b->m_Base.addAttribute(a);
    }
};
            
bool DurationTimestampMixIn::hasDur() {
    return b->m_Base.hasAttribute("dur");
};
            
EnclosingcharsMixIn::EnclosingcharsMixIn(BaseMeiElement *b) {
    this->b = b;
};
string EnclosingcharsMixIn::getEncloseValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("enclose")) {
        throw AttributeNotFoundException("enclose");
    }
    return b->m_Base.getAttributeValue("enclose");
};
            
MeiAttribute* EnclosingcharsMixIn::getEnclose() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("enclose")) {
        throw AttributeNotFoundException("enclose");
    }
    return b->m_Base.getAttribute("enclose");
};
            
void EnclosingcharsMixIn::setEnclose(string _enclose) {
    if(!b->m_Base.hasAttribute("enclose")) {
        MeiAttribute * a = new MeiAttribute("enclose", _enclose);
        b->m_Base.addAttribute(a);
    }
};
            
bool EnclosingcharsMixIn::hasEnclose() {
    return b->m_Base.hasAttribute("enclose");
};
            
FermatapresentMixIn::FermatapresentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string FermatapresentMixIn::getFermataValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fermata")) {
        throw AttributeNotFoundException("fermata");
    }
    return b->m_Base.getAttributeValue("fermata");
};
            
MeiAttribute* FermatapresentMixIn::getFermata() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fermata")) {
        throw AttributeNotFoundException("fermata");
    }
    return b->m_Base.getAttribute("fermata");
};
            
void FermatapresentMixIn::setFermata(string _fermata) {
    if(!b->m_Base.hasAttribute("fermata")) {
        MeiAttribute * a = new MeiAttribute("fermata", _fermata);
        b->m_Base.addAttribute(a);
    }
};
            
bool FermatapresentMixIn::hasFermata() {
    return b->m_Base.hasAttribute("fermata");
};
            
StaffgroupingsymMixIn::StaffgroupingsymMixIn(BaseMeiElement *b) {
    this->b = b;
};
string StaffgroupingsymMixIn::getSymbolValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("symbol")) {
        throw AttributeNotFoundException("symbol");
    }
    return b->m_Base.getAttributeValue("symbol");
};
            
MeiAttribute* StaffgroupingsymMixIn::getSymbol() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("symbol")) {
        throw AttributeNotFoundException("symbol");
    }
    return b->m_Base.getAttribute("symbol");
};
            
void StaffgroupingsymMixIn::setSymbol(string _symbol) {
    if(!b->m_Base.hasAttribute("symbol")) {
        MeiAttribute * a = new MeiAttribute("symbol", _symbol);
        b->m_Base.addAttribute(a);
    }
};
            
bool StaffgroupingsymMixIn::hasSymbol() {
    return b->m_Base.hasAttribute("symbol");
};
            
HandidentMixIn::HandidentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string HandidentMixIn::getHandValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->m_Base.getAttributeValue("hand");
};
            
MeiAttribute* HandidentMixIn::getHand() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->m_Base.getAttribute("hand");
};
            
void HandidentMixIn::setHand(string _hand) {
    if(!b->m_Base.hasAttribute("hand")) {
        MeiAttribute * a = new MeiAttribute("hand", _hand);
        b->m_Base.addAttribute(a);
    }
};
            
bool HandidentMixIn::hasHand() {
    return b->m_Base.hasAttribute("hand");
};
            
HorizontalalignMixIn::HorizontalalignMixIn(BaseMeiElement *b) {
    this->b = b;
};
string HorizontalalignMixIn::getHalignValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("halign")) {
        throw AttributeNotFoundException("halign");
    }
    return b->m_Base.getAttributeValue("halign");
};
            
MeiAttribute* HorizontalalignMixIn::getHalign() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("halign")) {
        throw AttributeNotFoundException("halign");
    }
    return b->m_Base.getAttribute("halign");
};
            
void HorizontalalignMixIn::setHalign(string _halign) {
    if(!b->m_Base.hasAttribute("halign")) {
        MeiAttribute * a = new MeiAttribute("halign", _halign);
        b->m_Base.addAttribute(a);
    }
};
            
bool HorizontalalignMixIn::hasHalign() {
    return b->m_Base.hasAttribute("halign");
};
            
InstrumentidentMixIn::InstrumentidentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string InstrumentidentMixIn::getInstrValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("instr")) {
        throw AttributeNotFoundException("instr");
    }
    return b->m_Base.getAttributeValue("instr");
};
            
MeiAttribute* InstrumentidentMixIn::getInstr() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("instr")) {
        throw AttributeNotFoundException("instr");
    }
    return b->m_Base.getAttribute("instr");
};
            
void InstrumentidentMixIn::setInstr(string _instr) {
    if(!b->m_Base.hasAttribute("instr")) {
        MeiAttribute * a = new MeiAttribute("instr", _instr);
        b->m_Base.addAttribute(a);
    }
};
            
bool InstrumentidentMixIn::hasInstr() {
    return b->m_Base.hasAttribute("instr");
};
            
InternetmediaMixIn::InternetmediaMixIn(BaseMeiElement *b) {
    this->b = b;
};
string InternetmediaMixIn::getMimetypeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mimetype")) {
        throw AttributeNotFoundException("mimetype");
    }
    return b->m_Base.getAttributeValue("mimetype");
};
            
MeiAttribute* InternetmediaMixIn::getMimetype() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mimetype")) {
        throw AttributeNotFoundException("mimetype");
    }
    return b->m_Base.getAttribute("mimetype");
};
            
void InternetmediaMixIn::setMimetype(string _mimetype) {
    if(!b->m_Base.hasAttribute("mimetype")) {
        MeiAttribute * a = new MeiAttribute("mimetype", _mimetype);
        b->m_Base.addAttribute(a);
    }
};
            
bool InternetmediaMixIn::hasMimetype() {
    return b->m_Base.hasAttribute("mimetype");
};
            
JoinedMixIn::JoinedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string JoinedMixIn::getJoinValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("join")) {
        throw AttributeNotFoundException("join");
    }
    return b->m_Base.getAttributeValue("join");
};
            
MeiAttribute* JoinedMixIn::getJoin() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("join")) {
        throw AttributeNotFoundException("join");
    }
    return b->m_Base.getAttribute("join");
};
            
void JoinedMixIn::setJoin(string _join) {
    if(!b->m_Base.hasAttribute("join")) {
        MeiAttribute * a = new MeiAttribute("join", _join);
        b->m_Base.addAttribute(a);
    }
};
            
bool JoinedMixIn::hasJoin() {
    return b->m_Base.hasAttribute("join");
};
            
KeysigsLogMixIn::KeysigsLogMixIn(BaseMeiElement *b) {
    this->b = b;
};
string KeysigsLogMixIn::getKeyAccidValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.accid")) {
        throw AttributeNotFoundException("key.accid");
    }
    return b->m_Base.getAttributeValue("key.accid");
};
            
MeiAttribute* KeysigsLogMixIn::getKeyAccid() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.accid")) {
        throw AttributeNotFoundException("key.accid");
    }
    return b->m_Base.getAttribute("key.accid");
};
            
void KeysigsLogMixIn::setKeyAccid(string _keyaccid) {
    if(!b->m_Base.hasAttribute("key.accid")) {
        MeiAttribute * a = new MeiAttribute("key.accid", _keyaccid);
        b->m_Base.addAttribute(a);
    }
};
            
bool KeysigsLogMixIn::hasKeyAccid() {
    return b->m_Base.hasAttribute("key.accid");
};
            
string KeysigsLogMixIn::getKeyModeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.mode")) {
        throw AttributeNotFoundException("key.mode");
    }
    return b->m_Base.getAttributeValue("key.mode");
};
            
MeiAttribute* KeysigsLogMixIn::getKeyMode() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.mode")) {
        throw AttributeNotFoundException("key.mode");
    }
    return b->m_Base.getAttribute("key.mode");
};
            
void KeysigsLogMixIn::setKeyMode(string _keymode) {
    if(!b->m_Base.hasAttribute("key.mode")) {
        MeiAttribute * a = new MeiAttribute("key.mode", _keymode);
        b->m_Base.addAttribute(a);
    }
};
            
bool KeysigsLogMixIn::hasKeyMode() {
    return b->m_Base.hasAttribute("key.mode");
};
            
string KeysigsLogMixIn::getKeyPnameValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.pname")) {
        throw AttributeNotFoundException("key.pname");
    }
    return b->m_Base.getAttributeValue("key.pname");
};
            
MeiAttribute* KeysigsLogMixIn::getKeyPname() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.pname")) {
        throw AttributeNotFoundException("key.pname");
    }
    return b->m_Base.getAttribute("key.pname");
};
            
void KeysigsLogMixIn::setKeyPname(string _keypname) {
    if(!b->m_Base.hasAttribute("key.pname")) {
        MeiAttribute * a = new MeiAttribute("key.pname", _keypname);
        b->m_Base.addAttribute(a);
    }
};
            
bool KeysigsLogMixIn::hasKeyPname() {
    return b->m_Base.hasAttribute("key.pname");
};
            
string KeysigsLogMixIn::getKeySigValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig")) {
        throw AttributeNotFoundException("key.sig");
    }
    return b->m_Base.getAttributeValue("key.sig");
};
            
MeiAttribute* KeysigsLogMixIn::getKeySig() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig")) {
        throw AttributeNotFoundException("key.sig");
    }
    return b->m_Base.getAttribute("key.sig");
};
            
void KeysigsLogMixIn::setKeySig(string _keysig) {
    if(!b->m_Base.hasAttribute("key.sig")) {
        MeiAttribute * a = new MeiAttribute("key.sig", _keysig);
        b->m_Base.addAttribute(a);
    }
};
            
bool KeysigsLogMixIn::hasKeySig() {
    return b->m_Base.hasAttribute("key.sig");
};
            
string KeysigsLogMixIn::getKeySigMixedValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.mixed")) {
        throw AttributeNotFoundException("key.sig.mixed");
    }
    return b->m_Base.getAttributeValue("key.sig.mixed");
};
            
MeiAttribute* KeysigsLogMixIn::getKeySigMixed() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.mixed")) {
        throw AttributeNotFoundException("key.sig.mixed");
    }
    return b->m_Base.getAttribute("key.sig.mixed");
};
            
void KeysigsLogMixIn::setKeySigMixed(string _keysigmixed) {
    if(!b->m_Base.hasAttribute("key.sig.mixed")) {
        MeiAttribute * a = new MeiAttribute("key.sig.mixed", _keysigmixed);
        b->m_Base.addAttribute(a);
    }
};
            
bool KeysigsLogMixIn::hasKeySigMixed() {
    return b->m_Base.hasAttribute("key.sig.mixed");
};
            
KeysigsVisMixIn::KeysigsVisMixIn(BaseMeiElement *b) {
    this->b = b;
};
string KeysigsVisMixIn::getKeySigShowValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.show")) {
        throw AttributeNotFoundException("key.sig.show");
    }
    return b->m_Base.getAttributeValue("key.sig.show");
};
            
MeiAttribute* KeysigsVisMixIn::getKeySigShow() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.show")) {
        throw AttributeNotFoundException("key.sig.show");
    }
    return b->m_Base.getAttribute("key.sig.show");
};
            
void KeysigsVisMixIn::setKeySigShow(string _keysigshow) {
    if(!b->m_Base.hasAttribute("key.sig.show")) {
        MeiAttribute * a = new MeiAttribute("key.sig.show", _keysigshow);
        b->m_Base.addAttribute(a);
    }
};
            
bool KeysigsVisMixIn::hasKeySigShow() {
    return b->m_Base.hasAttribute("key.sig.show");
};
            
string KeysigsVisMixIn::getKeySigShowchangeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.showchange")) {
        throw AttributeNotFoundException("key.sig.showchange");
    }
    return b->m_Base.getAttributeValue("key.sig.showchange");
};
            
MeiAttribute* KeysigsVisMixIn::getKeySigShowchange() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("key.sig.showchange")) {
        throw AttributeNotFoundException("key.sig.showchange");
    }
    return b->m_Base.getAttribute("key.sig.showchange");
};
            
void KeysigsVisMixIn::setKeySigShowchange(string _keysigshowchange) {
    if(!b->m_Base.hasAttribute("key.sig.showchange")) {
        MeiAttribute * a = new MeiAttribute("key.sig.showchange", _keysigshowchange);
        b->m_Base.addAttribute(a);
    }
};
            
bool KeysigsVisMixIn::hasKeySigShowchange() {
    return b->m_Base.hasAttribute("key.sig.showchange");
};
            
LabelsAddlMixIn::LabelsAddlMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LabelsAddlMixIn::getLabelAbbrValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("label.abbr")) {
        throw AttributeNotFoundException("label.abbr");
    }
    return b->m_Base.getAttributeValue("label.abbr");
};
            
MeiAttribute* LabelsAddlMixIn::getLabelAbbr() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("label.abbr")) {
        throw AttributeNotFoundException("label.abbr");
    }
    return b->m_Base.getAttribute("label.abbr");
};
            
void LabelsAddlMixIn::setLabelAbbr(string _labelabbr) {
    if(!b->m_Base.hasAttribute("label.abbr")) {
        MeiAttribute * a = new MeiAttribute("label.abbr", _labelabbr);
        b->m_Base.addAttribute(a);
    }
};
            
bool LabelsAddlMixIn::hasLabelAbbr() {
    return b->m_Base.hasAttribute("label.abbr");
};
            
LangMixIn::LangMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LangMixIn::getLangValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lang")) {
        throw AttributeNotFoundException("lang");
    }
    return b->m_Base.getAttributeValue("lang");
};
            
MeiAttribute* LangMixIn::getLang() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lang")) {
        throw AttributeNotFoundException("lang");
    }
    return b->m_Base.getAttribute("lang");
};
            
void LangMixIn::setLang(string _lang) {
    if(!b->m_Base.hasAttribute("lang")) {
        MeiAttribute * a = new MeiAttribute("lang", _lang);
        b->m_Base.addAttribute(a);
    }
};
            
bool LangMixIn::hasLang() {
    return b->m_Base.hasAttribute("lang");
};
            
LayeridentMixIn::LayeridentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LayeridentMixIn::getLayerValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttributeValue("layer");
};
            
MeiAttribute* LayeridentMixIn::getLayer() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttribute("layer");
};
            
void LayeridentMixIn::setLayer(string _layer) {
    if(!b->m_Base.hasAttribute("layer")) {
        MeiAttribute * a = new MeiAttribute("layer", _layer);
        b->m_Base.addAttribute(a);
    }
};
            
bool LayeridentMixIn::hasLayer() {
    return b->m_Base.hasAttribute("layer");
};
            
LinelocMixIn::LinelocMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LinelocMixIn::getLineValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("line")) {
        throw AttributeNotFoundException("line");
    }
    return b->m_Base.getAttributeValue("line");
};
            
MeiAttribute* LinelocMixIn::getLine() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("line")) {
        throw AttributeNotFoundException("line");
    }
    return b->m_Base.getAttribute("line");
};
            
void LinelocMixIn::setLine(string _line) {
    if(!b->m_Base.hasAttribute("line")) {
        MeiAttribute * a = new MeiAttribute("line", _line);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinelocMixIn::hasLine() {
    return b->m_Base.hasAttribute("line");
};
            
LinerendMixIn::LinerendMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LinerendMixIn::getRendValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};
            
MeiAttribute* LinerendMixIn::getRend() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};
            
void LinerendMixIn::setRend(string _rend) {
    if(!b->m_Base.hasAttribute("rend")) {
        MeiAttribute * a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinerendMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};
            
LinkCommonMixIn::LinkCommonMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LinkCommonMixIn::getActuateValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("actuate")) {
        throw AttributeNotFoundException("actuate");
    }
    return b->m_Base.getAttributeValue("actuate");
};
            
MeiAttribute* LinkCommonMixIn::getActuate() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("actuate")) {
        throw AttributeNotFoundException("actuate");
    }
    return b->m_Base.getAttribute("actuate");
};
            
void LinkCommonMixIn::setActuate(string _actuate) {
    if(!b->m_Base.hasAttribute("actuate")) {
        MeiAttribute * a = new MeiAttribute("actuate", _actuate);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinkCommonMixIn::hasActuate() {
    return b->m_Base.hasAttribute("actuate");
};
            
string LinkCommonMixIn::getRoleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->m_Base.getAttributeValue("role");
};
            
MeiAttribute* LinkCommonMixIn::getRole() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->m_Base.getAttribute("role");
};
            
void LinkCommonMixIn::setRole(string _role) {
    if(!b->m_Base.hasAttribute("role")) {
        MeiAttribute * a = new MeiAttribute("role", _role);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinkCommonMixIn::hasRole() {
    return b->m_Base.hasAttribute("role");
};
            
string LinkCommonMixIn::getShowValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("show")) {
        throw AttributeNotFoundException("show");
    }
    return b->m_Base.getAttributeValue("show");
};
            
MeiAttribute* LinkCommonMixIn::getShow() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("show")) {
        throw AttributeNotFoundException("show");
    }
    return b->m_Base.getAttribute("show");
};
            
void LinkCommonMixIn::setShow(string _show) {
    if(!b->m_Base.hasAttribute("show")) {
        MeiAttribute * a = new MeiAttribute("show", _show);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinkCommonMixIn::hasShow() {
    return b->m_Base.hasAttribute("show");
};
            
string LinkCommonMixIn::getTargettypeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("targettype")) {
        throw AttributeNotFoundException("targettype");
    }
    return b->m_Base.getAttributeValue("targettype");
};
            
MeiAttribute* LinkCommonMixIn::getTargettype() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("targettype")) {
        throw AttributeNotFoundException("targettype");
    }
    return b->m_Base.getAttribute("targettype");
};
            
void LinkCommonMixIn::setTargettype(string _targettype) {
    if(!b->m_Base.hasAttribute("targettype")) {
        MeiAttribute * a = new MeiAttribute("targettype", _targettype);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinkCommonMixIn::hasTargettype() {
    return b->m_Base.hasAttribute("targettype");
};
            
string LinkCommonMixIn::getTitleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("title")) {
        throw AttributeNotFoundException("title");
    }
    return b->m_Base.getAttributeValue("title");
};
            
MeiAttribute* LinkCommonMixIn::getTitle() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("title")) {
        throw AttributeNotFoundException("title");
    }
    return b->m_Base.getAttribute("title");
};
            
void LinkCommonMixIn::setTitle(string _title) {
    if(!b->m_Base.hasAttribute("title")) {
        MeiAttribute * a = new MeiAttribute("title", _title);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinkCommonMixIn::hasTitle() {
    return b->m_Base.hasAttribute("title");
};
            
LinkExternalMixIn::LinkExternalMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LinkExternalMixIn::getHrefValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("href")) {
        throw AttributeNotFoundException("href");
    }
    return b->m_Base.getAttributeValue("href");
};
            
MeiAttribute* LinkExternalMixIn::getHref() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("href")) {
        throw AttributeNotFoundException("href");
    }
    return b->m_Base.getAttribute("href");
};
            
void LinkExternalMixIn::setHref(string _href) {
    if(!b->m_Base.hasAttribute("href")) {
        MeiAttribute * a = new MeiAttribute("href", _href);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinkExternalMixIn::hasHref() {
    return b->m_Base.hasAttribute("href");
};
            
LyricstyleMixIn::LyricstyleMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LyricstyleMixIn::getLyricAlignValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.align")) {
        throw AttributeNotFoundException("lyric.align");
    }
    return b->m_Base.getAttributeValue("lyric.align");
};
            
MeiAttribute* LyricstyleMixIn::getLyricAlign() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.align")) {
        throw AttributeNotFoundException("lyric.align");
    }
    return b->m_Base.getAttribute("lyric.align");
};
            
void LyricstyleMixIn::setLyricAlign(string _lyricalign) {
    if(!b->m_Base.hasAttribute("lyric.align")) {
        MeiAttribute * a = new MeiAttribute("lyric.align", _lyricalign);
        b->m_Base.addAttribute(a);
    }
};
            
bool LyricstyleMixIn::hasLyricAlign() {
    return b->m_Base.hasAttribute("lyric.align");
};
            
string LyricstyleMixIn::getLyricFamValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.fam")) {
        throw AttributeNotFoundException("lyric.fam");
    }
    return b->m_Base.getAttributeValue("lyric.fam");
};
            
MeiAttribute* LyricstyleMixIn::getLyricFam() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.fam")) {
        throw AttributeNotFoundException("lyric.fam");
    }
    return b->m_Base.getAttribute("lyric.fam");
};
            
void LyricstyleMixIn::setLyricFam(string _lyricfam) {
    if(!b->m_Base.hasAttribute("lyric.fam")) {
        MeiAttribute * a = new MeiAttribute("lyric.fam", _lyricfam);
        b->m_Base.addAttribute(a);
    }
};
            
bool LyricstyleMixIn::hasLyricFam() {
    return b->m_Base.hasAttribute("lyric.fam");
};
            
string LyricstyleMixIn::getLyricNameValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.name")) {
        throw AttributeNotFoundException("lyric.name");
    }
    return b->m_Base.getAttributeValue("lyric.name");
};
            
MeiAttribute* LyricstyleMixIn::getLyricName() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.name")) {
        throw AttributeNotFoundException("lyric.name");
    }
    return b->m_Base.getAttribute("lyric.name");
};
            
void LyricstyleMixIn::setLyricName(string _lyricname) {
    if(!b->m_Base.hasAttribute("lyric.name")) {
        MeiAttribute * a = new MeiAttribute("lyric.name", _lyricname);
        b->m_Base.addAttribute(a);
    }
};
            
bool LyricstyleMixIn::hasLyricName() {
    return b->m_Base.hasAttribute("lyric.name");
};
            
string LyricstyleMixIn::getLyricSizeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.size")) {
        throw AttributeNotFoundException("lyric.size");
    }
    return b->m_Base.getAttributeValue("lyric.size");
};
            
MeiAttribute* LyricstyleMixIn::getLyricSize() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.size")) {
        throw AttributeNotFoundException("lyric.size");
    }
    return b->m_Base.getAttribute("lyric.size");
};
            
void LyricstyleMixIn::setLyricSize(string _lyricsize) {
    if(!b->m_Base.hasAttribute("lyric.size")) {
        MeiAttribute * a = new MeiAttribute("lyric.size", _lyricsize);
        b->m_Base.addAttribute(a);
    }
};
            
bool LyricstyleMixIn::hasLyricSize() {
    return b->m_Base.hasAttribute("lyric.size");
};
            
string LyricstyleMixIn::getLyricStyleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.style")) {
        throw AttributeNotFoundException("lyric.style");
    }
    return b->m_Base.getAttributeValue("lyric.style");
};
            
MeiAttribute* LyricstyleMixIn::getLyricStyle() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.style")) {
        throw AttributeNotFoundException("lyric.style");
    }
    return b->m_Base.getAttribute("lyric.style");
};
            
void LyricstyleMixIn::setLyricStyle(string _lyricstyle) {
    if(!b->m_Base.hasAttribute("lyric.style")) {
        MeiAttribute * a = new MeiAttribute("lyric.style", _lyricstyle);
        b->m_Base.addAttribute(a);
    }
};
            
bool LyricstyleMixIn::hasLyricStyle() {
    return b->m_Base.hasAttribute("lyric.style");
};
            
string LyricstyleMixIn::getLyricWeightValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.weight")) {
        throw AttributeNotFoundException("lyric.weight");
    }
    return b->m_Base.getAttributeValue("lyric.weight");
};
            
MeiAttribute* LyricstyleMixIn::getLyricWeight() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lyric.weight")) {
        throw AttributeNotFoundException("lyric.weight");
    }
    return b->m_Base.getAttribute("lyric.weight");
};
            
void LyricstyleMixIn::setLyricWeight(string _lyricweight) {
    if(!b->m_Base.hasAttribute("lyric.weight")) {
        MeiAttribute * a = new MeiAttribute("lyric.weight", _lyricweight);
        b->m_Base.addAttribute(a);
    }
};
            
bool LyricstyleMixIn::hasLyricWeight() {
    return b->m_Base.hasAttribute("lyric.weight");
};
            
MeasurementMixIn::MeasurementMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MeasurementMixIn::getUnitValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->m_Base.getAttributeValue("unit");
};
            
MeiAttribute* MeasurementMixIn::getUnit() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->m_Base.getAttribute("unit");
};
            
void MeasurementMixIn::setUnit(string _unit) {
    if(!b->m_Base.hasAttribute("unit")) {
        MeiAttribute * a = new MeiAttribute("unit", _unit);
        b->m_Base.addAttribute(a);
    }
};
            
bool MeasurementMixIn::hasUnit() {
    return b->m_Base.hasAttribute("unit");
};
            
WidthMixIn::WidthMixIn(BaseMeiElement *b) {
    this->b = b;
};
string WidthMixIn::getWidthValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("width")) {
        throw AttributeNotFoundException("width");
    }
    return b->m_Base.getAttributeValue("width");
};
            
MeiAttribute* WidthMixIn::getWidth() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("width")) {
        throw AttributeNotFoundException("width");
    }
    return b->m_Base.getAttribute("width");
};
            
void WidthMixIn::setWidth(string _width) {
    if(!b->m_Base.hasAttribute("width")) {
        MeiAttribute * a = new MeiAttribute("width", _width);
        b->m_Base.addAttribute(a);
    }
};
            
bool WidthMixIn::hasWidth() {
    return b->m_Base.hasAttribute("width");
};
            
MediumMixIn::MediumMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MediumMixIn::getMediumValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("medium")) {
        throw AttributeNotFoundException("medium");
    }
    return b->m_Base.getAttributeValue("medium");
};
            
MeiAttribute* MediumMixIn::getMedium() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("medium")) {
        throw AttributeNotFoundException("medium");
    }
    return b->m_Base.getAttribute("medium");
};
            
void MediumMixIn::setMedium(string _medium) {
    if(!b->m_Base.hasAttribute("medium")) {
        MeiAttribute * a = new MeiAttribute("medium", _medium);
        b->m_Base.addAttribute(a);
    }
};
            
bool MediumMixIn::hasMedium() {
    return b->m_Base.hasAttribute("medium");
};
            
MeiversionMixIn::MeiversionMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MeiversionMixIn::getMeiversionValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meiversion")) {
        throw AttributeNotFoundException("meiversion");
    }
    return b->m_Base.getAttributeValue("meiversion");
};
            
MeiAttribute* MeiversionMixIn::getMeiversion() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meiversion")) {
        throw AttributeNotFoundException("meiversion");
    }
    return b->m_Base.getAttribute("meiversion");
};
            
void MeiversionMixIn::setMeiversion(string _meiversion) {
    if(!b->m_Base.hasAttribute("meiversion")) {
        MeiAttribute * a = new MeiAttribute("meiversion", _meiversion);
        b->m_Base.addAttribute(a);
    }
};
            
bool MeiversionMixIn::hasMeiversion() {
    return b->m_Base.hasAttribute("meiversion");
};
            
MeterconformanceMixIn::MeterconformanceMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MeterconformanceMixIn::getMetconValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->m_Base.getAttributeValue("metcon");
};
            
MeiAttribute* MeterconformanceMixIn::getMetcon() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->m_Base.getAttribute("metcon");
};
            
void MeterconformanceMixIn::setMetcon(string _metcon) {
    if(!b->m_Base.hasAttribute("metcon")) {
        MeiAttribute * a = new MeiAttribute("metcon", _metcon);
        b->m_Base.addAttribute(a);
    }
};
            
bool MeterconformanceMixIn::hasMetcon() {
    return b->m_Base.hasAttribute("metcon");
};
            
MeterconformanceBarMixIn::MeterconformanceBarMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MeterconformanceBarMixIn::getMetconValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->m_Base.getAttributeValue("metcon");
};
            
MeiAttribute* MeterconformanceBarMixIn::getMetcon() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("metcon")) {
        throw AttributeNotFoundException("metcon");
    }
    return b->m_Base.getAttribute("metcon");
};
            
void MeterconformanceBarMixIn::setMetcon(string _metcon) {
    if(!b->m_Base.hasAttribute("metcon")) {
        MeiAttribute * a = new MeiAttribute("metcon", _metcon);
        b->m_Base.addAttribute(a);
    }
};
            
bool MeterconformanceBarMixIn::hasMetcon() {
    return b->m_Base.hasAttribute("metcon");
};
            
string MeterconformanceBarMixIn::getControlValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("control")) {
        throw AttributeNotFoundException("control");
    }
    return b->m_Base.getAttributeValue("control");
};
            
MeiAttribute* MeterconformanceBarMixIn::getControl() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("control")) {
        throw AttributeNotFoundException("control");
    }
    return b->m_Base.getAttribute("control");
};
            
void MeterconformanceBarMixIn::setControl(string _control) {
    if(!b->m_Base.hasAttribute("control")) {
        MeiAttribute * a = new MeiAttribute("control", _control);
        b->m_Base.addAttribute(a);
    }
};
            
bool MeterconformanceBarMixIn::hasControl() {
    return b->m_Base.hasAttribute("control");
};
            
MetersLogMixIn::MetersLogMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MetersLogMixIn::getMeterCountValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.count")) {
        throw AttributeNotFoundException("meter.count");
    }
    return b->m_Base.getAttributeValue("meter.count");
};
            
MeiAttribute* MetersLogMixIn::getMeterCount() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.count")) {
        throw AttributeNotFoundException("meter.count");
    }
    return b->m_Base.getAttribute("meter.count");
};
            
void MetersLogMixIn::setMeterCount(string _metercount) {
    if(!b->m_Base.hasAttribute("meter.count")) {
        MeiAttribute * a = new MeiAttribute("meter.count", _metercount);
        b->m_Base.addAttribute(a);
    }
};
            
bool MetersLogMixIn::hasMeterCount() {
    return b->m_Base.hasAttribute("meter.count");
};
            
string MetersLogMixIn::getMeterUnitValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.unit")) {
        throw AttributeNotFoundException("meter.unit");
    }
    return b->m_Base.getAttributeValue("meter.unit");
};
            
MeiAttribute* MetersLogMixIn::getMeterUnit() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.unit")) {
        throw AttributeNotFoundException("meter.unit");
    }
    return b->m_Base.getAttribute("meter.unit");
};
            
void MetersLogMixIn::setMeterUnit(string _meterunit) {
    if(!b->m_Base.hasAttribute("meter.unit")) {
        MeiAttribute * a = new MeiAttribute("meter.unit", _meterunit);
        b->m_Base.addAttribute(a);
    }
};
            
bool MetersLogMixIn::hasMeterUnit() {
    return b->m_Base.hasAttribute("meter.unit");
};
            
MetersVisMixIn::MetersVisMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MetersVisMixIn::getMeterRendValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.rend")) {
        throw AttributeNotFoundException("meter.rend");
    }
    return b->m_Base.getAttributeValue("meter.rend");
};
            
MeiAttribute* MetersVisMixIn::getMeterRend() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.rend")) {
        throw AttributeNotFoundException("meter.rend");
    }
    return b->m_Base.getAttribute("meter.rend");
};
            
void MetersVisMixIn::setMeterRend(string _meterrend) {
    if(!b->m_Base.hasAttribute("meter.rend")) {
        MeiAttribute * a = new MeiAttribute("meter.rend", _meterrend);
        b->m_Base.addAttribute(a);
    }
};
            
bool MetersVisMixIn::hasMeterRend() {
    return b->m_Base.hasAttribute("meter.rend");
};
            
string MetersVisMixIn::getMeterShowchangeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.showchange")) {
        throw AttributeNotFoundException("meter.showchange");
    }
    return b->m_Base.getAttributeValue("meter.showchange");
};
            
MeiAttribute* MetersVisMixIn::getMeterShowchange() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.showchange")) {
        throw AttributeNotFoundException("meter.showchange");
    }
    return b->m_Base.getAttribute("meter.showchange");
};
            
void MetersVisMixIn::setMeterShowchange(string _metershowchange) {
    if(!b->m_Base.hasAttribute("meter.showchange")) {
        MeiAttribute * a = new MeiAttribute("meter.showchange", _metershowchange);
        b->m_Base.addAttribute(a);
    }
};
            
bool MetersVisMixIn::hasMeterShowchange() {
    return b->m_Base.hasAttribute("meter.showchange");
};
            
string MetersVisMixIn::getMeterSymValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.sym")) {
        throw AttributeNotFoundException("meter.sym");
    }
    return b->m_Base.getAttributeValue("meter.sym");
};
            
MeiAttribute* MetersVisMixIn::getMeterSym() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("meter.sym")) {
        throw AttributeNotFoundException("meter.sym");
    }
    return b->m_Base.getAttribute("meter.sym");
};
            
void MetersVisMixIn::setMeterSym(string _metersym) {
    if(!b->m_Base.hasAttribute("meter.sym")) {
        MeiAttribute * a = new MeiAttribute("meter.sym", _metersym);
        b->m_Base.addAttribute(a);
    }
};
            
bool MetersVisMixIn::hasMeterSym() {
    return b->m_Base.hasAttribute("meter.sym");
};
            
MmtempoMixIn::MmtempoMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MmtempoMixIn::getMmValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mm")) {
        throw AttributeNotFoundException("mm");
    }
    return b->m_Base.getAttributeValue("mm");
};
            
MeiAttribute* MmtempoMixIn::getMm() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("mm")) {
        throw AttributeNotFoundException("mm");
    }
    return b->m_Base.getAttribute("mm");
};
            
void MmtempoMixIn::setMm(string _mm) {
    if(!b->m_Base.hasAttribute("mm")) {
        MeiAttribute * a = new MeiAttribute("mm", _mm);
        b->m_Base.addAttribute(a);
    }
};
            
bool MmtempoMixIn::hasMm() {
    return b->m_Base.hasAttribute("mm");
};
            
MultinummeasuresMixIn::MultinummeasuresMixIn(BaseMeiElement *b) {
    this->b = b;
};
string MultinummeasuresMixIn::getMultiNumberValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("multi.number")) {
        throw AttributeNotFoundException("multi.number");
    }
    return b->m_Base.getAttributeValue("multi.number");
};
            
MeiAttribute* MultinummeasuresMixIn::getMultiNumber() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("multi.number")) {
        throw AttributeNotFoundException("multi.number");
    }
    return b->m_Base.getAttribute("multi.number");
};
            
void MultinummeasuresMixIn::setMultiNumber(string _multinumber) {
    if(!b->m_Base.hasAttribute("multi.number")) {
        MeiAttribute * a = new MeiAttribute("multi.number", _multinumber);
        b->m_Base.addAttribute(a);
    }
};
            
bool MultinummeasuresMixIn::hasMultiNumber() {
    return b->m_Base.hasAttribute("multi.number");
};
            
OctaveMixIn::OctaveMixIn(BaseMeiElement *b) {
    this->b = b;
};
string OctaveMixIn::getOctValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("oct")) {
        throw AttributeNotFoundException("oct");
    }
    return b->m_Base.getAttributeValue("oct");
};
            
MeiAttribute* OctaveMixIn::getOct() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("oct")) {
        throw AttributeNotFoundException("oct");
    }
    return b->m_Base.getAttribute("oct");
};
            
void OctaveMixIn::setOct(string _oct) {
    if(!b->m_Base.hasAttribute("oct")) {
        MeiAttribute * a = new MeiAttribute("oct", _oct);
        b->m_Base.addAttribute(a);
    }
};
            
bool OctaveMixIn::hasOct() {
    return b->m_Base.hasAttribute("oct");
};
            
OctavedefaultMixIn::OctavedefaultMixIn(BaseMeiElement *b) {
    this->b = b;
};
string OctavedefaultMixIn::getOctaveDefaultValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("octave.default")) {
        throw AttributeNotFoundException("octave.default");
    }
    return b->m_Base.getAttributeValue("octave.default");
};
            
MeiAttribute* OctavedefaultMixIn::getOctaveDefault() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("octave.default")) {
        throw AttributeNotFoundException("octave.default");
    }
    return b->m_Base.getAttribute("octave.default");
};
            
void OctavedefaultMixIn::setOctaveDefault(string _octavedefault) {
    if(!b->m_Base.hasAttribute("octave.default")) {
        MeiAttribute * a = new MeiAttribute("octave.default", _octavedefault);
        b->m_Base.addAttribute(a);
    }
};
            
bool OctavedefaultMixIn::hasOctaveDefault() {
    return b->m_Base.hasAttribute("octave.default");
};
            
OnelinestaffMixIn::OnelinestaffMixIn(BaseMeiElement *b) {
    this->b = b;
};
string OnelinestaffMixIn::getOnthelineValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ontheline")) {
        throw AttributeNotFoundException("ontheline");
    }
    return b->m_Base.getAttributeValue("ontheline");
};
            
MeiAttribute* OnelinestaffMixIn::getOntheline() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ontheline")) {
        throw AttributeNotFoundException("ontheline");
    }
    return b->m_Base.getAttribute("ontheline");
};
            
void OnelinestaffMixIn::setOntheline(string _ontheline) {
    if(!b->m_Base.hasAttribute("ontheline")) {
        MeiAttribute * a = new MeiAttribute("ontheline", _ontheline);
        b->m_Base.addAttribute(a);
    }
};
            
bool OnelinestaffMixIn::hasOntheline() {
    return b->m_Base.hasAttribute("ontheline");
};
            
OctavedisplacementMixIn::OctavedisplacementMixIn(BaseMeiElement *b) {
    this->b = b;
};
string OctavedisplacementMixIn::getDisValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dis")) {
        throw AttributeNotFoundException("dis");
    }
    return b->m_Base.getAttributeValue("dis");
};
            
MeiAttribute* OctavedisplacementMixIn::getDis() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dis")) {
        throw AttributeNotFoundException("dis");
    }
    return b->m_Base.getAttribute("dis");
};
            
void OctavedisplacementMixIn::setDis(string _dis) {
    if(!b->m_Base.hasAttribute("dis")) {
        MeiAttribute * a = new MeiAttribute("dis", _dis);
        b->m_Base.addAttribute(a);
    }
};
            
bool OctavedisplacementMixIn::hasDis() {
    return b->m_Base.hasAttribute("dis");
};
            
string OctavedisplacementMixIn::getDisPlaceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dis.place")) {
        throw AttributeNotFoundException("dis.place");
    }
    return b->m_Base.getAttributeValue("dis.place");
};
            
MeiAttribute* OctavedisplacementMixIn::getDisPlace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dis.place")) {
        throw AttributeNotFoundException("dis.place");
    }
    return b->m_Base.getAttribute("dis.place");
};
            
void OctavedisplacementMixIn::setDisPlace(string _displace) {
    if(!b->m_Base.hasAttribute("dis.place")) {
        MeiAttribute * a = new MeiAttribute("dis.place", _displace);
        b->m_Base.addAttribute(a);
    }
};
            
bool OctavedisplacementMixIn::hasDisPlace() {
    return b->m_Base.hasAttribute("dis.place");
};
            
ParticipantidentMixIn::ParticipantidentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ParticipantidentMixIn::getPlistValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->m_Base.getAttributeValue("plist");
};
            
MeiAttribute* ParticipantidentMixIn::getPlist() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->m_Base.getAttribute("plist");
};
            
void ParticipantidentMixIn::setPlist(string _plist) {
    if(!b->m_Base.hasAttribute("plist")) {
        MeiAttribute * a = new MeiAttribute("plist", _plist);
        b->m_Base.addAttribute(a);
    }
};
            
bool ParticipantidentMixIn::hasPlist() {
    return b->m_Base.hasAttribute("plist");
};
            
PitchMixIn::PitchMixIn(BaseMeiElement *b) {
    this->b = b;
};
string PitchMixIn::getPnameValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pname")) {
        throw AttributeNotFoundException("pname");
    }
    return b->m_Base.getAttributeValue("pname");
};
            
MeiAttribute* PitchMixIn::getPname() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pname")) {
        throw AttributeNotFoundException("pname");
    }
    return b->m_Base.getAttribute("pname");
};
            
void PitchMixIn::setPname(string _pname) {
    if(!b->m_Base.hasAttribute("pname")) {
        MeiAttribute * a = new MeiAttribute("pname", _pname);
        b->m_Base.addAttribute(a);
    }
};
            
bool PitchMixIn::hasPname() {
    return b->m_Base.hasAttribute("pname");
};
            
PlacementMixIn::PlacementMixIn(BaseMeiElement *b) {
    this->b = b;
};
string PlacementMixIn::getPlaceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->m_Base.getAttributeValue("place");
};
            
MeiAttribute* PlacementMixIn::getPlace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("place")) {
        throw AttributeNotFoundException("place");
    }
    return b->m_Base.getAttribute("place");
};
            
void PlacementMixIn::setPlace(string _place) {
    if(!b->m_Base.hasAttribute("place")) {
        MeiAttribute * a = new MeiAttribute("place", _place);
        b->m_Base.addAttribute(a);
    }
};
            
bool PlacementMixIn::hasPlace() {
    return b->m_Base.hasAttribute("place");
};
            
RelativesizeMixIn::RelativesizeMixIn(BaseMeiElement *b) {
    this->b = b;
};
string RelativesizeMixIn::getSizeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("size")) {
        throw AttributeNotFoundException("size");
    }
    return b->m_Base.getAttributeValue("size");
};
            
MeiAttribute* RelativesizeMixIn::getSize() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("size")) {
        throw AttributeNotFoundException("size");
    }
    return b->m_Base.getAttribute("size");
};
            
void RelativesizeMixIn::setSize(string _size) {
    if(!b->m_Base.hasAttribute("size")) {
        MeiAttribute * a = new MeiAttribute("size", _size);
        b->m_Base.addAttribute(a);
    }
};
            
bool RelativesizeMixIn::hasSize() {
    return b->m_Base.hasAttribute("size");
};
            
ResponsibilityMixIn::ResponsibilityMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ResponsibilityMixIn::getRespValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->m_Base.getAttributeValue("resp");
};
            
MeiAttribute* ResponsibilityMixIn::getResp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return b->m_Base.getAttribute("resp");
};
            
void ResponsibilityMixIn::setResp(string _resp) {
    if(!b->m_Base.hasAttribute("resp")) {
        MeiAttribute * a = new MeiAttribute("resp", _resp);
        b->m_Base.addAttribute(a);
    }
};
            
bool ResponsibilityMixIn::hasResp() {
    return b->m_Base.hasAttribute("resp");
};
            
ScalableMixIn::ScalableMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ScalableMixIn::getScaleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("scale")) {
        throw AttributeNotFoundException("scale");
    }
    return b->m_Base.getAttributeValue("scale");
};
            
MeiAttribute* ScalableMixIn::getScale() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("scale")) {
        throw AttributeNotFoundException("scale");
    }
    return b->m_Base.getAttribute("scale");
};
            
void ScalableMixIn::setScale(string _scale) {
    if(!b->m_Base.hasAttribute("scale")) {
        MeiAttribute * a = new MeiAttribute("scale", _scale);
        b->m_Base.addAttribute(a);
    }
};
            
bool ScalableMixIn::hasScale() {
    return b->m_Base.hasAttribute("scale");
};
            
SequenceMixIn::SequenceMixIn(BaseMeiElement *b) {
    this->b = b;
};
string SequenceMixIn::getSeqValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->m_Base.getAttributeValue("seq");
};
            
MeiAttribute* SequenceMixIn::getSeq() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->m_Base.getAttribute("seq");
};
            
void SequenceMixIn::setSeq(string _seq) {
    if(!b->m_Base.hasAttribute("seq")) {
        MeiAttribute * a = new MeiAttribute("seq", _seq);
        b->m_Base.addAttribute(a);
    }
};
            
bool SequenceMixIn::hasSeq() {
    return b->m_Base.hasAttribute("seq");
};
            
SlashcountMixIn::SlashcountMixIn(BaseMeiElement *b) {
    this->b = b;
};
string SlashcountMixIn::getSlashValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slash")) {
        throw AttributeNotFoundException("slash");
    }
    return b->m_Base.getAttributeValue("slash");
};
            
MeiAttribute* SlashcountMixIn::getSlash() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slash")) {
        throw AttributeNotFoundException("slash");
    }
    return b->m_Base.getAttribute("slash");
};
            
void SlashcountMixIn::setSlash(string _slash) {
    if(!b->m_Base.hasAttribute("slash")) {
        MeiAttribute * a = new MeiAttribute("slash", _slash);
        b->m_Base.addAttribute(a);
    }
};
            
bool SlashcountMixIn::hasSlash() {
    return b->m_Base.hasAttribute("slash");
};
            
StaffidentMixIn::StaffidentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string StaffidentMixIn::getStaffValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttributeValue("staff");
};
            
MeiAttribute* StaffidentMixIn::getStaff() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttribute("staff");
};
            
void StaffidentMixIn::setStaff(string _staff) {
    if(!b->m_Base.hasAttribute("staff")) {
        MeiAttribute * a = new MeiAttribute("staff", _staff);
        b->m_Base.addAttribute(a);
    }
};
            
bool StaffidentMixIn::hasStaff() {
    return b->m_Base.hasAttribute("staff");
};
            
StafflocMixIn::StafflocMixIn(BaseMeiElement *b) {
    this->b = b;
};
string StafflocMixIn::getLocValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("loc")) {
        throw AttributeNotFoundException("loc");
    }
    return b->m_Base.getAttributeValue("loc");
};
            
MeiAttribute* StafflocMixIn::getLoc() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("loc")) {
        throw AttributeNotFoundException("loc");
    }
    return b->m_Base.getAttribute("loc");
};
            
void StafflocMixIn::setLoc(string _loc) {
    if(!b->m_Base.hasAttribute("loc")) {
        MeiAttribute * a = new MeiAttribute("loc", _loc);
        b->m_Base.addAttribute(a);
    }
};
            
bool StafflocMixIn::hasLoc() {
    return b->m_Base.hasAttribute("loc");
};
            
StartidMixIn::StartidMixIn(BaseMeiElement *b) {
    this->b = b;
};
string StartidMixIn::getStartidValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startid")) {
        throw AttributeNotFoundException("startid");
    }
    return b->m_Base.getAttributeValue("startid");
};
            
MeiAttribute* StartidMixIn::getStartid() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startid")) {
        throw AttributeNotFoundException("startid");
    }
    return b->m_Base.getAttribute("startid");
};
            
void StartidMixIn::setStartid(string _startid) {
    if(!b->m_Base.hasAttribute("startid")) {
        MeiAttribute * a = new MeiAttribute("startid", _startid);
        b->m_Base.addAttribute(a);
    }
};
            
bool StartidMixIn::hasStartid() {
    return b->m_Base.hasAttribute("startid");
};
            
StemmedMixIn::StemmedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string StemmedMixIn::getStemDirValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.dir")) {
        throw AttributeNotFoundException("stem.dir");
    }
    return b->m_Base.getAttributeValue("stem.dir");
};
            
MeiAttribute* StemmedMixIn::getStemDir() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.dir")) {
        throw AttributeNotFoundException("stem.dir");
    }
    return b->m_Base.getAttribute("stem.dir");
};
            
void StemmedMixIn::setStemDir(string _stemdir) {
    if(!b->m_Base.hasAttribute("stem.dir")) {
        MeiAttribute * a = new MeiAttribute("stem.dir", _stemdir);
        b->m_Base.addAttribute(a);
    }
};
            
bool StemmedMixIn::hasStemDir() {
    return b->m_Base.hasAttribute("stem.dir");
};
            
string StemmedMixIn::getStemLenValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.len")) {
        throw AttributeNotFoundException("stem.len");
    }
    return b->m_Base.getAttributeValue("stem.len");
};
            
MeiAttribute* StemmedMixIn::getStemLen() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.len")) {
        throw AttributeNotFoundException("stem.len");
    }
    return b->m_Base.getAttribute("stem.len");
};
            
void StemmedMixIn::setStemLen(string _stemlen) {
    if(!b->m_Base.hasAttribute("stem.len")) {
        MeiAttribute * a = new MeiAttribute("stem.len", _stemlen);
        b->m_Base.addAttribute(a);
    }
};
            
bool StemmedMixIn::hasStemLen() {
    return b->m_Base.hasAttribute("stem.len");
};
            
string StemmedMixIn::getStemPosValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.pos")) {
        throw AttributeNotFoundException("stem.pos");
    }
    return b->m_Base.getAttributeValue("stem.pos");
};
            
MeiAttribute* StemmedMixIn::getStemPos() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.pos")) {
        throw AttributeNotFoundException("stem.pos");
    }
    return b->m_Base.getAttribute("stem.pos");
};
            
void StemmedMixIn::setStemPos(string _stempos) {
    if(!b->m_Base.hasAttribute("stem.pos")) {
        MeiAttribute * a = new MeiAttribute("stem.pos", _stempos);
        b->m_Base.addAttribute(a);
    }
};
            
bool StemmedMixIn::hasStemPos() {
    return b->m_Base.hasAttribute("stem.pos");
};
            
string StemmedMixIn::getStemXValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.x")) {
        throw AttributeNotFoundException("stem.x");
    }
    return b->m_Base.getAttributeValue("stem.x");
};
            
MeiAttribute* StemmedMixIn::getStemX() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.x")) {
        throw AttributeNotFoundException("stem.x");
    }
    return b->m_Base.getAttribute("stem.x");
};
            
void StemmedMixIn::setStemX(string _stemx) {
    if(!b->m_Base.hasAttribute("stem.x")) {
        MeiAttribute * a = new MeiAttribute("stem.x", _stemx);
        b->m_Base.addAttribute(a);
    }
};
            
bool StemmedMixIn::hasStemX() {
    return b->m_Base.hasAttribute("stem.x");
};
            
string StemmedMixIn::getStemYValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.y")) {
        throw AttributeNotFoundException("stem.y");
    }
    return b->m_Base.getAttributeValue("stem.y");
};
            
MeiAttribute* StemmedMixIn::getStemY() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.y")) {
        throw AttributeNotFoundException("stem.y");
    }
    return b->m_Base.getAttribute("stem.y");
};
            
void StemmedMixIn::setStemY(string _stemy) {
    if(!b->m_Base.hasAttribute("stem.y")) {
        MeiAttribute * a = new MeiAttribute("stem.y", _stemy);
        b->m_Base.addAttribute(a);
    }
};
            
bool StemmedMixIn::hasStemY() {
    return b->m_Base.hasAttribute("stem.y");
};
            
string StemmedMixIn::getStemModValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.mod")) {
        throw AttributeNotFoundException("stem.mod");
    }
    return b->m_Base.getAttributeValue("stem.mod");
};
            
MeiAttribute* StemmedMixIn::getStemMod() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.mod")) {
        throw AttributeNotFoundException("stem.mod");
    }
    return b->m_Base.getAttribute("stem.mod");
};
            
void StemmedMixIn::setStemMod(string _stemmod) {
    if(!b->m_Base.hasAttribute("stem.mod")) {
        MeiAttribute * a = new MeiAttribute("stem.mod", _stemmod);
        b->m_Base.addAttribute(a);
    }
};
            
bool StemmedMixIn::hasStemMod() {
    return b->m_Base.hasAttribute("stem.mod");
};
            
string StemmedMixIn::getStemWithValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.with")) {
        throw AttributeNotFoundException("stem.with");
    }
    return b->m_Base.getAttributeValue("stem.with");
};
            
MeiAttribute* StemmedMixIn::getStemWith() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("stem.with")) {
        throw AttributeNotFoundException("stem.with");
    }
    return b->m_Base.getAttribute("stem.with");
};
            
void StemmedMixIn::setStemWith(string _stemwith) {
    if(!b->m_Base.hasAttribute("stem.with")) {
        MeiAttribute * a = new MeiAttribute("stem.with", _stemwith);
        b->m_Base.addAttribute(a);
    }
};
            
bool StemmedMixIn::hasStemWith() {
    return b->m_Base.hasAttribute("stem.with");
};
            
SyltextMixIn::SyltextMixIn(BaseMeiElement *b) {
    this->b = b;
};
string SyltextMixIn::getSylValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("syl")) {
        throw AttributeNotFoundException("syl");
    }
    return b->m_Base.getAttributeValue("syl");
};
            
MeiAttribute* SyltextMixIn::getSyl() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("syl")) {
        throw AttributeNotFoundException("syl");
    }
    return b->m_Base.getAttribute("syl");
};
            
void SyltextMixIn::setSyl(string _syl) {
    if(!b->m_Base.hasAttribute("syl")) {
        MeiAttribute * a = new MeiAttribute("syl", _syl);
        b->m_Base.addAttribute(a);
    }
};
            
bool SyltextMixIn::hasSyl() {
    return b->m_Base.hasAttribute("syl");
};
            
TextstyleMixIn::TextstyleMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TextstyleMixIn::getTextFamValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.fam")) {
        throw AttributeNotFoundException("text.fam");
    }
    return b->m_Base.getAttributeValue("text.fam");
};
            
MeiAttribute* TextstyleMixIn::getTextFam() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.fam")) {
        throw AttributeNotFoundException("text.fam");
    }
    return b->m_Base.getAttribute("text.fam");
};
            
void TextstyleMixIn::setTextFam(string _textfam) {
    if(!b->m_Base.hasAttribute("text.fam")) {
        MeiAttribute * a = new MeiAttribute("text.fam", _textfam);
        b->m_Base.addAttribute(a);
    }
};
            
bool TextstyleMixIn::hasTextFam() {
    return b->m_Base.hasAttribute("text.fam");
};
            
string TextstyleMixIn::getTextNameValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.name")) {
        throw AttributeNotFoundException("text.name");
    }
    return b->m_Base.getAttributeValue("text.name");
};
            
MeiAttribute* TextstyleMixIn::getTextName() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.name")) {
        throw AttributeNotFoundException("text.name");
    }
    return b->m_Base.getAttribute("text.name");
};
            
void TextstyleMixIn::setTextName(string _textname) {
    if(!b->m_Base.hasAttribute("text.name")) {
        MeiAttribute * a = new MeiAttribute("text.name", _textname);
        b->m_Base.addAttribute(a);
    }
};
            
bool TextstyleMixIn::hasTextName() {
    return b->m_Base.hasAttribute("text.name");
};
            
string TextstyleMixIn::getTextSizeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.size")) {
        throw AttributeNotFoundException("text.size");
    }
    return b->m_Base.getAttributeValue("text.size");
};
            
MeiAttribute* TextstyleMixIn::getTextSize() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.size")) {
        throw AttributeNotFoundException("text.size");
    }
    return b->m_Base.getAttribute("text.size");
};
            
void TextstyleMixIn::setTextSize(string _textsize) {
    if(!b->m_Base.hasAttribute("text.size")) {
        MeiAttribute * a = new MeiAttribute("text.size", _textsize);
        b->m_Base.addAttribute(a);
    }
};
            
bool TextstyleMixIn::hasTextSize() {
    return b->m_Base.hasAttribute("text.size");
};
            
string TextstyleMixIn::getTextStyleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.style")) {
        throw AttributeNotFoundException("text.style");
    }
    return b->m_Base.getAttributeValue("text.style");
};
            
MeiAttribute* TextstyleMixIn::getTextStyle() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.style")) {
        throw AttributeNotFoundException("text.style");
    }
    return b->m_Base.getAttribute("text.style");
};
            
void TextstyleMixIn::setTextStyle(string _textstyle) {
    if(!b->m_Base.hasAttribute("text.style")) {
        MeiAttribute * a = new MeiAttribute("text.style", _textstyle);
        b->m_Base.addAttribute(a);
    }
};
            
bool TextstyleMixIn::hasTextStyle() {
    return b->m_Base.hasAttribute("text.style");
};
            
string TextstyleMixIn::getTextWeightValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.weight")) {
        throw AttributeNotFoundException("text.weight");
    }
    return b->m_Base.getAttributeValue("text.weight");
};
            
MeiAttribute* TextstyleMixIn::getTextWeight() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("text.weight")) {
        throw AttributeNotFoundException("text.weight");
    }
    return b->m_Base.getAttribute("text.weight");
};
            
void TextstyleMixIn::setTextWeight(string _textweight) {
    if(!b->m_Base.hasAttribute("text.weight")) {
        MeiAttribute * a = new MeiAttribute("text.weight", _textweight);
        b->m_Base.addAttribute(a);
    }
};
            
bool TextstyleMixIn::hasTextWeight() {
    return b->m_Base.hasAttribute("text.weight");
};
            
TimestampMusicalMixIn::TimestampMusicalMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TimestampMusicalMixIn::getTstampValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttributeValue("tstamp");
};
            
MeiAttribute* TimestampMusicalMixIn::getTstamp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttribute("tstamp");
};
            
void TimestampMusicalMixIn::setTstamp(string _tstamp) {
    if(!b->m_Base.hasAttribute("tstamp")) {
        MeiAttribute * a = new MeiAttribute("tstamp", _tstamp);
        b->m_Base.addAttribute(a);
    }
};
            
bool TimestampMusicalMixIn::hasTstamp() {
    return b->m_Base.hasAttribute("tstamp");
};
            
TimestampPerformedMixIn::TimestampPerformedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TimestampPerformedMixIn::getTstampGesValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->m_Base.getAttributeValue("tstamp.ges");
};
            
MeiAttribute* TimestampPerformedMixIn::getTstampGes() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->m_Base.getAttribute("tstamp.ges");
};
            
void TimestampPerformedMixIn::setTstampGes(string _tstampges) {
    if(!b->m_Base.hasAttribute("tstamp.ges")) {
        MeiAttribute * a = new MeiAttribute("tstamp.ges", _tstampges);
        b->m_Base.addAttribute(a);
    }
};
            
bool TimestampPerformedMixIn::hasTstampGes() {
    return b->m_Base.hasAttribute("tstamp.ges");
};
            
string TimestampPerformedMixIn::getTstampRealValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->m_Base.getAttributeValue("tstamp.real");
};
            
MeiAttribute* TimestampPerformedMixIn::getTstampReal() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->m_Base.getAttribute("tstamp.real");
};
            
void TimestampPerformedMixIn::setTstampReal(string _tstampreal) {
    if(!b->m_Base.hasAttribute("tstamp.real")) {
        MeiAttribute * a = new MeiAttribute("tstamp.real", _tstampreal);
        b->m_Base.addAttribute(a);
    }
};
            
bool TimestampPerformedMixIn::hasTstampReal() {
    return b->m_Base.hasAttribute("tstamp.real");
};
            
TranspositionMixIn::TranspositionMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TranspositionMixIn::getTransDiatValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("trans.diat")) {
        throw AttributeNotFoundException("trans.diat");
    }
    return b->m_Base.getAttributeValue("trans.diat");
};
            
MeiAttribute* TranspositionMixIn::getTransDiat() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("trans.diat")) {
        throw AttributeNotFoundException("trans.diat");
    }
    return b->m_Base.getAttribute("trans.diat");
};
            
void TranspositionMixIn::setTransDiat(string _transdiat) {
    if(!b->m_Base.hasAttribute("trans.diat")) {
        MeiAttribute * a = new MeiAttribute("trans.diat", _transdiat);
        b->m_Base.addAttribute(a);
    }
};
            
bool TranspositionMixIn::hasTransDiat() {
    return b->m_Base.hasAttribute("trans.diat");
};
            
string TranspositionMixIn::getTransSemiValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("trans.semi")) {
        throw AttributeNotFoundException("trans.semi");
    }
    return b->m_Base.getAttributeValue("trans.semi");
};
            
MeiAttribute* TranspositionMixIn::getTransSemi() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("trans.semi")) {
        throw AttributeNotFoundException("trans.semi");
    }
    return b->m_Base.getAttribute("trans.semi");
};
            
void TranspositionMixIn::setTransSemi(string _transsemi) {
    if(!b->m_Base.hasAttribute("trans.semi")) {
        MeiAttribute * a = new MeiAttribute("trans.semi", _transsemi);
        b->m_Base.addAttribute(a);
    }
};
            
bool TranspositionMixIn::hasTransSemi() {
    return b->m_Base.hasAttribute("trans.semi");
};
            
TupletpresentMixIn::TupletpresentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TupletpresentMixIn::getTupletValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tuplet")) {
        throw AttributeNotFoundException("tuplet");
    }
    return b->m_Base.getAttributeValue("tuplet");
};
            
MeiAttribute* TupletpresentMixIn::getTuplet() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tuplet")) {
        throw AttributeNotFoundException("tuplet");
    }
    return b->m_Base.getAttribute("tuplet");
};
            
void TupletpresentMixIn::setTuplet(string _tuplet) {
    if(!b->m_Base.hasAttribute("tuplet")) {
        MeiAttribute * a = new MeiAttribute("tuplet", _tuplet);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletpresentMixIn::hasTuplet() {
    return b->m_Base.hasAttribute("tuplet");
};
            
TypedMixIn::TypedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TypedMixIn::getTypeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->m_Base.getAttributeValue("type");
};
            
MeiAttribute* TypedMixIn::getType() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->m_Base.getAttribute("type");
};
            
void TypedMixIn::setType(string _type) {
    if(!b->m_Base.hasAttribute("type")) {
        MeiAttribute * a = new MeiAttribute("type", _type);
        b->m_Base.addAttribute(a);
    }
};
            
bool TypedMixIn::hasType() {
    return b->m_Base.hasAttribute("type");
};
            
string TypedMixIn::getSubtypeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("subtype")) {
        throw AttributeNotFoundException("subtype");
    }
    return b->m_Base.getAttributeValue("subtype");
};
            
MeiAttribute* TypedMixIn::getSubtype() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("subtype")) {
        throw AttributeNotFoundException("subtype");
    }
    return b->m_Base.getAttribute("subtype");
};
            
void TypedMixIn::setSubtype(string _subtype) {
    if(!b->m_Base.hasAttribute("subtype")) {
        MeiAttribute * a = new MeiAttribute("subtype", _subtype);
        b->m_Base.addAttribute(a);
    }
};
            
bool TypedMixIn::hasSubtype() {
    return b->m_Base.hasAttribute("subtype");
};
            
TypographyMixIn::TypographyMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TypographyMixIn::getFontfamValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontfam")) {
        throw AttributeNotFoundException("fontfam");
    }
    return b->m_Base.getAttributeValue("fontfam");
};
            
MeiAttribute* TypographyMixIn::getFontfam() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontfam")) {
        throw AttributeNotFoundException("fontfam");
    }
    return b->m_Base.getAttribute("fontfam");
};
            
void TypographyMixIn::setFontfam(string _fontfam) {
    if(!b->m_Base.hasAttribute("fontfam")) {
        MeiAttribute * a = new MeiAttribute("fontfam", _fontfam);
        b->m_Base.addAttribute(a);
    }
};
            
bool TypographyMixIn::hasFontfam() {
    return b->m_Base.hasAttribute("fontfam");
};
            
string TypographyMixIn::getFontnameValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontname")) {
        throw AttributeNotFoundException("fontname");
    }
    return b->m_Base.getAttributeValue("fontname");
};
            
MeiAttribute* TypographyMixIn::getFontname() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontname")) {
        throw AttributeNotFoundException("fontname");
    }
    return b->m_Base.getAttribute("fontname");
};
            
void TypographyMixIn::setFontname(string _fontname) {
    if(!b->m_Base.hasAttribute("fontname")) {
        MeiAttribute * a = new MeiAttribute("fontname", _fontname);
        b->m_Base.addAttribute(a);
    }
};
            
bool TypographyMixIn::hasFontname() {
    return b->m_Base.hasAttribute("fontname");
};
            
string TypographyMixIn::getFontsizeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontsize")) {
        throw AttributeNotFoundException("fontsize");
    }
    return b->m_Base.getAttributeValue("fontsize");
};
            
MeiAttribute* TypographyMixIn::getFontsize() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontsize")) {
        throw AttributeNotFoundException("fontsize");
    }
    return b->m_Base.getAttribute("fontsize");
};
            
void TypographyMixIn::setFontsize(string _fontsize) {
    if(!b->m_Base.hasAttribute("fontsize")) {
        MeiAttribute * a = new MeiAttribute("fontsize", _fontsize);
        b->m_Base.addAttribute(a);
    }
};
            
bool TypographyMixIn::hasFontsize() {
    return b->m_Base.hasAttribute("fontsize");
};
            
string TypographyMixIn::getFontstyleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontstyle")) {
        throw AttributeNotFoundException("fontstyle");
    }
    return b->m_Base.getAttributeValue("fontstyle");
};
            
MeiAttribute* TypographyMixIn::getFontstyle() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontstyle")) {
        throw AttributeNotFoundException("fontstyle");
    }
    return b->m_Base.getAttribute("fontstyle");
};
            
void TypographyMixIn::setFontstyle(string _fontstyle) {
    if(!b->m_Base.hasAttribute("fontstyle")) {
        MeiAttribute * a = new MeiAttribute("fontstyle", _fontstyle);
        b->m_Base.addAttribute(a);
    }
};
            
bool TypographyMixIn::hasFontstyle() {
    return b->m_Base.hasAttribute("fontstyle");
};
            
string TypographyMixIn::getFontweightValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontweight")) {
        throw AttributeNotFoundException("fontweight");
    }
    return b->m_Base.getAttributeValue("fontweight");
};
            
MeiAttribute* TypographyMixIn::getFontweight() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("fontweight")) {
        throw AttributeNotFoundException("fontweight");
    }
    return b->m_Base.getAttribute("fontweight");
};
            
void TypographyMixIn::setFontweight(string _fontweight) {
    if(!b->m_Base.hasAttribute("fontweight")) {
        MeiAttribute * a = new MeiAttribute("fontweight", _fontweight);
        b->m_Base.addAttribute(a);
    }
};
            
bool TypographyMixIn::hasFontweight() {
    return b->m_Base.hasAttribute("fontweight");
};
            
VisibilityMixIn::VisibilityMixIn(BaseMeiElement *b) {
    this->b = b;
};
string VisibilityMixIn::getVisibleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("visible")) {
        throw AttributeNotFoundException("visible");
    }
    return b->m_Base.getAttributeValue("visible");
};
            
MeiAttribute* VisibilityMixIn::getVisible() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("visible")) {
        throw AttributeNotFoundException("visible");
    }
    return b->m_Base.getAttribute("visible");
};
            
void VisibilityMixIn::setVisible(string _visible) {
    if(!b->m_Base.hasAttribute("visible")) {
        MeiAttribute * a = new MeiAttribute("visible", _visible);
        b->m_Base.addAttribute(a);
    }
};
            
bool VisibilityMixIn::hasVisible() {
    return b->m_Base.hasAttribute("visible");
};
            
VisualoffsetHoMixIn::VisualoffsetHoMixIn(BaseMeiElement *b) {
    this->b = b;
};
string VisualoffsetHoMixIn::getHoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ho")) {
        throw AttributeNotFoundException("ho");
    }
    return b->m_Base.getAttributeValue("ho");
};
            
MeiAttribute* VisualoffsetHoMixIn::getHo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ho")) {
        throw AttributeNotFoundException("ho");
    }
    return b->m_Base.getAttribute("ho");
};
            
void VisualoffsetHoMixIn::setHo(string _ho) {
    if(!b->m_Base.hasAttribute("ho")) {
        MeiAttribute * a = new MeiAttribute("ho", _ho);
        b->m_Base.addAttribute(a);
    }
};
            
bool VisualoffsetHoMixIn::hasHo() {
    return b->m_Base.hasAttribute("ho");
};
            
VisualoffsetToMixIn::VisualoffsetToMixIn(BaseMeiElement *b) {
    this->b = b;
};
string VisualoffsetToMixIn::getToValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->m_Base.getAttributeValue("to");
};
            
MeiAttribute* VisualoffsetToMixIn::getTo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->m_Base.getAttribute("to");
};
            
void VisualoffsetToMixIn::setTo(string _to) {
    if(!b->m_Base.hasAttribute("to")) {
        MeiAttribute * a = new MeiAttribute("to", _to);
        b->m_Base.addAttribute(a);
    }
};
            
bool VisualoffsetToMixIn::hasTo() {
    return b->m_Base.hasAttribute("to");
};
            
VisualoffsetVoMixIn::VisualoffsetVoMixIn(BaseMeiElement *b) {
    this->b = b;
};
string VisualoffsetVoMixIn::getVoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("vo")) {
        throw AttributeNotFoundException("vo");
    }
    return b->m_Base.getAttributeValue("vo");
};
            
MeiAttribute* VisualoffsetVoMixIn::getVo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("vo")) {
        throw AttributeNotFoundException("vo");
    }
    return b->m_Base.getAttribute("vo");
};
            
void VisualoffsetVoMixIn::setVo(string _vo) {
    if(!b->m_Base.hasAttribute("vo")) {
        MeiAttribute * a = new MeiAttribute("vo", _vo);
        b->m_Base.addAttribute(a);
    }
};
            
bool VisualoffsetVoMixIn::hasVo() {
    return b->m_Base.hasAttribute("vo");
};
            
Visualoffset2HoMixIn::Visualoffset2HoMixIn(BaseMeiElement *b) {
    this->b = b;
};
string Visualoffset2HoMixIn::getStarthoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startho")) {
        throw AttributeNotFoundException("startho");
    }
    return b->m_Base.getAttributeValue("startho");
};
            
MeiAttribute* Visualoffset2HoMixIn::getStartho() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startho")) {
        throw AttributeNotFoundException("startho");
    }
    return b->m_Base.getAttribute("startho");
};
            
void Visualoffset2HoMixIn::setStartho(string _startho) {
    if(!b->m_Base.hasAttribute("startho")) {
        MeiAttribute * a = new MeiAttribute("startho", _startho);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2HoMixIn::hasStartho() {
    return b->m_Base.hasAttribute("startho");
};
            
string Visualoffset2HoMixIn::getEndhoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endho")) {
        throw AttributeNotFoundException("endho");
    }
    return b->m_Base.getAttributeValue("endho");
};
            
MeiAttribute* Visualoffset2HoMixIn::getEndho() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endho")) {
        throw AttributeNotFoundException("endho");
    }
    return b->m_Base.getAttribute("endho");
};
            
void Visualoffset2HoMixIn::setEndho(string _endho) {
    if(!b->m_Base.hasAttribute("endho")) {
        MeiAttribute * a = new MeiAttribute("endho", _endho);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2HoMixIn::hasEndho() {
    return b->m_Base.hasAttribute("endho");
};
            
Visualoffset2ToMixIn::Visualoffset2ToMixIn(BaseMeiElement *b) {
    this->b = b;
};
string Visualoffset2ToMixIn::getStarttoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startto")) {
        throw AttributeNotFoundException("startto");
    }
    return b->m_Base.getAttributeValue("startto");
};
            
MeiAttribute* Visualoffset2ToMixIn::getStartto() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startto")) {
        throw AttributeNotFoundException("startto");
    }
    return b->m_Base.getAttribute("startto");
};
            
void Visualoffset2ToMixIn::setStartto(string _startto) {
    if(!b->m_Base.hasAttribute("startto")) {
        MeiAttribute * a = new MeiAttribute("startto", _startto);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2ToMixIn::hasStartto() {
    return b->m_Base.hasAttribute("startto");
};
            
string Visualoffset2ToMixIn::getEndtoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endto")) {
        throw AttributeNotFoundException("endto");
    }
    return b->m_Base.getAttributeValue("endto");
};
            
MeiAttribute* Visualoffset2ToMixIn::getEndto() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endto")) {
        throw AttributeNotFoundException("endto");
    }
    return b->m_Base.getAttribute("endto");
};
            
void Visualoffset2ToMixIn::setEndto(string _endto) {
    if(!b->m_Base.hasAttribute("endto")) {
        MeiAttribute * a = new MeiAttribute("endto", _endto);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2ToMixIn::hasEndto() {
    return b->m_Base.hasAttribute("endto");
};
            
XyMixIn::XyMixIn(BaseMeiElement *b) {
    this->b = b;
};
string XyMixIn::getXValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("x")) {
        throw AttributeNotFoundException("x");
    }
    return b->m_Base.getAttributeValue("x");
};
            
MeiAttribute* XyMixIn::getX() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("x")) {
        throw AttributeNotFoundException("x");
    }
    return b->m_Base.getAttribute("x");
};
            
void XyMixIn::setX(string _x) {
    if(!b->m_Base.hasAttribute("x")) {
        MeiAttribute * a = new MeiAttribute("x", _x);
        b->m_Base.addAttribute(a);
    }
};
            
bool XyMixIn::hasX() {
    return b->m_Base.hasAttribute("x");
};
            
string XyMixIn::getYValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("y")) {
        throw AttributeNotFoundException("y");
    }
    return b->m_Base.getAttributeValue("y");
};
            
MeiAttribute* XyMixIn::getY() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("y")) {
        throw AttributeNotFoundException("y");
    }
    return b->m_Base.getAttribute("y");
};
            
void XyMixIn::setY(string _y) {
    if(!b->m_Base.hasAttribute("y")) {
        MeiAttribute * a = new MeiAttribute("y", _y);
        b->m_Base.addAttribute(a);
    }
};
            
bool XyMixIn::hasY() {
    return b->m_Base.hasAttribute("y");
};
            
Xy2MixIn::Xy2MixIn(BaseMeiElement *b) {
    this->b = b;
};
string Xy2MixIn::getX2Value() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("x2")) {
        throw AttributeNotFoundException("x2");
    }
    return b->m_Base.getAttributeValue("x2");
};
            
MeiAttribute* Xy2MixIn::getX2() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("x2")) {
        throw AttributeNotFoundException("x2");
    }
    return b->m_Base.getAttribute("x2");
};
            
void Xy2MixIn::setX2(string _x2) {
    if(!b->m_Base.hasAttribute("x2")) {
        MeiAttribute * a = new MeiAttribute("x2", _x2);
        b->m_Base.addAttribute(a);
    }
};
            
bool Xy2MixIn::hasX2() {
    return b->m_Base.hasAttribute("x2");
};
            
string Xy2MixIn::getY2Value() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("y2")) {
        throw AttributeNotFoundException("y2");
    }
    return b->m_Base.getAttributeValue("y2");
};
            
MeiAttribute* Xy2MixIn::getY2() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("y2")) {
        throw AttributeNotFoundException("y2");
    }
    return b->m_Base.getAttribute("y2");
};
            
void Xy2MixIn::setY2(string _y2) {
    if(!b->m_Base.hasAttribute("y2")) {
        MeiAttribute * a = new MeiAttribute("y2", _y2);
        b->m_Base.addAttribute(a);
    }
};
            
bool Xy2MixIn::hasY2() {
    return b->m_Base.hasAttribute("y2");
};
            
LinkInternalMixIn::LinkInternalMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LinkInternalMixIn::getPlistValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->m_Base.getAttributeValue("plist");
};
            
MeiAttribute* LinkInternalMixIn::getPlist() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->m_Base.getAttribute("plist");
};
            
void LinkInternalMixIn::setPlist(string _plist) {
    if(!b->m_Base.hasAttribute("plist")) {
        MeiAttribute * a = new MeiAttribute("plist", _plist);
        b->m_Base.addAttribute(a);
    }
};
            
bool LinkInternalMixIn::hasPlist() {
    return b->m_Base.hasAttribute("plist");
};
            
NameMixIn::NameMixIn(BaseMeiElement *b) {
    this->b = b;
};
string NameMixIn::getNymrefValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("nymref")) {
        throw AttributeNotFoundException("nymref");
    }
    return b->m_Base.getAttributeValue("nymref");
};
            
MeiAttribute* NameMixIn::getNymref() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("nymref")) {
        throw AttributeNotFoundException("nymref");
    }
    return b->m_Base.getAttribute("nymref");
};
            
void NameMixIn::setNymref(string _nymref) {
    if(!b->m_Base.hasAttribute("nymref")) {
        MeiAttribute * a = new MeiAttribute("nymref", _nymref);
        b->m_Base.addAttribute(a);
    }
};
            
bool NameMixIn::hasNymref() {
    return b->m_Base.hasAttribute("nymref");
};
            
string NameMixIn::getRoleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->m_Base.getAttributeValue("role");
};
            
MeiAttribute* NameMixIn::getRole() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->m_Base.getAttribute("role");
};
            
void NameMixIn::setRole(string _role) {
    if(!b->m_Base.hasAttribute("role")) {
        MeiAttribute * a = new MeiAttribute("role", _role);
        b->m_Base.addAttribute(a);
    }
};
            
bool NameMixIn::hasRole() {
    return b->m_Base.hasAttribute("role");
};
            
string NameMixIn::getDbkeyValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dbkey")) {
        throw AttributeNotFoundException("dbkey");
    }
    return b->m_Base.getAttributeValue("dbkey");
};
            
MeiAttribute* NameMixIn::getDbkey() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dbkey")) {
        throw AttributeNotFoundException("dbkey");
    }
    return b->m_Base.getAttribute("dbkey");
};
            
void NameMixIn::setDbkey(string _dbkey) {
    if(!b->m_Base.hasAttribute("dbkey")) {
        MeiAttribute * a = new MeiAttribute("dbkey", _dbkey);
        b->m_Base.addAttribute(a);
    }
};
            
bool NameMixIn::hasDbkey() {
    return b->m_Base.hasAttribute("dbkey");
};
            
string NameMixIn::getAuthorityValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authority")) {
        throw AttributeNotFoundException("authority");
    }
    return b->m_Base.getAttributeValue("authority");
};
            
MeiAttribute* NameMixIn::getAuthority() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authority")) {
        throw AttributeNotFoundException("authority");
    }
    return b->m_Base.getAttribute("authority");
};
            
void NameMixIn::setAuthority(string _authority) {
    if(!b->m_Base.hasAttribute("authority")) {
        MeiAttribute * a = new MeiAttribute("authority", _authority);
        b->m_Base.addAttribute(a);
    }
};
            
bool NameMixIn::hasAuthority() {
    return b->m_Base.hasAttribute("authority");
};
            
string NameMixIn::getAuthuriValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authURI")) {
        throw AttributeNotFoundException("authURI");
    }
    return b->m_Base.getAttributeValue("authURI");
};
            
MeiAttribute* NameMixIn::getAuthuri() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("authURI")) {
        throw AttributeNotFoundException("authURI");
    }
    return b->m_Base.getAttribute("authURI");
};
            
void NameMixIn::setAuthuri(string _authURI) {
    if(!b->m_Base.hasAttribute("authURI")) {
        MeiAttribute * a = new MeiAttribute("authURI", _authURI);
        b->m_Base.addAttribute(a);
    }
};
            
bool NameMixIn::hasAuthuri() {
    return b->m_Base.hasAttribute("authURI");
};
            
StartendidMixIn::StartendidMixIn(BaseMeiElement *b) {
    this->b = b;
};
string StartendidMixIn::getEndidValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endid")) {
        throw AttributeNotFoundException("endid");
    }
    return b->m_Base.getAttributeValue("endid");
};
            
MeiAttribute* StartendidMixIn::getEndid() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endid")) {
        throw AttributeNotFoundException("endid");
    }
    return b->m_Base.getAttribute("endid");
};
            
void StartendidMixIn::setEndid(string _endid) {
    if(!b->m_Base.hasAttribute("endid")) {
        MeiAttribute * a = new MeiAttribute("endid", _endid);
        b->m_Base.addAttribute(a);
    }
};
            
bool StartendidMixIn::hasEndid() {
    return b->m_Base.hasAttribute("endid");
};
            
string StartendidMixIn::getStartidValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startid")) {
        throw AttributeNotFoundException("startid");
    }
    return b->m_Base.getAttributeValue("startid");
};
            
MeiAttribute* StartendidMixIn::getStartid() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startid")) {
        throw AttributeNotFoundException("startid");
    }
    return b->m_Base.getAttribute("startid");
};
            
void StartendidMixIn::setStartid(string _startid) {
    if(!b->m_Base.hasAttribute("startid")) {
        MeiAttribute * a = new MeiAttribute("startid", _startid);
        b->m_Base.addAttribute(a);
    }
};
            
bool StartendidMixIn::hasStartid() {
    return b->m_Base.hasAttribute("startid");
};
            
AccidentalArticulationSlurpresentTiepresentPitchedMixIn::AccidentalArticulationSlurpresentTiepresentPitchedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getAccidValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accid")) {
        throw AttributeNotFoundException("accid");
    }
    return b->m_Base.getAttributeValue("accid");
};
            
MeiAttribute* AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getAccid() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("accid")) {
        throw AttributeNotFoundException("accid");
    }
    return b->m_Base.getAttribute("accid");
};
            
void AccidentalArticulationSlurpresentTiepresentPitchedMixIn::setAccid(string _accid) {
    if(!b->m_Base.hasAttribute("accid")) {
        MeiAttribute * a = new MeiAttribute("accid", _accid);
        b->m_Base.addAttribute(a);
    }
};
            
bool AccidentalArticulationSlurpresentTiepresentPitchedMixIn::hasAccid() {
    return b->m_Base.hasAttribute("accid");
};
            
string AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getArticValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("artic")) {
        throw AttributeNotFoundException("artic");
    }
    return b->m_Base.getAttributeValue("artic");
};
            
MeiAttribute* AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getArtic() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("artic")) {
        throw AttributeNotFoundException("artic");
    }
    return b->m_Base.getAttribute("artic");
};
            
void AccidentalArticulationSlurpresentTiepresentPitchedMixIn::setArtic(string _artic) {
    if(!b->m_Base.hasAttribute("artic")) {
        MeiAttribute * a = new MeiAttribute("artic", _artic);
        b->m_Base.addAttribute(a);
    }
};
            
bool AccidentalArticulationSlurpresentTiepresentPitchedMixIn::hasArtic() {
    return b->m_Base.hasAttribute("artic");
};
            
string AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getSlurValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slur")) {
        throw AttributeNotFoundException("slur");
    }
    return b->m_Base.getAttributeValue("slur");
};
            
MeiAttribute* AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getSlur() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slur")) {
        throw AttributeNotFoundException("slur");
    }
    return b->m_Base.getAttribute("slur");
};
            
void AccidentalArticulationSlurpresentTiepresentPitchedMixIn::setSlur(string _slur) {
    if(!b->m_Base.hasAttribute("slur")) {
        MeiAttribute * a = new MeiAttribute("slur", _slur);
        b->m_Base.addAttribute(a);
    }
};
            
bool AccidentalArticulationSlurpresentTiepresentPitchedMixIn::hasSlur() {
    return b->m_Base.hasAttribute("slur");
};
            
string AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getTieValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tie")) {
        throw AttributeNotFoundException("tie");
    }
    return b->m_Base.getAttributeValue("tie");
};
            
MeiAttribute* AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getTie() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tie")) {
        throw AttributeNotFoundException("tie");
    }
    return b->m_Base.getAttribute("tie");
};
            
void AccidentalArticulationSlurpresentTiepresentPitchedMixIn::setTie(string _tie) {
    if(!b->m_Base.hasAttribute("tie")) {
        MeiAttribute * a = new MeiAttribute("tie", _tie);
        b->m_Base.addAttribute(a);
    }
};
            
bool AccidentalArticulationSlurpresentTiepresentPitchedMixIn::hasTie() {
    return b->m_Base.hasAttribute("tie");
};
            
string AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getOctValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("oct")) {
        throw AttributeNotFoundException("oct");
    }
    return b->m_Base.getAttributeValue("oct");
};
            
MeiAttribute* AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getOct() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("oct")) {
        throw AttributeNotFoundException("oct");
    }
    return b->m_Base.getAttribute("oct");
};
            
void AccidentalArticulationSlurpresentTiepresentPitchedMixIn::setOct(string _oct) {
    if(!b->m_Base.hasAttribute("oct")) {
        MeiAttribute * a = new MeiAttribute("oct", _oct);
        b->m_Base.addAttribute(a);
    }
};
            
bool AccidentalArticulationSlurpresentTiepresentPitchedMixIn::hasOct() {
    return b->m_Base.hasAttribute("oct");
};
            
string AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getPnameValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pname")) {
        throw AttributeNotFoundException("pname");
    }
    return b->m_Base.getAttributeValue("pname");
};
            
MeiAttribute* AccidentalArticulationSlurpresentTiepresentPitchedMixIn::getPname() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pname")) {
        throw AttributeNotFoundException("pname");
    }
    return b->m_Base.getAttribute("pname");
};
            
void AccidentalArticulationSlurpresentTiepresentPitchedMixIn::setPname(string _pname) {
    if(!b->m_Base.hasAttribute("pname")) {
        MeiAttribute * a = new MeiAttribute("pname", _pname);
        b->m_Base.addAttribute(a);
    }
};
            
bool AccidentalArticulationSlurpresentTiepresentPitchedMixIn::hasPname() {
    return b->m_Base.hasAttribute("pname");
};
            
Visualoffset2MixIn::Visualoffset2MixIn(BaseMeiElement *b) {
    this->b = b;
};
string Visualoffset2MixIn::getStartvoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startvo")) {
        throw AttributeNotFoundException("startvo");
    }
    return b->m_Base.getAttributeValue("startvo");
};
            
MeiAttribute* Visualoffset2MixIn::getStartvo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startvo")) {
        throw AttributeNotFoundException("startvo");
    }
    return b->m_Base.getAttribute("startvo");
};
            
void Visualoffset2MixIn::setStartvo(string _startvo) {
    if(!b->m_Base.hasAttribute("startvo")) {
        MeiAttribute * a = new MeiAttribute("startvo", _startvo);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2MixIn::hasStartvo() {
    return b->m_Base.hasAttribute("startvo");
};
            
string Visualoffset2MixIn::getEndvoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endvo")) {
        throw AttributeNotFoundException("endvo");
    }
    return b->m_Base.getAttributeValue("endvo");
};
            
MeiAttribute* Visualoffset2MixIn::getEndvo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endvo")) {
        throw AttributeNotFoundException("endvo");
    }
    return b->m_Base.getAttribute("endvo");
};
            
void Visualoffset2MixIn::setEndvo(string _endvo) {
    if(!b->m_Base.hasAttribute("endvo")) {
        MeiAttribute * a = new MeiAttribute("endvo", _endvo);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2MixIn::hasEndvo() {
    return b->m_Base.hasAttribute("endvo");
};
            
string Visualoffset2MixIn::getStarthoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startho")) {
        throw AttributeNotFoundException("startho");
    }
    return b->m_Base.getAttributeValue("startho");
};
            
MeiAttribute* Visualoffset2MixIn::getStartho() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startho")) {
        throw AttributeNotFoundException("startho");
    }
    return b->m_Base.getAttribute("startho");
};
            
void Visualoffset2MixIn::setStartho(string _startho) {
    if(!b->m_Base.hasAttribute("startho")) {
        MeiAttribute * a = new MeiAttribute("startho", _startho);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2MixIn::hasStartho() {
    return b->m_Base.hasAttribute("startho");
};
            
string Visualoffset2MixIn::getEndhoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endho")) {
        throw AttributeNotFoundException("endho");
    }
    return b->m_Base.getAttributeValue("endho");
};
            
MeiAttribute* Visualoffset2MixIn::getEndho() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endho")) {
        throw AttributeNotFoundException("endho");
    }
    return b->m_Base.getAttribute("endho");
};
            
void Visualoffset2MixIn::setEndho(string _endho) {
    if(!b->m_Base.hasAttribute("endho")) {
        MeiAttribute * a = new MeiAttribute("endho", _endho);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2MixIn::hasEndho() {
    return b->m_Base.hasAttribute("endho");
};
            
string Visualoffset2MixIn::getStarttoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startto")) {
        throw AttributeNotFoundException("startto");
    }
    return b->m_Base.getAttributeValue("startto");
};
            
MeiAttribute* Visualoffset2MixIn::getStartto() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("startto")) {
        throw AttributeNotFoundException("startto");
    }
    return b->m_Base.getAttribute("startto");
};
            
void Visualoffset2MixIn::setStartto(string _startto) {
    if(!b->m_Base.hasAttribute("startto")) {
        MeiAttribute * a = new MeiAttribute("startto", _startto);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2MixIn::hasStartto() {
    return b->m_Base.hasAttribute("startto");
};
            
string Visualoffset2MixIn::getEndtoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endto")) {
        throw AttributeNotFoundException("endto");
    }
    return b->m_Base.getAttributeValue("endto");
};
            
MeiAttribute* Visualoffset2MixIn::getEndto() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("endto")) {
        throw AttributeNotFoundException("endto");
    }
    return b->m_Base.getAttribute("endto");
};
            
void Visualoffset2MixIn::setEndto(string _endto) {
    if(!b->m_Base.hasAttribute("endto")) {
        MeiAttribute * a = new MeiAttribute("endto", _endto);
        b->m_Base.addAttribute(a);
    }
};
            
bool Visualoffset2MixIn::hasEndto() {
    return b->m_Base.hasAttribute("endto");
};
            
VisualoffsetMixIn::VisualoffsetMixIn(BaseMeiElement *b) {
    this->b = b;
};
string VisualoffsetMixIn::getHoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ho")) {
        throw AttributeNotFoundException("ho");
    }
    return b->m_Base.getAttributeValue("ho");
};
            
MeiAttribute* VisualoffsetMixIn::getHo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("ho")) {
        throw AttributeNotFoundException("ho");
    }
    return b->m_Base.getAttribute("ho");
};
            
void VisualoffsetMixIn::setHo(string _ho) {
    if(!b->m_Base.hasAttribute("ho")) {
        MeiAttribute * a = new MeiAttribute("ho", _ho);
        b->m_Base.addAttribute(a);
    }
};
            
bool VisualoffsetMixIn::hasHo() {
    return b->m_Base.hasAttribute("ho");
};
            
string VisualoffsetMixIn::getToValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->m_Base.getAttributeValue("to");
};
            
MeiAttribute* VisualoffsetMixIn::getTo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->m_Base.getAttribute("to");
};
            
void VisualoffsetMixIn::setTo(string _to) {
    if(!b->m_Base.hasAttribute("to")) {
        MeiAttribute * a = new MeiAttribute("to", _to);
        b->m_Base.addAttribute(a);
    }
};
            
bool VisualoffsetMixIn::hasTo() {
    return b->m_Base.hasAttribute("to");
};
            
string VisualoffsetMixIn::getVoValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("vo")) {
        throw AttributeNotFoundException("vo");
    }
    return b->m_Base.getAttributeValue("vo");
};
            
MeiAttribute* VisualoffsetMixIn::getVo() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("vo")) {
        throw AttributeNotFoundException("vo");
    }
    return b->m_Base.getAttribute("vo");
};
            
void VisualoffsetMixIn::setVo(string _vo) {
    if(!b->m_Base.hasAttribute("vo")) {
        MeiAttribute * a = new MeiAttribute("vo", _vo);
        b->m_Base.addAttribute(a);
    }
};
            
bool VisualoffsetMixIn::hasVo() {
    return b->m_Base.hasAttribute("vo");
};
            
EventMixIn::EventMixIn(BaseMeiElement *b) {
    this->b = b;
};
string EventMixIn::getLayerValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttributeValue("layer");
};
            
MeiAttribute* EventMixIn::getLayer() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttribute("layer");
};
            
void EventMixIn::setLayer(string _layer) {
    if(!b->m_Base.hasAttribute("layer")) {
        MeiAttribute * a = new MeiAttribute("layer", _layer);
        b->m_Base.addAttribute(a);
    }
};
            
bool EventMixIn::hasLayer() {
    return b->m_Base.hasAttribute("layer");
};
            
string EventMixIn::getStaffValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttributeValue("staff");
};
            
MeiAttribute* EventMixIn::getStaff() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttribute("staff");
};
            
void EventMixIn::setStaff(string _staff) {
    if(!b->m_Base.hasAttribute("staff")) {
        MeiAttribute * a = new MeiAttribute("staff", _staff);
        b->m_Base.addAttribute(a);
    }
};
            
bool EventMixIn::hasStaff() {
    return b->m_Base.hasAttribute("staff");
};
            
string EventMixIn::getTstampValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttributeValue("tstamp");
};
            
MeiAttribute* EventMixIn::getTstamp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttribute("tstamp");
};
            
void EventMixIn::setTstamp(string _tstamp) {
    if(!b->m_Base.hasAttribute("tstamp")) {
        MeiAttribute * a = new MeiAttribute("tstamp", _tstamp);
        b->m_Base.addAttribute(a);
    }
};
            
bool EventMixIn::hasTstamp() {
    return b->m_Base.hasAttribute("tstamp");
};
            
string EventMixIn::getTstampGesValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->m_Base.getAttributeValue("tstamp.ges");
};
            
MeiAttribute* EventMixIn::getTstampGes() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->m_Base.getAttribute("tstamp.ges");
};
            
void EventMixIn::setTstampGes(string _tstampges) {
    if(!b->m_Base.hasAttribute("tstamp.ges")) {
        MeiAttribute * a = new MeiAttribute("tstamp.ges", _tstampges);
        b->m_Base.addAttribute(a);
    }
};
            
bool EventMixIn::hasTstampGes() {
    return b->m_Base.hasAttribute("tstamp.ges");
};
            
string EventMixIn::getTstampRealValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->m_Base.getAttributeValue("tstamp.real");
};
            
MeiAttribute* EventMixIn::getTstampReal() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->m_Base.getAttribute("tstamp.real");
};
            
void EventMixIn::setTstampReal(string _tstampreal) {
    if(!b->m_Base.hasAttribute("tstamp.real")) {
        MeiAttribute * a = new MeiAttribute("tstamp.real", _tstampreal);
        b->m_Base.addAttribute(a);
    }
};
            
bool EventMixIn::hasTstampReal() {
    return b->m_Base.hasAttribute("tstamp.real");
};
            
ControleventMixIn::ControleventMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ControleventMixIn::getLayerValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttributeValue("layer");
};
            
MeiAttribute* ControleventMixIn::getLayer() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("layer")) {
        throw AttributeNotFoundException("layer");
    }
    return b->m_Base.getAttribute("layer");
};
            
void ControleventMixIn::setLayer(string _layer) {
    if(!b->m_Base.hasAttribute("layer")) {
        MeiAttribute * a = new MeiAttribute("layer", _layer);
        b->m_Base.addAttribute(a);
    }
};
            
bool ControleventMixIn::hasLayer() {
    return b->m_Base.hasAttribute("layer");
};
            
string ControleventMixIn::getPlistValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->m_Base.getAttributeValue("plist");
};
            
MeiAttribute* ControleventMixIn::getPlist() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("plist")) {
        throw AttributeNotFoundException("plist");
    }
    return b->m_Base.getAttribute("plist");
};
            
void ControleventMixIn::setPlist(string _plist) {
    if(!b->m_Base.hasAttribute("plist")) {
        MeiAttribute * a = new MeiAttribute("plist", _plist);
        b->m_Base.addAttribute(a);
    }
};
            
bool ControleventMixIn::hasPlist() {
    return b->m_Base.hasAttribute("plist");
};
            
string ControleventMixIn::getStaffValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttributeValue("staff");
};
            
MeiAttribute* ControleventMixIn::getStaff() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("staff")) {
        throw AttributeNotFoundException("staff");
    }
    return b->m_Base.getAttribute("staff");
};
            
void ControleventMixIn::setStaff(string _staff) {
    if(!b->m_Base.hasAttribute("staff")) {
        MeiAttribute * a = new MeiAttribute("staff", _staff);
        b->m_Base.addAttribute(a);
    }
};
            
bool ControleventMixIn::hasStaff() {
    return b->m_Base.hasAttribute("staff");
};
            
string ControleventMixIn::getTstampValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttributeValue("tstamp");
};
            
MeiAttribute* ControleventMixIn::getTstamp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp")) {
        throw AttributeNotFoundException("tstamp");
    }
    return b->m_Base.getAttribute("tstamp");
};
            
void ControleventMixIn::setTstamp(string _tstamp) {
    if(!b->m_Base.hasAttribute("tstamp")) {
        MeiAttribute * a = new MeiAttribute("tstamp", _tstamp);
        b->m_Base.addAttribute(a);
    }
};
            
bool ControleventMixIn::hasTstamp() {
    return b->m_Base.hasAttribute("tstamp");
};
            
string ControleventMixIn::getTstampGesValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->m_Base.getAttributeValue("tstamp.ges");
};
            
MeiAttribute* ControleventMixIn::getTstampGes() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.ges")) {
        throw AttributeNotFoundException("tstamp.ges");
    }
    return b->m_Base.getAttribute("tstamp.ges");
};
            
void ControleventMixIn::setTstampGes(string _tstampges) {
    if(!b->m_Base.hasAttribute("tstamp.ges")) {
        MeiAttribute * a = new MeiAttribute("tstamp.ges", _tstampges);
        b->m_Base.addAttribute(a);
    }
};
            
bool ControleventMixIn::hasTstampGes() {
    return b->m_Base.hasAttribute("tstamp.ges");
};
            
string ControleventMixIn::getTstampRealValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->m_Base.getAttributeValue("tstamp.real");
};
            
MeiAttribute* ControleventMixIn::getTstampReal() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tstamp.real")) {
        throw AttributeNotFoundException("tstamp.real");
    }
    return b->m_Base.getAttribute("tstamp.real");
};
            
void ControleventMixIn::setTstampReal(string _tstampreal) {
    if(!b->m_Base.hasAttribute("tstamp.real")) {
        MeiAttribute * a = new MeiAttribute("tstamp.real", _tstampreal);
        b->m_Base.addAttribute(a);
    }
};
            
bool ControleventMixIn::hasTstampReal() {
    return b->m_Base.hasAttribute("tstamp.real");
};
            