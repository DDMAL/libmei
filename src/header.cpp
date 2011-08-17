

#include "header.h"
using std::string;


Accessrestrict::Accessrestrict() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("accessRestrict");
};



Acqsource::Acqsource() : m_Bibl(this), m_Common(this), m_Lang(this) {
    m_Base.setName("acqSource");
};



Altid::Altid() : m_Bibl(this), m_Common(this), m_Typed(this) {
    m_Base.setName("altId");
};



Appinfo::Appinfo() : m_Common(this) {
    m_Base.setName("appInfo");
};



Application::Application() : m_Common(this), m_Datable(this), m_Typed(this) {
    m_Base.setName("application");
};


string Application::getVersionValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("version")) {
        throw AttributeNotFoundException("version");
    }
    return m_Base.getAttributeValue("version");
};

MeiAttribute* Application::getVersion() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("version")) {
        throw AttributeNotFoundException("version");
    }
    return m_Base.getAttribute("version");
};

void Application::setVersion(std::string _version) {
    if (!m_Base.hasAttribute("version")) {
        MeiAttribute *a = new MeiAttribute("version", _version);
        m_Base.addAttribute(a);
    }
};

bool Application::hasVersion() {
    return m_Base.hasAttribute("version");
};

void Application::removeVersion() {
    m_Base.removeAttribute("version");
};


Availability::Availability() : m_Bibl(this), m_Common(this), m_Datapointing(this) {
    m_Base.setName("availability");
};



Change::Change() : m_Common(this), m_Bibl(this) {
    m_Base.setName("change");
};



Changedesc::Changedesc() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("changeDesc");
};



Classcode::Classcode() : m_Common(this), m_Authorized(this), m_Bibl(this) {
    m_Base.setName("classCode");
};



Classification::Classification() : m_Common(this), m_Bibl(this), m_Datapointing(this) {
    m_Base.setName("classification");
};



Condition::Condition() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("condition");
};



Contentitem::Contentitem() : m_Bibl(this), m_Common(this) {
    m_Base.setName("contentItem");
};



Contents::Contents() : m_Common(this), m_Bibl(this), m_LinkExternal(this) {
    m_Base.setName("contents");
};



Correction::Correction() : m_Common(this), m_Bibl(this), m_Datapointing(this), m_Lang(this), m_Regularmethod(this) {
    m_Base.setName("correction");
};


string Correction::getCorrlevelValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("corrlevel")) {
        throw AttributeNotFoundException("corrlevel");
    }
    return m_Base.getAttributeValue("corrlevel");
};

MeiAttribute* Correction::getCorrlevel() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("corrlevel")) {
        throw AttributeNotFoundException("corrlevel");
    }
    return m_Base.getAttribute("corrlevel");
};

void Correction::setCorrlevel(std::string _corrlevel) {
    if (!m_Base.hasAttribute("corrlevel")) {
        MeiAttribute *a = new MeiAttribute("corrlevel", _corrlevel);
        m_Base.addAttribute(a);
    }
};

bool Correction::hasCorrlevel() {
    return m_Base.hasAttribute("corrlevel");
};

void Correction::removeCorrlevel() {
    m_Base.removeAttribute("corrlevel");
};


Creation::Creation() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("creation");
};



Dimensions::Dimensions() : m_Common(this), m_Bibl(this), m_Measurement(this) {
    m_Base.setName("dimensions");
};



Editionstmt::Editionstmt() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("editionStmt");
};



Editorialdecl::Editorialdecl() : m_Common(this), m_Bibl(this), m_Datapointing(this), m_Lang(this) {
    m_Base.setName("editorialDecl");
};



Encodingdesc::Encodingdesc() : m_Bibl(this), m_Common(this) {
    m_Base.setName("encodingDesc");
};



Ensemble::Ensemble() : m_Common(this), m_Bibl(this) {
    m_Base.setName("ensemble");
};



Event::Event() : m_Bibl(this), m_Calendared(this), m_Common(this), m_Datable(this), m_Edit(this), m_Responsibility(this), m_Source(this), m_Lang(this) {
    m_Base.setName("event");
};



Eventlist::Eventlist() : m_Bibl(this), m_Common(this), m_Typed(this) {
    m_Base.setName("eventList");
};



