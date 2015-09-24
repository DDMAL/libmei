# -- coding: utf-8 --

# Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter, and Others

# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:

# The above copyright notice and this permission notice shall be
# included in all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
# LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
# OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
# WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

import sys
if sys.version_info < (2, 7):
    raise Exception("requires python 2.7")

from lxml import etree
import os
import shutil
import codecs
import re
from argparse import ArgumentParser
import logging

lg = logging.getLogger('schemaparser')
f = logging.Formatter("%(levelname)s %(asctime)s On Line: %(lineno)d %(message)s")
h = logging.StreamHandler()
h.setFormatter(f)

lg.setLevel(logging.DEBUG)
lg.addHandler(h)

# globals
TEI_NS = {"tei": "http://www.tei-c.org/ns/1.0"}
TEI_RNG_NS = {"tei": "http://www.tei-c.org/ns/1.0", "rng": "http://relaxng.org/ns/structure/1.0"}
NAMESPACES = {'xml': 'http://www.w3.org/XML/1998/namespace',
              'xlink': 'http://www.w3.org/1999/xlink'}


class MeiSchema(object):
    def __init__(self, oddfile):
        parser = etree.XMLParser(resolve_entities=True)
        self.schema = etree.parse(oddfile, parser)
        # self.customization = etree.parse(customization_file)

        self.active_modules = []  # the modules active in the resulting output
        self.element_structure = {}  # the element structure.
        self.attribute_group_structure = {}  # the attribute group structure
        self.inverse_attribute_group_structure = {}  # inverted, so we can map attgroups to modules

        self.get_elements()
        self.get_attribute_groups()
        self.invert_attribute_group_structure()
        self.set_active_modules()

    def get_elements(self):
        elements = [m for m in self.schema.xpath("//tei:elementSpec", namespaces=TEI_NS)]
        for element in elements:
            modname = element.get("module").split(".")[-1]

            if modname not in self.element_structure.keys():
                self.element_structure[modname] = {}

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
                    if attdef.get("ident") == "id":
                        continue
                    attname = self.__process_att(attdef)
                    selfattributes.append(attname)

                self.element_structure[modname][element_name].append(selfattributes)

    def get_attribute_groups(self):
        attribute_groups = [m for m in self.schema.xpath("//tei:classSpec[@type=$at]", at="atts", namespaces=TEI_NS)]
        for group in attribute_groups:
            group_name = group.get("ident")

            if group_name == "att.id":
                continue

            group_module = group.get("module").split(".")[-1]
            attdefs = group.xpath("./tei:attList/tei:attDef", namespaces=TEI_NS)
            if not attdefs:
                continue

            if group_module not in self.attribute_group_structure.keys():
                self.attribute_group_structure[group_module] = {}

            self.attribute_group_structure[group_module][group_name] = []
            for attdef in attdefs:
                if attdef.get("ident") == "id":
                    continue
                attname = self.__process_att(attdef)
                self.attribute_group_structure[group_module][group_name].append(attname)

    def invert_attribute_group_structure(self):
        for module, groups in self.attribute_group_structure.items():
            for attgroup in groups:
                self.inverse_attribute_group_structure[attgroup] = module

    def set_active_modules(self):
        self.active_modules = list(self.element_structure.keys())
        self.active_modules.sort()

    def __process_att(self, attdef):
        attname = ""
        attdefident = attdef.get("ident")
        if "-" in attdefident:
            f, l = attdefident.split("-")
            attdefident = "{0}{1}".format(f, l.title())

        if attdef.get("ns"):
            attname = "{0}|{1}".format(attdef.get("ns"), attdefident)
        elif ":" in attdefident:
            pfx, att = attdefident.split(":")
            attname = "{0}|{1}".format(NAMESPACES[pfx], att)
        else:
            attname = "{0}".format(attdefident)

        return attname

    def __get_membership(self, member, resarr):
        member_attgroup = member.xpath("//tei:classSpec[@type=$att][@ident=$nm]", att="atts", nm=member.get("key"), namespaces=TEI_NS)

        if member_attgroup:
            member_attgroup = member_attgroup[0]
        else:
            return

        if member_attgroup.xpath("./tei:attList/tei:attDef", namespaces=TEI_NS):
            if member_attgroup.get("ident") == "att.id":
                return
            resarr.append(member_attgroup.get("ident"))
        m2s = member_attgroup.xpath("./tei:classes/tei:memberOf", namespaces=TEI_NS)

        if not m2s:
            return

        for mship in m2s:
            self.__get_membership(mship, resarr)

    def strpatt(self, name):
        """ Returns a version of the string with any leading att. stripped. """
        return name.replace("att.", "")

    def strpdot(self, name):
        return "".join([n for n in name.split(".")])

    def cc(self, name):
        """ Returns a CamelCasedName version of attribute.case.names.
        """
        return "".join([n[0].upper() + n[1:] for n in name.split(".")])

    def getattdocs(self, aname):
        """ returns the documentation string for element name, or an empty string if there is none."""
        dsc = self.schema.xpath("//tei:attDef[@ident=$name]/tei:desc/text()", name=aname, namespaces=TEI_NS)
        if dsc:
            return re.sub('[\s\t]+', ' ', dsc[0])  # strip extraneous whitespace
        else:
            return ""

    def geteldocs(self, ename):
        dsc = self.schema.xpath("//tei:elementSpec[@ident=$name]/tei:desc/text()", name=ename, namespaces=TEI_NS)
        if dsc:
            return re.sub('[\s\t]+', ' ', dsc[0])  # strip extraneous whitespace
        else:
            return ""


