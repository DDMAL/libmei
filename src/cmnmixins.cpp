#include "cmnmixins.h"
using namespace std;

BeamedMixIn::BeamedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string BeamedMixIn::getBeamValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam")) {
        throw AttributeNotFoundException("beam");
    }
    return b->m_Base.getAttributeValue("beam");
};
            
MeiAttribute* BeamedMixIn::getBeam() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam")) {
        throw AttributeNotFoundException("beam");
    }
    return b->m_Base.getAttribute("beam");
};
            
void BeamedMixIn::setBeam(string _beam) {
    if(!b->m_Base.hasAttribute("beam")) {
        MeiAttribute * a = new MeiAttribute("beam", _beam);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamedMixIn::hasBeam() {
    return b->m_Base.hasAttribute("beam");
};
            
BeamedwithMixIn::BeamedwithMixIn(BaseMeiElement *b) {
    this->b = b;
};
string BeamedwithMixIn::getBeamWithValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.with")) {
        throw AttributeNotFoundException("beam.with");
    }
    return b->m_Base.getAttributeValue("beam.with");
};
            
MeiAttribute* BeamedwithMixIn::getBeamWith() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.with")) {
        throw AttributeNotFoundException("beam.with");
    }
    return b->m_Base.getAttribute("beam.with");
};
            
void BeamedwithMixIn::setBeamWith(string _beamwith) {
    if(!b->m_Base.hasAttribute("beam.with")) {
        MeiAttribute * a = new MeiAttribute("beam.with", _beamwith);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamedwithMixIn::hasBeamWith() {
    return b->m_Base.hasAttribute("beam.with");
};
            
BeamingLogMixIn::BeamingLogMixIn(BaseMeiElement *b) {
    this->b = b;
};
string BeamingLogMixIn::getBeamGroupValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.group")) {
        throw AttributeNotFoundException("beam.group");
    }
    return b->m_Base.getAttributeValue("beam.group");
};
            
MeiAttribute* BeamingLogMixIn::getBeamGroup() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.group")) {
        throw AttributeNotFoundException("beam.group");
    }
    return b->m_Base.getAttribute("beam.group");
};
            
void BeamingLogMixIn::setBeamGroup(string _beamgroup) {
    if(!b->m_Base.hasAttribute("beam.group")) {
        MeiAttribute * a = new MeiAttribute("beam.group", _beamgroup);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamingLogMixIn::hasBeamGroup() {
    return b->m_Base.hasAttribute("beam.group");
};
            
string BeamingLogMixIn::getBeamRestsValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.rests")) {
        throw AttributeNotFoundException("beam.rests");
    }
    return b->m_Base.getAttributeValue("beam.rests");
};
            
MeiAttribute* BeamingLogMixIn::getBeamRests() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("beam.rests")) {
        throw AttributeNotFoundException("beam.rests");
    }
    return b->m_Base.getAttribute("beam.rests");
};
            
void BeamingLogMixIn::setBeamRests(string _beamrests) {
    if(!b->m_Base.hasAttribute("beam.rests")) {
        MeiAttribute * a = new MeiAttribute("beam.rests", _beamrests);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamingLogMixIn::hasBeamRests() {
    return b->m_Base.hasAttribute("beam.rests");
};
            
BeamrendMixIn::BeamrendMixIn(BaseMeiElement *b) {
    this->b = b;
};
string BeamrendMixIn::getRendValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttributeValue("rend");
};
            
MeiAttribute* BeamrendMixIn::getRend() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->m_Base.getAttribute("rend");
};
            
void BeamrendMixIn::setRend(string _rend) {
    if(!b->m_Base.hasAttribute("rend")) {
        MeiAttribute * a = new MeiAttribute("rend", _rend);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamrendMixIn::hasRend() {
    return b->m_Base.hasAttribute("rend");
};
            
string BeamrendMixIn::getSlopeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slope")) {
        throw AttributeNotFoundException("slope");
    }
    return b->m_Base.getAttributeValue("slope");
};
            
MeiAttribute* BeamrendMixIn::getSlope() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slope")) {
        throw AttributeNotFoundException("slope");
    }
    return b->m_Base.getAttribute("slope");
};
            
