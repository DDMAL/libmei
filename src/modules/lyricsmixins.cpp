
#include "lyricsmixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::VerseLogMixIn::VerseLogMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::VerseLogMixIn::getRefrain() {
    if (!b->hasAttribute("refrain")) {
        throw AttributeNotFoundException("refrain");
    }
    return b->getAttribute("refrain");
};

void mei::VerseLogMixIn::setRefrain(std::string _refrain) {
    if (!b->hasAttribute("refrain")) {
        MeiAttribute *a = new MeiAttribute("refrain", _refrain);
        b->addAttribute(a);
    }
};

bool mei::VerseLogMixIn::hasRefrain() {
    return b->hasAttribute("refrain");
};

void mei::VerseLogMixIn::removeRefrain() {
    b->removeAttribute("refrain");
};

MeiAttribute* mei::VerseLogMixIn::getRhythm() {
    if (!b->hasAttribute("rhythm")) {
        throw AttributeNotFoundException("rhythm");
    }
    return b->getAttribute("rhythm");
};

void mei::VerseLogMixIn::setRhythm(std::string _rhythm) {
    if (!b->hasAttribute("rhythm")) {
        MeiAttribute *a = new MeiAttribute("rhythm", _rhythm);
        b->addAttribute(a);
    }
};

bool mei::VerseLogMixIn::hasRhythm() {
    return b->hasAttribute("rhythm");
};

void mei::VerseLogMixIn::removeRhythm() {
    b->removeAttribute("rhythm");
};



