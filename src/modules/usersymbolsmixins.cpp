#include "usersymbolsmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AltsymMixIn::AltsymMixIn(MeiElement *b) {
    this->b = b;
};

mei::AltsymMixIn::~AltsymMixIn() {}
MeiAttribute* mei::AltsymMixIn::getAltsym() {
    if (!b->hasAttribute("altsym")) {
        return NULL;
    }
    return b->getAttribute("altsym");
};

void mei::AltsymMixIn::setAltsym(std::string _altsym) {
    MeiAttribute *a = new MeiAttribute("altsym", _altsym);
    b->addAttribute(a);
};

bool mei::AltsymMixIn::hasAltsym() {
    return b->hasAttribute("altsym");
};

void mei::AltsymMixIn::removeAltsym() {
    b->removeAttribute("altsym");
};

/* include <altsymmixin> */


