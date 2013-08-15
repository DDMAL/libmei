#include "harmony.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Barre::Barre() :
    MeiElement("barre")
{
}
REGISTER_DEFINITION(mei::Barre, "barre");
mei::Barre::~Barre() {}
mei::Barre::Barre(const Barre& other) :
    MeiElement(other),

{
}

/* include <barre> */

mei::ChordDef::ChordDef() :
    MeiElement("chordDef")
{
}
REGISTER_DEFINITION(mei::ChordDef, "chordDef");
mei::ChordDef::~ChordDef() {}
mei::ChordDef::ChordDef(const ChordDef& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::ChordDef::getPos() {
    if (!hasAttribute("pos")) {
        throw AttributeNotFoundException("pos");
    }
    return getAttribute("pos");
};

void mei::ChordDef::setPos(std::string _pos) {
    MeiAttribute *a = new MeiAttribute("pos", _pos);
    addAttribute(a);
};

bool mei::ChordDef::hasPos() {
    return hasAttribute("pos");
};

void mei::ChordDef::removePos() {
    removeAttribute("pos");
};
/* include <chordDef> */

mei::ChordMember::ChordMember() :
    MeiElement("chordMember")
{
}
REGISTER_DEFINITION(mei::ChordMember, "chordMember");
mei::ChordMember::~ChordMember() {}
mei::ChordMember::ChordMember(const ChordMember& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::ChordMember::getFing() {
    if (!hasAttribute("fing")) {
        throw AttributeNotFoundException("fing");
    }
    return getAttribute("fing");
};

void mei::ChordMember::setFing(std::string _fing) {
    MeiAttribute *a = new MeiAttribute("fing", _fing);
    addAttribute(a);
};

bool mei::ChordMember::hasFing() {
    return hasAttribute("fing");
};

void mei::ChordMember::removeFing() {
    removeAttribute("fing");
};
/* include <chordMember> */

mei::ChordTable::ChordTable() :
    MeiElement("chordTable")
{
}
REGISTER_DEFINITION(mei::ChordTable, "chordTable");
mei::ChordTable::~ChordTable() {}
mei::ChordTable::ChordTable(const ChordTable& other) :
    MeiElement(other),

{
}

/* include <chordTable> */

mei::F::F() :
    MeiElement("f")
{
}
REGISTER_DEFINITION(mei::F, "f");
mei::F::~F() {}
mei::F::F(const F& other) :
    MeiElement(other),

{
}

MeiAttribute* mei::F::getExtender() {
    if (!hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return getAttribute("extender");
};

void mei::F::setExtender(std::string _extender) {
    MeiAttribute *a = new MeiAttribute("extender", _extender);
    addAttribute(a);
};

bool mei::F::hasExtender() {
    return hasAttribute("extender");
};

void mei::F::removeExtender() {
    removeAttribute("extender");
};
/* include <f> */

mei::Fb::Fb() :
    MeiElement("fb")
{
}
REGISTER_DEFINITION(mei::Fb, "fb");
mei::Fb::~Fb() {}
mei::Fb::Fb(const Fb& other) :
    MeiElement(other),

{
}

/* include <fb> */

mei::Harm::Harm() :
    MeiElement("harm")
{
}
REGISTER_DEFINITION(mei::Harm, "harm");
mei::Harm::~Harm() {}
mei::Harm::Harm(const Harm& other) :
    MeiElement(other),

{
}

/* include <harm> */