void BeamrendMixIn::setSlope(string _slope) {
    if(!b->m_Base.hasAttribute("slope")) {
        MeiAttribute * a = new MeiAttribute("slope", _slope);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamrendMixIn::hasSlope() {
    return b->m_Base.hasAttribute("slope");
};
            
BeamsecondaryMixIn::BeamsecondaryMixIn(BaseMeiElement *b) {
    this->b = b;
};
string BeamsecondaryMixIn::getBreaksecValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("breaksec")) {
        throw AttributeNotFoundException("breaksec");
    }
    return b->m_Base.getAttributeValue("breaksec");
};
            
MeiAttribute* BeamsecondaryMixIn::getBreaksec() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("breaksec")) {
        throw AttributeNotFoundException("breaksec");
    }
    return b->m_Base.getAttribute("breaksec");
};
            
void BeamsecondaryMixIn::setBreaksec(string _breaksec) {
    if(!b->m_Base.hasAttribute("breaksec")) {
        MeiAttribute * a = new MeiAttribute("breaksec", _breaksec);
        b->m_Base.addAttribute(a);
    }
};
            
bool BeamsecondaryMixIn::hasBreaksec() {
    return b->m_Base.hasAttribute("breaksec");
};
            
CutoutMixIn::CutoutMixIn(BaseMeiElement *b) {
    this->b = b;
};
string CutoutMixIn::getCutoutValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cutout")) {
        throw AttributeNotFoundException("cutout");
    }
    return b->m_Base.getAttributeValue("cutout");
};
            
MeiAttribute* CutoutMixIn::getCutout() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("cutout")) {
        throw AttributeNotFoundException("cutout");
    }
    return b->m_Base.getAttribute("cutout");
};
            
void CutoutMixIn::setCutout(string _cutout) {
    if(!b->m_Base.hasAttribute("cutout")) {
        MeiAttribute * a = new MeiAttribute("cutout", _cutout);
        b->m_Base.addAttribute(a);
    }
};
            
bool CutoutMixIn::hasCutout() {
    return b->m_Base.hasAttribute("cutout");
};
            
ExpandableMixIn::ExpandableMixIn(BaseMeiElement *b) {
    this->b = b;
};
string ExpandableMixIn::getExpandValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("expand")) {
        throw AttributeNotFoundException("expand");
    }
    return b->m_Base.getAttributeValue("expand");
};
            
MeiAttribute* ExpandableMixIn::getExpand() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("expand")) {
        throw AttributeNotFoundException("expand");
    }
    return b->m_Base.getAttribute("expand");
};
            
void ExpandableMixIn::setExpand(string _expand) {
    if(!b->m_Base.hasAttribute("expand")) {
        MeiAttribute * a = new MeiAttribute("expand", _expand);
        b->m_Base.addAttribute(a);
    }
};
            
bool ExpandableMixIn::hasExpand() {
    return b->m_Base.hasAttribute("expand");
};
            
GracedMixIn::GracedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string GracedMixIn::getGraceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grace")) {
        throw AttributeNotFoundException("grace");
    }
    return b->m_Base.getAttributeValue("grace");
};
            
MeiAttribute* GracedMixIn::getGrace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grace")) {
        throw AttributeNotFoundException("grace");
    }
    return b->m_Base.getAttribute("grace");
};
            
void GracedMixIn::setGrace(string _grace) {
    if(!b->m_Base.hasAttribute("grace")) {
        MeiAttribute * a = new MeiAttribute("grace", _grace);
        b->m_Base.addAttribute(a);
    }
};
            
bool GracedMixIn::hasGrace() {
    return b->m_Base.hasAttribute("grace");
};
            
string GracedMixIn::getGraceTimeValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grace.time")) {
        throw AttributeNotFoundException("grace.time");
    }
    return b->m_Base.getAttributeValue("grace.time");
};
            
MeiAttribute* GracedMixIn::getGraceTime() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("grace.time")) {
        throw AttributeNotFoundException("grace.time");
    }
    return b->m_Base.getAttribute("grace.time");
};
            
void GracedMixIn::setGraceTime(string _gracetime) {
    if(!b->m_Base.hasAttribute("grace.time")) {
        MeiAttribute * a = new MeiAttribute("grace.time", _gracetime);
        b->m_Base.addAttribute(a);
    }
};
            
