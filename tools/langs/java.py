import os
import codecs
import re
import logging
lg = logging.getLogger('schemaparser')

LANG_NAME="Python"

MODULE_TEMPLATE = """
{license}

from pymei import MeiElement

{classes}
"""

MODULE_CLASS_TEMPLATE = """
class {className}_(MeiElement):
    def __init__(self):
        MeiElement.__init__(self, "{className}")
    # <{className}>
"""

LICENSE = """\"\"\"
    Copyright (c) 2011-2013 {authors}

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
\"\"\""""

AUTHORS = "Andrew Hankinson, Alastair Porter, and Others"

def create(schema, outdir):
    lg.debug("Begin Python Output...")

    __create_python_classes(schema, outdir)
    __create_init(schema, outdir)

    lg.debug("Success!")

def __create_python_classes(schema, outdir):
    lg.debug("Creating Python Modules")

    for module, elements in sorted(schema.element_structure.iteritems()):
        if not elements:
            continue
        class_output = ""
        module_output = ""

        for element, atgroups in sorted(elements.iteritems()):
            methstr = {
                "className": element
            }
            class_output += MODULE_CLASS_TEMPLATE.format(**methstr)

        modstr = {
            "classes": class_output,
            "license": LICENSE.format(authors=AUTHORS),
        }
        module_output = MODULE_TEMPLATE.format(**modstr)

        fmi = open(os.path.join(outdir, "{0}.py".format(module.lower())), "w")
        fmi.write(module_output)
        fmi.close()
        lg.debug("\tCreated {0}.py".format(module.lower()))

def __create_init(schema, outdir):
    m = []
    a = []
    p = open(os.path.join(outdir, "__init__.py"), 'w')
    for module, elements in sorted(schema.element_structure.iteritems()):
        a.append('"{0}"'.format(module.lower()))
        m.append("from pymei.Modules.{0} import *\n".format(module.lower()))
    p.write("__all__ = [{0}]\n\n".format(", ".join(a)))
    p.writelines(m)
    p.close()

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
    reg = re.compile(r"# <(?P<elementName>[^>]+)>(.+?)# </(?P=elementName)>", re.MULTILINE|re.DOTALL)
    ret = dict(re.findall(reg, contents))

    # grab the include for the includes...
    reginc = re.compile(r"/\* #include_block \*/(.+?)/\* #include_block \*/", re.MULTILINE|re.DOTALL)
    inc = re.findall(reginc, contents)
    return (ret, inc)

def __parse_codefile(methods, includes, directory, codefile):
    f = open(os.path.join(directory, codefile), 'r')
    contents = f.readlines()
    f.close()
    regmatch = re.compile(r"[\s]+# <(?P<elementName>[^>]+)>", re.MULTILINE|re.DOTALL)
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








