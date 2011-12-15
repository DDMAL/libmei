/* #include_block */
#include "meielement.h"
#include "meidocument.h"
#include <vector>
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;

using std::vector;
using std::find;
using mei::MeiElement;
using mei::MeiDocument;
/* #include_block */


/* <note> */
string mei::Note::getLayerIdent() {
    return this->getAncestor("layer")->getAttribute("n")->getValue();
}

MeiElement* mei::Note::getLayer() {
    return this->getAncestor("layer");
}

string mei::Note::getStaffIdent() {
    return this->getAncestor("staff")->getAttribute("n")->getValue();
}

MeiElement* mei::Note::getStaff() {
    return this->getAncestor("staff");
}

MeiElement* mei::Note::getSystem() {
    return this->lookBack("sb");
}
/* </note> */

/* <rest> */
string mei::Rest::getLayerIdent() {
    return this->getAncestor("layer")->getAttribute("n")->getValue();
}

MeiElement* mei::Rest::getLayer() {
    return this->getAncestor("layer");
}

string mei::Rest::getStaffIdent() {
    return this->getAncestor("staff")->getAttribute("n")->getValue();
}

MeiElement* mei::Rest::getStaff() {
    return this->getAncestor("staff");
}

MeiElement* mei::Rest::getSystem() {
    return this->lookBack("sb");
}
/* </rest> */

/* <chord> */
string mei::Chord::getLayerIdent() {
    return this->getAncestor("layer")->getAttribute("n")->getValue();
}

MeiElement* mei::Chord::getLayer() {
    return this->getAncestor("layer");
}

string mei::Chord::getStaffIdent() {
    return this->getAncestor("staff")->getAttribute("n")->getValue();
}

MeiElement* mei::Chord::getStaff() {
    return this->getAncestor("staff");
}

MeiElement* mei::Chord::getSystem() {
    return this->lookBack("sb");
}
/* </chord> */

/* <barLine> */
string mei::BarLine::getLayerIdent() {
    return this->getAncestor("layer")->getAttribute("n")->getValue();
}

MeiElement* mei::BarLine::getLayer() {
    return this->getAncestor("layer");
}

string mei::BarLine::getStaffIdent() {
    return this->getAncestor("staff")->getAttribute("n")->getValue();
}

MeiElement* mei::BarLine::getStaff() {
    return this->getAncestor("staff");
}

MeiElement* mei::BarLine::getSystem() {
    return this->lookBack("sb");
}
/* </barLine> */

/* <clef> */
string mei::Clef::getLayerIdent() {
    return this->getAncestor("layer")->getAttribute("n")->getValue();
}

MeiElement* mei::Clef::getLayer() {
    return this->getAncestor("layer");
}

string mei::Clef::getStaffIdent() {
    return this->getAncestor("staff")->getAttribute("n")->getValue();
}

MeiElement* mei::Clef::getStaff() {
    return this->getAncestor("staff");
}

MeiElement* mei::Clef::getSystem() {
    return this->lookBack("sb");
}
/* </clef> */

/* <custos> */
string mei::Custos::getLayerIdent() {
    return this->getAncestor("layer")->getAttribute("n")->getValue();
}

MeiElement* mei::Custos::getLayer() {
    return this->getAncestor("layer");
}

string mei::Custos::getStaffIdent() {
    return this->getAncestor("staff")->getAttribute("n")->getValue();
}

MeiElement* mei::Custos::getStaff() {
    return this->getAncestor("staff");
}

MeiElement* mei::Custos::getSystem() {
    return this->lookBack("sb");
}
/* </custos> */

/* <pad> */
string mei::Pad::getLayerIdent() {
    return this->getAncestor("layer")->getAttribute("n")->getValue();
}

MeiElement* mei::Pad::getLayer() {
    return this->getAncestor("layer");
}

string mei::Pad::getStaffIdent() {
    return this->getAncestor("staff")->getAttribute("n")->getValue();
}

MeiElement* mei::Pad::getStaff() {
    return this->getAncestor("staff");
}

MeiElement* mei::Pad::getSystem() {
    return this->lookBack("sb");
}
/* </pad> */

/* <space> */
string mei::Space::getLayerIdent() {
    return this->getAncestor("layer")->getAttribute("n")->getValue();
}

MeiElement* mei::Space::getLayer() {
    return this->getAncestor("layer");
}

string mei::Space::getStaffIdent() {
    return this->getAncestor("staff")->getAttribute("n")->getValue();
}

MeiElement* mei::Space::getStaff() {
    return this->getAncestor("staff");
}

MeiElement* mei::Space::getSystem() {
    return this->lookBack("sb");
}
/* </space> */
