/////////////////////////////////////////////////////////////////////////////
// Name:        emscripten_main.cpp
// Author:      Rodolfo Zitellini
// Created:     05/11/2013
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#include <emscripten/bind.h>

#include "meidocument.h"
#include "meielement.h"
#include "import/xmlimport.h"

using namespace mei;
using namespace emscripten;

// Binding code
EMSCRIPTEN_BINDINGS(libmei) {
    class_<MeiDocument>("MeiDocument")
    .constructor<std::string>()
    .function("getRootElement", &MeiDocument::getRootElement, allow_raw_pointers())
    .function("getVersion", &MeiDocument::getVersion)
    ;
    
    class_<MeiElement>("MeiElement")
    .constructor<std::string>()
    .function("getId", &MeiElement::getId)
    ;
    
    class_<XmlImport>("XmlImport")
    .constructor<>()
    .class_function("documentFromText", &XmlImport::documentFromText, allow_raw_pointers())
    ;
}