Exhibhist::Exhibhist() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("exhibHist");
};



Extent::Extent() : m_Common(this), m_Bibl(this), m_Measurement(this) {
    m_Base.setName("extent");
};



Filedesc::Filedesc() : m_Bibl(this), m_Common(this) {
    m_Base.setName("fileDesc");
};



Fingerprint::Fingerprint() : m_Common(this), m_Lang(this) {
    m_Base.setName("fingerprint");
};



Hand::Hand() : m_Common(this), m_Bibl(this), m_Lang(this), m_Medium(this), m_Responsibility(this) {
    m_Base.setName("hand");
};


string Hand::getInitialValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("initial")) {
        throw AttributeNotFoundException("initial");
    }
    return m_Base.getAttributeValue("initial");
};

MeiAttribute* Hand::getInitial() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("initial")) {
        throw AttributeNotFoundException("initial");
    }
    return m_Base.getAttribute("initial");
};

void Hand::setInitial(std::string _initial) {
    if (!m_Base.hasAttribute("initial")) {
        MeiAttribute *a = new MeiAttribute("initial", _initial);
        m_Base.addAttribute(a);
    }
};

bool Hand::hasInitial() {
    return m_Base.hasAttribute("initial");
};

void Hand::removeInitial() {
    m_Base.removeAttribute("initial");
};


Handlist::Handlist() : m_Common(this), m_Bibl(this) {
    m_Base.setName("handList");
};



History::History() : m_Common(this), m_Bibl(this) {
    m_Base.setName("history");
};



Incipcode::Incipcode() : m_Common(this), m_Bibl(this), m_Internetmedia(this) {
    m_Base.setName("incipCode");
};


string Incipcode::getSpaceValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return m_Base.getAttributeValue("space");
};

MeiAttribute* Incipcode::getSpace() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("space")) {
        throw AttributeNotFoundException("space");
    }
    return m_Base.getAttribute("space");
};

void Incipcode::setSpace(std::string _space) {
    if (!m_Base.hasAttribute("space")) {
        MeiAttribute *a = new MeiAttribute("space", _space);
        m_Base.addAttribute(a);
    }
};

bool Incipcode::hasSpace() {
    return m_Base.hasAttribute("space");
};

void Incipcode::removeSpace() {
    m_Base.removeAttribute("space");
};

string Incipcode::getFormValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttributeValue("form");
};

MeiAttribute* Incipcode::getForm() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return m_Base.getAttribute("form");
};

void Incipcode::setForm(std::string _form) {
    if (!m_Base.hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        m_Base.addAttribute(a);
    }
};

bool Incipcode::hasForm() {
    return m_Base.hasAttribute("form");
};

void Incipcode::removeForm() {
    m_Base.removeAttribute("form");
};


Inscription::Inscription() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("inscription");
};



Instrvoice::Instrvoice() : m_Common(this), m_Bibl(this), m_Authorized(this), m_Regularized(this) {
    m_Base.setName("instrVoice");
};


string Instrvoice::getCountValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("count")) {
        throw AttributeNotFoundException("count");
    }
    return m_Base.getAttributeValue("count");
};

MeiAttribute* Instrvoice::getCount() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("count")) {
        throw AttributeNotFoundException("count");
    }
    return m_Base.getAttribute("count");
};

void Instrvoice::setCount(std::string _count) {
    if (!m_Base.hasAttribute("count")) {
        MeiAttribute *a = new MeiAttribute("count", _count);
        m_Base.addAttribute(a);
    }
};

bool Instrvoice::hasCount() {
    return m_Base.hasAttribute("count");
};

void Instrvoice::removeCount() {
    m_Base.removeAttribute("count");
};

string Instrvoice::getSoloValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("solo")) {
        throw AttributeNotFoundException("solo");
    }
    return m_Base.getAttributeValue("solo");
};

MeiAttribute* Instrvoice::getSolo() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("solo")) {
        throw AttributeNotFoundException("solo");
    }
    return m_Base.getAttribute("solo");
};

void Instrvoice::setSolo(std::string _solo) {
    if (!m_Base.hasAttribute("solo")) {
        MeiAttribute *a = new MeiAttribute("solo", _solo);
        m_Base.addAttribute(a);
    }
};

