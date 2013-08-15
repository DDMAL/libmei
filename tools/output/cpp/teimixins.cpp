#include "teimixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AscribedMixIn::AscribedMixIn(MeiElement *b) {
    this->b = b;
};

mei::AscribedMixIn::~AscribedMixIn() {}
MeiAttribute* mei::AscribedMixIn::getWho() {
    if (!b->hasAttribute("who")) {
        throw AttributeNotFoundException("who");
    }
    return b->getAttribute("who");
};

void mei::AscribedMixIn::setWho(std::string _who) {
    MeiAttribute *a = new MeiAttribute("who", _who);
    b->addAttribute(a);
};

bool mei::AscribedMixIn::hasWho() {
    return b->hasAttribute("who");
};

void mei::AscribedMixIn::removeWho() {
    b->removeAttribute("who");
};

/* include <whomixin> */
mei::BreakingMixIn::BreakingMixIn(MeiElement *b) {
    this->b = b;
};

mei::BreakingMixIn::~BreakingMixIn() {}
MeiAttribute* mei::BreakingMixIn::getBreak() {
    if (!b->hasAttribute("break")) {
        throw AttributeNotFoundException("break");
    }
    return b->getAttribute("break");
};

void mei::BreakingMixIn::setBreak(std::string _break) {
    MeiAttribute *a = new MeiAttribute("break", _break);
    b->addAttribute(a);
};

bool mei::BreakingMixIn::hasBreak() {
    return b->hasAttribute("break");
};

void mei::BreakingMixIn::removeBreak() {
    b->removeAttribute("break");
};

/* include <breakmixin> */
mei::CReferencingMixIn::CReferencingMixIn(MeiElement *b) {
    this->b = b;
};

mei::CReferencingMixIn::~CReferencingMixIn() {}
MeiAttribute* mei::CReferencingMixIn::getCRef() {
    if (!b->hasAttribute("cRef")) {
        throw AttributeNotFoundException("cRef");
    }
    return b->getAttribute("cRef");
};

void mei::CReferencingMixIn::setCRef(std::string _cRef) {
    MeiAttribute *a = new MeiAttribute("cRef", _cRef);
    b->addAttribute(a);
};

bool mei::CReferencingMixIn::hasCRef() {
    return b->hasAttribute("cRef");
};

void mei::CReferencingMixIn::removeCRef() {
    b->removeAttribute("cRef");
};

/* include <cRefmixin> */
mei::CanonicalMixIn::CanonicalMixIn(MeiElement *b) {
    this->b = b;
};

mei::CanonicalMixIn::~CanonicalMixIn() {}
MeiAttribute* mei::CanonicalMixIn::getKey() {
    if (!b->hasAttribute("key")) {
        throw AttributeNotFoundException("key");
    }
    return b->getAttribute("key");
};

void mei::CanonicalMixIn::setKey(std::string _key) {
    MeiAttribute *a = new MeiAttribute("key", _key);
    b->addAttribute(a);
};

bool mei::CanonicalMixIn::hasKey() {
    return b->hasAttribute("key");
};

void mei::CanonicalMixIn::removeKey() {
    b->removeAttribute("key");
};
MeiAttribute* mei::CanonicalMixIn::getRef() {
    if (!b->hasAttribute("ref")) {
        throw AttributeNotFoundException("ref");
    }
    return b->getAttribute("ref");
};

void mei::CanonicalMixIn::setRef(std::string _ref) {
    MeiAttribute *a = new MeiAttribute("ref", _ref);
    b->addAttribute(a);
};

bool mei::CanonicalMixIn::hasRef() {
    return b->hasAttribute("ref");
};

void mei::CanonicalMixIn::removeRef() {
    b->removeAttribute("ref");
};

/* include <refmixin> */
mei::DamagedMixIn::DamagedMixIn(MeiElement *b) {
    this->b = b;
};

