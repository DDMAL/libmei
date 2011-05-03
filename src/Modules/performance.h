//
//  performance.h
//  libmei4
//
//  Created by Andrew Hankinson on 11-04-29.
//  Copyright 2011 McGill University. All rights reserved.
//

#ifndef HEADER_H_
#define HEADER_H_

#include "meielement.h"

class Clip: public MeiElement {
public:
    Clip();
private:
};

class Recording: public MeiElement {
public:
    Recording();
private:
};

class Performance: public MeiElement {
public:
    Performance();
private:
};

class AVFile: public MeiElement {
public:
    AVFile();
private:
};

#endif