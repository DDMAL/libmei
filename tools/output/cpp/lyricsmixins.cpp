#include "lyricsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::Mei_verseLogMixIn::Mei_verseLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::Mei_verseLogMixIn::~Mei_verseLogMixIn() {}
MeiAttribute* mei::Mei_verseLogMixIn::getRefrain() {
    if (!b->hasAttribute("refrain")) {
        throw AttributeNotFoundException("refrain");
    }
    return b->getAttribute("refrain");
};

void mei::Mei_verseLogMixIn::setRefrain(std::string _refrain) {
    MeiAttribute *a = new MeiAttribute("refrain", _refrain);
    b->addAttribute(a);
};

bool mei::Mei_verseLogMixIn::hasRefrain() {
    return b->hasAttribute("refrain");
};

void mei::Mei_verseLogMixIn::removeRefrain() {
    b->removeAttribute("refrain");
};
MeiAttribute* mei::Mei_verseLogMixIn::getRhythm() {
    if (!b->hasAttribute("rhythm")) {
        throw AttributeNotFoundException("rhythm");
    }
    return b->getAttribute("rhythm");
};

void mei::Mei_verseLogMixIn::setRhythm(std::string _rhythm) {
    MeiAttribute *a = new MeiAttribute("rhythm", _rhythm);
    b->addAttribute(a);
};

bool mei::Mei_verseLogMixIn::hasRhythm() {
    return b->hasAttribute("rhythm");
};

void mei::Mei_verseLogMixIn::removeRhythm() {
    b->removeAttribute("rhythm");
};

/* include <rhythmmixin> */


