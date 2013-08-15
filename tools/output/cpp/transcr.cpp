#include "transcr.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AddSpan::AddSpan() :
    MeiElement("addSpan"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Placement(this),
    m_Typed(this),
    m_Spanning(this)
{
}
REGISTER_DEFINITION(mei::AddSpan, "addSpan");
mei::AddSpan::~AddSpan() {}
mei::AddSpan::AddSpan(const AddSpan& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Placement(this),
    m_Typed(this),
    m_Spanning(this)
{
}

/* include <addSpan> */

mei::Am::Am() :
    MeiElement("am"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Am, "am");
mei::Am::~Am() {}
mei::Am::Am(const Am& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

/* include <am> */

mei::Damage::Damage() :
    MeiElement("damage"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Damaged(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Damage, "damage");
mei::Damage::~Damage() {}
mei::Damage::Damage(const Damage& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Typed(this),
    m_Damaged(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}

/* include <damage> */

mei::DamageSpan::DamageSpan() :
    MeiElement("damageSpan"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Damaged(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Typed(this),
    m_Spanning(this)
{
}
REGISTER_DEFINITION(mei::DamageSpan, "damageSpan");
mei::DamageSpan::~DamageSpan() {}
mei::DamageSpan::DamageSpan(const DamageSpan& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Damaged(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Typed(this),
    m_Spanning(this)
{
}

/* include <damageSpan> */

mei::DelSpan::DelSpan() :
    MeiElement("delSpan"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Spanning(this)
{
}
REGISTER_DEFINITION(mei::DelSpan, "delSpan");
mei::DelSpan::~DelSpan() {}
mei::DelSpan::DelSpan(const DelSpan& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Spanning(this)
{
}

/* include <delSpan> */

mei::Ex::Ex() :
    MeiElement("ex"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Ex, "ex");
mei::Ex::~Ex() {}
mei::Ex::Ex(const Ex& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

/* include <ex> */

mei::Facsimile::Facsimile() :
    MeiElement("facsimile"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Facsimile, "facsimile");
mei::Facsimile::~Facsimile() {}
mei::Facsimile::Facsimile(const Facsimile& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this)
{
}

/* include <facsimile> */

mei::Fw::Fw() :
    MeiElement("fw"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this)
{
}
REGISTER_DEFINITION(mei::Fw, "fw");
mei::Fw::~Fw() {}
mei::Fw::Fw(const Fw& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Placement(this)
{
}

MeiAttribute* mei::Fw::getType() {
    if (!hasAttribute("type")) {
        throw AttributeNotFoundException("type");
    }
    return getAttribute("type");
};

void mei::Fw::setType(std::string _type) {
    MeiAttribute *a = new MeiAttribute("type", _type);
    addAttribute(a);
};

bool mei::Fw::hasType() {
    return hasAttribute("type");
};

void mei::Fw::removeType() {
    removeAttribute("type");
};
/* include <fw> */

mei::HandNotes::HandNotes() :
    MeiElement("handNotes"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::HandNotes, "handNotes");
mei::HandNotes::~HandNotes() {}
mei::HandNotes::HandNotes(const HandNotes& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <handNotes> */

mei::HandShift::HandShift() :
    MeiElement("handShift"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_HandFeatures(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::HandShift, "handShift");
mei::HandShift::~HandShift() {}
mei::HandShift::HandShift(const HandShift& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_HandFeatures(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::HandShift::getNew() {
    if (!hasAttribute("new")) {
        throw AttributeNotFoundException("new");
    }
    return getAttribute("new");
};

void mei::HandShift::setNew(std::string _new) {
    MeiAttribute *a = new MeiAttribute("new", _new);
    addAttribute(a);
};

bool mei::HandShift::hasNew() {
    return hasAttribute("new");
};

void mei::HandShift::removeNew() {
    removeAttribute("new");
};
/* include <handShift> */

mei::Line::Line() :
    MeiElement("line"),
    m_Typed(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Coordinated(this)
{
}
REGISTER_DEFINITION(mei::Line, "line");
mei::Line::~Line() {}
mei::Line::Line(const Line& other) :
    MeiElement(other),
    m_Typed(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Coordinated(this)
{
}

/* include <line> */

mei::ListTranspose::ListTranspose() :
    MeiElement("listTranspose"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::ListTranspose, "listTranspose");
mei::ListTranspose::~ListTranspose() {}
mei::ListTranspose::ListTranspose(const ListTranspose& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <listTranspose> */

mei::Metamark::Metamark() :
    MeiElement("metamark"),
    m_Spanning(this),
    m_Placement(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Metamark, "metamark");
mei::Metamark::~Metamark() {}
mei::Metamark::Metamark(const Metamark& other) :
    MeiElement(other),
    m_Spanning(this),
    m_Placement(this),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

MeiAttribute* mei::Metamark::getFunction() {
    if (!hasAttribute("function")) {
        throw AttributeNotFoundException("function");
    }
    return getAttribute("function");
};

void mei::Metamark::setFunction(std::string _function) {
    MeiAttribute *a = new MeiAttribute("function", _function);
    addAttribute(a);
};

bool mei::Metamark::hasFunction() {
    return hasAttribute("function");
};

void mei::Metamark::removeFunction() {
    removeAttribute("function");
};
MeiAttribute* mei::Metamark::getTarget() {
    if (!hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return getAttribute("target");
};

void mei::Metamark::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    addAttribute(a);
};

bool mei::Metamark::hasTarget() {
    return hasAttribute("target");
};

void mei::Metamark::removeTarget() {
    removeAttribute("target");
};
/* include <metamark> */

mei::Mod::Mod() :
    MeiElement("mod"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Spanning(this)
{
}
REGISTER_DEFINITION(mei::Mod, "mod");
mei::Mod::~Mod() {}
mei::Mod::Mod(const Mod& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Spanning(this)
{
}

/* include <mod> */

mei::Redo::Redo() :
    MeiElement("redo"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Spanning(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Redo, "redo");
mei::Redo::~Redo() {}
mei::Redo::Redo(const Redo& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Spanning(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Redo::getTarget() {
    if (!hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return getAttribute("target");
};

void mei::Redo::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    addAttribute(a);
};

bool mei::Redo::hasTarget() {
    return hasAttribute("target");
};

void mei::Redo::removeTarget() {
    removeAttribute("target");
};
/* include <redo> */

mei::Restore::Restore() :
    MeiElement("restore"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Restore, "restore");
mei::Restore::~Restore() {}
mei::Restore::Restore(const Restore& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this),
    m_Typed(this)
{
}

/* include <restore> */

mei::Retrace::Retrace() :
    MeiElement("retrace"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Spanning(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Retrace, "retrace");
mei::Retrace::~Retrace() {}
mei::Retrace::Retrace(const Retrace& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Spanning(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

/* include <retrace> */

mei::SourceDoc::SourceDoc() :
    MeiElement("sourceDoc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::SourceDoc, "sourceDoc");
mei::SourceDoc::~SourceDoc() {}
mei::SourceDoc::SourceDoc(const SourceDoc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Declaring(this)
{
}

/* include <sourceDoc> */

mei::Space::Space() :
    MeiElement("space"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}
REGISTER_DEFINITION(mei::Space, "space");
mei::Space::~Space() {}
mei::Space::Space(const Space& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Dimensions(this),
    m_Ranging(this)
{
}

MeiAttribute* mei::Space::getDim() {
    if (!hasAttribute("dim")) {
        throw AttributeNotFoundException("dim");
    }
    return getAttribute("dim");
};

void mei::Space::setDim(std::string _dim) {
    MeiAttribute *a = new MeiAttribute("dim", _dim);
    addAttribute(a);
};

bool mei::Space::hasDim() {
    return hasAttribute("dim");
};

void mei::Space::removeDim() {
    removeAttribute("dim");
};
MeiAttribute* mei::Space::getResp() {
    if (!hasAttribute("resp")) {
        throw AttributeNotFoundException("resp");
    }
    return getAttribute("resp");
};

void mei::Space::setResp(std::string _resp) {
    MeiAttribute *a = new MeiAttribute("resp", _resp);
    addAttribute(a);
};

bool mei::Space::hasResp() {
    return hasAttribute("resp");
};

void mei::Space::removeResp() {
    removeAttribute("resp");
};
/* include <space> */

mei::Subst::Subst() :
    MeiElement("subst"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Subst, "subst");
mei::Subst::~Subst() {}
mei::Subst::Subst(const Subst& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

/* include <subst> */

mei::SubstJoin::SubstJoin() :
    MeiElement("substJoin"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::SubstJoin, "substJoin");
mei::SubstJoin::~SubstJoin() {}
mei::SubstJoin::SubstJoin(const SubstJoin& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Pointing(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

/* include <substJoin> */

mei::Supplied::Supplied() :
    MeiElement("supplied"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Supplied, "supplied");
mei::Supplied::~Supplied() {}
mei::Supplied::Supplied(const Supplied& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Supplied::getReason() {
    if (!hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return getAttribute("reason");
};

void mei::Supplied::setReason(std::string _reason) {
    MeiAttribute *a = new MeiAttribute("reason", _reason);
    addAttribute(a);
};

bool mei::Supplied::hasReason() {
    return hasAttribute("reason");
};

void mei::Supplied::removeReason() {
    removeAttribute("reason");
};
/* include <supplied> */

mei::Surface::Surface() :
    MeiElement("surface"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Coordinated(this),
    m_Declaring(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Surface, "surface");
mei::Surface::~Surface() {}
mei::Surface::Surface(const Surface& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Coordinated(this),
    m_Declaring(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Surface::getAttachment() {
    if (!hasAttribute("attachment")) {
        throw AttributeNotFoundException("attachment");
    }
    return getAttribute("attachment");
};

void mei::Surface::setAttachment(std::string _attachment) {
    MeiAttribute *a = new MeiAttribute("attachment", _attachment);
    addAttribute(a);
};

bool mei::Surface::hasAttachment() {
    return hasAttribute("attachment");
};

void mei::Surface::removeAttachment() {
    removeAttribute("attachment");
};
MeiAttribute* mei::Surface::getFlipping() {
    if (!hasAttribute("flipping")) {
        throw AttributeNotFoundException("flipping");
    }
    return getAttribute("flipping");
};

void mei::Surface::setFlipping(std::string _flipping) {
    MeiAttribute *a = new MeiAttribute("flipping", _flipping);
    addAttribute(a);
};

bool mei::Surface::hasFlipping() {
    return hasAttribute("flipping");
};

void mei::Surface::removeFlipping() {
    removeAttribute("flipping");
};
/* include <surface> */

mei::SurfaceGrp::SurfaceGrp() :
    MeiElement("surfaceGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Coordinated(this),
    m_Declaring(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::SurfaceGrp, "surfaceGrp");
mei::SurfaceGrp::~SurfaceGrp() {}
mei::SurfaceGrp::SurfaceGrp(const SurfaceGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Coordinated(this),
    m_Declaring(this),
    m_Typed(this)
{
}

/* include <surfaceGrp> */

mei::Surplus::Surplus() :
    MeiElement("surplus"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Surplus, "surplus");
mei::Surplus::~Surplus() {}
mei::Surplus::Surplus(const Surplus& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Surplus::getReason() {
    if (!hasAttribute("reason")) {
        throw AttributeNotFoundException("reason");
    }
    return getAttribute("reason");
};

void mei::Surplus::setReason(std::string _reason) {
    MeiAttribute *a = new MeiAttribute("reason", _reason);
    addAttribute(a);
};

bool mei::Surplus::hasReason() {
    return hasAttribute("reason");
};

void mei::Surplus::removeReason() {
    removeAttribute("reason");
};
/* include <surplus> */

mei::Transpose::Transpose() :
    MeiElement("transpose"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}
REGISTER_DEFINITION(mei::Transpose, "transpose");
mei::Transpose::~Transpose() {}
mei::Transpose::Transpose(const Transpose& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this)
{
}

/* include <transpose> */

mei::Undo::Undo() :
    MeiElement("undo"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Spanning(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Undo, "undo");
mei::Undo::~Undo() {}
mei::Undo::Undo(const Undo& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Spanning(this),
    m_Transcriptional(this),
    m_EditLike(this),
    m_Dimensions(this),
    m_Ranging(this),
    m_Responsibility(this)
{
}

MeiAttribute* mei::Undo::getTarget() {
    if (!hasAttribute("target")) {
        throw AttributeNotFoundException("target");
    }
    return getAttribute("target");
};

void mei::Undo::setTarget(std::string _target) {
    MeiAttribute *a = new MeiAttribute("target", _target);
    addAttribute(a);
};

bool mei::Undo::hasTarget() {
    return hasAttribute("target");
};

void mei::Undo::removeTarget() {
    removeAttribute("target");
};
/* include <undo> */

mei::Zone::Zone() :
    MeiElement("zone"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Coordinated(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Zone, "zone");
mei::Zone::~Zone() {}
mei::Zone::Zone(const Zone& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_Coordinated(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Zone::getPoints() {
    if (!hasAttribute("points")) {
        throw AttributeNotFoundException("points");
    }
    return getAttribute("points");
};

void mei::Zone::setPoints(std::string _points) {
    MeiAttribute *a = new MeiAttribute("points", _points);
    addAttribute(a);
};

bool mei::Zone::hasPoints() {
    return hasAttribute("points");
};

void mei::Zone::removePoints() {
    removeAttribute("points");
};
MeiAttribute* mei::Zone::getRotate() {
    if (!hasAttribute("rotate")) {
        throw AttributeNotFoundException("rotate");
    }
    return getAttribute("rotate");
};

void mei::Zone::setRotate(std::string _rotate) {
    MeiAttribute *a = new MeiAttribute("rotate", _rotate);
    addAttribute(a);
};

bool mei::Zone::hasRotate() {
    return hasAttribute("rotate");
};

void mei::Zone::removeRotate() {
    removeAttribute("rotate");
};
/* include <zone> */



