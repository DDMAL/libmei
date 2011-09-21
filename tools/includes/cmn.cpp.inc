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

/* <tie> */
std::vector<mei::MeiElement*> mei::Tie::getMembers() {
    // gets the member notes of the tie.
    MeiDocument* doc = this->getDocument();

    string startid = this->getAttribute("startid")->getValue();
    string endid = this->getAttribute("endid")->getValue();

    MeiElement* startElement = doc->getElementById(startid);
    MeiElement* endElement = doc->getElementById(endid);

    vector<MeiElement*> flat = doc->getFlattenedTree();
    vector<MeiElement*> res;
    string staff = this->attachedToStaff();

    for (unsigned int i = startElement->getPositionInDocument(); i <= endElement->getPositionInDocument(); ++i) {
        if (flat[i]->getName() == "note" || flat[i]->getName() == "rest") {
            if(flat[i]->getAncestor("staff")->getAttribute("n")->getValue() == staff) {
                res.push_back(flat[i]);
            }
        }
    }
    return res;
}

string mei::Tie::attachedToStaff() {
    return this->getAttribute("staff")->getValue();
}

MeiElement* mei::Tie::getSystem() {
    return this->lookBack("sb");
}

/* </tie> */