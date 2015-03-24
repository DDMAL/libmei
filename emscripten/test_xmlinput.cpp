//
//  test_xmlinput.cpp
//  libmei
//
//  Created by Andrew Hankinson on 11-08-18.
//  Copyright 2011 McGill University. All rights reserved.
//

#include <iostream>
#include <import/xmlimport.h>
#include <meielement.h>
#include <meidocument.h>
#include <exceptions.h>

#include <iostream>
#include <string>
#include <vector>


using std::string;
using std::vector;

int main(int argc, char** argv)
{
    //mei::XmlImport import;
    mei::MeiDocument *d = mei::XmlImport::documentFromText("<?xml version='1.0' encoding='UTF-8'?><mei meiversion='2013'></mei>");
    std::cout << d->getVersion();
    
}