bool GracedMixIn::hasGraceTime() {
    return b->m_Base.hasAttribute("grace.time");
};
            
LvpresentMixIn::LvpresentMixIn(BaseMeiElement *b) {
    this->b = b;
};
string LvpresentMixIn::getLvValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lv")) {
        throw AttributeNotFoundException("lv");
    }
    return b->m_Base.getAttributeValue("lv");
};
            
MeiAttribute* LvpresentMixIn::getLv() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("lv")) {
        throw AttributeNotFoundException("lv");
    }
    return b->m_Base.getAttribute("lv");
};
            
void LvpresentMixIn::setLv(string _lv) {
    if(!b->m_Base.hasAttribute("lv")) {
        MeiAttribute * a = new MeiAttribute("lv", _lv);
        b->m_Base.addAttribute(a);
    }
};
            
bool LvpresentMixIn::hasLv() {
    return b->m_Base.hasAttribute("lv");
};
            
NumberedMixIn::NumberedMixIn(BaseMeiElement *b) {
    this->b = b;
};
string NumberedMixIn::getNumValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttributeValue("num");
};
            
MeiAttribute* NumberedMixIn::getNum() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num")) {
        throw AttributeNotFoundException("num");
    }
    return b->m_Base.getAttribute("num");
};
            
void NumberedMixIn::setNum(string _num) {
    if(!b->m_Base.hasAttribute("num")) {
        MeiAttribute * a = new MeiAttribute("num", _num);
        b->m_Base.addAttribute(a);
    }
};
            
bool NumberedMixIn::hasNum() {
    return b->m_Base.hasAttribute("num");
};
            
NumberplacementMixIn::NumberplacementMixIn(BaseMeiElement *b) {
    this->b = b;
};
string NumberplacementMixIn::getNumPlaceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.place")) {
        throw AttributeNotFoundException("num.place");
    }
    return b->m_Base.getAttributeValue("num.place");
};
            
MeiAttribute* NumberplacementMixIn::getNumPlace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.place")) {
        throw AttributeNotFoundException("num.place");
    }
    return b->m_Base.getAttribute("num.place");
};
            
void NumberplacementMixIn::setNumPlace(string _numplace) {
    if(!b->m_Base.hasAttribute("num.place")) {
        MeiAttribute * a = new MeiAttribute("num.place", _numplace);
        b->m_Base.addAttribute(a);
    }
};
            
bool NumberplacementMixIn::hasNumPlace() {
    return b->m_Base.hasAttribute("num.place");
};
            
string NumberplacementMixIn::getNumVisibleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.visible")) {
        throw AttributeNotFoundException("num.visible");
    }
    return b->m_Base.getAttributeValue("num.visible");
};
            
MeiAttribute* NumberplacementMixIn::getNumVisible() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.visible")) {
        throw AttributeNotFoundException("num.visible");
    }
    return b->m_Base.getAttribute("num.visible");
};
            
void NumberplacementMixIn::setNumVisible(string _numvisible) {
    if(!b->m_Base.hasAttribute("num.visible")) {
        MeiAttribute * a = new MeiAttribute("num.visible", _numvisible);
        b->m_Base.addAttribute(a);
    }
};
            
bool NumberplacementMixIn::hasNumVisible() {
    return b->m_Base.hasAttribute("num.visible");
};
            
SlurrendMixIn::SlurrendMixIn(BaseMeiElement *b) {
    this->b = b;
};
string SlurrendMixIn::getSlurRendValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slur.rend")) {
        throw AttributeNotFoundException("slur.rend");
    }
    return b->m_Base.getAttributeValue("slur.rend");
};
            
MeiAttribute* SlurrendMixIn::getSlurRend() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("slur.rend")) {
        throw AttributeNotFoundException("slur.rend");
    }
    return b->m_Base.getAttribute("slur.rend");
};
            
void SlurrendMixIn::setSlurRend(string _slurrend) {
    if(!b->m_Base.hasAttribute("slur.rend")) {
        MeiAttribute * a = new MeiAttribute("slur.rend", _slurrend);
        b->m_Base.addAttribute(a);
    }
};
            
