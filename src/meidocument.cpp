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
#include <iostream>
#include <algorithm>

#include "meielement.h"

using std::map;
using std::string;
using std::vector;
using std::find;

using mei::MeiElement;

mei::MeiDocument::MeiDocument(string meiVers) {
    this->root = NULL;
    this->meiVersion = meiVers;
}

mei::MeiDocument::MeiDocument() {
    this->root = NULL;
    this->meiVersion = *--MEI_VERSION.end();
}

mei::MeiDocument::~MeiDocument() {
    vector<MeiElement*>::iterator iter;
    for(iter = flattenedDoc.begin(); iter != flattenedDoc.end(); ++iter) {
       delete *iter; 
    }
}

MeiElement* mei::MeiDocument::getRootElement() {
    return root;
}

void mei::MeiDocument::setRootElement(MeiElement* root) {
    this->root = root;
    root->setDocument(this);

    // when we set the root element we also assume that this will set the namespace for the MEI document.
    MeiAttribute* meins = new MeiAttribute("xmlns", MEI_NS);
    root->addAttribute(meins);
    
    MeiAttribute* meiversion = new MeiAttribute("meiversion", this->meiVersion);
    root->addAttribute(meiversion);

    updateFlattenedTree();
}

void mei::MeiDocument::updateFlattenedTree() {
    flattenedDoc = root->flatten();
}

string mei::MeiDocument::getVersion() {
    return meiVersion;
}

void mei::MeiDocument::addIdMap(string id, MeiElement *element) {
    idMap.insert(std::make_pair(id, element));
}

void mei::MeiDocument::rmIdMap(string id) {
    map<string, MeiElement*>::iterator iter = idMap.find(id);
    idMap.erase(iter);
}

MeiElement* mei::MeiDocument::getElementById(string id) {
    map<string, MeiElement*>::iterator iter = idMap.find(id);
    if (iter == idMap.end()) {
        return NULL;
    } else {
        return iter->second;
    }
}

vector<MeiElement*> mei::MeiDocument::getElementsByName(string name) {
    vector<MeiElement*> ret;
    for (vector<MeiElement*>::iterator iter = flattenedDoc.begin(); iter != flattenedDoc.end(); ++iter) {
        if ((*iter)->getName() == name) {
            ret.push_back((*iter));
        }
    }
    return ret;
}

int mei::MeiDocument::getPositionInDocument(MeiElement* element) {
    vector<MeiElement*> els = this->getFlattenedTree();
    vector<MeiElement*>::iterator pos = find(els.begin(), els.end(), element);
    if (pos != els.end()) {
        return (int)std::distance(els.begin(), pos);
        //        return pos - els.begin();
    }
    return -1;
}

const std::vector<MeiElement*> &mei::MeiDocument::getFlattenedTree() {
    return flattenedDoc;
}

MeiElement* mei::MeiDocument::lookBack(MeiElement* from, std::string name) {
    // this skips the element at startpos, so that the first result is its immediate neighbour.
    vector<MeiElement*>::iterator pos = find(flattenedDoc.begin(), flattenedDoc.end(), from);

    if (pos == flattenedDoc.end()) {
        return NULL;
    }

    /* since we'll be iterating backwards from the <from> position, 
     * we want to find the reverse difference. We subtract the position from the size.
     * We add 1 so that we can skip the element itself and start at the
     * preceding element.
     */
    int backwardsPos = (int)std::distance(flattenedDoc.begin(), pos);
    int diff = (int)flattenedDoc.size() - backwardsPos;

    // topsy turvy world, where ++ is actually -- (iterating backwards..sdrawkcab gnitareti)
    for (vector<MeiElement*>::reverse_iterator iter = flattenedDoc.rbegin() + diff; iter != flattenedDoc.rend(); ++iter) {
        if ((*iter)->getName() == name) {
            return (*iter);
        }
    }
    return NULL;
}
