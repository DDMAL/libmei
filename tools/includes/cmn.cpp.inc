/* #include_block */
#include "meielement.h"
#include "meidocument.h"
#include <mei/shared.h>
#include <vector>
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;

using std::vector;
using std::find;
using mei::MeiElement;
using mei::MeiDocument;
using mei::Staff;
/* #include_block */

/* <tie> */
/**
 * \brief get all members of this tie.
 * An element is a member of the tie if it lies between the elements specified
 * by the startid and endid attributes of the tie.
 * The elements must be children of a Staff element that has the same name as the 'n' attribute of
 * this tie. If this tie has no startid, endid, or n attibute, no members will be returned.
 */
std::vector<mei::MeiElement*> mei::Tie::getMembers() {
    MeiAttribute *end = m_Startendid.getEndid();
    MeiAttribute *start = m_Startid.getStartid();

    vector<MeiElement*> tree = getDocument()->getFlattenedTree();
    vector<MeiElement*> res;

    MeiAttribute *staff = m_Staffident.getStaff();
    if (staff && start && end) {
        string staffName = staff->getValue();
        MeiElement* startElement = getDocument()->getElementById(start->getValue());
        MeiElement* endElement = getDocument()->getElementById(end->getValue());

        for (unsigned int i = startElement->getPositionInDocument(); i <= endElement->getPositionInDocument(); ++i) {
            if (tree[i]->getName() == "note" || tree[i]->getName() == "rest") {
                Staff *parentStaff = dynamic_cast<Staff*>(tree[i]->getAncestor("staff"));
                MeiAttribute *parentStaffN = parentStaff->m_Common.getN();
                if (parentStaffN && parentStaffN->getValue() == staffName) {
                    res.push_back(tree[i]);
                }
            }
        }
    }
    return res;
}

MeiElement* mei::Tie::getSystem() {
    return this->lookBack("sb");
}

/* </tie> */
