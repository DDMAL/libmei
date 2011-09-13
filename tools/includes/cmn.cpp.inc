/* #include_block */
#include "meielement.h"
#include "meidocument.h"
#include <vector>

using std::vector;
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

    vector<MeiElement*> res;
    res.push_back(startElement);
    res.push_back(endElement);

    return res;
}
/* </tie> */