if __name__ == "__main__":
    p = ArgumentParser(usage='%(prog)s [compiled | -sl] [-h] [-o OUTDIR] [-i INCLUDES] [-d] [-l [LANG [LANG ...]]]') #Custom usage message to show user [compiled] should go before all other flags 
    exclusive_group = p.add_mutually_exclusive_group()
    exclusive_group.add_argument("compiled", help="A compiled ODD file", nargs="?") # Due to nargs="?", "compiled" will appear as optional and not positional
    p.add_argument("-o", "--outdir", default="output", help="output directory")
    p.add_argument("-l", "--lang", default=["python"], help="Programming language or languages to output. To output multiple languages at once, list desired languages separated by a space after -l. For example: python parseschema2.py [compiled] -l python cpp", nargs="*")
    p.add_argument("-i", "--includes", help="Parse external includes from a given directory")
    p.add_argument("-d", "--debugging", help="Run with verbose output", action="store_true")
    exclusive_group.add_argument("-sl", "--showlang", help="Show languages and exit.", action="store_true")

    args = p.parse_args()

    if not args.showlang and not args.compiled:
        p.print_usage()
        print("error: You must include a compiled ODD file")
        sys.exit(1)

    avail_langs = ["cpp", "python", "manuscript"]
    
    if not args.lang == "python":
        for l_langs in args.lang:
            if l_langs.lower() not in avail_langs:
                p.print_usage()
                print("error: One or more of the languages you have chosen are not supported. To check supported languages use the -sl flag")
                sys.exit(1)

    if args.showlang:
        import langs
        print("Available Output Languages")
        for l in langs.AVAILABLE_LANGS:
            print("\t{0}".format(l))
        sys.exit(0)

    compiled_odd = args.compiled

    mei_source = codecs.open(compiled_odd, 'r', 'utf-8')
    # sf = codecs.open(args.source,'r', "utf-8")
    # cf = codecs.open(args.customization, 'r', "utf-8")
    outdir = args.outdir

    if not os.path.exists(args.outdir):
        os.mkdir(args.outdir)

    schema = MeiSchema(mei_source)

    for l_langs in args.lang:
        if "cpp" in l_langs.lower():
            import langs.cplusplus as cpp
            output_directory = os.path.join(outdir, "cpp")
            if os.path.exists(output_directory):
                lg.debug("Removing old C++ output directory")
                shutil.rmtree(output_directory)
            os.mkdir(output_directory)
            cpp.create(schema, output_directory)
            if args.includes:
                cpp.parse_includes(output_directory, args.includes)

        if "python" in l_langs.lower():
            import langs.python as py
            output_directory = os.path.join(outdir, "python")
            if os.path.exists(output_directory):
                lg.debug("Removing old Python output directory")
                shutil.rmtree(output_directory)
            os.mkdir(output_directory)
            py.create(schema, output_directory)
            if args.includes:
                py.parse_includes(output_directory, args.includes)

        if "manuscript" in l_langs.lower():
            import langs.manuscript as ms
            output_directory = os.path.join(outdir, "manuscript")
            if os.path.exists(output_directory):
                lg.debug("Removing old Manuscript output directory")
                shutil.rmtree(output_directory)
            os.mkdir(output_directory)
            ms.create(schema, output_directory)

    if "java" in args.lang:
        import langs.java as java
        output_directory = os.path.join(outdir, "java")
        if os.path.exists(output_directory):
            lg.debug("Removing old Java output directory")
            shutil.rmtree(output_directory)
        os.mkdir(output_directory)
        java.create(schema, output_directory)
        if args.includes:
            java.parse_includes(output_directory, args.includes)

    mei_source.close()

    sys.exit(0)