mei::DamagedMixIn::~DamagedMixIn() {}
MeiAttribute* mei::DamagedMixIn::getHand() {
    if (!b->hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->getAttribute("hand");
};

void mei::DamagedMixIn::setHand(std::string _hand) {
    MeiAttribute *a = new MeiAttribute("hand", _hand);
    b->addAttribute(a);
};

bool mei::DamagedMixIn::hasHand() {
    return b->hasAttribute("hand");
};

void mei::DamagedMixIn::removeHand() {
    b->removeAttribute("hand");
};
MeiAttribute* mei::DamagedMixIn::getAgent() {
    if (!b->hasAttribute("agent")) {
        throw AttributeNotFoundException("agent");
    }
    return b->getAttribute("agent");
};

void mei::DamagedMixIn::setAgent(std::string _agent) {
    MeiAttribute *a = new MeiAttribute("agent", _agent);
    b->addAttribute(a);
};

bool mei::DamagedMixIn::hasAgent() {
    return b->hasAttribute("agent");
};

void mei::DamagedMixIn::removeAgent() {
    b->removeAttribute("agent");
};
MeiAttribute* mei::DamagedMixIn::getDegree() {
    if (!b->hasAttribute("degree")) {
        throw AttributeNotFoundException("degree");
    }
    return b->getAttribute("degree");
};

void mei::DamagedMixIn::setDegree(std::string _degree) {
    MeiAttribute *a = new MeiAttribute("degree", _degree);
    b->addAttribute(a);
};

bool mei::DamagedMixIn::hasDegree() {
    return b->hasAttribute("degree");
};

void mei::DamagedMixIn::removeDegree() {
    b->removeAttribute("degree");
};
MeiAttribute* mei::DamagedMixIn::getGroup() {
    if (!b->hasAttribute("group")) {
        throw AttributeNotFoundException("group");
    }
    return b->getAttribute("group");
};

void mei::DamagedMixIn::setGroup(std::string _group) {
    MeiAttribute *a = new MeiAttribute("group", _group);
    b->addAttribute(a);
};

bool mei::DamagedMixIn::hasGroup() {
    return b->hasAttribute("group");
};

void mei::DamagedMixIn::removeGroup() {
    b->removeAttribute("group");
};

/* include <groupmixin> */
mei::DatableMixIn::DatableMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatableMixIn::~DatableMixIn() {}
MeiAttribute* mei::DatableMixIn::getCalendar() {
    if (!b->hasAttribute("calendar")) {
        throw AttributeNotFoundException("calendar");
    }
    return b->getAttribute("calendar");
};

void mei::DatableMixIn::setCalendar(std::string _calendar) {
    MeiAttribute *a = new MeiAttribute("calendar", _calendar);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasCalendar() {
    return b->hasAttribute("calendar");
};

void mei::DatableMixIn::removeCalendar() {
    b->removeAttribute("calendar");
};
MeiAttribute* mei::DatableMixIn::getPeriod() {
    if (!b->hasAttribute("period")) {
        throw AttributeNotFoundException("period");
    }
    return b->getAttribute("period");
};

void mei::DatableMixIn::setPeriod(std::string _period) {
    MeiAttribute *a = new MeiAttribute("period", _period);
    b->addAttribute(a);
};

bool mei::DatableMixIn::hasPeriod() {
    return b->hasAttribute("period");
};

void mei::DatableMixIn::removePeriod() {
    b->removeAttribute("period");
};

/* include <periodmixin> */
mei::DatableW3cMixIn::DatableW3cMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatableW3cMixIn::~DatableW3cMixIn() {}
MeiAttribute* mei::DatableW3cMixIn::getWhen() {
    if (!b->hasAttribute("when")) {
        throw AttributeNotFoundException("when");
    }
    return b->getAttribute("when");
};

void mei::DatableW3cMixIn::setWhen(std::string _when) {
    MeiAttribute *a = new MeiAttribute("when", _when);
    b->addAttribute(a);
};

bool mei::DatableW3cMixIn::hasWhen() {
    return b->hasAttribute("when");
};

void mei::DatableW3cMixIn::removeWhen() {
    b->removeAttribute("when");
};
MeiAttribute* mei::DatableW3cMixIn::getNotBefore() {
    if (!b->hasAttribute("notBefore")) {
        throw AttributeNotFoundException("notBefore");
    }
    return b->getAttribute("notBefore");
};

void mei::DatableW3cMixIn::setNotBefore(std::string _notBefore) {
    MeiAttribute *a = new MeiAttribute("notBefore", _notBefore);
    b->addAttribute(a);
};

bool mei::DatableW3cMixIn::hasNotBefore() {
    return b->hasAttribute("notBefore");
};

void mei::DatableW3cMixIn::removeNotBefore() {
    b->removeAttribute("notBefore");
};
MeiAttribute* mei::DatableW3cMixIn::getNotAfter() {
    if (!b->hasAttribute("notAfter")) {
        throw AttributeNotFoundException("notAfter");
    }
    return b->getAttribute("notAfter");
};

void mei::DatableW3cMixIn::setNotAfter(std::string _notAfter) {
    MeiAttribute *a = new MeiAttribute("notAfter", _notAfter);
    b->addAttribute(a);
};

bool mei::DatableW3cMixIn::hasNotAfter() {
    return b->hasAttribute("notAfter");
};

void mei::DatableW3cMixIn::removeNotAfter() {
    b->removeAttribute("notAfter");
};
MeiAttribute* mei::DatableW3cMixIn::getFrom() {
    if (!b->hasAttribute("from")) {
        throw AttributeNotFoundException("from");
    }
    return b->getAttribute("from");
};

void mei::DatableW3cMixIn::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    b->addAttribute(a);
};

bool mei::DatableW3cMixIn::hasFrom() {
    return b->hasAttribute("from");
};

void mei::DatableW3cMixIn::removeFrom() {
    b->removeAttribute("from");
};
MeiAttribute* mei::DatableW3cMixIn::getTo() {
    if (!b->hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return b->getAttribute("to");
};

void mei::DatableW3cMixIn::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    b->addAttribute(a);
};

bool mei::DatableW3cMixIn::hasTo() {
    return b->hasAttribute("to");
};

void mei::DatableW3cMixIn::removeTo() {
    b->removeAttribute("to");
};

/* include <tomixin> */
mei::DatcatMixIn::DatcatMixIn(MeiElement *b) {
    this->b = b;
};

mei::DatcatMixIn::~DatcatMixIn() {}
MeiAttribute* mei::DatcatMixIn::getDatcat() {
    if (!b->hasAttribute("datcat")) {
        throw AttributeNotFoundException("datcat");
    }
    return b->getAttribute("datcat");
};

void mei::DatcatMixIn::setDatcat(std::string _datcat) {
    MeiNamespace *s = new MeiNamespace("datcat", "http://www.isocat.org/ns/dcr");
    MeiAttribute *a = new MeiAttribute(s, "datcat", _datcat);
    b->addAttribute(a);
};

bool mei::DatcatMixIn::hasDatcat() {
    return b->hasAttribute("datcat");
};

void mei::DatcatMixIn::removeDatcat() {
    b->removeAttribute("datcat");
};
MeiAttribute* mei::DatcatMixIn::getValueDatcat() {
    if (!b->hasAttribute("valueDatcat")) {
        throw AttributeNotFoundException("valueDatcat");
    }
    return b->getAttribute("valueDatcat");
};

void mei::DatcatMixIn::setValueDatcat(std::string _valueDatcat) {
    MeiNamespace *s = new MeiNamespace("datcat", "http://www.isocat.org/ns/dcr");
    MeiAttribute *a = new MeiAttribute(s, "valueDatcat", _valueDatcat);
    b->addAttribute(a);
};

bool mei::DatcatMixIn::hasValueDatcat() {
    return b->hasAttribute("valueDatcat");
};

void mei::DatcatMixIn::removeValueDatcat() {
    b->removeAttribute("valueDatcat");
};

/* include <valueDatcatmixin> */
mei::DeclarableMixIn::DeclarableMixIn(MeiElement *b) {
    this->b = b;
};

mei::DeclarableMixIn::~DeclarableMixIn() {}
MeiAttribute* mei::DeclarableMixIn::getDefault() {
    if (!b->hasAttribute("default")) {
        throw AttributeNotFoundException("default");
    }
    return b->getAttribute("default");
};

void mei::DeclarableMixIn::setDefault(std::string _default) {
    MeiAttribute *a = new MeiAttribute("default", _default);
    b->addAttribute(a);
};

bool mei::DeclarableMixIn::hasDefault() {
    return b->hasAttribute("default");
};

void mei::DeclarableMixIn::removeDefault() {
    b->removeAttribute("default");
};

/* include <defaultmixin> */
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
mei::DimensionsMixIn::DimensionsMixIn(MeiElement *b) {
    this->b = b;
};

mei::DimensionsMixIn::~DimensionsMixIn() {}
MeiAttribute* mei::DimensionsMixIn::getUnit() {
    if (!b->hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return b->getAttribute("unit");
};

void mei::DimensionsMixIn::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::DimensionsMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::DimensionsMixIn::removeUnit() {
    b->removeAttribute("unit");
};
MeiAttribute* mei::DimensionsMixIn::getQuantity() {
    if (!b->hasAttribute("quantity")) {
        throw AttributeNotFoundException("quantity");
    }
    return b->getAttribute("quantity");
};

void mei::DimensionsMixIn::setQuantity(std::string _quantity) {
    MeiAttribute *a = new MeiAttribute("quantity", _quantity);
    b->addAttribute(a);
};

bool mei::DimensionsMixIn::hasQuantity() {
    return b->hasAttribute("quantity");
};

void mei::DimensionsMixIn::removeQuantity() {
    b->removeAttribute("quantity");
};
MeiAttribute* mei::DimensionsMixIn::getExtent() {
    if (!b->hasAttribute("extent")) {
        throw AttributeNotFoundException("extent");
    }
    return b->getAttribute("extent");
};

void mei::DimensionsMixIn::setExtent(std::string _extent) {
    MeiAttribute *a = new MeiAttribute("extent", _extent);
    b->addAttribute(a);
};

bool mei::DimensionsMixIn::hasExtent() {
    return b->hasAttribute("extent");
};

void mei::DimensionsMixIn::removeExtent() {
    b->removeAttribute("extent");
};
MeiAttribute* mei::DimensionsMixIn::getPrecision() {
    if (!b->hasAttribute("precision")) {
        throw AttributeNotFoundException("precision");
    }
    return b->getAttribute("precision");
};

void mei::DimensionsMixIn::setPrecision(std::string _precision) {
    MeiAttribute *a = new MeiAttribute("precision", _precision);
    b->addAttribute(a);
};

bool mei::DimensionsMixIn::hasPrecision() {
    return b->hasAttribute("precision");
};

void mei::DimensionsMixIn::removePrecision() {
    b->removeAttribute("precision");
};
MeiAttribute* mei::DimensionsMixIn::getScope() {
    if (!b->hasAttribute("scope")) {
        throw AttributeNotFoundException("scope");
    }
    return b->getAttribute("scope");
};

void mei::DimensionsMixIn::setScope(std::string _scope) {
    MeiAttribute *a = new MeiAttribute("scope", _scope);
    b->addAttribute(a);
};

bool mei::DimensionsMixIn::hasScope() {
    return b->hasAttribute("scope");
};

void mei::DimensionsMixIn::removeScope() {
    b->removeAttribute("scope");
};

/* include <scopemixin> */
mei::DivLikeMixIn::DivLikeMixIn(MeiElement *b) {
    this->b = b;
};

mei::DivLikeMixIn::~DivLikeMixIn() {}
MeiAttribute* mei::DivLikeMixIn::getOrg() {
    if (!b->hasAttribute("org")) {
        throw AttributeNotFoundException("org");
    }
    return b->getAttribute("org");
};

void mei::DivLikeMixIn::setOrg(std::string _org) {
    MeiAttribute *a = new MeiAttribute("org", _org);
    b->addAttribute(a);
};

bool mei::DivLikeMixIn::hasOrg() {
    return b->hasAttribute("org");
};

void mei::DivLikeMixIn::removeOrg() {
    b->removeAttribute("org");
};
MeiAttribute* mei::DivLikeMixIn::getSample() {
    if (!b->hasAttribute("sample")) {
        throw AttributeNotFoundException("sample");
    }
    return b->getAttribute("sample");
};

void mei::DivLikeMixIn::setSample(std::string _sample) {
    MeiAttribute *a = new MeiAttribute("sample", _sample);
    b->addAttribute(a);
};

bool mei::DivLikeMixIn::hasSample() {
    return b->hasAttribute("sample");
};

void mei::DivLikeMixIn::removeSample() {
    b->removeAttribute("sample");
};

/* include <samplemixin> */
mei::DocStatusMixIn::DocStatusMixIn(MeiElement *b) {
    this->b = b;
};

mei::DocStatusMixIn::~DocStatusMixIn() {}
MeiAttribute* mei::DocStatusMixIn::getStatus() {
    if (!b->hasAttribute("status")) {
        throw AttributeNotFoundException("status");
    }
    return b->getAttribute("status");
};

void mei::DocStatusMixIn::setStatus(std::string _status) {
    MeiAttribute *a = new MeiAttribute("status", _status);
    b->addAttribute(a);
};

bool mei::DocStatusMixIn::hasStatus() {
    return b->hasAttribute("status");
};

void mei::DocStatusMixIn::removeStatus() {
    b->removeAttribute("status");
};

/* include <statusmixin> */
mei::DurationIsoMixIn::DurationIsoMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationIsoMixIn::~DurationIsoMixIn() {}
MeiAttribute* mei::DurationIsoMixIn::getDur-iso() {
    if (!b->hasAttribute("dur-iso")) {
        throw AttributeNotFoundException("dur-iso");
    }
    return b->getAttribute("dur-iso");
};

void mei::DurationIsoMixIn::setDur-iso(std::string _dur-iso) {
    MeiAttribute *a = new MeiAttribute("dur-iso", _dur-iso);
    b->addAttribute(a);
};

bool mei::DurationIsoMixIn::hasDur-iso() {
    return b->hasAttribute("dur-iso");
};

void mei::DurationIsoMixIn::removeDur-iso() {
    b->removeAttribute("dur-iso");
};

/* include <dur-isomixin> */
mei::DurationW3cMixIn::DurationW3cMixIn(MeiElement *b) {
    this->b = b;
};

mei::DurationW3cMixIn::~DurationW3cMixIn() {}
MeiAttribute* mei::DurationW3cMixIn::getDur() {
    if (!b->hasAttribute("dur")) {
        throw AttributeNotFoundException("dur");
    }
    return b->getAttribute("dur");
};

void mei::DurationW3cMixIn::setDur(std::string _dur) {
    MeiAttribute *a = new MeiAttribute("dur", _dur);
    b->addAttribute(a);
};

bool mei::DurationW3cMixIn::hasDur() {
    return b->hasAttribute("dur");
};

void mei::DurationW3cMixIn::removeDur() {
    b->removeAttribute("dur");
};

/* include <durmixin> */
mei::EditLikeMixIn::EditLikeMixIn(MeiElement *b) {
    this->b = b;
};

mei::EditLikeMixIn::~EditLikeMixIn() {}
MeiAttribute* mei::EditLikeMixIn::getEvidence() {
    if (!b->hasAttribute("evidence")) {
        throw AttributeNotFoundException("evidence");
    }
    return b->getAttribute("evidence");
};

void mei::EditLikeMixIn::setEvidence(std::string _evidence) {
    MeiAttribute *a = new MeiAttribute("evidence", _evidence);
    b->addAttribute(a);
};

bool mei::EditLikeMixIn::hasEvidence() {
    return b->hasAttribute("evidence");
};

void mei::EditLikeMixIn::removeEvidence() {
    b->removeAttribute("evidence");
};
MeiAttribute* mei::EditLikeMixIn::getSource() {
    if (!b->hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->getAttribute("source");
};

void mei::EditLikeMixIn::setSource(std::string _source) {
    MeiAttribute *a = new MeiAttribute("source", _source);
    b->addAttribute(a);
};

bool mei::EditLikeMixIn::hasSource() {
    return b->hasAttribute("source");
};

void mei::EditLikeMixIn::removeSource() {
    b->removeAttribute("source");
};
MeiAttribute* mei::EditLikeMixIn::getInstant() {
    if (!b->hasAttribute("instant")) {
        throw AttributeNotFoundException("instant");
    }
    return b->getAttribute("instant");
};

void mei::EditLikeMixIn::setInstant(std::string _instant) {
    MeiAttribute *a = new MeiAttribute("instant", _instant);
    b->addAttribute(a);
};

bool mei::EditLikeMixIn::hasInstant() {
    return b->hasAttribute("instant");
};

void mei::EditLikeMixIn::removeInstant() {
    b->removeAttribute("instant");
};

/* include <instantmixin> */
mei::EditionMixIn::EditionMixIn(MeiElement *b) {
    this->b = b;
};

mei::EditionMixIn::~EditionMixIn() {}
MeiAttribute* mei::EditionMixIn::getEd() {
    if (!b->hasAttribute("ed")) {
        throw AttributeNotFoundException("ed");
    }
    return b->getAttribute("ed");
};

void mei::EditionMixIn::setEd(std::string _ed) {
    MeiAttribute *a = new MeiAttribute("ed", _ed);
    b->addAttribute(a);
};

bool mei::EditionMixIn::hasEd() {
    return b->hasAttribute("ed");
};

void mei::EditionMixIn::removeEd() {
    b->removeAttribute("ed");
};
MeiAttribute* mei::EditionMixIn::getEdRef() {
    if (!b->hasAttribute("edRef")) {
        throw AttributeNotFoundException("edRef");
    }
    return b->getAttribute("edRef");
};

void mei::EditionMixIn::setEdRef(std::string _edRef) {
    MeiAttribute *a = new MeiAttribute("edRef", _edRef);
    b->addAttribute(a);
};

bool mei::EditionMixIn::hasEdRef() {
    return b->hasAttribute("edRef");
};

void mei::EditionMixIn::removeEdRef() {
    b->removeAttribute("edRef");
};

/* include <edRefmixin> */
mei::FragmentableMixIn::FragmentableMixIn(MeiElement *b) {
    this->b = b;
};

mei::FragmentableMixIn::~FragmentableMixIn() {}
MeiAttribute* mei::FragmentableMixIn::getPart() {
    if (!b->hasAttribute("part")) {
        throw AttributeNotFoundException("part");
    }
    return b->getAttribute("part");
};

void mei::FragmentableMixIn::setPart(std::string _part) {
    MeiAttribute *a = new MeiAttribute("part", _part);
    b->addAttribute(a);
};

bool mei::FragmentableMixIn::hasPart() {
    return b->hasAttribute("part");
};

void mei::FragmentableMixIn::removePart() {
    b->removeAttribute("part");
};

/* include <partmixin> */
mei::GlobalMixIn::GlobalMixIn(MeiElement *b) {
    this->b = b;
};

mei::GlobalMixIn::~GlobalMixIn() {}
MeiAttribute* mei::GlobalMixIn::getId() {
    if (!b->hasAttribute("id")) {
        throw AttributeNotFoundException("id");
    }
    return b->getAttribute("id");
};

void mei::GlobalMixIn::setId(std::string _id) {
    MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(s, "id", _id);
    b->addAttribute(a);
};

bool mei::GlobalMixIn::hasId() {
    return b->hasAttribute("id");
};

void mei::GlobalMixIn::removeId() {
    b->removeAttribute("id");
};
MeiAttribute* mei::GlobalMixIn::getN() {
    if (!b->hasAttribute("n")) {
        throw AttributeNotFoundException("n");
    }
    return b->getAttribute("n");
};

void mei::GlobalMixIn::setN(std::string _n) {
    MeiAttribute *a = new MeiAttribute("n", _n);
    b->addAttribute(a);
};

bool mei::GlobalMixIn::hasN() {
    return b->hasAttribute("n");
};

void mei::GlobalMixIn::removeN() {
    b->removeAttribute("n");
};
MeiAttribute* mei::GlobalMixIn::getLang() {
    if (!b->hasAttribute("lang")) {
        throw AttributeNotFoundException("lang");
    }
    return b->getAttribute("lang");
};

void mei::GlobalMixIn::setLang(std::string _lang) {
    MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(s, "lang", _lang);
    b->addAttribute(a);
};

bool mei::GlobalMixIn::hasLang() {
    return b->hasAttribute("lang");
};

void mei::GlobalMixIn::removeLang() {
    b->removeAttribute("lang");
};
MeiAttribute* mei::GlobalMixIn::getRend() {
    if (!b->hasAttribute("rend")) {
        throw AttributeNotFoundException("rend");
    }
    return b->getAttribute("rend");
};

void mei::GlobalMixIn::setRend(std::string _rend) {
    MeiAttribute *a = new MeiAttribute("rend", _rend);
    b->addAttribute(a);
};

bool mei::GlobalMixIn::hasRend() {
    return b->hasAttribute("rend");
};

void mei::GlobalMixIn::removeRend() {
    b->removeAttribute("rend");
};
MeiAttribute* mei::GlobalMixIn::getStyle() {
    if (!b->hasAttribute("style")) {
        throw AttributeNotFoundException("style");
    }
    return b->getAttribute("style");
};

void mei::GlobalMixIn::setStyle(std::string _style) {
    MeiAttribute *a = new MeiAttribute("style", _style);
    b->addAttribute(a);
};

bool mei::GlobalMixIn::hasStyle() {
    return b->hasAttribute("style");
};

void mei::GlobalMixIn::removeStyle() {
    b->removeAttribute("style");
};
MeiAttribute* mei::GlobalMixIn::getRendition() {
    if (!b->hasAttribute("rendition")) {
        throw AttributeNotFoundException("rendition");
    }
    return b->getAttribute("rendition");
};

void mei::GlobalMixIn::setRendition(std::string _rendition) {
    MeiAttribute *a = new MeiAttribute("rendition", _rendition);
    b->addAttribute(a);
};

bool mei::GlobalMixIn::hasRendition() {
    return b->hasAttribute("rendition");
};

void mei::GlobalMixIn::removeRendition() {
    b->removeAttribute("rendition");
};
MeiAttribute* mei::GlobalMixIn::getBase() {
    if (!b->hasAttribute("base")) {
        throw AttributeNotFoundException("base");
    }
    return b->getAttribute("base");
};

void mei::GlobalMixIn::setBase(std::string _base) {
    MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(s, "base", _base);
    b->addAttribute(a);
};

bool mei::GlobalMixIn::hasBase() {
    return b->hasAttribute("base");
};

void mei::GlobalMixIn::removeBase() {
    b->removeAttribute("base");
};
MeiAttribute* mei::GlobalMixIn::getSpace() {
    if (!b->hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return b->getAttribute("space");
};

void mei::GlobalMixIn::setSpace(std::string _space) {
    MeiNamespace *s = new MeiNamespace("xml", "http://www.w3.org/XML/1998/namespace");
    MeiAttribute *a = new MeiAttribute(s, "space", _space);
    b->addAttribute(a);
};

bool mei::GlobalMixIn::hasSpace() {
    return b->hasAttribute("space");
};

void mei::GlobalMixIn::removeSpace() {
    b->removeAttribute("space");
};

/* include <spacemixin> */
mei::HandFeaturesMixIn::HandFeaturesMixIn(MeiElement *b) {
    this->b = b;
};

mei::HandFeaturesMixIn::~HandFeaturesMixIn() {}
MeiAttribute* mei::HandFeaturesMixIn::getScribe() {
    if (!b->hasAttribute("scribe")) {
        throw AttributeNotFoundException("scribe");
    }
    return b->getAttribute("scribe");
};

void mei::HandFeaturesMixIn::setScribe(std::string _scribe) {
    MeiAttribute *a = new MeiAttribute("scribe", _scribe);
    b->addAttribute(a);
};

bool mei::HandFeaturesMixIn::hasScribe() {
    return b->hasAttribute("scribe");
};

void mei::HandFeaturesMixIn::removeScribe() {
    b->removeAttribute("scribe");
};
MeiAttribute* mei::HandFeaturesMixIn::getScribeRef() {
    if (!b->hasAttribute("scribeRef")) {
        throw AttributeNotFoundException("scribeRef");
    }
    return b->getAttribute("scribeRef");
};

void mei::HandFeaturesMixIn::setScribeRef(std::string _scribeRef) {
    MeiAttribute *a = new MeiAttribute("scribeRef", _scribeRef);
    b->addAttribute(a);
};

bool mei::HandFeaturesMixIn::hasScribeRef() {
    return b->hasAttribute("scribeRef");
};

void mei::HandFeaturesMixIn::removeScribeRef() {
    b->removeAttribute("scribeRef");
};
MeiAttribute* mei::HandFeaturesMixIn::getScript() {
    if (!b->hasAttribute("script")) {
        throw AttributeNotFoundException("script");
    }
    return b->getAttribute("script");
};

void mei::HandFeaturesMixIn::setScript(std::string _script) {
    MeiAttribute *a = new MeiAttribute("script", _script);
    b->addAttribute(a);
};

bool mei::HandFeaturesMixIn::hasScript() {
    return b->hasAttribute("script");
};

void mei::HandFeaturesMixIn::removeScript() {
    b->removeAttribute("script");
};
MeiAttribute* mei::HandFeaturesMixIn::getScriptRef() {
    if (!b->hasAttribute("scriptRef")) {
        throw AttributeNotFoundException("scriptRef");
    }
    return b->getAttribute("scriptRef");
};

void mei::HandFeaturesMixIn::setScriptRef(std::string _scriptRef) {
    MeiAttribute *a = new MeiAttribute("scriptRef", _scriptRef);
    b->addAttribute(a);
};

bool mei::HandFeaturesMixIn::hasScriptRef() {
    return b->hasAttribute("scriptRef");
};

void mei::HandFeaturesMixIn::removeScriptRef() {
    b->removeAttribute("scriptRef");
};
MeiAttribute* mei::HandFeaturesMixIn::getMedium() {
    if (!b->hasAttribute("medium")) {
        throw AttributeNotFoundException("medium");
    }
    return b->getAttribute("medium");
};

void mei::HandFeaturesMixIn::setMedium(std::string _medium) {
    MeiAttribute *a = new MeiAttribute("medium", _medium);
    b->addAttribute(a);
};

bool mei::HandFeaturesMixIn::hasMedium() {
    return b->hasAttribute("medium");
};

void mei::HandFeaturesMixIn::removeMedium() {
    b->removeAttribute("medium");
};
MeiAttribute* mei::HandFeaturesMixIn::getScope() {
    if (!b->hasAttribute("scope")) {
        throw AttributeNotFoundException("scope");
    }
    return b->getAttribute("scope");
};

void mei::HandFeaturesMixIn::setScope(std::string _scope) {
    MeiAttribute *a = new MeiAttribute("scope", _scope);
    b->addAttribute(a);
};

bool mei::HandFeaturesMixIn::hasScope() {
    return b->hasAttribute("scope");
};

void mei::HandFeaturesMixIn::removeScope() {
    b->removeAttribute("scope");
};

/* include <scopemixin> */
mei::InternetMediaMixIn::InternetMediaMixIn(MeiElement *b) {
    this->b = b;
};

mei::InternetMediaMixIn::~InternetMediaMixIn() {}
MeiAttribute* mei::InternetMediaMixIn::getMimeType() {
    if (!b->hasAttribute("mimeType")) {
        throw AttributeNotFoundException("mimeType");
    }
    return b->getAttribute("mimeType");
};

void mei::InternetMediaMixIn::setMimeType(std::string _mimeType) {
    MeiAttribute *a = new MeiAttribute("mimeType", _mimeType);
    b->addAttribute(a);
};

bool mei::InternetMediaMixIn::hasMimeType() {
    return b->hasAttribute("mimeType");
};

void mei::InternetMediaMixIn::removeMimeType() {
    b->removeAttribute("mimeType");
};

/* include <mimeTypemixin> */
mei::InterpLikeMixIn::InterpLikeMixIn(MeiElement *b) {
    this->b = b;
};

mei::InterpLikeMixIn::~InterpLikeMixIn() {}
MeiAttribute* mei::InterpLikeMixIn::getType() {
    if (!b->hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return b->getAttribute("type");
};

void mei::InterpLikeMixIn::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    b->addAttribute(a);
};

bool mei::InterpLikeMixIn::hasType() {
    return b->hasAttribute("type");
};

void mei::InterpLikeMixIn::removeType() {
    b->removeAttribute("type");
};
MeiAttribute* mei::InterpLikeMixIn::getInst() {
    if (!b->hasAttribute("inst")) {
        throw AttributeNotFoundException("inst");
    }
    return b->getAttribute("inst");
};

void mei::InterpLikeMixIn::setInst(std::string _inst) {
    MeiAttribute *a = new MeiAttribute("inst", _inst);
    b->addAttribute(a);
};

bool mei::InterpLikeMixIn::hasInst() {
    return b->hasAttribute("inst");
};

void mei::InterpLikeMixIn::removeInst() {
    b->removeAttribute("inst");
};

/* include <instmixin> */
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
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    b->addAttribute(a);
};

bool mei::MeasurementMixIn::hasUnit() {
    return b->hasAttribute("unit");
};

void mei::MeasurementMixIn::removeUnit() {
    b->removeAttribute("unit");
};
MeiAttribute* mei::MeasurementMixIn::getQuantity() {
    if (!b->hasAttribute("quantity")) {
        throw AttributeNotFoundException("quantity");
    }
    return b->getAttribute("quantity");
};

void mei::MeasurementMixIn::setQuantity(std::string _quantity) {
    MeiAttribute *a = new MeiAttribute("quantity", _quantity);
    b->addAttribute(a);
};

bool mei::MeasurementMixIn::hasQuantity() {
    return b->hasAttribute("quantity");
};

void mei::MeasurementMixIn::removeQuantity() {
    b->removeAttribute("quantity");
};
MeiAttribute* mei::MeasurementMixIn::getCommodity() {
    if (!b->hasAttribute("commodity")) {
        throw AttributeNotFoundException("commodity");
    }
    return b->getAttribute("commodity");
};

void mei::MeasurementMixIn::setCommodity(std::string _commodity) {
    MeiAttribute *a = new MeiAttribute("commodity", _commodity);
    b->addAttribute(a);
};

bool mei::MeasurementMixIn::hasCommodity() {
    return b->hasAttribute("commodity");
};

void mei::MeasurementMixIn::removeCommodity() {
    b->removeAttribute("commodity");
};

/* include <commoditymixin> */
mei::MediaMixIn::MediaMixIn(MeiElement *b) {
    this->b = b;
};

mei::MediaMixIn::~MediaMixIn() {}
MeiAttribute* mei::MediaMixIn::getWidth() {
    if (!b->hasAttribute("width")) {
        throw AttributeNotFoundException("width");
    }
    return b->getAttribute("width");
};

void mei::MediaMixIn::setWidth(std::string _width) {
    MeiAttribute *a = new MeiAttribute("width", _width);
    b->addAttribute(a);
};

bool mei::MediaMixIn::hasWidth() {
    return b->hasAttribute("width");
};

void mei::MediaMixIn::removeWidth() {
    b->removeAttribute("width");
};
MeiAttribute* mei::MediaMixIn::getHeight() {
    if (!b->hasAttribute("height")) {
        throw AttributeNotFoundException("height");
    }
    return b->getAttribute("height");
};

void mei::MediaMixIn::setHeight(std::string _height) {
    MeiAttribute *a = new MeiAttribute("height", _height);
    b->addAttribute(a);
};

bool mei::MediaMixIn::hasHeight() {
    return b->hasAttribute("height");
};

void mei::MediaMixIn::removeHeight() {
    b->removeAttribute("height");
};
MeiAttribute* mei::MediaMixIn::getScale() {
    if (!b->hasAttribute("scale")) {
        throw AttributeNotFoundException("scale");
    }
    return b->getAttribute("scale");
};

void mei::MediaMixIn::setScale(std::string _scale) {
    MeiAttribute *a = new MeiAttribute("scale", _scale);
    b->addAttribute(a);
};

bool mei::MediaMixIn::hasScale() {
    return b->hasAttribute("scale");
};

void mei::MediaMixIn::removeScale() {
    b->removeAttribute("scale");
};

/* include <scalemixin> */
mei::NamingMixIn::NamingMixIn(MeiElement *b) {
    this->b = b;
};

mei::NamingMixIn::~NamingMixIn() {}
MeiAttribute* mei::NamingMixIn::getRole() {
    if (!b->hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->getAttribute("role");
};

void mei::NamingMixIn::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    b->addAttribute(a);
};

bool mei::NamingMixIn::hasRole() {
    return b->hasAttribute("role");
};

void mei::NamingMixIn::removeRole() {
    b->removeAttribute("role");
};
MeiAttribute* mei::NamingMixIn::getNymRef() {
    if (!b->hasAttribute("nymRef")) {
        throw AttributeNotFoundException("nymRef");
    }
    return b->getAttribute("nymRef");
};

void mei::NamingMixIn::setNymRef(std::string _nymRef) {
    MeiAttribute *a = new MeiAttribute("nymRef", _nymRef);
    b->addAttribute(a);
};

bool mei::NamingMixIn::hasNymRef() {
    return b->hasAttribute("nymRef");
};

void mei::NamingMixIn::removeNymRef() {
    b->removeAttribute("nymRef");
};

/* include <nymRefmixin> */
mei::PersonalMixIn::PersonalMixIn(MeiElement *b) {
    this->b = b;
};

mei::PersonalMixIn::~PersonalMixIn() {}
MeiAttribute* mei::PersonalMixIn::getFull() {
    if (!b->hasAttribute("full")) {
        throw AttributeNotFoundException("full");
    }
    return b->getAttribute("full");
};

void mei::PersonalMixIn::setFull(std::string _full) {
    MeiAttribute *a = new MeiAttribute("full", _full);
    b->addAttribute(a);
};

bool mei::PersonalMixIn::hasFull() {
    return b->hasAttribute("full");
};

void mei::PersonalMixIn::removeFull() {
    b->removeAttribute("full");
};
MeiAttribute* mei::PersonalMixIn::getSort() {
    if (!b->hasAttribute("sort")) {
        throw AttributeNotFoundException("sort");
    }
    return b->getAttribute("sort");
};

void mei::PersonalMixIn::setSort(std::string _sort) {
    MeiAttribute *a = new MeiAttribute("sort", _sort);
    b->addAttribute(a);
};

bool mei::PersonalMixIn::hasSort() {
    return b->hasAttribute("sort");
};

void mei::PersonalMixIn::removeSort() {
    b->removeAttribute("sort");
};

/* include <sortmixin> */
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
mei::PointingMixIn::PointingMixIn(MeiElement *b) {
    this->b = b;
};

mei::PointingMixIn::~PointingMixIn() {}
MeiAttribute* mei::PointingMixIn::getTargetLang() {
    if (!b->hasAttribute("targetLang")) {
        throw AttributeNotFoundException("targetLang");
    }
    return b->getAttribute("targetLang");
};

void mei::PointingMixIn::setTargetLang(std::string _targetLang) {
    MeiAttribute *a = new MeiAttribute("targetLang", _targetLang);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasTargetLang() {
    return b->hasAttribute("targetLang");
};

void mei::PointingMixIn::removeTargetLang() {
    b->removeAttribute("targetLang");
};
MeiAttribute* mei::PointingMixIn::getTarget() {
    if (!b->hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return b->getAttribute("target");
};

void mei::PointingMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasTarget() {
    return b->hasAttribute("target");
};

void mei::PointingMixIn::removeTarget() {
    b->removeAttribute("target");
};
MeiAttribute* mei::PointingMixIn::getEvaluate() {
    if (!b->hasAttribute("evaluate")) {
        throw AttributeNotFoundException("evaluate");
    }
    return b->getAttribute("evaluate");
};

void mei::PointingMixIn::setEvaluate(std::string _evaluate) {
    MeiAttribute *a = new MeiAttribute("evaluate", _evaluate);
    b->addAttribute(a);
};

bool mei::PointingMixIn::hasEvaluate() {
    return b->hasAttribute("evaluate");
};

void mei::PointingMixIn::removeEvaluate() {
    b->removeAttribute("evaluate");
};

/* include <evaluatemixin> */
mei::PointingGroupMixIn::PointingGroupMixIn(MeiElement *b) {
    this->b = b;
};

mei::PointingGroupMixIn::~PointingGroupMixIn() {}
MeiAttribute* mei::PointingGroupMixIn::getDomains() {
    if (!b->hasAttribute("domains")) {
        throw AttributeNotFoundException("domains");
    }
    return b->getAttribute("domains");
};

void mei::PointingGroupMixIn::setDomains(std::string _domains) {
    MeiAttribute *a = new MeiAttribute("domains", _domains);
    b->addAttribute(a);
};

bool mei::PointingGroupMixIn::hasDomains() {
    return b->hasAttribute("domains");
};

void mei::PointingGroupMixIn::removeDomains() {
    b->removeAttribute("domains");
};
MeiAttribute* mei::PointingGroupMixIn::getTargFunc() {
    if (!b->hasAttribute("targFunc")) {
        throw AttributeNotFoundException("targFunc");
    }
    return b->getAttribute("targFunc");
};

void mei::PointingGroupMixIn::setTargFunc(std::string _targFunc) {
    MeiAttribute *a = new MeiAttribute("targFunc", _targFunc);
    b->addAttribute(a);
};

bool mei::PointingGroupMixIn::hasTargFunc() {
    return b->hasAttribute("targFunc");
};

void mei::PointingGroupMixIn::removeTargFunc() {
    b->removeAttribute("targFunc");
};

/* include <targFuncmixin> */
mei::RangingMixIn::RangingMixIn(MeiElement *b) {
    this->b = b;
};

mei::RangingMixIn::~RangingMixIn() {}
MeiAttribute* mei::RangingMixIn::getAtLeast() {
    if (!b->hasAttribute("atLeast")) {
        throw AttributeNotFoundException("atLeast");
    }
    return b->getAttribute("atLeast");
};

void mei::RangingMixIn::setAtLeast(std::string _atLeast) {
    MeiAttribute *a = new MeiAttribute("atLeast", _atLeast);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasAtLeast() {
    return b->hasAttribute("atLeast");
};

void mei::RangingMixIn::removeAtLeast() {
    b->removeAttribute("atLeast");
};
MeiAttribute* mei::RangingMixIn::getAtMost() {
    if (!b->hasAttribute("atMost")) {
        throw AttributeNotFoundException("atMost");
    }
    return b->getAttribute("atMost");
};

void mei::RangingMixIn::setAtMost(std::string _atMost) {
    MeiAttribute *a = new MeiAttribute("atMost", _atMost);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasAtMost() {
    return b->hasAttribute("atMost");
};

void mei::RangingMixIn::removeAtMost() {
    b->removeAttribute("atMost");
};
MeiAttribute* mei::RangingMixIn::getMin() {
    if (!b->hasAttribute("min")) {
        throw AttributeNotFoundException("min");
    }
    return b->getAttribute("min");
};

void mei::RangingMixIn::setMin(std::string _min) {
    MeiAttribute *a = new MeiAttribute("min", _min);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasMin() {
    return b->hasAttribute("min");
};

void mei::RangingMixIn::removeMin() {
    b->removeAttribute("min");
};
MeiAttribute* mei::RangingMixIn::getMax() {
    if (!b->hasAttribute("max")) {
        throw AttributeNotFoundException("max");
    }
    return b->getAttribute("max");
};

void mei::RangingMixIn::setMax(std::string _max) {
    MeiAttribute *a = new MeiAttribute("max", _max);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasMax() {
    return b->hasAttribute("max");
};

void mei::RangingMixIn::removeMax() {
    b->removeAttribute("max");
};
MeiAttribute* mei::RangingMixIn::getConfidence() {
    if (!b->hasAttribute("confidence")) {
        throw AttributeNotFoundException("confidence");
    }
    return b->getAttribute("confidence");
};

void mei::RangingMixIn::setConfidence(std::string _confidence) {
    MeiAttribute *a = new MeiAttribute("confidence", _confidence);
    b->addAttribute(a);
};

bool mei::RangingMixIn::hasConfidence() {
    return b->hasAttribute("confidence");
};

void mei::RangingMixIn::removeConfidence() {
    b->removeAttribute("confidence");
};

/* include <confidencemixin> */
mei::ReadFromMixIn::ReadFromMixIn(MeiElement *b) {
    this->b = b;
};

mei::ReadFromMixIn::~ReadFromMixIn() {}
MeiAttribute* mei::ReadFromMixIn::getSource() {
    if (!b->hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->getAttribute("source");
};

void mei::ReadFromMixIn::setSource(std::string _source) {
    MeiAttribute *a = new MeiAttribute("source", _source);
    b->addAttribute(a);
};

bool mei::ReadFromMixIn::hasSource() {
    return b->hasAttribute("source");
};

void mei::ReadFromMixIn::removeSource() {
    b->removeAttribute("source");
};

/* include <sourcemixin> */
mei::ResourcedMixIn::ResourcedMixIn(MeiElement *b) {
    this->b = b;
};

mei::ResourcedMixIn::~ResourcedMixIn() {}
MeiAttribute* mei::ResourcedMixIn::getUrl() {
    if (!b->hasAttribute("url")) {
        throw AttributeNotFoundException("url");
    }
    return b->getAttribute("url");
};

void mei::ResourcedMixIn::setUrl(std::string _url) {
    MeiAttribute *a = new MeiAttribute("url", _url);
    b->addAttribute(a);
};

bool mei::ResourcedMixIn::hasUrl() {
    return b->hasAttribute("url");
};

void mei::ResourcedMixIn::removeUrl() {
    b->removeAttribute("url");
};

/* include <urlmixin> */
mei::ResponsibilityMixIn::ResponsibilityMixIn(MeiElement *b) {
    this->b = b;
};

mei::ResponsibilityMixIn::~ResponsibilityMixIn() {}
MeiAttribute* mei::ResponsibilityMixIn::getCert() {
    if (!b->hasAttribute("cert")) {
        throw AttributeNotFoundException("cert");
    }
    return b->getAttribute("cert");
};

void mei::ResponsibilityMixIn::setCert(std::string _cert) {
    MeiAttribute *a = new MeiAttribute("cert", _cert);
    b->addAttribute(a);
};

bool mei::ResponsibilityMixIn::hasCert() {
    return b->hasAttribute("cert");
};

void mei::ResponsibilityMixIn::removeCert() {
    b->removeAttribute("cert");
};
MeiAttribute* mei::ResponsibilityMixIn::getResp() {
    if (!b->hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
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
mei::ScopingMixIn::ScopingMixIn(MeiElement *b) {
    this->b = b;
};

mei::ScopingMixIn::~ScopingMixIn() {}
MeiAttribute* mei::ScopingMixIn::getTarget() {
    if (!b->hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return b->getAttribute("target");
};

void mei::ScopingMixIn::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    b->addAttribute(a);
};

bool mei::ScopingMixIn::hasTarget() {
    return b->hasAttribute("target");
};

void mei::ScopingMixIn::removeTarget() {
    b->removeAttribute("target");
};
MeiAttribute* mei::ScopingMixIn::getMatch() {
    if (!b->hasAttribute("match")) {
        throw AttributeNotFoundException("match");
    }
    return b->getAttribute("match");
};

void mei::ScopingMixIn::setMatch(std::string _match) {
    MeiAttribute *a = new MeiAttribute("match", _match);
    b->addAttribute(a);
};

bool mei::ScopingMixIn::hasMatch() {
    return b->hasAttribute("match");
};

void mei::ScopingMixIn::removeMatch() {
    b->removeAttribute("match");
};

/* include <matchmixin> */
mei::SegLikeMixIn::SegLikeMixIn(MeiElement *b) {
    this->b = b;
};

mei::SegLikeMixIn::~SegLikeMixIn() {}
MeiAttribute* mei::SegLikeMixIn::getFunction() {
    if (!b->hasAttribute("function")) {
        throw AttributeNotFoundException("function");
    }
    return b->getAttribute("function");
};

void mei::SegLikeMixIn::setFunction(std::string _function) {
    MeiAttribute *a = new MeiAttribute("function", _function);
    b->addAttribute(a);
};

bool mei::SegLikeMixIn::hasFunction() {
    return b->hasAttribute("function");
};

void mei::SegLikeMixIn::removeFunction() {
    b->removeAttribute("function");
};

/* include <functionmixin> */
mei::SortableMixIn::SortableMixIn(MeiElement *b) {
    this->b = b;
};

mei::SortableMixIn::~SortableMixIn() {}
MeiAttribute* mei::SortableMixIn::getSortKey() {
    if (!b->hasAttribute("sortKey")) {
        throw AttributeNotFoundException("sortKey");
    }
    return b->getAttribute("sortKey");
};

void mei::SortableMixIn::setSortKey(std::string _sortKey) {
    MeiAttribute *a = new MeiAttribute("sortKey", _sortKey);
    b->addAttribute(a);
};

bool mei::SortableMixIn::hasSortKey() {
    return b->hasAttribute("sortKey");
};

void mei::SortableMixIn::removeSortKey() {
    b->removeAttribute("sortKey");
};

/* include <sortKeymixin> */
mei::SourceMixIn::SourceMixIn(MeiElement *b) {
    this->b = b;
};

mei::SourceMixIn::~SourceMixIn() {}
MeiAttribute* mei::SourceMixIn::getSource() {
    if (!b->hasAttribute("source")) {
        throw AttributeNotFoundException("source");
    }
    return b->getAttribute("source");
};

void mei::SourceMixIn::setSource(std::string _source) {
    MeiAttribute *a = new MeiAttribute("source", _source);
    b->addAttribute(a);
};

bool mei::SourceMixIn::hasSource() {
    return b->hasAttribute("source");
};

void mei::SourceMixIn::removeSource() {
    b->removeAttribute("source");
};

/* include <sourcemixin> */
mei::SpanningMixIn::SpanningMixIn(MeiElement *b) {
    this->b = b;
};

mei::SpanningMixIn::~SpanningMixIn() {}
MeiAttribute* mei::SpanningMixIn::getSpanTo() {
    if (!b->hasAttribute("spanTo")) {
        throw AttributeNotFoundException("spanTo");
    }
    return b->getAttribute("spanTo");
};

void mei::SpanningMixIn::setSpanTo(std::string _spanTo) {
    MeiAttribute *a = new MeiAttribute("spanTo", _spanTo);
    b->addAttribute(a);
};

bool mei::SpanningMixIn::hasSpanTo() {
    return b->hasAttribute("spanTo");
};

void mei::SpanningMixIn::removeSpanTo() {
    b->removeAttribute("spanTo");
};

/* include <spanTomixin> */
mei::StyleDefMixIn::StyleDefMixIn(MeiElement *b) {
    this->b = b;
};

mei::StyleDefMixIn::~StyleDefMixIn() {}
MeiAttribute* mei::StyleDefMixIn::getScheme() {
    if (!b->hasAttribute("scheme")) {
        throw AttributeNotFoundException("scheme");
    }
    return b->getAttribute("scheme");
};

void mei::StyleDefMixIn::setScheme(std::string _scheme) {
    MeiAttribute *a = new MeiAttribute("scheme", _scheme);
    b->addAttribute(a);
};

bool mei::StyleDefMixIn::hasScheme() {
    return b->hasAttribute("scheme");
};

void mei::StyleDefMixIn::removeScheme() {
    b->removeAttribute("scheme");
};
MeiAttribute* mei::StyleDefMixIn::getSchemeVersion() {
    if (!b->hasAttribute("schemeVersion")) {
        throw AttributeNotFoundException("schemeVersion");
    }
    return b->getAttribute("schemeVersion");
};

void mei::StyleDefMixIn::setSchemeVersion(std::string _schemeVersion) {
    MeiAttribute *a = new MeiAttribute("schemeVersion", _schemeVersion);
    b->addAttribute(a);
};

bool mei::StyleDefMixIn::hasSchemeVersion() {
    return b->hasAttribute("schemeVersion");
};

void mei::StyleDefMixIn::removeSchemeVersion() {
    b->removeAttribute("schemeVersion");
};

/* include <schemeVersionmixin> */
mei::TableDecorationMixIn::TableDecorationMixIn(MeiElement *b) {
    this->b = b;
};

mei::TableDecorationMixIn::~TableDecorationMixIn() {}
MeiAttribute* mei::TableDecorationMixIn::getRole() {
    if (!b->hasAttribute("role")) {
        throw AttributeNotFoundException("role");
    }
    return b->getAttribute("role");
};

void mei::TableDecorationMixIn::setRole(std::string _role) {
    MeiAttribute *a = new MeiAttribute("role", _role);
    b->addAttribute(a);
};

bool mei::TableDecorationMixIn::hasRole() {
    return b->hasAttribute("role");
};

void mei::TableDecorationMixIn::removeRole() {
    b->removeAttribute("role");
};
MeiAttribute* mei::TableDecorationMixIn::getRows() {
    if (!b->hasAttribute("rows")) {
        throw AttributeNotFoundException("rows");
    }
    return b->getAttribute("rows");
};

void mei::TableDecorationMixIn::setRows(std::string _rows) {
    MeiAttribute *a = new MeiAttribute("rows", _rows);
    b->addAttribute(a);
};

bool mei::TableDecorationMixIn::hasRows() {
    return b->hasAttribute("rows");
};

void mei::TableDecorationMixIn::removeRows() {
    b->removeAttribute("rows");
};
MeiAttribute* mei::TableDecorationMixIn::getCols() {
    if (!b->hasAttribute("cols")) {
        throw AttributeNotFoundException("cols");
    }
    return b->getAttribute("cols");
};

void mei::TableDecorationMixIn::setCols(std::string _cols) {
    MeiAttribute *a = new MeiAttribute("cols", _cols);
    b->addAttribute(a);
};

bool mei::TableDecorationMixIn::hasCols() {
    return b->hasAttribute("cols");
};

void mei::TableDecorationMixIn::removeCols() {
    b->removeAttribute("cols");
};

/* include <colsmixin> */
mei::TimedMixIn::TimedMixIn(MeiElement *b) {
    this->b = b;
};

mei::TimedMixIn::~TimedMixIn() {}
MeiAttribute* mei::TimedMixIn::getStart() {
    if (!b->hasAttribute("start")) {
        throw AttributeNotFoundException("start");
    }
    return b->getAttribute("start");
};

void mei::TimedMixIn::setStart(std::string _start) {
    MeiAttribute *a = new MeiAttribute("start", _start);
    b->addAttribute(a);
};

bool mei::TimedMixIn::hasStart() {
    return b->hasAttribute("start");
};

void mei::TimedMixIn::removeStart() {
    b->removeAttribute("start");
};
MeiAttribute* mei::TimedMixIn::getEnd() {
    if (!b->hasAttribute("end")) {
        throw AttributeNotFoundException("end");
    }
    return b->getAttribute("end");
};

void mei::TimedMixIn::setEnd(std::string _end) {
    MeiAttribute *a = new MeiAttribute("end", _end);
    b->addAttribute(a);
};

bool mei::TimedMixIn::hasEnd() {
    return b->hasAttribute("end");
};

void mei::TimedMixIn::removeEnd() {
    b->removeAttribute("end");
};

/* include <endmixin> */
mei::TranscriptionalMixIn::TranscriptionalMixIn(MeiElement *b) {
    this->b = b;
};

mei::TranscriptionalMixIn::~TranscriptionalMixIn() {}
MeiAttribute* mei::TranscriptionalMixIn::getHand() {
    if (!b->hasAttribute("hand")) {
        throw AttributeNotFoundException("hand");
    }
    return b->getAttribute("hand");
};

void mei::TranscriptionalMixIn::setHand(std::string _hand) {
    MeiAttribute *a = new MeiAttribute("hand", _hand);
    b->addAttribute(a);
};

bool mei::TranscriptionalMixIn::hasHand() {
    return b->hasAttribute("hand");
};

void mei::TranscriptionalMixIn::removeHand() {
    b->removeAttribute("hand");
};
MeiAttribute* mei::TranscriptionalMixIn::getStatus() {
    if (!b->hasAttribute("status")) {
        throw AttributeNotFoundException("status");
    }
    return b->getAttribute("status");
};

void mei::TranscriptionalMixIn::setStatus(std::string _status) {
    MeiAttribute *a = new MeiAttribute("status", _status);
    b->addAttribute(a);
};

bool mei::TranscriptionalMixIn::hasStatus() {
    return b->hasAttribute("status");
};

void mei::TranscriptionalMixIn::removeStatus() {
    b->removeAttribute("status");
};
MeiAttribute* mei::TranscriptionalMixIn::getCause() {
    if (!b->hasAttribute("cause")) {
        throw AttributeNotFoundException("cause");
    }
    return b->getAttribute("cause");
};

void mei::TranscriptionalMixIn::setCause(std::string _cause) {
    MeiAttribute *a = new MeiAttribute("cause", _cause);
    b->addAttribute(a);
};

bool mei::TranscriptionalMixIn::hasCause() {
    return b->hasAttribute("cause");
};

void mei::TranscriptionalMixIn::removeCause() {
    b->removeAttribute("cause");
};
MeiAttribute* mei::TranscriptionalMixIn::getSeq() {
    if (!b->hasAttribute("seq")) {
        throw AttributeNotFoundException("seq");
    }
    return b->getAttribute("seq");
};

void mei::TranscriptionalMixIn::setSeq(std::string _seq) {
    MeiAttribute *a = new MeiAttribute("seq", _seq);
    b->addAttribute(a);
};

bool mei::TranscriptionalMixIn::hasSeq() {
    return b->hasAttribute("seq");
};

void mei::TranscriptionalMixIn::removeSeq() {
    b->removeAttribute("seq");
};

/* include <seqmixin> */
mei::TranslatableMixIn::TranslatableMixIn(MeiElement *b) {
    this->b = b;
};

mei::TranslatableMixIn::~TranslatableMixIn() {}
MeiAttribute* mei::TranslatableMixIn::getVersionDate() {
    if (!b->hasAttribute("versionDate")) {
        throw AttributeNotFoundException("versionDate");
    }
    return b->getAttribute("versionDate");
};

void mei::TranslatableMixIn::setVersionDate(std::string _versionDate) {
    MeiAttribute *a = new MeiAttribute("versionDate", _versionDate);
    b->addAttribute(a);
};

bool mei::TranslatableMixIn::hasVersionDate() {
    return b->hasAttribute("versionDate");
};

void mei::TranslatableMixIn::removeVersionDate() {
    b->removeAttribute("versionDate");
};

/* include <versionDatemixin> */
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
        throw AttributeNotFoundException("subtype");
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


