/*
 *  meidocument.cpp
 *  libmei
 *
 *  Created by Mahtab Ghamsari-Esfahani on 3/11/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#include "meidocument.h"
#include "meielement.h"

MeiDocument::MeiDocument(string name, string encoding) {
	this->docname = name;
	this->encoding = encoding;
}

string MeiDocument::getName() {
	return docname;
}

string MeiDocument::getEncoding() {
	return encoding;
}

void MeiDocument::setEncoding(string encoding) {
	this->encoding = encoding;
}

MeiElement* MeiDocument::getRootElement() {
	return root;
}

void MeiDocument::setRootElement(MeiElement* root) {
	this->root = root;
}