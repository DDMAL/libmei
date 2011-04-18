//
//  solesmes.h
//  libmei4
//
//  Created by Andrew Hankinson on 11-04-18.
//  Copyright 2011 McGill University. All rights reserved.
//
#include "meielement.h"
#include "meiattribute.h"
#include "exceptions.h"

class Layout: public MeiElement {
public:
    Layout();
private:
};

class Neume: public MeiElement {
    public:
        Neume();
    private:    
};

class Division: public MeiElement {
    public:
        Division();
    private:
};

class Episema: public MeiElement {
    public:
        Episema();
    private:
};