bool SlurrendMixIn::hasSlurRend() {
    return b->m_Base.hasAttribute("slur.rend");
};
            
TierendMixIn::TierendMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TierendMixIn::getTieRendValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tie.rend")) {
        throw AttributeNotFoundException("tie.rend");
    }
    return b->m_Base.getAttributeValue("tie.rend");
};
            
MeiAttribute* TierendMixIn::getTieRend() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("tie.rend")) {
        throw AttributeNotFoundException("tie.rend");
    }
    return b->m_Base.getAttribute("tie.rend");
};
            
void TierendMixIn::setTieRend(string _tierend) {
    if(!b->m_Base.hasAttribute("tie.rend")) {
        MeiAttribute * a = new MeiAttribute("tie.rend", _tierend);
        b->m_Base.addAttribute(a);
    }
};
            
bool TierendMixIn::hasTieRend() {
    return b->m_Base.hasAttribute("tie.rend");
};
            
PianopedalsMixIn::PianopedalsMixIn(BaseMeiElement *b) {
    this->b = b;
};
string PianopedalsMixIn::getPedalStyleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pedal.style")) {
        throw AttributeNotFoundException("pedal.style");
    }
    return b->m_Base.getAttributeValue("pedal.style");
};
            
MeiAttribute* PianopedalsMixIn::getPedalStyle() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("pedal.style")) {
        throw AttributeNotFoundException("pedal.style");
    }
    return b->m_Base.getAttribute("pedal.style");
};
            
void PianopedalsMixIn::setPedalStyle(string _pedalstyle) {
    if(!b->m_Base.hasAttribute("pedal.style")) {
        MeiAttribute * a = new MeiAttribute("pedal.style", _pedalstyle);
        b->m_Base.addAttribute(a);
    }
};
            
bool PianopedalsMixIn::hasPedalStyle() {
    return b->m_Base.hasAttribute("pedal.style");
};
            
RehearsalMixIn::RehearsalMixIn(BaseMeiElement *b) {
    this->b = b;
};
string RehearsalMixIn::getRehEncloseValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reh.enclose")) {
        throw AttributeNotFoundException("reh.enclose");
    }
    return b->m_Base.getAttributeValue("reh.enclose");
};
            
MeiAttribute* RehearsalMixIn::getRehEnclose() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("reh.enclose")) {
        throw AttributeNotFoundException("reh.enclose");
    }
    return b->m_Base.getAttribute("reh.enclose");
};
            
void RehearsalMixIn::setRehEnclose(string _rehenclose) {
    if(!b->m_Base.hasAttribute("reh.enclose")) {
        MeiAttribute * a = new MeiAttribute("reh.enclose", _rehenclose);
        b->m_Base.addAttribute(a);
    }
};
            
bool RehearsalMixIn::hasRehEnclose() {
    return b->m_Base.hasAttribute("reh.enclose");
};
            
TupletAnlMixIn::TupletAnlMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TupletAnlMixIn::getCopyofValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("copyof")) {
        throw AttributeNotFoundException("copyof");
    }
    return b->m_Base.getAttributeValue("copyof");
};
            
MeiAttribute* TupletAnlMixIn::getCopyof() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("copyof")) {
        throw AttributeNotFoundException("copyof");
    }
    return b->m_Base.getAttribute("copyof");
};
            
void TupletAnlMixIn::setCopyof(string _copyof) {
    if(!b->m_Base.hasAttribute("copyof")) {
        MeiAttribute * a = new MeiAttribute("copyof", _copyof);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletAnlMixIn::hasCopyof() {
    return b->m_Base.hasAttribute("copyof");
};
            
string TupletAnlMixIn::getCorrespValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->m_Base.getAttributeValue("corresp");
};
            
MeiAttribute* TupletAnlMixIn::getCorresp() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("corresp")) {
        throw AttributeNotFoundException("corresp");
    }
    return b->m_Base.getAttribute("corresp");
};
            
