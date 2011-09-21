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