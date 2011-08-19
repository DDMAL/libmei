# -- coding: utf-8 --

import sys
if sys.version_info < (2, 7):
    raise Exception("requires python 2.7")

from lxml import etree
import os
import textwrap
import string
import codecs
import re

from argparse import ArgumentParser

import pdb

import logging
lg = logging.getLogger('schemaparser')
f = logging.Formatter("%(levelname)s %(asctime)s On Line: %(lineno)d %(message)s")
h = logging.StreamHandler()
h.setFormatter(f)

lg.setLevel(logging.DEBUG)
lg.addHandler(h)

# globals
TEI_NS = {"tei":"http://www.tei-c.org/ns/1.0"}
TEI_RNG_NS = {"tei":"http://www.tei-c.org/ns/1.0","rng":"http://relaxng.org/ns/structure/1.0"}

class MeiSchema(object):
    def __init__(self, schema_file, customization_file, outdir):
        self.schema = etree.parse(schema_file)
        self.customization = etree.parse(customization_file)
        self.outdir = outdir
        
        self.active_modules = []
        self.element_structure = {} # the element structure.
        self.attribute_group_structure = {} # the attribute group structure
        self.inverse_attribute_group_structure = {} # inverted, so we can map attgroups to modules
        
        self.set_active_modules()
        self.get_elements()
        self.get_attribute_groups()
        self.invert_attribute_group_structure()
        
        # pdb.set_trace()
    
    def get_elements(self):
        elements = [m for m in self.schema.xpath("//tei:elementSpec", namespaces=TEI_NS) if self.__get_is_active(m)]
        for element in elements:
            modname = element.get("module").split(".")[-1]
            element_name = element.get("ident")
            memberships = []
            
            element_membership = element.xpath("./tei:classes/tei:memberOf", namespaces=TEI_NS)
            for member in element_membership:
                if member.get("key").split(".")[0] != "att":
                    # skip the models that this element might be a member of
                    continue
                self.__get_membership(member, memberships)
            
            # memberships.kesort()
            self.element_structure[modname][element_name] = memberships
            
            # need a way to keep self-defined attributes:
            selfattributes = []
            attdefs = element.xpath("./tei:attList/tei:attDef", namespaces=TEI_NS)
            if attdefs:
                for attdef in attdefs:
                    selfattributes.append(attdef.get("ident"))
                self.element_structure[modname][element_name].append(selfattributes)
            
    
    def get_attribute_groups(self):
        attribute_groups = [m for m in self.schema.xpath("//tei:classSpec[@type=$at]", at="atts", namespaces=TEI_NS) if self.__get_is_active(m)]
        for group in attribute_groups:
            group_name = group.get("ident")
            group_module = group.get("module").split(".")[-1]
            attdefs = group.xpath("./tei:attList/tei:attDef", namespaces=TEI_NS)
            if not attdefs:
                continue
            
            self.attribute_group_structure[group_module][group_name] = []
            for attdef in attdefs:
                self.attribute_group_structure[group_module][group_name].append(attdef.get("ident"))
    
    def invert_attribute_group_structure(self):
        for module,groups in self.attribute_group_structure.iteritems():
            for attgroup in groups:
                self.inverse_attribute_group_structure[attgroup] = module
    
    def set_active_modules(self):
        modules = [m for m in self.customization.xpath("//tei:moduleRef", namespaces=TEI_NS)]
        for module in modules:
            mname = module.get("key").split(".")[-1]
            if mname == "MEI":
                continue
                
            if mname not in self.active_modules:
                self.active_modules.append(mname)
            
            if mname not in self.element_structure.keys():
                self.element_structure[mname] = {}
                
            if mname not in self.attribute_group_structure.keys():
                self.attribute_group_structure[mname] = {}
        
        self.active_modules.sort()
    
    def __get_membership(self, member, resarr):
        member_attgroup = member.xpath("//tei:classSpec[@type=$att][@ident=$nm]", att="atts", nm=member.get("key"), namespaces=TEI_NS)[0]
        
        if member_attgroup.xpath("./tei:attList/tei:attDef", namespaces=TEI_NS):
            resarr.append(member_attgroup.get("ident"))
        m2s = member_attgroup.xpath("./tei:classes/tei:memberOf", namespaces=TEI_NS)
        
        if not m2s:
            return
            
        for mship in m2s:
            self.__get_membership(mship, resarr)
    
    def __get_is_active(self, el):
        # gets whether or not the thing is in the active modules list.
        return el.get("module").split(".")[-1] in self.active_modules
    
    def strpatt(self, name):
        """ Returns a version of the string with any leading att. stripped. """
        return name.replace("att.", "")
    
    def strpdot(self, name):
        return "".join([n for n in name.split(".")])
    
    def cc(self, name):
        """ Returns a CamelCasedName version of attribute.case.names.
        """
        return "".join([n.capitalize() for n in name.split(".")])
    
    def getattdocs(self, aname):
        """ returns the documentation string for element name, or an empty string if there is none."""
        dsc = self.schema.xpath("//tei:attDef[@ident=$name]/tei:desc/text()", name=aname, namespaces=TEI_NS)
        if dsc:
            return re.sub('[\s\t]+', ' ', dsc[0]) # strip extraneous whitespace
        else:
            return ""
    
    def geteldocs(self, ename):
        dsc = self.schema.xpath("//tei:elementSpec[@ident=$name]/tei:desc/text()", name=ename, namespaces=TEI_NS)
        if dsc:
            return re.sub('[\s\t]+', ' ', dsc[0]) # strip extraneous whitespace
        else:
            return ""
    

if __name__ == "__main__":
    p = ArgumentParser()
    
    output_group = p.add_mutually_exclusive_group()
    lang_group = p.add_mutually_exclusive_group()
    
    p.add_argument("-s", "--source", help="MEI Source file")
    p.add_argument("-c", "--customization", help="MEI Customization File")
    p.add_argument("-o", "--outdir", help="output directory")
    p.add_argument("-l", "--lang", help="Programming language to output", action="store")
    p.add_argument("-g", "--generate", help="Generate an accompanying MEI RNG Schema (must have Roma installed)", action="store")
    p.add_argument("-d", "--debugging", help="Run with verbose output", action="store")
    
    p.add_argument("-sl", "--showlang", help="Show languages and exit.", action="store_true")
    
    args = p.parse_args()
    
    if args.showlang:
        import langs
        print "Available Output Languages"
        for l in langs.AVAILABLE_LANGS:
            print "\t{0}".format(l)
        sys.exit(0)
    
    sf = codecs.open(args.source,'r', "utf-8")
    cf = codecs.open(args.customization, 'r', "utf-8")
    
    if not os.path.exists(args.outdir):
        os.mkdir(args.outdir)
    
    schema = MeiSchema(sf, cf, args.outdir)
    import langs.cplusplus as cpp
    cpp.create(schema)
    
    sf.close()
    cf.close()