void TupletAnlMixIn::setCorresp(string _corresp) {
    if(!b->m_Base.hasAttribute("corresp")) {
        MeiAttribute * a = new MeiAttribute("corresp", _corresp);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletAnlMixIn::hasCorresp() {
    return b->m_Base.hasAttribute("corresp");
};
            
string TupletAnlMixIn::getNextValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->m_Base.getAttributeValue("next");
};
            
MeiAttribute* TupletAnlMixIn::getNext() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("next")) {
        throw AttributeNotFoundException("next");
    }
    return b->m_Base.getAttribute("next");
};
            
void TupletAnlMixIn::setNext(string _next) {
    if(!b->m_Base.hasAttribute("next")) {
        MeiAttribute * a = new MeiAttribute("next", _next);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletAnlMixIn::hasNext() {
    return b->m_Base.hasAttribute("next");
};
            
string TupletAnlMixIn::getPrevValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->m_Base.getAttributeValue("prev");
};
            
MeiAttribute* TupletAnlMixIn::getPrev() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("prev")) {
        throw AttributeNotFoundException("prev");
    }
    return b->m_Base.getAttribute("prev");
};
            
void TupletAnlMixIn::setPrev(string _prev) {
    if(!b->m_Base.hasAttribute("prev")) {
        MeiAttribute * a = new MeiAttribute("prev", _prev);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletAnlMixIn::hasPrev() {
    return b->m_Base.hasAttribute("prev");
};
            
string TupletAnlMixIn::getSameasValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("sameas")) {
        throw AttributeNotFoundException("sameas");
    }
    return b->m_Base.getAttributeValue("sameas");
};
            
MeiAttribute* TupletAnlMixIn::getSameas() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("sameas")) {
        throw AttributeNotFoundException("sameas");
    }
    return b->m_Base.getAttribute("sameas");
};
            
void TupletAnlMixIn::setSameas(string _sameas) {
    if(!b->m_Base.hasAttribute("sameas")) {
        MeiAttribute * a = new MeiAttribute("sameas", _sameas);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletAnlMixIn::hasSameas() {
    return b->m_Base.hasAttribute("sameas");
};
            
string TupletAnlMixIn::getSynchValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->m_Base.getAttributeValue("synch");
};
            
MeiAttribute* TupletAnlMixIn::getSynch() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("synch")) {
        throw AttributeNotFoundException("synch");
    }
    return b->m_Base.getAttribute("synch");
};
            
void TupletAnlMixIn::setSynch(string _synch) {
    if(!b->m_Base.hasAttribute("synch")) {
        MeiAttribute * a = new MeiAttribute("synch", _synch);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletAnlMixIn::hasSynch() {
    return b->m_Base.hasAttribute("synch");
};
            
string TupletAnlMixIn::getWhenValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->m_Base.getAttributeValue("when");
};
            
MeiAttribute* TupletAnlMixIn::getWhen() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->m_Base.getAttribute("when");
};
            
void TupletAnlMixIn::setWhen(string _when) {
    if(!b->m_Base.hasAttribute("when")) {
        MeiAttribute * a = new MeiAttribute("when", _when);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletAnlMixIn::hasWhen() {
    return b->m_Base.hasAttribute("when");
};
            
TupletGesMixIn::TupletGesMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TupletGesMixIn::getDurGesValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.ges")) {
        throw AttributeNotFoundException("dur.ges");
    }
    return b->m_Base.getAttributeValue("dur.ges");
};
            
MeiAttribute* TupletGesMixIn::getDurGes() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.ges")) {
        throw AttributeNotFoundException("dur.ges");
    }
    return b->m_Base.getAttribute("dur.ges");
};
            
void TupletGesMixIn::setDurGes(string _durges) {
    if(!b->m_Base.hasAttribute("dur.ges")) {
        MeiAttribute * a = new MeiAttribute("dur.ges", _durges);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletGesMixIn::hasDurGes() {
    return b->m_Base.hasAttribute("dur.ges");
};
            
TupletVisMixIn::TupletVisMixIn(BaseMeiElement *b) {
    this->b = b;
};
string TupletVisMixIn::getBracketPlaceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bracket.place")) {
        throw AttributeNotFoundException("bracket.place");
    }
    return b->m_Base.getAttributeValue("bracket.place");
};
            