bool Instrvoice::hasSolo() {
    return m_Base.hasAttribute("solo");
};

void Instrvoice::removeSolo() {
    m_Base.removeAttribute("solo");
};


Interpretation::Interpretation() : m_Common(this), m_Bibl(this), m_Datapointing(this), m_Lang(this) {
    m_Base.setName("interpretation");
};



Key::Key() : m_Common(this), m_Bibl(this), m_AccidentalPerformed(this), m_Pitch(this) {
    m_Base.setName("key");
};


string Key::getModeValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return m_Base.getAttributeValue("mode");
};

MeiAttribute* Key::getMode() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("mode")) {
        throw AttributeNotFoundException("mode");
    }
    return m_Base.getAttribute("mode");
};

void Key::setMode(std::string _mode) {
    if (!m_Base.hasAttribute("mode")) {
        MeiAttribute *a = new MeiAttribute("mode", _mode);
        m_Base.addAttribute(a);
    }
};

bool Key::hasMode() {
    return m_Base.hasAttribute("mode");
};

void Key::removeMode() {
    m_Base.removeAttribute("mode");
};


Langusage::Langusage() : m_Common(this), m_Bibl(this), m_Datapointing(this) {
    m_Base.setName("langUsage");
};



Language::Language() : m_Common(this), m_Bibl(this), m_Authorized(this) {
    m_Base.setName("language");
};



Meihead::Meihead() : m_Bibl(this), m_Common(this), m_Lang(this), m_Meiversion(this) {
    m_Base.setName("meiHead");
};


string Meihead::getTypeValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return m_Base.getAttributeValue("type");
};

MeiAttribute* Meihead::getType() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return m_Base.getAttribute("type");
};

void Meihead::setType(std::string _type) {
    if (!m_Base.hasAttribute("type")) {
        MeiAttribute *a = new MeiAttribute("type", _type);
        m_Base.addAttribute(a);
    }
};

bool Meihead::hasType() {
    return m_Base.hasAttribute("type");
};

void Meihead::removeType() {
    m_Base.removeAttribute("type");
};


Normalization::Normalization() : m_Common(this), m_Bibl(this), m_Datapointing(this), m_Lang(this), m_Regularmethod(this) {
    m_Base.setName("normalization");
};



Notesstmt::Notesstmt() : m_Common(this), m_Bibl(this) {
    m_Base.setName("notesStmt");
};



Perfmedium::Perfmedium() : m_Common(this), m_Bibl(this), m_Authorized(this) {
    m_Base.setName("perfMedium");
};



Performer::Performer() : m_Common(this), m_Bibl(this) {
    m_Base.setName("performer");
};



Physdesc::Physdesc() : m_Common(this), m_Bibl(this) {
    m_Base.setName("physDesc");
};



Physloc::Physloc() : m_Common(this), m_Bibl(this) {
    m_Base.setName("physLoc");
};



Physmedium::Physmedium() : m_Common(this), m_Bibl(this), m_Authorized(this), m_Lang(this) {
    m_Base.setName("physMedium");
};



Platenum::Platenum() : m_Common(this), m_Bibl(this), m_Facsimile(this) {
    m_Base.setName("plateNum");
};



Price::Price() : m_Common(this), m_Bibl(this), m_Measurement(this) {
    m_Base.setName("price");
};



Projectdesc::Projectdesc() : m_Common(this), m_Bibl(this), m_Datapointing(this), m_Lang(this) {
    m_Base.setName("projectDesc");
};



Provenance::Provenance() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("provenance");
};



Pubstmt::Pubstmt() : m_Common(this), m_Bibl(this) {
    m_Base.setName("pubStmt");
};



Relateditem::Relateditem() : m_Datapointing(this), m_Common(this), m_Bibl(this) {
    m_Base.setName("relatedItem");
};


string Relateditem::getRelValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rel")) {
        throw AttributeNotFoundException("rel");
    }
    return m_Base.getAttributeValue("rel");
};

MeiAttribute* Relateditem::getRel() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("rel")) {
        throw AttributeNotFoundException("rel");
    }
    return m_Base.getAttribute("rel");
};

