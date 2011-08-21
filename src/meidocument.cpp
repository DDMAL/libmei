/*
    Copyright (c) 2011 Mahtab Ghamsari-Esfahani, Jamie Klassen, Alastair Porter, Andrew Hankinson

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#include "meidocument.h"

#include <map>
#include <string>
#include <vector>

#include "meielement.h"

using std::map;
using std::string;
using std::vector;

using mei::MeiElement;

mei::MeiDocument::MeiDocument(string docname) {
    this->docname = docname;
    this->root = NULL;
}

const string mei::MeiDocument::getDocName() {
    return docname;
}

void mei::MeiDocument::setDocName(string docname) {
    this->docname = docname;
}

MeiElement* mei::MeiDocument::getRootElement() {
    return root;
}

void mei::MeiDocument::setRootElement(MeiElement* root) {
    if (root->getNs() == "") {
        root->setNs(MEI_NS);
    }
    root->addAttribute(new MeiAttribute("meiversion", MEI_VERSION));
    this->root = root;
}

MeiElement* mei::MeiDocument::getElementById(string id) {
    map<string, MeiElement*>::iterator it = idmap.find(id);
    if (it != idmap.end()) {
        return it->second;
    }
    return NULL;
}

mei::MeiElement* /*mei::MeiDocument::*/getElementById2(string cid) {
//    for (vector<mei::MeiElement*>::const_iterator iter = root->getChildren().begin(); iter != root->getChildren().end(); ++iter) {
//        if ((*iter)->getId() == cid) return *iter;
//    }
    return NULL;
}

map<string, MeiElement*> mei::MeiDocument::getMap() {
    if (idmap.size() == 0) {
        FillMap(root);
    }
    return idmap;
}

void mei::MeiDocument::FillMap(MeiElement* element) {
    MeiAttribute *idattr = element->getAttribute("id");
    if (idattr) {
        idmap.insert(std::make_pair(idattr->getValue(), element));
    }
    for (vector<MeiElement*>::const_iterator i = element->getChildren().begin(); i != element->getChildren().end(); ++i) {
        FillMap(*i);
    }
}
