//
//  runmei.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-14.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <mei/meielement.h>
#include <mei/exceptions.h>

#include <exception>
#include <stdexcept>

#include <stdio.h>
#include <execinfo.h>
#include <signal.h>
#include <stdlib.h>

using namespace std;

void handler(int sig) {
    void *array[10];
    size_t size;
    
    // get void*'s for all entries on the stack
    size = backtrace(array, 10);
    
    // print out all the frames to stderr
    fprintf(stderr, "Error: signal %d:\n", sig);
    backtrace_symbols_fd(array, size, 2);
    exit(1);
}

int main(int argc, char **argv) {
    signal(SIGSEGV, handler);
    
    MeiElement * p = new MeiElement("note");
    
    MeiAttribute * attr1 = new MeiAttribute("pname", "c");
    MeiAttribute * attr2 = new MeiAttribute("stem.dir", "down");
    
    vector<MeiAttribute*> attrs;
    attrs.push_back(attr1);
    attrs.push_back(attr2);
    p->setAttributes(attrs);
    
    string n = p->getAttributeValue("pname");
    
    cout << "Pname: " << n << "\n";

    try {
        p->getAttribute("color");
    } catch (AttributeNotFoundException) {
        cout << "exceptions!!!" << "\n";
    }

    cout << "done." << "\n";
    
    return 0;
}