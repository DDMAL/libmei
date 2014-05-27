 # -- coding: utf-8 --

import os
import re
import codecs
import textwrap
import logging
import types
lg = logging.getLogger('schemaparser')
import pdb

LANG_NAME="C++"

NS_PREFIX_MAP = {
    "http://www.w3.org/XML/1998/namespace": "xml",
    "http://www.w3.org/1999/xlink": "xlink"
}

AUTHORS = "Andrew Hankinson, Alastair Porter, and Others"

METHODS_HEADER_TEMPLATE = """    void Set{attNameUpper}{attTypeName}({attType} {attNameLowerJoined}{attTypeName}) {{ m_{attNameLowerJoined}{attTypeName} = {attNameLowerJoined}{attTypeName}; }};
    {attType} Get{attNameUpper}{attTypeName}() {{ return m_{attNameLowerJoined}{attTypeName}; }};"""

MEMBERS_HEADER_TEMPLATE = """{documentation}
    {attType} m_{attNameLowerJoined}{attTypeName};
"""

METHODS_IMPL_TEMPLATE = """MeiAttribute* mei::{className}::get{attNameUpper}() {{
    if (!{accessor}hasAttribute("{attNameLower}")) {{
        throw AttributeNotFoundException("{attNameLower}");
    }}
    return {accessor}getAttribute("{attNameLower}");
}};

void mei::{className}::set{attNameUpper}(std::string _{attNameLowerJoined}) {{
    {namespaceDefinition}MeiAttribute *a = new MeiAttribute({attrNs}"{attNameLower}", _{attNameLowerJoined});
    {accessor}addAttribute(a);
}};

bool mei::{className}::has{attNameUpper}() {{
    return {accessor}hasAttribute("{attNameLower}");
}};

void mei::{className}::remove{attNameUpper}() {{
    {accessor}removeAttribute("{attNameLower}");
}};
"""

NAMESPACE_TEMPLATE = """MeiNamespace *s = new MeiNamespace("{prefix}", "{href}");\n    """

CLASSES_IMPL_TEMPLATE = """#include "{moduleNameLower}.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

{elements}

"""

CLASSES_HEAD_TEMPLATE = """{license}

#ifndef __VRV_{moduleNameCaps}_H__
#define __VRV_{moduleNameCaps}_H__

{includes}

namespace vrv {{
    
{elements}

}}

#endif  // __VRV_{moduleNameCaps}_H__

"""

MIXIN_CLASS_HEAD_TEMPLATE = """
//----------------------------------------------------------------------------
// Att{attGroupNameUpper}
//----------------------------------------------------------------------------

class Att{attGroupNameUpper} 
{{
public:
    Att{attGroupNameUpper}();
    virtual ~Att{attGroupNameUpper}();
    
    /**
     * @name Setters and getters for class members
     */
    ///@{{
{methods}
    ///@}}

protected:
{members}
    
/* include <{mixinNameLower}> */

}};
"""

MIXIN_CLASS_IMPL_CONS_TEMPLATE = """mei::{attGroupNameUpper}MixIn::{attGroupNameUpper}MixIn(MeiElement *b) {{
    this->b = b;
}};

mei::{attGroupNameUpper}MixIn::~{attGroupNameUpper}MixIn() {{}}
{methods}
/* include <{mixinNameLower}> */
"""

ELEMENT_MIXIN_TEMPLATE = """        {attNameUpper}MixIn    m_{attNameUpper};
"""

LICENSE = """/////////////////////////////////////////////////////////////////////////////
// Name:        attributes.h
// Author:      Laurent Pugin
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////
"""

def vrv_member_cc(name):
    cc = "".join([n[0].upper() + n[1:] for n in name.split(".")])
    return cc[0].lower() + cc[1:]
 
# globals
TEI_NS = {"tei": "http://www.tei-c.org/ns/1.0", "rng": "http://relaxng.org/ns/structure/1.0"}
    
def vrv_getatttype(schema, aname, includes_dir = ""):    
    """ returns the attribut type for element name, or string if not detectable."""
    el = schema.xpath("//tei:attDef[@ident=$name]/tei:datatype/rng:data/@type", name=aname, namespaces=TEI_NS)
    if el:
        if el[0] == "nonNegativeInteger" or el[0] == "positiveInteger":
            return ("int", "Int")
        elif el[0] == "decimal":
            return ("double", "Dbl")
    return ("std::string", "")

def create(schema, outdir, includes_dir = ""):
    lg.debug("Begin Verovio C++ Output ... ")
    
    __create_mixin_classes(schema, outdir, includes_dir)
    
    lg.debug("Success!")

def __get_docstr(text, indent=0):
    """ Format a docstring. Take the first sentence (. followed by a space)
        and use it for the brief. Then put the rest of the text after a blank
        line if there is text there
    """
    text = text.strip().encode("utf-8")
    dotpos = text.find(". ")
    if dotpos > 0:
        brief = text[:dotpos+1]
        content = text[dotpos+2:]
    else:
        brief = text
        content = ""
    if indent == 0:
        istr = ""
    else:
        istr = "{0:{1}}".format(" ", indent)
    
    if len(brief) > 1:
        brief = brief[0].upper() + brief[1:]
    else:
        brief = "---"
    brief = "\n{0} * ".format(istr).join(textwrap.wrap(brief, 80))
    content = "\n{0} * ".format(istr).join(textwrap.wrap(content, 80))
    docstr = "{0}/**".format(istr)
    if len(content) > 0 or brief.count("\n"):
        docstr += "\n{0} *".format(istr)
    docstr += " {0}".format(brief)
    if brief.count("\n") and len(content) == 0: 
        docstr += "\n{0}".format(istr)
    if len(content) > 0: 
        docstr += "\n{0} * {1}\n{0}".format(istr, content)
    docstr += " **/".format(istr)
    return docstr

