 # -- coding: utf-8 --

import os
import re
import codecs
import textwrap
import logging
import types
lg = logging.getLogger('schemaparser')
import pdb

import yaml

LANG_NAME="C++"

NS_PREFIX_MAP = {
    "http://www.w3.org/XML/1998/namespace": "xml",
    "http://www.w3.org/1999/xlink": "xlink"
}

AUTHORS = "Andrew Hankinson, Alastair Porter, and Others"

METHODS_HEADER_TEMPLATE = """    void Set{attNameUpper}({attType} {attNameLowerJoined}{attTypeName}_) {{ m_{attNameLowerJoined}{attTypeName} = {attNameLowerJoined}{attTypeName}_; }};
    {attType} Get{attNameUpper}() const {{ return m_{attNameLowerJoined}{attTypeName}; }};    
    bool Has{attNameUpper}( );
    """

MEMBERS_HEADER_TEMPLATE = """{documentation}
    {attType} m_{attNameLowerJoined}{attTypeName};
"""

DEFAULTS_IMPL_TEMPLATE = """m_{attNameLowerJoined}{attTypeName} = {attDefault};"""
    
READS_IMPL_TEMPLATE = """if (element.attribute("{attNameLower}")) {{
        this->Set{attNameUpper}({converterRead}(element.attribute("{attNameLower}").value()));
        hasAttribute = true;
    }}"""
    
WRITES_IMPL_TEMPLATE = """if (this->Has{attNameUpper}()) {{
        element.append_attribute("{attNameLower}") = {converterWrite}(this->Get{attNameUpper}()).c_str();
        wroteAttribute = true;
    }}"""
    
CHECKERS_IMPL_TEMPLATE = """bool Att{attGroupNameUpper}::Has{attNameUpper}( )
{{
    return (m_{attNameLowerJoined}{attTypeName} != {attDefault});
}}

"""

NAMESPACE_TEMPLATE = """MeiNamespace *s = new MeiNamespace("{prefix}", "{href}");\n    """

CLASSES_IMPL_TEMPLATE = """{license}

#include "{moduleNameLower}.h"

//----------------------------------------------------------------------------

/* #include_block */

namespace vrv {{
    
{elements}

}} // vrv namespace

"""

CLASSES_HEAD_TEMPLATE = """{license}

#ifndef __VRV_{moduleNameCaps}_H__
#define __VRV_{moduleNameCaps}_H__

#include "att.h"
#include "pugixml.hpp"

//----------------------------------------------------------------------------

{includes}

namespace vrv {{
    
{elements}

}} // vrv namespace

#endif  // __VRV_{moduleNameCaps}_H__

"""

MIXIN_CLASS_HEAD_TEMPLATE = """
//----------------------------------------------------------------------------
// Att{attGroupNameUpper}
//----------------------------------------------------------------------------

class Att{attGroupNameUpper}: public Att
{{
public:
    Att{attGroupNameUpper}();
    virtual ~Att{attGroupNameUpper}();
    
    /** Reset the default values for the attribute class **/
    void Reset{attGroupNameUpper}();
    
    /** Read the values for the attribute class **/
    bool Read{attGroupNameUpper}( pugi::xml_node element );
    
    /** Write the values for the attribute class **/
    bool Write{attGroupNameUpper}( pugi::xml_node element );
    
    /**
     * @name Setters, getters and presence checker for class members.
     * The checker returns true if the attribute class is set (e.g., not equal 
     * to the default value)
     **/
    ///@{{
{methods}
    ///@}}

protected:
{members}
/* include <{attNameLower}> */
}};
"""

MIXIN_CLASS_IMPL_CONS_TEMPLATE = """
//----------------------------------------------------------------------------
// Att{attGroupNameUpper}
//----------------------------------------------------------------------------

Att{attGroupNameUpper}::Att{attGroupNameUpper}(): Att() {{
    Reset{attGroupNameUpper}();
}}

Att{attGroupNameUpper}::~Att{attGroupNameUpper}() {{

}}

void Att{attGroupNameUpper}::Reset{attGroupNameUpper}() {{
    {defaults}
}}

bool Att{attGroupNameUpper}::Read{attGroupNameUpper}(  pugi::xml_node element ) {{
    bool hasAttribute = false;
    {reads}
    return hasAttribute;
}}

bool Att{attGroupNameUpper}::Write{attGroupNameUpper}(  pugi::xml_node element ) {{
    bool wroteAttribute = false;
    {writes}
    return wroteAttribute;
}}

{checkers}
/* include <{attNameLower}> */
"""

