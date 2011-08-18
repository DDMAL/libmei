# -- coding: utf-8 --

import os
import codecs
import textwrap
import logging
import types
lg = logging.getLogger('schemaparser')
import pdb

LANG_NAME="C++"

AUTHORS = "Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani"

METHODS_HEADER_TEMPLATE = """
    {documentation}
    MeiAttribute* get{attNameUpper}();
    void set{attNameUpper}(std::string _{attNameLowerJoined});
    bool has{attNameUpper}();
    void remove{attNameUpper}();
"""

METHODS_IMPL_TEMPLATE = """
MeiAttribute* mei::{className}::get{attNameUpper}() {{
    if (!{accessor}hasAttribute("{attNameLower}")) {{
        throw AttributeNotFoundException("{attNameLower}");
    }}
    return {accessor}getAttribute("{attNameLower}");
}};

void mei::{className}::set{attNameUpper}(std::string _{attNameLowerJoined}) {{
    if (!{accessor}hasAttribute("{attNameLower}")) {{
        MeiAttribute *a = new MeiAttribute("{attNameLower}", _{attNameLowerJoined});
        {accessor}addAttribute(a);
    }}
}};

bool mei::{className}::has{attNameUpper}() {{
    return {accessor}hasAttribute("{attNameLower}");
}};

void mei::{className}::remove{attNameUpper}() {{
    {accessor}removeAttribute("{attNameLower}");
}};
"""

CLASSES_IMPL_TEMPLATE = """

#include "{moduleNameLower}.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;

{elements}

"""
CLASSES_HEAD_TEMPLATE = """
{license}

#ifndef {moduleNameCaps}_H_
#define {moduleNameCaps}_H_

#include "meielement.h"
#include "exceptions.h"
{includes}

namespace mei {{
    {elements}
}}
#endif // {moduleNameCaps}_H_
"""

ELEMENT_CLASS_HEAD_TEMPLATE = """
{documentation}
class MEI_EXPORT {elementNameUpper} : public MeiElement {{
    public:
        {elementNameUpper}();
        virtual ~{elementNameUpper}() {{}};
        {methods}
        {mixIns}
    private:
        REGISTER_DECLARATION({elementNameUpper});
}};

"""

ELEMENT_CLASS_IMPL_CONS_TEMPLATE = """
mei::{elementNameUpper}::{elementNameUpper}() : {mixIns} 
{{
}};
REGISTER_DEFINITION(mei::{elementNameUpper}, \"{elementNameLower}\");

{methods}
"""

MIXIN_CLASS_HEAD_TEMPLATE = """
class {attGroupNameUpper}MixIn {{
    public:
        {attGroupNameUpper}MixIn(MeiElement *b);
        virtual ~{attGroupNameUpper}MixIn() {{}};
        {methods}
    private:
        MeiElement *b;
}};

"""

MIXIN_CLASS_IMPL_CONS_TEMPLATE = """
mei::{attGroupNameUpper}MixIn::{attGroupNameUpper}MixIn(MeiElement *b) {{
    this->b = b;
}};
{methods}
"""

ELEMENT_MIXIN_TEMPLATE = """
    {attNameUpper}MixIn    m_{attNameUpper};"""

LICENSE = """/*
    Copyright (c) 2011 {authors}
    
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
*/"""

def create(schema):
    lg.debug("Begin C++ Output ... ")
    
    __create_mixin_classes(schema)
    __create_element_classes(schema)
    
    lg.debug("Success!")
    

def __create_mixin_classes(schema):
    ###########################################################################
    # Header
    ###########################################################################
    lg.debug("Creating Mixin Headers.")
    for module, atgroup in sorted(schema.attribute_group_structure.iteritems()):
        fullout = ""
        classes = ""
        methods = ""
        
        if not atgroup:
            # continue if we don't have any attribute groups in this module
            continue
        
        for gp, atts in sorted(atgroup.iteritems()):
            if not atts:
                continue
            
            methods = ""
            for att in atts:
                substrings = {
                    "attNameUpper": schema.cc(schema.strpatt(att)),
                    "attNameLower": att,
                    "attNameLowerJoined": schema.strpdot(att),
                    "documentation": "{0}".format("/** \\brief   "+"\n    * ".join(textwrap.wrap(((schema.getattdocs(att)).encode('utf-8')),80))+"\n    */\n")
                }
                methods += METHODS_HEADER_TEMPLATE.format(**substrings)
                
            clsubstr = {
                "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                "methods": methods
            }
            classes += MIXIN_CLASS_HEAD_TEMPLATE.format(**clsubstr)
        
        tplvars = {
            "includes": "",
            'license': LICENSE.format(authors=AUTHORS),
            'moduleNameCaps': "{0}MIXIN".format(module.upper()),
            'elements': classes
        }
        fullout = CLASSES_HEAD_TEMPLATE.format(**tplvars)
        fmh = open(os.path.join(schema.outdir, "{0}mixins.h".format(module.lower())), 'w')
        fmh.write(fullout)
        fmh.close()
        lg.debug("\tCreated {0}mixins.h".format(module.lower()))
        
        
    lg.debug("Creating Mixin Implementations")
    ########################################################################### 
    # Implementation
    ###########################################################################
    for module, atgroup in sorted(schema.attribute_group_structure.iteritems()):
        fullout = ""
        classes = ""
        methods = ""
        
        if not atgroup:
            continue
        
        for gp, atts in sorted(atgroup.iteritems()):
            if not atts:
                continue
            methods = ""
            for att in atts:
                attsubstr = {
                    "className": "{0}MixIn".format(schema.cc(schema.strpatt(gp))),
                    "attNameUpper": schema.cc(att),
                    "attNameLower": att,
                    "attNameLowerJoined": schema.strpdot(att),
                    "accessor": "b->", # we need this for mixins
                }
                methods += METHODS_IMPL_TEMPLATE.format(**attsubstr)
            
            clsubstr = {
                "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                "methods": methods
            }
            classes += MIXIN_CLASS_IMPL_CONS_TEMPLATE.format(**clsubstr)
            
        tplvars = {
            "moduleNameLower": "{0}mixins".format(module),
            "elements": classes
        }
        fullout = CLASSES_IMPL_TEMPLATE.format(**tplvars)
        fmi = open(os.path.join(schema.outdir, "{0}mixins.cpp".format(module.lower())), 'w')
        fmi.write(fullout)
        fmi.close()
        lg.debug("\tCreated {0}mixins.cpp".format(module.lower()))