void Relateditem::setRel(std::string _rel) {
    if (!m_Base.hasAttribute("rel")) {
        MeiAttribute *a = new MeiAttribute("rel", _rel);
        m_Base.addAttribute(a);
    }
};

bool Relateditem::hasRel() {
    return m_Base.hasAttribute("rel");
};

void Relateditem::removeRel() {
    m_Base.removeAttribute("rel");
};


Resp::Resp() : m_Authorized(this) {
    m_Base.setName("resp");
};



Respstmt::Respstmt() : m_Bibl(this), m_Common(this) {
    m_Base.setName("respStmt");
};



Revisiondesc::Revisiondesc() : m_Common(this), m_Bibl(this) {
    m_Base.setName("revisionDesc");
};



Samplingdecl::Samplingdecl() : m_Common(this), m_Bibl(this), m_Datapointing(this), m_Lang(this) {
    m_Base.setName("samplingDecl");
};



Segmentation::Segmentation() : m_Common(this), m_Bibl(this), m_Datapointing(this), m_Lang(this) {
    m_Base.setName("segmentation");
};



Seriesstmt::Seriesstmt() : m_Common(this), m_Bibl(this) {
    m_Base.setName("seriesStmt");
};



Source::Source() : m_Datapointing(this), m_Common(this), m_Bibl(this) {
    m_Base.setName("source");
};



Sourcedesc::Sourcedesc() : m_Common(this) {
    m_Base.setName("sourceDesc");
};



Stdvals::Stdvals() : m_Common(this), m_Bibl(this), m_Datapointing(this), m_Lang(this) {
    m_Base.setName("stdVals");
};



Sysreq::Sysreq() : m_Common(this), m_Bibl(this), m_Lang(this) {
    m_Base.setName("sysReq");
};



Term::Term() : m_Common(this), m_Bibl(this) {
    m_Base.setName("term");
};


string Term::getClasscodeValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return m_Base.getAttributeValue("classcode");
};

MeiAttribute* Term::getClasscode() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return m_Base.getAttribute("classcode");
};

void Term::setClasscode(std::string _classcode) {
    if (!m_Base.hasAttribute("classcode")) {
        MeiAttribute *a = new MeiAttribute("classcode", _classcode);
        m_Base.addAttribute(a);
    }
};

bool Term::hasClasscode() {
    return m_Base.hasAttribute("classcode");
};

void Term::removeClasscode() {
    m_Base.removeAttribute("classcode");
};


Termlist::Termlist() : m_Common(this), m_Bibl(this) {
    m_Base.setName("termList");
};


string Termlist::getClasscodeValue() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return m_Base.getAttributeValue("classcode");
};

MeiAttribute* Termlist::getClasscode() throw (AttributeNotFoundException) {
    if (!m_Base.hasAttribute("classcode")) {
        throw AttributeNotFoundException("classcode");
    }
    return m_Base.getAttribute("classcode");
};

void Termlist::setClasscode(std::string _classcode) {
    if (!m_Base.hasAttribute("classcode")) {
        MeiAttribute *a = new MeiAttribute("classcode", _classcode);
        m_Base.addAttribute(a);
    }
};

bool Termlist::hasClasscode() {
    return m_Base.hasAttribute("classcode");
};

void Termlist::removeClasscode() {
    m_Base.removeAttribute("classcode");
};


Titlestmt::Titlestmt() : m_Bibl(this), m_Common(this) {
    m_Base.setName("titleStmt");
};



Treathist::Treathist() : m_Common(this), m_Bibl(this) {
    m_Base.setName("treatHist");
};



Treatsched::Treatsched() : m_Common(this), m_Bibl(this) {
    m_Base.setName("treatSched");
};



Unpub::Unpub() : m_Common(this), m_Bibl(this) {
    m_Base.setName("unpub");
};



Userestrict::Userestrict() : m_Common(this), m_Bibl(this) {
    m_Base.setName("useRestrict");
};



Watermark::Watermark() : m_Common(this), m_Bibl(this), m_Facsimile(this) {
    m_Base.setName("watermark");
};



Work::Work() : m_Datapointing(this), m_Common(this), m_Bibl(this) {
    m_Base.setName("work");
};



Workdesc::Workdesc() : m_Common(this) {
    m_Base.setName("workDesc");
};




