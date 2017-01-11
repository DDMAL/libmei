#include "externalsymbolsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::ExtsymMixIn::ExtsymMixIn(MeiElement *b) {
    this->b = b;
};

mei::ExtsymMixIn::~ExtsymMixIn() {}
MeiAttribute* mei::ExtsymMixIn::getGlyphname() {
    if (!b->hasAttribute("glyphname")) {
        return NULL;
    }
    return b->getAttribute("glyphname");
};

void mei::ExtsymMixIn::setGlyphname(std::string _glyphname) {
    MeiAttribute *a = new MeiAttribute("glyphname", _glyphname);
    b->addAttribute(a);
};

bool mei::ExtsymMixIn::hasGlyphname() {
    return b->hasAttribute("glyphname");
};

void mei::ExtsymMixIn::removeGlyphname() {
    b->removeAttribute("glyphname");
};
MeiAttribute* mei::ExtsymMixIn::getGlyphnum() {
    if (!b->hasAttribute("glyphnum")) {
        return NULL;
    }
    return b->getAttribute("glyphnum");
};

void mei::ExtsymMixIn::setGlyphnum(std::string _glyphnum) {
    MeiAttribute *a = new MeiAttribute("glyphnum", _glyphnum);
    b->addAttribute(a);
};

bool mei::ExtsymMixIn::hasGlyphnum() {
    return b->hasAttribute("glyphnum");
};

void mei::ExtsymMixIn::removeGlyphnum() {
    b->removeAttribute("glyphnum");
};

/* include <glyphnummixin> */


