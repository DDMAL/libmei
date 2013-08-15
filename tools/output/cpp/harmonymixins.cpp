#include "harmonymixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_fretlocationMixIn::Mei_fretlocationMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_fretlocationMixIn::~Mei_fretlocationMixIn() {}
MeiAttribute* mei::Mei_fretlocationMixIn::getFret() {
    if (!b->hasAttribute("fret")) {
        throw AttributeNotFoundException("fret");
    }
    return b->getAttribute("fret");
};

void mei::Mei_fretlocationMixIn::setFret(std::string _fret) {
    MeiAttribute *a = new MeiAttribute("fret", _fret);
    b->addAttribute(a);
};

bool mei::Mei_fretlocationMixIn::hasFret() {
    return b->hasAttribute("fret");
};

void mei::Mei_fretlocationMixIn::removeFret() {
    b->removeAttribute("fret");
};

/* include <fretmixin> */
mei::Mei_harmLogMixIn::Mei_harmLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_harmLogMixIn::~Mei_harmLogMixIn() {}
MeiAttribute* mei::Mei_harmLogMixIn::getChordref() {
    if (!b->hasAttribute("chordref")) {
        throw AttributeNotFoundException("chordref");
    }
    return b->getAttribute("chordref");
};

void mei::Mei_harmLogMixIn::setChordref(std::string _chordref) {
    MeiAttribute *a = new MeiAttribute("chordref", _chordref);
    b->addAttribute(a);
};

bool mei::Mei_harmLogMixIn::hasChordref() {
    return b->hasAttribute("chordref");
};

void mei::Mei_harmLogMixIn::removeChordref() {
    b->removeAttribute("chordref");
};

/* include <chordrefmixin> */
mei::Mei_harmVisMixIn::Mei_harmVisMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_harmVisMixIn::~Mei_harmVisMixIn() {}
MeiAttribute* mei::Mei_harmVisMixIn::getExtender() {
    if (!b->hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return b->getAttribute("extender");
};

void mei::Mei_harmVisMixIn::setExtender(std::string _extender) {
    MeiAttribute *a = new MeiAttribute("extender", _extender);
    b->addAttribute(a);
};

bool mei::Mei_harmVisMixIn::hasExtender() {
    return b->hasAttribute("extender");
};

void mei::Mei_harmVisMixIn::removeExtender() {
    b->removeAttribute("extender");
};
MeiAttribute* mei::Mei_harmVisMixIn::getRendgrid() {
    if (!b->hasAttribute("rendgrid")) {
        throw AttributeNotFoundException("rendgrid");
    }
    return b->getAttribute("rendgrid");
};

void mei::Mei_harmVisMixIn::setRendgrid(std::string _rendgrid) {
    MeiAttribute *a = new MeiAttribute("rendgrid", _rendgrid);
    b->addAttribute(a);
};

bool mei::Mei_harmVisMixIn::hasRendgrid() {
    return b->hasAttribute("rendgrid");
};

void mei::Mei_harmVisMixIn::removeRendgrid() {
    b->removeAttribute("rendgrid");
};

/* include <rendgridmixin> */