ELEMENT_MIXIN_TEMPLATE = """        {attNameUpper}MixIn    m_{attNameUpper};
"""

LICENSE = """/////////////////////////////////////////////////////////////////////////////
// Authors:     Laurent Pugin and Rodolfo Zitellini
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei 
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////// 
// NOTE: this file was generated with the Verovio libmei version and 
// should not be edited because changes will be lost.
/////////////////////////////////////////////////////////////////////////////"""

def vrv_member_cc(name):
    cc = "".join([n[0].upper() + n[1:] for n in name.split(".")])
    return cc[0].lower() + cc[1:]
    
def vrv_member_cc_upper(name):
    return "".join([n[0].upper() + n[1:] for n in name.split(".")])
 
# globals
TEI_NS = {"tei": "http://www.tei-c.org/ns/1.0", "rng": "http://relaxng.org/ns/structure/1.0"}

def vrv_load_config(includes_dir):
    """ Load the vrv attribute overrides into CONFIG."""
    global CONFIG
    
    if not includes_dir:
        return
        
    config = os.path.join(includes_dir, "config.yml")
    if not os.path.isfile(config):
        return
    
    f = open(config, "r")
    CONFIG = yaml.load(f)
    f.close()
    
def vrv_get_att_config(module, att):
    if not module in CONFIG["modules"] or not att in CONFIG["modules"][module]["attributes"]:
        return None
    return CONFIG["modules"][module]["attributes"][att]
    
def vrv_get_type_config(type):
    if not type in CONFIG["defaults"]:
        return None
    return CONFIG["defaults"][type]

def vrv_translatetype(module, att):
    """ Get the type override for an attribute in module."""
    att_config = vrv_get_att_config(module, att)
    if att_config is None:
        return None, ""
        
    att = att_config["type"]
    return (att, "")
    
def vrv_translatedefault(type, module, att):
    """ Get the type default value."""
    # nothing in the defaults
    type_config = vrv_get_type_config(type)
    # nothing in the defaults
    if type_config is None or not "default" in type_config:
        return None

    att_config = vrv_get_att_config(module, att)
    # nothing in the module/att
    if att_config is None or "default" not in att_config:
        return type_config["default"]
       
    # return the module/att default 
    return att_config["default"]

def vrv_translateconverters(type, module, att):
    """ Get the type default converters."""
    default_converters = ["StrTo{0}".format(vrv_member_cc_upper(att)), "{0}ToStr".format(vrv_member_cc_upper(att))]
    type_config = vrv_get_type_config(type)
    # nothing in the defaults
    if type_config is None or not "converters" in type_config:
         return default_converters

    att_config = vrv_get_att_config(module, att)
    # nothing in the module/att
    if att_config is None or "converters" not in att_config:
        return type_config["converters"]
       
    # return the module/att default 
    return att_config["converters"]

def vrv_getatttype(schema, module, aname, includes_dir = ""):   
    """ returns the attribut type for element name, or string if not detectable."""
    
    # Look up if there is an override for this type in the current module, and return it
    # Note that we do not honor pseudo-hungarian notation
    attype, hungarian = vrv_translatetype(module, aname)
    if attype:
        return (attype, hungarian)
    
    # No override, get it from the stylesheet
    el = schema.xpath("//tei:attDef[@ident=$name]/tei:datatype/rng:data/@type", name=aname, namespaces=TEI_NS)
    if el:
        if el[0] == "nonNegativeInteger" or el[0] == "positiveInteger":
            return ("int", "Int")
        elif el[0] == "decimal":
            return ("double", "Dbl")
    return ("std::string", "")

def vrv_getattdefault(schema, module, aname, includes_dir = ""):        
    """ returns the attribut default value for element name, or string if not detectable."""
    
    attype, hungarian = vrv_translatetype(module, aname)
    if attype:
        default = vrv_translatedefault(attype, module, aname)
        converters = vrv_translateconverters(attype, module, aname)
        if default is not None:
            return (default, "", converters)
    
    el = schema.xpath("//tei:attDef[@ident=$name]/tei:datatype/rng:data/@type", name=aname, namespaces=TEI_NS)
    if el:
        if el[0] == "nonNegativeInteger" or el[0] == "positiveInteger":
            return ("0", "Int", ["StrToInt", "IntToStr"])
        elif el[0] == "decimal":
            return ("0.0", "Dbl", ["StrToDbl", "DblToStr"])
    return ("\"\"", "", ["StrToStr", "StrToStr"])