def __create_element_classes(schema):
    lg.debug("Creating Element Headers")
    ###########################################################################
    # Header
    ###########################################################################
    for module, elements in sorted(schema.element_structure.iteritems()):
        mixins = ""
        element_output = ""
        
        if not elements:
            continue
        includes = []
        for element, atgroups in sorted(elements.iteritems()):
            element_mixins = ""
            attribute_methods = ""
            for attribute in atgroups:
                if isinstance(attribute, types.ListType):
                    # it's our self-defined attributes.                        
                    for sda in attribute:
                        if sda == "xml:id":
                            continue
                        methstr = {
                            "attNameUpper": schema.cc(schema.strpatt(sda)),
                            "attNameLower": sda,
                            "attNameLowerJoined": schema.strpdot(sda),
                            "documentation": "{0}".format("/** \\brief   "+"\n    * ".join(textwrap.wrap(((schema.getattdocs(sda)).encode('utf-8')),80))+"\n    */")
                        }
                        attribute_methods += METHODS_HEADER_TEMPLATE.format(**methstr)
                        
                else:
                    element_mixins += ELEMENT_MIXIN_TEMPLATE.format(attNameUpper = schema.cc(schema.strpatt(attribute)))
                    
                    # figure out includes
                    if attribute in schema.inverse_attribute_group_structure.keys():
                        mod = schema.inverse_attribute_group_structure[attribute]
                        if mod not in includes:
                            includes.append(mod)
                        
            elvars = {
                "elementNameUpper": schema.cc(element),
                "methods": attribute_methods,
                "mixIns": element_mixins,
                "documentation": "{0}".format("/** \\brief   "+"\n    * ".join(textwrap.wrap(((schema.geteldocs(element)).encode('utf-8')),80))+"\n    */\n")
            }
            
            # pdb.set_trace()
            element_output += ELEMENT_CLASS_HEAD_TEMPLATE.format(**elvars)
            
        incl_output = ""
        incl_output += "#include \"mei.h\"\n"
        for incl in includes:
            incl_output += "#include \"{0}mixins.h\"\n".format(incl.lower())
        
        outvars = {
            "includes": incl_output,
            "license": LICENSE.format(authors = AUTHORS),
            "moduleNameCaps": module.upper(),
            "elements": element_output,
        }
        
        fullout = CLASSES_HEAD_TEMPLATE.format(**outvars)
        fmh = open(os.path.join(schema.outdir, "{0}.h".format(module.lower())), 'w')
        fmh.write(fullout)
        fmh.close()
        lg.debug("\tCreated {0}.h".format(module.lower()))
        
    # ########################################################################### 
    # # Implementation
    # ###########################################################################
    lg.debug("Creating Element Implementations")
    for module, elements in sorted(schema.element_structure.iteritems()):
        mixins = ""
        element_output = ""
        element_constructor = ""
        
        if not elements:
            continue
        
        for element, atgroups in sorted(elements.iteritems()):
            attribute_methods = ""
            element_mixins = "\n    MeiElement(\"{0}\"),\n".format(element)
            for attribute in atgroups:
                if isinstance(attribute, types.ListType):
                    for sda in attribute:
                        if sda == "xml:id":
                            continue
                        methstr = {
                            "className":schema.cc(element),
                            "attNameUpper": schema.cc(schema.strpatt(sda)),
                            "attNameLower": sda,
                            "attNameLowerJoined": schema.strpdot(sda),
                            "accessor": "", # we need this for mixins, but not for elements.
                        }
                        attribute_methods += METHODS_IMPL_TEMPLATE.format(**methstr)
                else:
                    element_mixins += "    m_{0}(this),\n".format(schema.cc(schema.strpatt(attribute)))
            element_mixins = element_mixins.rstrip(",\n")
            
            consvars = {
                'elementNameUpper': schema.cc(element),
                'elementNameLower': element,
                'mixIns': element_mixins,
                'methods': attribute_methods
            }
            
            element_constructor += ELEMENT_CLASS_IMPL_CONS_TEMPLATE.format(**consvars)
            
        implvars = {
            'moduleNameLower': module.lower(),
            'elements': element_constructor
        }
        fullout = CLASSES_IMPL_TEMPLATE.format(**implvars)
        
        fmi = open(os.path.join(schema.outdir, "{0}.cpp".format(module.lower())), 'w')
        fmi.write(fullout)
        fmi.close()
        lg.debug("\t Created {0}.cpp".format(module.lower()))


