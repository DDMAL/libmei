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
#include "export/xmlexport.h"

using namespace mei;
using namespace emscripten;

// Binding code
EMSCRIPTEN_BINDINGS(libmei) {
    register_vector<MeiAttribute*>("MeiAttributeList");
    register_vector<MeiElement*>("MeiElementList");

    class_<MeiDocument>("MeiDocument")
    .constructor<>()
    .constructor<std::string>()
    .function("getRootElement", &MeiDocument::getRootElement, allow_raw_pointers())
    .function("setRootElement", &MeiDocument::setRootElement, allow_raw_pointers())
    .function("getVersion", &MeiDocument::getVersion)
    .function("getElementById", select_overload<MeiElement*(std::string)>(&MeiDocument::getElementById), allow_raw_pointers())
    .function("getElementsByName", &MeiDocument::getElementsByName, allow_raw_pointers())
    .function("getPositionInDocument", &MeiDocument::getPositionInDocument, allow_raw_pointers())
    .function("lookBack", &MeiDocument::lookBack, allow_raw_pointers())
    .function("getFlattenedTree", &MeiDocument::getFlattenedTree, allow_raw_pointers())
    ;
    
    class_<MeiAttribute>("MeiAttribute")
    .constructor<std::string, std::string>()
    .function("getName", &MeiAttribute::getName)
    .function("getValue", &MeiAttribute::getValue)
    .function("getElement", &MeiAttribute::getElement, allow_raw_pointers())
    ;
    
    class_<MeiElement>("MeiElement")
    .constructor<std::string>()
    // .constructor<const MeiElement>() NB (2015): Constructors with the same number of arguments are not currently supported in emscripten.
    .function("getId", &MeiElement::getId)
    .function("getName", &MeiElement::getName)
    .function("getTail", &MeiElement::getTail)
    .function("setTail", &MeiElement::setTail)
    .function("getValue", &MeiElement::getValue)
    .function("setValue", &MeiElement::setValue)
    .function("getAttribute", &MeiElement::getAttribute, allow_raw_pointers())
    .function("getAttributes", &MeiElement::getAttributes, allow_raw_pointers())
 //   .function("addAttribute", &MeiElement::addAttribute, allow_raw_pointers())
    .function("addAttribute", select_overload<void(MeiAttribute*)>(&MeiElement::addAttribute), allow_raw_pointers())
    .function("addAttribute", select_overload<void(std::string, std::string)>(&MeiElement::addAttribute))
    .function("setAttributes", &MeiElement::setAttributes)
    .function("removeAttribute", &MeiElement::removeAttribute)
    .function("addChild", &MeiElement::addChild, allow_raw_pointers())
    .function("printElement", select_overload<void()>(&MeiElement::printElement))
    ;
    
    class_<XmlImport>("XmlImport")
    .constructor<>()
    .class_function("documentFromText", &XmlImport::documentFromText, allow_raw_pointers())
    ;

    class_<XmlExport>("XmlExport")
    .constructor<MeiDocument*>()
    .class_function("documentToText", &XmlExport::documentToText, allow_raw_pointers())
    ;
}