MeiAttribute* TupletVisMixIn::getBracketPlace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bracket.place")) {
        throw AttributeNotFoundException("bracket.place");
    }
    return b->m_Base.getAttribute("bracket.place");
};
            
void TupletVisMixIn::setBracketPlace(string _bracketplace) {
    if(!b->m_Base.hasAttribute("bracket.place")) {
        MeiAttribute * a = new MeiAttribute("bracket.place", _bracketplace);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletVisMixIn::hasBracketPlace() {
    return b->m_Base.hasAttribute("bracket.place");
};
            
string TupletVisMixIn::getBracketVisibleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bracket.visible")) {
        throw AttributeNotFoundException("bracket.visible");
    }
    return b->m_Base.getAttributeValue("bracket.visible");
};
            
MeiAttribute* TupletVisMixIn::getBracketVisible() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("bracket.visible")) {
        throw AttributeNotFoundException("bracket.visible");
    }
    return b->m_Base.getAttribute("bracket.visible");
};
            
void TupletVisMixIn::setBracketVisible(string _bracketvisible) {
    if(!b->m_Base.hasAttribute("bracket.visible")) {
        MeiAttribute * a = new MeiAttribute("bracket.visible", _bracketvisible);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletVisMixIn::hasBracketVisible() {
    return b->m_Base.hasAttribute("bracket.visible");
};
            
string TupletVisMixIn::getDurVisibleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.visible")) {
        throw AttributeNotFoundException("dur.visible");
    }
    return b->m_Base.getAttributeValue("dur.visible");
};
            
MeiAttribute* TupletVisMixIn::getDurVisible() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("dur.visible")) {
        throw AttributeNotFoundException("dur.visible");
    }
    return b->m_Base.getAttribute("dur.visible");
};
            
void TupletVisMixIn::setDurVisible(string _durvisible) {
    if(!b->m_Base.hasAttribute("dur.visible")) {
        MeiAttribute * a = new MeiAttribute("dur.visible", _durvisible);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletVisMixIn::hasDurVisible() {
    return b->m_Base.hasAttribute("dur.visible");
};
            
string TupletVisMixIn::getNumFormatValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.format")) {
        throw AttributeNotFoundException("num.format");
    }
    return b->m_Base.getAttributeValue("num.format");
};
            
MeiAttribute* TupletVisMixIn::getNumFormat() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.format")) {
        throw AttributeNotFoundException("num.format");
    }
    return b->m_Base.getAttribute("num.format");
};
            
void TupletVisMixIn::setNumFormat(string _numformat) {
    if(!b->m_Base.hasAttribute("num.format")) {
        MeiAttribute * a = new MeiAttribute("num.format", _numformat);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletVisMixIn::hasNumFormat() {
    return b->m_Base.hasAttribute("num.format");
};
            
string TupletVisMixIn::getNumPlaceValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.place")) {
        throw AttributeNotFoundException("num.place");
    }
    return b->m_Base.getAttributeValue("num.place");
};
            
MeiAttribute* TupletVisMixIn::getNumPlace() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.place")) {
        throw AttributeNotFoundException("num.place");
    }
    return b->m_Base.getAttribute("num.place");
};
            
void TupletVisMixIn::setNumPlace(string _numplace) {
    if(!b->m_Base.hasAttribute("num.place")) {
        MeiAttribute * a = new MeiAttribute("num.place", _numplace);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletVisMixIn::hasNumPlace() {
    return b->m_Base.hasAttribute("num.place");
};
            
string TupletVisMixIn::getNumVisibleValue() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.visible")) {
        throw AttributeNotFoundException("num.visible");
    }
    return b->m_Base.getAttributeValue("num.visible");
};
            
MeiAttribute* TupletVisMixIn::getNumVisible() throw(AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("num.visible")) {
        throw AttributeNotFoundException("num.visible");
    }
    return b->m_Base.getAttribute("num.visible");
};
            
void TupletVisMixIn::setNumVisible(string _numvisible) {
    if(!b->m_Base.hasAttribute("num.visible")) {
        MeiAttribute * a = new MeiAttribute("num.visible", _numvisible);
        b->m_Base.addAttribute(a);
    }
};
            
bool TupletVisMixIn::hasNumVisible() {
    return b->m_Base.hasAttribute("num.visible");
};
            