def __create_mixin_classes(schema, outdir, includes_dir):
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
            
            members = ""
            methods = ""
            for att in atts:
                if len(att.split("|")) > 1:
                    ns,att = att.split("|")
                atttype, atttypename = vrv_getatttype(schema.schema, att, includes_dir)
                docstr = __get_docstr(schema.getattdocs(att), indent=4)
                substrings = {
                    "attNameUpper": schema.cc(schema.strpatt(att)),
                    "attNameLower": att,
                    "attNameLowerJoined": vrv_member_cc(att),
                    "documentation": docstr,
                    "attType": atttype,
                    "attTypeName": atttypename
                }
                if len(methods) > 0:
                    methods += "\n    //\n"
                methods += METHODS_HEADER_TEMPLATE.format(**substrings)
                members += MEMBERS_HEADER_TEMPLATE.format(**substrings)
                
            clsubstr = {
                "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                "methods": methods,
                "members": members,
                "mixinNameLower": "{0}mixin".format(att)
            }
            classes += MIXIN_CLASS_HEAD_TEMPLATE.format(**clsubstr)
        
        tplvars = {
            "includes": "",
            'license': LICENSE.format(authors=AUTHORS),
            'moduleNameCaps': "{0}MIXIN".format(module.upper()),
            'elements': classes.strip()
        }
        if "std::string" in classes:
            tplvars["includes"] = "#include <string>"
        fullout = CLASSES_HEAD_TEMPLATE.format(**tplvars)
        fmh = open(os.path.join(outdir, "{0}mixins.h".format(module.lower())), 'w')
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
                if len(att.split("|")) > 1:
                    # we have a namespaced attribute
                    ns,att = att.split("|")
                    nssubstr = {
                        "prefix": NS_PREFIX_MAP[ns],
                        "href": ns
                    }
                    nsDef = NAMESPACE_TEMPLATE.format(**nssubstr)
                    attrNs = "s, "
                else:
                    nsDef = ""
                    attrNs = ""

                attsubstr = {
                    "className": "{0}MixIn".format(schema.cc(schema.strpatt(gp))),
                    "attNameUpper": schema.cc(att),
                    "attNameLower": att,
                    "attNameLowerJoined": schema.strpdot(att),
                    "namespaceDefinition": nsDef,
                    "attrNs": attrNs,
                    "accessor": "b->", # we need this for mixins
                }
                methods += METHODS_IMPL_TEMPLATE.format(**attsubstr)
            
            clsubstr = {
                "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                "methods": methods,
                "mixinNameLower": "{0}mixin".format(att)
            }
            classes += MIXIN_CLASS_IMPL_CONS_TEMPLATE.format(**clsubstr)
            
        tplvars = {
            "moduleNameLower": "{0}mixins".format(module.lower()),
            "elements": classes
        }
        fullout = CLASSES_IMPL_TEMPLATE.format(**tplvars)
        fmi = open(os.path.join(outdir, "{0}mixins.cpp".format(module.lower())), 'w')
        fmi.write(fullout)
        fmi.close()
        lg.debug("\tCreated {0}mixins.cpp".format(module.lower()))

def parse_includes(file_dir, includes_dir):
    lg.debug("Parsing includes")

    # get the files in the includes directory
    includes = [f for f in os.listdir(includes_dir) if not f.startswith(".")]

    for dp,dn,fn in os.walk(file_dir):
        for f in fn:
            if f.startswith("."):
                continue
            methods, inc = __process_include(f, includes, includes_dir)
            if methods:
                __parse_codefile(methods, inc, dp, f)

def __process_include(fname, includes, includes_dir):
    name,ext = os.path.splitext(fname)
    new_methods, includes_block = None, None
    if "{0}.inc".format(fname) in includes:
        lg.debug("\tProcessing include for {0}".format(fname))
        f = open(os.path.join(includes_dir, "{0}.inc".format(fname)), 'r')
        includefile = f.read()
        f.close()
        new_methods, includes_block = __parse_includefile(includefile)
        return (new_methods, includes_block)
    else:
        return (None, None)

def __parse_includefile(contents):
    # parse the include file for our methods.
    ret = {}
    inc = []
    reg = re.compile(r"/\* <(?P<elementName>[^>]+)> \*/(.+?)/\* </(?P=elementName)> \*/", re.MULTILINE|re.DOTALL)
    ret = dict(re.findall(reg, contents))

    # grab the include for the includes...
    reginc = re.compile(r"/\* #include_block \*/(.+?)/\* #include_block \*/", re.MULTILINE|re.DOTALL)
    inc = re.findall(reginc, contents)
    return (ret, inc)

def __parse_codefile(methods, includes, directory, codefile):
    f = open(os.path.join(directory, codefile), 'r')
    contents = f.readlines()
    f.close()
    regmatch = re.compile(r"/\* include <(?P<elementName>[^>]+)> \*/")
    incmatch = re.compile(r"/\* #include_block \*/")
    for i,line in enumerate(contents):
        imatch = re.match(incmatch, line)
        if imatch:
            if includes:
                contents[i] = includes[0]

        match = re.match(regmatch, line)
        if match:
            if match.group("elementName") in methods.keys():
                contents[i] = methods[match.group("elementName")].lstrip("\n") + "\n"
    
    f = open(os.path.join(directory, codefile), 'w')
    f.writelines(contents)
    f.close()








