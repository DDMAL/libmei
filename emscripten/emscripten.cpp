/////////////////////////////////////////////////////////////////////////////
// Name:        emscripten.cpp
// Author:      Laurent Pugin
// Created:     24/02/2015
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#include <emscripten/bind.h>

#include "meidocument.h"
#include "meielement.h"
#include "meiattribute.h"
#include "import/xmlimport.h"

using namespace mei;
using namespace emscripten;

// Binding code
EMSCRIPTEN_BINDINGS(libmei) {
    register_vector<MeiAttribute*>("MeiAttributeList");

    class_<MeiDocument>("MeiDocument")
    .constructor<std::string>()
//    .constructor<>()
    .function("getRootElement", &MeiDocument::getRootElement, allow_raw_pointers())
    .function("getVersion", &MeiDocument::getVersion)
    ;
    
    class_<MeiAttribute>("MeiAttribute")
    .constructor<std::string, std::string>()
    .function("getName", &MeiAttribute::getName)
    .function("getValue", &MeiAttribute::getValue)
    .function("getElement", &MeiAttribute::getElement, allow_raw_pointers())
    ;
    
    class_<MeiElement>("MeiElement")
    .constructor<std::string>()
    .function("getId", &MeiElement::getId)
    .function("getName", &MeiElement::getName)
    .function("getTail", &MeiElement::getTail)
    .function("getValue", &MeiElement::getValue)
    .function("getAttributes", &MeiElement::getAttributes, allow_raw_pointers())
 //   .function("addAttribute", &MeiElement::addAttribute, allow_raw_pointers())
    .function("addAttribute", select_overload<void(MeiAttribute*)>(&MeiElement::addAttribute), allow_raw_pointers())
    .function("addAttribute", select_overload<void(std::string, std::string)>(&MeiElement::addAttribute))
    .function("setAttributes", &MeiElement::setAttributes)
    .function("removeAttribute", &MeiElement::removeAttribute)
    ;
    
    class_<XmlImport>("XmlImport")
    .constructor<>()
    .class_function("documentFromText", &XmlImport::documentFromText, allow_raw_pointers())
    ;
}
