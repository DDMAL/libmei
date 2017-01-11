#include "harmonymixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::FretlocationMixIn::FretlocationMixIn(MeiElement *b) {
    this->b = b;
};

mei::FretlocationMixIn::~FretlocationMixIn() {}
MeiAttribute* mei::FretlocationMixIn::getFret() {
    if (!b->hasAttribute("fret")) {
        return NULL;
    }
    return b->getAttribute("fret");
};

void mei::FretlocationMixIn::setFret(std::string _fret) {
    MeiAttribute *a = new MeiAttribute("fret", _fret);
    b->addAttribute(a);
};

bool mei::FretlocationMixIn::hasFret() {
    return b->hasAttribute("fret");
};

void mei::FretlocationMixIn::removeFret() {
    b->removeAttribute("fret");
};

/* include <fretmixin> */
mei::HarmLogMixIn::HarmLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarmLogMixIn::~HarmLogMixIn() {}
MeiAttribute* mei::HarmLogMixIn::getChordref() {
    if (!b->hasAttribute("chordref")) {
        return NULL;
    }
    return b->getAttribute("chordref");
};

void mei::HarmLogMixIn::setChordref(std::string _chordref) {
    MeiAttribute *a = new MeiAttribute("chordref", _chordref);
    b->addAttribute(a);
};

bool mei::HarmLogMixIn::hasChordref() {
    return b->hasAttribute("chordref");
};

void mei::HarmLogMixIn::removeChordref() {
    b->removeAttribute("chordref");
};

/* include <chordrefmixin> */
mei::HarmVisMixIn::HarmVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::HarmVisMixIn::~HarmVisMixIn() {}
MeiAttribute* mei::HarmVisMixIn::getRendgrid() {
    if (!b->hasAttribute("rendgrid")) {
        return NULL;
    }
    return b->getAttribute("rendgrid");
};

void mei::HarmVisMixIn::setRendgrid(std::string _rendgrid) {
    MeiAttribute *a = new MeiAttribute("rendgrid", _rendgrid);
    b->addAttribute(a);
};

bool mei::HarmVisMixIn::hasRendgrid() {
    return b->hasAttribute("rendgrid");
};

void mei::HarmVisMixIn::removeRendgrid() {
    b->removeAttribute("rendgrid");
};

/* include <rendgridmixin> */


