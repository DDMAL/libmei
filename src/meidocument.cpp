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
#include "meinamespace.h"

using std::map;
using std::string;
using std::vector;
using std::find;

using std::cout;
using std::endl;

using mei::MeiElement;
using mei::MeiNamespace;

mei::MeiDocument::MeiDocument() {
    this->root = NULL;
    this->meiVersion = MEI_VERSION;
    // add the default MEI namespace
    MeiNamespace* mei = new MeiNamespace(MEI_PREFIX, MEI_NS);
    this->namespaces.push_back(mei);
}

bool mei::MeiDocument::hasNamespace(string href) {
    if (this->namespaces.empty()) return false;
    for (vector<MeiNamespace*>::iterator iter = namespaces.begin(); iter != namespaces.end(); ++iter) {
        if ((*iter)->getHref() == href) {
            return true;
        }
    }
    return false;
}

MeiNamespace* mei::MeiDocument::getNamespace(string href) {
    for (vector<MeiNamespace*>::iterator iter = namespaces.begin(); iter != namespaces.end(); ++iter) {
        if ((*iter)->getHref() == href) return *iter;
    }
    return NULL;
}

vector<mei::MeiNamespace*> mei::MeiDocument::getNamespaces() {
    return this->namespaces;
}

// note: should this raise an error if we try to add a namespace that already exists?
void mei::MeiDocument::addNamespace(mei::MeiNamespace *ns) {
    if (!hasNamespace(ns->getHref())) {
        this->namespaces.push_back(ns);
    }
}

MeiElement* mei::MeiDocument::getRootElement() {
    return root;
}

void mei::MeiDocument::setRootElement(MeiElement* root) {
    this->root = root;
    root->setDocument(this);

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
    for (map<string, MeiElement*>::iterator iter = idMap.begin(); iter != idMap.end(); ++iter) {
        if ((*iter).second->getName() == name) {
            ret.push_back((*iter).second);
        }
    }
    return ret;
}

int mei::MeiDocument::getPositionInDocument(MeiElement* element) {
    vector<MeiElement*> els = this->getFlattenedTree();
    vector<MeiElement*>::iterator pos = find(els.begin(), els.end(), element);
    if (pos != els.end()) {
        return pos - els.begin();
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
    int diff = flattenedDoc.size() - (pos - flattenedDoc.begin()) + 1;

    // topsy turvy world, where ++ is actually -- (iterating backwards..sdrawkcab gnitareti)
    for (vector<MeiElement*>::reverse_iterator iter = flattenedDoc.rbegin() + diff; iter != flattenedDoc.rend(); ++iter) {
        if ((*iter)->getName() == name) {
            return (*iter);
        }
    }
    return NULL;
}

//MeiElement* mei::MeiDocument::lookBack(int startpos, std::string elName, bool isAncestor) {
//    int diff = flattenedDoc.size() - startpos;
//    
//    for (std::vector<MeiElement*>::reverse_iterator iter = flattenedDoc.rbegin() + diff; iter != flattenedDoc.rend(); ++iter) {
//        // check to see if our original 
//        
//        
//        if () {
//            
//        }
//    }
//}

