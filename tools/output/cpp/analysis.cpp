#include "analysis.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::C::C() :
    MeiElement("c"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::C, "c");
mei::C::~C() {}
mei::C::C(const C& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}

/* include <c> */

mei::Cl::Cl() :
    MeiElement("cl"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Cl, "cl");
mei::Cl::~Cl() {}
mei::Cl::Cl(const Cl& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}

/* include <cl> */

mei::Interp::Interp() :
    MeiElement("interp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InterpLike(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::Interp, "interp");
mei::Interp::~Interp() {}
mei::Interp::Interp(const Interp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InterpLike(this),
    m_Responsibility(this)
{
}

/* include <interp> */

mei::InterpGrp::InterpGrp() :
    MeiElement("interpGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InterpLike(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::InterpGrp, "interpGrp");
mei::InterpGrp::~InterpGrp() {}
mei::InterpGrp::InterpGrp(const InterpGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InterpLike(this),
    m_Responsibility(this)
{
}

/* include <interpGrp> */

mei::M::M() :
    MeiElement("m"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::M, "m");
mei::M::~M() {}
mei::M::M(const M& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}

MeiAttribute* mei::M::getBaseForm() {
    if (!hasAttribute("baseForm")) {
        throw AttributeNotFoundException("baseForm");
    }
    return getAttribute("baseForm");
};

void mei::M::setBaseForm(std::string _baseForm) {
    MeiAttribute *a = new MeiAttribute("baseForm", _baseForm);
    addAttribute(a);
};

bool mei::M::hasBaseForm() {
    return hasAttribute("baseForm");
};

void mei::M::removeBaseForm() {
    removeAttribute("baseForm");
};
/* include <m> */

mei::Pc::Pc() :
    MeiElement("pc"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Pc, "pc");
mei::Pc::~Pc() {}
mei::Pc::Pc(const Pc& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}

MeiAttribute* mei::Pc::getForce() {
    if (!hasAttribute("force")) {
        throw AttributeNotFoundException("force");
    }
    return getAttribute("force");
};

void mei::Pc::setForce(std::string _force) {
    MeiAttribute *a = new MeiAttribute("force", _force);
    addAttribute(a);
};

bool mei::Pc::hasForce() {
    return hasAttribute("force");
};

void mei::Pc::removeForce() {
    removeAttribute("force");
};
MeiAttribute* mei::Pc::getUnit() {
    if (!hasAttribute("unit")) {
        throw AttributeNotFoundException("unit");
    }
    return getAttribute("unit");
};

void mei::Pc::setUnit(std::string _unit) {
    MeiAttribute *a = new MeiAttribute("unit", _unit);
    addAttribute(a);
};

bool mei::Pc::hasUnit() {
    return hasAttribute("unit");
};

void mei::Pc::removeUnit() {
    removeAttribute("unit");
};
MeiAttribute* mei::Pc::getPre() {
    if (!hasAttribute("pre")) {
        throw AttributeNotFoundException("pre");
    }
    return getAttribute("pre");
};

void mei::Pc::setPre(std::string _pre) {
    MeiAttribute *a = new MeiAttribute("pre", _pre);
    addAttribute(a);
};

bool mei::Pc::hasPre() {
    return hasAttribute("pre");
};

void mei::Pc::removePre() {
    removeAttribute("pre");
};
/* include <pc> */

mei::Phr::Phr() :
    MeiElement("phr"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::Phr, "phr");
mei::Phr::~Phr() {}
mei::Phr::Phr(const Phr& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}

/* include <phr> */

mei::S::S() :
    MeiElement("s"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::S, "s");
mei::S::~S() {}
mei::S::S(const S& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}

/* include <s> */

mei::Span::Span() :
    MeiElement("span"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InterpLike(this),
    m_Responsibility(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::Span, "span");
mei::Span::~Span() {}
mei::Span::Span(const Span& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InterpLike(this),
    m_Responsibility(this),
    m_Pointing(this)
{
}

MeiAttribute* mei::Span::getFrom() {
    if (!hasAttribute("from")) {
        throw AttributeNotFoundException("from");
    }
    return getAttribute("from");
};

void mei::Span::setFrom(std::string _from) {
    MeiAttribute *a = new MeiAttribute("from", _from);
    addAttribute(a);
};

bool mei::Span::hasFrom() {
    return hasAttribute("from");
};

void mei::Span::removeFrom() {
    removeAttribute("from");
};
MeiAttribute* mei::Span::getTo() {
    if (!hasAttribute("to")) {
        throw AttributeNotFoundException("to");
    }
    return getAttribute("to");
};

void mei::Span::setTo(std::string _to) {
    MeiAttribute *a = new MeiAttribute("to", _to);
    addAttribute(a);
};

bool mei::Span::hasTo() {
    return hasAttribute("to");
};

void mei::Span::removeTo() {
    removeAttribute("to");
};
/* include <span> */

mei::SpanGrp::SpanGrp() :
    MeiElement("spanGrp"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InterpLike(this),
    m_Responsibility(this)
{
}
REGISTER_DEFINITION(mei::SpanGrp, "spanGrp");
mei::SpanGrp::~SpanGrp() {}
mei::SpanGrp::SpanGrp(const SpanGrp& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_InterpLike(this),
    m_Responsibility(this)
{
}

/* include <spanGrp> */

mei::W::W() :
    MeiElement("w"),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::W, "w");
mei::W::~W() {}
mei::W::W(const W& other) :
    MeiElement(other),
    m_Global(this),
    m_GlobalLinking(this),
    m_GlobalAnalytic(this),
    m_GlobalFacs(this),
    m_GlobalChange(this),
    m_SegLike(this),
    m_Metrical(this),
    m_Datcat(this),
    m_Fragmentable(this),
    m_Typed(this)
{
}

MeiAttribute* mei::W::getLemma() {
    if (!hasAttribute("lemma")) {
        throw AttributeNotFoundException("lemma");
    }
    return getAttribute("lemma");
};

void mei::W::setLemma(std::string _lemma) {
    MeiAttribute *a = new MeiAttribute("lemma", _lemma);
    addAttribute(a);
};

bool mei::W::hasLemma() {
    return hasAttribute("lemma");
};

void mei::W::removeLemma() {
    removeAttribute("lemma");
};
MeiAttribute* mei::W::getLemmaRef() {
    if (!hasAttribute("lemmaRef")) {
        throw AttributeNotFoundException("lemmaRef");
    }
    return getAttribute("lemmaRef");
};

void mei::W::setLemmaRef(std::string _lemmaRef) {
    MeiAttribute *a = new MeiAttribute("lemmaRef", _lemmaRef);
    addAttribute(a);
};

bool mei::W::hasLemmaRef() {
    return hasAttribute("lemmaRef");
};

void mei::W::removeLemmaRef() {
    removeAttribute("lemmaRef");
};
/* include <w> */