def create(schema, outdir, includes_dir = ""):
    lg.debug("Begin Verovio C++ Output ... ")
    
    vrv_load_config(includes_dir)
    __create_att_classes(schema, outdir, includes_dir)
    
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

def __create_att_classes(schema, outdir, includes_dir):
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
                atttype, atttypename = vrv_getatttype(schema.schema, module, att, includes_dir)
                docstr = __get_docstr(schema.getattdocs(att), indent=4)
                substrings = {
                    "attNameUpper": schema.cc(schema.strpatt(att)),
                    "attNameLower": att,
                    "attNameLowerJoined": vrv_member_cc(att),
                    "documentation": docstr,
                    "attType": atttype,
                    "attTypeName": atttypename,
                }
                if len(methods) > 0:
                    methods += "\n    //\n"
                methods += METHODS_HEADER_TEMPLATE.format(**substrings)
                members += MEMBERS_HEADER_TEMPLATE.format(**substrings)
                
            clsubstr = {
                "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                "methods": methods,
                "members": members,
                "attNameLower": "att{0}".format(att)
            }
            classes += MIXIN_CLASS_HEAD_TEMPLATE.format(**clsubstr)
        
        tplvars = {
            "includes": "",
            'license': LICENSE.format(authors=AUTHORS),
            'moduleNameCaps': "ATTS_{0}".format(module.upper()),
            'elements': classes.strip()
        }
        if "std::string" in classes:
            tplvars["includes"] = "#include <string>"
        fullout = CLASSES_HEAD_TEMPLATE.format(**tplvars)
        fmh = open(os.path.join(outdir, "atts_{0}.h".format(module.lower())), 'w')
        fmh.write(fullout)
        fmh.close()
        lg.debug("\tCreated atts_{0}.h".format(module.lower()))
        
        
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
            defaults = ""
            reads = ""
            writes = ""
            checkers = ""
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
                attdefault, atttypename, converters = vrv_getattdefault(schema.schema, module, att, includes_dir)
                
                attsubstr = {
                    "className": "{0}MixIn".format(schema.cc(schema.strpatt(gp))),
                    "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                    "attNameUpper": schema.cc(att),
                    "attNameLower": att,
                    "attNameLowerJoined": vrv_member_cc(att),
                    "attDefault": attdefault,
                    "attTypeName": atttypename,
                    "converterRead": converters[0],
                    "converterWrite": converters[1]
                }
                if len(defaults) > 0:
                    defaults += "\n    "
                    reads += "\n    "
                    writes += "\n    "
                defaults += DEFAULTS_IMPL_TEMPLATE.format(**attsubstr)
                reads += READS_IMPL_TEMPLATE.format(**attsubstr)
                writes += WRITES_IMPL_TEMPLATE.format(**attsubstr)
                checkers += CHECKERS_IMPL_TEMPLATE.format(**attsubstr)
            
            clsubstr = {
                "attGroupNameUpper": schema.cc(schema.strpatt(gp)),
                "defaults": defaults,
                "reads": reads,
                "writes": writes,
                "checkers": checkers,
                "attNameLower": "att{0}".format(att)
            }
            classes += MIXIN_CLASS_IMPL_CONS_TEMPLATE.format(**clsubstr)
            
        tplvars = {
            "license": LICENSE.format(authors=AUTHORS),
            "moduleNameLower": "atts_{0}".format(module.lower()),
            "elements": classes.strip()
        }
        fullout = CLASSES_IMPL_TEMPLATE.format(**tplvars)
        fmi = open(os.path.join(outdir, "atts_{0}.cpp".format(module.lower())), 'w')
        fmi.write(fullout)
        fmi.close()
        lg.debug("\tCreated atts_{0}.cpp".format(module.lower()))

def parse_includes(file_dir, includes_dir):
    lg.debug("Parsing includes")

    # get the files in the includes directory
    includes = [f for f in os.listdir(includes_dir) if not f.startswith(".") and f.endswith(".inc")]
    # currently unused, see below comment in __copy_codefile
    # copies = [f for f in os.listdir(includes_dir) if f.endswith(".copy")]

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
                contents[i] = methods[match.group("elementName")].lstrip("\n")
    
    f = open(os.path.join(directory, codefile), 'w')
    f.writelines(contents)
    f.close()
    
    
def __copy_codefile(directory, codefile):  
    # att.h, att_defs.h and att.cpp are required.
    # These are the only files to be edited by hand.
    # For now they are in the Verovio codebase because this makes it easier to edit the files.
    # eventually, we might want to have them in the libmei include dir and use this function to
    # copy them in the output directory
    print "Todo"
    
